#include "powermonitor.h"
#include <qtwidgets>
#include <qlist>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>

#include <QFile>
#include <QApplication>

class CommonHelper
{
public:
    static void setStyle(const QString &style) {
        QFile qss(style);
        qss.open(QFile::ReadOnly);
        qApp->setStyleSheet(qss.readAll());
        qss.close();
    }
};

class TimeScaleDraw: public QwtScaleDraw
{
public:
    TimeScaleDraw( const QTime &base ):
        baseTime( base )
    {
    }
    virtual QwtText label( double v ) const
    {
        QTime upTime = baseTime.addMSecs( static_cast<int>( v ) );
        return upTime.toString("hh:mm:ss");
    }
private:
    QTime baseTime;
};

PowerMonitor::PowerMonitor(QWidget *parent):
    QWidget(parent),
    ui(new Ui::PowerMonitor)
{
    ui->setupUi(this);

    resize(800,320);
    ui->checkBox->setChecked(false);
    ui->checkBox_2->setChecked(false);
    ui->checkBox_3->setChecked(false);
    ui->checkBox_4->setChecked(false);
    ui->checkBox_5->setChecked(false);
    ui->checkBox_6->setChecked(false);

    ui->tableWidget->setRowCount(10);
    ui->tableWidget->setColumnCount(7);
    ui->tableWidget->setItem(0,0,new QTableWidgetItem(tr("序号")));
    ui->tableWidget->setItem(0,1,new QTableWidgetItem(tr("A相电压")));
    ui->tableWidget->setItem(0,2,new QTableWidgetItem(tr("B相电压")));
    ui->tableWidget->setItem(0,3,new QTableWidgetItem(tr("总功率")));
    ui->tableWidget->setItem(0,4,new QTableWidgetItem(tr("总功率因数")));
    ui->tableWidget->setItem(0,5,new QTableWidgetItem(tr("状态")));
    ui->tableWidget->setItem(0,6,new QTableWidgetItem(tr("时间")));

//    ui->pushButton->set

//    ui->radioButton->setAutoExclusive(false);
//    ui->radioButton_2->setAutoExclusive(false);
//    ui->radioButton_3->setAutoExclusive(false);
//    ui->radioButton_4->setAutoExclusive(false);
//    ui->radioButton_5->setAutoExclusive(false);
//    ui->radioButton_6->setAutoExclusive(false);
//    ui->radioButton_7->setAutoExclusive(false);
//    ui->radioButton_8->setAutoExclusive(false);
//    ui->radioButton->setChecked(true);
//    ui->radioButton_3->setChecked(true);
//    ui->radioButton_5->setChecked(true);
//    ui->radioButton_7->setChecked(true);

    ui->slider->setRange(10,100);
    ui->slider->setValue(60);
    ui->slider->setTickPosition(QSlider::TicksAbove);
    ui->slider->setTickInterval(5);
    ui->slider->setTracking(false);

    ui->slider_2->setRange(-10,10);
    ui->slider_2->setValue(0);
    ui->slider_2->setTickPosition(QSlider::TicksLeft);
    ui->slider_2->setTracking(false);

    QwtPlotCanvas *canvas = new QwtPlotCanvas();
    canvas->setBorderRadius( 10 );
    ui->plot->setCanvas( canvas );
    ui->plot->plotLayout()->setAlignCanvasToScales( true );
//    QwtLegend *legend = new QwtLegend;
//    legend->setDefaultItemMode( QwtLegendData::Checkable );
//    ui->plot->insertLegend( legend, QwtPlot::RightLegend );
    QwtPlotGrid* grid = new QwtPlotGrid;
    grid->attach(ui->plot);

    ui->plot->setCanvasBackground(Qt::white);
    ui->plot->setAxisAutoScale(QwtPlot::yLeft);
    ui->plot->setAxisAutoScale(QwtPlot::xBottom);
    ui->plot->setAutoReplot(false);
    ui->plot->setAxisScaleDraw(QwtPlot::xBottom, new TimeScaleDraw(QTime::currentTime()));
    ui->plot->setAxisLabelRotation( QwtPlot::xBottom, -50.0 );
    ui->plot->setAxisLabelAlignment( QwtPlot::xBottom, Qt::AlignLeft | Qt::AlignBottom );

    pt = t;
    for (int i=0;i<NUM;i++)
    {
        channel[i].pStart = channel[i].data;
        channel[i].curve = new QwtPlotCurve;
        channel[i].curve->setStyle(QwtPlotCurve::Lines);
//        channel[i].curve->setPen(Qt::blue,2);
//        channel[i].curve->setCurveAttribute(QwtPlotCurve::Fitted);
        channel[i].curve->setRawSamples(t, channel[i].data, count);
    }
    channel[0].curve->setPen(Qt::blue,2);
    channel[1].curve->setPen(Qt::red,2);
    channel[2].curve->setPen(Qt::yellow,2);
    channel[3].curve->setPen(Qt::green,2);

    ui->comboBox_2->setCurrentIndex(3);
    ui->comboBox_3->setCurrentIndex(0);
    ui->comboBox_4->setCurrentIndex(0);
    ui->comboBox_5->setCurrentIndex(0);

    int num = 0;
    hasPort = false;
    foreach (const QSerialPortInfo& info, QSerialPortInfo::availablePorts())
    {
        QSerialPort p;
        p.setPort(info);
        if (p.open(QIODevice::ReadWrite))
        {
            num++;
//            ui->comboBox->addItem(info.portName());
            ui->textEdit->append(info.portName());
//            ui->textEdit->append(info.description());
//            ui->textEdit->append(info.manufacturer());
            p.close();
        }
    }
    if (num > 0)
    {
        hasPort = true;
        qDebug()<<"检测到"<<num<<"个串口";
        ui->textEdit->append(tr("检测到%1个串口。").arg(num));
    }
    else
    {
        ui->textEdit->setText(tr("没有检测到串口！"));
    }

//    connect(&channel[0].port,&QSerialPort::readyRead, this, &PowerMonitor::handleReadyRead0);
//    connect(&channel[1].port,&QSerialPort::readyRead, this, &PowerMonitor::handleReadyRead1);
//    connect(&channel[2].port,&QSerialPort::readyRead, this, &PowerMonitor::handleReadyRead2);
//    connect(&channel[3].port,&QSerialPort::readyRead, this, &PowerMonitor::handleReadyRead3);
    connect(&timer, &QTimer::timeout, this, &handleTimeout);

    count = 0;
    disNum = 60;
    msec = 1000;
//    timer.start(msec);
    time.start();

//    QPalette bgpal = palette();
//    bgpal.setColor (QPalette::Background, QColor (0, 0 , 0, 255));
//    bgpal.setColor (QPalette::Foreground, QColor (255,255,255,255));
//    setPalette (bgpal);

//    ui->pushButton->setStyleSheet("border:2px groove gray;border-radius:10px;padding:2px 4px;");
//    ui->pushButton_2->setStyleSheet("border:2px groove gray;border-radius:10px;padding:2px 4px;");
//    ui->pushButton_3->setStyleSheet("border:2px groove gray;border-radius:10px;padding:2px 4px;");
//    ui->pushButton_4->setStyleSheet("border:2px groove gray;border-radius:10px;padding:2px 4px;");

    CommonHelper::setStyle(":/qss/black.qss");

//    setStyleSheet ("border:2px groove gray;border-radius:10px;padding:2px 4px;");
//this->setStyleSheet("QWidget{border-top-left-radius:5px;border-top-right-radius:5px;}");

}

PowerMonitor::~PowerMonitor()
{
    delete ui;
}

void PowerMonitor::on_pushButton_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    ui->pushButton_4->setEnabled(false);
    ui->pushButton->setEnabled(true);
    ui->pushButton_2->setEnabled(true);
    ui->pushButton_3->setEnabled(true);
}

void PowerMonitor::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    ui->pushButton->setEnabled(false);
    ui->pushButton_4->setEnabled(true);
    ui->pushButton_2->setEnabled(true);
    ui->pushButton_3->setEnabled(true);
}

void PowerMonitor::on_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    ui->pushButton_3->setEnabled(false);
    ui->pushButton->setEnabled(true);
    ui->pushButton_2->setEnabled(true);
    ui->pushButton_4->setEnabled(true);
}

void PowerMonitor::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
    ui->pushButton_2->setEnabled(false);
    ui->pushButton->setEnabled(true);
    ui->pushButton_4->setEnabled(true);
    ui->pushButton_3->setEnabled(true);
}

void PowerMonitor::handleTimeout()
{
    char data[2];
    for (int i=0;i<NUM;i++)
    {
        channel[i].port.read(data,2);
        ushort* a = (ushort*)data;
        channel[i].data[count] = *a;
    //    QString s =QString::number(*a);
    //    ui->lineEdit->setText(s);
    }
    t[count] = time.elapsed();
    count ++;
    timer.start(msec);
    updateValue();
    updatePlot();
    printTable();
}


void PowerMonitor::on_pushButton_5_clicked()
{
    if (!hasPort)
    {
        qDebug()<<"没有检测到串口！";
        ui->textEdit->append(tr("没有检测到串口！"));
        return;
    }
    if (ui->pushButton_5->text() == tr("打开串口"))
    {
        timer.start(msec);
//        time.start();
        ui->pushButton_5->setText(tr("关闭串口"));
        channel[0].port.setPortName("COM1");
        channel[1].port.setPortName(tr("COM3"));
        channel[2].port.setPortName(tr("COM5"));
        channel[3].port.setPortName(tr("COM7"));

        switch (ui->comboBox_3->currentIndex())
        {
        case 0:
            channel[0].port.setParity(QSerialPort::NoParity);
            channel[1].port.setParity(QSerialPort::NoParity);
            channel[2].port.setParity(QSerialPort::NoParity);
            channel[3].port.setParity(QSerialPort::NoParity);
            break;
        case 1:
            channel[0].port.setParity(QSerialPort::OddParity);
            channel[1].port.setParity(QSerialPort::OddParity);
            channel[2].port.setParity(QSerialPort::OddParity);
            channel[3].port.setParity(QSerialPort::OddParity);
            break;
        case 2:
            channel[0].port.setParity(QSerialPort::EvenParity);
            channel[1].port.setParity(QSerialPort::EvenParity);
            channel[2].port.setParity(QSerialPort::EvenParity);
            channel[3].port.setParity(QSerialPort::EvenParity);
            break;
        }

        if (!channel[0].port.open(QIODevice::ReadOnly))
        {
            qDebug()<<"com1 not open!";
            ui->textEdit->append(tr("com1 not open!"));
        }
        if (!channel[1].port.open(QIODevice::ReadOnly))
        {
            qDebug()<<"com3 not open!";
            ui->textEdit->append(tr("com3 not open!"));
        }
        if (!channel[2].port.open(QIODevice::ReadOnly))
        {
            qDebug()<<"com5 not open!";
            ui->textEdit->append(tr("com5 not open!"));
        }
        if (!channel[3].port.open(QIODevice::ReadOnly))
        {
            qDebug()<<"com7 not open!";
            ui->textEdit->append(tr("com7 not open!"));
        }

    //    ui->pushButton_5->setEnabled(false);
//        ui->comboBox->setEnabled(false);
        ui->comboBox_2->setEnabled(false);
        ui->comboBox_3->setEnabled(false);
        ui->comboBox_4->setEnabled(false);
        ui->comboBox_5->setEnabled(false);
    }
    else
    {
        timer.stop();
        ui->pushButton_5->setText(tr("打开串口"));
        channel[0].port.close();
        channel[1].port.close();
        channel[2].port.close();
        channel[3].port.close();
//        ui->comboBox->setEnabled(true);
        ui->comboBox_2->setEnabled(true);
        ui->comboBox_3->setEnabled(true);
        ui->comboBox_4->setEnabled(true);
        ui->comboBox_5->setEnabled(true);
    }
}

void PowerMonitor::updateValue()
{
    ui->lineEdit->setText(QString::number(channel[0].data[count-1]));
    ui->lineEdit_2->setText(QString::number(channel[0].data[count-1]));
    ui->lineEdit_3->setText(QString::number(channel[0].data[count-1]));
    ui->lineEdit_4->setText(QString::number(channel[1].data[count-1]));
    ui->lineEdit_5->setText(QString::number(channel[1].data[count-1]));
    ui->lineEdit_6->setText(QString::number(channel[1].data[count-1]));
    ui->lineEdit_7->setText(QString::number(channel[2].data[count-1]));
    ui->lineEdit_8->setText(QString::number(channel[2].data[count-1]));
    ui->lineEdit_9->setText(QString::number(channel[2].data[count-1]));
    ui->lineEdit_10->setText(QString::number(channel[3].data[count-1]));
    ui->lineEdit_11->setText(QString::number(channel[3].data[count-1]));
    ui->lineEdit_12->setText(QString::number(channel[3].data[count-1]));
    ui->lineEdit_18->setText(QString::number(channel[3].data[count-1]));
    ui->lineEdit_19->setText(QString::number(channel[3].data[count-1]));
    ui->lineEdit_20->setText(QString::number(channel[3].data[count-1]));
    ui->lineEdit_22->setText(QString::number(channel[3].data[count-1]));
    ui->lineEdit_23->setText(QString::number(channel[3].data[count-1]));
    ui->lineEdit_24->setText(QString::number(channel[3].data[count-1]));
}

void PowerMonitor::updatePlot()
{
    if (count >= disNum)
    {
         for (int i=0;i<NUM;i++)
         {
            channel[i].pStart = channel[i].data+count-disNum;
         }
         pt = t+count-disNum;
    }
    else
    {
        for (int i=0;i<NUM;i++)
        {
           channel[i].pStart = channel[i].data;
        }
        pt = t;
    }

    for (int i=0;i<NUM;i++)
    {

        channel[i].curve->setRawSamples(pt, channel[i].pStart,count < disNum ? count : disNum);
    }
    ui->plot->replot();
}

void PowerMonitor::printTable()
{
    ui->tableWidget->insertRow(1);
    ui->tableWidget->setItem(1,0,new QTableWidgetItem(QString::number((count))));
    ui->tableWidget->setItem(1,1,new QTableWidgetItem(QString::number(channel[0].data[count-1])));
    ui->tableWidget->setItem(1,2,new QTableWidgetItem(QString::number(channel[1].data[count-1])));
    ui->tableWidget->setItem(1,3,new QTableWidgetItem(QString::number(channel[2].data[count-1])));
    ui->tableWidget->setItem(1,4,new QTableWidgetItem(QString::number(channel[3].data[count-1])));
    ui->tableWidget->setItem(1,5,new QTableWidgetItem(tr("正常")));
    QString tt = QDate::currentDate().toString("yyyy.MM.dd") +" "+ QTime::currentTime().toString("hh:mm:ss");
    ui->tableWidget->setItem(1,6,new QTableWidgetItem(tt));
}

void PowerMonitor::on_checkBox_stateChanged(int arg1)
{
    if (arg1 == Qt::Checked)
    {
        channel[0].curve->attach(ui->plot);
    }
    else
    {
        channel[0].curve->detach();
    }
    ui->plot->replot();
}

void PowerMonitor::on_checkBox_2_stateChanged(int arg1)
{
    if (arg1 == Qt::Checked)
    {
        channel[1].curve->attach(ui->plot);
    }
    else
    {
        channel[1].curve->detach();
    }
    ui->plot->replot();
}

void PowerMonitor::on_slider_valueChanged(int position)
{
    disNum = position;
}

void PowerMonitor::on_checkBox_3_stateChanged(int arg1)
{
    if (arg1 == Qt::Checked)
    {
        channel[2].curve->attach(ui->plot);
    }
    else
    {
        channel[2].curve->detach();
    }
    ui->plot->replot();
}

void PowerMonitor::on_checkBox_4_stateChanged(int arg1)
{
    if (arg1 == Qt::Checked)
    {
        channel[3].curve->attach(ui->plot);
    }
    else
    {
        channel[3].curve->detach();
    }
    ui->plot->replot();
}

void PowerMonitor::on_slider_2_valueChanged(int value)
{
    if (value == 0)
    {
        ui->plot->setAxisAutoScale(QwtPlot::yLeft,true);
    }
    else if (value<0)
    {
        value  = -1*value;
        QwtScaleDiv div = ui->plot->axisScaleDiv(QwtPlot::yLeft);
        double l = div.lowerBound();
        double u = div.upperBound();
        double c = (l+u)/2;
        ui->plot->setAxisAutoScale(QwtPlot::yLeft,false);
        ui->plot->setAxisScale(QwtPlot::yLeft,c-value*(c-l),c+value*(u-c));

    }
    else
    {
        double value_2 = 1.0/value;
        QwtScaleDiv div = ui->plot->axisScaleDiv(QwtPlot::yLeft);
        double l = div.lowerBound();
        double u = div.upperBound();
        double c = (l+u)/2;
        ui->plot->setAxisAutoScale(QwtPlot::yLeft,false);
        ui->plot->setAxisScale(QwtPlot::yLeft,c-value_2*(c-l),c+value_2*(u-c));
    }
}

void PowerMonitor::on_pushButton_6_clicked()
{
    if (ui->pushButton_6->text() == tr("夜间"))
    {
        CommonHelper::setStyle(":/qss/black.qss");
        ui->pushButton_6->setText(tr("白天"));
    }
    else
    {
        CommonHelper::setStyle(":/qss/white.qss");
        ui->pushButton_6->setText(tr("夜间"));
    }
}

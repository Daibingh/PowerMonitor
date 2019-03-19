#ifndef PowerMonitor_H
#define PowerMonitor_H
#include "ui_powermonitor.h"
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <qtime>
#include <qtimer>
#include <qwt_plot.h>
#include <qwt_plot_curve.h>
#include <qwt_scale_draw.h>
#include <qwt_plot_canvas.h>
#include <qwt_plot_layout.h>
#include <qwt_legend.h>
#include <qwt_plot_grid.h>
#include <QPalette>

#define NUM 4
#define LEN 10000
namespace Ui {
    class PowerMonitor;
}
class PowerMonitor: public QWidget
{
    Q_OBJECT
public:
    PowerMonitor(QWidget* parent = 0);
    ~PowerMonitor();
private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

//    void handleReadyRead0();
//    void handleReadyRead1();
//    void handleReadyRead2();
//    void handleReadyRead3();

    void handleTimeout();

    void on_pushButton_5_clicked();

    void on_checkBox_stateChanged(int arg1);

    void on_checkBox_2_stateChanged(int arg1);

    void on_slider_valueChanged(int position);

    void on_checkBox_3_stateChanged(int arg1);

    void on_checkBox_4_stateChanged(int arg1);

    void on_slider_2_valueChanged(int value);

    void on_pushButton_6_clicked();

private:
    void updateValue();
    void updatePlot();
    void printTable();

private:
    Ui::PowerMonitor* ui;
//    QList<QSerialPort> portList();
//    QSerialPort m_port0;
//    QSerialPort m_port1;
//    QSerialPort m_port2;
//    QSerialPort m_port3;
//    char data0[2];
//    char data1[2];
//    char data2[2];
//    char data3[2];
//    double* data0;
//    double* data1;
//    double* data2;
//    double* data3;
//    double* t;
//    bool hasPort;
//    int count;
//    int disNum;

    struct {
        QSerialPort port;
        double data[LEN];
        QwtPlotCurve* curve;
        double* pStart;
    } channel[NUM];
    double* pt;
    int disNum;
    int count;
    bool hasPort;
    double t[LEN];
    QTime time;
    QTimer timer;
    int msec;
//    bool isopen;
};

#endif // PowerMonitor_H

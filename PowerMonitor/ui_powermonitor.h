/********************************************************************************
** Form generated from reading UI file 'powermonitor.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POWERMONITOR_H
#define UI_POWERMONITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>
#include "qwt_plot.h"

QT_BEGIN_NAMESPACE

class Ui_PowerMonitor
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_4;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout_3;
    QFormLayout *formLayout;
    QLabel *label_2;
    QComboBox *comboBox_2;
    QLabel *label_6;
    QComboBox *comboBox_3;
    QLabel *label_4;
    QComboBox *comboBox_4;
    QLabel *label_5;
    QComboBox *comboBox_5;
    QTextEdit *textEdit;
    QPushButton *pushButton_5;
    QWidget *page_2;
    QGridLayout *gridLayout_10;
    QGridLayout *gridLayout_9;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_12;
    QGridLayout *gridLayout_16;
    QLabel *label_13;
    QLineEdit *lineEdit_7;
    QLabel *label_14;
    QLineEdit *lineEdit_8;
    QLabel *label_15;
    QLineEdit *lineEdit_9;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_13;
    QGridLayout *gridLayout_19;
    QLabel *label_16;
    QLineEdit *lineEdit_10;
    QLabel *label_17;
    QLineEdit *lineEdit_11;
    QLabel *label_18;
    QLineEdit *lineEdit_12;
    QLabel *label_19;
    QLineEdit *lineEdit_13;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_11;
    QGridLayout *gridLayout_18;
    QLabel *label_7;
    QLineEdit *lineEdit;
    QLabel *label_8;
    QLineEdit *lineEdit_2;
    QLabel *label_9;
    QLineEdit *lineEdit_3;
    QGridLayout *gridLayout_17;
    QLabel *label_10;
    QLineEdit *lineEdit_4;
    QLabel *label_11;
    QLineEdit *lineEdit_5;
    QLabel *label_12;
    QLineEdit *lineEdit_6;
    QGroupBox *groupBox_7;
    QGridLayout *gridLayout_15;
    QGridLayout *gridLayout_21;
    QLabel *label_28;
    QLineEdit *lineEdit_22;
    QLabel *label_29;
    QLineEdit *lineEdit_23;
    QLabel *label_30;
    QLineEdit *lineEdit_24;
    QLabel *label_31;
    QLineEdit *lineEdit_25;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_14;
    QGridLayout *gridLayout_20;
    QLabel *label_24;
    QLineEdit *lineEdit_18;
    QLabel *label_25;
    QLineEdit *lineEdit_19;
    QLabel *label_26;
    QLineEdit *lineEdit_20;
    QLabel *label_27;
    QLineEdit *lineEdit_21;
    QWidget *page_3;
    QGridLayout *gridLayout_22;
    QGridLayout *gridLayout_8;
    QwtPlot *plot;
    QSlider *slider_2;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_6;
    QSlider *slider;
    QWidget *page_4;
    QGridLayout *gridLayout_7;
    QTableWidget *tableWidget;
    QPushButton *pushButton_6;
    QLabel *label;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_6;
    QSplitter *splitter;
    QPushButton *pushButton_4;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;

    void setupUi(QWidget *PowerMonitor)
    {
        if (PowerMonitor->objectName().isEmpty())
            PowerMonitor->setObjectName(QStringLiteral("PowerMonitor"));
        PowerMonitor->setEnabled(true);
        PowerMonitor->resize(764, 525);
        PowerMonitor->setStyleSheet(QStringLiteral(""));
        gridLayout_2 = new QGridLayout(PowerMonitor);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        groupBox = new QGroupBox(PowerMonitor);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(6);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setStyleSheet(QStringLiteral("color: rgb(170, 0, 0);"));
        gridLayout_4 = new QGridLayout(groupBox);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        stackedWidget = new QStackedWidget(groupBox);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        gridLayout_5 = new QGridLayout(page);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setVerticalSpacing(25);
        label_2 = new QLabel(page);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        comboBox_2 = new QComboBox(page);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        formLayout->setWidget(1, QFormLayout::FieldRole, comboBox_2);

        label_6 = new QLabel(page);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_6);

        comboBox_3 = new QComboBox(page);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));

        formLayout->setWidget(2, QFormLayout::FieldRole, comboBox_3);

        label_4 = new QLabel(page);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        comboBox_4 = new QComboBox(page);
        comboBox_4->setObjectName(QStringLiteral("comboBox_4"));

        formLayout->setWidget(3, QFormLayout::FieldRole, comboBox_4);

        label_5 = new QLabel(page);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        comboBox_5 = new QComboBox(page);
        comboBox_5->setObjectName(QStringLiteral("comboBox_5"));

        formLayout->setWidget(4, QFormLayout::FieldRole, comboBox_5);


        gridLayout_3->addLayout(formLayout, 0, 1, 1, 1);

        textEdit = new QTextEdit(page);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        gridLayout_3->addWidget(textEdit, 0, 0, 2, 1);

        pushButton_5 = new QPushButton(page);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        gridLayout_3->addWidget(pushButton_5, 1, 1, 1, 1);


        gridLayout_5->addLayout(gridLayout_3, 0, 0, 1, 1);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        gridLayout_10 = new QGridLayout(page_2);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        gridLayout_9 = new QGridLayout();
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        groupBox_4 = new QGroupBox(page_2);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        gridLayout_12 = new QGridLayout(groupBox_4);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        gridLayout_16 = new QGridLayout();
        gridLayout_16->setObjectName(QStringLiteral("gridLayout_16"));
        gridLayout_16->setHorizontalSpacing(14);
        gridLayout_16->setVerticalSpacing(47);
        label_13 = new QLabel(groupBox_4);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_16->addWidget(label_13, 0, 0, 1, 1);

        lineEdit_7 = new QLineEdit(groupBox_4);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));

        gridLayout_16->addWidget(lineEdit_7, 0, 1, 1, 1);

        label_14 = new QLabel(groupBox_4);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout_16->addWidget(label_14, 1, 0, 1, 1);

        lineEdit_8 = new QLineEdit(groupBox_4);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));

        gridLayout_16->addWidget(lineEdit_8, 1, 1, 1, 1);

        label_15 = new QLabel(groupBox_4);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout_16->addWidget(label_15, 2, 0, 1, 1);

        lineEdit_9 = new QLineEdit(groupBox_4);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));

        gridLayout_16->addWidget(lineEdit_9, 2, 1, 1, 1);


        gridLayout_12->addLayout(gridLayout_16, 0, 0, 1, 1);


        gridLayout_9->addWidget(groupBox_4, 0, 2, 1, 1);

        groupBox_5 = new QGroupBox(page_2);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        gridLayout_13 = new QGridLayout(groupBox_5);
        gridLayout_13->setObjectName(QStringLiteral("gridLayout_13"));
        gridLayout_19 = new QGridLayout();
        gridLayout_19->setObjectName(QStringLiteral("gridLayout_19"));
        gridLayout_19->setVerticalSpacing(25);
        label_16 = new QLabel(groupBox_5);
        label_16->setObjectName(QStringLiteral("label_16"));

        gridLayout_19->addWidget(label_16, 0, 0, 1, 1);

        lineEdit_10 = new QLineEdit(groupBox_5);
        lineEdit_10->setObjectName(QStringLiteral("lineEdit_10"));

        gridLayout_19->addWidget(lineEdit_10, 0, 1, 1, 1);

        label_17 = new QLabel(groupBox_5);
        label_17->setObjectName(QStringLiteral("label_17"));

        gridLayout_19->addWidget(label_17, 1, 0, 1, 1);

        lineEdit_11 = new QLineEdit(groupBox_5);
        lineEdit_11->setObjectName(QStringLiteral("lineEdit_11"));

        gridLayout_19->addWidget(lineEdit_11, 1, 1, 1, 1);

        label_18 = new QLabel(groupBox_5);
        label_18->setObjectName(QStringLiteral("label_18"));

        gridLayout_19->addWidget(label_18, 2, 0, 1, 1);

        lineEdit_12 = new QLineEdit(groupBox_5);
        lineEdit_12->setObjectName(QStringLiteral("lineEdit_12"));

        gridLayout_19->addWidget(lineEdit_12, 2, 1, 1, 1);

        label_19 = new QLabel(groupBox_5);
        label_19->setObjectName(QStringLiteral("label_19"));

        gridLayout_19->addWidget(label_19, 3, 0, 1, 1);

        lineEdit_13 = new QLineEdit(groupBox_5);
        lineEdit_13->setObjectName(QStringLiteral("lineEdit_13"));

        gridLayout_19->addWidget(lineEdit_13, 3, 1, 1, 1);


        gridLayout_13->addLayout(gridLayout_19, 0, 0, 1, 1);


        gridLayout_9->addWidget(groupBox_5, 1, 0, 1, 1);

        groupBox_3 = new QGroupBox(page_2);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout_11 = new QGridLayout(groupBox_3);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        gridLayout_18 = new QGridLayout();
        gridLayout_18->setObjectName(QStringLiteral("gridLayout_18"));
        gridLayout_18->setHorizontalSpacing(14);
        gridLayout_18->setVerticalSpacing(47);
        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_18->addWidget(label_7, 0, 0, 1, 1);

        lineEdit = new QLineEdit(groupBox_3);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout_18->addWidget(lineEdit, 0, 1, 1, 1);

        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_18->addWidget(label_8, 1, 0, 1, 1);

        lineEdit_2 = new QLineEdit(groupBox_3);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        gridLayout_18->addWidget(lineEdit_2, 1, 1, 1, 1);

        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_18->addWidget(label_9, 2, 0, 1, 1);

        lineEdit_3 = new QLineEdit(groupBox_3);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        gridLayout_18->addWidget(lineEdit_3, 2, 1, 1, 1);


        gridLayout_11->addLayout(gridLayout_18, 0, 0, 1, 1);

        gridLayout_17 = new QGridLayout();
        gridLayout_17->setObjectName(QStringLiteral("gridLayout_17"));
        gridLayout_17->setHorizontalSpacing(14);
        gridLayout_17->setVerticalSpacing(47);
        label_10 = new QLabel(groupBox_3);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_17->addWidget(label_10, 0, 0, 1, 1);

        lineEdit_4 = new QLineEdit(groupBox_3);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        gridLayout_17->addWidget(lineEdit_4, 0, 1, 1, 1);

        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_17->addWidget(label_11, 1, 0, 1, 1);

        lineEdit_5 = new QLineEdit(groupBox_3);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));

        gridLayout_17->addWidget(lineEdit_5, 1, 1, 1, 1);

        label_12 = new QLabel(groupBox_3);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_17->addWidget(label_12, 2, 0, 1, 1);

        lineEdit_6 = new QLineEdit(groupBox_3);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));

        gridLayout_17->addWidget(lineEdit_6, 2, 1, 1, 1);


        gridLayout_11->addLayout(gridLayout_17, 0, 1, 1, 1);


        gridLayout_9->addWidget(groupBox_3, 0, 0, 1, 2);

        groupBox_7 = new QGroupBox(page_2);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        gridLayout_15 = new QGridLayout(groupBox_7);
        gridLayout_15->setObjectName(QStringLiteral("gridLayout_15"));
        gridLayout_21 = new QGridLayout();
        gridLayout_21->setObjectName(QStringLiteral("gridLayout_21"));
        gridLayout_21->setVerticalSpacing(25);
        label_28 = new QLabel(groupBox_7);
        label_28->setObjectName(QStringLiteral("label_28"));

        gridLayout_21->addWidget(label_28, 0, 0, 1, 1);

        lineEdit_22 = new QLineEdit(groupBox_7);
        lineEdit_22->setObjectName(QStringLiteral("lineEdit_22"));

        gridLayout_21->addWidget(lineEdit_22, 0, 1, 1, 1);

        label_29 = new QLabel(groupBox_7);
        label_29->setObjectName(QStringLiteral("label_29"));

        gridLayout_21->addWidget(label_29, 1, 0, 1, 1);

        lineEdit_23 = new QLineEdit(groupBox_7);
        lineEdit_23->setObjectName(QStringLiteral("lineEdit_23"));

        gridLayout_21->addWidget(lineEdit_23, 1, 1, 1, 1);

        label_30 = new QLabel(groupBox_7);
        label_30->setObjectName(QStringLiteral("label_30"));

        gridLayout_21->addWidget(label_30, 2, 0, 1, 1);

        lineEdit_24 = new QLineEdit(groupBox_7);
        lineEdit_24->setObjectName(QStringLiteral("lineEdit_24"));

        gridLayout_21->addWidget(lineEdit_24, 2, 1, 1, 1);

        label_31 = new QLabel(groupBox_7);
        label_31->setObjectName(QStringLiteral("label_31"));

        gridLayout_21->addWidget(label_31, 3, 0, 1, 1);

        lineEdit_25 = new QLineEdit(groupBox_7);
        lineEdit_25->setObjectName(QStringLiteral("lineEdit_25"));

        gridLayout_21->addWidget(lineEdit_25, 3, 1, 1, 1);


        gridLayout_15->addLayout(gridLayout_21, 0, 0, 1, 1);


        gridLayout_9->addWidget(groupBox_7, 1, 2, 1, 1);

        groupBox_6 = new QGroupBox(page_2);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        gridLayout_14 = new QGridLayout(groupBox_6);
        gridLayout_14->setObjectName(QStringLiteral("gridLayout_14"));
        gridLayout_20 = new QGridLayout();
        gridLayout_20->setObjectName(QStringLiteral("gridLayout_20"));
        gridLayout_20->setVerticalSpacing(25);
        label_24 = new QLabel(groupBox_6);
        label_24->setObjectName(QStringLiteral("label_24"));

        gridLayout_20->addWidget(label_24, 0, 0, 1, 1);

        lineEdit_18 = new QLineEdit(groupBox_6);
        lineEdit_18->setObjectName(QStringLiteral("lineEdit_18"));

        gridLayout_20->addWidget(lineEdit_18, 0, 1, 1, 1);

        label_25 = new QLabel(groupBox_6);
        label_25->setObjectName(QStringLiteral("label_25"));

        gridLayout_20->addWidget(label_25, 1, 0, 1, 1);

        lineEdit_19 = new QLineEdit(groupBox_6);
        lineEdit_19->setObjectName(QStringLiteral("lineEdit_19"));

        gridLayout_20->addWidget(lineEdit_19, 1, 1, 1, 1);

        label_26 = new QLabel(groupBox_6);
        label_26->setObjectName(QStringLiteral("label_26"));

        gridLayout_20->addWidget(label_26, 2, 0, 1, 1);

        lineEdit_20 = new QLineEdit(groupBox_6);
        lineEdit_20->setObjectName(QStringLiteral("lineEdit_20"));

        gridLayout_20->addWidget(lineEdit_20, 2, 1, 1, 1);

        label_27 = new QLabel(groupBox_6);
        label_27->setObjectName(QStringLiteral("label_27"));

        gridLayout_20->addWidget(label_27, 3, 0, 1, 1);

        lineEdit_21 = new QLineEdit(groupBox_6);
        lineEdit_21->setObjectName(QStringLiteral("lineEdit_21"));

        gridLayout_20->addWidget(lineEdit_21, 3, 1, 1, 1);


        gridLayout_14->addLayout(gridLayout_20, 0, 0, 1, 1);


        gridLayout_9->addWidget(groupBox_6, 1, 1, 1, 1);


        gridLayout_10->addLayout(gridLayout_9, 0, 0, 1, 1);

        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        gridLayout_22 = new QGridLayout(page_3);
        gridLayout_22->setObjectName(QStringLiteral("gridLayout_22"));
        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        plot = new QwtPlot(page_3);
        plot->setObjectName(QStringLiteral("plot"));
        plot->setStyleSheet(QStringLiteral(""));
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        plot->setProperty("canvasBackground", QVariant(brush));
        plot->setProperty("autoReplot", QVariant(false));

        gridLayout_8->addWidget(plot, 0, 0, 6, 1);

        slider_2 = new QSlider(page_3);
        slider_2->setObjectName(QStringLiteral("slider_2"));
        slider_2->setOrientation(Qt::Vertical);

        gridLayout_8->addWidget(slider_2, 0, 1, 6, 1);

        checkBox = new QCheckBox(page_3);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setStyleSheet(QStringLiteral("background-color: rgb(85, 85, 255);"));

        gridLayout_8->addWidget(checkBox, 0, 2, 1, 1);

        checkBox_2 = new QCheckBox(page_3);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));

        gridLayout_8->addWidget(checkBox_2, 1, 2, 1, 1);

        checkBox_3 = new QCheckBox(page_3);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));
        checkBox_3->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 0);"));

        gridLayout_8->addWidget(checkBox_3, 2, 2, 1, 1);

        checkBox_4 = new QCheckBox(page_3);
        checkBox_4->setObjectName(QStringLiteral("checkBox_4"));
        checkBox_4->setStyleSheet(QStringLiteral("background-color: rgb(0, 170, 0);"));

        gridLayout_8->addWidget(checkBox_4, 3, 2, 1, 1);

        checkBox_5 = new QCheckBox(page_3);
        checkBox_5->setObjectName(QStringLiteral("checkBox_5"));
        checkBox_5->setStyleSheet(QStringLiteral("background-color: rgb(170, 0, 255);"));

        gridLayout_8->addWidget(checkBox_5, 4, 2, 1, 1);

        checkBox_6 = new QCheckBox(page_3);
        checkBox_6->setObjectName(QStringLiteral("checkBox_6"));
        checkBox_6->setStyleSheet(QStringLiteral("background-color: rgb(85, 170, 255);"));

        gridLayout_8->addWidget(checkBox_6, 5, 2, 1, 1);

        slider = new QSlider(page_3);
        slider->setObjectName(QStringLiteral("slider"));
        slider->setOrientation(Qt::Horizontal);

        gridLayout_8->addWidget(slider, 6, 0, 1, 1);


        gridLayout_22->addLayout(gridLayout_8, 0, 0, 1, 1);

        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        gridLayout_7 = new QGridLayout(page_4);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        tableWidget = new QTableWidget(page_4);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        gridLayout_7->addWidget(tableWidget, 0, 0, 1, 1);

        stackedWidget->addWidget(page_4);

        gridLayout_4->addWidget(stackedWidget, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox, 4, 1, 1, 1);

        pushButton_6 = new QPushButton(PowerMonitor);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        gridLayout->addWidget(pushButton_6, 1, 0, 1, 1);

        label = new QLabel(PowerMonitor);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(22);
        label->setFont(font);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setStyleSheet(QStringLiteral("color: rgb(0, 0, 255);"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 2);

        groupBox_2 = new QGroupBox(PowerMonitor);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy2);
        groupBox_2->setStyleSheet(QStringLiteral(""));
        gridLayout_6 = new QGridLayout(groupBox_2);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        splitter = new QSplitter(groupBox_2);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Vertical);
        pushButton_4 = new QPushButton(splitter);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setStyleSheet(QStringLiteral(""));
        splitter->addWidget(pushButton_4);
        pushButton = new QPushButton(splitter);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setStyleSheet(QStringLiteral(""));
        splitter->addWidget(pushButton);
        pushButton_3 = new QPushButton(splitter);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setStyleSheet(QStringLiteral(""));
        splitter->addWidget(pushButton_3);
        pushButton_2 = new QPushButton(splitter);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setStyleSheet(QStringLiteral(""));
        splitter->addWidget(pushButton_2);

        gridLayout_6->addWidget(splitter, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox_2, 4, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(PowerMonitor);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PowerMonitor);
    } // setupUi

    void retranslateUi(QWidget *PowerMonitor)
    {
        PowerMonitor->setWindowTitle(QApplication::translate("PowerMonitor", "PowerMonitor", 0));
        groupBox->setTitle(QApplication::translate("PowerMonitor", "\346\230\276\347\244\272\351\235\242\346\235\277", 0));
        label_2->setText(QApplication::translate("PowerMonitor", "\346\263\242\347\211\271\347\216\207", 0));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("PowerMonitor", "1200", 0)
         << QApplication::translate("PowerMonitor", "2400", 0)
         << QApplication::translate("PowerMonitor", "4800", 0)
         << QApplication::translate("PowerMonitor", "9600", 0)
         << QApplication::translate("PowerMonitor", "19200", 0)
         << QApplication::translate("PowerMonitor", "38400", 0)
         << QApplication::translate("PowerMonitor", "57600", 0)
         << QApplication::translate("PowerMonitor", "115200", 0)
        );
        label_6->setText(QApplication::translate("PowerMonitor", "\346\240\241\351\252\214\344\275\215", 0));
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
         << QApplication::translate("PowerMonitor", "NONE", 0)
         << QApplication::translate("PowerMonitor", "ODD", 0)
         << QApplication::translate("PowerMonitor", "EVE", 0)
        );
        label_4->setText(QApplication::translate("PowerMonitor", "\346\225\260\346\215\256\344\275\215", 0));
        comboBox_4->clear();
        comboBox_4->insertItems(0, QStringList()
         << QApplication::translate("PowerMonitor", "8", 0)
         << QApplication::translate("PowerMonitor", "7", 0)
         << QApplication::translate("PowerMonitor", "6", 0)
        );
        label_5->setText(QApplication::translate("PowerMonitor", "\345\201\234\346\255\242\344\275\215", 0));
        comboBox_5->clear();
        comboBox_5->insertItems(0, QStringList()
         << QApplication::translate("PowerMonitor", "1", 0)
         << QApplication::translate("PowerMonitor", "2", 0)
        );
        pushButton_5->setText(QApplication::translate("PowerMonitor", "\346\211\223\345\274\200\344\270\262\345\217\243", 0));
        groupBox_4->setTitle(QApplication::translate("PowerMonitor", "\347\224\265\346\265\201", 0));
        label_13->setText(QApplication::translate("PowerMonitor", "A \347\233\270", 0));
        label_14->setText(QApplication::translate("PowerMonitor", "B \347\233\270", 0));
        label_15->setText(QApplication::translate("PowerMonitor", "C \347\233\270", 0));
        groupBox_5->setTitle(QApplication::translate("PowerMonitor", "\346\234\211\345\212\237\345\212\237\347\216\207", 0));
        label_16->setText(QApplication::translate("PowerMonitor", "A \347\233\270", 0));
        label_17->setText(QApplication::translate("PowerMonitor", "B \347\233\270", 0));
        label_18->setText(QApplication::translate("PowerMonitor", "C \347\233\270", 0));
        label_19->setText(QApplication::translate("PowerMonitor", "\346\200\273\345\212\237\347\216\207", 0));
        groupBox_3->setTitle(QApplication::translate("PowerMonitor", "\347\224\265\345\216\213", 0));
        label_7->setText(QApplication::translate("PowerMonitor", "A \347\233\270", 0));
        label_8->setText(QApplication::translate("PowerMonitor", "B \347\233\270", 0));
        label_9->setText(QApplication::translate("PowerMonitor", "C \347\233\270", 0));
        label_10->setText(QApplication::translate("PowerMonitor", "AB \347\233\270", 0));
        label_11->setText(QApplication::translate("PowerMonitor", "BC \347\233\270", 0));
        label_12->setText(QApplication::translate("PowerMonitor", "CA \347\233\270", 0));
        groupBox_7->setTitle(QApplication::translate("PowerMonitor", "\345\212\237\347\216\207\345\233\240\346\225\260", 0));
        label_28->setText(QApplication::translate("PowerMonitor", "A \347\233\270", 0));
        label_29->setText(QApplication::translate("PowerMonitor", "B \347\233\270", 0));
        label_30->setText(QApplication::translate("PowerMonitor", "C \347\233\270", 0));
        label_31->setText(QApplication::translate("PowerMonitor", "\346\200\273\345\233\240\346\225\260", 0));
        groupBox_6->setTitle(QApplication::translate("PowerMonitor", "\346\227\240\345\212\237\345\212\237\347\216\207", 0));
        label_24->setText(QApplication::translate("PowerMonitor", "A \347\233\270", 0));
        label_25->setText(QApplication::translate("PowerMonitor", "B \347\233\270", 0));
        label_26->setText(QApplication::translate("PowerMonitor", "C \347\233\270", 0));
        label_27->setText(QApplication::translate("PowerMonitor", "\346\200\273\345\212\237\347\216\207", 0));
        checkBox->setText(QApplication::translate("PowerMonitor", "A\347\233\270\347\224\265\345\216\213", 0));
        checkBox_2->setText(QApplication::translate("PowerMonitor", "B\347\233\270\347\224\265\345\216\213", 0));
        checkBox_3->setText(QApplication::translate("PowerMonitor", "A\347\233\270\347\224\265\346\265\201", 0));
        checkBox_4->setText(QApplication::translate("PowerMonitor", "B\347\233\270\347\224\265\346\265\201", 0));
        checkBox_5->setText(QApplication::translate("PowerMonitor", "\346\200\273\346\234\211\345\212\237\345\212\237\347\216\207", 0));
        checkBox_6->setText(QApplication::translate("PowerMonitor", "\346\200\273\345\212\237\347\216\207\345\233\240\346\225\260", 0));
        pushButton_6->setText(QApplication::translate("PowerMonitor", "\347\231\275\345\244\251", 0));
        label->setText(QApplication::translate("PowerMonitor", "\351\205\215\347\224\265\347\233\221\346\216\247\347\263\273\347\273\237", 0));
        groupBox_2->setTitle(QApplication::translate("PowerMonitor", "\351\200\211\351\241\271", 0));
        pushButton_4->setText(QApplication::translate("PowerMonitor", "\350\277\236\346\216\245", 0));
        pushButton->setText(QApplication::translate("PowerMonitor", "\345\217\202\346\225\260", 0));
        pushButton_3->setText(QApplication::translate("PowerMonitor", "\346\233\262\347\272\277", 0));
        pushButton_2->setText(QApplication::translate("PowerMonitor", "\346\212\245\350\241\250", 0));
    } // retranslateUi

};

namespace Ui {
    class PowerMonitor: public Ui_PowerMonitor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POWERMONITOR_H

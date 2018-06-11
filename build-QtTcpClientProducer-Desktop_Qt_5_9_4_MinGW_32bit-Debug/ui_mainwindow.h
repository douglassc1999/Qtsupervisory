/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonConnect;
    QPushButton *pushButtonDisconnect;
    QHBoxLayout *horizontalLayout_3;
    QSlider *horizontalSliderMin;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelMin;
    QLCDNumber *lcdNumberMin;
    QHBoxLayout *horizontalLayout_2;
    QSlider *horizontalSliderMax;
    QVBoxLayout *verticalLayout_3;
    QLabel *labelMax;
    QLCDNumber *lcdNumberMax;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QSlider *horizontalSliderTime;
    QLCDNumber *lcdNumber;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButtonStart;
    QPushButton *pushButtonStop;
    QHBoxLayout *horizontalLayout_6;
    QTextBrowser *textBrowser;
    QScrollBar *verticalScrollBar;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(671, 514);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(35, 42, 541, 261));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButtonConnect = new QPushButton(layoutWidget);
        pushButtonConnect->setObjectName(QStringLiteral("pushButtonConnect"));

        horizontalLayout->addWidget(pushButtonConnect);

        pushButtonDisconnect = new QPushButton(layoutWidget);
        pushButtonDisconnect->setObjectName(QStringLiteral("pushButtonDisconnect"));

        horizontalLayout->addWidget(pushButtonDisconnect);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_4->addLayout(verticalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSliderMin = new QSlider(layoutWidget);
        horizontalSliderMin->setObjectName(QStringLiteral("horizontalSliderMin"));
        horizontalSliderMin->setMinimum(1);
        horizontalSliderMin->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(horizontalSliderMin);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        labelMin = new QLabel(layoutWidget);
        labelMin->setObjectName(QStringLiteral("labelMin"));

        verticalLayout_2->addWidget(labelMin);

        lcdNumberMin = new QLCDNumber(layoutWidget);
        lcdNumberMin->setObjectName(QStringLiteral("lcdNumberMin"));
        lcdNumberMin->setSegmentStyle(QLCDNumber::Flat);

        verticalLayout_2->addWidget(lcdNumberMin);


        horizontalLayout_3->addLayout(verticalLayout_2);


        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSliderMax = new QSlider(layoutWidget);
        horizontalSliderMax->setObjectName(QStringLiteral("horizontalSliderMax"));
        horizontalSliderMax->setMinimum(1);
        horizontalSliderMax->setOrientation(Qt::Horizontal);
        horizontalSliderMax->setInvertedAppearance(false);
        horizontalSliderMax->setInvertedControls(false);

        horizontalLayout_2->addWidget(horizontalSliderMax);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        labelMax = new QLabel(layoutWidget);
        labelMax->setObjectName(QStringLiteral("labelMax"));

        verticalLayout_3->addWidget(labelMax);

        lcdNumberMax = new QLCDNumber(layoutWidget);
        lcdNumberMax->setObjectName(QStringLiteral("lcdNumberMax"));
        lcdNumberMax->setSegmentStyle(QLCDNumber::Flat);

        verticalLayout_3->addWidget(lcdNumberMax);


        horizontalLayout_2->addLayout(verticalLayout_3);


        verticalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_4->addWidget(label);

        horizontalSliderTime = new QSlider(layoutWidget);
        horizontalSliderTime->setObjectName(QStringLiteral("horizontalSliderTime"));
        horizontalSliderTime->setOrientation(Qt::Horizontal);

        horizontalLayout_4->addWidget(horizontalSliderTime);


        horizontalLayout_7->addLayout(horizontalLayout_4);

        lcdNumber = new QLCDNumber(layoutWidget);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_7->addWidget(lcdNumber);


        verticalLayout_4->addLayout(horizontalLayout_7);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        pushButtonStart = new QPushButton(layoutWidget);
        pushButtonStart->setObjectName(QStringLiteral("pushButtonStart"));

        horizontalLayout_5->addWidget(pushButtonStart);

        pushButtonStop = new QPushButton(layoutWidget);
        pushButtonStop->setObjectName(QStringLiteral("pushButtonStop"));

        horizontalLayout_5->addWidget(pushButtonStop);


        verticalLayout_4->addLayout(horizontalLayout_5);


        horizontalLayout_8->addLayout(verticalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        textBrowser = new QTextBrowser(layoutWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        horizontalLayout_6->addWidget(textBrowser);

        verticalScrollBar = new QScrollBar(layoutWidget);
        verticalScrollBar->setObjectName(QStringLiteral("verticalScrollBar"));
        verticalScrollBar->setOrientation(Qt::Vertical);

        horizontalLayout_6->addWidget(verticalScrollBar);


        horizontalLayout_8->addLayout(horizontalLayout_6);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 671, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(horizontalSliderMin, SIGNAL(valueChanged(int)), lcdNumberMin, SLOT(display(int)));
        QObject::connect(horizontalSliderMax, SIGNAL(valueChanged(int)), lcdNumberMax, SLOT(display(int)));
        QObject::connect(horizontalSliderTime, SIGNAL(valueChanged(int)), lcdNumber, SLOT(display(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        lineEdit->setText(QApplication::translate("MainWindow", "127.0.0.1", Q_NULLPTR));
        pushButtonConnect->setText(QApplication::translate("MainWindow", "Connect", Q_NULLPTR));
        pushButtonDisconnect->setText(QApplication::translate("MainWindow", "Disconnect", Q_NULLPTR));
        labelMin->setText(QApplication::translate("MainWindow", "    Min", Q_NULLPTR));
        labelMax->setText(QApplication::translate("MainWindow", "    Max", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "  Timing(s)", Q_NULLPTR));
        pushButtonStart->setText(QApplication::translate("MainWindow", "Start", Q_NULLPTR));
        pushButtonStop->setText(QApplication::translate("MainWindow", "Stop", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

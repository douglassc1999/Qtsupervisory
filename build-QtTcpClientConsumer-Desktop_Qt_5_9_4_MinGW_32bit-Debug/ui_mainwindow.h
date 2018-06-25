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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <ploter.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEditIp;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButtonConnect;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButtonDisconnect;
    QLabel *label_2;
    QListWidget *listWidgetIps;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButtonUpdate;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_6;
    QSlider *horizontalSliderTiming;
    QSpacerItem *horizontalSpacer_6;
    QLabel *labelTiming;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButtonConnectStart;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *pushButtonConnectStop;
    Ploter *widgetGrafico;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(646, 522);
        MainWindow->setStyleSheet(QStringLiteral(""));
        MainWindow->setToolButtonStyle(Qt::ToolButtonIconOnly);
        MainWindow->setTabShape(QTabWidget::Rounded);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral(""));

        verticalLayout->addWidget(label);

        lineEditIp = new QLineEdit(centralWidget);
        lineEditIp->setObjectName(QStringLiteral("lineEditIp"));
        lineEditIp->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(lineEditIp);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pushButtonConnect = new QPushButton(centralWidget);
        pushButtonConnect->setObjectName(QStringLiteral("pushButtonConnect"));
        pushButtonConnect->setStyleSheet(QStringLiteral(""));

        horizontalLayout_3->addWidget(pushButtonConnect);

        horizontalSpacer_3 = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        pushButtonDisconnect = new QPushButton(centralWidget);
        pushButtonDisconnect->setObjectName(QStringLiteral("pushButtonDisconnect"));
        pushButtonDisconnect->setStyleSheet(QStringLiteral(""));

        horizontalLayout_3->addWidget(pushButtonDisconnect);


        verticalLayout->addLayout(horizontalLayout_3);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QStringLiteral(""));

        verticalLayout->addWidget(label_2);

        listWidgetIps = new QListWidget(centralWidget);
        listWidgetIps->setObjectName(QStringLiteral("listWidgetIps"));
        listWidgetIps->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"selection-color: rgb(0, 0, 0);\n"
"color: rgb(0, 0, 0);\n"
"selection-background-color: rgba(29, 28, 28, 159);"));

        verticalLayout->addWidget(listWidgetIps);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalSpacer_2 = new QSpacerItem(158, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_2);

        pushButtonUpdate = new QPushButton(centralWidget);
        pushButtonUpdate->setObjectName(QStringLiteral("pushButtonUpdate"));
        pushButtonUpdate->setStyleSheet(QStringLiteral(""));

        horizontalLayout_7->addWidget(pushButtonUpdate);


        verticalLayout->addLayout(horizontalLayout_7);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(label_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSliderTiming = new QSlider(centralWidget);
        horizontalSliderTiming->setObjectName(QStringLiteral("horizontalSliderTiming"));
        horizontalSliderTiming->setStyleSheet(QStringLiteral(""));
        horizontalSliderTiming->setMinimum(1);
        horizontalSliderTiming->setMaximum(99);
        horizontalSliderTiming->setOrientation(Qt::Horizontal);
        horizontalSliderTiming->setTickPosition(QSlider::NoTicks);
        horizontalSliderTiming->setTickInterval(1);

        horizontalLayout_6->addWidget(horizontalSliderTiming);

        horizontalSpacer_6 = new QSpacerItem(13, 22, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);

        labelTiming = new QLabel(centralWidget);
        labelTiming->setObjectName(QStringLiteral("labelTiming"));
        QFont font;
        font.setPointSize(14);
        labelTiming->setFont(font);
        labelTiming->setFocusPolicy(Qt::NoFocus);
        labelTiming->setContextMenuPolicy(Qt::DefaultContextMenu);
        labelTiming->setStyleSheet(QStringLiteral(""));
        labelTiming->setFrameShape(QFrame::NoFrame);
        labelTiming->setFrameShadow(QFrame::Plain);
        labelTiming->setTextFormat(Qt::RichText);
        labelTiming->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(labelTiming);

        horizontalLayout_6->setStretch(0, 70);
        horizontalLayout_6->setStretch(1, 10);
        horizontalLayout_6->setStretch(2, 20);

        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        pushButtonConnectStart = new QPushButton(centralWidget);
        pushButtonConnectStart->setObjectName(QStringLiteral("pushButtonConnectStart"));
        pushButtonConnectStart->setStyleSheet(QStringLiteral(""));

        horizontalLayout_4->addWidget(pushButtonConnectStart);

        horizontalSpacer_7 = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        pushButtonConnectStop = new QPushButton(centralWidget);
        pushButtonConnectStop->setObjectName(QStringLiteral("pushButtonConnectStop"));
        pushButtonConnectStop->setStyleSheet(QStringLiteral(""));

        horizontalLayout_4->addWidget(pushButtonConnectStop);


        verticalLayout->addLayout(horizontalLayout_4);


        horizontalLayout->addLayout(verticalLayout);

        widgetGrafico = new Ploter(centralWidget);
        widgetGrafico->setObjectName(QStringLiteral("widgetGrafico"));

        horizontalLayout->addWidget(widgetGrafico);

        horizontalLayout->setStretch(0, 30);
        horizontalLayout->setStretch(1, 70);

        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 646, 21));
        menuBar->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        mainToolBar->addSeparator();

        retranslateUi(MainWindow);
        QObject::connect(horizontalSliderTiming, SIGNAL(valueChanged(int)), labelTiming, SLOT(setNum(int)));
        QObject::connect(listWidgetIps, SIGNAL(doubleClicked(QModelIndex)), MainWindow, SLOT(updateLineEditIP()));

        listWidgetIps->setCurrentRow(-1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Tcp Client Consumer", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "IP do servidor", Q_NULLPTR));
        lineEditIp->setText(QApplication::translate("MainWindow", "127.0.0.1", Q_NULLPTR));
        pushButtonConnect->setText(QApplication::translate("MainWindow", "Connect", Q_NULLPTR));
        pushButtonDisconnect->setText(QApplication::translate("MainWindow", "Disconnect", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "IPs dos produtores", Q_NULLPTR));
        pushButtonUpdate->setText(QApplication::translate("MainWindow", "Update", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Timing (s)", Q_NULLPTR));
        labelTiming->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        pushButtonConnectStart->setText(QApplication::translate("MainWindow", "Start", Q_NULLPTR));
        pushButtonConnectStop->setText(QApplication::translate("MainWindow", "Stop", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

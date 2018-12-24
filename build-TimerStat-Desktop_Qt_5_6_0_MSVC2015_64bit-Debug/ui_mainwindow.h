/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionO_pen;
    QAction *actionS_ave;
    QAction *actionS_ave_As;
    QAction *actionA_bout;
    QAction *actionV_iew;
    QAction *actionE_dit;
    QAction *actionE_xit;
    QAction *actionNew;
    QAction *actionTutorial_Tips;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit;
    QLabel *clock;
    QSpinBox *spinBox;
    QLCDNumber *lcd1;
    QMenuBar *menuBar;
    QMenu *menuF_ile;
    QMenu *menuS_tats;
    QMenu *menuA_bout;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(994, 576);
        MainWindow->setMouseTracking(false);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QStringLiteral("background-color: rgb(97, 97, 107);"));
        actionO_pen = new QAction(MainWindow);
        actionO_pen->setObjectName(QStringLiteral("actionO_pen"));
        actionS_ave = new QAction(MainWindow);
        actionS_ave->setObjectName(QStringLiteral("actionS_ave"));
        actionS_ave->setEnabled(true);
        actionS_ave_As = new QAction(MainWindow);
        actionS_ave_As->setObjectName(QStringLiteral("actionS_ave_As"));
        actionA_bout = new QAction(MainWindow);
        actionA_bout->setObjectName(QStringLiteral("actionA_bout"));
        actionV_iew = new QAction(MainWindow);
        actionV_iew->setObjectName(QStringLiteral("actionV_iew"));
        actionE_dit = new QAction(MainWindow);
        actionE_dit->setObjectName(QStringLiteral("actionE_dit"));
        actionE_xit = new QAction(MainWindow);
        actionE_xit->setObjectName(QStringLiteral("actionE_xit"));
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        actionTutorial_Tips = new QAction(MainWindow);
        actionTutorial_Tips->setObjectName(QStringLiteral("actionTutorial_Tips"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QFont font;
        font.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font.setItalic(true);
        centralWidget->setFont(font);
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setMaximumSize(QSize(497, 31));
        lineEdit->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(lineEdit, 2, 1, 1, 1);

        clock = new QLabel(centralWidget);
        clock->setObjectName(QStringLiteral("clock"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(clock->sizePolicy().hasHeightForWidth());
        clock->setSizePolicy(sizePolicy);
        clock->setMaximumSize(QSize(497, 470));
        clock->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        clock->setPixmap(QPixmap(QString::fromUtf8(":/TimerStat/images/images/clockHandTimerDefault.png")));
        clock->setScaledContents(true);

        gridLayout->addWidget(clock, 1, 1, 1, 1);

        spinBox = new QSpinBox(centralWidget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setMaximumSize(QSize(100, 40));
        spinBox->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        spinBox->setMaximum(60);

        gridLayout->addWidget(spinBox, 1, 0, 1, 1);

        lcd1 = new QLCDNumber(centralWidget);
        lcd1->setObjectName(QStringLiteral("lcd1"));
        lcd1->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lcd1->setFrameShape(QFrame::StyledPanel);
        lcd1->setFrameShadow(QFrame::Raised);
        lcd1->setSmallDecimalPoint(true);
        lcd1->setSegmentStyle(QLCDNumber::Flat);
        lcd1->setProperty("value", QVariant(0));
        lcd1->setProperty("intValue", QVariant(0));

        gridLayout->addWidget(lcd1, 2, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 994, 18));
        menuF_ile = new QMenu(menuBar);
        menuF_ile->setObjectName(QStringLiteral("menuF_ile"));
        QFont font1;
        font1.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setWeight(75);
        menuF_ile->setFont(font1);
        menuS_tats = new QMenu(menuBar);
        menuS_tats->setObjectName(QStringLiteral("menuS_tats"));
        menuA_bout = new QMenu(menuBar);
        menuA_bout->setObjectName(QStringLiteral("menuA_bout"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuF_ile->menuAction());
        menuBar->addAction(menuS_tats->menuAction());
        menuBar->addAction(menuA_bout->menuAction());
        menuF_ile->addAction(actionNew);
        menuF_ile->addAction(actionO_pen);
        menuF_ile->addAction(actionS_ave);
        menuF_ile->addAction(actionS_ave_As);
        menuF_ile->addAction(actionE_xit);
        menuS_tats->addAction(actionV_iew);
        menuS_tats->addAction(actionE_dit);
        menuA_bout->addAction(actionA_bout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionO_pen->setText(QApplication::translate("MainWindow", "O&pen...", 0));
        actionS_ave->setText(QApplication::translate("MainWindow", "S&ave...", 0));
        actionS_ave_As->setText(QApplication::translate("MainWindow", "S&ave As...", 0));
        actionA_bout->setText(QApplication::translate("MainWindow", "A&bout...", 0));
        actionV_iew->setText(QApplication::translate("MainWindow", "V&iew", 0));
        actionE_dit->setText(QApplication::translate("MainWindow", "E&dit", 0));
        actionE_xit->setText(QApplication::translate("MainWindow", "E&xit...", 0));
        actionNew->setText(QApplication::translate("MainWindow", "New...", 0));
        actionTutorial_Tips->setText(QApplication::translate("MainWindow", "Tutorial Tips", 0));
        clock->setText(QString());
        menuF_ile->setTitle(QApplication::translate("MainWindow", "F&ile", 0));
        menuS_tats->setTitle(QApplication::translate("MainWindow", "S&tats", 0));
        menuA_bout->setTitle(QApplication::translate("MainWindow", "H&elp", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

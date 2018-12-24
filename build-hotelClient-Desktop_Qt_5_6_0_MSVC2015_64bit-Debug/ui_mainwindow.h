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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_Exit;
    QAction *actionNew_Guest;
    QAction *actionEdit_Room_Info;
    QAction *actionEdit_Guest_Info;
    QAction *actionAbout;
    QAction *actionAbout_2;
    QAction *actionChange_Hotel_Info;
    QAction *actionSave_Info;
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QLabel *statusLabel;
    QPushButton *findRoom;
    QPushButton *findGuest;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menuEdit;
    QMenu *menuHelp;
    QMenu *menuAdd;
    QMenu *menuFile;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(423, 245);
        action_Exit = new QAction(MainWindow);
        action_Exit->setObjectName(QStringLiteral("action_Exit"));
        actionNew_Guest = new QAction(MainWindow);
        actionNew_Guest->setObjectName(QStringLiteral("actionNew_Guest"));
        actionEdit_Room_Info = new QAction(MainWindow);
        actionEdit_Room_Info->setObjectName(QStringLiteral("actionEdit_Room_Info"));
        actionEdit_Guest_Info = new QAction(MainWindow);
        actionEdit_Guest_Info->setObjectName(QStringLiteral("actionEdit_Guest_Info"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionAbout_2 = new QAction(MainWindow);
        actionAbout_2->setObjectName(QStringLiteral("actionAbout_2"));
        actionChange_Hotel_Info = new QAction(MainWindow);
        actionChange_Hotel_Info->setObjectName(QStringLiteral("actionChange_Hotel_Info"));
        actionSave_Info = new QAction(MainWindow);
        actionSave_Info->setObjectName(QStringLiteral("actionSave_Info"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(70, 10, 291, 131));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        comboBox = new QComboBox(layoutWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setEditable(true);

        horizontalLayout->addWidget(comboBox);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout_2->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setEnabled(false);

        verticalLayout->addWidget(pushButton);

        statusLabel = new QLabel(centralWidget);
        statusLabel->setObjectName(QStringLiteral("statusLabel"));
        statusLabel->setGeometry(QRect(76, 150, 281, 20));
        statusLabel->setAlignment(Qt::AlignCenter);
        findRoom = new QPushButton(centralWidget);
        findRoom->setObjectName(QStringLiteral("findRoom"));
        findRoom->setGeometry(QRect(10, 170, 75, 23));
        findGuest = new QPushButton(centralWidget);
        findGuest->setObjectName(QStringLiteral("findGuest"));
        findGuest->setGeometry(QRect(340, 170, 75, 23));
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 423, 18));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        menuAdd = new QMenu(menuBar);
        menuAdd->setObjectName(QStringLiteral("menuAdd"));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuAdd->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuEdit->addAction(actionEdit_Room_Info);
        menuEdit->addAction(actionEdit_Guest_Info);
        menuHelp->addAction(actionAbout_2);
        menuAdd->addAction(actionNew_Guest);
        menuFile->addAction(actionChange_Hotel_Info);
        menuFile->addAction(actionSave_Info);
        menuFile->addAction(action_Exit);

        retranslateUi(MainWindow);

        pushButton->setDefault(true);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        action_Exit->setText(QApplication::translate("MainWindow", "&Exit", 0));
        actionNew_Guest->setText(QApplication::translate("MainWindow", "New Guest", 0));
        actionEdit_Room_Info->setText(QApplication::translate("MainWindow", "Edit Room Info", 0));
        actionEdit_Guest_Info->setText(QApplication::translate("MainWindow", "Edit Guest Info", 0));
        actionAbout->setText(QApplication::translate("MainWindow", "About...", 0));
        actionAbout_2->setText(QApplication::translate("MainWindow", "About...", 0));
        actionChange_Hotel_Info->setText(QApplication::translate("MainWindow", "Change Hotel Info", 0));
        actionSave_Info->setText(QApplication::translate("MainWindow", "Save Info...", 0));
        label->setText(QApplication::translate("MainWindow", "Hotel Server Name:", 0));
        label_2->setText(QApplication::translate("MainWindow", "Hotel Port:  ", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Hotel Information", 0));
        statusLabel->setText(QApplication::translate("MainWindow", "Not Connected To Server...", 0));
        findRoom->setText(QApplication::translate("MainWindow", "Find Room Info", 0));
        findGuest->setText(QApplication::translate("MainWindow", "Find Guest Info", 0));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit...", 0));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0));
        menuAdd->setTitle(QApplication::translate("MainWindow", "Add...", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "&File", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

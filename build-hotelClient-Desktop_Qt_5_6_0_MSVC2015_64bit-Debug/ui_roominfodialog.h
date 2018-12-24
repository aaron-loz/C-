/********************************************************************************
** Form generated from reading UI file 'roominfodialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROOMINFODIALOG_H
#define UI_ROOMINFODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_roomInfoDialog
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QListView *listView;

    void setupUi(QDialog *roomInfoDialog)
    {
        if (roomInfoDialog->objectName().isEmpty())
            roomInfoDialog->setObjectName(QStringLiteral("roomInfoDialog"));
        roomInfoDialog->resize(240, 320);
        buttonBox = new QDialogButtonBox(roomInfoDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(10, 270, 221, 41));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        layoutWidget = new QWidget(roomInfoDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 225, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setUnderline(true);
        label->setFont(font);

        horizontalLayout->addWidget(label, 0, Qt::AlignHCenter);

        listView = new QListView(roomInfoDialog);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(10, 50, 221, 211));

        retranslateUi(roomInfoDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), roomInfoDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), roomInfoDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(roomInfoDialog);
    } // setupUi

    void retranslateUi(QDialog *roomInfoDialog)
    {
        roomInfoDialog->setWindowTitle(QApplication::translate("roomInfoDialog", "Dialog", 0));
        label->setText(QApplication::translate("roomInfoDialog", "Search Room Number", 0));
    } // retranslateUi

};

namespace Ui {
    class roomInfoDialog: public Ui_roomInfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROOMINFODIALOG_H

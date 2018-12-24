/********************************************************************************
** Form generated from reading UI file 'guestinfodialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUESTINFODIALOG_H
#define UI_GUESTINFODIALOG_H

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

class Ui_guestInfoDialog
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QListView *listView;

    void setupUi(QDialog *guestInfoDialog)
    {
        if (guestInfoDialog->objectName().isEmpty())
            guestInfoDialog->setObjectName(QStringLiteral("guestInfoDialog"));
        guestInfoDialog->resize(240, 320);
        buttonBox = new QDialogButtonBox(guestInfoDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(10, 270, 221, 41));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        layoutWidget = new QWidget(guestInfoDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 212, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setUnderline(true);
        label->setFont(font);

        horizontalLayout->addWidget(label, 0, Qt::AlignHCenter);

        listView = new QListView(guestInfoDialog);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(10, 50, 221, 211));

        retranslateUi(guestInfoDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), guestInfoDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), guestInfoDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(guestInfoDialog);
    } // setupUi

    void retranslateUi(QDialog *guestInfoDialog)
    {
        guestInfoDialog->setWindowTitle(QApplication::translate("guestInfoDialog", "Dialog", 0));
        label->setText(QApplication::translate("guestInfoDialog", "Search Guest Name", 0));
    } // retranslateUi

};

namespace Ui {
    class guestInfoDialog: public Ui_guestInfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUESTINFODIALOG_H

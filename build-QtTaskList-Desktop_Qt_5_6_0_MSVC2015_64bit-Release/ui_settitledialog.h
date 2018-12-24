/********************************************************************************
** Form generated from reading UI file 'settitledialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTITLEDIALOG_H
#define UI_SETTITLEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_setTitleDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *setTitleDialog)
    {
        if (setTitleDialog->objectName().isEmpty())
            setTitleDialog->setObjectName(QStringLiteral("setTitleDialog"));
        setTitleDialog->resize(489, 69);
        verticalLayout = new QVBoxLayout(setTitleDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lineEdit = new QLineEdit(setTitleDialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        buttonBox = new QDialogButtonBox(setTitleDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(setTitleDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), setTitleDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), setTitleDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(setTitleDialog);
    } // setupUi

    void retranslateUi(QDialog *setTitleDialog)
    {
        setTitleDialog->setWindowTitle(QApplication::translate("setTitleDialog", "Dialog", 0));
        lineEdit->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class setTitleDialog: public Ui_setTitleDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTITLEDIALOG_H

/********************************************************************************
** Form generated from reading UI file 'addtaskdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDTASKDIALOG_H
#define UI_ADDTASKDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_addtaskdialog
{
public:
    QLineEdit *lineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *addtaskdialog)
    {
        if (addtaskdialog->objectName().isEmpty())
            addtaskdialog->setObjectName(QStringLiteral("addtaskdialog"));
        addtaskdialog->resize(634, 78);
        lineEdit = new QLineEdit(addtaskdialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(9, 9, 621, 32));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(17);
        lineEdit->setFont(font);
        buttonBox = new QDialogButtonBox(addtaskdialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(472, 50, 160, 25));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(addtaskdialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), addtaskdialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), addtaskdialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(addtaskdialog);
    } // setupUi

    void retranslateUi(QDialog *addtaskdialog)
    {
        addtaskdialog->setWindowTitle(QApplication::translate("addtaskdialog", "Dialog", 0));
        lineEdit->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class addtaskdialog: public Ui_addtaskdialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDTASKDIALOG_H

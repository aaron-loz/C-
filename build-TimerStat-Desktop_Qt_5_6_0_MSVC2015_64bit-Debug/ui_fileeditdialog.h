/********************************************************************************
** Form generated from reading UI file 'fileeditdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILEEDITDIALOG_H
#define UI_FILEEDITDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_fileEditDialog
{
public:
    QDialogButtonBox *buttonBox;
    QTextEdit *textEdit;

    void setupUi(QDialog *fileEditDialog)
    {
        if (fileEditDialog->objectName().isEmpty())
            fileEditDialog->setObjectName(QStringLiteral("fileEditDialog"));
        fileEditDialog->resize(240, 320);
        buttonBox = new QDialogButtonBox(fileEditDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(150, 10, 81, 301));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        textEdit = new QTextEdit(fileEditDialog);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(10, 20, 131, 281));

        retranslateUi(fileEditDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), fileEditDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), fileEditDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(fileEditDialog);
    } // setupUi

    void retranslateUi(QDialog *fileEditDialog)
    {
        fileEditDialog->setWindowTitle(QApplication::translate("fileEditDialog", "Dialog", 0));
        textEdit->setHtml(QApplication::translate("fileEditDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class fileEditDialog: public Ui_fileEditDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILEEDITDIALOG_H

/********************************************************************************
** Form generated from reading UI file 'cdebugdialog.ui'
**
** Created: Fri Sep 15 10:40:42 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CDEBUGDIALOG_H
#define UI_CDEBUGDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CDebugDialog
{
public:
    QPushButton *okButton;
    QLabel *label;
    QLineEdit *pageindexEdit;
    QLabel *label_2;

    void setupUi(QDialog *CDebugDialog)
    {
        if (CDebugDialog->objectName().isEmpty())
            CDebugDialog->setObjectName(QString::fromUtf8("CDebugDialog"));
        CDebugDialog->setWindowModality(Qt::ApplicationModal);
        CDebugDialog->resize(315, 134);
        CDebugDialog->setModal(true);
        okButton = new QPushButton(CDebugDialog);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        okButton->setGeometry(QRect(200, 90, 101, 38));
        label = new QLabel(CDebugDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 40, 131, 28));
        pageindexEdit = new QLineEdit(CDebugDialog);
        pageindexEdit->setObjectName(QString::fromUtf8("pageindexEdit"));
        pageindexEdit->setGeometry(QRect(150, 30, 141, 38));
        label_2 = new QLabel(CDebugDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 90, 181, 28));

        retranslateUi(CDebugDialog);

        QMetaObject::connectSlotsByName(CDebugDialog);
    } // setupUi

    void retranslateUi(QDialog *CDebugDialog)
    {
        CDebugDialog->setWindowTitle(QApplication::translate("CDebugDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        okButton->setText(QApplication::translate("CDebugDialog", "OK", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CDebugDialog", "PageIndex:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CDebugDialog", "CurIndex:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CDebugDialog: public Ui_CDebugDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CDEBUGDIALOG_H

/********************************************************************************
** Form generated from reading UI file 'cconfirmdialog.ui'
**
** Created: Fri Sep 15 10:40:42 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CCONFIRMDIALOG_H
#define UI_CCONFIRMDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CConfirmDialog
{
public:
    QPushButton *pushButton_yes;
    QPushButton *pushButton_no;
    QLabel *label;

    void setupUi(QDialog *CConfirmDialog)
    {
        if (CConfirmDialog->objectName().isEmpty())
            CConfirmDialog->setObjectName(QString::fromUtf8("CConfirmDialog"));
        CConfirmDialog->setWindowModality(Qt::ApplicationModal);
        CConfirmDialog->resize(400, 119);
        CConfirmDialog->setModal(true);
        pushButton_yes = new QPushButton(CConfirmDialog);
        pushButton_yes->setObjectName(QString::fromUtf8("pushButton_yes"));
        pushButton_yes->setGeometry(QRect(110, 80, 91, 31));
        pushButton_yes->setAutoDefault(false);
        pushButton_no = new QPushButton(CConfirmDialog);
        pushButton_no->setObjectName(QString::fromUtf8("pushButton_no"));
        pushButton_no->setGeometry(QRect(210, 80, 91, 31));
        pushButton_no->setAutoDefault(false);
        pushButton_no->setDefault(true);
        label = new QLabel(CConfirmDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 40, 281, 21));

        retranslateUi(CConfirmDialog);

        QMetaObject::connectSlotsByName(CConfirmDialog);
    } // setupUi

    void retranslateUi(QDialog *CConfirmDialog)
    {
        CConfirmDialog->setWindowTitle(QApplication::translate("CConfirmDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        pushButton_yes->setText(QApplication::translate("CConfirmDialog", "\346\230\257", 0, QApplication::UnicodeUTF8));
        pushButton_no->setText(QApplication::translate("CConfirmDialog", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CConfirmDialog", "TextLabel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CConfirmDialog: public Ui_CConfirmDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CCONFIRMDIALOG_H

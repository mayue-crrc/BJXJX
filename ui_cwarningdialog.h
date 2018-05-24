/********************************************************************************
** Form generated from reading UI file 'cwarningdialog.ui'
**
** Created: Fri Sep 15 10:40:42 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CWARNINGDIALOG_H
#define UI_CWARNINGDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CWarningDialog
{
public:
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QDialog *CWarningDialog)
    {
        if (CWarningDialog->objectName().isEmpty())
            CWarningDialog->setObjectName(QString::fromUtf8("CWarningDialog"));
        CWarningDialog->setWindowModality(Qt::ApplicationModal);
        CWarningDialog->resize(400, 119);
        CWarningDialog->setFocusPolicy(Qt::NoFocus);
        CWarningDialog->setModal(true);
        pushButton = new QPushButton(CWarningDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(170, 70, 81, 38));
        label = new QLabel(CWarningDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 20, 321, 51));

        retranslateUi(CWarningDialog);

        QMetaObject::connectSlotsByName(CWarningDialog);
    } // setupUi

    void retranslateUi(QDialog *CWarningDialog)
    {
        CWarningDialog->setWindowTitle(QApplication::translate("CWarningDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("CWarningDialog", "OK", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CWarningDialog", "TextLabel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CWarningDialog: public Ui_CWarningDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CWARNINGDIALOG_H

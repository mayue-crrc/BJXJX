/********************************************************************************
** Form generated from reading UI file 'CRealTimeFaultsWarnningDialog.ui'
**
** Created: Fri Sep 15 10:40:42 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREALTIMEFAULTSWARNNINGDIALOG_H
#define UI_CREALTIMEFAULTSWARNNINGDIALOG_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CRealTimeFaultsWarnningDialog
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;

    void setupUi(QDialog *CRealTimeFaultsWarnningDialog)
    {
        if (CRealTimeFaultsWarnningDialog->objectName().isEmpty())
            CRealTimeFaultsWarnningDialog->setObjectName(QString::fromUtf8("CRealTimeFaultsWarnningDialog"));
        CRealTimeFaultsWarnningDialog->resize(800, 48);
        QFont font;
        font.setFamily(QString::fromUtf8("SimHei"));
        CRealTimeFaultsWarnningDialog->setFont(font);
        CRealTimeFaultsWarnningDialog->setStyleSheet(QString::fromUtf8(""));
        CRealTimeFaultsWarnningDialog->setLocale(QLocale(QLocale::Chinese, QLocale::China));
        pushButton = new QPushButton(CRealTimeFaultsWarnningDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(640, 5, 61, 38));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font1.setPointSize(12);
        pushButton->setFont(font1);
        pushButton_2 = new QPushButton(CRealTimeFaultsWarnningDialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(706, 5, 91, 38));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setWeight(50);
        pushButton_2->setFont(font2);
        label = new QLabel(CRealTimeFaultsWarnningDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 7, 641, 31));
        QFont font3;
        font3.setPointSize(9);
        label->setFont(font3);

        retranslateUi(CRealTimeFaultsWarnningDialog);

        QMetaObject::connectSlotsByName(CRealTimeFaultsWarnningDialog);
    } // setupUi

    void retranslateUi(QDialog *CRealTimeFaultsWarnningDialog)
    {
        CRealTimeFaultsWarnningDialog->setWindowTitle(QApplication::translate("CRealTimeFaultsWarnningDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("CRealTimeFaultsWarnningDialog", "\347\241\256\350\256\244", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("CRealTimeFaultsWarnningDialog", "\345\205\250\351\203\250\347\241\256\350\256\244", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CRealTimeFaultsWarnningDialog", "TextLabel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CRealTimeFaultsWarnningDialog: public Ui_CRealTimeFaultsWarnningDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREALTIMEFAULTSWARNNINGDIALOG_H

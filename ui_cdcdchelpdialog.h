/********************************************************************************
** Form generated from reading UI file 'cdcdchelpdialog.ui'
**
** Created: Fri Sep 15 10:40:42 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CDCDCHELPDIALOG_H
#define UI_CDCDCHELPDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CDcdcHelpDialog
{
public:
    QPushButton *quitPushButton;
    QLabel *Label1_7;
    QLabel *label_3;
    QLabel *Label1_5;
    QLabel *label;

    void setupUi(QDialog *CDcdcHelpDialog)
    {
        if (CDcdcHelpDialog->objectName().isEmpty())
            CDcdcHelpDialog->setObjectName(QString::fromUtf8("CDcdcHelpDialog"));
        CDcdcHelpDialog->setWindowModality(Qt::ApplicationModal);
        CDcdcHelpDialog->resize(364, 156);
        CDcdcHelpDialog->setModal(true);
        quitPushButton = new QPushButton(CDcdcHelpDialog);
        quitPushButton->setObjectName(QString::fromUtf8("quitPushButton"));
        quitPushButton->setGeometry(QRect(140, 100, 90, 40));
        QFont font;
        quitPushButton->setFont(font);
        Label1_7 = new QLabel(CDcdcHelpDialog);
        Label1_7->setObjectName(QString::fromUtf8("Label1_7"));
        Label1_7->setGeometry(QRect(160, 10, 111, 26));
        Label1_7->setFont(font);
        label_3 = new QLabel(CDcdcHelpDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(120, 10, 30, 30));
        label_3->setStyleSheet(QString::fromUtf8("background-color: gray;\n"
"border: 2px solid  rgb(255, 255, 0);"));
        Label1_5 = new QLabel(CDcdcHelpDialog);
        Label1_5->setObjectName(QString::fromUtf8("Label1_5"));
        Label1_5->setGeometry(QRect(160, 50, 101, 31));
        Label1_5->setFont(font);
        Label1_5->setAutoFillBackground(false);
        label = new QLabel(CDcdcHelpDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 50, 30, 30));
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 255, 0);\n"
"background-color: rgb(0, 135, 06);\n"
"border: 2px solid  rgb(255, 255, 0);\n"
""));

        retranslateUi(CDcdcHelpDialog);

        QMetaObject::connectSlotsByName(CDcdcHelpDialog);
    } // setupUi

    void retranslateUi(QDialog *CDcdcHelpDialog)
    {
        CDcdcHelpDialog->setWindowTitle(QApplication::translate("CDcdcHelpDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        quitPushButton->setStyleSheet(QApplication::translate("CDcdcHelpDialog", "border: 2px solid  rgb(255, 255, 0);\n"
"\n"
"", 0, QApplication::UnicodeUTF8));
        quitPushButton->setText(QApplication::translate("CDcdcHelpDialog", "\351\200\200\345\207\272", 0, QApplication::UnicodeUTF8));
        Label1_7->setStyleSheet(QString());
        Label1_7->setText(QApplication::translate("CDcdcHelpDialog", "\357\274\232\345\201\234\346\255\242/\346\226\255\345\274\200", 0, QApplication::UnicodeUTF8));
        label_3->setText(QString());
        Label1_5->setStyleSheet(QString());
        Label1_5->setText(QApplication::translate("CDcdcHelpDialog", "\357\274\232\346\255\243\345\270\270/\351\227\255\345\220\210", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CDcdcHelpDialog: public Ui_CDcdcHelpDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CDCDCHELPDIALOG_H

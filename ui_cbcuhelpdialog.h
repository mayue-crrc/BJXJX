/********************************************************************************
** Form generated from reading UI file 'cbcuhelpdialog.ui'
**
** Created: Fri Sep 15 10:40:42 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CBCUHELPDIALOG_H
#define UI_CBCUHELPDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CBcuHelpDialog
{
public:
    QLabel *label_2;
    QLabel *Label1_6;
    QPushButton *quitPushButton;
    QLabel *Label1_7;
    QLabel *label_3;
    QLabel *Label1_5;
    QLabel *label;
    QLabel *label_4;
    QLabel *Label1_8;

    void setupUi(QDialog *CBcuHelpDialog)
    {
        if (CBcuHelpDialog->objectName().isEmpty())
            CBcuHelpDialog->setObjectName(QString::fromUtf8("CBcuHelpDialog"));
        CBcuHelpDialog->setWindowModality(Qt::ApplicationModal);
        CBcuHelpDialog->resize(358, 286);
        CBcuHelpDialog->setModal(true);
        label_2 = new QLabel(CBcuHelpDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(80, 10, 30, 30));
        label_2->setStyleSheet(QString::fromUtf8("background-color: red;\n"
"border: 2px solid  rgb(255, 255, 0);"));
        Label1_6 = new QLabel(CBcuHelpDialog);
        Label1_6->setObjectName(QString::fromUtf8("Label1_6"));
        Label1_6->setGeometry(QRect(120, 10, 261, 26));
        QFont font;
        Label1_6->setFont(font);
        quitPushButton = new QPushButton(CBcuHelpDialog);
        quitPushButton->setObjectName(QString::fromUtf8("quitPushButton"));
        quitPushButton->setGeometry(QRect(130, 230, 90, 40));
        quitPushButton->setFont(font);
        Label1_7 = new QLabel(CBcuHelpDialog);
        Label1_7->setObjectName(QString::fromUtf8("Label1_7"));
        Label1_7->setGeometry(QRect(120, 50, 271, 26));
        Label1_7->setFont(font);
        label_3 = new QLabel(CBcuHelpDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(80, 50, 30, 30));
        label_3->setStyleSheet(QString::fromUtf8("background-color: gray;\n"
"border: 2px solid  rgb(255, 255, 0);"));
        Label1_5 = new QLabel(CBcuHelpDialog);
        Label1_5->setObjectName(QString::fromUtf8("Label1_5"));
        Label1_5->setGeometry(QRect(120, 80, 281, 81));
        Label1_5->setFont(font);
        Label1_5->setAutoFillBackground(false);
        label = new QLabel(CBcuHelpDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 90, 30, 30));
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 255, 0);\n"
"background-color: rgb(0, 135, 06);\n"
"border: 2px solid  rgb(255, 255, 0);\n"
""));
        label_4 = new QLabel(CBcuHelpDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(80, 160, 30, 30));
        label_4->setStyleSheet(QString::fromUtf8("background-color: gray;\n"
"border: 2px solid  rgb(255, 255, 0);"));
        Label1_8 = new QLabel(CBcuHelpDialog);
        Label1_8->setObjectName(QString::fromUtf8("Label1_8"));
        Label1_8->setGeometry(QRect(120, 155, 261, 71));
        Label1_8->setFont(font);

        retranslateUi(CBcuHelpDialog);

        QMetaObject::connectSlotsByName(CBcuHelpDialog);
    } // setupUi

    void retranslateUi(QDialog *CBcuHelpDialog)
    {
        CBcuHelpDialog->setWindowTitle(QApplication::translate("CBcuHelpDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
        Label1_6->setStyleSheet(QString());
        Label1_6->setText(QApplication::translate("CBcuHelpDialog", ": Major/Minor Event Occured", 0, QApplication::UnicodeUTF8));
        quitPushButton->setStyleSheet(QApplication::translate("CBcuHelpDialog", "border: 2px solid  rgb(255, 255, 0);\n"
"\n"
"", 0, QApplication::UnicodeUTF8));
        quitPushButton->setText(QApplication::translate("CBcuHelpDialog", "Quit", 0, QApplication::UnicodeUTF8));
        Label1_7->setStyleSheet(QString());
        Label1_7->setText(QApplication::translate("CBcuHelpDialog", ": Major/Minor Event Not Occured or Not OK or Release", 0, QApplication::UnicodeUTF8));
        label_3->setText(QString());
        Label1_5->setStyleSheet(QString());
        Label1_5->setText(QApplication::translate("CBcuHelpDialog", "\357\274\232OK\n"
"   WSP Active\n"
"   Applyed", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_4->setText(QString());
        Label1_8->setStyleSheet(QString());
        Label1_8->setText(QApplication::translate("CBcuHelpDialog", ": Fault\n"
"   WSP not Active\n"
"   Not Applyed", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CBcuHelpDialog: public Ui_CBcuHelpDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CBCUHELPDIALOG_H

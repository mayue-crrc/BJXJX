/********************************************************************************
** Form generated from reading UI file 'cnethelpdialog.ui'
**
** Created: Fri Sep 15 10:40:42 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CNETHELPDIALOG_H
#define UI_CNETHELPDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CNetHelpDialog
{
public:
    QLabel *Label1_6;
    QLabel *label;
    QLabel *Label1_5;
    QLabel *label_2;
    QPushButton *quitPushButton;
    QLabel *label_3;
    QLabel *Label1_7;

    void setupUi(QDialog *CNetHelpDialog)
    {
        if (CNetHelpDialog->objectName().isEmpty())
            CNetHelpDialog->setObjectName(QString::fromUtf8("CNetHelpDialog"));
        CNetHelpDialog->setWindowModality(Qt::ApplicationModal);
        CNetHelpDialog->resize(484, 202);
        CNetHelpDialog->setModal(true);
        Label1_6 = new QLabel(CNetHelpDialog);
        Label1_6->setObjectName(QString::fromUtf8("Label1_6"));
        Label1_6->setGeometry(QRect(90, 50, 101, 30));
        QFont font;
        Label1_6->setFont(font);
        label = new QLabel(CNetHelpDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 10, 30, 30));
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        label->setFont(font1);
        Label1_5 = new QLabel(CNetHelpDialog);
        Label1_5->setObjectName(QString::fromUtf8("Label1_5"));
        Label1_5->setGeometry(QRect(90, 10, 101, 26));
        Label1_5->setFont(font);
        label_2 = new QLabel(CNetHelpDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 50, 30, 30));
        label_2->setStyleSheet(QString::fromUtf8("background-color:gray;\n"
"border: 2px solid  rgb(255, 255, 0);"));
        quitPushButton = new QPushButton(CNetHelpDialog);
        quitPushButton->setObjectName(QString::fromUtf8("quitPushButton"));
        quitPushButton->setGeometry(QRect(180, 140, 90, 40));
        quitPushButton->setFont(font);
        label_3 = new QLabel(CNetHelpDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 90, 30, 30));
        label_3->setStyleSheet(QString::fromUtf8("border: 2px solid  rgb(255, 255, 0);"));
        Label1_7 = new QLabel(CNetHelpDialog);
        Label1_7->setObjectName(QString::fromUtf8("Label1_7"));
        Label1_7->setGeometry(QRect(90, 90, 381, 30));
        Label1_7->setFont(font);

        retranslateUi(CNetHelpDialog);

        QMetaObject::connectSlotsByName(CNetHelpDialog);
    } // setupUi

    void retranslateUi(QDialog *CNetHelpDialog)
    {
        CNetHelpDialog->setWindowTitle(QApplication::translate("CNetHelpDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        Label1_6->setStyleSheet(QString());
        Label1_6->setText(QApplication::translate("CNetHelpDialog", ":\351\200\232\344\277\241\346\225\205\351\232\234", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        label->setStyleSheet(QApplication::translate("CNetHelpDialog", "background-color: rgb(0, 135, 06);\n"
"border: 2px solid  rgb(255, 255, 0);", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        Label1_5->setStyleSheet(QString());
        Label1_5->setText(QApplication::translate("CNetHelpDialog", ":\345\234\250\347\272\277", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
        quitPushButton->setStyleSheet(QApplication::translate("CNetHelpDialog", "border: 2px solid  rgb(255, 255, 0);\n"
"\n"
"", 0, QApplication::UnicodeUTF8));
        quitPushButton->setText(QApplication::translate("CNetHelpDialog", "\351\200\200\345\207\272", 0, QApplication::UnicodeUTF8));
        label_3->setText(QString());
        Label1_7->setStyleSheet(QString());
        Label1_7->setText(QApplication::translate("CNetHelpDialog", ":\344\270\215\345\234\250\347\272\277", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CNetHelpDialog: public Ui_CNetHelpDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CNETHELPDIALOG_H

/********************************************************************************
** Form generated from reading UI file 'chvachelpdialog.ui'
**
** Created: Fri Sep 15 10:40:42 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHVACHELPDIALOG_H
#define UI_CHVACHELPDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CHvacHelpDialog
{
public:
    QLabel *Label1_5;
    QLabel *label_2;
    QLabel *label;
    QLabel *Label1_6;
    QPushButton *quitPushButton;

    void setupUi(QDialog *CHvacHelpDialog)
    {
        if (CHvacHelpDialog->objectName().isEmpty())
            CHvacHelpDialog->setObjectName(QString::fromUtf8("CHvacHelpDialog"));
        CHvacHelpDialog->setWindowModality(Qt::ApplicationModal);
        CHvacHelpDialog->resize(352, 154);
        CHvacHelpDialog->setModal(true);
        Label1_5 = new QLabel(CHvacHelpDialog);
        Label1_5->setObjectName(QString::fromUtf8("Label1_5"));
        Label1_5->setGeometry(QRect(105, 10, 221, 26));
        QFont font;
        Label1_5->setFont(font);
        label_2 = new QLabel(CHvacHelpDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(65, 50, 30, 30));
        label_2->setStyleSheet(QString::fromUtf8("background-color:gray;\n"
"border: 2px solid  rgb(255, 255, 0);"));
        label = new QLabel(CHvacHelpDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(65, 10, 30, 30));
        Label1_6 = new QLabel(CHvacHelpDialog);
        Label1_6->setObjectName(QString::fromUtf8("Label1_6"));
        Label1_6->setGeometry(QRect(105, 50, 221, 26));
        Label1_6->setFont(font);
        quitPushButton = new QPushButton(CHvacHelpDialog);
        quitPushButton->setObjectName(QString::fromUtf8("quitPushButton"));
        quitPushButton->setGeometry(QRect(120, 100, 90, 40));
        quitPushButton->setFont(font);

        retranslateUi(CHvacHelpDialog);

        QMetaObject::connectSlotsByName(CHvacHelpDialog);
    } // setupUi

    void retranslateUi(QDialog *CHvacHelpDialog)
    {
        CHvacHelpDialog->setWindowTitle(QApplication::translate("CHvacHelpDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        Label1_5->setStyleSheet(QString());
        Label1_5->setText(QApplication::translate("CHvacHelpDialog", ": Ok / Working / Not Locked / Not Out", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
        label->setStyleSheet(QApplication::translate("CHvacHelpDialog", "background-color: rgb(0, 135, 06);\n"
"border: 2px solid  rgb(255, 255, 0);", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        Label1_6->setStyleSheet(QString());
        Label1_6->setText(QApplication::translate("CHvacHelpDialog", ": Fault / Stop / Locked / Out", 0, QApplication::UnicodeUTF8));
        quitPushButton->setStyleSheet(QApplication::translate("CHvacHelpDialog", "border: 2px solid  rgb(255, 255, 0);\n"
"\n"
"", 0, QApplication::UnicodeUTF8));
        quitPushButton->setText(QApplication::translate("CHvacHelpDialog", "Quit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CHvacHelpDialog: public Ui_CHvacHelpDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHVACHELPDIALOG_H

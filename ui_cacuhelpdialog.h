/********************************************************************************
** Form generated from reading UI file 'cacuhelpdialog.ui'
**
** Created: Fri Sep 15 10:40:42 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CACUHELPDIALOG_H
#define UI_CACUHELPDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CAcuHelpDialog
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *Label1_5;
    QLabel *Label1_6;
    QPushButton *quitPushButton;

    void setupUi(QDialog *CAcuHelpDialog)
    {
        if (CAcuHelpDialog->objectName().isEmpty())
            CAcuHelpDialog->setObjectName(QString::fromUtf8("CAcuHelpDialog"));
        CAcuHelpDialog->setWindowModality(Qt::ApplicationModal);
        CAcuHelpDialog->resize(363, 154);
        CAcuHelpDialog->setModal(true);
        label = new QLabel(CAcuHelpDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 15, 30, 30));
        label_2 = new QLabel(CAcuHelpDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(120, 60, 30, 30));
        label_2->setStyleSheet(QString::fromUtf8("background-color: gray;\n"
"border: 2px solid  rgb(255, 255, 0);"));
        Label1_5 = new QLabel(CAcuHelpDialog);
        Label1_5->setObjectName(QString::fromUtf8("Label1_5"));
        Label1_5->setGeometry(QRect(160, 15, 281, 31));
        QFont font;
        Label1_5->setFont(font);
        Label1_6 = new QLabel(CAcuHelpDialog);
        Label1_6->setObjectName(QString::fromUtf8("Label1_6"));
        Label1_6->setGeometry(QRect(160, 60, 121, 26));
        Label1_6->setFont(font);
        quitPushButton = new QPushButton(CAcuHelpDialog);
        quitPushButton->setObjectName(QString::fromUtf8("quitPushButton"));
        quitPushButton->setGeometry(QRect(140, 100, 90, 40));
        quitPushButton->setFont(font);

        retranslateUi(CAcuHelpDialog);

        QMetaObject::connectSlotsByName(CAcuHelpDialog);
    } // setupUi

    void retranslateUi(QDialog *CAcuHelpDialog)
    {
        CAcuHelpDialog->setWindowTitle(QApplication::translate("CAcuHelpDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setStyleSheet(QApplication::translate("CAcuHelpDialog", "background-color: rgb(0, 135, 06);\n"
"border: 2px solid  rgb(255, 255, 0);", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_2->setText(QString());
        Label1_5->setStyleSheet(QString());
        Label1_5->setText(QApplication::translate("CAcuHelpDialog", ":Working", 0, QApplication::UnicodeUTF8));
        Label1_6->setStyleSheet(QString());
        Label1_6->setText(QApplication::translate("CAcuHelpDialog", ":Stop", 0, QApplication::UnicodeUTF8));
        quitPushButton->setStyleSheet(QApplication::translate("CAcuHelpDialog", "border: 2px solid  rgb(255, 255, 0);\n"
"\n"
"", 0, QApplication::UnicodeUTF8));
        quitPushButton->setText(QApplication::translate("CAcuHelpDialog", "Quit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CAcuHelpDialog: public Ui_CAcuHelpDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CACUHELPDIALOG_H

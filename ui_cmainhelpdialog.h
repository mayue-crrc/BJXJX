/********************************************************************************
** Form generated from reading UI file 'cmainhelpdialog.ui'
**
** Created: Fri Sep 15 10:40:42 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CMAINHELPDIALOG_H
#define UI_CMAINHELPDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_CMainHelpDialog
{
public:
    QPushButton *quitPushButton;
    QToolButton *downToolButton;
    QToolButton *upToolButton;
    QLabel *currentPageLabel;
    QLabel *Label1_7;
    QLabel *Label1_5;
    QLabel *Label1_6;
    QLabel *Label1_27;
    QLabel *Label1_24;
    QLabel *Label1_26;
    QLabel *Label1_25;
    QLabel *label_2;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *Label1_8;
    QLabel *label_11;
    QLabel *Label1_9;
    QLabel *label_12;
    QLabel *Label1_10;
    QLabel *label_13;
    QLabel *Label1_11;
    QLabel *label_14;
    QLabel *Label1_12;
    QLabel *label_15;
    QLabel *Label1_13;
    QLabel *label_16;
    QLabel *Label1_14;
    QLabel *label_17;
    QLabel *Label1_15;
    QLabel *label_18;
    QLabel *Label1_16;
    QLabel *label_19;
    QLabel *Label1_17;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *Label1_28;

    void setupUi(QDialog *CMainHelpDialog)
    {
        if (CMainHelpDialog->objectName().isEmpty())
            CMainHelpDialog->setObjectName(QString::fromUtf8("CMainHelpDialog"));
        CMainHelpDialog->setWindowModality(Qt::ApplicationModal);
        CMainHelpDialog->resize(640, 415);
        CMainHelpDialog->setSizeGripEnabled(false);
        CMainHelpDialog->setModal(true);
        quitPushButton = new QPushButton(CMainHelpDialog);
        quitPushButton->setObjectName(QString::fromUtf8("quitPushButton"));
        quitPushButton->setGeometry(QRect(520, 360, 90, 40));
        QFont font;
        quitPushButton->setFont(font);
        downToolButton = new QToolButton(CMainHelpDialog);
        downToolButton->setObjectName(QString::fromUtf8("downToolButton"));
        downToolButton->setGeometry(QRect(380, 360, 51, 41));
        downToolButton->setStyleSheet(QString::fromUtf8("background-color: rgb(54, 54, 54);\n"
"border: 0px solid;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("resource/image/down.png"), QSize(), QIcon::Normal, QIcon::Off);
        downToolButton->setIcon(icon);
        downToolButton->setIconSize(QSize(48, 48));
        upToolButton = new QToolButton(CMainHelpDialog);
        upToolButton->setObjectName(QString::fromUtf8("upToolButton"));
        upToolButton->setEnabled(false);
        upToolButton->setGeometry(QRect(440, 360, 51, 41));
        upToolButton->setStyleSheet(QString::fromUtf8("background-color: rgb(54, 54, 54);\n"
"border: 0px solid;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("resource/image/up.png"), QSize(), QIcon::Normal, QIcon::Off);
        upToolButton->setIcon(icon1);
        upToolButton->setIconSize(QSize(48, 48));
        currentPageLabel = new QLabel(CMainHelpDialog);
        currentPageLabel->setObjectName(QString::fromUtf8("currentPageLabel"));
        currentPageLabel->setGeometry(QRect(340, 360, 31, 41));
        currentPageLabel->setFont(font);
        Label1_7 = new QLabel(CMainHelpDialog);
        Label1_7->setObjectName(QString::fromUtf8("Label1_7"));
        Label1_7->setGeometry(QRect(80, 100, 220, 17));
        Label1_7->setFont(font);
        Label1_5 = new QLabel(CMainHelpDialog);
        Label1_5->setObjectName(QString::fromUtf8("Label1_5"));
        Label1_5->setGeometry(QRect(80, 20, 220, 17));
        Label1_5->setFont(font);
        Label1_6 = new QLabel(CMainHelpDialog);
        Label1_6->setObjectName(QString::fromUtf8("Label1_6"));
        Label1_6->setGeometry(QRect(80, 60, 220, 17));
        Label1_6->setFont(font);
        Label1_27 = new QLabel(CMainHelpDialog);
        Label1_27->setObjectName(QString::fromUtf8("Label1_27"));
        Label1_27->setGeometry(QRect(410, 180, 220, 17));
        Label1_27->setFont(font);
        Label1_24 = new QLabel(CMainHelpDialog);
        Label1_24->setObjectName(QString::fromUtf8("Label1_24"));
        Label1_24->setGeometry(QRect(410, 140, 220, 17));
        Label1_24->setFont(font);
        Label1_26 = new QLabel(CMainHelpDialog);
        Label1_26->setObjectName(QString::fromUtf8("Label1_26"));
        Label1_26->setGeometry(QRect(410, 260, 220, 17));
        Label1_26->setFont(font);
        Label1_25 = new QLabel(CMainHelpDialog);
        Label1_25->setObjectName(QString::fromUtf8("Label1_25"));
        Label1_25->setGeometry(QRect(410, 220, 220, 17));
        Label1_25->setFont(font);
        label_2 = new QLabel(CMainHelpDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 10, 41, 31));
        label_2->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/resource/image/TCUOK.png);"));
        label_8 = new QLabel(CMainHelpDialog);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(20, 50, 41, 31));
        label_8->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/resource/image/TCU.png);"));
        label_9 = new QLabel(CMainHelpDialog);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(20, 90, 41, 31));
        label_9->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/resource/image/TCU1.png);"));
        label_10 = new QLabel(CMainHelpDialog);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(20, 130, 41, 31));
        label_10->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/resource/image/TCU1.png);\n"
"border-image: url(:/new/prefix1/resource/image/ACU12.png);"));
        Label1_8 = new QLabel(CMainHelpDialog);
        Label1_8->setObjectName(QString::fromUtf8("Label1_8"));
        Label1_8->setGeometry(QRect(80, 140, 220, 17));
        Label1_8->setFont(font);
        label_11 = new QLabel(CMainHelpDialog);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(20, 170, 41, 31));
        label_11->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/resource/image/ACU13.png);"));
        Label1_9 = new QLabel(CMainHelpDialog);
        Label1_9->setObjectName(QString::fromUtf8("Label1_9"));
        Label1_9->setGeometry(QRect(80, 180, 220, 17));
        Label1_9->setFont(font);
        label_12 = new QLabel(CMainHelpDialog);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(20, 210, 41, 31));
        label_12->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/resource/image/ACU1.png);"));
        Label1_10 = new QLabel(CMainHelpDialog);
        Label1_10->setObjectName(QString::fromUtf8("Label1_10"));
        Label1_10->setGeometry(QRect(80, 220, 220, 17));
        Label1_10->setFont(font);
        label_13 = new QLabel(CMainHelpDialog);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(20, 250, 41, 31));
        label_13->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/resource/image/AP.png);"));
        Label1_11 = new QLabel(CMainHelpDialog);
        Label1_11->setObjectName(QString::fromUtf8("Label1_11"));
        Label1_11->setGeometry(QRect(80, 260, 220, 17));
        Label1_11->setFont(font);
        label_14 = new QLabel(CMainHelpDialog);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(20, 290, 41, 31));
        label_14->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/resource/image/ATC1.png);"));
        Label1_12 = new QLabel(CMainHelpDialog);
        Label1_12->setObjectName(QString::fromUtf8("Label1_12"));
        Label1_12->setGeometry(QRect(80, 300, 220, 17));
        Label1_12->setFont(font);
        label_15 = new QLabel(CMainHelpDialog);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(20, 330, 41, 31));
        label_15->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/resource/image/SCP1.png);"));
        Label1_13 = new QLabel(CMainHelpDialog);
        Label1_13->setObjectName(QString::fromUtf8("Label1_13"));
        Label1_13->setGeometry(QRect(80, 340, 220, 17));
        Label1_13->setFont(font);
        label_16 = new QLabel(CMainHelpDialog);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(20, 370, 41, 31));
        label_16->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/resource/image/SCP2.png);"));
        Label1_14 = new QLabel(CMainHelpDialog);
        Label1_14->setObjectName(QString::fromUtf8("Label1_14"));
        Label1_14->setGeometry(QRect(80, 380, 220, 17));
        Label1_14->setFont(font);
        label_17 = new QLabel(CMainHelpDialog);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(350, 10, 41, 31));
        label_17->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/resource/image/SCP3.png);"));
        Label1_15 = new QLabel(CMainHelpDialog);
        Label1_15->setObjectName(QString::fromUtf8("Label1_15"));
        Label1_15->setGeometry(QRect(410, 20, 220, 17));
        Label1_15->setFont(font);
        label_18 = new QLabel(CMainHelpDialog);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(360, 50, 21, 31));
        label_18->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/resource/image/KM2.png);"));
        Label1_16 = new QLabel(CMainHelpDialog);
        Label1_16->setObjectName(QString::fromUtf8("Label1_16"));
        Label1_16->setGeometry(QRect(410, 60, 220, 17));
        Label1_16->setFont(font);
        label_19 = new QLabel(CMainHelpDialog);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(360, 90, 21, 31));
        label_19->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/resource/image/KM1.png);"));
        Label1_17 = new QLabel(CMainHelpDialog);
        Label1_17->setObjectName(QString::fromUtf8("Label1_17"));
        Label1_17->setGeometry(QRect(410, 100, 220, 17));
        Label1_17->setFont(font);
        label_20 = new QLabel(CMainHelpDialog);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(350, 290, 41, 31));
        label_20->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/resource/image/BCU1.png);"));
        label_21 = new QLabel(CMainHelpDialog);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(350, 130, 41, 31));
        label_21->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/resource/image/BRAKE1.png);"));
        label_22 = new QLabel(CMainHelpDialog);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(350, 170, 41, 31));
        label_22->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/resource/image/BRAKE2.png);"));
        label_23 = new QLabel(CMainHelpDialog);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(350, 210, 41, 31));
        label_23->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/resource/image/BRAKE4.png);"));
        label_24 = new QLabel(CMainHelpDialog);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(350, 250, 41, 31));
        label_24->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/resource/image/BRAKE3.png);"));
        Label1_28 = new QLabel(CMainHelpDialog);
        Label1_28->setObjectName(QString::fromUtf8("Label1_28"));
        Label1_28->setGeometry(QRect(410, 300, 220, 17));
        Label1_28->setFont(font);

        retranslateUi(CMainHelpDialog);

        QMetaObject::connectSlotsByName(CMainHelpDialog);
    } // setupUi

    void retranslateUi(QDialog *CMainHelpDialog)
    {
        CMainHelpDialog->setWindowTitle(QApplication::translate("CMainHelpDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        quitPushButton->setStyleSheet(QApplication::translate("CMainHelpDialog", "border: 2px solid  rgb(255, 255, 0);\n"
"\n"
"", 0, QApplication::UnicodeUTF8));
        quitPushButton->setText(QApplication::translate("CMainHelpDialog", "Quit", 0, QApplication::UnicodeUTF8));
        downToolButton->setText(QApplication::translate("CMainHelpDialog", "...", 0, QApplication::UnicodeUTF8));
        upToolButton->setText(QApplication::translate("CMainHelpDialog", "...", 0, QApplication::UnicodeUTF8));
        currentPageLabel->setStyleSheet(QString());
        currentPageLabel->setText(QApplication::translate("CMainHelpDialog", "1/3", 0, QApplication::UnicodeUTF8));
        Label1_7->setStyleSheet(QString());
        Label1_7->setText(QApplication::translate("CMainHelpDialog", ": \347\211\265\345\274\225\351\200\232\350\256\257\346\225\205\351\232\234\346\210\226\347\246\273\347\272\277", 0, QApplication::UnicodeUTF8));
        Label1_5->setStyleSheet(QString());
        Label1_5->setText(QApplication::translate("CMainHelpDialog", ": \347\211\265\345\274\225\346\255\243\345\270\270", 0, QApplication::UnicodeUTF8));
        Label1_6->setStyleSheet(QString());
        Label1_6->setText(QApplication::translate("CMainHelpDialog", ": \347\211\265\345\274\225\346\225\205\351\232\234", 0, QApplication::UnicodeUTF8));
        Label1_27->setStyleSheet(QString());
        Label1_27->setText(QApplication::translate("CMainHelpDialog", ": \345\210\266\345\212\250\346\255\243\345\270\270\347\274\223\350\247\243", 0, QApplication::UnicodeUTF8));
        Label1_24->setStyleSheet(QString());
        Label1_24->setText(QApplication::translate("CMainHelpDialog", ": \345\210\266\345\212\250\346\255\243\345\270\270\346\226\275\345\212\240", 0, QApplication::UnicodeUTF8));
        Label1_26->setStyleSheet(QString());
        Label1_26->setText(QApplication::translate("CMainHelpDialog", ": \345\210\266\345\212\250\346\225\205\351\232\234\347\274\223\350\247\243", 0, QApplication::UnicodeUTF8));
        Label1_25->setStyleSheet(QString());
        Label1_25->setText(QApplication::translate("CMainHelpDialog", ": \345\210\266\345\212\250\346\225\205\351\232\234\346\226\275\345\212\240", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
        label_8->setText(QString());
        label_9->setText(QString());
        label_10->setText(QString());
        Label1_8->setStyleSheet(QString());
        Label1_8->setText(QApplication::translate("CMainHelpDialog", ": \350\276\205\345\212\251\346\255\243\345\270\270", 0, QApplication::UnicodeUTF8));
        label_11->setText(QString());
        Label1_9->setStyleSheet(QString());
        Label1_9->setText(QApplication::translate("CMainHelpDialog", ": \350\276\205\345\212\251\346\225\205\351\232\234", 0, QApplication::UnicodeUTF8));
        label_12->setText(QString());
        Label1_10->setStyleSheet(QString());
        Label1_10->setText(QApplication::translate("CMainHelpDialog", ": \350\276\205\345\212\251\351\200\232\350\256\257\346\225\205\351\232\234\346\210\226\347\246\273\347\272\277", 0, QApplication::UnicodeUTF8));
        label_13->setText(QString());
        Label1_11->setStyleSheet(QString());
        Label1_11->setText(QApplication::translate("CMainHelpDialog", ": TW\350\243\205\347\275\256\346\255\243\345\270\270", 0, QApplication::UnicodeUTF8));
        label_14->setText(QString());
        Label1_12->setStyleSheet(QString());
        Label1_12->setText(QApplication::translate("CMainHelpDialog", ": TW\350\243\205\347\275\256\346\225\205\351\232\234", 0, QApplication::UnicodeUTF8));
        label_15->setText(QString());
        Label1_13->setStyleSheet(QString());
        Label1_13->setText(QApplication::translate("CMainHelpDialog", ": \350\266\205\347\272\247\347\224\265\345\256\271\346\255\243\345\270\270", 0, QApplication::UnicodeUTF8));
        label_16->setText(QString());
        Label1_14->setStyleSheet(QString());
        Label1_14->setText(QApplication::translate("CMainHelpDialog", ": \350\266\205\347\272\247\347\224\265\345\256\271\346\225\205\351\232\234", 0, QApplication::UnicodeUTF8));
        label_17->setText(QString());
        Label1_15->setStyleSheet(QString());
        Label1_15->setText(QApplication::translate("CMainHelpDialog", ": \350\266\205\347\272\247\347\224\265\345\256\271\351\200\232\350\256\257\346\225\205\351\232\234\346\210\226\347\246\273\347\272\277", 0, QApplication::UnicodeUTF8));
        label_18->setText(QString());
        Label1_16->setStyleSheet(QString());
        Label1_16->setText(QApplication::translate("CMainHelpDialog", ": \346\216\245\350\247\246\345\231\250\351\227\255\345\220\210", 0, QApplication::UnicodeUTF8));
        label_19->setText(QString());
        Label1_17->setStyleSheet(QString());
        Label1_17->setText(QApplication::translate("CMainHelpDialog", ": \346\216\245\350\247\246\345\231\250\346\226\255\345\274\200", 0, QApplication::UnicodeUTF8));
        label_20->setText(QString());
        label_21->setText(QString());
        label_22->setText(QString());
        label_23->setText(QString());
        label_24->setText(QString());
        Label1_28->setStyleSheet(QString());
        Label1_28->setText(QApplication::translate("CMainHelpDialog", ": \345\210\266\345\212\250\351\200\232\350\256\257\346\225\205\351\232\234\346\210\226\347\246\273\347\272\277", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CMainHelpDialog: public Ui_CMainHelpDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CMAINHELPDIALOG_H

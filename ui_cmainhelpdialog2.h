/********************************************************************************
** Form generated from reading UI file 'cmainhelpdialog2.ui'
**
** Created: Fri Sep 15 10:40:42 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CMAINHELPDIALOG2_H
#define UI_CMAINHELPDIALOG2_H

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

class Ui_CMainHelpDialog2
{
public:
    QPushButton *quitPushButton;
    QToolButton *downToolButton;
    QToolButton *upToolButton;
    QLabel *currentPageLabel;
    QLabel *Label1_10;
    QLabel *Label1_9;
    QLabel *Label1_21;
    QLabel *Label1_22;
    QLabel *Label1_23;
    QLabel *Label1_24;
    QLabel *Label1_28;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *Label1_32;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *Label1_33;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *Label1_30;
    QLabel *Label1_34;
    QLabel *Label1_35;
    QLabel *Label1_36;
    QLabel *Label1_37;
    QLabel *label_17;
    QLabel *Label1_38;
    QLabel *label_18;
    QLabel *Label1_39;
    QLabel *label_19;
    QLabel *Label1_40;
    QLabel *label_20;
    QLabel *Label1_41;
    QLabel *label_21;
    QLabel *label_3;
    QLabel *Label1_25;

    void setupUi(QDialog *CMainHelpDialog2)
    {
        if (CMainHelpDialog2->objectName().isEmpty())
            CMainHelpDialog2->setObjectName(QString::fromUtf8("CMainHelpDialog2"));
        CMainHelpDialog2->setWindowModality(Qt::ApplicationModal);
        CMainHelpDialog2->resize(640, 415);
        CMainHelpDialog2->setSizeGripEnabled(false);
        CMainHelpDialog2->setModal(true);
        quitPushButton = new QPushButton(CMainHelpDialog2);
        quitPushButton->setObjectName(QString::fromUtf8("quitPushButton"));
        quitPushButton->setGeometry(QRect(520, 360, 90, 40));
        QFont font;
        quitPushButton->setFont(font);
        downToolButton = new QToolButton(CMainHelpDialog2);
        downToolButton->setObjectName(QString::fromUtf8("downToolButton"));
        downToolButton->setEnabled(true);
        downToolButton->setGeometry(QRect(380, 360, 51, 41));
        downToolButton->setStyleSheet(QString::fromUtf8("background-color: rgb(54, 54, 54);\n"
"border: 0px solid;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("resource/image/down.png"), QSize(), QIcon::Normal, QIcon::Off);
        downToolButton->setIcon(icon);
        downToolButton->setIconSize(QSize(48, 48));
        upToolButton = new QToolButton(CMainHelpDialog2);
        upToolButton->setObjectName(QString::fromUtf8("upToolButton"));
        upToolButton->setGeometry(QRect(440, 360, 51, 41));
        upToolButton->setStyleSheet(QString::fromUtf8("background-color: rgb(54, 54, 54);\n"
"border: 0px solid;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("resource/image/up.png"), QSize(), QIcon::Normal, QIcon::Off);
        upToolButton->setIcon(icon1);
        upToolButton->setIconSize(QSize(48, 48));
        currentPageLabel = new QLabel(CMainHelpDialog2);
        currentPageLabel->setObjectName(QString::fromUtf8("currentPageLabel"));
        currentPageLabel->setGeometry(QRect(340, 360, 31, 41));
        currentPageLabel->setFont(font);
        Label1_10 = new QLabel(CMainHelpDialog2);
        Label1_10->setObjectName(QString::fromUtf8("Label1_10"));
        Label1_10->setGeometry(QRect(100, 100, 201, 17));
        Label1_10->setFont(font);
        Label1_9 = new QLabel(CMainHelpDialog2);
        Label1_9->setObjectName(QString::fromUtf8("Label1_9"));
        Label1_9->setGeometry(QRect(100, 180, 201, 17));
        Label1_9->setFont(font);
        Label1_21 = new QLabel(CMainHelpDialog2);
        Label1_21->setObjectName(QString::fromUtf8("Label1_21"));
        Label1_21->setGeometry(QRect(100, 140, 220, 17));
        Label1_21->setFont(font);
        Label1_22 = new QLabel(CMainHelpDialog2);
        Label1_22->setObjectName(QString::fromUtf8("Label1_22"));
        Label1_22->setGeometry(QRect(100, 60, 220, 17));
        Label1_22->setFont(font);
        Label1_23 = new QLabel(CMainHelpDialog2);
        Label1_23->setObjectName(QString::fromUtf8("Label1_23"));
        Label1_23->setGeometry(QRect(100, 220, 220, 17));
        Label1_23->setFont(font);
        Label1_24 = new QLabel(CMainHelpDialog2);
        Label1_24->setObjectName(QString::fromUtf8("Label1_24"));
        Label1_24->setGeometry(QRect(100, 300, 220, 17));
        Label1_24->setFont(font);
        Label1_28 = new QLabel(CMainHelpDialog2);
        Label1_28->setObjectName(QString::fromUtf8("Label1_28"));
        Label1_28->setGeometry(QRect(430, 10, 220, 17));
        Label1_28->setFont(font);
        label_2 = new QLabel(CMainHelpDialog2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 50, 41, 31));
        label_2->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/resource/image/pontup.png);"));
        label_4 = new QLabel(CMainHelpDialog2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 90, 41, 31));
        label_4->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/resource/image/pontdown.png);"));
        label_5 = new QLabel(CMainHelpDialog2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 130, 41, 31));
        label_5->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/resource/image/SHOEUP.png);"));
        label_6 = new QLabel(CMainHelpDialog2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(30, 180, 41, 16));
        label_6->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/resource/image/SHOEDOWN.png);"));
        label_7 = new QLabel(CMainHelpDialog2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(30, 210, 41, 31));
        label_7->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/resource/image/hscbclose.png);"));
        label_8 = new QLabel(CMainHelpDialog2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(30, 250, 41, 31));
        label_8->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/resource/image/hscbopen.png);"));
        Label1_32 = new QLabel(CMainHelpDialog2);
        Label1_32->setObjectName(QString::fromUtf8("Label1_32"));
        Label1_32->setGeometry(QRect(100, 260, 220, 17));
        Label1_32->setFont(font);
        label_9 = new QLabel(CMainHelpDialog2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(30, 290, 41, 41));
        label_9->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/resource/image/speed_limit_10.png);"));
        label_10 = new QLabel(CMainHelpDialog2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(10, 340, 81, 31));
        label_10->setStyleSheet(QString::fromUtf8("font: 12pt \"\351\273\221\344\275\223\";\n"
"background-color: rgb(103, 103, 103);\n"
"color: rgb(255, 255, 0);\n"
""));
        Label1_33 = new QLabel(CMainHelpDialog2);
        Label1_33->setObjectName(QString::fromUtf8("Label1_33"));
        Label1_33->setGeometry(QRect(100, 350, 220, 17));
        Label1_33->setFont(font);
        label_11 = new QLabel(CMainHelpDialog2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(390, 10, 21, 21));
        label_11->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/resource/image/DOOR1.png);"));
        label_12 = new QLabel(CMainHelpDialog2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(390, 40, 21, 21));
        label_12->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/resource/image/DOOR11.png);"));
        label_13 = new QLabel(CMainHelpDialog2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(390, 130, 21, 21));
        label_13->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/resource/image/DOOR14.png);"));
        label_14 = new QLabel(CMainHelpDialog2);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(390, 100, 21, 21));
        label_14->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/resource/image/DOOR12.png);"));
        label_15 = new QLabel(CMainHelpDialog2);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(390, 160, 21, 21));
        label_15->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/resource/image/DOOR15.png);"));
        label_16 = new QLabel(CMainHelpDialog2);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(390, 70, 21, 21));
        label_16->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/resource/image/DOOR13.png);"));
        Label1_30 = new QLabel(CMainHelpDialog2);
        Label1_30->setObjectName(QString::fromUtf8("Label1_30"));
        Label1_30->setGeometry(QRect(430, 40, 220, 17));
        Label1_30->setFont(font);
        Label1_34 = new QLabel(CMainHelpDialog2);
        Label1_34->setObjectName(QString::fromUtf8("Label1_34"));
        Label1_34->setGeometry(QRect(430, 70, 220, 17));
        Label1_34->setFont(font);
        Label1_35 = new QLabel(CMainHelpDialog2);
        Label1_35->setObjectName(QString::fromUtf8("Label1_35"));
        Label1_35->setGeometry(QRect(430, 100, 220, 17));
        Label1_35->setFont(font);
        Label1_36 = new QLabel(CMainHelpDialog2);
        Label1_36->setObjectName(QString::fromUtf8("Label1_36"));
        Label1_36->setGeometry(QRect(430, 130, 220, 17));
        Label1_36->setFont(font);
        Label1_37 = new QLabel(CMainHelpDialog2);
        Label1_37->setObjectName(QString::fromUtf8("Label1_37"));
        Label1_37->setGeometry(QRect(430, 160, 220, 17));
        Label1_37->setFont(font);
        label_17 = new QLabel(CMainHelpDialog2);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(30, 380, 41, 31));
        label_17->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/resource/image/EX1.png);"));
        Label1_38 = new QLabel(CMainHelpDialog2);
        Label1_38->setObjectName(QString::fromUtf8("Label1_38"));
        Label1_38->setGeometry(QRect(100, 390, 220, 17));
        Label1_38->setFont(font);
        label_18 = new QLabel(CMainHelpDialog2);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(380, 190, 41, 21));
        label_18->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/resource/image/Arrow_Oringe_L.bmp);"));
        Label1_39 = new QLabel(CMainHelpDialog2);
        Label1_39->setObjectName(QString::fromUtf8("Label1_39"));
        Label1_39->setGeometry(QRect(430, 190, 220, 17));
        Label1_39->setFont(font);
        label_19 = new QLabel(CMainHelpDialog2);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(380, 220, 41, 21));
        label_19->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/resource/image/Arrow_Oringe_R.bmp);"));
        Label1_40 = new QLabel(CMainHelpDialog2);
        Label1_40->setObjectName(QString::fromUtf8("Label1_40"));
        Label1_40->setGeometry(QRect(430, 220, 220, 17));
        Label1_40->setFont(font);
        label_20 = new QLabel(CMainHelpDialog2);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(380, 250, 16, 61));
        label_20->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/resource/image/left_Direc_green.png);"));
        Label1_41 = new QLabel(CMainHelpDialog2);
        Label1_41->setObjectName(QString::fromUtf8("Label1_41"));
        Label1_41->setGeometry(QRect(430, 270, 220, 17));
        Label1_41->setFont(font);
        label_21 = new QLabel(CMainHelpDialog2);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(400, 250, 16, 61));
        label_21->setStyleSheet(QString::fromUtf8("\n"
"border-image: url(:/new/prefix1/resource/image/right_Direc_green.png);"));
        label_3 = new QLabel(CMainHelpDialog2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 10, 30, 30));
        label_3->setStyleSheet(QString::fromUtf8("border-radius: 15px;\n"
"border: 1px groove yellow;background-color: rgb(255, 0, 0);"));
        Label1_25 = new QLabel(CMainHelpDialog2);
        Label1_25->setObjectName(QString::fromUtf8("Label1_25"));
        Label1_25->setGeometry(QRect(100, 20, 220, 17));
        Label1_25->setFont(font);

        retranslateUi(CMainHelpDialog2);

        QMetaObject::connectSlotsByName(CMainHelpDialog2);
    } // setupUi

    void retranslateUi(QDialog *CMainHelpDialog2)
    {
        CMainHelpDialog2->setWindowTitle(QApplication::translate("CMainHelpDialog2", "Dialog", 0, QApplication::UnicodeUTF8));
        quitPushButton->setStyleSheet(QApplication::translate("CMainHelpDialog2", "border: 2px solid  rgb(255, 255, 0);\n"
"\n"
"", 0, QApplication::UnicodeUTF8));
        quitPushButton->setText(QApplication::translate("CMainHelpDialog2", "Quit", 0, QApplication::UnicodeUTF8));
        downToolButton->setText(QApplication::translate("CMainHelpDialog2", "...", 0, QApplication::UnicodeUTF8));
        upToolButton->setText(QApplication::translate("CMainHelpDialog2", "...", 0, QApplication::UnicodeUTF8));
        currentPageLabel->setStyleSheet(QString());
        currentPageLabel->setText(QApplication::translate("CMainHelpDialog2", "2/3", 0, QApplication::UnicodeUTF8));
        Label1_10->setStyleSheet(QString());
        Label1_10->setText(QApplication::translate("CMainHelpDialog2", ": \345\217\227\347\224\265\345\274\223\351\231\215", 0, QApplication::UnicodeUTF8));
        Label1_9->setStyleSheet(QString());
        Label1_9->setText(QApplication::translate("CMainHelpDialog2", ": \345\217\227\347\224\265\351\235\264\345\215\207", 0, QApplication::UnicodeUTF8));
        Label1_21->setStyleSheet(QString());
        Label1_21->setText(QApplication::translate("CMainHelpDialog2", ": \345\217\227\347\224\265\351\235\264\351\231\215", 0, QApplication::UnicodeUTF8));
        Label1_22->setStyleSheet(QString());
        Label1_22->setText(QApplication::translate("CMainHelpDialog2", ": \345\217\227\347\224\265\345\274\223\345\215\207", 0, QApplication::UnicodeUTF8));
        Label1_23->setStyleSheet(QString());
        Label1_23->setText(QApplication::translate("CMainHelpDialog2", ": \351\253\230\351\200\237\346\226\255\350\267\257\345\231\250\351\227\255\345\220\210", 0, QApplication::UnicodeUTF8));
        Label1_24->setStyleSheet(QString());
        Label1_24->setText(QApplication::translate("CMainHelpDialog2", ": \346\240\271\346\215\256\345\256\236\351\231\205\346\203\205\345\206\265\346\217\220\347\244\272\347\233\270\345\272\224\351\231\220\351\200\237\345\200\274", 0, QApplication::UnicodeUTF8));
        Label1_28->setStyleSheet(QString());
        Label1_28->setText(QApplication::translate("CMainHelpDialog2", ": \351\227\250\351\200\232\350\256\257\346\225\205\351\232\234", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
        label_4->setText(QString());
        label_5->setText(QString());
        label_6->setText(QString());
        label_7->setText(QString());
        label_8->setText(QString());
        Label1_32->setStyleSheet(QString());
        Label1_32->setText(QApplication::translate("CMainHelpDialog2", ": \351\253\230\351\200\237\346\226\255\350\267\257\345\231\250\346\226\255\345\274\200", 0, QApplication::UnicodeUTF8));
        label_9->setText(QString());
        label_10->setText(QApplication::translate("CMainHelpDialog2", "  \351\227\250\346\227\201\350\267\257", 0, QApplication::UnicodeUTF8));
        Label1_33->setStyleSheet(QString());
        Label1_33->setText(QApplication::translate("CMainHelpDialog2", ": \346\227\201\350\267\257\344\277\241\346\201\257\346\217\220\347\244\272", 0, QApplication::UnicodeUTF8));
        label_11->setText(QString());
        label_12->setText(QString());
        label_13->setText(QString());
        label_14->setText(QString());
        label_15->setText(QString());
        label_16->setText(QString());
        Label1_30->setStyleSheet(QString());
        Label1_30->setText(QApplication::translate("CMainHelpDialog2", ": \351\227\250\351\232\224\347\246\273", 0, QApplication::UnicodeUTF8));
        Label1_34->setStyleSheet(QString());
        Label1_34->setText(QApplication::translate("CMainHelpDialog2", ": \351\227\250\346\225\205\351\232\234", 0, QApplication::UnicodeUTF8));
        Label1_35->setStyleSheet(QString());
        Label1_35->setText(QApplication::translate("CMainHelpDialog2", ": \351\227\250\347\264\247\346\200\245\350\247\243\351\224\201", 0, QApplication::UnicodeUTF8));
        Label1_36->setStyleSheet(QString());
        Label1_36->setText(QApplication::translate("CMainHelpDialog2", ": \351\227\250\345\274\200", 0, QApplication::UnicodeUTF8));
        Label1_37->setStyleSheet(QString());
        Label1_37->setText(QApplication::translate("CMainHelpDialog2", ": \351\227\250\345\205\263", 0, QApplication::UnicodeUTF8));
        label_17->setText(QString());
        Label1_38->setStyleSheet(QString());
        Label1_38->setText(QApplication::translate("CMainHelpDialog2", ": \346\211\251\345\261\225\344\276\233\347\224\265", 0, QApplication::UnicodeUTF8));
        label_18->setText(QString());
        Label1_39->setStyleSheet(QString());
        Label1_39->setText(QApplication::translate("CMainHelpDialog2", ": \345\267\246\350\275\254\345\220\221", 0, QApplication::UnicodeUTF8));
        label_19->setText(QString());
        Label1_40->setStyleSheet(QString());
        Label1_40->setText(QApplication::translate("CMainHelpDialog2", ": \345\217\263\350\275\254\345\220\221", 0, QApplication::UnicodeUTF8));
        label_20->setText(QString());
        Label1_41->setStyleSheet(QString());
        Label1_41->setText(QApplication::translate("CMainHelpDialog2", ": \345\220\221\345\211\215/\345\220\221\345\220\216", 0, QApplication::UnicodeUTF8));
        label_21->setText(QString());
        label_3->setText(QString());
        Label1_25->setStyleSheet(QString());
        Label1_25->setText(QApplication::translate("CMainHelpDialog2", ": \344\271\230\345\256\242\346\212\245\350\255\246", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CMainHelpDialog2: public Ui_CMainHelpDialog2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CMAINHELPDIALOG2_H

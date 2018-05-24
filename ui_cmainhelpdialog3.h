/********************************************************************************
** Form generated from reading UI file 'cmainhelpdialog3.ui'
**
** Created: Fri Sep 15 10:40:42 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CMAINHELPDIALOG3_H
#define UI_CMAINHELPDIALOG3_H

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

class Ui_CMainHelpdialog3
{
public:
    QToolButton *downToolButton;
    QPushButton *quitPushButton;
    QLabel *label_2;
    QLabel *Label1_22;
    QToolButton *upToolButton;
    QLabel *currentPageLabel;
    QLabel *label_4;
    QLabel *Label1_24;
    QLabel *label_5;
    QLabel *Label1_25;
    QLabel *Label1_26;
    QLabel *label_6;
    QLabel *Label1_27;
    QLabel *label_7;
    QLabel *Label1_28;
    QLabel *label_8;

    void setupUi(QDialog *CMainHelpdialog3)
    {
        if (CMainHelpdialog3->objectName().isEmpty())
            CMainHelpdialog3->setObjectName(QString::fromUtf8("CMainHelpdialog3"));
        CMainHelpdialog3->resize(640, 415);
        downToolButton = new QToolButton(CMainHelpdialog3);
        downToolButton->setObjectName(QString::fromUtf8("downToolButton"));
        downToolButton->setEnabled(false);
        downToolButton->setGeometry(QRect(380, 360, 51, 41));
        downToolButton->setStyleSheet(QString::fromUtf8("background-color: rgb(54, 54, 54);\n"
"border: 0px solid;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("resource/image/down.png"), QSize(), QIcon::Normal, QIcon::Off);
        downToolButton->setIcon(icon);
        downToolButton->setIconSize(QSize(48, 48));
        quitPushButton = new QPushButton(CMainHelpdialog3);
        quitPushButton->setObjectName(QString::fromUtf8("quitPushButton"));
        quitPushButton->setGeometry(QRect(520, 360, 90, 40));
        QFont font;
        quitPushButton->setFont(font);
        label_2 = new QLabel(CMainHelpdialog3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 10, 61, 51));
        label_2->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/resource/image/tip1.png);"));
        Label1_22 = new QLabel(CMainHelpdialog3);
        Label1_22->setObjectName(QString::fromUtf8("Label1_22"));
        Label1_22->setGeometry(QRect(110, 30, 220, 17));
        Label1_22->setFont(font);
        upToolButton = new QToolButton(CMainHelpdialog3);
        upToolButton->setObjectName(QString::fromUtf8("upToolButton"));
        upToolButton->setGeometry(QRect(440, 360, 51, 41));
        upToolButton->setStyleSheet(QString::fromUtf8("background-color: rgb(54, 54, 54);\n"
"border: 0px solid;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("resource/image/up.png"), QSize(), QIcon::Normal, QIcon::Off);
        upToolButton->setIcon(icon1);
        upToolButton->setIconSize(QSize(48, 48));
        currentPageLabel = new QLabel(CMainHelpdialog3);
        currentPageLabel->setObjectName(QString::fromUtf8("currentPageLabel"));
        currentPageLabel->setGeometry(QRect(320, 360, 31, 41));
        currentPageLabel->setFont(font);
        label_4 = new QLabel(CMainHelpdialog3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 90, 61, 31));
        label_4->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/resource/image/tip3.png);"));
        Label1_24 = new QLabel(CMainHelpdialog3);
        Label1_24->setObjectName(QString::fromUtf8("Label1_24"));
        Label1_24->setGeometry(QRect(110, 100, 220, 17));
        Label1_24->setFont(font);
        label_5 = new QLabel(CMainHelpdialog3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 140, 61, 31));
        label_5->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/resource/image/tip4.png);"));
        Label1_25 = new QLabel(CMainHelpdialog3);
        Label1_25->setObjectName(QString::fromUtf8("Label1_25"));
        Label1_25->setGeometry(QRect(110, 150, 151, 17));
        Label1_25->setFont(font);
        Label1_26 = new QLabel(CMainHelpdialog3);
        Label1_26->setObjectName(QString::fromUtf8("Label1_26"));
        Label1_26->setGeometry(QRect(110, 210, 151, 17));
        Label1_26->setFont(font);
        label_6 = new QLabel(CMainHelpdialog3);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(30, 200, 51, 31));
        label_6->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/resource/image/HVACOK.png);"));
        Label1_27 = new QLabel(CMainHelpdialog3);
        Label1_27->setObjectName(QString::fromUtf8("Label1_27"));
        Label1_27->setGeometry(QRect(110, 260, 151, 17));
        Label1_27->setFont(font);
        label_7 = new QLabel(CMainHelpdialog3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(30, 250, 51, 31));
        label_7->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/resource/image/HVACoffline.png);"));
        Label1_28 = new QLabel(CMainHelpdialog3);
        Label1_28->setObjectName(QString::fromUtf8("Label1_28"));
        Label1_28->setGeometry(QRect(110, 310, 151, 17));
        Label1_28->setFont(font);
        label_8 = new QLabel(CMainHelpdialog3);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(30, 300, 51, 31));
        label_8->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/resource/image/HVACFAULT.png);"));

        retranslateUi(CMainHelpdialog3);

        QMetaObject::connectSlotsByName(CMainHelpdialog3);
    } // setupUi

    void retranslateUi(QDialog *CMainHelpdialog3)
    {
        CMainHelpdialog3->setWindowTitle(QApplication::translate("CMainHelpdialog3", "Dialog", 0, QApplication::UnicodeUTF8));
        downToolButton->setText(QApplication::translate("CMainHelpdialog3", "...", 0, QApplication::UnicodeUTF8));
        quitPushButton->setStyleSheet(QApplication::translate("CMainHelpdialog3", "border: 2px solid  rgb(255, 255, 0);\n"
"\n"
"", 0, QApplication::UnicodeUTF8));
        quitPushButton->setText(QApplication::translate("CMainHelpdialog3", "Quit", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
        Label1_22->setStyleSheet(QString());
        Label1_22->setText(QApplication::translate("CMainHelpdialog3", ": \344\276\233\347\224\265\346\226\271\345\274\217\350\275\254\346\215\242\346\217\220\347\244\272", 0, QApplication::UnicodeUTF8));
        upToolButton->setText(QApplication::translate("CMainHelpdialog3", "...", 0, QApplication::UnicodeUTF8));
        currentPageLabel->setStyleSheet(QString());
        currentPageLabel->setText(QApplication::translate("CMainHelpdialog3", "3/3", 0, QApplication::UnicodeUTF8));
        label_4->setText(QString());
        Label1_24->setStyleSheet(QString());
        Label1_24->setText(QApplication::translate("CMainHelpdialog3", ": \350\275\246\350\276\206\347\212\266\346\200\201", 0, QApplication::UnicodeUTF8));
        label_5->setText(QString());
        Label1_25->setStyleSheet(QString());
        Label1_25->setText(QApplication::translate("CMainHelpdialog3", ": \350\277\220\350\241\214\346\250\241\345\274\217", 0, QApplication::UnicodeUTF8));
        Label1_26->setStyleSheet(QString());
        Label1_26->setText(QApplication::translate("CMainHelpdialog3", ": \347\251\272\350\260\203\350\277\220\350\241\214", 0, QApplication::UnicodeUTF8));
        label_6->setText(QString());
        Label1_27->setStyleSheet(QString());
        Label1_27->setText(QApplication::translate("CMainHelpdialog3", ": \347\251\272\350\260\203\347\246\273\347\272\277", 0, QApplication::UnicodeUTF8));
        label_7->setText(QString());
        Label1_28->setStyleSheet(QString());
        Label1_28->setText(QApplication::translate("CMainHelpdialog3", ": \347\251\272\350\260\203\346\225\205\351\232\234", 0, QApplication::UnicodeUTF8));
        label_8->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CMainHelpdialog3: public Ui_CMainHelpdialog3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CMAINHELPDIALOG3_H

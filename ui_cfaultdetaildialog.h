/********************************************************************************
** Form generated from reading UI file 'cfaultdetaildialog.ui'
**
** Created: Fri Sep 15 10:40:42 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CFAULTDETAILDIALOG_H
#define UI_CFAULTDETAILDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CFaultDetailDialog
{
public:
    QPushButton *quitPushButton;
    QLabel *labelCode;
    QLabel *labelGrade;
    QLabel *labelDateTime;
    QLabel *labelName;
    QLabel *labelAdvice;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QFrame *line_5;
    QFrame *line_6;
    QFrame *line_7;
    QFrame *line_8;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *labelPostion;
    QLabel *label_7;
    QLabel *labelDevice;
    QLabel *labelName_2;
    QLabel *labelAdvice_2;

    void setupUi(QDialog *CFaultDetailDialog)
    {
        if (CFaultDetailDialog->objectName().isEmpty())
            CFaultDetailDialog->setObjectName(QString::fromUtf8("CFaultDetailDialog"));
        CFaultDetailDialog->setWindowModality(Qt::ApplicationModal);
        CFaultDetailDialog->resize(577, 420);
        CFaultDetailDialog->setModal(true);
        quitPushButton = new QPushButton(CFaultDetailDialog);
        quitPushButton->setObjectName(QString::fromUtf8("quitPushButton"));
        quitPushButton->setGeometry(QRect(470, 370, 90, 40));
        QFont font;
        quitPushButton->setFont(font);
        labelCode = new QLabel(CFaultDetailDialog);
        labelCode->setObjectName(QString::fromUtf8("labelCode"));
        labelCode->setGeometry(QRect(130, 30, 111, 21));
        labelGrade = new QLabel(CFaultDetailDialog);
        labelGrade->setObjectName(QString::fromUtf8("labelGrade"));
        labelGrade->setGeometry(QRect(420, 30, 111, 21));
        labelDateTime = new QLabel(CFaultDetailDialog);
        labelDateTime->setObjectName(QString::fromUtf8("labelDateTime"));
        labelDateTime->setGeometry(QRect(130, 110, 181, 21));
        labelName = new QLabel(CFaultDetailDialog);
        labelName->setObjectName(QString::fromUtf8("labelName"));
        labelName->setGeometry(QRect(130, 150, 421, 21));
        labelAdvice = new QLabel(CFaultDetailDialog);
        labelAdvice->setObjectName(QString::fromUtf8("labelAdvice"));
        labelAdvice->setGeometry(QRect(110, 190, 441, 161));
        labelAdvice->setWordWrap(true);
        line = new QFrame(CFaultDetailDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(20, 11, 541, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(CFaultDetailDialog);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(20, 50, 541, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(CFaultDetailDialog);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(20, 90, 541, 20));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(CFaultDetailDialog);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(20, 130, 541, 20));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        line_5 = new QFrame(CFaultDetailDialog);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setGeometry(QRect(20, 170, 541, 20));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        line_6 = new QFrame(CFaultDetailDialog);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setGeometry(QRect(20, 350, 541, 20));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);
        line_7 = new QFrame(CFaultDetailDialog);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setGeometry(QRect(10, 20, 20, 341));
        line_7->setFrameShape(QFrame::VLine);
        line_7->setFrameShadow(QFrame::Sunken);
        line_8 = new QFrame(CFaultDetailDialog);
        line_8->setObjectName(QString::fromUtf8("line_8"));
        line_8->setGeometry(QRect(550, 20, 20, 341));
        line_8->setFrameShape(QFrame::VLine);
        line_8->setFrameShadow(QFrame::Sunken);
        label_2 = new QLabel(CFaultDetailDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 30, 81, 21));
        label_3 = new QLabel(CFaultDetailDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(320, 30, 81, 21));
        label_4 = new QLabel(CFaultDetailDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 110, 81, 21));
        label_6 = new QLabel(CFaultDetailDialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(40, 70, 81, 21));
        labelPostion = new QLabel(CFaultDetailDialog);
        labelPostion->setObjectName(QString::fromUtf8("labelPostion"));
        labelPostion->setGeometry(QRect(130, 70, 111, 21));
        label_7 = new QLabel(CFaultDetailDialog);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(321, 70, 81, 21));
        labelDevice = new QLabel(CFaultDetailDialog);
        labelDevice->setObjectName(QString::fromUtf8("labelDevice"));
        labelDevice->setGeometry(QRect(420, 70, 111, 21));
        labelName_2 = new QLabel(CFaultDetailDialog);
        labelName_2->setObjectName(QString::fromUtf8("labelName_2"));
        labelName_2->setGeometry(QRect(40, 150, 91, 21));
        labelAdvice_2 = new QLabel(CFaultDetailDialog);
        labelAdvice_2->setObjectName(QString::fromUtf8("labelAdvice_2"));
        labelAdvice_2->setGeometry(QRect(30, 190, 61, 161));
        labelAdvice_2->setWordWrap(true);

        retranslateUi(CFaultDetailDialog);

        QMetaObject::connectSlotsByName(CFaultDetailDialog);
    } // setupUi

    void retranslateUi(QDialog *CFaultDetailDialog)
    {
        CFaultDetailDialog->setWindowTitle(QApplication::translate("CFaultDetailDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        quitPushButton->setStyleSheet(QApplication::translate("CFaultDetailDialog", "border: 2px solid  rgb(255, 255, 0);\n"
"\n"
"", 0, QApplication::UnicodeUTF8));
        quitPushButton->setText(QApplication::translate("CFaultDetailDialog", "Quit", 0, QApplication::UnicodeUTF8));
        labelCode->setText(QApplication::translate("CFaultDetailDialog", "123456", 0, QApplication::UnicodeUTF8));
        labelGrade->setText(QApplication::translate("CFaultDetailDialog", "Grade", 0, QApplication::UnicodeUTF8));
        labelDateTime->setText(QApplication::translate("CFaultDetailDialog", "DateTime", 0, QApplication::UnicodeUTF8));
        labelName->setText(QApplication::translate("CFaultDetailDialog", "Name", 0, QApplication::UnicodeUTF8));
        labelAdvice->setText(QApplication::translate("CFaultDetailDialog", "Advice", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CFaultDetailDialog", "\346\225\205\351\232\234\344\273\243\347\240\201:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("CFaultDetailDialog", "\346\225\205\351\232\234\347\255\211\347\272\247:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("CFaultDetailDialog", "\346\227\266\351\227\264:", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("CFaultDetailDialog", "\344\275\215\347\275\256:", 0, QApplication::UnicodeUTF8));
        labelPostion->setText(QApplication::translate("CFaultDetailDialog", "postion", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("CFaultDetailDialog", "\350\256\276\345\244\207:", 0, QApplication::UnicodeUTF8));
        labelDevice->setText(QApplication::translate("CFaultDetailDialog", "device", 0, QApplication::UnicodeUTF8));
        labelName_2->setText(QApplication::translate("CFaultDetailDialog", "\346\225\205\351\232\234\345\220\215\347\247\260:", 0, QApplication::UnicodeUTF8));
        labelAdvice_2->setText(QApplication::translate("CFaultDetailDialog", "\346\223\215\344\275\234:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CFaultDetailDialog: public Ui_CFaultDetailDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CFAULTDETAILDIALOG_H

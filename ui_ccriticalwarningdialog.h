/********************************************************************************
** Form generated from reading UI file 'ccriticalwarningdialog.ui'
**
** Created: Fri Sep 15 10:40:42 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CCRITICALWARNINGDIALOG_H
#define UI_CCRITICALWARNINGDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>

QT_BEGIN_NAMESPACE

class Ui_CCriticalWarningDialog
{
public:
    QLabel *label;

    void setupUi(QDialog *CCriticalWarningDialog)
    {
        if (CCriticalWarningDialog->objectName().isEmpty())
            CCriticalWarningDialog->setObjectName(QString::fromUtf8("CCriticalWarningDialog"));
        CCriticalWarningDialog->resize(800, 600);
        CCriticalWarningDialog->setStyleSheet(QString::fromUtf8("background-color:rgba(100,100,100,50);"));
        label = new QLabel(CCriticalWarningDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 240, 741, 71));
        QFont font;
        font.setPointSize(50);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        font.setStrikeOut(false);
        label->setFont(font);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(CCriticalWarningDialog);

        QMetaObject::connectSlotsByName(CCriticalWarningDialog);
    } // setupUi

    void retranslateUi(QDialog *CCriticalWarningDialog)
    {
        CCriticalWarningDialog->setWindowTitle(QApplication::translate("CCriticalWarningDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CCriticalWarningDialog: public Ui_CCriticalWarningDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CCRITICALWARNINGDIALOG_H

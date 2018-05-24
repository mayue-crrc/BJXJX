/********************************************************************************
** Form generated from reading UI file 'cfaultdlg.ui'
**
** Created: Fri Sep 15 10:40:42 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CFAULTDLG_H
#define UI_CFAULTDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>

QT_BEGIN_NAMESPACE

class Ui_CFaultDlg
{
public:
    QLabel *label;

    void setupUi(QDialog *CFaultDlg)
    {
        if (CFaultDlg->objectName().isEmpty())
            CFaultDlg->setObjectName(QString::fromUtf8("CFaultDlg"));
        CFaultDlg->resize(736, 460);
        label = new QLabel(CFaultDlg);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 140, 701, 151));

        retranslateUi(CFaultDlg);

        QMetaObject::connectSlotsByName(CFaultDlg);
    } // setupUi

    void retranslateUi(QDialog *CFaultDlg)
    {
        CFaultDlg->setWindowTitle(QApplication::translate("CFaultDlg", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CFaultDlg", "TextLabel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CFaultDlg: public Ui_CFaultDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CFAULTDLG_H

/********************************************************************************
** Form generated from reading UI file 'csetcarsdirdlg.ui'
**
** Created: Fri Sep 15 10:40:42 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CSETCARSDIRDLG_H
#define UI_CSETCARSDIRDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CSetCarsDirDlg
{
public:
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_3;
    QLabel *label_3;

    void setupUi(QDialog *CSetCarsDirDlg)
    {
        if (CSetCarsDirDlg->objectName().isEmpty())
            CSetCarsDirDlg->setObjectName(QString::fromUtf8("CSetCarsDirDlg"));
        CSetCarsDirDlg->setWindowModality(Qt::ApplicationModal);
        CSetCarsDirDlg->resize(305, 174);
        CSetCarsDirDlg->setModal(true);
        pushButton = new QPushButton(CSetCarsDirDlg);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(90, 120, 121, 38));
        lineEdit = new QLineEdit(CSetCarsDirDlg);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(60, 90, 51, 21));
        lineEdit_2 = new QLineEdit(CSetCarsDirDlg);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(120, 90, 51, 21));
        pushButton_2 = new QPushButton(CSetCarsDirDlg);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(30, 20, 251, 31));
        label = new QLabel(CSetCarsDirDlg);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 60, 61, 31));
        label_2 = new QLabel(CSetCarsDirDlg);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(120, 60, 51, 31));
        lineEdit_3 = new QLineEdit(CSetCarsDirDlg);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(180, 90, 51, 21));
        label_3 = new QLabel(CSetCarsDirDlg);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(180, 60, 69, 31));

        retranslateUi(CSetCarsDirDlg);

        QMetaObject::connectSlotsByName(CSetCarsDirDlg);
    } // setupUi

    void retranslateUi(QDialog *CSetCarsDirDlg)
    {
        CSetCarsDirDlg->setWindowTitle(QApplication::translate("CSetCarsDirDlg", "Dialog", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("CSetCarsDirDlg", "OK", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("CSetCarsDirDlg", "Stop rand & set all to 0", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CSetCarsDirDlg", "Byte", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CSetCarsDirDlg", "Bit", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("CSetCarsDirDlg", "Num", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CSetCarsDirDlg: public Ui_CSetCarsDirDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CSETCARSDIRDLG_H

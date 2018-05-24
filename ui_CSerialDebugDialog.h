/********************************************************************************
** Form generated from reading UI file 'CSerialDebugDialog.ui'
**
** Created: Fri Sep 15 10:40:42 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CSERIALDEBUGDIALOG_H
#define UI_CSERIALDEBUGDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_CSerialDebugDialog
{
public:
    QPushButton *pushButton_set;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_arrayindex;
    QPushButton *pushButton_reset;
    QPushButton *pushButton_num1;
    QPushButton *pushButton_num2;
    QPushButton *pushButton_num3;
    QPushButton *pushButton_num4;
    QPushButton *pushButton_num5;
    QPushButton *pushButton_num6;
    QPushButton *pushButton_num7;
    QPushButton *pushButton_num8;
    QPushButton *pushButton_num9;
    QPushButton *pushButton_num0;
    QPushButton *pushButton_clear;
    QComboBox *comboBox;
    QLineEdit *lineEdit_var;
    QTextEdit *textEdit;
    QLineEdit *lineEdit;
    QRadioButton *radioButton_revData;
    QRadioButton *radioButton_sendData;
    QRadioButton *radioButton_decVar;
    QRadioButton *radioButton_binVar;
    QTextEdit *textEdit_2;

    void setupUi(QDialog *CSerialDebugDialog)
    {
        if (CSerialDebugDialog->objectName().isEmpty())
            CSerialDebugDialog->setObjectName(QString::fromUtf8("CSerialDebugDialog"));
        CSerialDebugDialog->resize(750, 368);
        pushButton_set = new QPushButton(CSerialDebugDialog);
        pushButton_set->setObjectName(QString::fromUtf8("pushButton_set"));
        pushButton_set->setGeometry(QRect(20, 210, 331, 38));
        label = new QLabel(CSerialDebugDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(220, 50, 16, 28));
        label_2 = new QLabel(CSerialDebugDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(288, 50, 21, 28));
        lineEdit_arrayindex = new QLineEdit(CSerialDebugDialog);
        lineEdit_arrayindex->setObjectName(QString::fromUtf8("lineEdit_arrayindex"));
        lineEdit_arrayindex->setGeometry(QRect(238, 50, 51, 31));
        lineEdit_arrayindex->setMaxLength(4);
        lineEdit_arrayindex->setReadOnly(true);
        pushButton_reset = new QPushButton(CSerialDebugDialog);
        pushButton_reset->setObjectName(QString::fromUtf8("pushButton_reset"));
        pushButton_reset->setGeometry(QRect(350, 210, 381, 38));
        pushButton_num1 = new QPushButton(CSerialDebugDialog);
        pushButton_num1->setObjectName(QString::fromUtf8("pushButton_num1"));
        pushButton_num1->setGeometry(QRect(20, 110, 51, 51));
        pushButton_num2 = new QPushButton(CSerialDebugDialog);
        pushButton_num2->setObjectName(QString::fromUtf8("pushButton_num2"));
        pushButton_num2->setEnabled(false);
        pushButton_num2->setGeometry(QRect(70, 110, 51, 51));
        pushButton_num3 = new QPushButton(CSerialDebugDialog);
        pushButton_num3->setObjectName(QString::fromUtf8("pushButton_num3"));
        pushButton_num3->setEnabled(false);
        pushButton_num3->setGeometry(QRect(120, 110, 51, 51));
        pushButton_num4 = new QPushButton(CSerialDebugDialog);
        pushButton_num4->setObjectName(QString::fromUtf8("pushButton_num4"));
        pushButton_num4->setEnabled(false);
        pushButton_num4->setGeometry(QRect(170, 110, 51, 51));
        pushButton_num5 = new QPushButton(CSerialDebugDialog);
        pushButton_num5->setObjectName(QString::fromUtf8("pushButton_num5"));
        pushButton_num5->setEnabled(false);
        pushButton_num5->setGeometry(QRect(220, 110, 51, 51));
        pushButton_num6 = new QPushButton(CSerialDebugDialog);
        pushButton_num6->setObjectName(QString::fromUtf8("pushButton_num6"));
        pushButton_num6->setEnabled(false);
        pushButton_num6->setGeometry(QRect(20, 160, 51, 51));
        pushButton_num7 = new QPushButton(CSerialDebugDialog);
        pushButton_num7->setObjectName(QString::fromUtf8("pushButton_num7"));
        pushButton_num7->setEnabled(false);
        pushButton_num7->setGeometry(QRect(70, 160, 51, 51));
        pushButton_num8 = new QPushButton(CSerialDebugDialog);
        pushButton_num8->setObjectName(QString::fromUtf8("pushButton_num8"));
        pushButton_num8->setEnabled(false);
        pushButton_num8->setGeometry(QRect(120, 160, 51, 51));
        pushButton_num9 = new QPushButton(CSerialDebugDialog);
        pushButton_num9->setObjectName(QString::fromUtf8("pushButton_num9"));
        pushButton_num9->setEnabled(false);
        pushButton_num9->setGeometry(QRect(170, 160, 51, 51));
        pushButton_num0 = new QPushButton(CSerialDebugDialog);
        pushButton_num0->setObjectName(QString::fromUtf8("pushButton_num0"));
        pushButton_num0->setGeometry(QRect(220, 160, 51, 51));
        pushButton_clear = new QPushButton(CSerialDebugDialog);
        pushButton_clear->setObjectName(QString::fromUtf8("pushButton_clear"));
        pushButton_clear->setGeometry(QRect(270, 110, 81, 101));
        comboBox = new QComboBox(CSerialDebugDialog);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(303, 46, 61, 38));
        lineEdit_var = new QLineEdit(CSerialDebugDialog);
        lineEdit_var->setObjectName(QString::fromUtf8("lineEdit_var"));
        lineEdit_var->setGeometry(QRect(470, 50, 251, 31));
        lineEdit_var->setMaxLength(16);
        lineEdit_var->setReadOnly(true);
        textEdit = new QTextEdit(CSerialDebugDialog);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(350, 110, 381, 101));
        textEdit->setReadOnly(true);
        lineEdit = new QLineEdit(CSerialDebugDialog);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(30, 0, 711, 38));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(207, 207, 207);"));
        lineEdit->setReadOnly(true);
        radioButton_revData = new QRadioButton(CSerialDebugDialog);
        radioButton_revData->setObjectName(QString::fromUtf8("radioButton_revData"));
        radioButton_revData->setGeometry(QRect(50, 30, 167, 33));
        radioButton_revData->setCheckable(true);
        radioButton_revData->setChecked(true);
        radioButton_revData->setAutoRepeat(false);
        radioButton_revData->setAutoExclusive(false);
        radioButton_sendData = new QRadioButton(CSerialDebugDialog);
        radioButton_sendData->setObjectName(QString::fromUtf8("radioButton_sendData"));
        radioButton_sendData->setGeometry(QRect(50, 60, 167, 33));
        radioButton_sendData->setAutoExclusive(false);
        radioButton_decVar = new QRadioButton(CSerialDebugDialog);
        radioButton_decVar->setObjectName(QString::fromUtf8("radioButton_decVar"));
        radioButton_decVar->setGeometry(QRect(370, 70, 91, 33));
        radioButton_decVar->setChecked(false);
        radioButton_decVar->setAutoExclusive(false);
        radioButton_binVar = new QRadioButton(CSerialDebugDialog);
        radioButton_binVar->setObjectName(QString::fromUtf8("radioButton_binVar"));
        radioButton_binVar->setGeometry(QRect(370, 30, 91, 33));
        radioButton_binVar->setChecked(true);
        radioButton_binVar->setAutoExclusive(false);
        textEdit_2 = new QTextEdit(CSerialDebugDialog);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setGeometry(QRect(20, 270, 711, 84));

        retranslateUi(CSerialDebugDialog);

        QMetaObject::connectSlotsByName(CSerialDebugDialog);
    } // setupUi

    void retranslateUi(QDialog *CSerialDebugDialog)
    {
        CSerialDebugDialog->setWindowTitle(QApplication::translate("CSerialDebugDialog", "SerialDebugDialog", 0, QApplication::UnicodeUTF8));
        pushButton_set->setText(QApplication::translate("CSerialDebugDialog", "Set", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CSerialDebugDialog", " [", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CSerialDebugDialog", "]", 0, QApplication::UnicodeUTF8));
        lineEdit_arrayindex->setText(QString());
        pushButton_reset->setText(QApplication::translate("CSerialDebugDialog", "ResetAll", 0, QApplication::UnicodeUTF8));
        pushButton_num1->setText(QApplication::translate("CSerialDebugDialog", "1", 0, QApplication::UnicodeUTF8));
        pushButton_num2->setText(QApplication::translate("CSerialDebugDialog", "2", 0, QApplication::UnicodeUTF8));
        pushButton_num3->setText(QApplication::translate("CSerialDebugDialog", "3", 0, QApplication::UnicodeUTF8));
        pushButton_num4->setText(QApplication::translate("CSerialDebugDialog", "4", 0, QApplication::UnicodeUTF8));
        pushButton_num5->setText(QApplication::translate("CSerialDebugDialog", "5", 0, QApplication::UnicodeUTF8));
        pushButton_num6->setText(QApplication::translate("CSerialDebugDialog", "6", 0, QApplication::UnicodeUTF8));
        pushButton_num7->setText(QApplication::translate("CSerialDebugDialog", "7", 0, QApplication::UnicodeUTF8));
        pushButton_num8->setText(QApplication::translate("CSerialDebugDialog", "8", 0, QApplication::UnicodeUTF8));
        pushButton_num9->setText(QApplication::translate("CSerialDebugDialog", "9", 0, QApplication::UnicodeUTF8));
        pushButton_num0->setText(QApplication::translate("CSerialDebugDialog", "0", 0, QApplication::UnicodeUTF8));
        pushButton_clear->setText(QApplication::translate("CSerialDebugDialog", "Clear", 0, QApplication::UnicodeUTF8));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("CSerialDebugDialog", "|=", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialDebugDialog", "&=", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialDebugDialog", "^=", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSerialDebugDialog", "=", 0, QApplication::UnicodeUTF8)
        );
        lineEdit_var->setText(QString());
        lineEdit->setText(QApplication::translate("CSerialDebugDialog", "\350\257\245\345\212\237\350\203\275\347\233\270\345\275\223\344\272\216\345\234\250\346\257\217\346\254\241\346\216\245\346\224\266\345\256\214\344\270\262\345\217\243\346\225\260\346\215\256\345\220\216,\346\211\247\350\241\214\350\256\276\345\256\232\347\232\204\350\241\250\350\276\276\345\274\217\343\200\202", 0, QApplication::UnicodeUTF8));
        radioButton_revData->setText(QApplication::translate("CSerialDebugDialog", "receiveData", 0, QApplication::UnicodeUTF8));
        radioButton_sendData->setText(QApplication::translate("CSerialDebugDialog", "sendData", 0, QApplication::UnicodeUTF8));
        radioButton_decVar->setText(QApplication::translate("CSerialDebugDialog", "\345\215\201\350\277\233\345\210\266", 0, QApplication::UnicodeUTF8));
        radioButton_binVar->setText(QApplication::translate("CSerialDebugDialog", "\344\272\214\350\277\233\345\210\266", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CSerialDebugDialog: public Ui_CSerialDebugDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CSERIALDEBUGDIALOG_H

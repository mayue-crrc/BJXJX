/********************************************************************************
** Form generated from reading UI file 'testbytedialog.ui'
**
** Created: Fri Sep 15 10:40:42 2017
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTBYTEDIALOG_H
#define UI_TESTBYTEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestByteDialog
{
public:
    QLineEdit *lineEdit;
    QLabel *label;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton1;
    QPushButton *pushButton2;
    QPushButton *pushButton3;
    QPushButton *pushButton4;
    QPushButton *pushButton5;
    QPushButton *pushButton6;
    QPushButton *pushButton7;
    QPushButton *pushButton8;
    QPushButton *pushButton9;
    QPushButton *pushButton0;
    QPushButton *pushButtonClear;
    QPushButton *pushButtonOk;
    QPushButton *pushButtonCancel;

    void setupUi(QDialog *TestByteDialog)
    {
        if (TestByteDialog->objectName().isEmpty())
            TestByteDialog->setObjectName(QString::fromUtf8("TestByteDialog"));
        TestByteDialog->resize(357, 279);
        TestByteDialog->setFocusPolicy(Qt::ClickFocus);
        TestByteDialog->setContextMenuPolicy(Qt::NoContextMenu);
        QIcon icon;
        icon.addFile(QString::fromUtf8("resource/image/cnr.png"), QSize(), QIcon::Normal, QIcon::Off);
        TestByteDialog->setWindowIcon(icon);
        lineEdit = new QLineEdit(TestByteDialog);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(150, 24, 113, 27));
        label = new QLabel(TestByteDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 20, 66, 31));
        layoutWidget = new QWidget(TestByteDialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 80, 269, 128));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton1 = new QPushButton(layoutWidget);
        pushButton1->setObjectName(QString::fromUtf8("pushButton1"));

        gridLayout->addWidget(pushButton1, 0, 0, 1, 1);

        pushButton2 = new QPushButton(layoutWidget);
        pushButton2->setObjectName(QString::fromUtf8("pushButton2"));

        gridLayout->addWidget(pushButton2, 0, 1, 1, 1);

        pushButton3 = new QPushButton(layoutWidget);
        pushButton3->setObjectName(QString::fromUtf8("pushButton3"));

        gridLayout->addWidget(pushButton3, 0, 2, 1, 1);

        pushButton4 = new QPushButton(layoutWidget);
        pushButton4->setObjectName(QString::fromUtf8("pushButton4"));

        gridLayout->addWidget(pushButton4, 1, 0, 1, 1);

        pushButton5 = new QPushButton(layoutWidget);
        pushButton5->setObjectName(QString::fromUtf8("pushButton5"));

        gridLayout->addWidget(pushButton5, 1, 1, 1, 1);

        pushButton6 = new QPushButton(layoutWidget);
        pushButton6->setObjectName(QString::fromUtf8("pushButton6"));

        gridLayout->addWidget(pushButton6, 1, 2, 1, 1);

        pushButton7 = new QPushButton(layoutWidget);
        pushButton7->setObjectName(QString::fromUtf8("pushButton7"));

        gridLayout->addWidget(pushButton7, 2, 0, 1, 1);

        pushButton8 = new QPushButton(layoutWidget);
        pushButton8->setObjectName(QString::fromUtf8("pushButton8"));

        gridLayout->addWidget(pushButton8, 2, 1, 1, 1);

        pushButton9 = new QPushButton(layoutWidget);
        pushButton9->setObjectName(QString::fromUtf8("pushButton9"));

        gridLayout->addWidget(pushButton9, 2, 2, 1, 1);

        pushButton0 = new QPushButton(layoutWidget);
        pushButton0->setObjectName(QString::fromUtf8("pushButton0"));

        gridLayout->addWidget(pushButton0, 3, 0, 1, 1);

        pushButtonClear = new QPushButton(layoutWidget);
        pushButtonClear->setObjectName(QString::fromUtf8("pushButtonClear"));

        gridLayout->addWidget(pushButtonClear, 3, 1, 1, 2);

        pushButtonOk = new QPushButton(TestByteDialog);
        pushButtonOk->setObjectName(QString::fromUtf8("pushButtonOk"));
        pushButtonOk->setGeometry(QRect(70, 230, 98, 27));
        pushButtonCancel = new QPushButton(TestByteDialog);
        pushButtonCancel->setObjectName(QString::fromUtf8("pushButtonCancel"));
        pushButtonCancel->setGeometry(QRect(190, 230, 98, 27));
        QWidget::setTabOrder(lineEdit, pushButton1);
        QWidget::setTabOrder(pushButton1, pushButton2);
        QWidget::setTabOrder(pushButton2, pushButton3);
        QWidget::setTabOrder(pushButton3, pushButton4);
        QWidget::setTabOrder(pushButton4, pushButton5);
        QWidget::setTabOrder(pushButton5, pushButton6);
        QWidget::setTabOrder(pushButton6, pushButton7);
        QWidget::setTabOrder(pushButton7, pushButton8);
        QWidget::setTabOrder(pushButton8, pushButton9);
        QWidget::setTabOrder(pushButton9, pushButton0);
        QWidget::setTabOrder(pushButton0, pushButtonClear);
        QWidget::setTabOrder(pushButtonClear, pushButtonOk);
        QWidget::setTabOrder(pushButtonOk, pushButtonCancel);

        retranslateUi(TestByteDialog);
        QObject::connect(pushButtonCancel, SIGNAL(clicked()), TestByteDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(TestByteDialog);
    } // setupUi

    void retranslateUi(QDialog *TestByteDialog)
    {
        TestByteDialog->setWindowTitle(QApplication::translate("TestByteDialog", "\346\250\241\346\213\237\351\207\217\346\265\213\350\257\225", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("TestByteDialog", "\346\250\241\346\213\237\351\207\217\345\200\274", 0, QApplication::UnicodeUTF8));
        pushButton1->setText(QApplication::translate("TestByteDialog", "1", 0, QApplication::UnicodeUTF8));
        pushButton2->setText(QApplication::translate("TestByteDialog", "2", 0, QApplication::UnicodeUTF8));
        pushButton3->setText(QApplication::translate("TestByteDialog", "3", 0, QApplication::UnicodeUTF8));
        pushButton4->setText(QApplication::translate("TestByteDialog", "4", 0, QApplication::UnicodeUTF8));
        pushButton5->setText(QApplication::translate("TestByteDialog", "5", 0, QApplication::UnicodeUTF8));
        pushButton6->setText(QApplication::translate("TestByteDialog", "6", 0, QApplication::UnicodeUTF8));
        pushButton7->setText(QApplication::translate("TestByteDialog", "7", 0, QApplication::UnicodeUTF8));
        pushButton8->setText(QApplication::translate("TestByteDialog", "8", 0, QApplication::UnicodeUTF8));
        pushButton9->setText(QApplication::translate("TestByteDialog", "9", 0, QApplication::UnicodeUTF8));
        pushButton0->setText(QApplication::translate("TestByteDialog", "0", 0, QApplication::UnicodeUTF8));
        pushButtonClear->setText(QApplication::translate("TestByteDialog", "\346\270\205\351\231\244", 0, QApplication::UnicodeUTF8));
        pushButtonOk->setText(QApplication::translate("TestByteDialog", "\347\241\256\350\256\244", 0, QApplication::UnicodeUTF8));
        pushButtonCancel->setText(QApplication::translate("TestByteDialog", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TestByteDialog: public Ui_TestByteDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTBYTEDIALOG_H

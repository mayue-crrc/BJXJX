#include <qdesktopwidget.h>

#include "cacuhelpdialog.h"
#include "ui_cacuhelpdialog.h"

CAcuHelpDialog::CAcuHelpDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CAcuHelpDialog)
{
    ui->setupUi(this);
    setWindowFlags( Qt::FramelessWindowHint );
    setStyleSheet(
        "QPushButton { font-family: \"SimHei\"; font-size: 18px; font-weight: bold; color: rgb(255, 255, 0);background-color:rgb(0,0,0); }"
        "QLabel { font-family: \"SimHei\"; font-size: 16px; color: rgb(255, 255, 0);}"
        "QDialog { background-color:rgb(54,54,54); color: rgb(255, 255, 0);}"
    );
}

CAcuHelpDialog::~CAcuHelpDialog()
{
    delete ui;
}

void CAcuHelpDialog::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type())
    {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void CAcuHelpDialog::on_quitPushButton_clicked()
{
    this->accept();
}

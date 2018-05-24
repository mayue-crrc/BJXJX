#include <qdesktopwidget.h>

#include "cdcdchelpdialog.h"
#include "ui_cdcdchelpdialog.h"

CDcdcHelpDialog::CDcdcHelpDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CDcdcHelpDialog)
{
    ui->setupUi(this);
    setWindowFlags( Qt::FramelessWindowHint );
    setStyleSheet(
        "QPushButton { font-family: \"SimHei\"; font-size: 18px; font-weight: bold; color: rgb(255, 255, 0);background-color:rgb(0,0,0); }"
        "QLabel { font-family: \"SimHei\"; font-size: 16px; color: rgb(255, 255, 0);}"
        "QDialog { background-color:rgb(54,54,54); color: rgb(255, 255, 0);}"
    );
}

CDcdcHelpDialog::~CDcdcHelpDialog()
{
    delete ui;
}

void CDcdcHelpDialog::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void CDcdcHelpDialog::on_quitPushButton_clicked()
{
    this->accept();
}

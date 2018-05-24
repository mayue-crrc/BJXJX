#include "cmainhelpdialog3.h"
#include "ui_cmainhelpdialog3.h"

CMainHelpdialog3::CMainHelpdialog3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CMainHelpdialog3)
{
    ui->setupUi(this);
    setWindowFlags( Qt::FramelessWindowHint );
    setStyleSheet(
        "QPushButton { font-family: \"SimHei\"; font-size: 18px; font-weight: bold; color: rgb(255, 255, 0);background-color:rgb(0,0,0); }"
        "QLabel { font-family: \"SimHei\"; font-size: 16px; color: rgb(255, 255, 0);}"
        "QDialog { background-color:rgb(54,54,54); color: rgb(255, 255, 0);}"
    );
}

CMainHelpdialog3::~CMainHelpdialog3()
{
    delete ui;
}

void CMainHelpdialog3::on_upToolButton_clicked()
{
    this->accept();


}

void CMainHelpdialog3::on_quitPushButton_clicked()
{
    this->accept();
    emit closeMainHelpDialogSignal();
    emit closeMainHelpDialog2Signal();
}

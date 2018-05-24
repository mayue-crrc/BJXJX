#include "testbytedialog.h"
#include "ui_testbytedialog.h"

TestByteDialog::TestByteDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TestByteDialog)
{
    ui->setupUi(this);
}

TestByteDialog::~TestByteDialog()
{
    delete ui;
}

void TestByteDialog::changeEvent(QEvent *e)
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
void TestByteDialog::on_pushButtonOk_clicked()
{
    g_testbyte = (char)ui->lineEdit->text().toUInt();
    this->accept();
}
void TestByteDialog::on_pushButton1_clicked()
{
    ui->lineEdit->setText( ui->lineEdit->text() + "1" );
}
void TestByteDialog::on_pushButton2_clicked()
{
    ui->lineEdit->setText( ui->lineEdit->text() + "2" );
}
void TestByteDialog::on_pushButton3_clicked()
{
    ui->lineEdit->setText( ui->lineEdit->text() + "3" );
}
void TestByteDialog::on_pushButton4_clicked()
{
    ui->lineEdit->setText( ui->lineEdit->text() + "4" );
}
void TestByteDialog::on_pushButton5_clicked()
{
    ui->lineEdit->setText( ui->lineEdit->text() + "5" );
}
void TestByteDialog::on_pushButton6_clicked()
{
    ui->lineEdit->setText( ui->lineEdit->text() + "6" );
}
void TestByteDialog::on_pushButton7_clicked()
{
    ui->lineEdit->setText( ui->lineEdit->text() + "7" );
}
void TestByteDialog::on_pushButton8_clicked()
{
    ui->lineEdit->setText( ui->lineEdit->text() + "8" );
}
void TestByteDialog::on_pushButton9_clicked()
{
    ui->lineEdit->setText( ui->lineEdit->text() + "9" );
}
void TestByteDialog::on_pushButton0_clicked()
{
    ui->lineEdit->setText( ui->lineEdit->text() + "0" );
}
void TestByteDialog::on_pushButtonClear_clicked()
{
    ui->lineEdit->setText( "" );
}

#include "csetcarsdirdlg.h"
#include "ui_csetcarsdirdlg.h"
#include "cglobal.h"

bool optDebugBool=false;
CSetCarsDirDlg::CSetCarsDirDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CSetCarsDirDlg)
{
    ui->setupUi(this);
}

CSetCarsDirDlg::~CSetCarsDirDlg()
{
    delete ui;
}

void CSetCarsDirDlg::changeEvent(QEvent *e)
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


void CSetCarsDirDlg::on_pushButton_clicked()
{
    int i_byte=ui->lineEdit->text().toInt();
    int i_bit=ui->lineEdit_2->text().toInt();
    int i_num=ui->lineEdit_3->text().toInt();
    if( ui->lineEdit->text()=="" )
        return;
    if(ui->lineEdit_2->text()=="")
    {
        receiveData[i_byte-100]=i_num;
    }else{
        if(0==i_num){
            i_num=1;
            receiveData[i_byte-100] &= (~(i_num << i_bit));
        }else{
            receiveData[i_byte-100] |=(i_num << i_bit );
        }
    }
    //accept();
}

void CSetCarsDirDlg::on_pushButton_2_clicked()
{
    if(optDebugBool)
    {
        ui->pushButton_2->setText("Stop rand Set all to 0");
        optDebugBool=false;
    }else{
        ui->pushButton_2->setText("Start Rand...");
        optDebugBool=true;
        for(int i=0; i<D_RECEIVE_BUFFER_SIZE;i++)
            receiveData[i]=0;
    }
}

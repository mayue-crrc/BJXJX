#include "CSerialDebugDialog.h"
#include "ui_CSerialDebugDialog.h"
#include "cglobal.h"


CSerialDebugDialog::CSerialDebugDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CSerialDebugDialog)
{
    ui->setupUi(this);
    bSetRevData = true;
    bBinaryVar = true;

    connect(&timer_1s,SIGNAL(timeout()),this,SLOT(OnTimer_1s()));
    timer_1s.start(1000);
}

CSerialDebugDialog::~CSerialDebugDialog()
{
    delete ui;
}

void CSerialDebugDialog::changeEvent(QEvent *e)
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

void CSerialDebugDialog::on_pushButton_num1_clicked()
{
    if(!ui->lineEdit_arrayindex->isReadOnly())
        ui->lineEdit_arrayindex->setText(ui->lineEdit_arrayindex->text()+"1");
    else if(!ui->lineEdit_var->isReadOnly())
        ui->lineEdit_var->setText(ui->lineEdit_var->text()+"1");
}

void CSerialDebugDialog::on_pushButton_num2_clicked()
{
    if(!ui->lineEdit_arrayindex->isReadOnly())
        ui->lineEdit_arrayindex->setText(ui->lineEdit_arrayindex->text()+"2");
    else if(!ui->lineEdit_var->isReadOnly())
        ui->lineEdit_var->setText(ui->lineEdit_var->text()+"2");
}

void CSerialDebugDialog::on_pushButton_num3_clicked()
{
    if(!ui->lineEdit_arrayindex->isReadOnly())
        ui->lineEdit_arrayindex->setText(ui->lineEdit_arrayindex->text()+"3");
    else if(!ui->lineEdit_var->isReadOnly())
        ui->lineEdit_var->setText(ui->lineEdit_var->text()+"3");
}

void CSerialDebugDialog::on_pushButton_num4_clicked()
{
    if(!ui->lineEdit_arrayindex->isReadOnly())
        ui->lineEdit_arrayindex->setText(ui->lineEdit_arrayindex->text()+"4");
    else if(!ui->lineEdit_var->isReadOnly())
        ui->lineEdit_var->setText(ui->lineEdit_var->text()+"4");
}

void CSerialDebugDialog::on_pushButton_num5_clicked()
{
    if(!ui->lineEdit_arrayindex->isReadOnly())
        ui->lineEdit_arrayindex->setText(ui->lineEdit_arrayindex->text()+"5");
    else if(!ui->lineEdit_var->isReadOnly())
        ui->lineEdit_var->setText(ui->lineEdit_var->text()+"5");
}

void CSerialDebugDialog::on_pushButton_num6_clicked()
{
    if(!ui->lineEdit_arrayindex->isReadOnly())
        ui->lineEdit_arrayindex->setText(ui->lineEdit_arrayindex->text()+"6");
    else if(!ui->lineEdit_var->isReadOnly())
        ui->lineEdit_var->setText(ui->lineEdit_var->text()+"6");
}

void CSerialDebugDialog::on_pushButton_num7_clicked()
{
    if(!ui->lineEdit_arrayindex->isReadOnly())
        ui->lineEdit_arrayindex->setText(ui->lineEdit_arrayindex->text()+"7");
    else if(!ui->lineEdit_var->isReadOnly())
        ui->lineEdit_var->setText(ui->lineEdit_var->text()+"7");
}

void CSerialDebugDialog::on_pushButton_num8_clicked()
{
    if(!ui->lineEdit_arrayindex->isReadOnly())
        ui->lineEdit_arrayindex->setText(ui->lineEdit_arrayindex->text()+"8");
    else if(!ui->lineEdit_var->isReadOnly())
        ui->lineEdit_var->setText(ui->lineEdit_var->text()+"8");
}


void CSerialDebugDialog::on_pushButton_num9_clicked()
{
    if(!ui->lineEdit_arrayindex->isReadOnly())
        ui->lineEdit_arrayindex->setText(ui->lineEdit_arrayindex->text()+"9");
    else if(!ui->lineEdit_var->isReadOnly())
        ui->lineEdit_var->setText(ui->lineEdit_var->text()+"9");
}

void CSerialDebugDialog::on_pushButton_num0_clicked()
{
    if(!ui->lineEdit_arrayindex->isReadOnly())
        ui->lineEdit_arrayindex->setText(ui->lineEdit_arrayindex->text()+"0");
    else if(!ui->lineEdit_var->isReadOnly())
        ui->lineEdit_var->setText(ui->lineEdit_var->text()+"0");
}

void CSerialDebugDialog::on_pushButton_clear_clicked()
{
    if(!ui->lineEdit_arrayindex->isReadOnly())
        ui->lineEdit_arrayindex->setText("");
    else if(!ui->lineEdit_var->isReadOnly())
        ui->lineEdit_var->setText("");
}

void CSerialDebugDialog::on_pushButton_set_clicked()
{
    if(ui->lineEdit_arrayindex->text() == ""
       && ui->lineEdit_var->text() == "")
    {
        return;
    }

    QString varTextStr = ui->lineEdit_var->text();
    if(this->bBinaryVar)
    {
        while(varTextStr.length() < 16)
        {
            varTextStr.insert(0,"0");
        }
    }
    else
    {
        if(varTextStr.toInt() > 65535)
        {
            varTextStr = "65535";
        }
    }
    ui->lineEdit_var->setText(varTextStr);

    SERIALSETSTRU serialStru;
    serialStru.nArrayIndex = ui->lineEdit_arrayindex->text().toInt();
    if(this->bBinaryVar)
        serialStru.nNum = strtol(ui->lineEdit_var->text().toStdString().c_str(), NULL, 2);
    else
        serialStru.nNum = ui->lineEdit_var->text().toInt();

    if(ui->comboBox->currentText() == "|=")
        serialStru.nOperation = 0;
    else if(ui->comboBox->currentText() == "&=")
        serialStru.nOperation = 1;
    else if(ui->comboBox->currentText() == "^=")
        serialStru.nOperation = 2;
    else if(ui->comboBox->currentText() == "=")
        serialStru.nOperation = 3;

    serialStru.bSetRevData = bSetRevData;
    serialSetList.push_back(serialStru);

    QString str;
    if(this->bSetRevData)
        str = "receiveData";
    else
        str = "sendData";

    ui->textEdit->setPlainText(ui->textEdit->toPlainText()+
                               "\n"+ str+
                               "["+ui->lineEdit_arrayindex->text()+"]"
                               + ui->comboBox->currentText() + ui->lineEdit_var->text()+";");
}

void CSerialDebugDialog::on_pushButton_reset_clicked()
{
    ui->textEdit->clear();
    this->serialSetList.clear();

    for(int i = 0; i < 4000; i++)
       g_dataBuffer_MVB[i] = 0;

    for(int i = 0; i < 128; i++)
       MVBsendData[i] = 0;
}

void CSerialDebugDialog::on_lineEdit_arrayindex_selectionChanged()
{
    if(ui->lineEdit_arrayindex->isReadOnly())
    {
        ui->lineEdit_arrayindex->setReadOnly(false);
        ui->lineEdit_var->setReadOnly(true);
    }
    ui->pushButton_num2->setDisabled(false);
    ui->pushButton_num3->setDisabled(false);
    ui->pushButton_num4->setDisabled(false);
    ui->pushButton_num5->setDisabled(false);
    ui->pushButton_num6->setDisabled(false);
    ui->pushButton_num7->setDisabled(false);
    ui->pushButton_num8->setDisabled(false);
    ui->pushButton_num9->setDisabled(false);
}

void CSerialDebugDialog::on_lineEdit_var_selectionChanged()
{
    if(ui->lineEdit_var->isReadOnly())
    {
        ui->lineEdit_var->setReadOnly(false);
        ui->lineEdit_arrayindex->setReadOnly(true);
    }
    SetSoftKeyBoardState();
}

void CSerialDebugDialog::on_radioButton_revData_clicked()
{
    ui->radioButton_revData->setChecked(true);
    ui->radioButton_sendData->setChecked(false);
    bSetRevData = true;
}

void CSerialDebugDialog::on_radioButton_sendData_clicked()
{
    ui->radioButton_revData->setChecked(false);
    ui->radioButton_sendData->setChecked(true);
    bSetRevData = false;
}

void CSerialDebugDialog::on_radioButton_binVar_clicked()
{
    ui->radioButton_binVar->setChecked(true);
    ui->radioButton_decVar->setChecked(false);
    bBinaryVar = true;

    ui->lineEdit_var->setText("");
    if(!ui->lineEdit_var->isReadOnly())
        SetSoftKeyBoardState();
}

void CSerialDebugDialog::on_radioButton_decVar_clicked()
{
    ui->radioButton_binVar->setChecked(false);
    ui->radioButton_decVar->setChecked(true);
    bBinaryVar = false;

    ui->lineEdit_var->setText("");
    if(!ui->lineEdit_var->isReadOnly())
        SetSoftKeyBoardState();
}

void CSerialDebugDialog::closeEvent(QCloseEvent *)
{
    this->hide();
}

void CSerialDebugDialog::SetSoftKeyBoardState()
{
    if(bBinaryVar)
    {
        ui->pushButton_num2->setDisabled(true);
        ui->pushButton_num3->setDisabled(true);
        ui->pushButton_num4->setDisabled(true);
        ui->pushButton_num5->setDisabled(true);
        ui->pushButton_num6->setDisabled(true);
        ui->pushButton_num7->setDisabled(true);
        ui->pushButton_num8->setDisabled(true);
        ui->pushButton_num9->setDisabled(true);
    }
    else
    {
        ui->pushButton_num2->setDisabled(false);
        ui->pushButton_num3->setDisabled(false);
        ui->pushButton_num4->setDisabled(false);
        ui->pushButton_num5->setDisabled(false);
        ui->pushButton_num6->setDisabled(false);
        ui->pushButton_num7->setDisabled(false);
        ui->pushButton_num8->setDisabled(false);
        ui->pushButton_num9->setDisabled(false);
    }
}

void CSerialDebugDialog::OnTimer_1s()
{
    //ui->textEdit_2
    WORD temp[64];
            for(int i = 0; i < 64; i++)
            {
                  temp[i] = (MVBsendData[i*2+1]<<8) | MVBsendData[i*2];

            }
            ui->textEdit_2->clear();
            for(int i=0; i<64; i++)
            {
              //  ui->textEdit_2->setPlainText(ui->textEdit_2->toPlainText()+" " + QString::number(data[i]));
                ui->textEdit_2->setPlainText(ui->textEdit_2->toPlainText()+" " + QString::number(i+1)+":"+QString::number(temp[i],16));
              //  rec_data -> setPlainText(rec_data->toPlainText()+" " + QString::number(data[i]));
            }

}

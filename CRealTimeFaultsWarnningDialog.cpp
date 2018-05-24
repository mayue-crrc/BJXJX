#include "CRealTimeFaultsWarnningDialog.h"
#include "ui_CRealTimeFaultsWarnningDialog.h"
#include "cglobal.h"

#include "faultcommonprocess.h"

CRealTimeFaultsWarnningDialog::CRealTimeFaultsWarnningDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CRealTimeFaultsWarnningDialog)
{
    ui->setupUi(this);
    setWindowFlags( Qt::FramelessWindowHint  | Qt::WindowStaysOnTopHint);
    setStyleSheet(
        "QPushButton { color: rgb(0, 0, 0);background-color:rgb(255,255,255); }"
        "QLabel { font-family: \"SimHei\"; font-size: 24px; }"
    );
   //     "QLabel { font-family: \"SimHei\"; font-size: 24px; color: rgb(0, 0, 0);}"
}

CRealTimeFaultsWarnningDialog::~CRealTimeFaultsWarnningDialog()
{
    delete ui;
}

void CRealTimeFaultsWarnningDialog::changeEvent(QEvent *e)
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




void CRealTimeFaultsWarnningDialog::paintEvent(QPaintEvent* /*e*/)
{
}

void CRealTimeFaultsWarnningDialog::on_pushButton_clicked()
{
    g_popup_exist_flg = false;
    g_faultsrom[m_romidx].confirm = true;
    this->hide();
   // this->accept();
}

void CRealTimeFaultsWarnningDialog::on_pushButton_2_clicked()
{
    g_popup_exist_flg = false;
    g_faultsrom[m_romidx].confirm = true;
    FAULTS_ROM_DATA *pdata = &g_faultsrom[0];
    for (int i=0; i<g_faultsRomLen; i++)
    {
        if (pdata->flg && (3 != pdata->grade) && !pdata->confirm)
        {
            pdata->confirm = true;
        }
        pdata++;
    }
    this->hide();
  //  this->accept();

}

void CRealTimeFaultsWarnningDialog::SetRomIdx(int rom_idx)
{
    QString str = "";
    ASSERT((rom_idx >= 0) && (rom_idx < g_faultsRomLen));
    m_romidx = rom_idx;
//    str.sprintf("%d", g_faultsrom[m_romidx].code);
    str.sprintf("%4x", g_faultsrom[m_romidx].code);

    int code = g_faultsrom[m_romidx].code;
//    int nameidx = FindFaultsNameTableIndex(code);
//    if(nameidx<0)
//    {
//        QMessageBox::warning(NULL,
//                                     "error",
//                                     QString("An Error at: \nFile:") +__FILE__+ QString("   Line:") +QString::number(__LINE__)+
//                                      QObject::trUtf8("  故障代码无效：")+QString::number(code ,16).toUpper()+QObject::trUtf8("  请联系TMS调试人员!"),
//                                     QMessageBox::Ok,QMessageBox::Ok);
//        qWarning()<<"system.ini is not OK! TC1=0 && TC2=0";
//        return;

//    }


    if (1 == g_faultsrom[m_romidx].grade)
    {
        QPalette palette;
        palette.setColor(ui->label->foregroundRole(),Qt::red);
        palette.setBrush(ui->label->backgroundRole(),QBrush(Qt::yellow));
        ui->label->setPalette(palette);
        ui->label->setAutoFillBackground(true);

    }
    else if (2 == g_faultsrom[m_romidx].grade)
    {
        QPalette palette;
        palette.setColor(ui->label->foregroundRole(),Qt::darkRed);
        ui->label->setPalette(palette);
    }
    else
    {
        QPalette palette;
        palette.setColor(ui->label->foregroundRole(),Qt::black);
        ui->label->setPalette(palette);
    }
    // if couple train, use pdata->car to diff localdata or othertraindata
    if(m_TestNum == 2) // no couple
    {
        ui->label->setText("        "+GetCarriageString(g_faultsrom[m_romidx].position)+"   "+GetFaultText(g_faultsrom[m_romidx].device));
    }else
    {
        if(g_faultsrom[m_romidx].car == D_CAR_1)
        {
            ui->label->setText(QSTR("  本车   ")+GetCarriageString(g_faultsrom[m_romidx].position)+"   "+GetFaultText(g_faultsrom[m_romidx].device));
        }else if(g_faultsrom[m_romidx].car == D_CAR_2)
        {
            ui->label->setText(QSTR("  它车   ")+GetCarriageString(g_faultsrom[m_romidx].position)+"   "+GetFaultText(g_faultsrom[m_romidx].device));
        }else
        {
            ui->label->setText("      "+GetCarriageString(g_faultsrom[m_romidx].position)+"   "+GetFaultText(g_faultsrom[m_romidx].device));
        }
    }
}

QString CRealTimeFaultsWarnningDialog::GetFaultText(char device)
{
    QString str = "";
    switch (device)
    {
    case D_DEVICE_COM:
        {
            QString tmp;
            tmp = g_faultsrom[m_romidx].name;
            str =  QSTR("  通信故障");
            str = tmp+str;
            break;
        }

    case D_DEVICE_TRAIN:
        str =  QObject::trUtf8("列车控制系统  严重故障");
        break;
    case D_DEVICE_ACU:
        str =  QObject::trUtf8("辅助电源系统  严重故障");
        break;
    case D_DEVICE_TCU:
        str =  QObject::trUtf8("牵引系统     严重故障");
        break;
    case D_DEVICE_DCDC:
        str =  QObject::trUtf8("超级电容系统  严重故障");
        break;
    case D_DEVICE_BCU:
        str =  QObject::trUtf8("制动系统     严重故障");
        break;
    case D_DEVICE_DOOR:
        str =  QObject::trUtf8("门控系统     严重故障");
        break;
    case D_DEVICE_HVAC:
        str =  QObject::trUtf8("空调系统     严重故障");
        break;
    case D_DEVICE_PIS:
        str =  QObject::trUtf8("PIS系统     严重故障");
        break;
    default:
        str = "---";
        break;
    }

    return str;
}

QString CRealTimeFaultsWarnningDialog::GetCarriageString(char position)
{
    QString str = "";
    switch (position)
    {
    case D_POSITION_RB:
        str =  QObject::trUtf8("RB车");
        break;
    case D_POSITION_RA:
        str =  QObject::trUtf8("RA车");
        break;
    case D_POSITION_MB:
        str =  QObject::trUtf8("MB车");
        break;
    case D_POSITION_MA:
        str =  QObject::trUtf8("MA车");
        break;
    case D_POSITION_P:
        str =  QObject::trUtf8("P车");
        break;
    default:
        str = "---";
        break;
    }

    return str;
}


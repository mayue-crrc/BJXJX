#include <qdesktopwidget.h>
#include <qdebug.h>

#include "receivedata.h"
#include "cfaultdetaildialog.h"
#include "ui_cfaultdetaildialog.h"

CFaultDetailDialog::CFaultDetailDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CFaultDetailDialog)
{
    ui->setupUi(this);
    setWindowFlags( Qt::FramelessWindowHint );
    setStyleSheet(
        "QPushButton { font-family: \"SimHei\"; font-size: 18px; font-weight: bold; color: rgb(255, 255, 0);background-color:rgb(0,0,0); }"
        "QLabel { font-family: \"SimHei\"; font-size: 16px; color: rgb(255, 255, 0);}"
        "QDialog { background-color:rgb(54,54,54); color: rgb(255, 255, 0);}"
    );

    int romIdx = 0;
    if (E_INVOKE_HISTORY == g_invoke_type)
    {
        romIdx = g_historyFaultsList.list[g_history_click_idx].romIdx;

        ST_DATETIME datetime = g_historyFaultsList.list[g_history_click_idx].datetime;
        m_strDateTime.sprintf("%4d-%02d-%02d %02d:%02d:%02d", datetime.year, datetime.month, datetime.day,
                    datetime.hour, datetime.minute, datetime.second);

        int nIDType = g_historyFaultsList.list[g_history_click_idx].nIDType;
        long lID = g_historyFaultsList.list[g_history_click_idx].lID;
//        if(nIDType == ENUM_LOGIN_TYPE_DRIVER)
//            ui->labelID_2->setText(QString::number(lID));
//        else if(nIDType == ENUM_LOGIN_TYPE_MAINTAINER)
//            ui->labelID_2->setText(QString::number(lID));
//        else
//            ui->labelID_2->setText("---");
    }
    else if (E_INVOKE_CURRENT == g_invoke_type)
    {
        romIdx = g_current_click_idx;
        m_strDateTime = g_current_click_datetime;
//        ui->labelID->setText("");
//        ui->labelID_2->setText("");
    }

    ASSERT((romIdx >= 0) && (romIdx <= g_faultsRomLen))
    m_strCode.sprintf("%04X", g_faultsrom[romIdx].code);
    m_strGrade.sprintf("%d", g_faultsrom[romIdx].grade);
    m_strName = g_faultsrom[romIdx].name;
    m_strAdvice = g_faultsrom[romIdx].advice;

    if( g_faultsrom[romIdx].code==1 || g_faultsrom[romIdx].code==20 ) // ÁíÍâÒ»²àVCU/IDUÀëÏß
    {
        if(MAIN_MC1_HMI_BOOL&&!(MAIN_MC2_HMI_BOOL)) // MC1 HMI
            m_strPos = "Mc2";
        else
            m_strPos = "Mc1";
    }
    else
    {
        m_strPos = GetPositionStr(g_faultsrom[romIdx].position);
    }

    m_strDev = GetDeviceStr(g_faultsrom[romIdx].device);

    ui->labelCode->setText(m_strCode);
    ui->labelGrade->setText(m_strGrade);
    ui->labelDateTime->setText(m_strDateTime);
    ui->labelName->setText(m_strName);
    ui->labelAdvice->setText(m_strAdvice);
    ui->labelPostion->setText(m_strPos);
    ui->labelDevice->setText(m_strDev);
}

CFaultDetailDialog::~CFaultDetailDialog()
{
    delete ui;
}

void CFaultDetailDialog::changeEvent(QEvent *e)
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

void CFaultDetailDialog::on_quitPushButton_clicked()
{
    this->accept();
}

void CFaultDetailDialog::paintEvent(QPaintEvent* e)
{
}

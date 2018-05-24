#include "cmodifyaccumulatemilepage.h"

ROMDATA g_PicRom_ModifyAccumulateMileage[] =
{
    /*string                        font                     rc                  foreground color              background color            control type                   ID           */
    {QSTR("超级电容管理"),  D_FONT(13),  QRect(  0,    0, 640, 60),        Qt::black,                   Qt::yellow,                 CONTROL_LABEL,        ID_IGNORE                 },

    {QSTR("待超级电容放电按键弹起后再退出本页面。"),  D_FONT(8),  QRect(  100, 300, 300, 60),        Qt::yellow,                   Qt::black,                 CONTROL_LABEL,        ID_PICMAM_LABEL_TIPS                 },

    {"",                        D_DEFAULT_FONT,      QRect( 100,150, 80, 80),      Qt::yellow,                  Qt::transparent,                CONTROL_CAPACITANCE,          ID_PICMAM_CAPACITANCE_NUMBER2         },
    {"",                        D_DEFAULT_FONT,      QRect( 250,150, 80, 80),      Qt::yellow,                  Qt::transparent,                CONTROL_CAPACITANCE,          ID_PICMAM_CAPACITANCE_NUMBER3         },

    {QSTR("超级电容应急启动"),                   D_COMMON_TITLE_FONT,  QRect(400,  200,  150, 30),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICMAM_BUTTON_NUMBER4  },
    {QSTR("超级电容应急停止"),                   D_COMMON_TITLE_FONT,  QRect(400,  250,  150, 30),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICMAM_BUTTON_NUMBER5  },
    {QSTR("超级电容放电"),                       D_COMMON_TITLE_FONT,  QRect(400,  150,  150, 30),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICMAM_BUTTON_NUMBER2  },
    {QSTR("退出"),                  D_COMMON_TITLE_FONT,  QRect(500,  400, 120, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICMAM_BUTTON_QUIT      },
  };
int g_ModifyAccumulateMileageRomLen = sizeof(g_PicRom_ModifyAccumulateMileage)/sizeof(ROMDATA);

BEGIN_MESSAGE_MAP(CModifyAccumulateMilePage,CPage)
        ON_UPDATE_PAGE()
        ON_LBUTTONDOWN(ID_PICMAM_BUTTON_NUMBER2,OnNum2Down)
        ON_LBUTTONDOWN(ID_PICMAM_BUTTON_NUMBER4,OnNum4Down)
        ON_LBUTTONDOWN(ID_PICMAM_BUTTON_NUMBER5,OnNum5Down)

        //ON_LBUTTONUP(ID_PICMAM_BUTTON_NUMBER2,OnNum2Up)
        ON_LBUTTONDOWN( ID_PICMAM_BUTTON_QUIT  ,OnQuitButtonDown)
        ON_LBUTTONUP( ID_PICMAM_BUTTON_QUIT  ,OnQuitButtonUp)

      END_MESSAGE_MAP()

CModifyAccumulateMilePage::CModifyAccumulateMilePage()
{
}

void CModifyAccumulateMilePage::OnInitPage()
{

    ((CButton*)GetDlgItem(ID_PICMAM_BUTTON_NUMBER2))->m_bAutoUpState = false;
    ((CButton*)GetDlgItem(ID_PICMAM_BUTTON_NUMBER4))->m_bAutoUpState = false;
    //((CButton*)GetDlgItem(ID_PICMAM_BUTTON_NUMBER5))->m_bAutoUpState = false;

}
void CModifyAccumulateMilePage::OnUpdatePage()
{



    ((CCapacitanceCtrl*)GetDlgItem(ID_PICMAM_CAPACITANCE_NUMBER2))->SetValue(SC1ALL_Capacity_U8,SC1ALL_vSc_I16*0.1);
    ((CCapacitanceCtrl*)GetDlgItem(ID_PICMAM_CAPACITANCE_NUMBER3))->SetValue(SC2ALL_Capacity_U8,SC2ALL_vSc_I16*0.1);
    ((CCapacitanceCtrl*)GetDlgItem(ID_PICMAM_CAPACITANCE_NUMBER3))->SetCtrlBKColor(Qt::green);
    ((CCapacitanceCtrl*)GetDlgItem(ID_PICMAM_CAPACITANCE_NUMBER2))->SetCtrlBKColor(Qt::green);

    if (m_btnPress)
    {
        ((CButton*)GetDlgItem(ID_PICMAM_BUTTON_NUMBER2))->ChangeButtonState(LBUTTON_DOWN);

        static int times = 0;
        times++;
        if (times%times_n == 0)
        {
            DCDC_valid_timer--;
            if (DCDC_valid_timer==0)
            {
                ((CButton*)GetDlgItem(ID_PICMAM_BUTTON_NUMBER2))->ChangeButtonState(LBUTTON_UP);
                m_btnPress = false;
                IDUCT_DischargeReq_B1 = false;

            }

        }

    }


    if(IDUCT_Supercap_STOP)
    {
        if(DCDCEMCstarttimer-- == 0)
        {
            IDUCT_Supercap_STOP = false;
        }
    }
}


void CModifyAccumulateMilePage::OnQuitButtonDown()
{
    if(IDUCT_DischargeReq_B1)
    {
        return;
    }else
    {
        ((CButton*)GetDlgItem(ID_PICMAM_BUTTON_QUIT))->ChangeButtonState(LBUTTON_DOWN);
    }
}

void CModifyAccumulateMilePage::OnQuitButtonUp()
{
    if(IDUCT_DischargeReq_B1)
    {

        return;
    }else
    {
        ((CButton*)GetDlgItem(ID_PICMAM_BUTTON_QUIT))->ChangeButtonState(LBUTTON_UP);
        //IDUCT_Supercap_START = false;
        IDUCT_Supercap_STOP = false;
        ChangePage(PAGE_ROM_INDEX_PARAMETERSET);
    }
}



void CModifyAccumulateMilePage::OnNum2Down()
{
    ((CButton*)GetDlgItem(ID_PICMAM_BUTTON_NUMBER2))->ChangeButtonState(LBUTTON_DOWN);
    m_btnPress = true;
    DCDC_valid_timer = 2;
    IDUCT_DischargeReq_B1 = true;
}
void CModifyAccumulateMilePage::OnNum4Down()
{
    ((CButton*)GetDlgItem(ID_PICMAM_BUTTON_NUMBER4))->ChangeButtonState(LBUTTON_DOWN);
    IDUCT_Supercap_START = true;
}
void CModifyAccumulateMilePage::OnNum5Down()
{
    ((CButton*)GetDlgItem(ID_PICMAM_BUTTON_NUMBER5))->ChangeButtonState(LBUTTON_DOWN);
    ((CButton*)GetDlgItem(ID_PICMAM_BUTTON_NUMBER4))->ChangeButtonState(LBUTTON_UP);
    IDUCT_Supercap_STOP = true;
    IDUCT_Supercap_START = false;

    DCDCEMCstarttimer = 10;
}


//void CModifyAccumulateMilePage::OnNum2Up()
//{

//}






#include "cmaincontrolcmdpage.h"

extern vector<CPage*>  g_PageVec;

ROMDATA g_PicRom_MainControlCmd[] =
{
    /*string                font                          rc                  foreground color              background color                control type                   ID           */
    D_COMMON_PAGE_HEADER

    {QSTR("Sanding forbidden"),         D_FONT(7),  QRect(128,100,128, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICMCC_BUTTON_SAND_FORBID   },
    {QSTR("Washing Mode"),             D_FONT(7),  QRect(384,100,128, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICMCC_BUTTON_WASHING   },

    {QSTR("Shunting"),             D_FONT(7),  QRect(128,170,128, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICMCC_BUTTON_DISPATCH   },
    {QSTR("Light"),             D_FONT(7),  QRect(384,170,128, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICMCC_BUTTON_LIGHT   },

    {QSTR("Compulsive\n Pump Wind"),          D_FONT(7),  QRect(128,240,128, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICMCC_BUTTON_FORCED_PUMP   },
    //{QSTR("手动供电"),          D_COMMON_TITLE_FONT,  QRect(384,240,128, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICMCC_BUTTON_POWERON_BYHAND   },

    {QSTR("Skip Station"),             D_FONT(7),  QRect(128,310,128, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICMCC_BUTTON_SKIPSTATION   },


    {QSTR("Quit"),             D_FONT(7),  QRect(384,380,128, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICMCC_BUTTON_QUIT   },
};
int g_PicRom_MainControlCmdLen = sizeof(g_PicRom_MainControlCmd)/sizeof(ROMDATA);

BEGIN_MESSAGE_MAP(CMainControlCmdPage,CPage)
        ON_UPDATE_PAGE()
        ON_LBUTTONDOWN(ID_PICMCC_BUTTON_SAND_FORBID,OnButtonSandForbidDown)
        ON_LBUTTONDOWN(ID_PICMCC_BUTTON_WASHING,OnButtonWashingDown)
        ON_LBUTTONDOWN(ID_PICMCC_BUTTON_DISPATCH,OnButtonDispatchDown)
        ON_LBUTTONDOWN(ID_PICMCC_BUTTON_LIGHT,OnButtonLightDown)
        ON_LBUTTONDOWN(ID_PICMCC_BUTTON_FORCED_PUMP,OnButtonForcedPumpDown)
        //ON_LBUTTONDOWN(ID_PICMCC_BUTTON_POWERON_BYHAND,OnButtonPoweronByhandDown)
        ON_LBUTTONDOWN(ID_PICMCC_BUTTON_SKIPSTATION,OnSkipStationDown)

        ON_LBUTTONDOWN(ID_PICMCC_BUTTON_QUIT,OnButtonQuitDown)
        ON_LBUTTONUP(ID_PICMCC_BUTTON_FORCED_PUMP,OnButtonForcedPumpUp)
END_MESSAGE_MAP()

CMainControlCmdPage::CMainControlCmdPage()
{
}

void CMainControlCmdPage::OnInitPage()
{
    CButton* pButton;
    int nIDArray[] =
    {
        ID_PICMCC_BUTTON_SAND_FORBID,
        ID_PICMCC_BUTTON_WASHING,
        ID_PICMCC_BUTTON_DISPATCH,
        ID_PICMCC_BUTTON_LIGHT,
        ID_PICMCC_BUTTON_FORCED_PUMP,
        //ID_PICMCC_BUTTON_POWERON_BYHAND,
        ID_PICMCC_BUTTON_SKIPSTATION,
    };

    for(int i = 0; i < int(sizeof(nIDArray)/sizeof(int)); i++)
    {
        pButton = (CButton *)GetDlgItem(nIDArray[i]);
        pButton->m_bAutoUpState = false;
    }


    if(SandingForbid_Bool)
    {
        ((CButton *)GetDlgItem(ID_PICMCC_BUTTON_SAND_FORBID))->ChangeButtonState(LBUTTON_DOWN);
    }
    else
    {
        ((CButton *)GetDlgItem(ID_PICMCC_BUTTON_SAND_FORBID))->ChangeButtonState(LBUTTON_UP);
    }

    if(WashingMode_Bool)
    {
        ((CButton *)GetDlgItem(ID_PICMCC_BUTTON_WASHING))->ChangeButtonState(LBUTTON_DOWN);
    }
    else
    {
        ((CButton *)GetDlgItem(ID_PICMCC_BUTTON_WASHING))->ChangeButtonState(LBUTTON_UP);
    }

    if(DispatchMode_Bool)
    {
        ((CButton *)GetDlgItem(ID_PICMCC_BUTTON_DISPATCH))->ChangeButtonState(LBUTTON_DOWN);
    }
    else
    {
        ((CButton *)GetDlgItem(ID_PICMCC_BUTTON_DISPATCH))->ChangeButtonState(LBUTTON_UP);
    }

    if(LightOn_Bool)
    {
        ((CButton *)GetDlgItem(ID_PICMCC_BUTTON_LIGHT))->ChangeButtonState(LBUTTON_DOWN);
    }
    else
    {
        ((CButton *)GetDlgItem(ID_PICMCC_BUTTON_LIGHT))->ChangeButtonState(LBUTTON_UP);
    }

    /*if(PowerOnByHand_Bool)
    {
        ((CButton *)GetDlgItem(ID_PICMCC_BUTTON_POWERON_BYHAND))->ChangeButtonState(LBUTTON_DOWN);
    }
    else
    {
        ((CButton *)GetDlgItem(ID_PICMCC_BUTTON_POWERON_BYHAND))->ChangeButtonState(LBUTTON_UP);
    }*/

    if(Main_SkipStationInstruction_Bool)
    {
        ((CButton *)GetDlgItem(ID_PICMCC_BUTTON_SKIPSTATION))->ChangeButtonState(LBUTTON_DOWN);
    }
    else
    {
        ((CButton *)GetDlgItem(ID_PICMCC_BUTTON_SKIPSTATION))->ChangeButtonState(LBUTTON_UP);
    }

}
void CMainControlCmdPage::OnButtonSandForbidDown()
{
    SandingForbid_Bool = !SandingForbid_Bool;
    if(SandingForbid_Bool)
    {
        ((CButton *)GetDlgItem(ID_PICMCC_BUTTON_SAND_FORBID))->ChangeButtonState(LBUTTON_DOWN);
    }
    else
    {
        ((CButton *)GetDlgItem(ID_PICMCC_BUTTON_SAND_FORBID))->ChangeButtonState(LBUTTON_UP);
    }
}

void CMainControlCmdPage::OnButtonWashingDown()
{
    WashingMode_Bool = !WashingMode_Bool;
    if(WashingMode_Bool)
    {
        DispatchMode_Bool =  false;
        ((CButton *)GetDlgItem(ID_PICMCC_BUTTON_WASHING))->ChangeButtonState(LBUTTON_DOWN);
        ((CButton *)GetDlgItem(ID_PICMCC_BUTTON_DISPATCH))->ChangeButtonState(LBUTTON_UP);
    }
    else
    {
        ((CButton *)GetDlgItem(ID_PICMCC_BUTTON_WASHING))->ChangeButtonState(LBUTTON_UP);
    }
}
void CMainControlCmdPage::OnButtonDispatchDown()
{
    DispatchMode_Bool = !DispatchMode_Bool;
    if(DispatchMode_Bool)
    {
        WashingMode_Bool =  false;
        ((CButton *)GetDlgItem(ID_PICMCC_BUTTON_DISPATCH))->ChangeButtonState(LBUTTON_DOWN);
        ((CButton *)GetDlgItem(ID_PICMCC_BUTTON_WASHING))->ChangeButtonState(LBUTTON_UP);
    }
    else
    {
        ((CButton *)GetDlgItem(ID_PICMCC_BUTTON_DISPATCH))->ChangeButtonState(LBUTTON_UP);
    }
}
void CMainControlCmdPage::OnButtonLightDown()
{
    LightOn_Bool = !LightOn_Bool;
    if(LightOn_Bool)
    {
        ((CButton *)GetDlgItem(ID_PICMCC_BUTTON_LIGHT))->ChangeButtonState(LBUTTON_DOWN);
    }
    else
    {
        ((CButton *)GetDlgItem(ID_PICMCC_BUTTON_LIGHT))->ChangeButtonState(LBUTTON_UP);
    }
}
void CMainControlCmdPage::OnButtonForcedPumpDown()
{
    g_ForcePumpFanEn_Bool = true;
    ((CButton *)GetDlgItem(ID_PICMCC_BUTTON_FORCED_PUMP))->ChangeButtonState(LBUTTON_DOWN);
    //OnButtonLightDown();
}
void CMainControlCmdPage::OnButtonForcedPumpUp()
{
    g_ForcePumpFanEn_Bool = false;
    ((CButton *)GetDlgItem(ID_PICMCC_BUTTON_FORCED_PUMP))->ChangeButtonState(LBUTTON_UP);
    //OnButtonLightDown();
}
void CMainControlCmdPage::OnButtonPoweronByhandDown()
{
    /*PowerOnByHand_Bool = !PowerOnByHand_Bool;
    if(PowerOnByHand_Bool)
    {
        ((CButton *)GetDlgItem(ID_PICMCC_BUTTON_POWERON_BYHAND))->ChangeButtonState(LBUTTON_DOWN);
    }
    else
    {
        ((CButton *)GetDlgItem(ID_PICMCC_BUTTON_POWERON_BYHAND))->ChangeButtonState(LBUTTON_UP);
    }*/
}
void CMainControlCmdPage::OnSkipStationDown()
{
    CButton *pButton = (CButton *)GetDlgItem(ID_PICMCC_BUTTON_SKIPSTATION);
    if (LBUTTON_DOWN == pButton->GetButtonState())
    {
        return;
    }
    CConfirmDialog confirmDlg;
    confirmDlg.SetConfirmStr(QSTR("Are you srue to skip station?"));
    confirmDlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
    confirmDlg.exec();
    if (!confirmDlg.GetContinue())
    {
        return;
    }
    pButton->ChangeButtonState(LBUTTON_DOWN);

    Main_SkipStationInstruction_Bool = true;

}


void CMainControlCmdPage::OnButtonQuitDown()
{
    ChangePage(PAGE_ROM_INDEX_MAIN);
}
void CMainControlCmdPage::OnUpdatePage()
{
    if(!LightOn_Bool)
        ((CButton *)GetDlgItem(ID_PICMCC_BUTTON_LIGHT))->ChangeButtonState(LBUTTON_UP);
//    if(!forcedBrakeReleaseMc1En_Bool)
//        ((CButton *)GetDlgItem(ID_PICMCC_BUTTON_POWERON_BYHAND))->ChangeButtonState(LBUTTON_UP);
//    if(!forcedBrakeReleaseMc2En_Bool)
//        ((CButton *)GetDlgItem(ID_PICMCC_BUTTON7))->ChangeButtonState(LBUTTON_UP);

    if(Main_SkipStationInstruction_Bool)
    {
        ((CButton *)GetDlgItem(ID_PICMCC_BUTTON_SKIPSTATION))->ChangeButtonState(LBUTTON_DOWN);
    }
    else
    {
        ((CButton *)GetDlgItem(ID_PICMCC_BUTTON_SKIPSTATION))->ChangeButtonState(LBUTTON_UP);
    }

}

#include "chvactestpage.h"

ROMDATA g_PicRom_HvacTest[] =
{
//    /*string                font                            rc                  foreground color              background color                control type                   ID           */
  D_COMMON_PAGE_HEADER
  {"carheadlarge.png",          D_DEFAULT_FONT,      QRect(250,100+20,160, 30),                     Qt::yellow,                  Qt::black,                  CONTROL_IMAGE,            ID_IGNORE                            },
  {"0000"            ,        D_DEFAULT_FONT,      QRect(250, 70+20,160, 20),                     Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICHTEST_LABEL_CARNUM          },

  {  QSTR("Fullcoldtest"),         D_COMMON_TITLE_FONT,      QRect(  65,200,115, 40),                  Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,           ID_PICHTEST_BUTTON_FULLCOLD            },
  {  QSTR("Fullwarmtest"),         D_COMMON_TITLE_FONT,      QRect( 190,200,115, 40),                  Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,           ID_PICHTEST_BUTTON_FULLWARM   },
  {  QSTR("Emergency\nVentilation"),         D_COMMON_TITLE_FONT,      QRect( 315,200,115, 40),                  Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,           ID_PICHTEST_BUTTON_EMGCENTILATION     },
  {  QSTR("Halfcoldtest"),         D_COMMON_TITLE_FONT,      QRect( 440,200,115, 40),                  Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,           ID_PICHTEST_BUTTON_HALFCOLD     },
  {  QSTR("Halfwarmtest"),         D_COMMON_TITLE_FONT,      QRect(  65,260,115, 40),                  Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,           ID_PICHTEST_BUTTON_HALFWARM   },
  {  QSTR("Stop"),                 D_COMMON_TITLE_FONT,      QRect( 190,260,115, 40),                  Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,           ID_PICHTEST_BUTTON_STOP   },

  D_LAYER2_NAVIGATION_BAR_HVAC
};
int g_HvacTestRomLen = sizeof(g_PicRom_HvacTest)/sizeof(ROMDATA);

BEGIN_MESSAGE_MAP(CHvacTestPage,CPage)
        ON_UPDATE_PAGE()
        ON_LBUTTONDOWN(IDBTN_NAVIBAR_QUIT, OnCommonQuitButtonDown)
        ON_LBUTTONDOWN(ID_PICHTEST_BUTTON_FULLCOLD, OnFullColdDown)
        ON_LBUTTONDOWN(ID_PICHTEST_BUTTON_FULLWARM, OnFullWarmDown)
        ON_LBUTTONDOWN(ID_PICHTEST_BUTTON_EMGCENTILATION, OnEMGCVentilationDown)
        ON_LBUTTONDOWN(ID_PICHTEST_BUTTON_HALFCOLD, OnHalfColdDown)
        ON_LBUTTONDOWN(ID_PICHTEST_BUTTON_HALFWARM, OnHalfWarmDown)
        ON_LBUTTONDOWN(ID_PICHTEST_BUTTON_STOP, OnStopDown)
END_MESSAGE_MAP()

CHvacTestPage::CHvacTestPage()
{
}

void CHvacTestPage::OnCommonQuitButtonDown()
{
    ChangePage(PAGE_ROM_INDEX_MAIN);
}

void CHvacTestPage::OnInitPage()
{
    CButton* pButton;
    int nIDArray[] =
    {
        ID_PICHTEST_BUTTON_FULLCOLD,
        ID_PICHTEST_BUTTON_FULLWARM,
        ID_PICHTEST_BUTTON_EMGCENTILATION,
        ID_PICHTEST_BUTTON_HALFCOLD,
        ID_PICHTEST_BUTTON_HALFWARM,
        ID_PICHTEST_BUTTON_STOP
    };

    for(int i = 0; i < int(sizeof(nIDArray)/sizeof(int)); i++)
    {
        pButton = (CButton *)GetDlgItem(nIDArray[i]);
        pButton->m_bAutoUpState = false;
    }
    SetBtnDown();
}

void CHvacTestPage::SetBtnDown(int btnId)
{
    CButton* pButton;
    int nIDArray[] =
    {
        ID_PICHTEST_BUTTON_FULLCOLD,
        ID_PICHTEST_BUTTON_FULLWARM,
        ID_PICHTEST_BUTTON_EMGCENTILATION,
        ID_PICHTEST_BUTTON_HALFCOLD,
        ID_PICHTEST_BUTTON_HALFWARM,
        ID_PICHTEST_BUTTON_STOP
    };

    for(int i = 0; i < int(sizeof(nIDArray)/sizeof(int)); i++)
    {
        pButton = (CButton *)GetDlgItem(nIDArray[i]);
        if(nIDArray[i] == btnId)
        {
            pButton->ChangeButtonState(LBUTTON_DOWN);
        }
        else
        {
            pButton->ChangeButtonState(LBUTTON_UP);
        }
    }
}
void CHvacTestPage::SetBtnDown()
{
    if(Hvac_FullColdTest_Bool)
        ((CButton *)GetDlgItem(ID_PICHTEST_BUTTON_FULLCOLD))->ChangeButtonState(LBUTTON_DOWN);
    else
        ((CButton *)GetDlgItem(ID_PICHTEST_BUTTON_FULLCOLD))->ChangeButtonState(LBUTTON_UP);

    if(Hvac_FullWarmTest_Bool)
        ((CButton *)GetDlgItem(ID_PICHTEST_BUTTON_FULLWARM))->ChangeButtonState(LBUTTON_DOWN);
    else
        ((CButton *)GetDlgItem(ID_PICHTEST_BUTTON_FULLWARM))->ChangeButtonState(LBUTTON_UP);

    if(Hvac_EmgcVentilation_Bool)
        ((CButton *)GetDlgItem(ID_PICHTEST_BUTTON_EMGCENTILATION))->ChangeButtonState(LBUTTON_DOWN);
    else
        ((CButton *)GetDlgItem(ID_PICHTEST_BUTTON_EMGCENTILATION))->ChangeButtonState(LBUTTON_UP);

    if(Hvac_HalfColdTest_Bool)
        ((CButton *)GetDlgItem(ID_PICHTEST_BUTTON_HALFCOLD))->ChangeButtonState(LBUTTON_DOWN);
    else
        ((CButton *)GetDlgItem(ID_PICHTEST_BUTTON_HALFCOLD))->ChangeButtonState(LBUTTON_UP);

    if(Hvac_HalfWarmTest_Bool)
        ((CButton *)GetDlgItem(ID_PICHTEST_BUTTON_HALFWARM))->ChangeButtonState(LBUTTON_DOWN);
    else
        ((CButton *)GetDlgItem(ID_PICHTEST_BUTTON_HALFWARM))->ChangeButtonState(LBUTTON_UP);

    if(Hvac_Stop_Bool)
        ((CButton *)GetDlgItem(ID_PICHTEST_BUTTON_STOP))->ChangeButtonState(LBUTTON_DOWN);
    else
        ((CButton *)GetDlgItem(ID_PICHTEST_BUTTON_STOP))->ChangeButtonState(LBUTTON_UP);
}
void CHvacTestPage::OnHalfColdDown()
{
    if(!Hvac_HalfColdTest_Bool)
    {
        if(!firstSetHvacSomethingCoolBool)
        {
            firstSetHvacSomethingCoolBool = true;

            CWarningDialog warningDlg;
            warningDlg.SetWarningStr(QSTR("to protect compressor，\nplease make sure compressor's \nrunning time is longer than 3mins "));
            warningDlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
            warningDlg.exec();
        }

        Hvac_AutoWarm_Bool = false;
        Hvac_AutoCold_Bool = false;
        Hvac_Ventilation_Bool = false;
        Hvac_Stop_Bool = false;
        Hvac_HalfColdTest_Bool = true;
        Hvac_FullColdTest_Bool = false;
        Hvac_HalfWarmTest_Bool = false;
        Hvac_FullWarmTest_Bool = false;
        Hvac_EmgcVentilation_Bool = false;
        SetBtnDown();
    }
}
void CHvacTestPage::OnFullColdDown()
{
    if(!Hvac_FullColdTest_Bool)
    {
        if(!firstSetHvacSomethingCoolBool)
        {
            firstSetHvacSomethingCoolBool = true;

            CWarningDialog warningDlg;
            warningDlg.SetWarningStr(QSTR("to protect compressor，\nplease make sure compressor's \nrunning time is longer than 3mins"));
            warningDlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
            warningDlg.exec();
        }

        Hvac_AutoWarm_Bool = false;
        Hvac_AutoCold_Bool = false;
        Hvac_Ventilation_Bool = false;
        Hvac_Stop_Bool = false;
        Hvac_HalfColdTest_Bool = false;
        Hvac_FullColdTest_Bool = true;
        Hvac_HalfWarmTest_Bool = false;
        Hvac_FullWarmTest_Bool = false;
        Hvac_EmgcVentilation_Bool = false;
        SetBtnDown();
    }
}
void CHvacTestPage::OnEMGCVentilationDown()
{
    if(!Hvac_EmgcVentilation_Bool)
    {
        Hvac_AutoWarm_Bool = false;
        Hvac_AutoCold_Bool = false;
        Hvac_Ventilation_Bool = false;
        Hvac_Stop_Bool = false;
        Hvac_HalfColdTest_Bool = false;
        Hvac_FullColdTest_Bool = false;
        Hvac_HalfWarmTest_Bool = false;
        Hvac_FullWarmTest_Bool = false;
        Hvac_EmgcVentilation_Bool = true;
        SetBtnDown();
    }
}
void CHvacTestPage::OnStopDown()
{
    if(!Hvac_Stop_Bool)
    {
        Hvac_AutoWarm_Bool = false;
        Hvac_AutoCold_Bool = false;
        Hvac_Ventilation_Bool = false;
        Hvac_Stop_Bool = true;
        Hvac_HalfColdTest_Bool = false;
        Hvac_FullColdTest_Bool = false;
        Hvac_HalfWarmTest_Bool = false;
        Hvac_FullWarmTest_Bool = false;
        Hvac_EmgcVentilation_Bool = false;
        SetBtnDown();
    }
}

void CHvacTestPage::OnHalfWarmDown()
{
    if(!Hvac_HalfWarmTest_Bool)
    {
        Hvac_AutoWarm_Bool = false;
        Hvac_AutoCold_Bool = false;
        Hvac_Ventilation_Bool = false;
        Hvac_Stop_Bool = false;
        Hvac_HalfColdTest_Bool = false;
        Hvac_FullColdTest_Bool = false;
        Hvac_HalfWarmTest_Bool = true;
        Hvac_FullWarmTest_Bool = false;
        Hvac_EmgcVentilation_Bool = false;
        SetBtnDown();
    }
}
void CHvacTestPage::OnFullWarmDown()
{
    if(!Hvac_FullWarmTest_Bool)
    {
        Hvac_AutoWarm_Bool = false;
        Hvac_AutoCold_Bool = false;
        Hvac_Ventilation_Bool = false;
        Hvac_Stop_Bool = false;
        Hvac_HalfColdTest_Bool = false;
        Hvac_FullColdTest_Bool = false;
        Hvac_HalfWarmTest_Bool = false;
        Hvac_FullWarmTest_Bool = true;
        Hvac_EmgcVentilation_Bool = false;
        SetBtnDown();
    }
}
void CHvacTestPage::OnUpdatePage()
{
    GetDlgItem(ID_PICHTEST_LABEL_CARNUM)->SetCtrlText(g_car1CodeStr);
    SetBtnDown();
}

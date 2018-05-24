#include "cdeviceselectpage.h"
#include "chistoryfaultlistpage.h"
#include "ccurrentfaultlistpage.h"

extern vector<CPage*>  g_PageVec;

ROMDATA g_PicRom_DeviceSelect[] =
{
    /*string                font                        rc             foreground color              background color           control type                 ID           */
    {QSTR("选择类型"),       D_FONT(13),             QRect(  0,  0,640, 60),       Qt::black,                   Qt::yellow,                 CONTROL_LABEL,        ID_IGNORE             },
    {QSTR("全部"),           D_COMMON_TITLE_FONT,  QRect(160, 94,320, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICETS_BUTTON_ALL  },
    {QObject::trUtf8("牵引"),                 D_COMMON_TITLE_FONT,  QRect( 64,178,128, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICETS_BUTTON_TCU  },
    {QObject::trUtf8("空调"),                D_COMMON_TITLE_FONT,  QRect(256,178,128, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICETS_BUTTON_HVAC },
    {QObject::trUtf8("超级电容"),               D_COMMON_TITLE_FONT,  QRect(448,178,128, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICETS_BUTTON_DCDC   },
    {QObject::trUtf8("辅助"),                 D_COMMON_TITLE_FONT,  QRect( 64,262,128, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICETS_BUTTON_ACU  },
    {QObject::trUtf8("车门"),                D_COMMON_TITLE_FONT,  QRect(256,262,128, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICETS_BUTTON_DOOR },
    {QObject::trUtf8("通信"),                D_COMMON_TITLE_FONT,  QRect(448,262,128, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICETS_BUTTON_RIOM },
    {QObject::trUtf8("制动"),                 D_COMMON_TITLE_FONT,  QRect( 64,346,128, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICETS_BUTTON_BCU  },
    {QObject::trUtf8("PIS"),                 D_COMMON_TITLE_FONT,  QRect(256,346,128, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICETS_BUTTON_PIS  },
    {QObject::trUtf8("列车系统"),                 D_COMMON_TITLE_FONT,  QRect(448,346,128, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICETS_BUTTON_TCMS  },

};
int g_DeviceSelectRomLen = sizeof(g_PicRom_DeviceSelect)/sizeof(ROMDATA);

BEGIN_MESSAGE_MAP(CDeviceSelectPage,CPage)
        ON_UPDATE_PAGE()
        ON_LBUTTONDOWN(ID_PICETS_BUTTON_ALL,OnAllDown)
        ON_LBUTTONDOWN(ID_PICETS_BUTTON_TCU,OnTCUDown)
        ON_LBUTTONDOWN(ID_PICETS_BUTTON_HVAC,OnHVACDown)
        ON_LBUTTONDOWN(ID_PICETS_BUTTON_ACU,OnACUDown)
        ON_LBUTTONDOWN(ID_PICETS_BUTTON_DCDC,OnDCDCDown)
        ON_LBUTTONDOWN(ID_PICETS_BUTTON_DOOR,OnDoorDown)
        ON_LBUTTONDOWN(ID_PICETS_BUTTON_RIOM,OnRIOMDown)
        ON_LBUTTONDOWN(ID_PICETS_BUTTON_BCU,OnBCUDown)
        ON_LBUTTONDOWN(ID_PICETS_BUTTON_PIS,OnPISDown)
        ON_LBUTTONDOWN(ID_PICETS_BUTTON_TCMS,OnTCMSDown)
        ON_LBUTTONUP(ID_PICETS_BUTTON_ALL,OnAllUp)
        ON_LBUTTONUP(ID_PICETS_BUTTON_TCU,OnTCUUp)
        ON_LBUTTONUP(ID_PICETS_BUTTON_HVAC,OnHVACUp)
        ON_LBUTTONUP(ID_PICETS_BUTTON_DCDC,OnDCDCUp)
        ON_LBUTTONUP(ID_PICETS_BUTTON_ACU,OnACUUp)
        ON_LBUTTONUP(ID_PICETS_BUTTON_DOOR,OnDoorUp)
        ON_LBUTTONUP(ID_PICETS_BUTTON_RIOM,OnRIOMUp)
        ON_LBUTTONUP(ID_PICETS_BUTTON_BCU,OnBCUUp)
        ON_LBUTTONUP(ID_PICETS_BUTTON_PIS,OnPISUp)
        ON_LBUTTONUP(ID_PICETS_BUTTON_TCMS,OnTCMSUp)

END_MESSAGE_MAP()

CDeviceSelectPage::CDeviceSelectPage()
{
}

void CDeviceSelectPage::OnAllDown()
{
    ((CButton *)GetDlgItem(ID_PICETS_BUTTON_ALL))->ChangeButtonState(LBUTTON_DOWN);
}

void CDeviceSelectPage::OnTCUDown()
{
    ((CButton *)GetDlgItem(ID_PICETS_BUTTON_TCU))->ChangeButtonState(LBUTTON_DOWN);
}

void CDeviceSelectPage::OnHVACDown()
{
    ((CButton *)GetDlgItem(ID_PICETS_BUTTON_HVAC))->ChangeButtonState(LBUTTON_DOWN);
}

void CDeviceSelectPage::OnDCDCDown()
{
    ((CButton *)GetDlgItem(ID_PICETS_BUTTON_DCDC))->ChangeButtonState(LBUTTON_DOWN);
}

void CDeviceSelectPage::OnACUDown()
{
    ((CButton *)GetDlgItem(ID_PICETS_BUTTON_ACU))->ChangeButtonState(LBUTTON_DOWN);
}

void CDeviceSelectPage::OnDoorDown()
{
    ((CButton *)GetDlgItem(ID_PICETS_BUTTON_DOOR))->ChangeButtonState(LBUTTON_DOWN);
}

void CDeviceSelectPage::OnRIOMDown()
{
    ((CButton *)GetDlgItem(ID_PICETS_BUTTON_RIOM))->ChangeButtonState(LBUTTON_DOWN);
}

void CDeviceSelectPage::OnBCUDown()
{
    ((CButton *)GetDlgItem(ID_PICETS_BUTTON_BCU))->ChangeButtonState(LBUTTON_DOWN);
}

void CDeviceSelectPage::OnPISDown()
{
    ((CButton *)GetDlgItem(ID_PICETS_BUTTON_PIS))->ChangeButtonState(LBUTTON_DOWN);
}
void CDeviceSelectPage::OnTCMSDown()
{
    ((CButton *)GetDlgItem(ID_PICETS_BUTTON_TCMS))->ChangeButtonState(LBUTTON_DOWN);
}
void CDeviceSelectPage::OnAllUp()
{
    ((CButton *)GetDlgItem(ID_PICETS_BUTTON_ALL))->ChangeButtonState(LBUTTON_UP);
    if (E_INVOKE_HISTORY == g_invoke_type)
    {
        ChangePage(PAGE_ROM_INDEX_HISTORYFAULTLIST);
        CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
        ((CHistoryFaultListPage *)pPage)->SetDeviceType(CNR_HFLP_DEVICE_TYPE_ALL);
    }
    else if (E_INVOKE_CURRENT == g_invoke_type)
    {
        ChangePage(PAGE_ROM_INDEX_CURRENTFAULTLIST);
        CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
        ((CCurrentFaultListPage *)pPage)->SetDeviceType(CNR_HFLP_DEVICE_TYPE_ALL);
    }
}

void CDeviceSelectPage::OnTCUUp()
{
    ((CButton *)GetDlgItem(ID_PICETS_BUTTON_TCU))->ChangeButtonState(LBUTTON_UP);
    if (E_INVOKE_HISTORY == g_invoke_type)
    {
        ChangePage(PAGE_ROM_INDEX_HISTORYFAULTLIST);
        CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
        ((CHistoryFaultListPage *)pPage)->SetDeviceType(CNR_HFLP_DEVICE_TYPE_TCU);
    }
    else if (E_INVOKE_CURRENT == g_invoke_type)
    {
        ChangePage(PAGE_ROM_INDEX_CURRENTFAULTLIST);
        CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
        ((CCurrentFaultListPage *)pPage)->SetDeviceType(CNR_HFLP_DEVICE_TYPE_TCU);
    }
}

void CDeviceSelectPage::OnHVACUp()
{
    ((CButton *)GetDlgItem(ID_PICETS_BUTTON_HVAC))->ChangeButtonState(LBUTTON_UP);
    if (E_INVOKE_HISTORY == g_invoke_type)
    {
        ChangePage(PAGE_ROM_INDEX_HISTORYFAULTLIST);
        CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
        ((CHistoryFaultListPage *)pPage)->SetDeviceType(CNR_HFLP_DEVICE_TYPE_HVAC);
    }
    else if (E_INVOKE_CURRENT == g_invoke_type)
    {
        ChangePage(PAGE_ROM_INDEX_CURRENTFAULTLIST);
        CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
        ((CCurrentFaultListPage *)pPage)->SetDeviceType(CNR_HFLP_DEVICE_TYPE_HVAC);
    }
}

void CDeviceSelectPage::OnDCDCUp()
{
    /**/
    ((CButton *)GetDlgItem(ID_PICETS_BUTTON_DCDC))->ChangeButtonState(LBUTTON_UP);
    if (E_INVOKE_HISTORY == g_invoke_type)
    {
        ChangePage(PAGE_ROM_INDEX_HISTORYFAULTLIST);
        CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
        ((CHistoryFaultListPage *)pPage)->SetDeviceType(CNR_HFLP_DEVICE_TYPE_DCDC);
    }
    else if (E_INVOKE_CURRENT == g_invoke_type)
    {
        ChangePage(PAGE_ROM_INDEX_CURRENTFAULTLIST);
        CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
        ((CCurrentFaultListPage *)pPage)->SetDeviceType(CNR_HFLP_DEVICE_TYPE_DCDC);
    }
}

void CDeviceSelectPage::OnACUUp()
{
    ((CButton *)GetDlgItem(ID_PICETS_BUTTON_ACU))->ChangeButtonState(LBUTTON_UP);
    if (E_INVOKE_HISTORY == g_invoke_type)
    {
        ChangePage(PAGE_ROM_INDEX_HISTORYFAULTLIST);
        CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
        ((CHistoryFaultListPage *)pPage)->SetDeviceType(CNR_HFLP_DEVICE_TYPE_ACU);
    }
    else if (E_INVOKE_CURRENT == g_invoke_type)
    {
        ChangePage(PAGE_ROM_INDEX_CURRENTFAULTLIST);
        CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
        ((CCurrentFaultListPage *)pPage)->SetDeviceType(CNR_HFLP_DEVICE_TYPE_ACU);
    }
}

void CDeviceSelectPage::OnDoorUp()
{
    ((CButton *)GetDlgItem(ID_PICETS_BUTTON_DOOR))->ChangeButtonState(LBUTTON_UP);
    if (E_INVOKE_HISTORY == g_invoke_type)
    {
        ChangePage(PAGE_ROM_INDEX_HISTORYFAULTLIST);
        CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
        ((CHistoryFaultListPage *)pPage)->SetDeviceType(CNR_HFLP_DEVICE_TYPE_DOOR);
    }
    else if (E_INVOKE_CURRENT == g_invoke_type)
    {
        ChangePage(PAGE_ROM_INDEX_CURRENTFAULTLIST);
        CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
        ((CCurrentFaultListPage *)pPage)->SetDeviceType(CNR_HFLP_DEVICE_TYPE_DOOR);
    }
}

void CDeviceSelectPage::OnRIOMUp()
{
    ((CButton *)GetDlgItem(ID_PICETS_BUTTON_RIOM))->ChangeButtonState(LBUTTON_UP);
    if (E_INVOKE_HISTORY == g_invoke_type)
    {
        ChangePage(PAGE_ROM_INDEX_HISTORYFAULTLIST);
        CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
        ((CHistoryFaultListPage *)pPage)->SetDeviceType(CNR_HFLP_DEVICE_TYPE_LCU);
    }
    else if (E_INVOKE_CURRENT == g_invoke_type)
    {
        ChangePage(PAGE_ROM_INDEX_CURRENTFAULTLIST);
        CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
        ((CCurrentFaultListPage *)pPage)->SetDeviceType(CNR_HFLP_DEVICE_TYPE_LCU);
    }
}

void CDeviceSelectPage::OnBCUUp()
{
    ((CButton *)GetDlgItem(ID_PICETS_BUTTON_BCU))->ChangeButtonState(LBUTTON_UP);
    if (E_INVOKE_HISTORY == g_invoke_type)
    {
        ChangePage(PAGE_ROM_INDEX_HISTORYFAULTLIST);
        CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
        ((CHistoryFaultListPage *)pPage)->SetDeviceType(CNR_HFLP_DEVICE_TYPE_BCU);
    }
    else if (E_INVOKE_CURRENT == g_invoke_type)
    {
        ChangePage(PAGE_ROM_INDEX_CURRENTFAULTLIST);
        CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
        ((CCurrentFaultListPage *)pPage)->SetDeviceType(CNR_HFLP_DEVICE_TYPE_BCU);
    }
}

void CDeviceSelectPage::OnPISUp()
{
    ((CButton *)GetDlgItem(ID_PICETS_BUTTON_PIS))->ChangeButtonState(LBUTTON_UP);
    if (E_INVOKE_HISTORY == g_invoke_type)
    {
        ChangePage(PAGE_ROM_INDEX_HISTORYFAULTLIST);
        CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
        ((CHistoryFaultListPage *)pPage)->SetDeviceType(CNR_HFLP_DEVICE_TYPE_PIS);
    }
    else if (E_INVOKE_CURRENT == g_invoke_type)
    {
        ChangePage(PAGE_ROM_INDEX_CURRENTFAULTLIST);
        CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
        ((CCurrentFaultListPage *)pPage)->SetDeviceType(CNR_HFLP_DEVICE_TYPE_PIS);
    }
}
void CDeviceSelectPage::OnTCMSUp()
{
    ((CButton *)GetDlgItem(ID_PICETS_BUTTON_TCMS))->ChangeButtonState(LBUTTON_UP);
    if (E_INVOKE_HISTORY == g_invoke_type)
    {
        ChangePage(PAGE_ROM_INDEX_HISTORYFAULTLIST);
        CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
        ((CHistoryFaultListPage *)pPage)->SetDeviceType(CNR_HFLP_DEVICE_TYPE_TCMS);
    }
    else if (E_INVOKE_CURRENT == g_invoke_type)
    {
        ChangePage(PAGE_ROM_INDEX_CURRENTFAULTLIST);
        CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
        ((CCurrentFaultListPage *)pPage)->SetDeviceType(CNR_HFLP_DEVICE_TYPE_TCMS);
    }
}
void CDeviceSelectPage::OnUpdatePage()
{

}

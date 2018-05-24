#include "ccarselectpage.h"
#include "chistoryfaultlistpage.h"
#include "ccurrentfaultlistpage.h"

extern vector<CPage*>  g_PageVec;

ROMDATA g_PicRom_CarSelect[] =
{
    /*string                font            rc                  foreground color   background color      control type          ID           */
    {"Vehicle Select",    D_FONT(13),  QRect(  0,  0,640, 60),   Qt::black,        Qt::yellow,           CONTROL_LABEL,        ID_IGNORE           },

    {"ALL",               D_FONT(12),  QRect( 90,150,150, 48),   Qt::black,        Qt::yellow,           CONTROL_BUTTON,       ID_PICCS_BUTTON_CARALL  },
    {"1001",              D_FONT(12),  QRect(300,150,150, 48),   Qt::black,        Qt::yellow,           CONTROL_BUTTON,       ID_PICCS_BUTTON_CAR1    },
    {"1002",              D_FONT(12),  QRect(300,200,150, 48),   Qt::black,        Qt::yellow,           CONTROL_BUTTON,       ID_PICCS_BUTTON_CAR2    },
    {"1003",              D_FONT(12),  QRect(300,250,150, 48),   Qt::black,        Qt::yellow,           CONTROL_BUTTON,       ID_PICCS_BUTTON_CAR3    },

    {"down.PNG"  ,        D_DEFAULT_FONT, QRect(470,150, 30, 20), Qt::yellow,      Qt::black,            CONTROL_BMPBUTTON,    ID_PICCS_BUTTON_DOWN    },
    {"up.PNG",            D_DEFAULT_FONT, QRect(470,278, 30, 20), Qt::yellow,      Qt::black,            CONTROL_BMPBUTTON,    ID_PICCS_BUTTON_UP      },

};

int g_CarSelectRomLen = sizeof(g_PicRom_CarSelect)/sizeof(ROMDATA);

BEGIN_MESSAGE_MAP(CCarSelectPage,CPage)
        ON_UPDATE_PAGE()
        ON_LBUTTONDOWN(ID_PICCS_BUTTON_CAR1,OnCar1Down)
        ON_LBUTTONDOWN(ID_PICCS_BUTTON_CAR2,OnCar2Down)
        ON_LBUTTONDOWN(ID_PICCS_BUTTON_CAR3,OnCar3Down)
        ON_LBUTTONDOWN(ID_PICCS_BUTTON_CARALL,OnCarAllDown)
        ON_LBUTTONDOWN(ID_PICCS_BUTTON_DOWN,OnBtnDownDown)
        ON_LBUTTONDOWN(ID_PICCS_BUTTON_UP,OnBtnUpDown)
        ON_LBUTTONUP(ID_PICCS_BUTTON_CAR1,OnCar1Up)
        ON_LBUTTONUP(ID_PICCS_BUTTON_CAR2,OnCar2Up)
        ON_LBUTTONUP(ID_PICCS_BUTTON_CAR3,OnCar3Up)
        ON_LBUTTONUP(ID_PICCS_BUTTON_CARALL,OnCarAllUp)
        ON_LBUTTONUP(ID_PICCS_BUTTON_DOWN,OnBtnDownUp)
        ON_LBUTTONUP(ID_PICCS_BUTTON_UP,OnBtnUpUp)
END_MESSAGE_MAP()

CCarSelectPage::CCarSelectPage()
{
    m_caridcount = 0;
    m_topidx = 0;
}

void CCarSelectPage::OnCar1Down()
{
    ((CButton *)GetDlgItem(ID_PICCS_BUTTON_CAR1))->ChangeButtonState(LBUTTON_DOWN);
}

void CCarSelectPage::OnCar2Down()
{
    ((CButton *)GetDlgItem(ID_PICCS_BUTTON_CAR2))->ChangeButtonState(LBUTTON_DOWN);
}

void CCarSelectPage::OnCar3Down()
{
    ((CButton *)GetDlgItem(ID_PICCS_BUTTON_CAR3))->ChangeButtonState(LBUTTON_DOWN);
}

void CCarSelectPage::OnCarAllDown()
{
    ((CButton *)GetDlgItem(ID_PICCS_BUTTON_CARALL))->ChangeButtonState(LBUTTON_DOWN);
}

void CCarSelectPage::OnCar1Up()
{
    ((CButton *)GetDlgItem(ID_PICCS_BUTTON_CAR1))->ChangeButtonState(LBUTTON_UP);
    QString car_text = ((CButton *)GetDlgItem(ID_PICCS_BUTTON_CAR1))->GetCtrlText();
    if ("" == car_text)
    {
        return;
    }
    if (E_INVOKE_HISTORY == g_invoke_type)
    {
        ChangePage(PAGE_ROM_INDEX_HISTORYFAULTLIST);
        CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
        ((CHistoryFaultListPage *)pPage)->SetCarType(car_text);
    }
    else if (E_INVOKE_CURRENT == g_invoke_type)
    {
        ChangePage(PAGE_ROM_INDEX_CURRENTFAULTLIST);
        CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
        ((CCurrentFaultListPage *)pPage)->SetCarType(car_text);
    }
}

void CCarSelectPage::OnCar2Up()
{
    ((CButton *)GetDlgItem(ID_PICCS_BUTTON_CAR2))->ChangeButtonState(LBUTTON_UP);
    QString car_text = ((CButton *)GetDlgItem(ID_PICCS_BUTTON_CAR2))->GetCtrlText();
    if ("" == car_text)
    {
        return;
    }
    if (E_INVOKE_HISTORY == g_invoke_type)
    {
        ChangePage(PAGE_ROM_INDEX_HISTORYFAULTLIST);
        CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
        ((CHistoryFaultListPage *)pPage)->SetCarType(car_text);
    }
    else if (E_INVOKE_CURRENT == g_invoke_type)
    {
        ChangePage(PAGE_ROM_INDEX_CURRENTFAULTLIST);
        CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
        ((CCurrentFaultListPage *)pPage)->SetCarType(car_text);
    }
}

void CCarSelectPage::OnCar3Up()
{
    ((CButton *)GetDlgItem(ID_PICCS_BUTTON_CAR3))->ChangeButtonState(LBUTTON_UP);
    QString car_text = ((CButton *)GetDlgItem(ID_PICCS_BUTTON_CAR3))->GetCtrlText();
    if ("" == car_text)
    {
        return;
    }
    if (E_INVOKE_HISTORY == g_invoke_type)
    {
        ChangePage(PAGE_ROM_INDEX_HISTORYFAULTLIST);
        CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
        ((CHistoryFaultListPage *)pPage)->SetCarType(car_text);
    }
    else if (E_INVOKE_CURRENT == g_invoke_type)
    {
        ChangePage(PAGE_ROM_INDEX_CURRENTFAULTLIST);
        CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
        ((CCurrentFaultListPage *)pPage)->SetCarType(car_text);
    }
}

void CCarSelectPage::OnCarAllUp()
{
    ((CButton *)GetDlgItem(ID_PICCS_BUTTON_CARALL))->ChangeButtonState(LBUTTON_UP);
    if (E_INVOKE_HISTORY == g_invoke_type)
    {
        ChangePage(PAGE_ROM_INDEX_HISTORYFAULTLIST);
        CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
        ((CHistoryFaultListPage *)pPage)->SetCarType("All");
    }
    else if (E_INVOKE_CURRENT == g_invoke_type)
    {
        ChangePage(PAGE_ROM_INDEX_CURRENTFAULTLIST);
        CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
        ((CCurrentFaultListPage *)pPage)->SetCarType("All");
    }
}

void CCarSelectPage::OnUpdatePage()
{
    if (E_INVOKE_HISTORY == g_invoke_type)
    {
        UpdateCarIdList();
        if (m_topidx > (m_caridcount - 1))
        {
            m_topidx = (m_caridcount - 1);
        }
    }
    else if (E_INVOKE_CURRENT == g_invoke_type)
    {
        ;
    }
    UpdateBtnText();
}

void CCarSelectPage::OnBtnDownDown()
{
    CBitmapButton *bmpBtn;

    bmpBtn = (CBitmapButton *)GetDlgItem(ID_PICCS_BUTTON_DOWN);
    bmpBtn->SetCtrlText("downpress.PNG");
    bmpBtn->ChangeButtonState(LBUTTON_DOWN);

}

void CCarSelectPage::OnBtnDownUp()
{
    CBitmapButton *bmpBtn;

    bmpBtn = (CBitmapButton *)GetDlgItem(ID_PICCS_BUTTON_DOWN);
    bmpBtn->SetCtrlText("down.PNG");
    bmpBtn->ChangeButtonState(LBUTTON_DOWN);

    if (m_topidx < (m_caridcount - 1))
    {
        m_topidx += 1;
    }
}

void CCarSelectPage::OnBtnUpDown()
{
    CBitmapButton *bmpBtn;

    bmpBtn = (CBitmapButton *)GetDlgItem(ID_PICCS_BUTTON_UP);
    bmpBtn->SetCtrlText("uppress.PNG");
    bmpBtn->ChangeButtonState(LBUTTON_DOWN);

}

void CCarSelectPage::OnBtnUpUp()
{
    CBitmapButton *bmpBtn;

    bmpBtn = (CBitmapButton *)GetDlgItem(ID_PICCS_BUTTON_UP);
    bmpBtn->SetCtrlText("up.PNG");
    bmpBtn->ChangeButtonState(LBUTTON_DOWN);

    if (m_topidx > 0)
    {
        m_topidx -= 1;
    }
}

void CCarSelectPage::UpdateCarIdList()
{
    m_caridcount = 0;
    int idx;
    ST_HISTORY_FAULT_INFO info;
    for (int i=1; i<=g_historyFaultsList.cnt; i++)
    {
        idx = GetHistoryFaultIndexByNum(i);
        info = g_historyFaultsList.list[idx];
        if (!FindCarIdInHistoryList(info.carID))
        {
            ASSERT(m_caridcount< D_CARID_LIST_CNT);
            m_caridlist[m_caridcount] = info.carID;
            m_caridcount += 1;
        }
    }
}

bool CCarSelectPage::FindCarIdInHistoryList(int carid)
{
    bool ret = false;
    ASSERT(m_caridcount<= D_CARID_LIST_CNT);
    for (int i=0; i<m_caridcount; i++)
    {
        if (carid == m_caridlist[i])
        {
            ret = true;
            break;
        }
    }

    return ret;
}

void CCarSelectPage::UpdateBtnText()
{
    if (E_INVOKE_HISTORY == g_invoke_type)
    {
        QString str = "";
        if (m_topidx <= (m_caridcount - 1))
        {
            str.sprintf("%04d", m_caridlist[m_topidx]);
            if(str != "0000")
                ((CButton *)GetDlgItem(ID_PICCS_BUTTON_CAR1))->SetCtrlText(str);
            else
                ((CButton *)GetDlgItem(ID_PICCS_BUTTON_CAR1))->SetCtrlText("");
        }
        else
        {
            str = "";
            ((CButton *)GetDlgItem(ID_PICCS_BUTTON_CAR1))->SetCtrlText(str);
        }
        if ((m_topidx + 1) <= (m_caridcount - 1))
        {
            str.sprintf("%04d", m_caridlist[m_topidx + 1]);
            if(str != "0000")
                ((CButton *)GetDlgItem(ID_PICCS_BUTTON_CAR2))->SetCtrlText(str);
            else
                ((CButton *)GetDlgItem(ID_PICCS_BUTTON_CAR2))->SetCtrlText("");
        }
        else
        {
            str = "";
            ((CButton *)GetDlgItem(ID_PICCS_BUTTON_CAR2))->SetCtrlText(str);
        }
        if ((m_topidx + 2) <= (m_caridcount - 1))
        {
            str.sprintf("%04d", m_caridlist[m_topidx + 2]);
            if(str != "0000")
                ((CButton *)GetDlgItem(ID_PICCS_BUTTON_CAR3))->SetCtrlText(str);
            else
                ((CButton *)GetDlgItem(ID_PICCS_BUTTON_CAR3))->SetCtrlText("");
        }
        else
        {
            str = "";
            ((CButton *)GetDlgItem(ID_PICCS_BUTTON_CAR3))->SetCtrlText(str);
        }
    }
    else
    {
        if(g_car1Code != "0000")
            ((CButton *)GetDlgItem(ID_PICCS_BUTTON_CAR1))->SetCtrlText(g_car1Code);
        else
            ((CButton *)GetDlgItem(ID_PICCS_BUTTON_CAR1))->SetCtrlText("");

        if(g_car2Code != "0000")
            ((CButton *)GetDlgItem(ID_PICCS_BUTTON_CAR2))->SetCtrlText(g_car2Code);
        else
            ((CButton *)GetDlgItem(ID_PICCS_BUTTON_CAR2))->SetCtrlText("");

        if(g_car3Code != "0000")
            ((CButton *)GetDlgItem(ID_PICCS_BUTTON_CAR3))->SetCtrlText(g_car3Code);
        else
            ((CButton *)GetDlgItem(ID_PICCS_BUTTON_CAR3))->SetCtrlText("");
    }
}

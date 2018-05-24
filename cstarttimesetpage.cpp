#include "cstarttimesetpage.h"
#include "chistoryfaultlistpage.h"
#include "ccurrentfaultlistpage.h"

extern vector<CPage*>  g_PageVec;

ROMDATA g_PicRom_StartTimeSet[] =
{
    /*string                font               rc                  foreground color              background color                control type                   ID           */
    {QSTR("设定开始时间"),  D_FONT(13),      QRect(  0,  0, 640,  60),       Qt::black,                   Qt::yellow,                 CONTROL_LABEL,        ID_IGNORE                },

    {QSTR("年"),          D_COMMON_TITLE_FONT,  QRect( 80, 110,  70,  30),      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,        ID_IGNORE    },
    {QSTR("月"),         D_COMMON_TITLE_FONT,  QRect(180, 110,  70,  30),      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,        ID_IGNORE    },
    {QSTR("日"),           D_COMMON_TITLE_FONT,  QRect(280, 110,  70,  30),      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,        ID_IGNORE    },
    {"",                D_COMMON_TITLE_FONT,  QRect( 80, 150,  70,  30),      Qt::yellow,                  Qt::black,                  CONTROL_EDIT,         ID_PICSTS_EDIT_YEAR       },
    {"",                D_COMMON_TITLE_FONT,  QRect(180, 150,  70,  30),      Qt::yellow,                  Qt::black,                  CONTROL_EDIT,         ID_PICSTS_EDIT_MONTH       },
    {"",                D_COMMON_TITLE_FONT,  QRect(280, 150,  70,  30),      Qt::yellow,                  Qt::black,                  CONTROL_EDIT,         ID_PICSTS_EDIT_DAY         },
    {"-",               D_COMMON_TITLE_FONT,  QRect(151, 150,  29,  30),      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,        ID_IGNORE                 },
    {"-",               D_COMMON_TITLE_FONT,  QRect(251, 150,  29,  30),      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,        ID_IGNORE                 },

    {QSTR("时"),          D_COMMON_TITLE_FONT,  QRect( 80, 210,  70,  30),      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,        ID_IGNORE    },
    {QSTR("分"),        D_COMMON_TITLE_FONT,  QRect(180, 210,  70,  30),      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,        ID_IGNORE    },
    {"",                D_COMMON_TITLE_FONT,  QRect( 80, 250,  70,  30),      Qt::yellow,                  Qt::black,                  CONTROL_EDIT,         ID_PICSTS_EDIT_HOUR       },
    {"",                D_COMMON_TITLE_FONT,  QRect(180, 250,  70,  30),      Qt::yellow,                  Qt::black,                  CONTROL_EDIT,         ID_PICSTS_EDIT_MINUTE     },
    {":",               D_COMMON_TITLE_FONT,  QRect(151, 250,  29,  30),      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,        ID_IGNORE                 },

    {"1",               D_COMMON_TITLE_FONT,      QRect(400,  100,  50, 50),      Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICSTS_BUTTON_NUMBER1  },
    {"2",               D_COMMON_TITLE_FONT,      QRect(450,  100,  50, 50),      Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICSTS_BUTTON_NUMBER2  },
    {"3",               D_COMMON_TITLE_FONT,      QRect(500,  100,  50, 50),      Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICSTS_BUTTON_NUMBER3  },
    {"4",               D_COMMON_TITLE_FONT,      QRect(400,  150,  50, 50),      Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICSTS_BUTTON_NUMBER4  },
    {"5",               D_COMMON_TITLE_FONT,      QRect(450,  150,  50, 50),      Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICSTS_BUTTON_NUMBER5  },
    {"6",               D_COMMON_TITLE_FONT,      QRect(500,  150,  50, 50),      Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICSTS_BUTTON_NUMBER6  },
    {"7",               D_COMMON_TITLE_FONT,      QRect(400,  200,  50, 50),      Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICSTS_BUTTON_NUMBER7  },
    {"8",               D_COMMON_TITLE_FONT,      QRect(450,  200,  50, 50),      Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICSTS_BUTTON_NUMBER8  },
    {"9",               D_COMMON_TITLE_FONT,      QRect(500,  200,  50, 50),      Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICSTS_BUTTON_NUMBER9  },
    {"0",               D_COMMON_TITLE_FONT,      QRect(400,  250,  50, 50),      Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICSTS_BUTTON_NUMBER0  },
    {QSTR("清除"),           D_COMMON_TITLE_FONT,      QRect(450,  250, 100, 50),      Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICSTS_BUTTON_CLEAR    },

    {QSTR("设定"),             D_COMMON_TITLE_FONT,      QRect( 70,  380, 120, 50),      Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICSTS_BUTTON_SET      },
    {QSTR("退出"),            D_COMMON_TITLE_FONT,      QRect(260,  380, 120, 50),      Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       IDBTN_PICSTS_QUIT         },
    {QSTR("删除"),         D_COMMON_TITLE_FONT,      QRect(450,  380, 120, 50),      Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       IDBTN_PICSTS_DEFAULT      },

};
int g_StartTimeSetRomLen = sizeof(g_PicRom_StartTimeSet)/sizeof(ROMDATA);

BEGIN_MESSAGE_MAP(CStartTimeSetPage,CPage)
        ON_UPDATE_PAGE()
        ON_LBUTTONDOWN(IDBTN_PICSTS_DEFAULT, OnDefaultButtonDown)
        ON_LBUTTONUP(IDBTN_PICSTS_DEFAULT, OnDefaultButtonUp)
        ON_LBUTTONDOWN(IDBTN_PICSTS_QUIT, OnQuitButtonDown)
        ON_LBUTTONUP(IDBTN_PICSTS_QUIT, OnQuitButtonUp)
        ON_LBUTTONDOWN(ID_PICSTS_BUTTON_SET,OnStartTimeSetDown)
        ON_LBUTTONUP(ID_PICSTS_BUTTON_SET,OnStartTimeSetUp)
        ON_LBUTTONDOWN(ID_PICSTS_EDIT_YEAR, OnYearEdit)
        ON_LBUTTONDOWN(ID_PICSTS_EDIT_MONTH, OnMonthEdit)
        ON_LBUTTONDOWN(ID_PICSTS_EDIT_DAY, OnDayEdit)
        ON_LBUTTONDOWN(ID_PICSTS_EDIT_HOUR, OnHourEdit)
        ON_LBUTTONDOWN(ID_PICSTS_EDIT_MINUTE, OnMinuteEdit)
        ON_LBUTTONDOWN(ID_PICSTS_BUTTON_NUMBER0,OnNum0Down)
        ON_LBUTTONDOWN(ID_PICSTS_BUTTON_NUMBER1,OnNum1Down)
        ON_LBUTTONDOWN(ID_PICSTS_BUTTON_NUMBER2,OnNum2Down)
        ON_LBUTTONDOWN(ID_PICSTS_BUTTON_NUMBER3,OnNum3Down)
        ON_LBUTTONDOWN(ID_PICSTS_BUTTON_NUMBER4,OnNum4Down)
        ON_LBUTTONDOWN(ID_PICSTS_BUTTON_NUMBER5,OnNum5Down)
        ON_LBUTTONDOWN(ID_PICSTS_BUTTON_NUMBER6,OnNum6Down)
        ON_LBUTTONDOWN(ID_PICSTS_BUTTON_NUMBER7,OnNum7Down)
        ON_LBUTTONDOWN(ID_PICSTS_BUTTON_NUMBER8,OnNum8Down)
        ON_LBUTTONDOWN(ID_PICSTS_BUTTON_NUMBER9,OnNum9Down)
        ON_LBUTTONDOWN(ID_PICSTS_BUTTON_CLEAR,OnClearDown)
        ON_LBUTTONUP(ID_PICSTS_BUTTON_NUMBER0,OnNum0Up)
        ON_LBUTTONUP(ID_PICSTS_BUTTON_NUMBER1,OnNum1Up)
        ON_LBUTTONUP(ID_PICSTS_BUTTON_NUMBER2,OnNum2Up)
        ON_LBUTTONUP(ID_PICSTS_BUTTON_NUMBER3,OnNum3Up)
        ON_LBUTTONUP(ID_PICSTS_BUTTON_NUMBER4,OnNum4Up)
        ON_LBUTTONUP(ID_PICSTS_BUTTON_NUMBER5,OnNum5Up)
        ON_LBUTTONUP(ID_PICSTS_BUTTON_NUMBER6,OnNum6Up)
        ON_LBUTTONUP(ID_PICSTS_BUTTON_NUMBER7,OnNum7Up)
        ON_LBUTTONUP(ID_PICSTS_BUTTON_NUMBER8,OnNum8Up)
        ON_LBUTTONUP(ID_PICSTS_BUTTON_NUMBER9,OnNum9Up)
        ON_LBUTTONUP(ID_PICSTS_BUTTON_CLEAR,OnClearUp)
END_MESSAGE_MAP()

CStartTimeSetPage::CStartTimeSetPage()
{
}

void CStartTimeSetPage::OnUpdatePage()
{

}

void CStartTimeSetPage::OnInitPage()
{
    SetEditSelected(ID_PICSTS_EDIT_YEAR,true);
    SetEditSelected(ID_PICSTS_EDIT_MONTH,false);
    SetEditSelected(ID_PICSTS_EDIT_DAY,false);
    SetEditSelected(ID_PICSTS_EDIT_HOUR,false);
    SetEditSelected(ID_PICSTS_EDIT_MINUTE,false);

    ((CEdit *)GetDlgItem(ID_PICSTS_EDIT_YEAR))->SetCtrlText("");
    ((CEdit *)GetDlgItem(ID_PICSTS_EDIT_MONTH))->SetCtrlText("");
    ((CEdit *)GetDlgItem(ID_PICSTS_EDIT_DAY))->SetCtrlText("");
    ((CEdit *)GetDlgItem(ID_PICSTS_EDIT_HOUR))->SetCtrlText("");
    ((CEdit *)GetDlgItem(ID_PICSTS_EDIT_MINUTE))->SetCtrlText("");
}
void CStartTimeSetPage::OnDefaultButtonDown()
{
    ((CButton*)GetDlgItem(IDBTN_PICSTS_DEFAULT))->ChangeButtonState(LBUTTON_DOWN);
}

void CStartTimeSetPage::OnDefaultButtonUp()
{
    ((CButton*)GetDlgItem(IDBTN_PICSTS_DEFAULT))->ChangeButtonState(LBUTTON_UP);
    if (E_INVOKE_HISTORY == g_invoke_type)
    {
        ChangePage(PAGE_ROM_INDEX_HISTORYFAULTLIST);
        CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
        ((CHistoryFaultListPage *)pPage)->SetStartTime(QSTR("全部"));
    }
    else if (E_INVOKE_CURRENT == g_invoke_type)
    {
        ChangePage(PAGE_ROM_INDEX_CURRENTFAULTLIST);
        CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
        ((CCurrentFaultListPage *)pPage)->SetStartTime(QSTR("全部"));
    }
}
void CStartTimeSetPage::OnQuitButtonDown()
{
    ((CButton*)GetDlgItem(IDBTN_PICSTS_QUIT))->ChangeButtonState(LBUTTON_DOWN);
}

void CStartTimeSetPage::OnQuitButtonUp()
{
    ((CButton*)GetDlgItem(IDBTN_PICSTS_QUIT))->ChangeButtonState(LBUTTON_UP);
    if (E_INVOKE_HISTORY == g_invoke_type)
    {
        ChangePage(PAGE_ROM_INDEX_HISTORYFAULTLIST);
    }
    else
    {
        ChangePage(PAGE_ROM_INDEX_CURRENTFAULTLIST);
    }
}

void CStartTimeSetPage::OnNum0Down()
{
    SetBtnDown(ID_PICSTS_BUTTON_NUMBER0);
}

void CStartTimeSetPage::OnNum1Down()
{
    SetBtnDown(ID_PICSTS_BUTTON_NUMBER1);
}

void CStartTimeSetPage::OnNum2Down()
{
    SetBtnDown(ID_PICSTS_BUTTON_NUMBER2);
}

void CStartTimeSetPage::OnNum3Down()
{
    SetBtnDown(ID_PICSTS_BUTTON_NUMBER3);
}

void CStartTimeSetPage::OnNum4Down()
{
    SetBtnDown(ID_PICSTS_BUTTON_NUMBER4);
}

void CStartTimeSetPage::OnNum5Down()
{
    SetBtnDown(ID_PICSTS_BUTTON_NUMBER5);
}

void CStartTimeSetPage::OnNum6Down()
{
    SetBtnDown(ID_PICSTS_BUTTON_NUMBER6);
}

void CStartTimeSetPage::OnNum7Down()
{
    SetBtnDown(ID_PICSTS_BUTTON_NUMBER7);
}

void CStartTimeSetPage::OnNum8Down()
{
    SetBtnDown(ID_PICSTS_BUTTON_NUMBER8);
}

void CStartTimeSetPage::OnNum9Down()
{
    SetBtnDown(ID_PICSTS_BUTTON_NUMBER9);
}

QString CStartTimeSetPage::GetStartTimeStr()
{
    yearStr = ((CEdit *)GetDlgItem(ID_PICSTS_EDIT_YEAR))->GetCtrlText();
    monthStr = ((CEdit *)GetDlgItem(ID_PICSTS_EDIT_MONTH))->GetCtrlText();
    dayStr = ((CEdit *)GetDlgItem(ID_PICSTS_EDIT_DAY))->GetCtrlText();
    hourStr = ((CEdit *)GetDlgItem(ID_PICSTS_EDIT_HOUR))->GetCtrlText();
    minuteStr = ((CEdit *)GetDlgItem(ID_PICSTS_EDIT_MINUTE))->GetCtrlText();
    if ("" == hourStr.simplified())
    {
        hourStr = "0";
    }
    if ("" == minuteStr.simplified())
    {
        minuteStr = "0";
    }

    return yearStr + "-" + monthStr + "-" + dayStr + " " + hourStr + ":" + minuteStr;
}

void CStartTimeSetPage::OnStartTimeSetDown()
{
    ((CButton *)GetDlgItem(ID_PICSTS_BUTTON_SET))->ChangeButtonState(LBUTTON_DOWN);
}

bool CStartTimeSetPage::CheckDateTimeValid()
{
    nYear = 0;
    nMonth = 0;
    nDay = 0;
    nHour = 0;
    nMinute = 0;
    int nSecond = 0;
    if ("" != yearStr.simplified())
    {
        nYear = yearStr.toInt();
    }
    if ("" != monthStr.simplified())
    {
        nMonth = monthStr.toInt();
    }
    if ("" != dayStr.simplified())
    {
        nDay = dayStr.toInt();
    }
    if ("" != hourStr.simplified())
    {
        nHour = hourStr.toInt();
    }
    if ("" != minuteStr.simplified())
    {
        nMinute = minuteStr.toInt();
    }
    if(QDate::isValid(nYear, nMonth, nDay)
       && QTime::isValid(nHour, nMinute, nSecond))
    {
        return true;
    }

    return false;
}

void CStartTimeSetPage::OnStartTimeSetUp()
{
    QString str;
    str = GetStartTimeStr();
    if (!CheckDateTimeValid())
    {
        OnInitPage();
        ShowWarningDialog();
        return;
    }

    ((CButton *)GetDlgItem(ID_PICSTS_BUTTON_SET))->ChangeButtonState(LBUTTON_UP);
    if (E_INVOKE_HISTORY == g_invoke_type)
    {
        ChangePage(PAGE_ROM_INDEX_HISTORYFAULTLIST);
        CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
        ((CHistoryFaultListPage *)pPage)->SetStartTime(str);
        ((CHistoryFaultListPage *)pPage)->m_starttime.year = nYear;
        ((CHistoryFaultListPage *)pPage)->m_starttime.month = nMonth;
        ((CHistoryFaultListPage *)pPage)->m_starttime.day = nDay;
        ((CHistoryFaultListPage *)pPage)->m_starttime.hour = nHour;
        ((CHistoryFaultListPage *)pPage)->m_starttime.minute = nMinute;
        ((CHistoryFaultListPage *)pPage)->m_starttime.second = 0;
    }
    else if (E_INVOKE_CURRENT == g_invoke_type)
    {
        ChangePage(PAGE_ROM_INDEX_CURRENTFAULTLIST);
        CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
        ((CCurrentFaultListPage *)pPage)->SetStartTime(str);
        ((CCurrentFaultListPage *)pPage)->m_starttime.year = nYear;
        ((CCurrentFaultListPage *)pPage)->m_starttime.month = nMonth;
        ((CCurrentFaultListPage *)pPage)->m_starttime.day = nDay;
        ((CCurrentFaultListPage *)pPage)->m_starttime.hour = nHour;
        ((CCurrentFaultListPage *)pPage)->m_starttime.minute = nMinute;
        ((CCurrentFaultListPage *)pPage)->m_starttime.second = 0;
    }
}

void CStartTimeSetPage::AddSelectedEditBox(QString str)
{
    int str_len;
    if (IsEditSelected(ID_PICSTS_EDIT_YEAR)) {
        str_len = AddEditStr(ID_PICSTS_EDIT_YEAR, str);
        if (4 == str_len) {
            SetEditSelected(ID_PICSTS_EDIT_YEAR,false);
            SetEditSelected(ID_PICSTS_EDIT_MONTH,true);
            SetEditSelected(ID_PICSTS_EDIT_DAY,false);
            SetEditSelected(ID_PICSTS_EDIT_HOUR,false);
            SetEditSelected(ID_PICSTS_EDIT_MINUTE,false);
        }
    } else if (IsEditSelected(ID_PICSTS_EDIT_MONTH)) {
        str_len = AddEditStr(ID_PICSTS_EDIT_MONTH, str);
        if (2 == str_len) {
            SetEditSelected(ID_PICSTS_EDIT_YEAR,false);
            SetEditSelected(ID_PICSTS_EDIT_MONTH,false);
            SetEditSelected(ID_PICSTS_EDIT_DAY,true);
            SetEditSelected(ID_PICSTS_EDIT_HOUR,false);
            SetEditSelected(ID_PICSTS_EDIT_MINUTE,false);
        }
    } else if (IsEditSelected(ID_PICSTS_EDIT_DAY)) {
        str_len = AddEditStr(ID_PICSTS_EDIT_DAY, str);
        if (2 == str_len) {
            SetEditSelected(ID_PICSTS_EDIT_YEAR,false);
            SetEditSelected(ID_PICSTS_EDIT_MONTH,false);
            SetEditSelected(ID_PICSTS_EDIT_DAY,false);
            SetEditSelected(ID_PICSTS_EDIT_HOUR,true);
            SetEditSelected(ID_PICSTS_EDIT_MINUTE,false);
        }
    } else if (IsEditSelected(ID_PICSTS_EDIT_HOUR)) {
        str_len = AddEditStr(ID_PICSTS_EDIT_HOUR, str);
        if (2 == str_len) {
            SetEditSelected(ID_PICSTS_EDIT_YEAR,false);
            SetEditSelected(ID_PICSTS_EDIT_MONTH,false);
            SetEditSelected(ID_PICSTS_EDIT_DAY,false);
            SetEditSelected(ID_PICSTS_EDIT_HOUR,false);
            SetEditSelected(ID_PICSTS_EDIT_MINUTE,true);
        }
    } else if (IsEditSelected(ID_PICSTS_EDIT_MINUTE)) {
        str_len = AddEditStr(ID_PICSTS_EDIT_MINUTE, str);
        if (2 == str_len) {
            SetEditSelected(ID_PICSTS_EDIT_YEAR,false);
            SetEditSelected(ID_PICSTS_EDIT_MONTH,false);
            SetEditSelected(ID_PICSTS_EDIT_DAY,false);
            SetEditSelected(ID_PICSTS_EDIT_HOUR,false);
            SetEditSelected(ID_PICSTS_EDIT_MINUTE,false);
        }
    } else {
        //do nothing
    }
}

void CStartTimeSetPage::SetSelectedEditBox(QString str)
{
    if (IsEditSelected(ID_PICSTS_EDIT_YEAR)) {
        SetEditStr(ID_PICSTS_EDIT_YEAR, str);
    } else if (IsEditSelected(ID_PICSTS_EDIT_MONTH)) {
        SetEditStr(ID_PICSTS_EDIT_MONTH, str);
    } else if (IsEditSelected(ID_PICSTS_EDIT_DAY)) {
        SetEditStr(ID_PICSTS_EDIT_DAY, str);
    } else if (IsEditSelected(ID_PICSTS_EDIT_HOUR)) {
        SetEditStr(ID_PICSTS_EDIT_HOUR, str);
    } else {
        SetEditStr(ID_PICSTS_EDIT_MINUTE, str);
    }
}

void CStartTimeSetPage::OnNum0Up()
{
    SetBtnUp(ID_PICSTS_BUTTON_NUMBER0);
    AddSelectedEditBox("0");
}

void CStartTimeSetPage::OnNum1Up()
{
    SetBtnUp(ID_PICSTS_BUTTON_NUMBER1);
    AddSelectedEditBox("1");

}

void CStartTimeSetPage::OnNum2Up()
{
    SetBtnUp(ID_PICSTS_BUTTON_NUMBER2);
    AddSelectedEditBox("2");

}

void CStartTimeSetPage::OnNum3Up()
{
    SetBtnUp(ID_PICSTS_BUTTON_NUMBER3);
    AddSelectedEditBox("3");

}

void CStartTimeSetPage::OnNum4Up()
{
    SetBtnUp(ID_PICSTS_BUTTON_NUMBER4);
    AddSelectedEditBox("4");

}

void CStartTimeSetPage::OnNum5Up()
{
    SetBtnUp(ID_PICSTS_BUTTON_NUMBER5);
    AddSelectedEditBox("5");

}

void CStartTimeSetPage::OnNum6Up()
{
    SetBtnUp(ID_PICSTS_BUTTON_NUMBER6);
    AddSelectedEditBox("6");

}

void CStartTimeSetPage::OnNum7Up()
{
    SetBtnUp(ID_PICSTS_BUTTON_NUMBER7);
    AddSelectedEditBox("7");

}

void CStartTimeSetPage::OnNum8Up()
{
    SetBtnUp(ID_PICSTS_BUTTON_NUMBER8);
    AddSelectedEditBox("8");
}

void CStartTimeSetPage::OnNum9Up()
{
    SetBtnUp(ID_PICSTS_BUTTON_NUMBER9);
    AddSelectedEditBox("9");
 }

void CStartTimeSetPage::OnClearDown()
{
    SetBtnDown(ID_PICSTS_BUTTON_CLEAR);
}

void CStartTimeSetPage::OnClearUp()
{
    SetBtnUp(ID_PICSTS_BUTTON_CLEAR);
    SetSelectedEditBox("");
}

void CStartTimeSetPage::SetBtnDown(int btnId)
{
    CButton *pButton = NULL;
    int nIDArray[] =
    {
        ID_PICSTS_BUTTON_NUMBER1,
        ID_PICSTS_BUTTON_NUMBER2,
        ID_PICSTS_BUTTON_NUMBER3,
        ID_PICSTS_BUTTON_NUMBER4,
        ID_PICSTS_BUTTON_NUMBER5,
        ID_PICSTS_BUTTON_NUMBER6,
        ID_PICSTS_BUTTON_NUMBER7,
        ID_PICSTS_BUTTON_NUMBER8,
        ID_PICSTS_BUTTON_NUMBER9,
        ID_PICSTS_BUTTON_NUMBER0,
        ID_PICSTS_BUTTON_CLEAR,
        ID_PICSTS_BUTTON_SET
    };

    for(int i = 0; i < 12; i++)
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

    return;
}

void CStartTimeSetPage::SetBtnUp(int btnId)
{
    CButton *pButton = NULL;
    int nIDArray[] =
    {
        ID_PICSTS_BUTTON_NUMBER1,
        ID_PICSTS_BUTTON_NUMBER2,
        ID_PICSTS_BUTTON_NUMBER3,
        ID_PICSTS_BUTTON_NUMBER4,
        ID_PICSTS_BUTTON_NUMBER5,
        ID_PICSTS_BUTTON_NUMBER6,
        ID_PICSTS_BUTTON_NUMBER7,
        ID_PICSTS_BUTTON_NUMBER8,
        ID_PICSTS_BUTTON_NUMBER9,
        ID_PICSTS_BUTTON_NUMBER0,
        ID_PICSTS_BUTTON_CLEAR,
        ID_PICSTS_BUTTON_SET
     };

    for(int i = 0; i < 12; i++)
    {
        pButton = (CButton *)GetDlgItem(nIDArray[i]);
        if(nIDArray[i] == btnId)
        {
            pButton->ChangeButtonState(LBUTTON_UP);
        }
        else
        {
        }
    }
}

void CStartTimeSetPage::OnYearEdit()
{
    SetEditSelected(ID_PICSTS_EDIT_YEAR, true);
    SetEditSelected(ID_PICSTS_EDIT_MONTH, false);
    SetEditSelected(ID_PICSTS_EDIT_DAY, false);
    SetEditSelected(ID_PICSTS_EDIT_HOUR, false);
    SetEditSelected(ID_PICSTS_EDIT_MINUTE, false);
}

void CStartTimeSetPage::OnMonthEdit()
{
    SetEditSelected(ID_PICSTS_EDIT_YEAR, false);
    SetEditSelected(ID_PICSTS_EDIT_MONTH, true);
    SetEditSelected(ID_PICSTS_EDIT_DAY, false);
    SetEditSelected(ID_PICSTS_EDIT_HOUR, false);
    SetEditSelected(ID_PICSTS_EDIT_MINUTE, false);
}

void CStartTimeSetPage::OnDayEdit()
{
    SetEditSelected(ID_PICSTS_EDIT_YEAR, false);
    SetEditSelected(ID_PICSTS_EDIT_MONTH, false);
    SetEditSelected(ID_PICSTS_EDIT_DAY, true);
    SetEditSelected(ID_PICSTS_EDIT_HOUR, false);
    SetEditSelected(ID_PICSTS_EDIT_MINUTE, false);
}

void CStartTimeSetPage::OnHourEdit()
{
    SetEditSelected(ID_PICSTS_EDIT_YEAR, false);
    SetEditSelected(ID_PICSTS_EDIT_MONTH, false);
    SetEditSelected(ID_PICSTS_EDIT_DAY, false);
    SetEditSelected(ID_PICSTS_EDIT_HOUR, true);
    SetEditSelected(ID_PICSTS_EDIT_MINUTE, false);
}

void CStartTimeSetPage::OnMinuteEdit()
{
    SetEditSelected(ID_PICSTS_EDIT_YEAR, false);
    SetEditSelected(ID_PICSTS_EDIT_MONTH, false);
    SetEditSelected(ID_PICSTS_EDIT_DAY, false);
    SetEditSelected(ID_PICSTS_EDIT_HOUR, false);
    SetEditSelected(ID_PICSTS_EDIT_MINUTE, true);
}

void CStartTimeSetPage::SetEditStr(int EditId, QString str)
{
    CEdit *pEdit = NULL;
    pEdit = (CEdit *)GetDlgItem(EditId);
    if (NULL == pEdit)
    {
        return;
    }
    pEdit->SetCtrlText(str);
}

void CStartTimeSetPage::SetEditSelected(int EditId, bool flg)
{
    CEdit *pEdit = NULL;
    pEdit = (CEdit *)GetDlgItem(EditId);
    if (NULL == pEdit)
    {
        return;
    }
    pEdit->SetSelected(flg);
}

int CStartTimeSetPage::AddEditStr(int EditId, QString str)
{
    CEdit *pEdit = NULL;
    pEdit = (CEdit *)GetDlgItem(EditId);
    if (NULL == pEdit)
    {
        return 0;
    }
    QString edit_str;
    edit_str = pEdit->GetCtrlText();
    if (
        ((ID_PICSTS_EDIT_YEAR == EditId) && (4 == edit_str.length()))
        || ((ID_PICSTS_EDIT_MONTH == EditId) && (2 == edit_str.length()))
        || ((ID_PICSTS_EDIT_DAY == EditId) && (2 == edit_str.length()))
        || ((ID_PICSTS_EDIT_HOUR == EditId) && (2 == edit_str.length()))
        || ((ID_PICSTS_EDIT_MINUTE == EditId) && (2 == edit_str.length()))
        )
    {
        edit_str = str;
    }
    else
    {
        edit_str = edit_str.append(str);
    }
    pEdit->SetCtrlText(edit_str);
    return edit_str.length();
}

bool CStartTimeSetPage::IsEditSelected(int EditId)
{
    CEdit *pEdit = NULL;
    pEdit = (CEdit *)GetDlgItem(EditId);
    if (NULL == pEdit)
    {
        return false;
    }

    return pEdit->GetSelected();
}

void CStartTimeSetPage::ShowWarningDialog()
{
    CWarningDialog dlg;
    dlg.SetWarningStr(QSTR("时间设定错误！"));
    dlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
    dlg.exec();
}

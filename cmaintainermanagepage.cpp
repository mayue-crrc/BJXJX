#include "cmaintainermanagepage.h"
#include "cmaintaineridlistpage.h"
#include "psettingdatabase.h"
extern vector<CPage*> g_PageVec;
ROMDATA g_PicRom_MaintainerManage[] =
{
    /*string                font                     rc                   foreground color              background color           control type                   ID           */
    {QSTR("运行数据管理"),  D_FONT(13),  QRect(  0,    0, 640, 60),        Qt::black,                   Qt::yellow,                 CONTROL_LABEL,        ID_IGNORE                },

    {"1",                  D_COMMON_TITLE_FONT,  QRect(450,  100,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICMM_BUTTON_NUMBER1  },
    {"2",                  D_COMMON_TITLE_FONT,  QRect(500,  100,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICMM_BUTTON_NUMBER2  },
    {"3",                  D_COMMON_TITLE_FONT,  QRect(550,  100,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICMM_BUTTON_NUMBER3  },
    {"4",                  D_COMMON_TITLE_FONT,  QRect(450,  150,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICMM_BUTTON_NUMBER4  },
    {"5",                  D_COMMON_TITLE_FONT,  QRect(500,  150,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICMM_BUTTON_NUMBER5  },
    {"6",                  D_COMMON_TITLE_FONT,  QRect(550,  150,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICMM_BUTTON_NUMBER6  },
    {"7",                  D_COMMON_TITLE_FONT,  QRect(450,  200,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICMM_BUTTON_NUMBER7  },
    {"8",                  D_COMMON_TITLE_FONT,  QRect(500,  200,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICMM_BUTTON_NUMBER8  },
    {"9",                  D_COMMON_TITLE_FONT,  QRect(550,  200,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICMM_BUTTON_NUMBER9  },
    {"0",                  D_COMMON_TITLE_FONT,  QRect(450,  250,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICMM_BUTTON_NUMBER0  },
    {QSTR("清除"),         D_COMMON_TITLE_FONT,  QRect(500,  250, 100, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICMM_BUTTON_CLEAR    },
    {QSTR("退出"),         D_COMMON_TITLE_FONT,  QRect(400,  380, 120, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICMM_BUTTON_QUIT     },
    //{QSTR("Add/Modify(4bits)"),D_COMMON_TITLE_FONT,  QRect( 20,  145, 170, 50),        Qt::yellow,                  Qt::black,                  CONTROL_LABEL,        ID_IGNORE                },
    {QSTR("运行里程"),      D_COMMON_TITLE_FONT,   QRect(80,  110, 120, 30),        Qt::yellow,                  Qt::black,                  CONTROL_LABEL,        ID_IGNORE                },
    {QSTR("牵引能耗"),      D_COMMON_TITLE_FONT,   QRect(80,  150, 120, 30),        Qt::yellow,                  Qt::black,                  CONTROL_LABEL,        ID_IGNORE                },
    {QSTR("辅助能耗"),      D_COMMON_TITLE_FONT,   QRect(80,  190, 120, 30),        Qt::yellow,                  Qt::black,                  CONTROL_LABEL,        ID_IGNORE                },
    {QSTR("再生能耗"),      D_COMMON_TITLE_FONT,   QRect(80,  230, 120, 30),        Qt::yellow,                  Qt::black,                  CONTROL_LABEL,        ID_IGNORE                },
    //{"",                   D_COMMON_TITLE_FONT,   QRect(130,  310, 300, 30),        Qt::yellow,                  Qt::black,                  CONTROL_LABEL,        ID_PICMM_LABEL_SUCCESS   },
    {"",                   D_COMMON_TITLE_FONT,  QRect(260,  110, 110, 30),        Qt::yellow,                  Qt::black,                  CONTROL_EDIT,         ID_PICMM_EDIT_MILE        },
    {"",                   D_COMMON_TITLE_FONT,  QRect(260,  150, 110, 30),        Qt::yellow,                  Qt::black,                  CONTROL_EDIT,         ID_PICMM_EDIT_TCUPOWER        },
    {"",                   D_COMMON_TITLE_FONT, QRect(260,  190, 110, 30),        Qt::yellow,                  Qt::black,                  CONTROL_EDIT,         ID_PICMM_EDIT_ACUPOWER   },
    {"",                   D_COMMON_TITLE_FONT, QRect(260,  230, 110, 30),        Qt::yellow,                  Qt::black,                  CONTROL_EDIT,         ID_PICMM_EDIT_BCUPOWER   },
    //{QSTR("OK"),         D_COMMON_TITLE_FONT,  QRect(380,  252,  60, 45),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICMM_BUTTON_PWD_OK   },
    {QSTR("设定"),  D_COMMON_TITLE_FONT,  QRect(80,  380,  240, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICMM_BUTTON_PWD_OK   },
};
int g_MaintainerManageRomLen = sizeof(g_PicRom_MaintainerManage)/sizeof(ROMDATA);

BEGIN_MESSAGE_MAP(CMaintainerManagePage,CPage)
        ON_UPDATE_PAGE()
        ON_SHOWPAGE()
        ON_LBUTTONDOWN(ID_PICMM_BUTTON_QUIT, OnQuitButtonDown)
        ON_LBUTTONUP(ID_PICMM_BUTTON_QUIT, OnQuitButtonUp)
        ON_LBUTTONDOWN(ID_PICMM_EDIT_MILE, OnMileEdit)
        ON_LBUTTONDOWN(ID_PICMM_EDIT_TCUPOWER, OnTCUPowerEdit)
        ON_LBUTTONDOWN(ID_PICMM_EDIT_ACUPOWER, OnACUPowerEdit)
        ON_LBUTTONDOWN(ID_PICMM_EDIT_BCUPOWER, OnBCUPowerEdit)
        ON_LBUTTONDOWN(ID_PICMM_BUTTON_PWD_OK,OnPwdOkDown)

        ON_LBUTTONDOWN(ID_PICMM_BUTTON_NUMBER0,OnNum0Down)
        ON_LBUTTONDOWN(ID_PICMM_BUTTON_NUMBER1,OnNum1Down)
        ON_LBUTTONDOWN(ID_PICMM_BUTTON_NUMBER2,OnNum2Down)
        ON_LBUTTONDOWN(ID_PICMM_BUTTON_NUMBER3,OnNum3Down)
        ON_LBUTTONDOWN(ID_PICMM_BUTTON_NUMBER4,OnNum4Down)
        ON_LBUTTONDOWN(ID_PICMM_BUTTON_NUMBER5,OnNum5Down)
        ON_LBUTTONDOWN(ID_PICMM_BUTTON_NUMBER6,OnNum6Down)
        ON_LBUTTONDOWN(ID_PICMM_BUTTON_NUMBER7,OnNum7Down)
        ON_LBUTTONDOWN(ID_PICMM_BUTTON_NUMBER8,OnNum8Down)
        ON_LBUTTONDOWN(ID_PICMM_BUTTON_NUMBER9,OnNum9Down)
        ON_LBUTTONDOWN(ID_PICMM_BUTTON_CLEAR,OnClearDown)
        //ON_LBUTTONDOWN(ID_PICMM_BUTTON_MAINLIST,OnMainListDown)
        ON_LBUTTONUP(ID_PICMM_BUTTON_NUMBER0,OnNum0Up)
        ON_LBUTTONUP(ID_PICMM_BUTTON_NUMBER1,OnNum1Up)
        ON_LBUTTONUP(ID_PICMM_BUTTON_NUMBER2,OnNum2Up)
        ON_LBUTTONUP(ID_PICMM_BUTTON_NUMBER3,OnNum3Up)
        ON_LBUTTONUP(ID_PICMM_BUTTON_NUMBER4,OnNum4Up)
        ON_LBUTTONUP(ID_PICMM_BUTTON_NUMBER5,OnNum5Up)
        ON_LBUTTONUP(ID_PICMM_BUTTON_NUMBER6,OnNum6Up)
        ON_LBUTTONUP(ID_PICMM_BUTTON_NUMBER7,OnNum7Up)
        ON_LBUTTONUP(ID_PICMM_BUTTON_NUMBER8,OnNum8Up)
        ON_LBUTTONUP(ID_PICMM_BUTTON_NUMBER9,OnNum9Up)
        ON_LBUTTONUP(ID_PICMM_BUTTON_CLEAR,OnClearUp)
        //ON_LBUTTONUP(ID_PICMM_BUTTON_MAINLIST,OnMainListUp)
END_MESSAGE_MAP()

CMaintainerManagePage::CMaintainerManagePage()
{
}

void CMaintainerManagePage::OnInitPage()
{
    ((CButton *)GetDlgItem(ID_PICMM_BUTTON_PWD_OK))->m_bAutoUpState = false;

}

void CMaintainerManagePage::OnShowPage()
{
    GetDlgItem(ID_PICMM_EDIT_MILE)->SetCtrlText("");
    GetDlgItem(ID_PICMM_EDIT_TCUPOWER)->SetCtrlText("");
    GetDlgItem(ID_PICMM_EDIT_ACUPOWER)->SetCtrlText("");
    GetDlgItem(ID_PICMM_EDIT_BCUPOWER)->SetCtrlText("");
    OnMileEdit();
}

void CMaintainerManagePage::OnUpdatePage()
{
    static int cnt = 0;
    if(IDUCT_ACCDATACALL_B1)
    {
        ((CButton *)GetDlgItem(ID_PICMM_BUTTON_PWD_OK))->ChangeButtonState(LBUTTON_DOWN);
        if(cnt++ > 10)
        {
            ((CButton *)GetDlgItem(ID_PICMM_BUTTON_PWD_OK))->ChangeButtonState(LBUTTON_UP);
            cnt = 0;
            IDUCT_ACCDATACALL_B1 = false;
        }

    }
}

void CMaintainerManagePage::OnQuitButtonDown()
{
    ((CButton*)GetDlgItem(ID_PICMM_BUTTON_QUIT))->ChangeButtonState(LBUTTON_DOWN);
}

void CMaintainerManagePage::OnQuitButtonUp()
{
    ((CButton *)GetDlgItem(ID_PICMM_BUTTON_PWD_OK))->ChangeButtonState(LBUTTON_UP);
    IDUCT_ACCDATACALL_B1 = false;
    ((CButton*)GetDlgItem(ID_PICMM_BUTTON_QUIT))->ChangeButtonState(LBUTTON_UP);
    ChangePage(PAGE_ROM_INDEX_PARAMETERSET);
}

void CMaintainerManagePage::OnPwdOkDown()
{
    ((CButton *)GetDlgItem(ID_PICMM_BUTTON_PWD_OK))->ChangeButtonState(LBUTTON_DOWN);

    QString strMileInput;
    QString strTcuInput;
    QString strAcuInput;
    QString strRegInput;

    strMileInput = GetDlgItem(ID_PICMM_EDIT_MILE)->GetCtrlText();
    strTcuInput = GetDlgItem(ID_PICMM_EDIT_TCUPOWER)->GetCtrlText();
    strAcuInput = GetDlgItem(ID_PICMM_EDIT_ACUPOWER)->GetCtrlText();
    strRegInput = GetDlgItem(ID_PICMM_EDIT_BCUPOWER)->GetCtrlText();

    PSettingDataBase* settingDataBase = PSettingDataBase::getPSettingDataBaseInstance();
    if(strMileInput == "")
    {
    }else
    {
        settingDataBase->setRunningDistance(strMileInput.toInt());
        runningDistance = strMileInput.toInt();
    }
    if(strTcuInput == "")
    {
    }else
    {
        settingDataBase->setTcuEnergyConsumption(strTcuInput.toInt());
        m_TcuEnergyConsumption_init = strTcuInput.toInt();
    }
    if(strAcuInput == "")
    {
    }else
    {
        settingDataBase->setAcuEnergyConsumption(strAcuInput.toInt());
        m_AcuEnergyConsumption_init = strAcuInput.toInt();
    }
    if(strRegInput == "")
    {
    }else
    {
        settingDataBase->setRegEnergyConsumption(strRegInput.toInt());
        m_RegEnergyConsumption_init = strRegInput.toInt();
    }
    IDUCT_ACCDATACALL_B1 = true;
    settingDataBase->saveFile();
}


//void CMaintainerManagePage::OnDeleteIdOkDown()
//{
//    ((CButton *)GetDlgItem(ID_PICMM_BUTTON_DELETEID_OK))->ChangeButtonState(LBUTTON_DOWN);
//}

//void CMaintainerManagePage::OnDeleteIdOkUp()
//{

//}
//void CMaintainerManagePage::OnMainListDown()
//{
//   ((CButton *)GetDlgItem(ID_PICMM_BUTTON_MAINLIST))->ChangeButtonState(LBUTTON_DOWN);
//}
//void CMaintainerManagePage::OnMainListUp()
//{
//    CMaintainerIDListPage* pPage = (CMaintainerIDListPage*)g_PageVec[PAGE_ROM_INDEX_MAINTAINERLIST];

//    /* Modify by ChengJian for sort ini mantainer code 20110129 Begin */
//    QSettings* ConfigIniRead = new QSettings("./system.ini",QSettings::IniFormat,0);
//    QString strId;
//    QString strIdSingle;
//    int nPos = 0;
//    QList<int> codeList;

//    strId = (ConfigIniRead->value("/Maintainer/Id")).toString();
//    pPage->m_MapMaintainer.clear();

//    while(strId.length() != 0)
//    {
//        if(strId.indexOf(",") != -1)
//        {
//            nPos = strId.indexOf(",");
//            strIdSingle = strId.left(nPos);
//            strId = strId.mid(nPos);
//            codeList.push_back(strIdSingle.toInt());
//            if(strId.length() != 0)
//            {
//                if(strId.left(1) == ",")
//                {
//                    strId = strId.mid(1);
//                }
//            }
//        }
//        else
//        {
//            codeList.push_back(strId.toInt());
//            break;// the last code
//        }

//    }
//    pPage->ResetBtnUp();
//    delete ConfigIniRead;

//    sort(codeList.begin(), codeList.end(), less<int>());
//    for(int i = 0; i < codeList.count(); i++)
//    {
//        QString code = QString::number(codeList[i]);
//        while(code.length() < 4)
//        {
//            code.insert(0,"0");
//        }
//        pPage->m_MapMaintainer[i+1] = code;
//    }
//    /* Modify by ChengJian for sort ini mantainer code 20110129 End */

//    ChangePage(PAGE_ROM_INDEX_MAINTAINERLIST);
//}
void CMaintainerManagePage::OnNum0Down()
{
    SetBtnDown(ID_PICMM_BUTTON_NUMBER0);
}

void CMaintainerManagePage::OnNum1Down()
{
    SetBtnDown(ID_PICMM_BUTTON_NUMBER1);
}

void CMaintainerManagePage::OnNum2Down()
{
    SetBtnDown(ID_PICMM_BUTTON_NUMBER2);
}

void CMaintainerManagePage::OnNum3Down()
{
    SetBtnDown(ID_PICMM_BUTTON_NUMBER3);
}

void CMaintainerManagePage::OnNum4Down()
{
    SetBtnDown(ID_PICMM_BUTTON_NUMBER4);
}

void CMaintainerManagePage::OnNum5Down()
{
    SetBtnDown(ID_PICMM_BUTTON_NUMBER5);
}

void CMaintainerManagePage::OnNum6Down()
{
    SetBtnDown(ID_PICMM_BUTTON_NUMBER6);
}

void CMaintainerManagePage::OnNum7Down()
{
    SetBtnDown(ID_PICMM_BUTTON_NUMBER7);
}

void CMaintainerManagePage::OnNum8Down()
{
    SetBtnDown(ID_PICMM_BUTTON_NUMBER8);
}

void CMaintainerManagePage::OnNum9Down()
{
    SetBtnDown(ID_PICMM_BUTTON_NUMBER9);
}

void CMaintainerManagePage::OnNum0Up()
{
    SetBtnUp(ID_PICMM_BUTTON_NUMBER0);
    AddSelectedEditBox("0");
}

void CMaintainerManagePage::OnNum1Up()
{
    SetBtnUp(ID_PICMM_BUTTON_NUMBER1);
    AddSelectedEditBox("1");
}

void CMaintainerManagePage::OnNum2Up()
{
    SetBtnUp(ID_PICMM_BUTTON_NUMBER2);
    AddSelectedEditBox("2");
}

void CMaintainerManagePage::OnNum3Up()
{
    SetBtnUp(ID_PICMM_BUTTON_NUMBER3);
    AddSelectedEditBox("3");
}

void CMaintainerManagePage::OnNum4Up()
{
    SetBtnUp(ID_PICMM_BUTTON_NUMBER4);
    AddSelectedEditBox("4");
}

void CMaintainerManagePage::OnNum5Up()
{
    SetBtnUp(ID_PICMM_BUTTON_NUMBER5);
    AddSelectedEditBox("5");
}

void CMaintainerManagePage::OnNum6Up()
{
    SetBtnUp(ID_PICMM_BUTTON_NUMBER6);
    AddSelectedEditBox("6");
}

void CMaintainerManagePage::OnNum7Up()
{
    SetBtnUp(ID_PICMM_BUTTON_NUMBER7);
    AddSelectedEditBox("7");
}

void CMaintainerManagePage::OnNum8Up()
{
    SetBtnUp(ID_PICMM_BUTTON_NUMBER8);
    AddSelectedEditBox("8");
}

void CMaintainerManagePage::OnNum9Up()
{
    SetBtnUp(ID_PICMM_BUTTON_NUMBER9);
    AddSelectedEditBox("9");
}

void CMaintainerManagePage::OnClearDown()
{
    SetBtnDown(ID_PICMM_BUTTON_CLEAR);
}

void CMaintainerManagePage::OnClearUp()
{
    SetBtnUp(ID_PICMM_BUTTON_CLEAR);
    SetSelectedEditBox("");
}

void CMaintainerManagePage::SetBtnDown(int btnId)
{
    CButton *pButton = NULL;
    int nIDArray[] =
    {
        ID_PICMM_BUTTON_NUMBER0,
        ID_PICMM_BUTTON_NUMBER1,
        ID_PICMM_BUTTON_NUMBER2,
        ID_PICMM_BUTTON_NUMBER3,
        ID_PICMM_BUTTON_NUMBER4,
        ID_PICMM_BUTTON_NUMBER5,
        ID_PICMM_BUTTON_NUMBER6,
        ID_PICMM_BUTTON_NUMBER7,
        ID_PICMM_BUTTON_NUMBER8,
        ID_PICMM_BUTTON_NUMBER9,
        ID_PICMM_BUTTON_CLEAR,
        ID_PICMM_BUTTON_PWD_OK
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

void CMaintainerManagePage::SetBtnUp(int btnId)
{
    CButton *pButton = NULL;
    int nIDArray[] =
    {
        ID_PICMM_BUTTON_NUMBER0,
        ID_PICMM_BUTTON_NUMBER1,
        ID_PICMM_BUTTON_NUMBER2,
        ID_PICMM_BUTTON_NUMBER3,
        ID_PICMM_BUTTON_NUMBER4,
        ID_PICMM_BUTTON_NUMBER5,
        ID_PICMM_BUTTON_NUMBER6,
        ID_PICMM_BUTTON_NUMBER7,
        ID_PICMM_BUTTON_NUMBER8,
        ID_PICMM_BUTTON_NUMBER9,
        ID_PICMM_BUTTON_CLEAR,
        ID_PICMM_BUTTON_PWD_OK
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

    return;
}

void CMaintainerManagePage::AddSelectedEditBox(QString str)
{
    int nLen = 0;
    if (IsEditSelected(ID_PICMM_EDIT_MILE)) {
        nLen = (GetDlgItem(ID_PICMM_EDIT_MILE)->GetCtrlText()).length();
        if(nLen < g_loginIDPWDLen)
        {
            AddEditStr(ID_PICMM_EDIT_MILE, str);
        }
    } else if (IsEditSelected(ID_PICMM_EDIT_TCUPOWER)) {
        nLen = (GetDlgItem(ID_PICMM_EDIT_TCUPOWER)->GetCtrlText()).length();
        if(nLen < g_loginIDPWDLen)
        {
            AddEditStr(ID_PICMM_EDIT_TCUPOWER, str);
        }
    } else if (IsEditSelected(ID_PICMM_EDIT_ACUPOWER)) {
        nLen = (GetDlgItem(ID_PICMM_EDIT_ACUPOWER)->GetCtrlText()).length();
        if(nLen < g_loginIDPWDLen)
        {
            AddEditStr(ID_PICMM_EDIT_ACUPOWER, str);
        }
    }else if(IsEditSelected(ID_PICMM_EDIT_BCUPOWER)) {
        nLen = (GetDlgItem(ID_PICMM_EDIT_BCUPOWER)->GetCtrlText()).length();
        if(nLen < g_loginIDPWDLen)
        {
            AddEditStr(ID_PICMM_EDIT_BCUPOWER, str);
        }

}
}

void CMaintainerManagePage::SetSelectedEditBox(QString str)
{
    if (IsEditSelected(ID_PICMM_EDIT_MILE)) {
        SetEditStr(ID_PICMM_EDIT_MILE, str);
    } else if (IsEditSelected(ID_PICMM_EDIT_TCUPOWER)) {
        SetEditStr(ID_PICMM_EDIT_TCUPOWER, str);
    } else if (IsEditSelected(ID_PICMM_EDIT_ACUPOWER)) {
        SetEditStr(ID_PICMM_EDIT_ACUPOWER, str);
    }else if (IsEditSelected(ID_PICMM_EDIT_BCUPOWER)) {
        SetEditStr(ID_PICMM_EDIT_BCUPOWER, str);
    }
}

void CMaintainerManagePage::OnMileEdit()
{
    SetEditSelected(ID_PICMM_EDIT_MILE, true);
    SetEditSelected(ID_PICMM_EDIT_TCUPOWER, false);
    SetEditSelected(ID_PICMM_EDIT_ACUPOWER, false);
    SetEditSelected(ID_PICMM_EDIT_BCUPOWER, false);
     ((CEdit *)GetDlgItem(ID_PICMM_EDIT_MILE))->m_bIsPassWord = false;
}

void CMaintainerManagePage::OnTCUPowerEdit()
{
    SetEditSelected(ID_PICMM_EDIT_MILE, false);
    SetEditSelected(ID_PICMM_EDIT_TCUPOWER, true);
    SetEditSelected(ID_PICMM_EDIT_ACUPOWER, false);
    SetEditSelected(ID_PICMM_EDIT_BCUPOWER, false);
    ((CEdit *)GetDlgItem(ID_PICMM_EDIT_TCUPOWER))->m_bIsPassWord = false;
}

void CMaintainerManagePage::OnACUPowerEdit()
{
    SetEditSelected(ID_PICMM_EDIT_MILE, false);
    SetEditSelected(ID_PICMM_EDIT_TCUPOWER, false);
    SetEditSelected(ID_PICMM_EDIT_ACUPOWER, true);
    SetEditSelected(ID_PICMM_EDIT_BCUPOWER, false);
    ((CEdit *)GetDlgItem(ID_PICMM_EDIT_ACUPOWER))->m_bIsPassWord = false;
}
void CMaintainerManagePage::OnBCUPowerEdit()
{
    SetEditSelected(ID_PICMM_EDIT_MILE, false);
    SetEditSelected(ID_PICMM_EDIT_TCUPOWER, false);
    SetEditSelected(ID_PICMM_EDIT_ACUPOWER, false);
    SetEditSelected(ID_PICMM_EDIT_BCUPOWER, true);
    ((CEdit *)GetDlgItem(ID_PICMM_EDIT_BCUPOWER))->m_bIsPassWord = false;
}
void CMaintainerManagePage::SetEditStr(int EditId, QString str)
{
    CEdit *pEdit = NULL;
    pEdit = (CEdit *)GetDlgItem(EditId);
    if (NULL == pEdit)
    {
        return;
    }
    pEdit->SetCtrlText(str);
}

void CMaintainerManagePage::SetEditSelected(int EditId, bool flg)
{
    CEdit *pEdit = NULL;
    pEdit = (CEdit *)GetDlgItem(EditId);
    if (NULL == pEdit)
    {
        return;
    }
    pEdit->SetSelected(flg);
}

void CMaintainerManagePage::AddEditStr(int EditId, QString str)
{
    CEdit *pEdit = NULL;
    pEdit = (CEdit *)GetDlgItem(EditId);
    if (NULL == pEdit)
    {
        return;
    }
    QString edit_str;
    edit_str = pEdit->GetCtrlText();
    edit_str = edit_str.append(str);
    pEdit->SetCtrlText(edit_str);
}

bool CMaintainerManagePage::IsEditSelected(int EditId)
{
    CEdit *pEdit = NULL;
    pEdit = (CEdit *)GetDlgItem(EditId);
    if (NULL == pEdit)
    {
        return false;
    }

    return pEdit->GetSelected();
}


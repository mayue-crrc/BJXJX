#include "cdrivercodemanagepage.h"

extern vector<CPage*> g_PageVec;
ROMDATA g_PicRom_DriverCodeManage[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
    {QSTR("运行数据"),   D_FONT(13),  QRect(0  ,    0, 640, 60),       Qt::black,                    Qt::yellow,                 CONTROL_LABEL,        ID_IGNORE                },


    {"1",                  D_COMMON_TITLE_FONT,  QRect(450,  100,  50, 50),        Qt::black,                   Qt::black,                 CONTROL_LABEL,       ID_PICDCM_BUTTON_NUMBER1  },
    {"2",                  D_COMMON_TITLE_FONT,  QRect(500,  100,  50, 50),        Qt::black,                   Qt::black,                 CONTROL_LABEL,       ID_PICDCM_BUTTON_NUMBER2  },
    {"3",                  D_COMMON_TITLE_FONT,  QRect(550,  100,  50, 50),        Qt::black,                   Qt::black,                 CONTROL_LABEL,       ID_PICDCM_BUTTON_NUMBER3  },
    {"4",                  D_COMMON_TITLE_FONT,  QRect(450,  150,  50, 50),        Qt::black,                   Qt::black,                 CONTROL_LABEL,       ID_PICDCM_BUTTON_NUMBER4  },
    {"5",                  D_COMMON_TITLE_FONT,  QRect(500,  150,  50, 50),        Qt::black,                   Qt::black,                 CONTROL_LABEL,       ID_PICDCM_BUTTON_NUMBER5  },
    {"6",                  D_COMMON_TITLE_FONT,  QRect(550,  150,  50, 50),        Qt::black,                   Qt::black,                 CONTROL_LABEL,       ID_PICDCM_BUTTON_NUMBER6  },
    {"7",                  D_COMMON_TITLE_FONT,  QRect(450,  200,  50, 50),        Qt::black,                   Qt::black,                 CONTROL_LABEL,       ID_PICDCM_BUTTON_NUMBER7  },
    {"8",                  D_COMMON_TITLE_FONT,  QRect(500,  200,  50, 50),        Qt::black,                   Qt::black,                 CONTROL_LABEL,       ID_PICDCM_BUTTON_NUMBER8  },
    {"9",                  D_COMMON_TITLE_FONT,  QRect(550,  200,  50, 50),        Qt::black,                   Qt::black,                 CONTROL_LABEL,       ID_PICDCM_BUTTON_NUMBER9  },
    {"0",                  D_COMMON_TITLE_FONT,  QRect(450,  250,  50, 50),        Qt::black,                   Qt::black,                 CONTROL_LABEL,       ID_PICDCM_BUTTON_NUMBER0  },
    {QSTR("清除"),                D_COMMON_TITLE_FONT,  QRect(500,  250, 100, 50),        Qt::black,                   Qt::black,                 CONTROL_LABEL,       ID_PICDCM_BUTTON_CLEAR    },
    {"",                         D_FONT(9),            QRect( 60,  500, 200, 50),        Qt::black,                  Qt::black,                 CONTROL_LABEL,        ID_PICDCM_LABEL_SUCCESS       },
    {QSTR("工号列表"),         D_COMMON_TITLE_FONT,  QRect( 60,  380, 260, 50),        Qt::black,                   Qt::black,                 CONTROL_LABEL,       ID_PICDCM_BUTTON_OK       },
    {QSTR("退出"),                D_COMMON_TITLE_FONT,  QRect(400,  380, 120, 50),        Qt::yellow,                   Qt::black,              CONTROL_BUTTON  ,       IDBTN_PICDCM_QUIT        },
    {QSTR("运行里程"),    D_COMMON_TITLE_FONT,   QRect( 20,  110, 230, 50),        Qt::yellow,                  Qt::black,                  CONTROL_LABEL,        ID_IGNORE                 },
    {"0",                          D_COMMON_TITLE_FONT,           QRect(260,  110, 110, 50),        Qt::yellow,                  Qt::black,                 CONTROL_LABEL,         ID_PICDCM_EDIT_ADD},
    {QSTR("牵引能耗"),    D_COMMON_TITLE_FONT,   QRect( 20,  180, 230, 50),        Qt::yellow,                  Qt::black,                  CONTROL_LABEL,        ID_IGNORE                 },
    {"0",                          D_COMMON_TITLE_FONT,           QRect(260,  180, 110, 50),        Qt::yellow,                  Qt::black,                 CONTROL_LABEL,         ID_PICDCM_EDIT_ADD1},
    {QSTR("辅助能耗"),    D_COMMON_TITLE_FONT,   QRect( 20,  250, 230, 50),        Qt::yellow,                  Qt::black,                  CONTROL_LABEL,        ID_IGNORE                 },
    {"0",                          D_COMMON_TITLE_FONT,           QRect(260,  250, 110, 50),        Qt::yellow,                  Qt::black,                 CONTROL_LABEL,         ID_PICDCM_EDIT_ADD2},
    {QSTR("再生能耗"),    D_COMMON_TITLE_FONT,   QRect( 20,  320, 230, 50),        Qt::yellow,                  Qt::black,                  CONTROL_LABEL,        ID_IGNORE                 },
    {"0",                          D_COMMON_TITLE_FONT,           QRect(260,  320, 110, 50),        Qt::yellow,                  Qt::black,                 CONTROL_LABEL,         ID_PICDCM_EDIT_ADD3},

    {QSTR("确认"),                 D_COMMON_TITLE_FONT,  QRect(380,  112,  60, 45),        Qt::black,                   Qt::black,                 CONTROL_LABEL,       ID_PICDCM_BUTTON_ADD  },
};
int g_DriverCodeManageRomLen = sizeof(g_PicRom_DriverCodeManage)/sizeof(ROMDATA);

BEGIN_MESSAGE_MAP(CDriverCodeManagePage,CPage)
        ON_UPDATE_PAGE()
        ON_LBUTTONDOWN(IDBTN_PICDCM_QUIT, OnQuitButtonDown)
        ON_LBUTTONUP(IDBTN_PICDCM_QUIT, OnQuitButtonUp)
//        ON_LBUTTONDOWN(ID_PICDCM_BUTTON_OK, OnDriverListDown)
//        ON_LBUTTONUP(ID_PICDCM_BUTTON_OK, OnDriverListUp)
//        ON_LBUTTONDOWN(ID_PICDCM_EDIT_ADD, OnAddEdit)
//        ON_LBUTTONUP(ID_PICDCM_BUTTON_ADD, OnAddOKUP)
//        ON_LBUTTONUP(ID_PICDCM_BUTTON_NUMBER1, OnNum1Up)
//        ON_LBUTTONUP(ID_PICDCM_BUTTON_NUMBER2, OnNum2Up)
//        ON_LBUTTONUP(ID_PICDCM_BUTTON_NUMBER3, OnNum3Up)
//        ON_LBUTTONUP(ID_PICDCM_BUTTON_NUMBER4, OnNum4Up)
//        ON_LBUTTONUP(ID_PICDCM_BUTTON_NUMBER5, OnNum5Up)
//        ON_LBUTTONUP(ID_PICDCM_BUTTON_NUMBER6, OnNum6Up)
//        ON_LBUTTONUP(ID_PICDCM_BUTTON_NUMBER7, OnNum7Up)
//        ON_LBUTTONUP(ID_PICDCM_BUTTON_NUMBER8, OnNum8Up)
//        ON_LBUTTONUP(ID_PICDCM_BUTTON_NUMBER9, OnNum9Up)
//        ON_LBUTTONUP(ID_PICDCM_BUTTON_NUMBER0, OnNum0Up)
//        ON_LBUTTONUP(ID_PICDCM_BUTTON_CLEAR, OnClearUp)
//        ON_LBUTTONDOWN(ID_PICDCM_BUTTON_NUMBER1, OnNum1Down)
//        ON_LBUTTONDOWN(ID_PICDCM_BUTTON_NUMBER2, OnNum2Down)
//        ON_LBUTTONDOWN(ID_PICDCM_BUTTON_NUMBER3, OnNum3Down)
//        ON_LBUTTONDOWN(ID_PICDCM_BUTTON_NUMBER4, OnNum4Down)
//        ON_LBUTTONDOWN(ID_PICDCM_BUTTON_NUMBER5, OnNum5Down)
//        ON_LBUTTONDOWN(ID_PICDCM_BUTTON_NUMBER6, OnNum6Down)
//        ON_LBUTTONDOWN(ID_PICDCM_BUTTON_NUMBER7, OnNum7Down)
//        ON_LBUTTONDOWN(ID_PICDCM_BUTTON_NUMBER8, OnNum8Down)
//        ON_LBUTTONDOWN(ID_PICDCM_BUTTON_NUMBER9, OnNum9Down)
//        ON_LBUTTONDOWN(ID_PICDCM_BUTTON_NUMBER0, OnNum0Down)
//        ON_LBUTTONDOWN(ID_PICDCM_BUTTON_CLEAR, OnClearDown)
//        ON_LBUTTONDOWN(ID_PICDCM_BUTTON_ADD, OnAddOKDOWN)

END_MESSAGE_MAP()

CDriverCodeManagePage::CDriverCodeManagePage()
{
    m_DriverIndex = 1;
}
void CDriverCodeManagePage::OnInitPage()
{
    QSettings* ConfigIniRead = new QSettings("./system.ini",QSettings::IniFormat,0);
    QString strCode;
    QString strDriverCode;
    int nPos = 0;
    strCode = (ConfigIniRead->value("/DriverCode/Code")).toString();

    while(strCode.length() != 0)
    {
        if(strCode.indexOf(",") != -1)
        {
            nPos = strCode.indexOf(",");
            strDriverCode = strCode.left(nPos);
            m_MapDriverCode.insert(strDriverCode,m_DriverIndex);
            m_DriverIndex++;
            strCode = strCode.mid(nPos);
            if(strCode.length() != 0)
            {
                if(strCode.left(1) == ",")
                {
                    strCode = strCode.mid(1);
                }
            }
        }
        else
        {
            m_MapDriverCode.insert(strCode,m_DriverIndex);
            m_DriverIndex++;
            break;
        }
    }
    delete ConfigIniRead;


    ((CLabel *)GetDlgItem(ID_PICDCM_LABEL_SUCCESS))->SetCtrlText("");

}
void CDriverCodeManagePage::SetBtnDown(int btnId)
{
    CButton *pButton = NULL;
    int nIDArray[] =
    {
        ID_PICDCM_BUTTON_NUMBER1,
        ID_PICDCM_BUTTON_NUMBER2,
        ID_PICDCM_BUTTON_NUMBER3,
        ID_PICDCM_BUTTON_NUMBER4,
        ID_PICDCM_BUTTON_NUMBER5,
        ID_PICDCM_BUTTON_NUMBER6,
        ID_PICDCM_BUTTON_NUMBER7,
        ID_PICDCM_BUTTON_NUMBER8,
        ID_PICDCM_BUTTON_NUMBER9,
        ID_PICDCM_BUTTON_NUMBER0,
        ID_PICDCM_BUTTON_CLEAR
    };

    for(int i = 0; i < 11; i++)
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
void CDriverCodeManagePage::SetBtnUp(int btnId)
{
    CButton *pButton = NULL;
    int nIDArray[] =
    {
        ID_PICDCM_BUTTON_NUMBER1,
        ID_PICDCM_BUTTON_NUMBER2,
        ID_PICDCM_BUTTON_NUMBER3,
        ID_PICDCM_BUTTON_NUMBER4,
        ID_PICDCM_BUTTON_NUMBER5,
        ID_PICDCM_BUTTON_NUMBER6,
        ID_PICDCM_BUTTON_NUMBER7,
        ID_PICDCM_BUTTON_NUMBER8,
        ID_PICDCM_BUTTON_NUMBER9,
        ID_PICDCM_BUTTON_NUMBER0,
        ID_PICDCM_BUTTON_CLEAR
     };

    for(int i = 0; i < 11; i++)
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

void CDriverCodeManagePage::OnQuitButtonDown()
{
    ((CButton*)GetDlgItem(IDBTN_PICDCM_QUIT))->ChangeButtonState(LBUTTON_DOWN);
}
void CDriverCodeManagePage::OnQuitButtonUp()
{
    ((CButton*)GetDlgItem(IDBTN_PICDCM_QUIT))->ChangeButtonState(LBUTTON_UP);
    ChangePage(PAGE_ROM_INDEX_PARAMETERSET);
}
void CDriverCodeManagePage::OnAddOKDOWN()
{
//    ((CButton *)GetDlgItem(ID_PICDCM_BUTTON_ADD))->ChangeButtonState(LBUTTON_DOWN);
//    SetEditSelected(ID_PICDCM_EDIT_ADD, true);
}
void CDriverCodeManagePage::OnDeleteOKDOWN()
{
    ((CButton *)GetDlgItem(ID_PICDCM_BUTTON_DELETE))->ChangeButtonState(LBUTTON_DOWN);
//    SetEditSelected(ID_PICDCM_EDIT_ADD, false);
    SetEditSelected(ID_PICDCM_EDIT_DELETE, true);
}
void CDriverCodeManagePage::OnAddOKUP()
{

}
void CDriverCodeManagePage::OnDeleteOKUP()
{
    QString strInput;
    QSettings* ConfigIniRead = new QSettings("./system.ini",QSettings::IniFormat,0);
    QString strCode;
    QString strTemp;
    int nPos = 0;

    strInput = GetDlgItem(ID_PICDCM_EDIT_DELETE)->GetCtrlText();

    if(strInput == "")
    {
        CWarningDialog warningDlg;
        warningDlg.SetWarningStr(QSTR("工号为空"));
        warningDlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
        warningDlg.exec();
        ((CLabel *)GetDlgItem(ID_PICDCM_LABEL_SUCCESS))->SetCtrlText("");
    }
    else if(strInput.length() != g_loginIDPWDLen)
    {
        CWarningDialog warningDlg;
        warningDlg.SetWarningStr(QSTR("工号长度错误"));
        warningDlg.exec();
        ((CLabel *)GetDlgItem(ID_PICDCM_LABEL_SUCCESS))->SetCtrlText("");
        return;
    }
    else
    {
        if(!m_MapDriverCode.contains(strInput))
        {
            //Temp For Test Wait Waring Dialog
            strInput = QSTR("工号") + strInput + QSTR("不存在");
            CWarningDialog warningDlg;
            warningDlg.SetWarningStr(strInput);
            warningDlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
            warningDlg.exec();
            ((CLabel *)GetDlgItem(ID_PICDCM_LABEL_SUCCESS))->SetCtrlText("");
        }
        else
        {
            m_MapDriverCode.remove(strInput);
            m_DriverIndex--;
            strCode = (ConfigIniRead->value("/DriverCode/Code",20)).toString();
            nPos = strCode.indexOf(strInput);
            if(nPos == 0)
            {
                if(strCode.length() == strInput.length())
                {
                    strCode = "";
                }
                else
                {
                    strCode = strCode.mid(strInput.length() + 1);
                }
            }
            else
            {
                strTemp = strCode.left(nPos - 1);
                strCode = strCode.mid(nPos + strInput.length());
                strCode = strTemp + strCode;
            }
            ConfigIniRead->setValue("/DriverCode/Code",strCode);
            ((CLabel *)GetDlgItem(ID_PICDCM_LABEL_SUCCESS))->SetCtrlText(QSTR("成功删除"));
        }
    }
    delete ConfigIniRead;
}
void CDriverCodeManagePage::OnDriverListDown()
{
    ((CButton*)GetDlgItem(ID_PICDCM_BUTTON_OK))->ChangeButtonState(LBUTTON_DOWN);
}

void CDriverCodeManagePage::OnDriverListUp()
{
    CDriverCodeListPage* pPage = (CDriverCodeListPage*)g_PageVec[PAGE_ROM_INDEX_DRIVERCODELIST];

    /* Add by ChengJian for sort ini driver code 20110129 Begin*/
    QSettings iniSetting("./system.ini",QSettings::IniFormat,0);
    QString driverCodeStr = (iniSetting.value("/DriverCode/Code")).toString();
    QStringList driverCodeCollection = driverCodeStr.split(',');
    QList<int> driverCodeList;
    for(int i = 0; i < driverCodeCollection.count(); i++)
    {
        driverCodeList.push_back(driverCodeCollection[i].toInt());
    }
    sort(driverCodeList.begin(), driverCodeList.end(), less<int>());
    driverCodeStr = "";
    for(int i = 0; i < driverCodeList.count(); i++)
    {
        QString codeStr = QString::number(driverCodeList[i]);
        while(codeStr.length() < 4)
        {
            codeStr.insert(0, "0");
        }

        driverCodeStr += QString::number(driverCodeList[i]) + ((i != driverCodeList.count() - 1) ? "," : "");
    }
    iniSetting.setValue("/DriverCode/Code", driverCodeStr);
    /* Add by ChengJian for sort ini driver code 20110129 End  */

    QSettings* ConfigIniRead = new QSettings("./system.ini",QSettings::IniFormat,0);
    QString strCode;
    QString strDriverCode;
    int nPos = 0;
    strCode = (ConfigIniRead->value("/DriverCode/Code")).toString();
    pPage->m_MapDriverCode.clear();
    pPage->m_DriverIndex = 1;
    while(strCode.length() != 0)
    {
        if(strCode.indexOf(",") != -1)
        {
            nPos = strCode.indexOf(",");
            strDriverCode = strCode.left(nPos);
            pPage->m_MapDriverCode.insert(pPage->m_DriverIndex,strDriverCode);
            pPage->m_DriverIndex++;
            strCode = strCode.mid(nPos);
            if(strCode.length() != 0)
            {
                if(strCode.left(1) == ",")
                {
                    strCode = strCode.mid(1);
                }
            }
        }
        else
        {
            pPage->m_MapDriverCode.insert(pPage->m_DriverIndex,strCode);
            break;
        }
    }
    delete ConfigIniRead;
    pPage->ResetBtnUp();
    ChangePage(PAGE_ROM_INDEX_DRIVERCODELIST);
}

void CDriverCodeManagePage::OnUpdatePage()
{
    GetDlgItem(ID_PICDCM_EDIT_ADD)->SetCtrlText( QString::number(runningDistance,'f',2)+"km" );

    GetDlgItem(ID_PICDCM_EDIT_ADD1)->SetCtrlText( QString::number(TcuEnergyConsumption)+"kWh" );

    GetDlgItem(ID_PICDCM_EDIT_ADD2)->SetCtrlText( QString::number(AcuEnergyConsumption)+"kWh" );

    GetDlgItem(ID_PICDCM_EDIT_ADD3)->SetCtrlText( QString::number(RegEnergyConsumption)+"kWh" );
}

void CDriverCodeManagePage::AddSelectedEditBox(QString str)
{
//    int nLen = 0;
//    if (IsEditSelected(ID_PICDCM_EDIT_ADD)) {
//        nLen = (GetDlgItem(ID_PICDCM_EDIT_ADD)->GetCtrlText()).length();
//        if(nLen < g_loginIDPWDLen)
//        {
//            AddEditStr(ID_PICDCM_EDIT_ADD, str);
//        }
//    }
}
bool CDriverCodeManagePage::IsEditSelected(int EditId)
{
    CEdit *pEdit = NULL;
    pEdit = (CEdit *)GetDlgItem(EditId);
    if (NULL == pEdit)
    {
        return false;
    }

    return pEdit->GetSelected();
}
void CDriverCodeManagePage::AddEditStr(int EditId, QString str)
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
void CDriverCodeManagePage::SetEditSelected(int EditId, bool flg)
{
    CEdit *pEdit = NULL;
    pEdit = (CEdit *)GetDlgItem(EditId);
    if (NULL == pEdit)
    {
        return;
    }
    pEdit->SetSelected(flg);
}

void CDriverCodeManagePage::SetSelectedEditBox(QString str)
{
//    if (IsEditSelected(ID_PICDCM_EDIT_ADD)) {
//        SetEditStr(ID_PICDCM_EDIT_ADD, str);
//    }
}
void CDriverCodeManagePage::SetEditStr(int EditId, QString str)
{
    CEdit *pEdit = NULL;
    pEdit = (CEdit *)GetDlgItem(EditId);
    if (NULL == pEdit)
    {
        return;
    }
    pEdit->SetCtrlText(str);
}



void CDriverCodeManagePage::OnAddEdit()
{

}
void CDriverCodeManagePage::OnDeleteEdit()
{
//    SetEditSelected(ID_PICDCM_EDIT_ADD, false);
//    SetEditSelected(m_DriverIndex, true);
}

void CDriverCodeManagePage::OnNum1Down()
{
    SetBtnDown(ID_PICDCM_BUTTON_NUMBER1);
}
void CDriverCodeManagePage::OnNum2Down()
{
    SetBtnDown(ID_PICDCM_BUTTON_NUMBER2);
}
void CDriverCodeManagePage::OnNum3Down()
{
    SetBtnDown(ID_PICDCM_BUTTON_NUMBER3);
}
void CDriverCodeManagePage::OnNum4Down()
{
    SetBtnDown(ID_PICDCM_BUTTON_NUMBER4);
}
void CDriverCodeManagePage::OnNum5Down()
{
    SetBtnDown(ID_PICDCM_BUTTON_NUMBER5);
}
void CDriverCodeManagePage::OnNum6Down()
{
    SetBtnDown(ID_PICDCM_BUTTON_NUMBER6);
}
void CDriverCodeManagePage::OnNum7Down()
{
    SetBtnDown(ID_PICDCM_BUTTON_NUMBER7);
}
void CDriverCodeManagePage::OnNum8Down()
{
    SetBtnDown(ID_PICDCM_BUTTON_NUMBER8);
}
void CDriverCodeManagePage::OnNum9Down()
{
    SetBtnDown(ID_PICDCM_BUTTON_NUMBER9);
}
void CDriverCodeManagePage::OnNum0Down()
{
    SetBtnDown(ID_PICDCM_BUTTON_NUMBER0);
}
void CDriverCodeManagePage::OnClearDown()
{
    SetBtnDown(ID_PICDCM_BUTTON_CLEAR);
}
void CDriverCodeManagePage::OnNum1Up()
{
    SetBtnUp(ID_PICDCM_BUTTON_NUMBER1);
    AddSelectedEditBox("1");
}
void CDriverCodeManagePage::OnNum2Up()
{
    SetBtnUp(ID_PICDCM_BUTTON_NUMBER2);
    AddSelectedEditBox("2");
}
void CDriverCodeManagePage::OnNum3Up()
{
    SetBtnUp(ID_PICDCM_BUTTON_NUMBER3);
    AddSelectedEditBox("3");
}
void CDriverCodeManagePage::OnNum4Up()
{
    SetBtnUp(ID_PICDCM_BUTTON_NUMBER4);
    AddSelectedEditBox("4");
}
void CDriverCodeManagePage::OnNum5Up()
{
    SetBtnUp(ID_PICDCM_BUTTON_NUMBER5);
    AddSelectedEditBox("5");
}
void CDriverCodeManagePage::OnNum6Up()
{
    SetBtnUp(ID_PICDCM_BUTTON_NUMBER6);
    AddSelectedEditBox("6");
}
void CDriverCodeManagePage::OnNum7Up()
{
    SetBtnUp(ID_PICDCM_BUTTON_NUMBER7);
    AddSelectedEditBox("7");
}
void CDriverCodeManagePage::OnNum8Up()
{
    SetBtnUp(ID_PICDCM_BUTTON_NUMBER8);
    AddSelectedEditBox("8");
}
void CDriverCodeManagePage::OnNum9Up()
{
    SetBtnUp(ID_PICDCM_BUTTON_NUMBER9);
    AddSelectedEditBox("9");
}
void CDriverCodeManagePage::OnNum0Up()
{
    SetBtnUp(ID_PICDCM_BUTTON_NUMBER0);
    AddSelectedEditBox("0");
}
void CDriverCodeManagePage::OnClearUp()
{
    SetBtnUp(ID_PICDCM_BUTTON_CLEAR);
    SetSelectedEditBox("");
    ((CLabel *)GetDlgItem(ID_PICDCM_LABEL_SUCCESS))->SetCtrlText("");
}

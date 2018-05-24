#include "ccarcodesetpage.h"
#include "psettingdatabase.h"
ROMDATA g_PicRom_CarCodeSet[] =
{
    /*string               font                  rc                          foreground color              background color                control type                   ID           */
    {QSTR("车号设定"),   D_FONT(13),           QRect(  0,  0,640, 60),           Qt::black,                   Qt::yellow,                 CONTROL_LABEL,        ID_IGNORE                 },
    {QSTR("确认"),          D_COMMON_TITLE_FONT,  QRect(160,  380, 120, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICCCS_BUTTON_OK       },
    {QSTR("退出"),          D_COMMON_TITLE_FONT,  QRect(360,  380, 120, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       IDBTN_PICCCS_QUIT       },

    {"1",                  D_COMMON_TITLE_FONT,  QRect(450,  100,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICCCS_BUTTON_NUMBER1  },
    {"2",                  D_COMMON_TITLE_FONT,  QRect(500,  100,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICCCS_BUTTON_NUMBER2  },
    {"3",                  D_COMMON_TITLE_FONT,  QRect(550,  100,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICCCS_BUTTON_NUMBER3  },
    {"4",                  D_COMMON_TITLE_FONT,  QRect(450,  150,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICCCS_BUTTON_NUMBER4  },
    {"5",                  D_COMMON_TITLE_FONT,  QRect(500,  150,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICCCS_BUTTON_NUMBER5  },
    {"6",                  D_COMMON_TITLE_FONT,  QRect(550,  150,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICCCS_BUTTON_NUMBER6  },
    {"7",                  D_COMMON_TITLE_FONT,  QRect(450,  200,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICCCS_BUTTON_NUMBER7  },
    {"8",                  D_COMMON_TITLE_FONT,  QRect(500,  200,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICCCS_BUTTON_NUMBER8  },
    {"9",                  D_COMMON_TITLE_FONT,  QRect(550,  200,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICCCS_BUTTON_NUMBER9  },
    {"0",                  D_COMMON_TITLE_FONT,  QRect(450,  250,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICCCS_BUTTON_NUMBER0  },
    {QSTR("清除"),          D_COMMON_TITLE_FONT,  QRect(500,  250, 100, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICCCS_BUTTON_CLEAR    },

    {"000",                D_FONT(18),           QRect(100,  120, 300,120),        Qt::yellow,                  Qt::black,                 CONTROL_EDIT,          ID_PICCCS_EDIT_CODE       },
    {"",                   D_COMMON_TITLE_FONT,  QRect(100,   80, 300, 30),        Qt::yellow,                  Qt::black,                 CONTROL_LABEL,         ID_PICCCS_LABEL_CURRENTCARCODE },

};
int g_CarCodeSetRomLen = sizeof(g_PicRom_CarCodeSet)/sizeof(ROMDATA);

BEGIN_MESSAGE_MAP(CCarCodeSetPage,CPage)
        ON_UPDATE_PAGE()
        ON_LBUTTONDOWN(IDBTN_PICCCS_QUIT, OnQuitButtonDown)
        ON_LBUTTONUP(IDBTN_PICCCS_QUIT, OnQuitButtonUp)
        ON_LBUTTONDOWN(ID_PICCCS_BUTTON_OK, OnOKDown)
        ON_LBUTTONUP(ID_PICCCS_BUTTON_OK, OnOKUp)
        ON_LBUTTONUP(ID_PICCCS_BUTTON_NUMBER1, OnNum1Up)
        ON_LBUTTONUP(ID_PICCCS_BUTTON_NUMBER2, OnNum2Up)
        ON_LBUTTONUP(ID_PICCCS_BUTTON_NUMBER3, OnNum3Up)
        ON_LBUTTONUP(ID_PICCCS_BUTTON_NUMBER4, OnNum4Up)
        ON_LBUTTONUP(ID_PICCCS_BUTTON_NUMBER5, OnNum5Up)
        ON_LBUTTONUP(ID_PICCCS_BUTTON_NUMBER6, OnNum6Up)
        ON_LBUTTONUP(ID_PICCCS_BUTTON_NUMBER7, OnNum7Up)
        ON_LBUTTONUP(ID_PICCCS_BUTTON_NUMBER8, OnNum8Up)
        ON_LBUTTONUP(ID_PICCCS_BUTTON_NUMBER9, OnNum9Up)
        ON_LBUTTONUP(ID_PICCCS_BUTTON_NUMBER0, OnNum0Up)
        ON_LBUTTONUP(ID_PICCCS_BUTTON_CLEAR, OnClearUp)
        ON_LBUTTONDOWN(ID_PICCCS_BUTTON_NUMBER1, OnNum1Down)
        ON_LBUTTONDOWN(ID_PICCCS_BUTTON_NUMBER2, OnNum2Down)
        ON_LBUTTONDOWN(ID_PICCCS_BUTTON_NUMBER3, OnNum3Down)
        ON_LBUTTONDOWN(ID_PICCCS_BUTTON_NUMBER4, OnNum4Down)
        ON_LBUTTONDOWN(ID_PICCCS_BUTTON_NUMBER5, OnNum5Down)
        ON_LBUTTONDOWN(ID_PICCCS_BUTTON_NUMBER6, OnNum6Down)
        ON_LBUTTONDOWN(ID_PICCCS_BUTTON_NUMBER7, OnNum7Down)
        ON_LBUTTONDOWN(ID_PICCCS_BUTTON_NUMBER8, OnNum8Down)
        ON_LBUTTONDOWN(ID_PICCCS_BUTTON_NUMBER9, OnNum9Down)
        ON_LBUTTONDOWN(ID_PICCCS_BUTTON_NUMBER0, OnNum0Down)
        ON_LBUTTONDOWN(ID_PICCCS_BUTTON_CLEAR, OnClearDown)

END_MESSAGE_MAP()

CCarCodeSetPage::CCarCodeSetPage()
{
}

void CCarCodeSetPage::OnInitPage()
{
    SetEditSelected(ID_PICCCS_EDIT_CODE, true);
    GetDlgItem(ID_PICCCS_EDIT_CODE)->SetCtrlText("");
    ((CLabel *)GetDlgItem(ID_PICCCS_LABEL_CURRENTCARCODE))->SetAlignment(Qt::AlignLeft);
}
void CCarCodeSetPage::OnQuitButtonDown()
{
    ((CButton*)GetDlgItem(IDBTN_PICCCS_QUIT))->ChangeButtonState(LBUTTON_DOWN);
}

void CCarCodeSetPage::OnQuitButtonUp()
{
    ((CButton*)GetDlgItem(IDBTN_PICCCS_QUIT))->ChangeButtonState(LBUTTON_UP);
    ChangePage(PAGE_ROM_INDEX_PARAMETERSET);
}

void CCarCodeSetPage::AddSelectedEditBox(QString str)
{
    if (IsEditSelected(ID_PICCCS_EDIT_CODE)) {
        AddEditStr(ID_PICCCS_EDIT_CODE, str);
    }
}
bool CCarCodeSetPage::IsEditSelected(int EditId)
{
    CEdit *pEdit = NULL;
    pEdit = (CEdit *)GetDlgItem(EditId);
    if (NULL == pEdit)
    {
        return false;
    }

    return pEdit->GetSelected();
}
void CCarCodeSetPage::AddEditStr(int EditId, QString str)
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
void CCarCodeSetPage::SetEditSelected(int EditId, bool flg)
{
    CEdit *pEdit = NULL;
    pEdit = (CEdit *)GetDlgItem(EditId);
    if (NULL == pEdit)
    {
        return;
    }
    pEdit->SetSelected(flg);
}

void CCarCodeSetPage::SetSelectedEditBox(QString str)
{
    if (IsEditSelected(ID_PICCCS_EDIT_CODE)) {
        SetEditStr(ID_PICCCS_EDIT_CODE, str);
    }
}
void CCarCodeSetPage::SetEditStr(int EditId, QString str)
{
    CEdit *pEdit = NULL;
    pEdit = (CEdit *)GetDlgItem(EditId);
    if (NULL == pEdit)
    {
        return;
    }
    pEdit->SetCtrlText(str);
}
void CCarCodeSetPage::SetBtnDown(int btnId)
{
    CButton *pButton = NULL;
    int nIDArray[] =
    {
        ID_PICCCS_BUTTON_NUMBER1,
        ID_PICCCS_BUTTON_NUMBER2,
        ID_PICCCS_BUTTON_NUMBER3,
        ID_PICCCS_BUTTON_NUMBER4,
        ID_PICCCS_BUTTON_NUMBER5,
        ID_PICCCS_BUTTON_NUMBER6,
        ID_PICCCS_BUTTON_NUMBER7,
        ID_PICCCS_BUTTON_NUMBER8,
        ID_PICCCS_BUTTON_NUMBER9,
        ID_PICCCS_BUTTON_NUMBER0,
        ID_PICCCS_BUTTON_CLEAR
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
void CCarCodeSetPage::SetBtnUp(int btnId)
{
    CButton *pButton = NULL;
    int nIDArray[] =
    {
        ID_PICCCS_BUTTON_NUMBER1,
        ID_PICCCS_BUTTON_NUMBER2,
        ID_PICCCS_BUTTON_NUMBER3,
        ID_PICCCS_BUTTON_NUMBER4,
        ID_PICCCS_BUTTON_NUMBER5,
        ID_PICCCS_BUTTON_NUMBER6,
        ID_PICCCS_BUTTON_NUMBER7,
        ID_PICCCS_BUTTON_NUMBER8,
        ID_PICCCS_BUTTON_NUMBER9,
        ID_PICCCS_BUTTON_NUMBER0,
        ID_PICCCS_BUTTON_CLEAR
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
/*
car code length is 2, range is 001-999;
car code value is stored in system.ini
*/
void CCarCodeSetPage::OnOKUp()
{
    QString strData = GetDlgItem(ID_PICCCS_EDIT_CODE)->GetCtrlText();
    if(strData.length() == CARCODELENGTH)
    {
        // Set Global Parameter
        if( strData.toInt() == 0 )
        {
            CWarningDialog warningDlg;
            warningDlg.SetWarningStr(QSTR("车号范围 001 ~ 999！"));
            warningDlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
            warningDlg.exec();
            OnInitPage();
            return;
        }

        setCarCode(strData);
        PSettingDataBase* settingDataBase = PSettingDataBase::getPSettingDataBaseInstance();
        settingDataBase->setLocoNum(strData.toInt());
        settingDataBase->saveFile();

        ChangePage(PAGE_ROM_INDEX_PARAMETERSET);
    }
    else
    {
        CWarningDialog warningDlg;
        warningDlg.SetWarningStr(QSTR("车号需为") + QString::number(CARCODELENGTH) + QSTR("位！"));
        warningDlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
        warningDlg.exec();
        OnInitPage();
    }
}

void CCarCodeSetPage::OnOKDown()
{
    ((CButton*)GetDlgItem(ID_PICCCS_BUTTON_OK))->ChangeButtonState(LBUTTON_DOWN);
}
void CCarCodeSetPage::OnUpdatePage()
{
    QString str = "";
    str.sprintf("%03d", g_car1IDUint16);
    ((CLabel *)GetDlgItem(ID_PICCCS_LABEL_CURRENTCARCODE))->SetCtrlText(QSTR("当前车号:") + str);
}

void CCarCodeSetPage::OnNum1Down()
{
    SetBtnDown(ID_PICCCS_BUTTON_NUMBER1);
}
void CCarCodeSetPage::OnNum2Down()
{
    SetBtnDown(ID_PICCCS_BUTTON_NUMBER2);
}
void CCarCodeSetPage::OnNum3Down()
{
    SetBtnDown(ID_PICCCS_BUTTON_NUMBER3);
}
void CCarCodeSetPage::OnNum4Down()
{
    SetBtnDown(ID_PICCCS_BUTTON_NUMBER4);
}
void CCarCodeSetPage::OnNum5Down()
{
    SetBtnDown(ID_PICCCS_BUTTON_NUMBER5);
}
void CCarCodeSetPage::OnNum6Down()
{
    SetBtnDown(ID_PICCCS_BUTTON_NUMBER6);
}
void CCarCodeSetPage::OnNum7Down()
{
    SetBtnDown(ID_PICCCS_BUTTON_NUMBER7);
}
void CCarCodeSetPage::OnNum8Down()
{
    SetBtnDown(ID_PICCCS_BUTTON_NUMBER8);
}
void CCarCodeSetPage::OnNum9Down()
{
    SetBtnDown(ID_PICCCS_BUTTON_NUMBER9);
}
void CCarCodeSetPage::OnNum0Down()
{
    SetBtnDown(ID_PICCCS_BUTTON_NUMBER0);
}
void CCarCodeSetPage::OnClearDown()
{
    SetBtnDown(ID_PICCCS_BUTTON_CLEAR);
}
void CCarCodeSetPage::OnNum1Up()
{

    SetBtnUp(ID_PICCCS_BUTTON_NUMBER1);

    QString strLength;

    strLength = GetDlgItem(ID_PICCCS_EDIT_CODE)->GetCtrlText();
    if(strLength.length() < CARCODELENGTH)
    {
        AddSelectedEditBox("1");
    }
    else
    {
        CWarningDialog warningDlg;
        warningDlg.SetWarningStr(QSTR("车号超出范围"));
        warningDlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
        warningDlg.exec();
    }
}
void CCarCodeSetPage::OnNum2Up()
{
    SetBtnUp(ID_PICCCS_BUTTON_NUMBER2);
    QString strLength;

    strLength = GetDlgItem(ID_PICCCS_EDIT_CODE)->GetCtrlText();
    if(strLength.length() < CARCODELENGTH)
    {
        AddSelectedEditBox("2");
    }
    else
    {
        CWarningDialog warningDlg;
        warningDlg.SetWarningStr(QSTR("车号超出范围"));
        warningDlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
        warningDlg.exec();
    }
}
void CCarCodeSetPage::OnNum3Up()
{
    SetBtnUp(ID_PICCCS_BUTTON_NUMBER3);
    QString strLength;

    strLength = GetDlgItem(ID_PICCCS_EDIT_CODE)->GetCtrlText();
    if(strLength.length() < CARCODELENGTH)
    {
        AddSelectedEditBox("3");
    }
    else
    {
        CWarningDialog warningDlg;
        warningDlg.SetWarningStr(QSTR("车号超出范围"));
        warningDlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
        warningDlg.exec();
    }
}
void CCarCodeSetPage::OnNum4Up()
{
    SetBtnUp(ID_PICCCS_BUTTON_NUMBER4);
    QString strLength;

    strLength = GetDlgItem(ID_PICCCS_EDIT_CODE)->GetCtrlText();
    if(strLength.length() < CARCODELENGTH)
    {
        AddSelectedEditBox("4");
    }
    else
    {
        CWarningDialog warningDlg;
        warningDlg.SetWarningStr(QSTR("车号超出范围"));
        warningDlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
        warningDlg.exec();
    }
}
void CCarCodeSetPage::OnNum5Up()
{
    SetBtnUp(ID_PICCCS_BUTTON_NUMBER5);
    QString strLength;

    strLength = GetDlgItem(ID_PICCCS_EDIT_CODE)->GetCtrlText();
    if(strLength.length() < CARCODELENGTH)
    {
        AddSelectedEditBox("5");
    }
    else
    {
        CWarningDialog warningDlg;
        warningDlg.SetWarningStr(QSTR("车号超出范围"));
        warningDlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
        warningDlg.exec();
    }
}

void CCarCodeSetPage::OnNum6Up()
{
    SetBtnUp(ID_PICCCS_BUTTON_NUMBER6);
    QString strLength;

    strLength = GetDlgItem(ID_PICCCS_EDIT_CODE)->GetCtrlText();
    if(strLength.length() < CARCODELENGTH)
    {
        AddSelectedEditBox("6");
    }
    else
    {
        CWarningDialog warningDlg;
        warningDlg.SetWarningStr(QSTR("车号超出范围"));
        warningDlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
        warningDlg.exec();
    }
}

void CCarCodeSetPage::OnNum7Up()
{
    SetBtnUp(ID_PICCCS_BUTTON_NUMBER7);
    QString strLength;

    strLength = GetDlgItem(ID_PICCCS_EDIT_CODE)->GetCtrlText();
    if(strLength.length() < CARCODELENGTH)
    {
        AddSelectedEditBox("7");
    }
    else
    {
        CWarningDialog warningDlg;
        warningDlg.SetWarningStr(QSTR("车号超出范围"));
        warningDlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
        warningDlg.exec();
    }
}

void CCarCodeSetPage::OnNum8Up()
{
    SetBtnUp(ID_PICCCS_BUTTON_NUMBER8);
    QString strLength;

    strLength = GetDlgItem(ID_PICCCS_EDIT_CODE)->GetCtrlText();
    if(strLength.length() < CARCODELENGTH)
    {
        AddSelectedEditBox("8");
    }
    else
    {
        CWarningDialog warningDlg;
        warningDlg.SetWarningStr(QSTR("车号超出范围"));
        warningDlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
        warningDlg.exec();
    }
}

void CCarCodeSetPage::OnNum9Up()
{
    SetBtnUp(ID_PICCCS_BUTTON_NUMBER9);
    QString strLength;

    strLength = GetDlgItem(ID_PICCCS_EDIT_CODE)->GetCtrlText();
    if(strLength.length() < CARCODELENGTH)
    {
        AddSelectedEditBox("9");
    }
    else
    {
        CWarningDialog warningDlg;
        warningDlg.SetWarningStr(QSTR("车号超出范围"));
        warningDlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
        warningDlg.exec();
    }
}

void CCarCodeSetPage::OnNum0Up()
{
    SetBtnUp(ID_PICCCS_BUTTON_NUMBER0);
    QString strLength;

    strLength = GetDlgItem(ID_PICCCS_EDIT_CODE)->GetCtrlText();
    if(strLength.length() < CARCODELENGTH)
    {
        AddSelectedEditBox("0");
    }
    else
    {
        CWarningDialog warningDlg;
        warningDlg.SetWarningStr(QSTR("车号超出范围"));
        warningDlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
        warningDlg.exec();
    }

}
void CCarCodeSetPage::OnClearUp()
{
    SetBtnUp(ID_PICCCS_BUTTON_CLEAR);
    SetSelectedEditBox("");
}
void CCarCodeSetPage::setCarCode(  QString const data )
{
    QString path = qApp->applicationDirPath();
    QString fileName = path + "/system.ini";
    QFile inifile( fileName );

    if(data.length() == CARCODELENGTH)
    {
        g_Vehicle_CodeSet_enable = true;
        g_car1IDUint16 = data.toUInt();
        g_car1CodeStr.sprintf("%03d", g_car1IDUint16);
        g_ParamSet_CarCode_Uint = g_car1IDUint16;// 20100828 zlb add
        if( inifile.exists( fileName ) ){
            if( inifile.setPermissions( QFile::WriteOther | QFile::ReadOther ) ){
                QSettings *settings = new QSettings( fileName, QSettings::IniFormat );
                settings->setValue( "CARCODE", data );
                delete settings;
            } //end if
        } // end if
    }// end if
}

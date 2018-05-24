#include <QMap>
#include <QSettings>
#include <QMessageBox>
#include <qdebug.h>

#include "csysloginpage.h"

ROMDATA g_PicRom_Login[] =
{
    /*string                   font                      rc                  foreground color              background color                control type                   ID           */
  {QSTR("密码管理"),            D_FONT(13),           QRect(0,0,640,60),           Qt::black,                      Qt::yellow,                 CONTROL_LABEL,      ID_PICLOGIN_LABEL_TITLE    },
  {""  ,                       D_DEFAULT_FONT,       QRect(50,120,540,  2),      Qt::yellow,                     Qt::transparent,            CONTROL_LINE,       ID_IGNORE    },
  {""  ,                       D_DEFAULT_FONT,       QRect(50,440,540,  2),      Qt::yellow,                     Qt::transparent,            CONTROL_LINE,       ID_IGNORE    },
  {""  ,                       D_DEFAULT_FONT,       QRect(50,120,  2,320),      Qt::yellow,                     Qt::transparent,            CONTROL_LINE,       ID_IGNORE    },
  {""  ,                       D_DEFAULT_FONT,       QRect(590,120,  2,322),      Qt::yellow,                     Qt::transparent,            CONTROL_LINE,       ID_IGNORE    },
  {"0",                        D_COMMON_TITLE_FONT,  QRect(190,250, 50, 50),      Qt::yellow,                     Qt::black,                  CONTROL_BUTTON,     ID_PICLOGIN_BUTTON_0 },
  {"1",                        D_COMMON_TITLE_FONT,  QRect(243,250, 50, 50),      Qt::yellow,                     Qt::black,                  CONTROL_BUTTON,     ID_PICLOGIN_BUTTON_1 },
  {"2",                        D_COMMON_TITLE_FONT,  QRect(296,250, 50, 50),      Qt::yellow,                     Qt::black,                  CONTROL_BUTTON,     ID_PICLOGIN_BUTTON_2 },
  {"3",                        D_COMMON_TITLE_FONT,  QRect(349,250, 50, 50),      Qt::yellow,                     Qt::black,                  CONTROL_BUTTON,     ID_PICLOGIN_BUTTON_3 },
  {"4",                        D_COMMON_TITLE_FONT,  QRect(402,250, 50, 50),      Qt::yellow,                     Qt::black,                  CONTROL_BUTTON,     ID_PICLOGIN_BUTTON_4 },
  {"5",                        D_COMMON_TITLE_FONT,  QRect(190,304, 50, 50),      Qt::yellow,                     Qt::black,                  CONTROL_BUTTON,     ID_PICLOGIN_BUTTON_5 },
  {"6",                        D_COMMON_TITLE_FONT,  QRect(243,304, 50, 50),      Qt::yellow,                     Qt::black,                  CONTROL_BUTTON,     ID_PICLOGIN_BUTTON_6 },
  {"7",                        D_COMMON_TITLE_FONT,  QRect(296,304, 50, 50),      Qt::yellow,                     Qt::black,                  CONTROL_BUTTON,     ID_PICLOGIN_BUTTON_7 },
  {"8",                        D_COMMON_TITLE_FONT,  QRect(349,304, 50, 50),      Qt::yellow,                     Qt::black,                  CONTROL_BUTTON,     ID_PICLOGIN_BUTTON_8 },
  {"9",                        D_COMMON_TITLE_FONT,  QRect(402,304, 50, 50),      Qt::yellow,                     Qt::black,                  CONTROL_BUTTON,     ID_PICLOGIN_BUTTON_9 },
  {QSTR("4位权限密码管理"),               D_DEFAULT_FONT,       QRect(50, 92, 160, 28),      Qt::yellow,                     Qt::black,                  CONTROL_BUTTON,     ID_PICLOGIN_BUTTON_DRIVER  },
  {QSTR("6位权限密码管理"),            D_DEFAULT_FONT,       QRect(210, 92,160, 28),      Qt::yellow,                     Qt::black,                  CONTROL_BUTTON,     ID_PICLOGIN_BUTTON_MAINTAINER  },
  {QSTR("6位确认密码管理"),            D_DEFAULT_FONT,       QRect(370, 92,160, 28),      Qt::yellow,                     Qt::black,                  CONTROL_BUTTON,     ID_PICLOGIN_BUTTON_PINNUMBER  },
  {QSTR("OK"),                D_COMMON_TITLE_FONT,  QRect(180,380,120, 35),      Qt::yellow,                     Qt::black,                  CONTROL_BUTTON,     ID_PICLOGIN_BUTTON_OK  },
  {QSTR("Clear"),                D_COMMON_TITLE_FONT,  QRect(342,380,120, 35),      Qt::yellow,                     Qt::black,                  CONTROL_BUTTON,     ID_PICLOGIN_BUTTON_CLEAR },
};
int g_LoginRomLen = sizeof(g_PicRom_Login)/sizeof(ROMDATA);

BEGIN_MESSAGE_MAP(CSysLoginPage,CPage)
    ON_SHOWPAGE()
    ON_LBUTTONDOWN(ID_PICLOGIN_BUTTON_OK,OnOkDown)
    ON_LBUTTONUP(ID_PICLOGIN_BUTTON_OK,OnOkUp)
    ON_LBUTTONDOWN(ID_PICLOGIN_BUTTON_DRIVER,OnDriver)
    ON_LBUTTONDOWN(ID_PICLOGIN_BUTTON_MAINTAINER,OnMaintainer)
     ON_LBUTTONDOWN(ID_PICLOGIN_BUTTON_PINNUMBER,OnPinNumber)

    ON_LBUTTONDOWN(ID_PICLOGIN_BUTTON_0,OnNum0Down)
    ON_LBUTTONDOWN(ID_PICLOGIN_BUTTON_1,OnNum1Down)
    ON_LBUTTONDOWN(ID_PICLOGIN_BUTTON_2,OnNum2Down)
    ON_LBUTTONDOWN(ID_PICLOGIN_BUTTON_3,OnNum3Down)
    ON_LBUTTONDOWN(ID_PICLOGIN_BUTTON_4,OnNum4Down)
    ON_LBUTTONDOWN(ID_PICLOGIN_BUTTON_5,OnNum5Down)
    ON_LBUTTONDOWN(ID_PICLOGIN_BUTTON_6,OnNum6Down)
    ON_LBUTTONDOWN(ID_PICLOGIN_BUTTON_7,OnNum7Down)
    ON_LBUTTONDOWN(ID_PICLOGIN_BUTTON_8,OnNum8Down)
    ON_LBUTTONDOWN(ID_PICLOGIN_BUTTON_9,OnNum9Down)
    ON_LBUTTONDOWN(ID_PICLOGIN_BUTTON_CLEAR,OnClearDown)
    ON_LBUTTONUP(ID_PICLOGIN_BUTTON_0,OnNum0Up)
    ON_LBUTTONUP(ID_PICLOGIN_BUTTON_1,OnNum1Up)
    ON_LBUTTONUP(ID_PICLOGIN_BUTTON_2,OnNum2Up)
    ON_LBUTTONUP(ID_PICLOGIN_BUTTON_3,OnNum3Up)
    ON_LBUTTONUP(ID_PICLOGIN_BUTTON_4,OnNum4Up)
    ON_LBUTTONUP(ID_PICLOGIN_BUTTON_5,OnNum5Up)
    ON_LBUTTONUP(ID_PICLOGIN_BUTTON_6,OnNum6Up)
    ON_LBUTTONUP(ID_PICLOGIN_BUTTON_7,OnNum7Up)
    ON_LBUTTONUP(ID_PICLOGIN_BUTTON_8,OnNum8Up)
    ON_LBUTTONUP(ID_PICLOGIN_BUTTON_9,OnNum9Up)
    ON_LBUTTONUP(ID_PICLOGIN_BUTTON_CLEAR,OnClearUp)

    ON_LBUTTONDOWN(ID_PICLOGIN_EDIT_DRIVERCODE, OnDriverCodeEdit)
    ON_LBUTTONDOWN(ID_PICLOGIN_EDIT_ID, OnIDEdit)
    ON_LBUTTONDOWN(ID_PICLOGIN_EDIT_PWD, OnPWDEdit)

END_MESSAGE_MAP()

CSysLoginPage::CSysLoginPage()
{
    m_DriverIndex = 1;
}

void CSysLoginPage::OnInitPage()
{
    ((CButton *)GetDlgItem(ID_PICLOGIN_BUTTON_DRIVER))->ChangeButtonState(LBUTTON_DOWN);
    QString str = QSTR("4位权限密码:");
    this->AddControl(str, QRect(150+35,150, 110, 35), Qt::yellow, D_DEFAULT_FONT, Qt::black, ID_PICLOGIN_LABEL_DRIVERCODE, CONTROL_LABEL);
    this->AddControl(QString(""), QRect(265+35,155, 120, 25), Qt::yellow, D_DEFAULT_FONT, Qt::black, ID_PICLOGIN_EDIT_DRIVERCODE, CONTROL_EDIT);
}

void CSysLoginPage::OnShowPage()
{
    QSettings* ConfigIniRead = new QSettings("./system.ini",QSettings::IniFormat,0);
    QString strCode;
    QString strId;
    QString strPwd;
    QString strIdSingle;
    QString strPwdSingle;
    QString strDriverCode;
    int nPos = 0;
    m_MapDriverCode.clear();
    m_MapMaintainer.clear();

    strCode = (ConfigIniRead->value("/DriverCode/Code",20)).toString();

    while(strCode.length() != 0)
    {
        if(strCode.indexOf(",") != -1)
        {
            nPos = strCode.indexOf(",");
            strDriverCode = strCode.left(nPos);
            m_MapDriverCode.insert(m_DriverIndex,strDriverCode);
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
            m_MapDriverCode.insert(m_DriverIndex,strCode);
            break;// the last code
        }
    }

    strId = (ConfigIniRead->value("/Maintainer/Id")).toString();
    strPwd = (ConfigIniRead->value("/Maintainer/Pwd")).toString();

    while(strId.length() != 0)
    {
        if(strPwd.length() != 0)
        {
            if( (strId.indexOf(",") != -1) && (strPwd.indexOf(",") != -1) )
            {
                nPos = strId.indexOf(",");
                strIdSingle = strId.left(nPos);
                strId = strId.mid(nPos);
                if(strPwd.indexOf(",") != -1)
                {
                    nPos = strPwd.indexOf(",");
                    strPwdSingle = strPwd.left(nPos);
                    strPwd = strPwd.mid(nPos);
                    if(strPwd.length() != 0)
                    {
                        if(strPwd.left(1) == ",")
                        {
                            strPwd = strPwd.mid(1);
                        }
                    }
                    else
                    {
                        //Set Initila Password
                        strPwdSingle = "0000";
                    }
                }

                m_MapMaintainer.insert(strIdSingle,strPwdSingle);
                if(strId.length() != 0)
                {
                    if(strId.left(1) == ",")
                    {
                        strId = strId.mid(1);
                    }
                }
            }
            else
            {
                m_MapMaintainer.insert(strId,strPwd);
                break;// the last code
            }
        }
    }

    delete ConfigIniRead;
}

void CSysLoginPage::OnOkDown()
{
    ((CButton *)GetDlgItem(ID_PICLOGIN_BUTTON_OK))->ChangeButtonState(LBUTTON_DOWN);
}

void CSysLoginPage::OnOkUp()
{
    QString strDriverCodeInput;
    QString strPassword;
    bool bRet = false;
    ((CButton *)GetDlgItem(ID_PICLOGIN_BUTTON_OK))->ChangeButtonState(LBUTTON_UP);

    if (ENUM_LOGIN_TYPE_DRIVER == g_login_type) //driver
    {
        strDriverCodeInput = GetDlgItem(ID_PICLOGIN_EDIT_DRIVERCODE)->GetCtrlText();
        if(strDriverCodeInput == "")
        {
            CWarningDialog warningDlg;
            warningDlg.SetWarningStr(QSTR("Code can't be blank!"));
            warningDlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
            warningDlg.exec();
            g_loginID = "0";
            return;
        }
        for(int i = 0; i < m_MapDriverCode.count(); i++)
        {
            if(m_MapDriverCode[i] == strDriverCodeInput)
            {
                bRet = true;
                break;
            }
        }

        if(bRet)
        {
            g_loginID = strDriverCodeInput;
            ChangePage(PAGE_ROM_INDEX_MAIN);
            CPage::ChangeLay1ButtonState(IDBTN_NAVIBAR_MAIN);
        }
        else
        {
            CWarningDialog warningDlg;
            warningDlg.SetWarningStr(QSTR("Code Error!\r\nPlease Input Again！"));
            warningDlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
            warningDlg.exec();
            g_loginID = "0";
        }
    }
    else // maintainer
    {
        strDriverCodeInput = GetDlgItem(ID_PICLOGIN_EDIT_ID)->GetCtrlText();
        strPassword = GetDlgItem(ID_PICLOGIN_EDIT_PWD)->GetCtrlText();
        if(strDriverCodeInput == "" || strPassword == "")
        {
            CWarningDialog warningDlg;
            warningDlg.SetWarningStr(QSTR("Code or Password can't be blank!"));
            warningDlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
            warningDlg.exec();
            g_loginID = "0";
            return;
        }
        if(strDriverCodeInput == "5379" && strPassword == "0241")
        {
            g_loginID = "0";
            ChangePage(PAGE_ROM_INDEX_MAIN);
            CPage::ChangeLay1ButtonState(IDBTN_NAVIBAR_MAIN);
            return;
        }
        if(m_MapMaintainer.contains(strDriverCodeInput))
        {
            if(m_MapMaintainer.value(strDriverCodeInput) == strPassword)
            {
                g_loginID = strDriverCodeInput;
                ChangePage(PAGE_ROM_INDEX_MAIN);
                CPage::ChangeLay1ButtonState(IDBTN_NAVIBAR_MAIN);
            }
            else
            {
                CWarningDialog warningDlg;
                warningDlg.SetWarningStr(QSTR("Code or Password Error!\r\nPlease Input Again！"));
                warningDlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
                warningDlg.exec();
                g_loginID = "0";
             }
        }
        else
        {
            CWarningDialog warningDlg;
            warningDlg.SetWarningStr(QSTR("Code or Password Error!\r\nPlease Input Again！"));
            warningDlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
            warningDlg.exec();
            g_loginID = "0";
        }
    }
}

void CSysLoginPage::OnDriver()
{
    ((CButton *)GetDlgItem(ID_PICLOGIN_BUTTON_DRIVER))->ChangeButtonState(LBUTTON_DOWN);
    ((CButton *)GetDlgItem(ID_PICLOGIN_BUTTON_MAINTAINER))->ChangeButtonState(LBUTTON_UP);
    ((CButton *)GetDlgItem(ID_PICLOGIN_BUTTON_PINNUMBER))->ChangeButtonState(LBUTTON_UP);


//    if (ENUM_LOGIN_TYPE_DRIVER == g_login_type)
//    {
//        return;
//    }
//    else
//    {
//        g_login_type = ENUM_LOGIN_TYPE_DRIVER;
//    }
    QString str = QSTR("4位权限密码：");
    this->RemoveControl(ID_PICLOGIN_LABEL_ID);
    this->RemoveControl(ID_PICLOGIN_EDIT_ID);
    this->RemoveControl(ID_PICLOGIN_LABEL_PWD);
    this->RemoveControl(ID_PICLOGIN_EDIT_PWD);

    this->AddControl(str, QRect(150+35,150, 110, 35), Qt::yellow, D_DEFAULT_FONT, Qt::black, ID_PICLOGIN_LABEL_DRIVERCODE, CONTROL_LABEL);
    ((CLabel *)this->GetDlgItem(ID_PICLOGIN_LABEL_DRIVERCODE))->SetBorderColor(Qt::black);

    this->AddControl(QString(""), QRect(265+35,155, 120, 25), Qt::yellow, D_DEFAULT_FONT, Qt::black, ID_PICLOGIN_EDIT_DRIVERCODE, CONTROL_EDIT);

    g_loginID = "0";
}

void CSysLoginPage::OnMaintainer()
{
    ((CButton *)GetDlgItem(ID_PICLOGIN_BUTTON_DRIVER))->ChangeButtonState(LBUTTON_UP);
    ((CButton *)GetDlgItem(ID_PICLOGIN_BUTTON_MAINTAINER))->ChangeButtonState(LBUTTON_DOWN);
    ((CButton *)GetDlgItem(ID_PICLOGIN_BUTTON_PINNUMBER))->ChangeButtonState(LBUTTON_UP);

//    if (ENUM_LOGIN_TYPE_MAINTAINER == g_login_type)
//    {
//        return;
//    }
//    else
//    {
//        g_login_type = ENUM_LOGIN_TYPE_MAINTAINER;
//    }
    QString str = QSTR("6位权限密码：");
    this->RemoveControl(ID_PICLOGIN_LABEL_DRIVERCODE);
    this->RemoveControl(ID_PICLOGIN_EDIT_DRIVERCODE);
    this->RemoveControl(ID_PICLOGIN_LABEL_PWD);
    this->RemoveControl(ID_PICLOGIN_EDIT_PWD);

    this->AddControl(str, QRect(150+35,150, 110, 35), Qt::yellow, D_DEFAULT_FONT, Qt::black, ID_PICLOGIN_LABEL_ID, CONTROL_LABEL);
    ((CLabel *)this->GetDlgItem(ID_PICLOGIN_LABEL_ID))->SetBorderColor(Qt::black);

    this->AddControl(QString(""), QRect(265+35,155, 120, 25), Qt::yellow, D_DEFAULT_FONT, Qt::black, ID_PICLOGIN_EDIT_ID, CONTROL_EDIT);

    //this->AddControl(QSTR("PWD："), QRect(150+35,200, 110, 35), Qt::yellow, D_DEFAULT_FONT, Qt::black, ID_PICLOGIN_LABEL_PWD, CONTROL_LABEL);
    //((CLabel *)this->GetDlgItem(ID_PICLOGIN_LABEL_PWD))->SetBorderColor(Qt::black);

    //this->AddControl(QString(""), QRect(265+35,205, 120, 25), Qt::yellow, D_DEFAULT_FONT, Qt::black, ID_PICLOGIN_EDIT_PWD, CONTROL_EDIT);
    //((CEdit *)this->GetDlgItem(ID_PICLOGIN_EDIT_PWD))->m_bIsPassWord = true;

    //SetEditSelected(ID_PICLOGIN_EDIT_ID, true);
    //SetEditSelected(ID_PICLOGIN_EDIT_PWD, false);

    g_loginID = "0";
}

void CSysLoginPage::OnPinNumber()
{
    ((CButton *)GetDlgItem(ID_PICLOGIN_BUTTON_DRIVER))->ChangeButtonState(LBUTTON_UP);
    ((CButton *)GetDlgItem(ID_PICLOGIN_BUTTON_MAINTAINER))->ChangeButtonState(LBUTTON_UP);
    ((CButton *)GetDlgItem(ID_PICLOGIN_BUTTON_PINNUMBER))->ChangeButtonState(LBUTTON_DOWN);

//    if (ENUM_LOGIN_TYPE_MAINTAINER == g_login_type)
//    {
//        return;
//    }
//    else
//    {
//        g_login_type = ENUM_LOGIN_TYPE_MAINTAINER;
//    }
    QString str = QSTR("6位确认密码：");
    this->RemoveControl(ID_PICLOGIN_LABEL_DRIVERCODE);
    this->RemoveControl(ID_PICLOGIN_EDIT_DRIVERCODE);
    this->RemoveControl(ID_PICLOGIN_LABEL_ID);
    this->RemoveControl(ID_PICLOGIN_EDIT_ID);
    //this->RemoveControl(ID_PICLOGIN_LABEL_PWD);
    //this->RemoveControl(ID_PICLOGIN_EDIT_PWD);

//    this->AddControl(str, QRect(150+35,150, 110, 35), Qt::yellow, D_DEFAULT_FONT, Qt::transparent, ID_PICLOGIN_LABEL_ID, CONTROL_LABEL);
//    ((CLabel *)this->GetDlgItem(ID_PICLOGIN_LABEL_ID))->SetBorderColor(Qt::black);

//    this->AddControl(QString(""), QRect(265+35,155, 120, 25), Qt::yellow, D_DEFAULT_FONT, Qt::black, ID_PICLOGIN_EDIT_ID, CONTROL_EDIT);

    this->AddControl(str, QRect(150+35,150, 110, 35), Qt::yellow, D_DEFAULT_FONT, Qt::black, ID_PICLOGIN_LABEL_PWD, CONTROL_LABEL);
    ((CLabel *)this->GetDlgItem(ID_PICLOGIN_LABEL_PWD))->SetBorderColor(Qt::black);

    this->AddControl(QString(""), QRect(265+35,155, 120, 25), Qt::yellow, D_DEFAULT_FONT, Qt::black, ID_PICLOGIN_EDIT_PWD, CONTROL_EDIT);
    //((CEdit *)this->GetDlgItem(ID_PICLOGIN_EDIT_PWD))->m_bIsPassWord = true;

   // SetEditSelected(ID_PICLOGIN_EDIT_ID, true);
   // SetEditSelected(ID_PICLOGIN_EDIT_PWD, true);

    g_loginID = "0";
}

void CSysLoginPage::OnNum0Down()
{
    SetBtnDown(ID_PICLOGIN_BUTTON_0);
}

void CSysLoginPage::OnNum1Down()
{
    SetBtnDown(ID_PICLOGIN_BUTTON_1);
}

void CSysLoginPage::OnNum2Down()
{
    SetBtnDown(ID_PICLOGIN_BUTTON_2);
}

void CSysLoginPage::OnNum3Down()
{
    SetBtnDown(ID_PICLOGIN_BUTTON_3);
}

void CSysLoginPage::OnNum4Down()
{
    SetBtnDown(ID_PICLOGIN_BUTTON_4);
}

void CSysLoginPage::OnNum5Down()
{
    SetBtnDown(ID_PICLOGIN_BUTTON_5);
}

void CSysLoginPage::OnNum6Down()
{
    SetBtnDown(ID_PICLOGIN_BUTTON_6);
}

void CSysLoginPage::OnNum7Down()
{
    SetBtnDown(ID_PICLOGIN_BUTTON_7);
}

void CSysLoginPage::OnNum8Down()
{
    SetBtnDown(ID_PICLOGIN_BUTTON_8);
}

void CSysLoginPage::OnNum9Down()
{
    SetBtnDown(ID_PICLOGIN_BUTTON_9);
}

void CSysLoginPage::OnNum0Up()
{
    SetBtnUp(ID_PICLOGIN_BUTTON_0);
    if (ENUM_LOGIN_TYPE_DRIVER == g_login_type)
    {
        AddEditStr(ID_PICLOGIN_EDIT_DRIVERCODE, "0");
    }
    else
    {
        if (IsEditSelected(ID_PICLOGIN_EDIT_PWD))
        {
            AddEditStr(ID_PICLOGIN_EDIT_PWD, "0");
        }
        else
        {
            AddEditStr(ID_PICLOGIN_EDIT_ID, "0");
        }
    }
}

void CSysLoginPage::OnNum1Up()
{
    SetBtnUp(ID_PICLOGIN_BUTTON_1);
    if (ENUM_LOGIN_TYPE_DRIVER == g_login_type)
    {
        AddEditStr(ID_PICLOGIN_EDIT_DRIVERCODE, "1");
    }
    else
    {
        if (IsEditSelected(ID_PICLOGIN_EDIT_PWD))
        {
            AddEditStr(ID_PICLOGIN_EDIT_PWD, "1");
        }
        else
        {
            AddEditStr(ID_PICLOGIN_EDIT_ID, "1");
        }
    }
}

void CSysLoginPage::OnNum2Up()
{
    SetBtnUp(ID_PICLOGIN_BUTTON_2);
    if (ENUM_LOGIN_TYPE_DRIVER == g_login_type)
    {
        AddEditStr(ID_PICLOGIN_EDIT_DRIVERCODE, "2");
    }
    else
    {
        if (IsEditSelected(ID_PICLOGIN_EDIT_PWD))
        {
            AddEditStr(ID_PICLOGIN_EDIT_PWD, "2");
        }
        else
        {
            AddEditStr(ID_PICLOGIN_EDIT_ID, "2");
        }
    }
}

void CSysLoginPage::OnNum3Up()
{
    SetBtnUp(ID_PICLOGIN_BUTTON_3);
    if (ENUM_LOGIN_TYPE_DRIVER == g_login_type)
    {
        AddEditStr(ID_PICLOGIN_EDIT_DRIVERCODE, "3");
    }
    else
    {
        if (IsEditSelected(ID_PICLOGIN_EDIT_PWD))
        {
            AddEditStr(ID_PICLOGIN_EDIT_PWD, "3");
        }
        else
        {
            AddEditStr(ID_PICLOGIN_EDIT_ID, "3");
        }
    }
}

void CSysLoginPage::OnNum4Up()
{
    SetBtnUp(ID_PICLOGIN_BUTTON_4);
    if (ENUM_LOGIN_TYPE_DRIVER == g_login_type)
    {
        AddEditStr(ID_PICLOGIN_EDIT_DRIVERCODE, "4");
    }
    else
    {
        if (IsEditSelected(ID_PICLOGIN_EDIT_PWD))
        {
            AddEditStr(ID_PICLOGIN_EDIT_PWD, "4");
        }
        else
        {
            AddEditStr(ID_PICLOGIN_EDIT_ID, "4");
        }
    }
}

void CSysLoginPage::OnNum5Up()
{
    SetBtnUp(ID_PICLOGIN_BUTTON_5);
    if (ENUM_LOGIN_TYPE_DRIVER == g_login_type)
    {
        AddEditStr(ID_PICLOGIN_EDIT_DRIVERCODE, "5");
    }
    else
    {
        if (IsEditSelected(ID_PICLOGIN_EDIT_PWD))
        {
            AddEditStr(ID_PICLOGIN_EDIT_PWD, "5");
        }
        else
        {
            AddEditStr(ID_PICLOGIN_EDIT_ID, "5");
        }
    }
}

void CSysLoginPage::OnNum6Up()
{
    SetBtnUp(ID_PICLOGIN_BUTTON_6);
    if (ENUM_LOGIN_TYPE_DRIVER == g_login_type)
    {
        AddEditStr(ID_PICLOGIN_EDIT_DRIVERCODE, "6");
    }
    else
    {
        if (IsEditSelected(ID_PICLOGIN_EDIT_PWD))
        {
            AddEditStr(ID_PICLOGIN_EDIT_PWD, "6");
        }
        else
        {
            AddEditStr(ID_PICLOGIN_EDIT_ID, "6");
        }
    }
}

void CSysLoginPage::OnNum7Up()
{
    SetBtnUp(ID_PICLOGIN_BUTTON_7);
    if (ENUM_LOGIN_TYPE_DRIVER == g_login_type)
    {
        AddEditStr(ID_PICLOGIN_EDIT_DRIVERCODE, "7");
    }
    else
    {
        if (IsEditSelected(ID_PICLOGIN_EDIT_PWD))
        {
            AddEditStr(ID_PICLOGIN_EDIT_PWD, "7");
        }
        else
        {
            AddEditStr(ID_PICLOGIN_EDIT_ID, "7");
        }
    }
}

void CSysLoginPage::OnNum8Up()
{
    SetBtnUp(ID_PICLOGIN_BUTTON_8);
    if (ENUM_LOGIN_TYPE_DRIVER == g_login_type)
    {
        AddEditStr(ID_PICLOGIN_EDIT_DRIVERCODE, "8");
    }
    else
    {
        if (IsEditSelected(ID_PICLOGIN_EDIT_PWD))
        {
            AddEditStr(ID_PICLOGIN_EDIT_PWD, "8");
        }
        else
        {
            AddEditStr(ID_PICLOGIN_EDIT_ID, "8");
        }
    }
}

void CSysLoginPage::OnNum9Up()
{
    SetBtnUp(ID_PICLOGIN_BUTTON_9);
    if (ENUM_LOGIN_TYPE_DRIVER == g_login_type)
    {
        AddEditStr(ID_PICLOGIN_EDIT_DRIVERCODE, "9");
    }
    else
    {
        if (IsEditSelected(ID_PICLOGIN_EDIT_PWD))
        {
            AddEditStr(ID_PICLOGIN_EDIT_PWD, "9");
        }
        else
        {
            AddEditStr(ID_PICLOGIN_EDIT_ID, "9");
        }
    }
}

void CSysLoginPage::OnClearDown()
{
    SetBtnDown(ID_PICLOGIN_BUTTON_CLEAR);
}

void CSysLoginPage::OnClearUp()
{
    SetBtnUp(ID_PICLOGIN_BUTTON_CLEAR);
    if (ENUM_LOGIN_TYPE_DRIVER == g_login_type)
    {
        SetEditStr(ID_PICLOGIN_EDIT_DRIVERCODE, "");
    }
    else
    {
        if (IsEditSelected(ID_PICLOGIN_EDIT_PWD))
        {
            SetEditStr(ID_PICLOGIN_EDIT_PWD, "");
        }
        else
        {
            SetEditStr(ID_PICLOGIN_EDIT_ID, "");
        }
    }
}

void CSysLoginPage::SetBtnDown(int btnId)
{
    CButton *pButton = NULL;
    int nIDArray[] =
    {
        ID_PICLOGIN_BUTTON_0,
        ID_PICLOGIN_BUTTON_1,
        ID_PICLOGIN_BUTTON_2,
        ID_PICLOGIN_BUTTON_3,
        ID_PICLOGIN_BUTTON_4,
        ID_PICLOGIN_BUTTON_5,
        ID_PICLOGIN_BUTTON_6,
        ID_PICLOGIN_BUTTON_7,
        ID_PICLOGIN_BUTTON_8,
        ID_PICLOGIN_BUTTON_9,
        ID_PICLOGIN_BUTTON_CLEAR,
        ID_PICLOGIN_BUTTON_OK
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

void CSysLoginPage::SetBtnUp(int btnId)
{
    CButton *pButton = NULL;
    int nIDArray[] =
    {
        ID_PICLOGIN_BUTTON_0,
        ID_PICLOGIN_BUTTON_1,
        ID_PICLOGIN_BUTTON_2,
        ID_PICLOGIN_BUTTON_3,
        ID_PICLOGIN_BUTTON_4,
        ID_PICLOGIN_BUTTON_5,
        ID_PICLOGIN_BUTTON_6,
        ID_PICLOGIN_BUTTON_7,
        ID_PICLOGIN_BUTTON_8,
        ID_PICLOGIN_BUTTON_9,
        ID_PICLOGIN_BUTTON_CLEAR,
        ID_PICLOGIN_BUTTON_OK
    };

    for(int i = 0; i < 12; i++)
    {
        pButton = (CButton *)GetDlgItem(nIDArray[i]);
        if(nIDArray[i] == btnId)
        {
            pButton->ChangeButtonState(LBUTTON_UP);
        }
    }

    return;
}

void CSysLoginPage::AddEditStr(int EditId, QString str)
{
    CEdit *pEdit = NULL;
    pEdit = (CEdit *)GetDlgItem(EditId);
    if (NULL == pEdit)
    {
        return;
    }
    QString edit_str;
    edit_str = pEdit->GetCtrlText();
    if(edit_str.length() < g_loginIDPWDLen)
    {
        edit_str = edit_str.append(str);
    }
    else
    {
        edit_str = str;
    }
    pEdit->SetCtrlText(edit_str);
}

void CSysLoginPage::SetEditStr(int EditId, QString str)
{
    CEdit *pEdit = NULL;
    pEdit = (CEdit *)GetDlgItem(EditId);
    if (NULL == pEdit)
    {
        return;
    }
    pEdit->SetCtrlText(str);
}

void CSysLoginPage::OnDriverCodeEdit()
{
    CEdit *pEdit = NULL;
    pEdit = (CEdit *)GetDlgItem(ID_PICLOGIN_EDIT_DRIVERCODE);
    if (NULL == pEdit)
    {
        return;
    }
    pEdit->SetSelected(true);
}

void CSysLoginPage::OnIDEdit()
{
    SetEditSelected(ID_PICLOGIN_EDIT_ID, true);
    SetEditSelected(ID_PICLOGIN_EDIT_PWD, false);
}

void CSysLoginPage::OnPWDEdit()
{
    SetEditSelected(ID_PICLOGIN_EDIT_PWD, true);
    SetEditSelected(ID_PICLOGIN_EDIT_ID, false);
}

void CSysLoginPage::SetEditSelected(int EditId, bool flg)
{
    CEdit *pEdit = NULL;
    pEdit = (CEdit *)GetDlgItem(EditId);
    if (NULL == pEdit)
    {
        return;
    }
    pEdit->SetSelected(flg);
}

bool CSysLoginPage::IsEditSelected(int EditId)
{
    CEdit *pEdit = NULL;
    pEdit = (CEdit *)GetDlgItem(EditId);
    if (NULL == pEdit)
    {
        return false;
    }

    return pEdit->GetSelected();
}

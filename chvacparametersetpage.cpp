#include "chvacparametersetpage.h"

#include "cwheeldiametersetpage.h"
#include "ccarcodesetpage.h"
#include "csysloginpage.h"
#include "csystimesetpage.h"
#include "clocaliopage.h"


ROMDATA g_PicRom_HvacParameterSet[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
    {QSTR("密码输入"), D_FONT(15),  QRect(0  ,    0, 640, 60),        Qt::black,                    Qt::yellow,                 CONTROL_LABEL,        ID_PWPAGE_LABEL_SHOW                 },

    {QSTR("密码:"),   D_FONT(10),  QRect(100  ,    150, 80, 60),        Qt::yellow,                    Qt::black,                 CONTROL_LABEL,        ID_IGNORE                 },
    {QSTR("1"),        D_FONT(10),  QRect(200  ,    150, 160, 60),        Qt::yellow,                    Qt::black,                 CONTROL_EDIT,        ID_PWPAGE_EDIT_PASSWORD                 },
    {QSTR(""),        D_FONT(10),  QRect(90  ,    240, 250, 60),        Qt::yellow,                    Qt::black,                 CONTROL_LABEL,        ID_PWPAGE_LABEL_NOTICE                 },
    {QSTR("确认"),        D_FONT(10),  QRect(160  ,    380, 120, 50),        Qt::black,                    Qt::yellow,                 CONTROL_BUTTON,        ID_PWPAGE_BUTTON_COMFIRM                 },
    {QSTR("退出"),        D_FONT(10),  QRect(360  ,    380, 120, 50),        Qt::black,                    Qt::yellow,                 CONTROL_BUTTON,        ID_PWPAGE_BUTTON_RETURN                 },

    {"1",                  D_COMMON_TITLE_FONT,  QRect(450,  100,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PWPAGE_BUTTON_NUMBER1  },
    {"2",                  D_COMMON_TITLE_FONT,  QRect(500,  100,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PWPAGE_BUTTON_NUMBER2  },
    {"3",                  D_COMMON_TITLE_FONT,  QRect(550,  100,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PWPAGE_BUTTON_NUMBER3  },
    {"4",                  D_COMMON_TITLE_FONT,  QRect(450,  150,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PWPAGE_BUTTON_NUMBER4  },
    {"5",                  D_COMMON_TITLE_FONT,  QRect(500,  150,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PWPAGE_BUTTON_NUMBER5  },
    {"6",                  D_COMMON_TITLE_FONT,  QRect(550,  150,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PWPAGE_BUTTON_NUMBER6  },
    {"7",                  D_COMMON_TITLE_FONT,  QRect(450,  200,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PWPAGE_BUTTON_NUMBER7  },
    {"8",                  D_COMMON_TITLE_FONT,  QRect(500,  200,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PWPAGE_BUTTON_NUMBER8  },
    {"9",                  D_COMMON_TITLE_FONT,  QRect(550,  200,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PWPAGE_BUTTON_NUMBER9  },
    {"0",                  D_COMMON_TITLE_FONT,  QRect(450,  250,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PWPAGE_BUTTON_NUMBER0  },
    {QSTR("清除"),          D_COMMON_TITLE_FONT,  QRect(500,  250, 100, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PWPAGE_BUTTON_CLEAR    },



 };
int g_HvacParameterSetRomLen = sizeof(g_PicRom_HvacParameterSet)/sizeof(ROMDATA);

BEGIN_MESSAGE_MAP(CHvacParameterSetPage,CPage)
        ON_UPDATE_PAGE()
        ON_LBUTTONDOWN(ID_PWPAGE_BUTTON_NUMBER1, OnSetButton1DOWN)
        ON_LBUTTONDOWN(ID_PWPAGE_BUTTON_NUMBER2, OnSetButton2DOWN)
        ON_LBUTTONDOWN(ID_PWPAGE_BUTTON_NUMBER3, OnSetButton3DOWN)
        ON_LBUTTONDOWN(ID_PWPAGE_BUTTON_NUMBER4, OnSetButton4DOWN)
        ON_LBUTTONDOWN(ID_PWPAGE_BUTTON_NUMBER5, OnSetButton5DOWN)
        ON_LBUTTONDOWN(ID_PWPAGE_BUTTON_NUMBER6, OnSetButton6DOWN)
        ON_LBUTTONDOWN(ID_PWPAGE_BUTTON_NUMBER7, OnSetButton7DOWN)
        ON_LBUTTONDOWN(ID_PWPAGE_BUTTON_NUMBER8, OnSetButton8DOWN)
        ON_LBUTTONDOWN(ID_PWPAGE_BUTTON_NUMBER9, OnSetButton9DOWN)
        ON_LBUTTONDOWN(ID_PWPAGE_BUTTON_NUMBER0, OnSetButton0DOWN)
        ON_LBUTTONDOWN(ID_PWPAGE_BUTTON_CLEAR,   OnSetButtonClearDOWN)
        ON_LBUTTONDOWN(ID_PWPAGE_BUTTON_COMFIRM, OnSetButtonComfirmDOWN)
        ON_LBUTTONDOWN(ID_PWPAGE_BUTTON_RETURN,   OnSetButtonReturnDOWN)
        ON_LBUTTONUP(ID_PWPAGE_BUTTON_NUMBER1, OnSetButton1UP)
        ON_LBUTTONUP(ID_PWPAGE_BUTTON_NUMBER2, OnSetButton2UP)
        ON_LBUTTONUP(ID_PWPAGE_BUTTON_NUMBER3, OnSetButton3UP)
        ON_LBUTTONUP(ID_PWPAGE_BUTTON_NUMBER4, OnSetButton4UP)
        ON_LBUTTONUP(ID_PWPAGE_BUTTON_NUMBER5, OnSetButton5UP)
        ON_LBUTTONUP(ID_PWPAGE_BUTTON_NUMBER6, OnSetButton6UP)
        ON_LBUTTONUP(ID_PWPAGE_BUTTON_NUMBER7, OnSetButton7UP)
        ON_LBUTTONUP(ID_PWPAGE_BUTTON_NUMBER8, OnSetButton8UP)
        ON_LBUTTONUP(ID_PWPAGE_BUTTON_NUMBER9, OnSetButton9UP)
        ON_LBUTTONUP(ID_PWPAGE_BUTTON_NUMBER0, OnSetButton0UP)
        ON_LBUTTONUP(ID_PWPAGE_BUTTON_CLEAR,   OnSetButtonClearUP)
        ON_LBUTTONUP(ID_PWPAGE_BUTTON_COMFIRM, OnSetButtonComfirmUP)
        ON_LBUTTONUP(ID_PWPAGE_BUTTON_RETURN,   OnSetButtonReturnUP)


        END_MESSAGE_MAP()

CHvacParameterSetPage::CHvacParameterSetPage()
{
}

void CHvacParameterSetPage::OnCommonQuitButtonDown()
{
    //ChangePage(PAGE_ROM_INDEX_MAIN);
}
void CHvacParameterSetPage::OnInitPage()
{

    SetEditSelected(ID_PWPAGE_EDIT_PASSWORD, true);
    GetDlgItem(ID_PWPAGE_EDIT_PASSWORD)->SetCtrlText("");

}


void CHvacParameterSetPage::OnUpdatePage()
{
   // ((CLabel*)GetDlgItem(ID_PWPAGE_LABEL_NOTICE))->SetCtrlText(QString::number(set_PwdPageID));
    if((set_PwdPageID!=1)&&(set_PwdPageID!=2))
    {
        ((CLabel*)GetDlgItem(ID_PWPAGE_LABEL_SHOW))->SetCtrlText(QSTR("4位密码输入"));
    }else
    {
        ((CLabel*)GetDlgItem(ID_PWPAGE_LABEL_SHOW))->SetCtrlText(QSTR("6位密码输入"));

    }

}
void CHvacParameterSetPage::OnSetButton1DOWN()
{
    SetBtnDown(ID_PWPAGE_BUTTON_NUMBER1);
}

void CHvacParameterSetPage::OnSetButton2DOWN()
{
    SetBtnDown(ID_PWPAGE_BUTTON_NUMBER2);
}

void CHvacParameterSetPage::OnSetButton3DOWN()
{
    SetBtnDown(ID_PWPAGE_BUTTON_NUMBER3);
}

void CHvacParameterSetPage::OnSetButton4DOWN()
{
    SetBtnDown(ID_PWPAGE_BUTTON_NUMBER4);
}

void CHvacParameterSetPage::OnSetButton5DOWN()
{
    SetBtnDown(ID_PWPAGE_BUTTON_NUMBER5);
}

void CHvacParameterSetPage::OnSetButton6DOWN()
{
    SetBtnDown(ID_PWPAGE_BUTTON_NUMBER6);
}

void CHvacParameterSetPage::OnSetButton7DOWN()
{
    SetBtnDown(ID_PWPAGE_BUTTON_NUMBER7);
}

void CHvacParameterSetPage::OnSetButton8DOWN()
{
    SetBtnDown(ID_PWPAGE_BUTTON_NUMBER8);
}

void CHvacParameterSetPage::OnSetButton9DOWN()
{
    SetBtnDown(ID_PWPAGE_BUTTON_NUMBER9);
}

void CHvacParameterSetPage::OnSetButton0DOWN()
{
    SetBtnDown(ID_PWPAGE_BUTTON_NUMBER0);
}

void CHvacParameterSetPage::OnSetButtonClearDOWN()
{
    SetBtnDown(ID_PWPAGE_BUTTON_CLEAR);
}

void CHvacParameterSetPage::OnSetButtonComfirmDOWN()
{

    ((CButton *)GetDlgItem(ID_PWPAGE_BUTTON_COMFIRM))->ChangeButtonState(LBUTTON_DOWN);
}

void CHvacParameterSetPage::OnSetButtonReturnDOWN()
{
    ((CButton *)GetDlgItem(ID_PWPAGE_BUTTON_RETURN))->ChangeButtonState(LBUTTON_DOWN);
}
void CHvacParameterSetPage::OnSetButton1UP()
{
    SetBtnUp(ID_PWPAGE_BUTTON_NUMBER1);
    QString strLength;

    strLength = GetDlgItem(ID_PWPAGE_EDIT_PASSWORD)->GetCtrlText();
    if((set_PwdPageID!=1)&&(set_PwdPageID!=2))
    {
        if(strLength.length() < PASSWORDLENGTH_4)
        {
            AddSelectedEditBox("1");
        }
        else
        {
            CWarningDialog warningDlg;
            warningDlg.SetWarningStr(QSTR("密码为4位"));
            warningDlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
            warningDlg.exec();


        }
    }
    else
    {
        if(strLength.length() < PASSWORDLENGTH_6)
        {
            AddSelectedEditBox("1");
        }
        else
        {
            CWarningDialog warningDlg;
            warningDlg.SetWarningStr(QSTR("密码为6位"));
            warningDlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
            warningDlg.exec();


        }

    }

}

void CHvacParameterSetPage::OnSetButton2UP()
{
    SetBtnUp(ID_PWPAGE_BUTTON_NUMBER2);
    QString strLength;

    strLength = GetDlgItem(ID_PWPAGE_EDIT_PASSWORD)->GetCtrlText();
    if((set_PwdPageID!=1)&&(set_PwdPageID!=2))
    {
    if(strLength.length() < PASSWORDLENGTH_4)
    {
        AddSelectedEditBox("2");
    }
    else
    {
        CWarningDialog warningDlg;
        warningDlg.SetWarningStr(QSTR("密码为4位"));
        warningDlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
        warningDlg.exec();


    }
    }
    else
    {
        if(strLength.length() < PASSWORDLENGTH_6)
        {
            AddSelectedEditBox("2");
        }
        else
        {
            CWarningDialog warningDlg;
            warningDlg.SetWarningStr(QSTR("密码为6位"));
            warningDlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
            warningDlg.exec();


        }

    }

}

void CHvacParameterSetPage::OnSetButton3UP()
{
    SetBtnUp(ID_PWPAGE_BUTTON_NUMBER3);
    QString strLength;

    strLength = GetDlgItem(ID_PWPAGE_EDIT_PASSWORD)->GetCtrlText();
    if((set_PwdPageID!=1)&&(set_PwdPageID!=2))
    {
    if(strLength.length() < PASSWORDLENGTH_4)
    {
        AddSelectedEditBox("3");
    }
    else
    {
        CWarningDialog warningDlg;
        warningDlg.SetWarningStr(QSTR("密码为4位"));
        warningDlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
        warningDlg.exec();


    }
    }
    else
    {
        if(strLength.length() < PASSWORDLENGTH_6)
        {
            AddSelectedEditBox("3");
        }
        else
        {
            CWarningDialog warningDlg;
            warningDlg.SetWarningStr(QSTR("密码为6位"));
            warningDlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
            warningDlg.exec();


        }

    }

}

void CHvacParameterSetPage::OnSetButton4UP()
{
    SetBtnUp(ID_PWPAGE_BUTTON_NUMBER4);
    QString strLength;

    strLength = GetDlgItem(ID_PWPAGE_EDIT_PASSWORD)->GetCtrlText();
    if((set_PwdPageID!=1)&&(set_PwdPageID!=2))
    {
    if(strLength.length() < PASSWORDLENGTH_4)
    {
        AddSelectedEditBox("4");
    }
    else
    {
        CWarningDialog warningDlg;
        warningDlg.SetWarningStr(QSTR("密码为4位"));
        warningDlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
        warningDlg.exec();


    }
    }
    else
    {
        if(strLength.length() < PASSWORDLENGTH_6)
        {
            AddSelectedEditBox("4");
        }
        else
        {
            CWarningDialog warningDlg;
            warningDlg.SetWarningStr(QSTR("密码为6位"));
            warningDlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
            warningDlg.exec();


        }

    }

}

void CHvacParameterSetPage::OnSetButton5UP()
{
    SetBtnUp(ID_PWPAGE_BUTTON_NUMBER5);
    QString strLength;

    strLength = GetDlgItem(ID_PWPAGE_EDIT_PASSWORD)->GetCtrlText();
    if((set_PwdPageID!=1)&&(set_PwdPageID!=2))
    {
    if(strLength.length() < PASSWORDLENGTH_4)
    {
        AddSelectedEditBox("5");
    }
    else
    {
        CWarningDialog warningDlg;
        warningDlg.SetWarningStr(QSTR("密码为4位"));
        warningDlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
        warningDlg.exec();


    }
    }
    else
    {
        if(strLength.length() < PASSWORDLENGTH_6)
        {
            AddSelectedEditBox("5");
        }
        else
        {
            CWarningDialog warningDlg;
            warningDlg.SetWarningStr(QSTR("密码为6位"));
            warningDlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
            warningDlg.exec();


        }

    }

}

void CHvacParameterSetPage::OnSetButton6UP()
{
    SetBtnUp(ID_PWPAGE_BUTTON_NUMBER6);
    QString strLength;

    strLength = GetDlgItem(ID_PWPAGE_EDIT_PASSWORD)->GetCtrlText();
    if((set_PwdPageID!=1)&&(set_PwdPageID!=2))
    {
    if(strLength.length() < PASSWORDLENGTH_4)
    {
        AddSelectedEditBox("6");
    }
    else
    {
        CWarningDialog warningDlg;
        warningDlg.SetWarningStr(QSTR("密码为4位"));
        warningDlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
        warningDlg.exec();


    }
    }
    else
    {
        if(strLength.length() < PASSWORDLENGTH_6)
        {
            AddSelectedEditBox("6");
        }
        else
        {
            CWarningDialog warningDlg;
            warningDlg.SetWarningStr(QSTR("密码为6位"));
            warningDlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
            warningDlg.exec();


        }

    }

}

void CHvacParameterSetPage::OnSetButton7UP()
{
    SetBtnUp(ID_PWPAGE_BUTTON_NUMBER7);
    QString strLength;

    strLength = GetDlgItem(ID_PWPAGE_EDIT_PASSWORD)->GetCtrlText();
    if((set_PwdPageID!=1)&&(set_PwdPageID!=2))
    {
    if(strLength.length() < PASSWORDLENGTH_4)
    {
        AddSelectedEditBox("7");
    }
    else
    {
        CWarningDialog warningDlg;
        warningDlg.SetWarningStr(QSTR("密码为4位"));
        warningDlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
        warningDlg.exec();


    }
    }
    else
    {
        if(strLength.length() < PASSWORDLENGTH_6)
        {
            AddSelectedEditBox("7");
        }
        else
        {
            CWarningDialog warningDlg;
            warningDlg.SetWarningStr(QSTR("密码为6位"));
            warningDlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
            warningDlg.exec();


        }

    }

}

void CHvacParameterSetPage::OnSetButton8UP()
{
    SetBtnUp(ID_PWPAGE_BUTTON_NUMBER8);
    QString strLength;

    strLength = GetDlgItem(ID_PWPAGE_EDIT_PASSWORD)->GetCtrlText();
    if((set_PwdPageID!=1)&&(set_PwdPageID!=2))
    {
        if(strLength.length() < PASSWORDLENGTH_4)
        {
            AddSelectedEditBox("8");
        }
        else
        {
            CWarningDialog warningDlg;
            warningDlg.SetWarningStr(QSTR("密码为4位"));
            warningDlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
            warningDlg.exec();


        }
    }
    else
    {
        if(strLength.length() < PASSWORDLENGTH_6)
        {
            AddSelectedEditBox("8");
        }
        else
        {
            CWarningDialog warningDlg;
            warningDlg.SetWarningStr(QSTR("密码为6位"));
            warningDlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
            warningDlg.exec();


        }

    }

}

void CHvacParameterSetPage::OnSetButton9UP()
{
    SetBtnUp(ID_PWPAGE_BUTTON_NUMBER9);
    QString strLength;

    strLength = GetDlgItem(ID_PWPAGE_EDIT_PASSWORD)->GetCtrlText();
    if((set_PwdPageID!=1)&&(set_PwdPageID!=2))
    {
    if(strLength.length() < PASSWORDLENGTH_4)
    {
        AddSelectedEditBox("9");
    }
    else
    {
        CWarningDialog warningDlg;
        warningDlg.SetWarningStr(QSTR("密码为4位"));
        warningDlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
        warningDlg.exec();


    }
    }
    else
    {
        if(strLength.length() < PASSWORDLENGTH_6)
        {
            AddSelectedEditBox("9");
        }
        else
        {
            CWarningDialog warningDlg;
            warningDlg.SetWarningStr(QSTR("密码为6位"));
            warningDlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
            warningDlg.exec();


        }

    }

}

void CHvacParameterSetPage::OnSetButton0UP()
{
    SetBtnUp(ID_PWPAGE_BUTTON_NUMBER0);
    QString strLength;

    strLength = GetDlgItem(ID_PWPAGE_EDIT_PASSWORD)->GetCtrlText();
    if((set_PwdPageID!=1)&&(set_PwdPageID!=2))
    {
    if(strLength.length() < PASSWORDLENGTH_4)
    {
        AddSelectedEditBox("0");
    }
    else
    {
        CWarningDialog warningDlg;
        warningDlg.SetWarningStr(QSTR("密码为4位"));
        warningDlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
        warningDlg.exec();


    }
    }
    else
    {
        if(strLength.length() < PASSWORDLENGTH_6)
        {
            AddSelectedEditBox("0");
        }
        else
        {
            CWarningDialog warningDlg;
            warningDlg.SetWarningStr(QSTR("密码为6位"));
            warningDlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
            warningDlg.exec();


        }

    }

}

void CHvacParameterSetPage::OnSetButtonClearUP()
{
    SetBtnUp(ID_PWPAGE_BUTTON_CLEAR);
    SetSelectedEditBox("");
}

void CHvacParameterSetPage::OnSetButtonComfirmUP()
{
    QString strDadta = GetDlgItem(ID_PWPAGE_EDIT_PASSWORD)->GetCtrlText();
    if(set_PwdPageID==1)
    {
       if(strDadta==pw_True_6Purview)
        {
            OnInitPage();
            ChangePage(PAGE_ROM_INDEX_MAINTAINERMANAGE);
        }
        else
        {
        CWarningDialog warningDlg;
        warningDlg.SetWarningStr(QSTR("6位权限密码错误！"));
        warningDlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
        warningDlg.exec();
        OnInitPage();
        return;
        }
    }
    if(set_PwdPageID==2)
    {
       if(strDadta==pw_True_6MakeSure)
        {
            OnInitPage();
       }
        else
       {
        CWarningDialog warningDlg;
        warningDlg.SetWarningStr(QSTR("6位确认密码错误！"));
        warningDlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
        warningDlg.exec();
        OnInitPage();
        return;
        }

    }
    if(set_PwdPageID==3)
    {
       if(strDadta==pw_True_4Purview)
        {
           OnInitPage();
           ChangePage(PAGE_ROM_INDEX_SYSTIMESET);
        }
        else
        {
        CWarningDialog warningDlg;
        warningDlg.SetWarningStr(QSTR("4位权限密码错误！"));
        warningDlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
        warningDlg.exec();
        OnInitPage();
        return;
        }
    }
    if(set_PwdPageID==4)
    {
       if(strDadta==pw_True_4Purview)
        {
           OnInitPage();
           ChangePage(PAGE_ROM_INDEX_CARCODESET);
        }
        else
        {
        CWarningDialog warningDlg;
        warningDlg.SetWarningStr(QSTR("4位权限密码错误！"));
        warningDlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
        warningDlg.exec();
        OnInitPage();
        return;
        }
    }
    if(set_PwdPageID==5)
    {
       if(strDadta==pw_True_4Purview)
        {
           OnInitPage();
           ChangePage(PAGE_ROM_INDEX_WHEELDIAMETERSET);
        }
        else
        {
        CWarningDialog warningDlg;
        warningDlg.SetWarningStr(QSTR("4位权限密码错误！"));
        warningDlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
        warningDlg.exec();
        OnInitPage();
        return;
        }
    }
    if(set_PwdPageID==6)
    {
       if(strDadta==pw_True_4Purview)
        {
           OnInitPage();
           ChangePage(PAGE_ROM_INDEX_DOOR);
        }
        else
        {
        CWarningDialog warningDlg;
        warningDlg.SetWarningStr(QSTR("4位权限密码错误！"));
        warningDlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
        warningDlg.exec();
        OnInitPage();
        return;
        }
    }
    if(set_PwdPageID==7)
    {
       if(strDadta==pw_True_4Purview)
        {
           OnInitPage();
        }
        else
        {
        CWarningDialog warningDlg;
        warningDlg.SetWarningStr(QSTR("4位权限密码错误！"));
        warningDlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
        warningDlg.exec();
        OnInitPage();
        return;
        }
    }
    if(set_PwdPageID==8)
    {
       if(strDadta==pw_True_4Purview)
        {
           OnInitPage();
        }
        else
        {
        CWarningDialog warningDlg;
        warningDlg.SetWarningStr(QSTR("4位权限密码错误！"));
        warningDlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
        warningDlg.exec();
        OnInitPage();
        return;
        }
    }



}

void CHvacParameterSetPage::OnSetButtonReturnUP()
{
    OnInitPage();
    ChangePage(PAGE_ROM_INDEX_PARAMETERSET);

}
void CHvacParameterSetPage::AddSelectedEditBox(QString str)
{
    if (IsEditSelected(ID_PWPAGE_EDIT_PASSWORD)) {
        AddEditStr(ID_PWPAGE_EDIT_PASSWORD, str);
    }
}
//判断输入框是否选定
bool CHvacParameterSetPage::IsEditSelected(int EditId)
{
    CEdit *pEdit = NULL;
    pEdit = (CEdit *)GetDlgItem(EditId);
    if (NULL == pEdit)
    {
        return false;
    }

    return pEdit->GetSelected();
}
void CHvacParameterSetPage::AddEditStr(int EditId, QString str)
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
void CHvacParameterSetPage::SetEditSelected(int EditId, bool flg)
{
    CEdit *pEdit = NULL;
    pEdit = (CEdit *)GetDlgItem(EditId);
    if (NULL == pEdit)
    {
        return;
    }
    pEdit->SetSelected(flg);
}

void CHvacParameterSetPage::SetSelectedEditBox(QString str)
{
    if (IsEditSelected(ID_PWPAGE_EDIT_PASSWORD)) {
        SetEditStr(ID_PWPAGE_EDIT_PASSWORD, str);
    }
}
void CHvacParameterSetPage::SetEditStr(int EditId, QString str)
{
    CEdit *pEdit = NULL;
    pEdit = (CEdit *)GetDlgItem(EditId);
    if (NULL == pEdit)
    {
        return;
    }
    pEdit->SetCtrlText(str);
}

void CHvacParameterSetPage::SetBtnDown(int btnId)
{
    CButton *pButton = NULL;
    int nIDArray[] =
    {
        ID_PWPAGE_BUTTON_NUMBER1,
        ID_PWPAGE_BUTTON_NUMBER2,
        ID_PWPAGE_BUTTON_NUMBER3,
        ID_PWPAGE_BUTTON_NUMBER4,
        ID_PWPAGE_BUTTON_NUMBER5,
        ID_PWPAGE_BUTTON_NUMBER6,
        ID_PWPAGE_BUTTON_NUMBER7,
        ID_PWPAGE_BUTTON_NUMBER8,
        ID_PWPAGE_BUTTON_NUMBER9,
        ID_PWPAGE_BUTTON_NUMBER0,
        ID_PWPAGE_BUTTON_CLEAR
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
void CHvacParameterSetPage::SetBtnUp(int btnId)
{
    CButton *pButton = NULL;
    int nIDArray[] =
    {
        ID_PWPAGE_BUTTON_NUMBER1,
        ID_PWPAGE_BUTTON_NUMBER2,
        ID_PWPAGE_BUTTON_NUMBER3,
        ID_PWPAGE_BUTTON_NUMBER4,
        ID_PWPAGE_BUTTON_NUMBER5,
        ID_PWPAGE_BUTTON_NUMBER6,
        ID_PWPAGE_BUTTON_NUMBER7,
        ID_PWPAGE_BUTTON_NUMBER8,
        ID_PWPAGE_BUTTON_NUMBER9,
        ID_PWPAGE_BUTTON_NUMBER0,
        ID_PWPAGE_BUTTON_CLEAR
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

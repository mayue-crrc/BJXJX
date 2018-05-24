#include "cpagepasswordset.h"


ROMDATA g_PicRom_PasswordSetPage[] =
{
    /*string                font                            rc                  foreground color              background color            control type          ID           */
    //D_COMMON_PAGE_HEADER
    {QSTR("密码设置"), D_FONT(15),  QRect(0  ,    0, 640, 60),        Qt::black,                    Qt::yellow,                 CONTROL_LABEL,        ID_IGNORE                 },

    {QSTR("原密码:"),   D_FONT(10),  QRect(100  ,    100, 80, 40),        Qt::yellow,                    Qt::black,                 CONTROL_LABEL,        ID_IGNORE                 },
    {QSTR("新密码:"),   D_FONT(10),  QRect(100  ,    170, 80, 40),        Qt::yellow,                    Qt::black,                 CONTROL_LABEL,        ID_IGNORE                 },
    {QSTR("新密码确认:"),   D_FONT(10),  QRect(90  ,    240, 100, 40),        Qt::yellow,                    Qt::black,                 CONTROL_LABEL,        ID_IGNORE                 },
    {QSTR(""),        D_FONT(10),  QRect(200  ,    100, 160, 40),        Qt::yellow,                    Qt::black,                 CONTROL_EDIT,        ID_PWSETPAGE_EDIT_OLDPASSWORD                 },
    {QSTR(""),        D_FONT(10),  QRect(200  ,    170, 160, 40),        Qt::yellow,                    Qt::black,                 CONTROL_EDIT,        ID_PWSETPAGE_EDIT_NEWPASSWORD                 },
    {QSTR(""),        D_FONT(10),  QRect(200  ,    240, 160, 40),        Qt::yellow,                    Qt::black,                 CONTROL_EDIT,        ID_PWSETPAGE_EDIT_NEWPASSWORDCOMFIRM                },
    {QSTR("确认"),        D_FONT(10),  QRect(160  ,    380, 120, 50),        Qt::black,                    Qt::yellow,                 CONTROL_BUTTON,        ID_PWSETPAGE_BUTTON_COMFIRM                 },
    {QSTR("退出"),        D_FONT(10),  QRect(360  ,    380, 120, 50),        Qt::black,                    Qt::yellow,                 CONTROL_BUTTON,        ID_PWSETPAGE_BUTTON_RETURN                 },

    {"1",                  D_COMMON_TITLE_FONT,  QRect(450,  100,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PWSETPAGE_BUTTON_NUMBER1  },
    {"2",                  D_COMMON_TITLE_FONT,  QRect(500,  100,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PWSETPAGE_BUTTON_NUMBER2  },
    {"3",                  D_COMMON_TITLE_FONT,  QRect(550,  100,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PWSETPAGE_BUTTON_NUMBER3  },
    {"4",                  D_COMMON_TITLE_FONT,  QRect(450,  150,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PWSETPAGE_BUTTON_NUMBER4  },
    {"5",                  D_COMMON_TITLE_FONT,  QRect(500,  150,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PWSETPAGE_BUTTON_NUMBER5  },
    {"6",                  D_COMMON_TITLE_FONT,  QRect(550,  150,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PWSETPAGE_BUTTON_NUMBER6  },
    {"7",                  D_COMMON_TITLE_FONT,  QRect(450,  200,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PWSETPAGE_BUTTON_NUMBER7  },
    {"8",                  D_COMMON_TITLE_FONT,  QRect(500,  200,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PWSETPAGE_BUTTON_NUMBER8  },
    {"9",                  D_COMMON_TITLE_FONT,  QRect(550,  200,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PWSETPAGE_BUTTON_NUMBER9  },
    {"0",                  D_COMMON_TITLE_FONT,  QRect(450,  250,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PWSETPAGE_BUTTON_NUMBER0  },
    {QSTR("清除"),          D_COMMON_TITLE_FONT,  QRect(500,  250, 100, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PWSETPAGE_BUTTON_CLEAR    },


    //D_LAYER1_NAVIGATION_BAR
};
int g_PasswordSetPageRomLen = sizeof(g_PicRom_PasswordSetPage)/sizeof(ROMDATA);

BEGIN_MESSAGE_MAP(CPagePasswordset,CPage)
        ON_UPDATE_PAGE()
        ON_LBUTTONDOWN(ID_PWSETPAGE_BUTTON_NUMBER1, OnSetButton1DOWN)
        ON_LBUTTONDOWN(ID_PWSETPAGE_BUTTON_NUMBER2, OnSetButton2DOWN)
        ON_LBUTTONDOWN(ID_PWSETPAGE_BUTTON_NUMBER3, OnSetButton3DOWN)
        ON_LBUTTONDOWN(ID_PWSETPAGE_BUTTON_NUMBER4, OnSetButton4DOWN)
        ON_LBUTTONDOWN(ID_PWSETPAGE_BUTTON_NUMBER5, OnSetButton5DOWN)
        ON_LBUTTONDOWN(ID_PWSETPAGE_BUTTON_NUMBER6, OnSetButton6DOWN)
        ON_LBUTTONDOWN(ID_PWSETPAGE_BUTTON_NUMBER7, OnSetButton7DOWN)
        ON_LBUTTONDOWN(ID_PWSETPAGE_BUTTON_NUMBER8, OnSetButton8DOWN)
        ON_LBUTTONDOWN(ID_PWSETPAGE_BUTTON_NUMBER9, OnSetButton9DOWN)
        ON_LBUTTONDOWN(ID_PWSETPAGE_BUTTON_NUMBER0, OnSetButton0DOWN)
        ON_LBUTTONDOWN(ID_PWSETPAGE_BUTTON_CLEAR,   OnSetButtonClearDOWN)
        ON_LBUTTONDOWN(ID_PWSETPAGE_BUTTON_COMFIRM, OnSetButtonComfirmDOWN)
        ON_LBUTTONDOWN(ID_PWSETPAGE_BUTTON_RETURN,   OnSetButtonReturnDOWN)
        ON_LBUTTONUP(ID_PWSETPAGE_BUTTON_NUMBER1, OnSetButton1UP)
        ON_LBUTTONUP(ID_PWSETPAGE_BUTTON_NUMBER2, OnSetButton2UP)
        ON_LBUTTONUP(ID_PWSETPAGE_BUTTON_NUMBER3, OnSetButton3UP)
        ON_LBUTTONUP(ID_PWSETPAGE_BUTTON_NUMBER4, OnSetButton4UP)
        ON_LBUTTONUP(ID_PWSETPAGE_BUTTON_NUMBER5, OnSetButton5UP)
        ON_LBUTTONUP(ID_PWSETPAGE_BUTTON_NUMBER6, OnSetButton6UP)
        ON_LBUTTONUP(ID_PWSETPAGE_BUTTON_NUMBER7, OnSetButton7UP)
        ON_LBUTTONUP(ID_PWSETPAGE_BUTTON_NUMBER8, OnSetButton8UP)
        ON_LBUTTONUP(ID_PWSETPAGE_BUTTON_NUMBER9, OnSetButton9UP)
        ON_LBUTTONUP(ID_PWSETPAGE_BUTTON_NUMBER0, OnSetButton0UP)
        ON_LBUTTONUP(ID_PWSETPAGE_BUTTON_CLEAR,   OnSetButtonClearUP)
        ON_LBUTTONUP(ID_PWSETPAGE_BUTTON_COMFIRM, OnSetButtonComfirmUP)
        ON_LBUTTONUP(ID_PWSETPAGE_BUTTON_RETURN,   OnSetButtonReturnUP)

        ON_LBUTTONDOWN(ID_PWSETPAGE_EDIT_OLDPASSWORD, OnoldpasswordEdit)
        ON_LBUTTONDOWN(ID_PWSETPAGE_EDIT_NEWPASSWORD, OnnewpasswordEdit)
        ON_LBUTTONDOWN(ID_PWSETPAGE_EDIT_NEWPASSWORDCOMFIRM, OnnewpasswordconfirmEdit)

        END_MESSAGE_MAP()

CPagePasswordset::CPagePasswordset()
{
    m_passwordinputstr = "";
    m_oldpasswordstr = "";
    m_newpasswordstr = "";
    m_newpasswordcomfirmstr = "";
}


void CPagePasswordset::OnUpdatePage()
{

}
void CPagePasswordset::OnSetButton1DOWN()
{
    SetBtnDown(ID_PWSETPAGE_BUTTON_NUMBER1);
}

void CPagePasswordset::OnSetButton2DOWN()
{
    SetBtnDown(ID_PWSETPAGE_BUTTON_NUMBER2);
}

void CPagePasswordset::OnSetButton3DOWN()
{
    SetBtnDown(ID_PWSETPAGE_BUTTON_NUMBER3);
}

void CPagePasswordset::OnSetButton4DOWN()
{
    SetBtnDown(ID_PWSETPAGE_BUTTON_NUMBER4);
}

void CPagePasswordset::OnSetButton5DOWN()
{
    SetBtnDown(ID_PWSETPAGE_BUTTON_NUMBER5);
}

void CPagePasswordset::OnSetButton6DOWN()
{
    SetBtnDown(ID_PWSETPAGE_BUTTON_NUMBER6);
}

void CPagePasswordset::OnSetButton7DOWN()
{
    SetBtnDown(ID_PWSETPAGE_BUTTON_NUMBER7);
}

void CPagePasswordset::OnSetButton8DOWN()
{
    SetBtnDown(ID_PWSETPAGE_BUTTON_NUMBER8);
}

void CPagePasswordset::OnSetButton9DOWN()
{
    SetBtnDown(ID_PWSETPAGE_BUTTON_NUMBER9);
}

void CPagePasswordset::OnSetButton0DOWN()
{
    SetBtnDown(ID_PWSETPAGE_BUTTON_NUMBER0);
}

void CPagePasswordset::OnSetButtonClearDOWN()
{
    SetBtnDown(ID_PWSETPAGE_BUTTON_CLEAR);
}

void CPagePasswordset::OnSetButtonComfirmDOWN()
{

    ((CButton *)GetDlgItem(ID_PWSETPAGE_BUTTON_COMFIRM))->ChangeButtonState(LBUTTON_DOWN);
}

void CPagePasswordset::OnSetButtonReturnDOWN()
{
    ((CButton *)GetDlgItem(ID_PWSETPAGE_BUTTON_RETURN))->ChangeButtonState(LBUTTON_DOWN);
}
void CPagePasswordset::OnSetButton1UP()
{
    AddSelectedEditBox("1");
}
void CPagePasswordset::OnSetButton2UP()
{
    AddSelectedEditBox("2");

}void CPagePasswordset::OnSetButton3UP()
{
    AddSelectedEditBox("3");

}void CPagePasswordset::OnSetButton4UP()
{
    AddSelectedEditBox("4");

}void CPagePasswordset::OnSetButton5UP()
{
    AddSelectedEditBox("5");

}void CPagePasswordset::OnSetButton6UP()
{
    AddSelectedEditBox("6");

}void CPagePasswordset::OnSetButton7UP()
{
    AddSelectedEditBox("7");

}void CPagePasswordset::OnSetButton8UP()
{
    AddSelectedEditBox("8");

}void CPagePasswordset::OnSetButton9UP()
{
    AddSelectedEditBox("9");

}void CPagePasswordset::OnSetButton0UP()
{
    AddSelectedEditBox("0");

}
void CPagePasswordset::OnSetButtonClearUP()
{
    //m_passwordinputstr = "";
    SetBtnUp(ID_PWSETPAGE_BUTTON_CLEAR);
    if (IsEditSelected(ID_PWSETPAGE_EDIT_OLDPASSWORD))
    {
        SetEditStr(ID_PWSETPAGE_EDIT_OLDPASSWORD,"");
    }else if(IsEditSelected(ID_PWSETPAGE_EDIT_NEWPASSWORD))
    {
        SetEditStr(ID_PWSETPAGE_EDIT_NEWPASSWORD,"");

    }else if(IsEditSelected(ID_PWSETPAGE_EDIT_NEWPASSWORDCOMFIRM))
    {
        SetEditStr(ID_PWSETPAGE_EDIT_NEWPASSWORDCOMFIRM,"");

    }

}
void CPagePasswordset::OnSetButtonComfirmUP()
{
    if(GetDlgItem(ID_PWSETPAGE_EDIT_OLDPASSWORD)->GetCtrlText() != pw_True_4Purview)
    {
        CWarningDialog dlg;
        dlg.SetWarningStr(QSTR("原始密码输入错误!"));
        dlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
        dlg.exec();
    }else if(GetDlgItem(ID_PWSETPAGE_EDIT_NEWPASSWORD)->GetCtrlText().length() !=4)
    {
        CWarningDialog dlg;
        dlg.SetWarningStr(QSTR("密码长度需4位!"));
        dlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
        dlg.exec();
    }else if(GetDlgItem(ID_PWSETPAGE_EDIT_NEWPASSWORD)->GetCtrlText() !=
             GetDlgItem(ID_PWSETPAGE_EDIT_NEWPASSWORDCOMFIRM)->GetCtrlText() )
    {
        CWarningDialog dlg;
        dlg.SetWarningStr(QSTR("两次输入密码不同!"));
        dlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
        dlg.exec();
    }else
    {
        QSettings* ConfigIniRead = new QSettings("./system.ini",QSettings::IniFormat,0);
        QSettings* ConfigIniRead2 = new QSettings("./system_init.ini",QSettings::IniFormat,0);
         ConfigIniRead->setValue("/Password/Password_4Purview",GetDlgItem(ID_PWSETPAGE_EDIT_NEWPASSWORD)->GetCtrlText());
         ConfigIniRead2->setValue("/Password/Password_4Purview",GetDlgItem(ID_PWSETPAGE_EDIT_NEWPASSWORD)->GetCtrlText());

         pw_True_4Purview = GetDlgItem(ID_PWSETPAGE_EDIT_NEWPASSWORD)->GetCtrlText();
         delete ConfigIniRead;
         delete ConfigIniRead2;
    }
    qDebug()<<GetDlgItem(ID_PWSETPAGE_EDIT_OLDPASSWORD)->GetCtrlText() << pw_True_4Purview<<
            GetDlgItem(ID_PWSETPAGE_EDIT_NEWPASSWORD)->GetCtrlText() <<
            GetDlgItem(ID_PWSETPAGE_EDIT_NEWPASSWORDCOMFIRM)->GetCtrlText() ;
}
void CPagePasswordset::OnSetButtonReturnUP()
{
    ChangePage(PAGE_ROM_INDEX_PARAMETERSET);
}
void CPagePasswordset::SetBtnDown(int btnId)
{
    CButton *pButton = NULL;
    int nIDArray[] =
    {
        ID_PWSETPAGE_BUTTON_NUMBER1,
        ID_PWSETPAGE_BUTTON_NUMBER2,
        ID_PWSETPAGE_BUTTON_NUMBER3,
        ID_PWSETPAGE_BUTTON_NUMBER4,
        ID_PWSETPAGE_BUTTON_NUMBER5,
        ID_PWSETPAGE_BUTTON_NUMBER6,
        ID_PWSETPAGE_BUTTON_NUMBER7,
        ID_PWSETPAGE_BUTTON_NUMBER8,
        ID_PWSETPAGE_BUTTON_NUMBER9,
        ID_PWSETPAGE_BUTTON_NUMBER0,
        ID_PWSETPAGE_BUTTON_CLEAR
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
void CPagePasswordset::SetBtnUp(int btnId)
{
    CButton *pButton = NULL;
    int nIDArray[] =
    {
        ID_PWSETPAGE_BUTTON_NUMBER1,
        ID_PWSETPAGE_BUTTON_NUMBER2,
        ID_PWSETPAGE_BUTTON_NUMBER3,
        ID_PWSETPAGE_BUTTON_NUMBER4,
        ID_PWSETPAGE_BUTTON_NUMBER5,
        ID_PWSETPAGE_BUTTON_NUMBER6,
        ID_PWSETPAGE_BUTTON_NUMBER7,
        ID_PWSETPAGE_BUTTON_NUMBER8,
        ID_PWSETPAGE_BUTTON_NUMBER9,
        ID_PWSETPAGE_BUTTON_NUMBER0,
        ID_PWSETPAGE_BUTTON_CLEAR
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
void CPagePasswordset::AddSelectedEditBox(QString str)
{
    if (IsEditSelected(ID_PWSETPAGE_EDIT_OLDPASSWORD)) {
        if(GetDlgItem(ID_PWSETPAGE_EDIT_OLDPASSWORD)->GetCtrlText().length() > 3)
        {
            CWarningDialog dlg;
            dlg.SetWarningStr(QSTR("设定密码为4位!"));
            dlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
            dlg.exec();
        }else
        {
            AddEditStr(ID_PWSETPAGE_EDIT_OLDPASSWORD, str);
        }
    }else if(IsEditSelected(ID_PWSETPAGE_EDIT_NEWPASSWORD))
    {
        if(GetDlgItem(ID_PWSETPAGE_EDIT_NEWPASSWORD)->GetCtrlText().length() > 3)
        {
            CWarningDialog dlg;
            dlg.SetWarningStr(QSTR("设定密码为4位!"));
            dlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
            dlg.exec();
        }else
        {
            AddEditStr(ID_PWSETPAGE_EDIT_NEWPASSWORD, str);
        }

    }else if(IsEditSelected(ID_PWSETPAGE_EDIT_NEWPASSWORDCOMFIRM))
    {
        if(GetDlgItem(ID_PWSETPAGE_EDIT_NEWPASSWORDCOMFIRM)->GetCtrlText().length() > 3)
        {
            CWarningDialog dlg;
            dlg.SetWarningStr(QSTR("设定密码为4位!"));
            dlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
            dlg.exec();
        }else
        {
            AddEditStr(ID_PWSETPAGE_EDIT_NEWPASSWORDCOMFIRM, str);
        }
    }
}
//判断输入框是否选定
bool CPagePasswordset::IsEditSelected(int EditId)
{
    CEdit *pEdit = NULL;
    pEdit = (CEdit *)GetDlgItem(EditId);
    if (NULL == pEdit)
    {
        return false;
    }

    return pEdit->GetSelected();
}
void CPagePasswordset::AddEditStr(int EditId, QString str)
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
void CPagePasswordset::SetEditSelected(int EditId, bool flg)
{
    CEdit *pEdit = NULL;
    pEdit = (CEdit *)GetDlgItem(EditId);
    if (NULL == pEdit)
    {
        return;
    }
    pEdit->SetSelected(flg);
}

void CPagePasswordset::SetEditStr(int EditId, QString str)
{
    CEdit *pEdit = NULL;
    pEdit = (CEdit *)GetDlgItem(EditId);
    if (NULL == pEdit)
    {
        return;
    }
    pEdit->SetCtrlText(str);
}
void CPagePasswordset::OnoldpasswordEdit()
{
    SetEditSelected(ID_PWSETPAGE_EDIT_OLDPASSWORD,true);
    SetEditSelected(ID_PWSETPAGE_EDIT_NEWPASSWORD,false);
    SetEditSelected(ID_PWSETPAGE_EDIT_NEWPASSWORDCOMFIRM,false);
}
void CPagePasswordset::OnnewpasswordEdit()
{
    SetEditSelected(ID_PWSETPAGE_EDIT_OLDPASSWORD,false);
    SetEditSelected(ID_PWSETPAGE_EDIT_NEWPASSWORD,true);
    SetEditSelected(ID_PWSETPAGE_EDIT_NEWPASSWORDCOMFIRM,false);
}
void CPagePasswordset::OnnewpasswordconfirmEdit()
{
    SetEditSelected(ID_PWSETPAGE_EDIT_OLDPASSWORD,false);
    SetEditSelected(ID_PWSETPAGE_EDIT_NEWPASSWORD,false);
    SetEditSelected(ID_PWSETPAGE_EDIT_NEWPASSWORDCOMFIRM,true);
}

#include "cwheeldiametersetpage.h"

ROMDATA g_PicRom_WheelDiameterSet[] =
{
    /*string                  font              rc                          foreground color              background color                control type                   ID           */
    {QSTR("轮径设定"), D_FONT(13),  QRect(0  ,    0, 640, 60),        Qt::black,                    Qt::yellow,                 CONTROL_LABEL,        ID_IGNORE                 },

    {"1",                  D_COMMON_TITLE_FONT,  QRect(450,  100,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICWDS_BUTTON_NUMBER1  },
    {"2",                  D_COMMON_TITLE_FONT,  QRect(500,  100,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICWDS_BUTTON_NUMBER2  },
    {"3",                  D_COMMON_TITLE_FONT,  QRect(550,  100,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICWDS_BUTTON_NUMBER3  },
    {"4",                  D_COMMON_TITLE_FONT,  QRect(450,  150,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICWDS_BUTTON_NUMBER4  },
    {"5",                  D_COMMON_TITLE_FONT,  QRect(500,  150,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICWDS_BUTTON_NUMBER5  },
    {"6",                  D_COMMON_TITLE_FONT,  QRect(550,  150,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICWDS_BUTTON_NUMBER6  },
    {"7",                  D_COMMON_TITLE_FONT,  QRect(450,  200,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICWDS_BUTTON_NUMBER7  },
    {"8",                  D_COMMON_TITLE_FONT,  QRect(500,  200,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICWDS_BUTTON_NUMBER8  },
    {"9",                  D_COMMON_TITLE_FONT,  QRect(550,  200,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICWDS_BUTTON_NUMBER9  },
    {"0",                  D_COMMON_TITLE_FONT,  QRect(450,  250,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICWDS_BUTTON_NUMBER0  },
    {QSTR("清除"),          D_COMMON_TITLE_FONT,  QRect(500,  250, 100, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICWDS_BUTTON_CLEAR    },

    {QSTR("原轮径值 "),        D_COMMON_TITLE_FONT,  QRect(20 ,  110, 80, 50),        Qt::yellow,                  Qt::black,                  CONTROL_LABEL,        ID_IGNORE                 },
    {QSTR("新轮径值"),        D_COMMON_TITLE_FONT,  QRect(20 ,  170, 80, 50),        Qt::yellow,                  Qt::black,                  CONTROL_LABEL,        ID_IGNORE                 },
    {"(610<=D<=656)",      D_COMMON_TITLE_FONT,  QRect(40 ,  230, 240, 50),        Qt::yellow,                  Qt::black,                  CONTROL_LABEL,        ID_IGNORE                 },
    {"mm",                 D_COMMON_TITLE_FONT,  QRect(380 , 110,  50, 50),        Qt::yellow,                  Qt::black,                  CONTROL_LABEL,        ID_IGNORE                 },
    {"mm",                 D_COMMON_TITLE_FONT,  QRect(380 , 170,  50, 50),        Qt::yellow,                  Qt::black,                  CONTROL_LABEL,        ID_IGNORE                 },

    {"MA",                 D_COMMON_TITLE_FONT,  QRect(120 , 80,  70, 20),        Qt::yellow,                  Qt::black,                  CONTROL_LABEL,        ID_IGNORE                 },
    {"P",                 D_COMMON_TITLE_FONT,  QRect(210 , 80,  70, 20),        Qt::yellow,                  Qt::black,                  CONTROL_LABEL,        ID_IGNORE                 },
    {"MB",                 D_COMMON_TITLE_FONT,  QRect(300 , 80,  70, 20),        Qt::yellow,                  Qt::black,                  CONTROL_LABEL,        ID_IGNORE                 },

    {"580",                D_COMMON_TITLE_FONT,  QRect(120,  110,  70, 50),        Qt::yellow,                    Qt::black,                 CONTROL_LABEL,        ID_PICWDS_LABEL_ORIGINALSET},
    {"80",                 D_COMMON_TITLE_FONT,  QRect(120,  170,  70, 50),        Qt::yellow,                    Qt::black,                 CONTROL_EDIT,         ID_PICWDS_EDIT_DIAMETER   },

    {"580",                D_COMMON_TITLE_FONT,  QRect(210,  110,  70, 50),        Qt::yellow,                    Qt::black,                 CONTROL_LABEL,        ID_PICWDS_LABEL_ORIGINALSET2},
    {"80",                 D_COMMON_TITLE_FONT,  QRect(210,  170,  70, 50),        Qt::yellow,                    Qt::black,                 CONTROL_EDIT,         ID_PICWDS_EDIT_DIAMETER2   },

    {"580",                D_COMMON_TITLE_FONT,  QRect(300,  110,  70, 50),        Qt::yellow,                    Qt::black,                 CONTROL_LABEL,        ID_PICWDS_LABEL_ORIGINALSET3},
    {"80",                 D_COMMON_TITLE_FONT,  QRect(300,  170,  70, 50),        Qt::yellow,                    Qt::black,                 CONTROL_EDIT,         ID_PICWDS_EDIT_DIAMETER3   },

    {QSTR("确认"),                 D_COMMON_TITLE_FONT,  QRect(160,  380, 120, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICWDS_BUTTON_OK       },
    {QSTR("退出"),               D_COMMON_TITLE_FONT,  QRect(360,  380, 120, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICWDS_BUTTON_QUIT     },

};
int g_WheelDiameterSetRomLen = sizeof(g_PicRom_WheelDiameterSet)/sizeof(ROMDATA);

BEGIN_MESSAGE_MAP(CWheelDiameterSetPage,CPage)
        ON_UPDATE_PAGE()
        ON_LBUTTONDOWN(ID_PICWDS_BUTTON_QUIT, OnQuitButtonDown)
        ON_LBUTTONUP(ID_PICWDS_BUTTON_QUIT, OnQuitButtonUp)
        ON_LBUTTONDOWN(ID_PICWDS_BUTTON_OK, OnOKDown)
        ON_LBUTTONUP(ID_PICWDS_BUTTON_OK, OnOKUp)
        ON_LBUTTONDOWN(ID_PICWDS_EDIT_DIAMETER, OnDiameterEdit)
        ON_LBUTTONDOWN(ID_PICWDS_EDIT_DIAMETER2, OnDiameterEdit2)
        ON_LBUTTONDOWN(ID_PICWDS_EDIT_DIAMETER3, OnDiameterEdit3)

        ON_LBUTTONUP(ID_PICWDS_BUTTON_NUMBER1, OnNum1Up)
        ON_LBUTTONUP(ID_PICWDS_BUTTON_NUMBER2, OnNum2Up)
        ON_LBUTTONUP(ID_PICWDS_BUTTON_NUMBER3, OnNum3Up)
        ON_LBUTTONUP(ID_PICWDS_BUTTON_NUMBER4, OnNum4Up)
        ON_LBUTTONUP(ID_PICWDS_BUTTON_NUMBER5, OnNum5Up)
        ON_LBUTTONUP(ID_PICWDS_BUTTON_NUMBER6, OnNum6Up)
        ON_LBUTTONUP(ID_PICWDS_BUTTON_NUMBER7, OnNum7Up)
        ON_LBUTTONUP(ID_PICWDS_BUTTON_NUMBER8, OnNum8Up)
        ON_LBUTTONUP(ID_PICWDS_BUTTON_NUMBER9, OnNum9Up)
        ON_LBUTTONUP(ID_PICWDS_BUTTON_NUMBER0, OnNum0Up)
        ON_LBUTTONUP(ID_PICWDS_BUTTON_CLEAR, OnClearUp)
        ON_LBUTTONDOWN(ID_PICWDS_BUTTON_NUMBER1, OnNum1Down)
        ON_LBUTTONDOWN(ID_PICWDS_BUTTON_NUMBER2, OnNum2Down)
        ON_LBUTTONDOWN(ID_PICWDS_BUTTON_NUMBER3, OnNum3Down)
        ON_LBUTTONDOWN(ID_PICWDS_BUTTON_NUMBER4, OnNum4Down)
        ON_LBUTTONDOWN(ID_PICWDS_BUTTON_NUMBER5, OnNum5Down)
        ON_LBUTTONDOWN(ID_PICWDS_BUTTON_NUMBER6, OnNum6Down)
        ON_LBUTTONDOWN(ID_PICWDS_BUTTON_NUMBER7, OnNum7Down)
        ON_LBUTTONDOWN(ID_PICWDS_BUTTON_NUMBER8, OnNum8Down)
        ON_LBUTTONDOWN(ID_PICWDS_BUTTON_NUMBER9, OnNum9Down)
        ON_LBUTTONDOWN(ID_PICWDS_BUTTON_NUMBER0, OnNum0Down)
        ON_LBUTTONDOWN(ID_PICWDS_BUTTON_CLEAR, OnClearDown)


END_MESSAGE_MAP()

CWheelDiameterSetPage::CWheelDiameterSetPage()
{
}
void CWheelDiameterSetPage::OnInitPage()
{
    SetEditSelected(ID_PICWDS_EDIT_DIAMETER, true);
    SetEditSelected(ID_PICWDS_EDIT_DIAMETER2, false);
    SetEditSelected(ID_PICWDS_EDIT_DIAMETER3, false);

    GetDlgItem(ID_PICWDS_EDIT_DIAMETER)->SetCtrlText("");
    GetDlgItem(ID_PICWDS_EDIT_DIAMETER2)->SetCtrlText("");
    GetDlgItem(ID_PICWDS_EDIT_DIAMETER3)->SetCtrlText("");

    int var = IDUCT_WheelDiamMa_U16 ;
    int var2 = IDUCT_WheelDiamP_U16 ;
    int var3 = IDUCT_WheelDiamMb_U16 ;


   // m_WheelDiameter = var.toString();
//    GetDlgItem(ID_PICWDS_LABEL_ORIGINALSET)->SetCtrlText(QString::number(var));
//    GetDlgItem(ID_PICWDS_LABEL_ORIGINALSET2)->SetCtrlText(QString::number(var2));
//    GetDlgItem(ID_PICWDS_LABEL_ORIGINALSET3)->SetCtrlText(QString::number(var3));
    GetDlgItem(ID_PICWDS_LABEL_ORIGINALSET)->SetCtrlText(QString::number(IDUCT_WheelDiamMa_U16 ));
    GetDlgItem(ID_PICWDS_LABEL_ORIGINALSET2)->SetCtrlText(QString::number(IDUCT_WheelDiamP_U16 ));
    GetDlgItem(ID_PICWDS_LABEL_ORIGINALSET3)->SetCtrlText(QString::number(IDUCT_WheelDiamMb_U16 ));

    m_btnPress = false;
}
void CWheelDiameterSetPage::OnUpdatePage()
{
    if(m_btnPress)
    {
        CButton *pButton = NULL;
        pButton = (CButton*)GetDlgItem(ID_PICWDS_BUTTON_OK);
        pButton->ChangeButtonState(LBUTTON_DOWN);

        static int times = 0;
        times++;
        if (times%times_n == 0)
        {
            WHEEL_valid_time--;
            if (WHEEL_valid_time==0)
            {
                m_btnPress = false;
                IDUCT_DiameterUpdate_B1 = false;
                ((CButton*)GetDlgItem(ID_PICWDS_BUTTON_OK))->ChangeButtonState(LBUTTON_UP);
            }

        }

    }

    int var = IDUCT_WheelDiamMa_U16 ;
    int var2 = IDUCT_WheelDiamP_U16 ;
    //QVariant var3 = IDUCT_WheelDiamMb_U16 + 580;
    int var3 = IDUCT_WheelDiamMb_U16 ;


   // m_WheelDiameter = var.toString();
    GetDlgItem(ID_PICWDS_LABEL_ORIGINALSET)->SetCtrlText(QString::number(var));//+"+"+QString::number( IDUCT_DiameterUpdate_B1 )
    GetDlgItem(ID_PICWDS_LABEL_ORIGINALSET2)->SetCtrlText(QString::number(var2));//+"+"+QString::number( MVBsendData[16]*256+MVBsendData[17] )
    GetDlgItem(ID_PICWDS_LABEL_ORIGINALSET3)->SetCtrlText(QString::number(var3));//+"+"+QString::number(  WHEEL_valid_time)

}
void CWheelDiameterSetPage::AddSelectedEditBox(QString str)
{
    if (IsEditSelected(ID_PICWDS_EDIT_DIAMETER))
    {
        AddEditStr(ID_PICWDS_EDIT_DIAMETER, str);
    }

    if (IsEditSelected(ID_PICWDS_EDIT_DIAMETER2))
    {
        AddEditStr(ID_PICWDS_EDIT_DIAMETER2, str);
    }
    if (IsEditSelected(ID_PICWDS_EDIT_DIAMETER3))
    {
        AddEditStr(ID_PICWDS_EDIT_DIAMETER3, str);
    }


}
bool CWheelDiameterSetPage::IsEditSelected(int EditId)
{
    CEdit *pEdit = NULL;
    pEdit = (CEdit *)GetDlgItem(EditId);
    if (NULL == pEdit)
    {
        return false;
    }

    return pEdit->GetSelected();
}
void CWheelDiameterSetPage::AddEditStr(int EditId, QString str)
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
void CWheelDiameterSetPage::SetEditSelected(int EditId, bool flg)
{
    CEdit *pEdit = NULL;
    pEdit = (CEdit *)GetDlgItem(EditId);
    if (NULL == pEdit)
    {
        return;
    }
    pEdit->SetSelected(flg);
}

void CWheelDiameterSetPage::SetSelectedEditBox(QString str)
{
    if (IsEditSelected(ID_PICWDS_EDIT_DIAMETER)) {
        SetEditStr(ID_PICWDS_EDIT_DIAMETER, str);
    }
    if (IsEditSelected(ID_PICWDS_EDIT_DIAMETER2)) {
        SetEditStr(ID_PICWDS_EDIT_DIAMETER2, str);
    }

    if (IsEditSelected(ID_PICWDS_EDIT_DIAMETER3)) {
        SetEditStr(ID_PICWDS_EDIT_DIAMETER3, str);
    }

}
void CWheelDiameterSetPage::SetEditStr(int EditId, QString str)
{
    CEdit *pEdit = NULL;
    pEdit = (CEdit *)GetDlgItem(EditId);
    if (NULL == pEdit)
    {
        return;
    }
    pEdit->SetCtrlText(str);
}
void CWheelDiameterSetPage::SetBtnDown(int btnId)
{
    CButton *pButton = NULL;
    int nIDArray[] =
    {
        ID_PICWDS_BUTTON_NUMBER1,
        ID_PICWDS_BUTTON_NUMBER2,
        ID_PICWDS_BUTTON_NUMBER3,
        ID_PICWDS_BUTTON_NUMBER4,
        ID_PICWDS_BUTTON_NUMBER5,
        ID_PICWDS_BUTTON_NUMBER6,
        ID_PICWDS_BUTTON_NUMBER7,
        ID_PICWDS_BUTTON_NUMBER8,
        ID_PICWDS_BUTTON_NUMBER9,
        ID_PICWDS_BUTTON_NUMBER0,
        ID_PICWDS_BUTTON_CLEAR
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
void CWheelDiameterSetPage::SetBtnUp(int btnId)
{
    CButton *pButton = NULL;
    int nIDArray[] =
    {
        ID_PICWDS_BUTTON_NUMBER1,
        ID_PICWDS_BUTTON_NUMBER2,
        ID_PICWDS_BUTTON_NUMBER3,
        ID_PICWDS_BUTTON_NUMBER4,
        ID_PICWDS_BUTTON_NUMBER5,
        ID_PICWDS_BUTTON_NUMBER6,
        ID_PICWDS_BUTTON_NUMBER7,
        ID_PICWDS_BUTTON_NUMBER8,
        ID_PICWDS_BUTTON_NUMBER9,
        ID_PICWDS_BUTTON_NUMBER0,
        ID_PICWDS_BUTTON_CLEAR
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


void CWheelDiameterSetPage::OnDiameterEdit()
{
    if(m_btnPress == false)
    {
    SetEditSelected(ID_PICWDS_EDIT_DIAMETER, true);
    SetEditSelected(ID_PICWDS_EDIT_DIAMETER2, false);
    SetEditSelected(ID_PICWDS_EDIT_DIAMETER3, false);
    }
}
void CWheelDiameterSetPage::OnDiameterEdit2()
{
    if(m_btnPress == false)
    {
    SetEditSelected(ID_PICWDS_EDIT_DIAMETER2, true);
    SetEditSelected(ID_PICWDS_EDIT_DIAMETER3, false);
    SetEditSelected(ID_PICWDS_EDIT_DIAMETER, false);
    }
}
void CWheelDiameterSetPage::OnDiameterEdit3()
{
    if(m_btnPress == false)
    {
    SetEditSelected(ID_PICWDS_EDIT_DIAMETER3, true);
    SetEditSelected(ID_PICWDS_EDIT_DIAMETER, false);
    SetEditSelected(ID_PICWDS_EDIT_DIAMETER2, false);
    }
}
void CWheelDiameterSetPage::OnQuitButtonDown()
{
    ((CButton*)GetDlgItem(ID_PICWDS_BUTTON_QUIT))->ChangeButtonState(LBUTTON_DOWN);
}

void CWheelDiameterSetPage::OnQuitButtonUp()
{
    if(m_btnPress == false)
    {
    ((CButton*)GetDlgItem(ID_PICWDS_BUTTON_QUIT))->ChangeButtonState(LBUTTON_UP);
    ChangePage(PAGE_ROM_INDEX_PARAMETERSET);
    }
}
void CWheelDiameterSetPage::OnOKUp()
{
    if(m_btnPress== false)
    {

        WHEEL_valid_time = 5;
        m_btnPress = true;
        IDUCT_DiameterUpdate_B1 = true;
    QString strEditString;
    QVariant var;
    QSettings* ConfigIniRead = new QSettings("./system.ini",QSettings::IniFormat,0);

    if(IsEditSelected(ID_PICWDS_EDIT_DIAMETER))
    {
        strEditString = GetDlgItem(ID_PICWDS_EDIT_DIAMETER)->GetCtrlText();
        if(strEditString.length() != 3)
        {
            //return;// Illegal Data
            CWarningDialog warningDlg;
            warningDlg.SetWarningStr(QSTR("轮径值超出范围!"));
            warningDlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
            warningDlg.exec();
            SetEditSelected(ID_PICWDS_EDIT_DIAMETER, true);
            SetEditSelected(ID_PICWDS_EDIT_DIAMETER2, false);
            SetEditSelected(ID_PICWDS_EDIT_DIAMETER3, false);
            GetDlgItem(ID_PICWDS_EDIT_DIAMETER)->SetCtrlText("");
        }else if(strEditString.toULong() > 656 || strEditString.toULong() < 610)
        {
            CWarningDialog warningDlg;
            warningDlg.SetWarningStr(QSTR("轮径值超出范围!"));
            warningDlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
            warningDlg.exec();
            SetEditSelected(ID_PICWDS_EDIT_DIAMETER, true);
            SetEditSelected(ID_PICWDS_EDIT_DIAMETER2, false);
            SetEditSelected(ID_PICWDS_EDIT_DIAMETER3, false);
            GetDlgItem(ID_PICWDS_EDIT_DIAMETER)->SetCtrlText("");
        }
        else
        {
            m_WheelDiameter = strEditString;
            ConfigIniRead->setValue("/WheelDiameter/Wheela",strEditString);

            var = m_WheelDiameter;
            IDUCT_WheelDiamMa_U16 =  var.toInt()  ;
           // ChangePage(PAGE_ROM_INDEX_PARAMETERSET);
        }
        delete ConfigIniRead;

    }

    if(IsEditSelected(ID_PICWDS_EDIT_DIAMETER2))
    {
        strEditString = GetDlgItem(ID_PICWDS_EDIT_DIAMETER2)->GetCtrlText();
        if(strEditString.length() != 3)
        {
            //return;// Illegal Data
            CWarningDialog warningDlg;
            warningDlg.SetWarningStr(QSTR("轮径值超出范围!"));
            warningDlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
            warningDlg.exec();
            SetEditSelected(ID_PICWDS_EDIT_DIAMETER, false);
            SetEditSelected(ID_PICWDS_EDIT_DIAMETER2, true);
            SetEditSelected(ID_PICWDS_EDIT_DIAMETER3, false);
            GetDlgItem(ID_PICWDS_EDIT_DIAMETER2)->SetCtrlText("");
        }else if(strEditString.toULong() > 656 || strEditString.toULong() < 610)
        {
            CWarningDialog warningDlg;
            warningDlg.SetWarningStr(QSTR("轮径值超出范围!"));
            warningDlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
            warningDlg.exec();
            SetEditSelected(ID_PICWDS_EDIT_DIAMETER, false);
            SetEditSelected(ID_PICWDS_EDIT_DIAMETER2, true);
            SetEditSelected(ID_PICWDS_EDIT_DIAMETER3, false);
            GetDlgItem(ID_PICWDS_EDIT_DIAMETER2)->SetCtrlText("");
        }
        else
        {
            m_WheelDiameter = strEditString;
            ConfigIniRead->setValue("/WheelDiameter/Wheelp",strEditString);

            var = m_WheelDiameter;
            IDUCT_WheelDiamP_U16 = var.toInt();
           // ChangePage(PAGE_ROM_INDEX_PARAMETERSET);
        }
        delete ConfigIniRead;

    }
    if(IsEditSelected(ID_PICWDS_EDIT_DIAMETER3))
    {
        strEditString = GetDlgItem(ID_PICWDS_EDIT_DIAMETER3)->GetCtrlText();
        if(strEditString.length() != 3)
        {
            //return;// Illegal Data
            CWarningDialog warningDlg;
            warningDlg.SetWarningStr(QSTR("轮径值超出范围!"));
            warningDlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
            warningDlg.exec();
            SetEditSelected(ID_PICWDS_EDIT_DIAMETER, false);
            SetEditSelected(ID_PICWDS_EDIT_DIAMETER2, false);
            SetEditSelected(ID_PICWDS_EDIT_DIAMETER3, true);
            GetDlgItem(ID_PICWDS_EDIT_DIAMETER3)->SetCtrlText("");
        }else if(strEditString.toULong() > 656 || strEditString.toULong() < 610)
        {
            CWarningDialog warningDlg;
            warningDlg.SetWarningStr(QSTR("轮径值超出范围!"));
            warningDlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
            warningDlg.exec();
            SetEditSelected(ID_PICWDS_EDIT_DIAMETER, false);
            SetEditSelected(ID_PICWDS_EDIT_DIAMETER2, false);
            SetEditSelected(ID_PICWDS_EDIT_DIAMETER3, true);
            GetDlgItem(ID_PICWDS_EDIT_DIAMETER3)->SetCtrlText("");
        }
        else
        {
            m_WheelDiameter = strEditString;
            ConfigIniRead->setValue("/WheelDiameter/Wheelb",strEditString);

            var = m_WheelDiameter;
            IDUCT_WheelDiamMb_U16 =  var.toInt();
           // ChangePage(PAGE_ROM_INDEX_PARAMETERSET);
        }
        delete ConfigIniRead;

    }
}
//    strEditString = GetDlgItem(ID_PICWDS_EDIT_DIAMETER)->GetCtrlText();
//    if(strEditString.length() != 3)
//    {
//        //return;// Illegal Data
//        CWarningDialog warningDlg;
//        warningDlg.SetWarningStr(QSTR("轮径值超出范围!"));
//        warningDlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
//        warningDlg.exec();
//        SetEditSelected(ID_PICWDS_EDIT_DIAMETER, true);
//        GetDlgItem(ID_PICWDS_EDIT_DIAMETER)->SetCtrlText("");
//    }else if(strEditString.toULong() > 660 || strEditString.toULong() < 580)
//    {
//        CWarningDialog warningDlg;
//        warningDlg.SetWarningStr(QSTR("轮径值超出范围!"));
//        warningDlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
//        warningDlg.exec();
//        SetEditSelected(ID_PICWDS_EDIT_DIAMETER, true);
//        GetDlgItem(ID_PICWDS_EDIT_DIAMETER)->SetCtrlText("");
//    }
//    else
//    {
//        m_WheelDiameter = strEditString;
//        ConfigIniRead->setValue("/WheelDiameter/Wheel",strEditString);

//        var = m_WheelDiameter;
//        IDUCT_WheelDiamMa_U16 =  var.toInt()  ;
//       // ChangePage(PAGE_ROM_INDEX_PARAMETERSET);
//    }
//    delete ConfigIniRead;
}
void CWheelDiameterSetPage::OnOKDown()
{/*
    CButton *pButton = NULL;
    pButton = (CButton*)GetDlgItem(ID_PICWDS_BUTTON_OK);
    pButton->ChangeButtonState(LBUTTON_DOWN);*/
}


void CWheelDiameterSetPage::OnNum1Down()
{
    SetBtnDown(ID_PICWDS_BUTTON_NUMBER1);
}
void CWheelDiameterSetPage::OnNum2Down()
{
    SetBtnDown(ID_PICWDS_BUTTON_NUMBER2);
}
void CWheelDiameterSetPage::OnNum3Down()
{
    SetBtnDown(ID_PICWDS_BUTTON_NUMBER3);
}
void CWheelDiameterSetPage::OnNum4Down()
{
    SetBtnDown(ID_PICWDS_BUTTON_NUMBER4);
}
void CWheelDiameterSetPage::OnNum5Down()
{
    SetBtnDown(ID_PICWDS_BUTTON_NUMBER5);
}
void CWheelDiameterSetPage::OnNum6Down()
{
    SetBtnDown(ID_PICWDS_BUTTON_NUMBER6);
}
void CWheelDiameterSetPage::OnNum7Down()
{
    SetBtnDown(ID_PICWDS_BUTTON_NUMBER7);
}
void CWheelDiameterSetPage::OnNum8Down()
{
    SetBtnDown(ID_PICWDS_BUTTON_NUMBER8);
}
void CWheelDiameterSetPage::OnNum9Down()
{
    SetBtnDown(ID_PICWDS_BUTTON_NUMBER9);
}
void CWheelDiameterSetPage::OnNum0Down()
{
    SetBtnDown(ID_PICWDS_BUTTON_NUMBER0);
}
void CWheelDiameterSetPage::OnClearDown()
{
    SetBtnDown(ID_PICWDS_BUTTON_CLEAR);
}
void CWheelDiameterSetPage::OnNum1Up()
{
    if(m_btnPress == false)
    {
    QString strLength;

    SetBtnUp(ID_PICWDS_BUTTON_NUMBER1);
    if (IsEditSelected(ID_PICWDS_EDIT_DIAMETER)) {
        strLength = GetDlgItem(ID_PICWDS_EDIT_DIAMETER)->GetCtrlText();
    }
    if (IsEditSelected(ID_PICWDS_EDIT_DIAMETER2)) {
        strLength = GetDlgItem(ID_PICWDS_EDIT_DIAMETER2)->GetCtrlText();
    }

    if (IsEditSelected(ID_PICWDS_EDIT_DIAMETER3)) {
        strLength = GetDlgItem(ID_PICWDS_EDIT_DIAMETER3)->GetCtrlText();
    }

    if(strLength.length() < 3)
    {
        AddSelectedEditBox("1");
    }
    else
    {
        CWarningDialog warningDlg;
        warningDlg.SetWarningStr(QSTR("轮径值超出范围!"));
        warningDlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
        warningDlg.exec();
    }

    }
}
void CWheelDiameterSetPage::OnNum2Up()
{
    if(m_btnPress == false)
    {
    QString strLength;

    SetBtnUp(ID_PICWDS_BUTTON_NUMBER2);
    if (IsEditSelected(ID_PICWDS_EDIT_DIAMETER)) {
        strLength = GetDlgItem(ID_PICWDS_EDIT_DIAMETER)->GetCtrlText();
    }
    if (IsEditSelected(ID_PICWDS_EDIT_DIAMETER2)) {
        strLength = GetDlgItem(ID_PICWDS_EDIT_DIAMETER2)->GetCtrlText();
    }

    if (IsEditSelected(ID_PICWDS_EDIT_DIAMETER3)) {
        strLength = GetDlgItem(ID_PICWDS_EDIT_DIAMETER3)->GetCtrlText();
    }

    if(strLength.length() < 3)
    {
        AddSelectedEditBox("2");
    }
    else
    {
        CWarningDialog warningDlg;
        warningDlg.SetWarningStr(QSTR("轮径值超出范围!"));
        warningDlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
        warningDlg.exec();
    }

    }
}
void CWheelDiameterSetPage::OnNum3Up()
{
    if(m_btnPress == false)
    {
    QString strLength;

    SetBtnUp(ID_PICWDS_BUTTON_NUMBER3);
    if (IsEditSelected(ID_PICWDS_EDIT_DIAMETER)) {
        strLength = GetDlgItem(ID_PICWDS_EDIT_DIAMETER)->GetCtrlText();
    }
    if (IsEditSelected(ID_PICWDS_EDIT_DIAMETER2)) {
        strLength = GetDlgItem(ID_PICWDS_EDIT_DIAMETER2)->GetCtrlText();
    }

    if (IsEditSelected(ID_PICWDS_EDIT_DIAMETER3)) {
        strLength = GetDlgItem(ID_PICWDS_EDIT_DIAMETER3)->GetCtrlText();
    }
    if(strLength.length() < 3)
    {
        AddSelectedEditBox("3");
    }
    else
    {
        CWarningDialog warningDlg;
        warningDlg.SetWarningStr(QSTR("轮径值超出范围!"));
        warningDlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
        warningDlg.exec();
    }
    }
}
void CWheelDiameterSetPage::OnNum4Up()
{
    if(m_btnPress == false)
    {
    QString strLength;

    SetBtnUp(ID_PICWDS_BUTTON_NUMBER4);
    if (IsEditSelected(ID_PICWDS_EDIT_DIAMETER)) {
        strLength = GetDlgItem(ID_PICWDS_EDIT_DIAMETER)->GetCtrlText();
    }
    if (IsEditSelected(ID_PICWDS_EDIT_DIAMETER2)) {
        strLength = GetDlgItem(ID_PICWDS_EDIT_DIAMETER2)->GetCtrlText();
    }

    if (IsEditSelected(ID_PICWDS_EDIT_DIAMETER3)) {
        strLength = GetDlgItem(ID_PICWDS_EDIT_DIAMETER3)->GetCtrlText();
    }
    if(strLength.length() < 3)
    {
        AddSelectedEditBox("4");
    }
    else
    {
        CWarningDialog warningDlg;
        warningDlg.SetWarningStr(QSTR("轮径值超出范围!"));
        warningDlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
        warningDlg.exec();
    }
}
}
void CWheelDiameterSetPage::OnNum5Up()
{
    if(m_btnPress == false)
    {
    QString strLength;

    SetBtnUp(ID_PICWDS_BUTTON_NUMBER5);
    if (IsEditSelected(ID_PICWDS_EDIT_DIAMETER)) {
        strLength = GetDlgItem(ID_PICWDS_EDIT_DIAMETER)->GetCtrlText();
    }
    if (IsEditSelected(ID_PICWDS_EDIT_DIAMETER2)) {
        strLength = GetDlgItem(ID_PICWDS_EDIT_DIAMETER2)->GetCtrlText();
    }

    if (IsEditSelected(ID_PICWDS_EDIT_DIAMETER3)) {
        strLength = GetDlgItem(ID_PICWDS_EDIT_DIAMETER3)->GetCtrlText();
    }
    if(strLength.length() < 3)
    {
        AddSelectedEditBox("5");
    }
    else
    {
        CWarningDialog warningDlg;
        warningDlg.SetWarningStr(QSTR("轮径值超出范围!"));
        warningDlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
        warningDlg.exec();
    }
}
}
void CWheelDiameterSetPage::OnNum6Up()
{
    if(m_btnPress == false)
    {
    QString strLength;

    SetBtnUp(ID_PICWDS_BUTTON_NUMBER6);
    if (IsEditSelected(ID_PICWDS_EDIT_DIAMETER)) {
        strLength = GetDlgItem(ID_PICWDS_EDIT_DIAMETER)->GetCtrlText();
    }
    if (IsEditSelected(ID_PICWDS_EDIT_DIAMETER2)) {
        strLength = GetDlgItem(ID_PICWDS_EDIT_DIAMETER2)->GetCtrlText();
    }

    if (IsEditSelected(ID_PICWDS_EDIT_DIAMETER3)) {
        strLength = GetDlgItem(ID_PICWDS_EDIT_DIAMETER3)->GetCtrlText();
    }
    if(strLength.length() < 3)
    {
        AddSelectedEditBox("6");
    }
    else
    {
        CWarningDialog warningDlg;
        warningDlg.SetWarningStr(QSTR("轮径值超出范围!"));
        warningDlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
        warningDlg.exec();
    }
}
}
void CWheelDiameterSetPage::OnNum7Up()
{
    if(m_btnPress == false)
    {
    QString strLength;

    SetBtnUp(ID_PICWDS_BUTTON_NUMBER7);
    if (IsEditSelected(ID_PICWDS_EDIT_DIAMETER)) {
        strLength = GetDlgItem(ID_PICWDS_EDIT_DIAMETER)->GetCtrlText();
    }
    if (IsEditSelected(ID_PICWDS_EDIT_DIAMETER2)) {
        strLength = GetDlgItem(ID_PICWDS_EDIT_DIAMETER2)->GetCtrlText();
    }

    if (IsEditSelected(ID_PICWDS_EDIT_DIAMETER3)) {
        strLength = GetDlgItem(ID_PICWDS_EDIT_DIAMETER3)->GetCtrlText();
    }
    if(strLength.length() < 3)
    {
        AddSelectedEditBox("7");
    }
    else
    {
        CWarningDialog warningDlg;
        warningDlg.SetWarningStr(QSTR("轮径值超出范围!"));
        warningDlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
        warningDlg.exec();
    }
}
}
void CWheelDiameterSetPage::OnNum8Up()
{
    if(m_btnPress == false)
    {
    QString strLength;

    SetBtnUp(ID_PICWDS_BUTTON_NUMBER8);
    if (IsEditSelected(ID_PICWDS_EDIT_DIAMETER)) {
        strLength = GetDlgItem(ID_PICWDS_EDIT_DIAMETER)->GetCtrlText();
    }
    if (IsEditSelected(ID_PICWDS_EDIT_DIAMETER2)) {
        strLength = GetDlgItem(ID_PICWDS_EDIT_DIAMETER2)->GetCtrlText();
    }

    if (IsEditSelected(ID_PICWDS_EDIT_DIAMETER3)) {
        strLength = GetDlgItem(ID_PICWDS_EDIT_DIAMETER3)->GetCtrlText();
    }
    if(strLength.length() < 3)
    {
        AddSelectedEditBox("8");
    }
    else
    {
        CWarningDialog warningDlg;
        warningDlg.SetWarningStr(QSTR("轮径值超出范围!"));
        warningDlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
        warningDlg.exec();
    }
}
}
void CWheelDiameterSetPage::OnNum9Up()
{
    if(m_btnPress == false)
    {
    QString strLength;

    SetBtnUp(ID_PICWDS_BUTTON_NUMBER9);
    if (IsEditSelected(ID_PICWDS_EDIT_DIAMETER)) {
        strLength = GetDlgItem(ID_PICWDS_EDIT_DIAMETER)->GetCtrlText();
    }
    if (IsEditSelected(ID_PICWDS_EDIT_DIAMETER2)) {
        strLength = GetDlgItem(ID_PICWDS_EDIT_DIAMETER2)->GetCtrlText();
    }

    if (IsEditSelected(ID_PICWDS_EDIT_DIAMETER3)) {
        strLength = GetDlgItem(ID_PICWDS_EDIT_DIAMETER3)->GetCtrlText();
    }
    if(strLength.length() < 3)
    {
        AddSelectedEditBox("9");
    }
    else
    {
        CWarningDialog warningDlg;
        warningDlg.SetWarningStr(QSTR("轮径值超出范围!"));
        warningDlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
        warningDlg.exec();
    }
}
}
void CWheelDiameterSetPage::OnNum0Up()
{
    if(m_btnPress == false)
    {
    QString strLength;

    SetBtnUp(ID_PICWDS_BUTTON_NUMBER0);
    if (IsEditSelected(ID_PICWDS_EDIT_DIAMETER)) {
        strLength = GetDlgItem(ID_PICWDS_EDIT_DIAMETER)->GetCtrlText();
    }
    if (IsEditSelected(ID_PICWDS_EDIT_DIAMETER2)) {
        strLength = GetDlgItem(ID_PICWDS_EDIT_DIAMETER2)->GetCtrlText();
    }

    if (IsEditSelected(ID_PICWDS_EDIT_DIAMETER3)) {
        strLength = GetDlgItem(ID_PICWDS_EDIT_DIAMETER3)->GetCtrlText();
    }
    if(strLength.length() < 3)
    {
        AddSelectedEditBox("0");
    }
    else
    {
        CWarningDialog warningDlg;
        warningDlg.SetWarningStr(QSTR("轮径值超出范围!"));
        warningDlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
        warningDlg.exec();
    }
}
}
void CWheelDiameterSetPage::OnClearUp()
{
    if(m_btnPress == false)
    {
    SetBtnUp(ID_PICWDS_BUTTON_CLEAR);
    SetSelectedEditBox("");
    }
}

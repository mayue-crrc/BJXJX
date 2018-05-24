#include "cdrivercodelistpage.h"
#include "cdrivercodemanagepage.h"

extern vector<CPage*> g_PageVec;
ROMDATA g_PicRom_DriverCodeList[] =
{
    /*string                   font                            rc                          foreground color           background color               control type                   ID           */
    {QSTR("工号列表"),     D_FONT(13), QRect(0,0,640,60),                          Qt::black,                  Qt::yellow,                 CONTROL_LABEL,            ID_PICDCL_LABEL_TITLE     },
    //label
    {"",             D_DEFAULT_FONT,      QRect(112, 102, 100,  50),                  Qt::yellow,                 Qt::black,                  CONTROL_BUTTON,            ID_PICDCL_BUTTON_1_1       },
    {"",             D_DEFAULT_FONT,      QRect(217, 102, 100,  50),                  Qt::yellow,                 Qt::black,                  CONTROL_BUTTON,            ID_PICDCL_BUTTON_1_2       },
    {"",             D_DEFAULT_FONT,      QRect(322, 102, 100,  50),                  Qt::yellow,                 Qt::black,                  CONTROL_BUTTON,            ID_PICDCL_BUTTON_1_3       },
    {"",             D_DEFAULT_FONT,      QRect(427, 102, 100,  50),                  Qt::yellow,                 Qt::black,                  CONTROL_BUTTON,            ID_PICDCL_BUTTON_1_4       },
    {"",             D_DEFAULT_FONT,      QRect(112, 157, 100,  50),                  Qt::yellow,                 Qt::black,                  CONTROL_BUTTON,            ID_PICDCL_BUTTON_2_1       },
    {"",             D_DEFAULT_FONT,      QRect(217, 157, 100,  50),                  Qt::yellow,                 Qt::black,                  CONTROL_BUTTON,            ID_PICDCL_BUTTON_2_2       },
    {"",             D_DEFAULT_FONT,      QRect(322, 157, 100,  50),                  Qt::yellow,                 Qt::black,                  CONTROL_BUTTON,            ID_PICDCL_BUTTON_2_3       },
    {"",             D_DEFAULT_FONT,      QRect(427, 157, 100,  50),                  Qt::yellow,                 Qt::black,                  CONTROL_BUTTON,            ID_PICDCL_BUTTON_2_4       },
    {"",             D_DEFAULT_FONT,      QRect(112, 212, 100,  50),                  Qt::yellow,                 Qt::black,                  CONTROL_BUTTON,            ID_PICDCL_BUTTON_3_1       },
    {"",             D_DEFAULT_FONT,      QRect(217, 212, 100,  50),                  Qt::yellow,                 Qt::black,                  CONTROL_BUTTON,            ID_PICDCL_BUTTON_3_2       },
    {"",             D_DEFAULT_FONT,      QRect(322, 212, 100,  50),                  Qt::yellow,                 Qt::black,                  CONTROL_BUTTON,            ID_PICDCL_BUTTON_3_3       },
    {"",             D_DEFAULT_FONT,      QRect(427, 212, 100,  50),                  Qt::yellow,                 Qt::black,                  CONTROL_BUTTON,            ID_PICDCL_BUTTON_3_4       },
    {"",             D_DEFAULT_FONT,      QRect(112, 267, 100,  50),                  Qt::yellow,                 Qt::black,                  CONTROL_BUTTON,            ID_PICDCL_BUTTON_4_1       },
    {"",             D_DEFAULT_FONT,      QRect(217, 267, 100,  50),                  Qt::yellow,                 Qt::black,                  CONTROL_BUTTON,            ID_PICDCL_BUTTON_4_2       },
    {"",             D_DEFAULT_FONT,      QRect(322, 267, 100,  50),                  Qt::yellow,                 Qt::black,                  CONTROL_BUTTON,            ID_PICDCL_BUTTON_4_3       },
    {"",             D_DEFAULT_FONT,      QRect(427, 267, 100,  50),                  Qt::yellow,                 Qt::black,                  CONTROL_BUTTON,            ID_PICDCL_BUTTON_4_4       },

    {"down.png"  ,   D_DEFAULT_FONT,      QRect(165, 345,  45,  80),                  Qt::yellow,                 Qt::black,                  CONTROL_BMPBUTTON,        ID_PICDCL_BUTTON_UP       },
    {"up.png",       D_DEFAULT_FONT,      QRect(250, 345,  45,  80),                  Qt::yellow,                 Qt::black,                  CONTROL_BMPBUTTON,        ID_PICDCL_BUTTON_DOWN     },
    {QSTR("删除"),    D_FONT_BOLD(10),      QRect(320, 365,  85,  50),                 Qt::yellow,                 Qt::black,                  CONTROL_BUTTON,           IDBTN_PICDCL_DELETE        },
    {QSTR("退出"),    D_FONT_BOLD(10),      QRect(430, 365,  85,  50),                 Qt::yellow,                 Qt::black,                  CONTROL_BUTTON,           IDBTN_PICDCL_QUIT        },

    {"",             D_DEFAULT_FONT,  QRect(110, 375,  35,  20),                  Qt::yellow,                 Qt::black,                  CONTROL_LABEL,        ID_PICDCL_BUTTON_PAGENUM       },
};
int g_DriverCodeListRomLen = sizeof(g_PicRom_DriverCodeList)/sizeof(ROMDATA);

BEGIN_MESSAGE_MAP(CDriverCodeListPage,CPage)
        ON_UPDATE_PAGE()
        ON_SHOWPAGE()
        ON_LBUTTONDOWN(ID_PICDCL_BUTTON_UP, OnDropButtonUpDown)
        ON_LBUTTONDOWN(ID_PICDCL_BUTTON_DOWN, OnDropButtonDownDown)
        ON_LBUTTONDOWN(IDBTN_PICDCL_QUIT, OnQuitButtonDown)
        ON_LBUTTONUP(IDBTN_PICDCL_QUIT, OnQuitButtonUp)
        ON_LBUTTONUP(ID_PICDCL_BUTTON_UP, OnDropButtonUpUp)
        ON_LBUTTONUP(ID_PICDCL_BUTTON_DOWN, OnDropButtonDownUp)
        ON_LBUTTONDOWN(ID_PICDCL_BUTTON_1_1, OnButton1Down)
        ON_LBUTTONDOWN(ID_PICDCL_BUTTON_1_2, OnButton2Down)
        ON_LBUTTONDOWN(ID_PICDCL_BUTTON_1_3, OnButton3Down)
        ON_LBUTTONDOWN(ID_PICDCL_BUTTON_1_4, OnButton4Down)
        ON_LBUTTONDOWN(ID_PICDCL_BUTTON_2_1, OnButton5Down)
        ON_LBUTTONDOWN(ID_PICDCL_BUTTON_2_2, OnButton6Down)
        ON_LBUTTONDOWN(ID_PICDCL_BUTTON_2_3, OnButton7Down)
        ON_LBUTTONDOWN(ID_PICDCL_BUTTON_2_4, OnButton8Down)
        ON_LBUTTONDOWN(ID_PICDCL_BUTTON_3_1, OnButton9Down)
        ON_LBUTTONDOWN(ID_PICDCL_BUTTON_3_2, OnButton10Down)
        ON_LBUTTONDOWN(ID_PICDCL_BUTTON_3_3, OnButton11Down)
        ON_LBUTTONDOWN(ID_PICDCL_BUTTON_3_4, OnButton12Down)
        ON_LBUTTONDOWN(ID_PICDCL_BUTTON_4_1, OnButton13Down)
        ON_LBUTTONDOWN(ID_PICDCL_BUTTON_4_2, OnButton14Down)
        ON_LBUTTONDOWN(ID_PICDCL_BUTTON_4_3, OnButton15Down)
        ON_LBUTTONDOWN(ID_PICDCL_BUTTON_4_4, OnButton16Down)
        ON_LBUTTONDOWN(IDBTN_PICDCL_DELETE, OnDeleteButtonDown)
        ON_LBUTTONUP(IDBTN_PICDCL_DELETE, OnDeleteButtonUp)
END_MESSAGE_MAP()

CDriverCodeListPage::CDriverCodeListPage()
{
    m_PageIndex = 0;
    m_DriverIndex = 1;
}

void CDriverCodeListPage::OnInitPage()
{
    CButton *pButton = NULL;
    int nIDArray[] =
    {
        ID_PICDCL_BUTTON_1_1,
        ID_PICDCL_BUTTON_1_2,
        ID_PICDCL_BUTTON_1_3,
        ID_PICDCL_BUTTON_1_4,
        ID_PICDCL_BUTTON_2_1,
        ID_PICDCL_BUTTON_2_2,
        ID_PICDCL_BUTTON_2_3,
        ID_PICDCL_BUTTON_2_4,
        ID_PICDCL_BUTTON_3_1,
        ID_PICDCL_BUTTON_3_2,
        ID_PICDCL_BUTTON_3_3,
        ID_PICDCL_BUTTON_3_4,
        ID_PICDCL_BUTTON_4_1,
        ID_PICDCL_BUTTON_4_2,
        ID_PICDCL_BUTTON_4_3,
        ID_PICDCL_BUTTON_4_4
    };
    for(int i = 0; i < 16; i++)
    {
        pButton = (CButton *)GetDlgItem(nIDArray[i]);
        pButton->m_bAutoUpState = false;
    }

    return;
}

void CDriverCodeListPage::OnShowPage()
{
    m_PageIndex = 0;
}

void CDriverCodeListPage::OnQuitButtonDown()
{
    ((CButton*)GetDlgItem(IDBTN_PICDCL_QUIT))->ChangeButtonState(LBUTTON_DOWN);
}

void CDriverCodeListPage::OnQuitButtonUp()
{
    ((CButton*)GetDlgItem(IDBTN_PICDCL_QUIT))->ChangeButtonState(LBUTTON_UP);
    ChangePage(PAGE_ROM_INDEX_DRIVERCODEMANAGE);
}

void CDriverCodeListPage::OnDropButtonUpDown()
{
    CBitmapButton *bitmapButton;

    bitmapButton = (CBitmapButton *)GetDlgItem(ID_PICDCL_BUTTON_UP);
    bitmapButton->SetCtrlText("/downpress.png");
    bitmapButton->ChangeButtonState(LBUTTON_DOWN);
}

void CDriverCodeListPage::OnDropButtonDownDown()
{
    CBitmapButton *bitmapButton;

    bitmapButton = (CBitmapButton *)GetDlgItem(ID_PICDCL_BUTTON_DOWN);
    bitmapButton->SetCtrlText("uppress.png");
    bitmapButton->ChangeButtonState(LBUTTON_DOWN);
}

void CDriverCodeListPage::OnDropButtonUpUp()
{
    CBitmapButton *bitmapButton;

    if((m_PageIndex + 1) * 16 < m_MapDriverCode.count())
    {
        m_PageIndex++;
    }
    bitmapButton = (CBitmapButton *)GetDlgItem(ID_PICDCL_BUTTON_UP);
    bitmapButton->SetCtrlText("down.png");
    bitmapButton->ChangeButtonState(LBUTTON_UP);
}

void CDriverCodeListPage::OnDropButtonDownUp()
{
    CBitmapButton *bitmapButton;

    if(m_PageIndex > 0)
    {
        m_PageIndex--;
    }
    bitmapButton = (CBitmapButton *)GetDlgItem(ID_PICDCL_BUTTON_DOWN);
    bitmapButton->SetCtrlText("up.png");
    bitmapButton->ChangeButtonState(LBUTTON_UP);
}

void CDriverCodeListPage::ResetBtnUp()
{
    CButton *pButton = NULL;
    int nIDArray[] =
    {
        ID_PICDCL_BUTTON_1_1,
        ID_PICDCL_BUTTON_1_2,
        ID_PICDCL_BUTTON_1_3,
        ID_PICDCL_BUTTON_1_4,
        ID_PICDCL_BUTTON_2_1,
        ID_PICDCL_BUTTON_2_2,
        ID_PICDCL_BUTTON_2_3,
        ID_PICDCL_BUTTON_2_4,
        ID_PICDCL_BUTTON_3_1,
        ID_PICDCL_BUTTON_3_2,
        ID_PICDCL_BUTTON_3_3,
        ID_PICDCL_BUTTON_3_4,
        ID_PICDCL_BUTTON_4_1,
        ID_PICDCL_BUTTON_4_2,
        ID_PICDCL_BUTTON_4_3,
        ID_PICDCL_BUTTON_4_4
    };
    for(int i = 0; i < 16; i++)
    {
        pButton = (CButton *)GetDlgItem(nIDArray[i]);
        pButton->ChangeButtonState(LBUTTON_UP);
    }

    return;
}
int CDriverCodeListPage::GetQMapKey()
{
    CButton *pButton = NULL;
    int nIDArray[] =
    {
        ID_PICDCL_BUTTON_1_1,
        ID_PICDCL_BUTTON_1_2,
        ID_PICDCL_BUTTON_1_3,
        ID_PICDCL_BUTTON_1_4,
        ID_PICDCL_BUTTON_2_1,
        ID_PICDCL_BUTTON_2_2,
        ID_PICDCL_BUTTON_2_3,
        ID_PICDCL_BUTTON_2_4,
        ID_PICDCL_BUTTON_3_1,
        ID_PICDCL_BUTTON_3_2,
        ID_PICDCL_BUTTON_3_3,
        ID_PICDCL_BUTTON_3_4,
        ID_PICDCL_BUTTON_4_1,
        ID_PICDCL_BUTTON_4_2,
        ID_PICDCL_BUTTON_4_3,
        ID_PICDCL_BUTTON_4_4
      };
    for(int i = 0; i < 16; i++)
    {
        pButton = (CButton *)GetDlgItem(nIDArray[i]);
        if(pButton->GetButtonState() == LBUTTON_DOWN)
        {
            return i + 1;
        }
    }
    return -1;
}
void CDriverCodeListPage::SetBtnDown(int btnId)
{
    CButton *pButton = NULL;
    int nIDArray[] =
    {
        ID_PICDCL_BUTTON_1_1,
        ID_PICDCL_BUTTON_1_2,
        ID_PICDCL_BUTTON_1_3,
        ID_PICDCL_BUTTON_1_4,
        ID_PICDCL_BUTTON_2_1,
        ID_PICDCL_BUTTON_2_2,
        ID_PICDCL_BUTTON_2_3,
        ID_PICDCL_BUTTON_2_4,
        ID_PICDCL_BUTTON_3_1,
        ID_PICDCL_BUTTON_3_2,
        ID_PICDCL_BUTTON_3_3,
        ID_PICDCL_BUTTON_3_4,
        ID_PICDCL_BUTTON_4_1,
        ID_PICDCL_BUTTON_4_2,
        ID_PICDCL_BUTTON_4_3,
        ID_PICDCL_BUTTON_4_4
    };
    for(int i = 0; i < 16; i++)
    {
        pButton = (CButton *)GetDlgItem(nIDArray[i]);
        if(nIDArray[i] == btnId)
        {
            if(pButton->GetButtonState() == LBUTTON_UP)
            {
                pButton->ChangeButtonState(LBUTTON_DOWN);
            }
            else
            {
                pButton->ChangeButtonState(LBUTTON_UP);
            }
        }
        else
        {
            pButton->ChangeButtonState(LBUTTON_UP);
        }
    }

    return;
}

void CDriverCodeListPage::OnButton1Down()
{
    if((GetDlgItem(ID_PICDCL_BUTTON_1_1)->GetCtrlText()) != "")
    {
        SetBtnDown(ID_PICDCL_BUTTON_1_1);
    }
}
void CDriverCodeListPage::OnButton2Down()
{
    if((GetDlgItem(ID_PICDCL_BUTTON_1_2)->GetCtrlText()) != "")
    {
        SetBtnDown(ID_PICDCL_BUTTON_1_2);
    }
}
void CDriverCodeListPage::OnButton3Down()
{
    if((GetDlgItem(ID_PICDCL_BUTTON_1_3)->GetCtrlText()) != "")
    {
        SetBtnDown(ID_PICDCL_BUTTON_1_3);
    }
}
void CDriverCodeListPage::OnButton4Down()
{
    if((GetDlgItem(ID_PICDCL_BUTTON_1_4)->GetCtrlText()) != "")
    {
        SetBtnDown(ID_PICDCL_BUTTON_1_4);
    }
}
void CDriverCodeListPage::OnButton5Down()
{
    if((GetDlgItem(ID_PICDCL_BUTTON_2_1)->GetCtrlText()) != "")
    {
        SetBtnDown(ID_PICDCL_BUTTON_2_1);
    }
}
void CDriverCodeListPage::OnButton6Down()
{
    if((GetDlgItem(ID_PICDCL_BUTTON_2_2)->GetCtrlText()) != "")
    {
        SetBtnDown(ID_PICDCL_BUTTON_2_2);
    }
}
void CDriverCodeListPage::OnButton7Down()
{
    if((GetDlgItem(ID_PICDCL_BUTTON_2_3)->GetCtrlText()) != "")
    {
        SetBtnDown(ID_PICDCL_BUTTON_2_3);
    }
}
void CDriverCodeListPage::OnButton8Down()
{
    if((GetDlgItem(ID_PICDCL_BUTTON_2_4)->GetCtrlText()) != "")
    {
        SetBtnDown(ID_PICDCL_BUTTON_2_4);
    }
}
void CDriverCodeListPage::OnButton9Down()
{
    if((GetDlgItem(ID_PICDCL_BUTTON_3_1)->GetCtrlText()) != "")
    {
        SetBtnDown(ID_PICDCL_BUTTON_3_1);
    }
}
void CDriverCodeListPage::OnButton10Down()
{
    if((GetDlgItem(ID_PICDCL_BUTTON_3_2)->GetCtrlText()) != "")
    {
        SetBtnDown(ID_PICDCL_BUTTON_3_2);
    }
}
void CDriverCodeListPage::OnButton11Down()
{
    if((GetDlgItem(ID_PICDCL_BUTTON_3_3)->GetCtrlText()) != "")
    {
        SetBtnDown(ID_PICDCL_BUTTON_3_3);
    }
}
void CDriverCodeListPage::OnButton12Down()
{
    if((GetDlgItem(ID_PICDCL_BUTTON_3_4)->GetCtrlText()) != "")
    {
        SetBtnDown(ID_PICDCL_BUTTON_3_4);
    }
}
void CDriverCodeListPage::OnButton13Down()
{
    if((GetDlgItem(ID_PICDCL_BUTTON_4_1)->GetCtrlText()) != "")
    {
        SetBtnDown(ID_PICDCL_BUTTON_4_1);
    }
}
void CDriverCodeListPage::OnButton14Down()
{
    if((GetDlgItem(ID_PICDCL_BUTTON_4_2)->GetCtrlText()) != "")
    {
        SetBtnDown(ID_PICDCL_BUTTON_4_2);
    }
}
void CDriverCodeListPage::OnButton15Down()
{
    if((GetDlgItem(ID_PICDCL_BUTTON_4_3)->GetCtrlText()) != "")
    {
        SetBtnDown(ID_PICDCL_BUTTON_4_3);
    }
}
void CDriverCodeListPage::OnButton16Down()
{
    if((GetDlgItem(ID_PICDCL_BUTTON_4_4)->GetCtrlText()) != "")
    {
        SetBtnDown(ID_PICDCL_BUTTON_4_4);
    }
}
void CDriverCodeListPage::OnUpdatePage()
{
    int i = 0;
 //   QMapIterator<QString,int> iMap(m_MapDriverCode);
    int nArray[] =
    {
        ID_PICDCL_BUTTON_1_1,
        ID_PICDCL_BUTTON_1_2,
        ID_PICDCL_BUTTON_1_3,
        ID_PICDCL_BUTTON_1_4,
        ID_PICDCL_BUTTON_2_1,
        ID_PICDCL_BUTTON_2_2,
        ID_PICDCL_BUTTON_2_3,
        ID_PICDCL_BUTTON_2_4,
        ID_PICDCL_BUTTON_3_1,
        ID_PICDCL_BUTTON_3_2,
        ID_PICDCL_BUTTON_3_3,
        ID_PICDCL_BUTTON_3_4,
        ID_PICDCL_BUTTON_4_1,
        ID_PICDCL_BUTTON_4_2,
        ID_PICDCL_BUTTON_4_3,
        ID_PICDCL_BUTTON_4_4
    };
    //m_PageIndex = 1;
    for( i = 0; i < 16; i++)
    {
        GetDlgItem(nArray[i])->SetCtrlText("");
    }
    if(m_MapDriverCode.count() < 16)
    {
        for( i = 0; i < (m_MapDriverCode.count()%16); i++)
        {
            GetDlgItem(nArray[i])->SetCtrlText(m_MapDriverCode[ (16*m_PageIndex + i + 1)]);
        }
    }
    else if (m_MapDriverCode.count() == 16)
    {
        for( i = 0; i < 16; i++)
        {
            GetDlgItem(nArray[i])->SetCtrlText(m_MapDriverCode[ (16*m_PageIndex + i + 1)]);
        }
    }
    else
    {
        if( (16 * (m_PageIndex + 1)) <= m_MapDriverCode.count())
        {
            for( i = 0; i < 16; i++)
            {
                GetDlgItem(nArray[i])->SetCtrlText(m_MapDriverCode[ (16*m_PageIndex + i + 1)]);
            }
        }
        else
        {
            for( i = 0; i < (m_MapDriverCode.count()%16); i++)
            {
                GetDlgItem(nArray[i])->SetCtrlText(m_MapDriverCode[ (16*m_PageIndex + i + 1)]);
            }
        }
    }

    int nMaxPageNum = m_MapDriverCode.count()/16 + ((m_MapDriverCode.count()%16 != 0) ? 1 : 0);
    GetDlgItem(ID_PICDCL_BUTTON_PAGENUM)->SetCtrlText(QString::number(m_PageIndex+1) + "/" + QString::number(nMaxPageNum));
}

void CDriverCodeListPage::OnDeleteButtonDown()
{
    ((CButton*)GetDlgItem(IDBTN_PICDCL_DELETE))->ChangeButtonState(LBUTTON_DOWN);
}
void CDriverCodeListPage::OnDeleteButtonUp()
{
    QSettings* ConfigIniRead = NULL;
    QString path = qApp->applicationDirPath();
    QString fileName = path + "/system.ini";
    QString strDelId;
    QString strIdOutput;
    bool bDel;
    int nId = -1;
    int nPos = 0;
    QString strTemp;
    QFile inifile( fileName );
    CDriverCodeManagePage* pPage = (CDriverCodeManagePage*)g_PageVec[PAGE_ROM_INDEX_DRIVERCODEMANAGE];

    nId = GetQMapKey();

    if(nId != -1)
    {
        CConfirmDialog confirmDlg;
        confirmDlg.SetConfirmStr(QSTR("确定删除?"));
        confirmDlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
        confirmDlg.exec();
        if(!confirmDlg.GetContinue())
        {
            return;
        }
        if(m_MapDriverCode.find(nId) != m_MapDriverCode.end())
        {
            strDelId = m_MapDriverCode[nId];
            m_MapDriverCode.remove(nId);

            m_DriverIndex--;
            (pPage->m_MapDriverCode).remove(strDelId);
            pPage->m_DriverIndex--;
            bDel = true;

        }
        if(bDel)
        {
            if( inifile.exists( fileName ) ){
                if( inifile.setPermissions( QFile::WriteOther | QFile::ReadOther ) ){
                    ConfigIniRead = new QSettings( fileName, QSettings::IniFormat );
                } //end if
            } // end if
            strIdOutput = (ConfigIniRead->value("/DriverCode/Code",1234)).toString();
            nPos = strIdOutput.indexOf(strDelId);
            if(nPos != -1)
            {
                if(nPos == 0)
                {
                    if(strIdOutput.length() == strDelId.length())
                    {
                        strIdOutput = "";
                    }
                    else
                    {
                        strIdOutput = strIdOutput.mid(strDelId.length() + 1);
                    }
                }
                else
                {
                    strTemp = strIdOutput.left(nPos - 1);
                    strIdOutput = strIdOutput.mid(nPos + strDelId.length());
                    strIdOutput = strTemp + strIdOutput;
                }
                ConfigIniRead->setValue("/DriverCode/Code",strIdOutput);
            }

        }
    }
    QMapIterator<int,QString> itMap(m_MapDriverCode);
    m_MapDriverCode.clear();
    m_DriverIndex = 1;
    while(itMap.hasNext())
    {
        itMap.next();
        m_MapDriverCode[m_DriverIndex] = itMap.value();
        m_DriverIndex++;
    }

    ResetBtnUp();
    delete ConfigIniRead;
}

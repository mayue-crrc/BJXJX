#include "cmaintaineridlistpage.h"
#include "cmaintainermanagepage.h"

extern vector<CPage*> g_PageVec;
ROMDATA g_PicRom_MaintainerIDList[] =
{
    /*string                  font                rc                             foreground color           background color                   control type                   ID           */
    {QSTR("维护人员列表"),   D_FONT(13),   QRect(0,0,640,60),                          Qt::black,                  Qt::yellow,                  CONTROL_LABEL,             ID_PICMIL_LABEL_TITLE     },
    //label
    {"",             D_DEFAULT_FONT,      QRect(112, 102, 100,  50),                  Qt::yellow,                 Qt::black,                  CONTROL_BUTTON,            ID_PICMIL_BUTTON_1_1       },
    {"",             D_DEFAULT_FONT,      QRect(217, 102, 100,  50),                  Qt::yellow,                 Qt::black,                  CONTROL_BUTTON,            ID_PICMIL_BUTTON_1_2       },
    {"",             D_DEFAULT_FONT,      QRect(322, 102, 100,  50),                  Qt::yellow,                 Qt::black,                  CONTROL_BUTTON,            ID_PICMIL_BUTTON_1_3       },
    {"",             D_DEFAULT_FONT,      QRect(427, 102, 100,  50),                  Qt::yellow,                 Qt::black,                  CONTROL_BUTTON,            ID_PICMIL_BUTTON_1_4       },
    {"",             D_DEFAULT_FONT,      QRect(112, 157, 100,  50),                  Qt::yellow,                 Qt::black,                  CONTROL_BUTTON,            ID_PICMIL_BUTTON_2_1       },
    {"",             D_DEFAULT_FONT,      QRect(217, 157, 100,  50),                  Qt::yellow,                 Qt::black,                  CONTROL_BUTTON,            ID_PICMIL_BUTTON_2_2       },
    {"",             D_DEFAULT_FONT,      QRect(322, 157, 100,  50),                  Qt::yellow,                 Qt::black,                  CONTROL_BUTTON,            ID_PICMIL_BUTTON_2_3       },
    {"",             D_DEFAULT_FONT,      QRect(427, 157, 100,  50),                  Qt::yellow,                 Qt::black,                  CONTROL_BUTTON,            ID_PICMIL_BUTTON_2_4       },
    {"",             D_DEFAULT_FONT,      QRect(112, 212, 100,  50),                  Qt::yellow,                 Qt::black,                  CONTROL_BUTTON,            ID_PICMIL_BUTTON_3_1       },
    {"",             D_DEFAULT_FONT,      QRect(217, 212, 100,  50),                  Qt::yellow,                 Qt::black,                  CONTROL_BUTTON,            ID_PICMIL_BUTTON_3_2       },
    {"",             D_DEFAULT_FONT,      QRect(322, 212, 100,  50),                  Qt::yellow,                 Qt::black,                  CONTROL_BUTTON,            ID_PICMIL_BUTTON_3_3       },
    {"",             D_DEFAULT_FONT,      QRect(427, 212, 100,  50),                  Qt::yellow,                 Qt::black,                  CONTROL_BUTTON,            ID_PICMIL_BUTTON_3_4       },
    {"",             D_DEFAULT_FONT,      QRect(112, 267, 100,  50),                  Qt::yellow,                 Qt::black,                  CONTROL_BUTTON,            ID_PICMIL_BUTTON_4_1       },
    {"",             D_DEFAULT_FONT,      QRect(217, 267, 100,  50),                  Qt::yellow,                 Qt::black,                  CONTROL_BUTTON,            ID_PICMIL_BUTTON_4_2       },
    {"",             D_DEFAULT_FONT,      QRect(322, 267, 100,  50),                  Qt::yellow,                 Qt::black,                  CONTROL_BUTTON,            ID_PICMIL_BUTTON_4_3       },
    {"",             D_DEFAULT_FONT,      QRect(427, 267, 100,  50),                  Qt::yellow,                 Qt::black,                  CONTROL_BUTTON,            ID_PICMIL_BUTTON_4_4       },

    {"down.png",     D_DEFAULT_FONT,      QRect(165, 345,  45,  80),                 Qt::yellow,                  Qt::black,                  CONTROL_BMPBUTTON,        ID_PICMIL_BUTTON_UP         },
    {"up.png",       D_DEFAULT_FONT,      QRect(250, 345,  45,  80),                 Qt::yellow,                  Qt::black,                  CONTROL_BMPBUTTON,        ID_PICMIL_BUTTON_DOWN       },
    {QSTR("删除"),    D_FONT_BOLD(10),     QRect(320, 365,  85,  50),                 Qt::yellow,                  Qt::black,                  CONTROL_BUTTON,           IDBTN_PICMIL_DELETE         },
    {QSTR("退出"),    D_FONT_BOLD(10),     QRect(430, 365,  85,  50),                 Qt::yellow,                  Qt::black,                  CONTROL_BUTTON,           IDBTN_PICMIL_QUIT           },

    {"",             D_DEFAULT_FONT,      QRect(110, 375,  35,  20),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICMIL_BUTTON_PAGENUM    },
};
int g_MaintainerIDListRomLen = sizeof(g_PicRom_MaintainerIDList)/sizeof(ROMDATA);

BEGIN_MESSAGE_MAP(CMaintainerIDListPage,CPage)
        ON_UPDATE_PAGE()
        ON_SHOWPAGE()
        ON_LBUTTONDOWN(ID_PICMIL_BUTTON_UP, OnDropButtonUpDown)
        ON_LBUTTONDOWN(ID_PICMIL_BUTTON_DOWN, OnDropButtonDownDown)
        ON_LBUTTONUP(ID_PICMIL_BUTTON_UP, OnDropButtonUpUp)
        ON_LBUTTONUP(ID_PICMIL_BUTTON_DOWN, OnDropButtonDownUp)
        ON_LBUTTONDOWN(IDBTN_PICMIL_QUIT, OnQuitButtonDown)
        ON_LBUTTONUP(IDBTN_PICMIL_QUIT, OnQuitButtonUp)
        ON_LBUTTONDOWN(ID_PICMIL_BUTTON_1_1, OnButton1Down)
        ON_LBUTTONDOWN(ID_PICMIL_BUTTON_1_2, OnButton2Down)
        ON_LBUTTONDOWN(ID_PICMIL_BUTTON_1_3, OnButton3Down)
        ON_LBUTTONDOWN(ID_PICMIL_BUTTON_1_4, OnButton4Down)
        ON_LBUTTONDOWN(ID_PICMIL_BUTTON_2_1, OnButton5Down)
        ON_LBUTTONDOWN(ID_PICMIL_BUTTON_2_2, OnButton6Down)
        ON_LBUTTONDOWN(ID_PICMIL_BUTTON_2_3, OnButton7Down)
        ON_LBUTTONDOWN(ID_PICMIL_BUTTON_2_4, OnButton8Down)
        ON_LBUTTONDOWN(ID_PICMIL_BUTTON_3_1, OnButton9Down)
        ON_LBUTTONDOWN(ID_PICMIL_BUTTON_3_2, OnButton10Down)
        ON_LBUTTONDOWN(ID_PICMIL_BUTTON_3_3, OnButton11Down)
        ON_LBUTTONDOWN(ID_PICMIL_BUTTON_3_4, OnButton12Down)
        ON_LBUTTONDOWN(ID_PICMIL_BUTTON_4_1, OnButton13Down)
        ON_LBUTTONDOWN(ID_PICMIL_BUTTON_4_2, OnButton14Down)
        ON_LBUTTONDOWN(ID_PICMIL_BUTTON_4_3, OnButton15Down)
        ON_LBUTTONDOWN(ID_PICMIL_BUTTON_4_4, OnButton16Down)
        ON_LBUTTONDOWN(IDBTN_PICMIL_DELETE, OnDeleteButtonDown)
        ON_LBUTTONUP(IDBTN_PICMIL_DELETE, OnDeleteButtonUp)
END_MESSAGE_MAP()

CMaintainerIDListPage::CMaintainerIDListPage()
{
    m_PageIndex = 0;
    m_MapIndex = 1;
}

void CMaintainerIDListPage::OnInitPage()
{
    CButton *pButton = NULL;
    int nIDArray[] =
    {
        ID_PICMIL_BUTTON_1_1,
        ID_PICMIL_BUTTON_1_2,
        ID_PICMIL_BUTTON_1_3,
        ID_PICMIL_BUTTON_1_4,
        ID_PICMIL_BUTTON_2_1,
        ID_PICMIL_BUTTON_2_2,
        ID_PICMIL_BUTTON_2_3,
        ID_PICMIL_BUTTON_2_4,
        ID_PICMIL_BUTTON_3_1,
        ID_PICMIL_BUTTON_3_2,
        ID_PICMIL_BUTTON_3_3,
        ID_PICMIL_BUTTON_3_4,
        ID_PICMIL_BUTTON_4_1,
        ID_PICMIL_BUTTON_4_2,
        ID_PICMIL_BUTTON_4_3,
        ID_PICMIL_BUTTON_4_4
    };
    for(int i = 0; i < 16; i++)
    {
        pButton = (CButton *)GetDlgItem(nIDArray[i]);
        pButton->m_bAutoUpState = false;
    }

    return;
}

void CMaintainerIDListPage::OnShowPage()
{
    m_PageIndex = 0;
}

int CMaintainerIDListPage::GetQMapKey()
{
    CButton *pButton = NULL;
    int nIDArray[] =
    {
        ID_PICMIL_BUTTON_1_1,
        ID_PICMIL_BUTTON_1_2,
        ID_PICMIL_BUTTON_1_3,
        ID_PICMIL_BUTTON_1_4,
        ID_PICMIL_BUTTON_2_1,
        ID_PICMIL_BUTTON_2_2,
        ID_PICMIL_BUTTON_2_3,
        ID_PICMIL_BUTTON_2_4,
        ID_PICMIL_BUTTON_3_1,
        ID_PICMIL_BUTTON_3_2,
        ID_PICMIL_BUTTON_3_3,
        ID_PICMIL_BUTTON_3_4,
        ID_PICMIL_BUTTON_4_1,
        ID_PICMIL_BUTTON_4_2,
        ID_PICMIL_BUTTON_4_3,
        ID_PICMIL_BUTTON_4_4
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
void CMaintainerIDListPage::ResetBtnUp()
{
    CButton *pButton = NULL;
    int nIDArray[] =
    {
        ID_PICMIL_BUTTON_1_1,
        ID_PICMIL_BUTTON_1_2,
        ID_PICMIL_BUTTON_1_3,
        ID_PICMIL_BUTTON_1_4,
        ID_PICMIL_BUTTON_2_1,
        ID_PICMIL_BUTTON_2_2,
        ID_PICMIL_BUTTON_2_3,
        ID_PICMIL_BUTTON_2_4,
        ID_PICMIL_BUTTON_3_1,
        ID_PICMIL_BUTTON_3_2,
        ID_PICMIL_BUTTON_3_3,
        ID_PICMIL_BUTTON_3_4,
        ID_PICMIL_BUTTON_4_1,
        ID_PICMIL_BUTTON_4_2,
        ID_PICMIL_BUTTON_4_3,
        ID_PICMIL_BUTTON_4_4
    };
    for(int i = 0; i < 16; i++)
    {
        pButton = (CButton *)GetDlgItem(nIDArray[i]);
        pButton->ChangeButtonState(LBUTTON_UP);
    }

    return;
}
void CMaintainerIDListPage::SetBtnDown(int btnId)
{
    CButton *pButton = NULL;
    int nIDArray[] =
    {
        ID_PICMIL_BUTTON_1_1,
        ID_PICMIL_BUTTON_1_2,
        ID_PICMIL_BUTTON_1_3,
        ID_PICMIL_BUTTON_1_4,
        ID_PICMIL_BUTTON_2_1,
        ID_PICMIL_BUTTON_2_2,
        ID_PICMIL_BUTTON_2_3,
        ID_PICMIL_BUTTON_2_4,
        ID_PICMIL_BUTTON_3_1,
        ID_PICMIL_BUTTON_3_2,
        ID_PICMIL_BUTTON_3_3,
        ID_PICMIL_BUTTON_3_4,
        ID_PICMIL_BUTTON_4_1,
        ID_PICMIL_BUTTON_4_2,
        ID_PICMIL_BUTTON_4_3,
        ID_PICMIL_BUTTON_4_4
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
void CMaintainerIDListPage::OnButton1Down()
{
    if((GetDlgItem(ID_PICMIL_BUTTON_1_1)->GetCtrlText()) != "")
    {
        SetBtnDown(ID_PICMIL_BUTTON_1_1);
    }
}
void CMaintainerIDListPage::OnButton2Down()
{
    if((GetDlgItem(ID_PICMIL_BUTTON_1_2)->GetCtrlText()) != "")
    {
        SetBtnDown(ID_PICMIL_BUTTON_1_2);
    }
}
void CMaintainerIDListPage::OnButton3Down()
{
    if((GetDlgItem(ID_PICMIL_BUTTON_1_3)->GetCtrlText()) != "")
    {
        SetBtnDown(ID_PICMIL_BUTTON_1_3);
    }
}
void CMaintainerIDListPage::OnButton4Down()
{
    if((GetDlgItem(ID_PICMIL_BUTTON_1_4)->GetCtrlText()) != "")
    {
        SetBtnDown(ID_PICMIL_BUTTON_1_4);
    }
}
void CMaintainerIDListPage::OnButton5Down()
{
    if((GetDlgItem(ID_PICMIL_BUTTON_2_1)->GetCtrlText()) != "")
    {
        SetBtnDown(ID_PICMIL_BUTTON_2_1);
    }
}
void CMaintainerIDListPage::OnButton6Down()
{
    if((GetDlgItem(ID_PICMIL_BUTTON_2_2)->GetCtrlText()) != "")
    {
        SetBtnDown(ID_PICMIL_BUTTON_2_2);
    }
}
void CMaintainerIDListPage::OnButton7Down()
{
    if((GetDlgItem(ID_PICMIL_BUTTON_2_3)->GetCtrlText()) != "")
    {
        SetBtnDown(ID_PICMIL_BUTTON_2_3);
    }
}
void CMaintainerIDListPage::OnButton8Down()
{
    if((GetDlgItem(ID_PICMIL_BUTTON_2_4)->GetCtrlText()) != "")
    {
        SetBtnDown(ID_PICMIL_BUTTON_2_4);
    }
}
void CMaintainerIDListPage::OnButton9Down()
{
    if((GetDlgItem(ID_PICMIL_BUTTON_3_1)->GetCtrlText()) != "")
    {
        SetBtnDown(ID_PICMIL_BUTTON_3_1);
    }
}
void CMaintainerIDListPage::OnButton10Down()
{
    if((GetDlgItem(ID_PICMIL_BUTTON_3_2)->GetCtrlText()) != "")
    {
        SetBtnDown(ID_PICMIL_BUTTON_3_2);
    }
}
void CMaintainerIDListPage::OnButton11Down()
{
    if((GetDlgItem(ID_PICMIL_BUTTON_3_3)->GetCtrlText()) != "")
    {
        SetBtnDown(ID_PICMIL_BUTTON_3_3);
    }
}
void CMaintainerIDListPage::OnButton12Down()
{
    if((GetDlgItem(ID_PICMIL_BUTTON_3_4)->GetCtrlText()) != "")
    {
        SetBtnDown(ID_PICMIL_BUTTON_3_4);
    }
}
void CMaintainerIDListPage::OnButton13Down()
{
    if((GetDlgItem(ID_PICMIL_BUTTON_4_1)->GetCtrlText()) != "")
    {
        SetBtnDown(ID_PICMIL_BUTTON_4_1);
    }
}
void CMaintainerIDListPage::OnButton14Down()
{
    if((GetDlgItem(ID_PICMIL_BUTTON_4_2)->GetCtrlText()) != "")
    {
        SetBtnDown(ID_PICMIL_BUTTON_4_2);
    }
}
void CMaintainerIDListPage::OnButton15Down()
{
    if((GetDlgItem(ID_PICMIL_BUTTON_4_3)->GetCtrlText()) != "")
    {
        SetBtnDown(ID_PICMIL_BUTTON_4_3);
    }
}
void CMaintainerIDListPage::OnButton16Down()
{
    if((GetDlgItem(ID_PICMIL_BUTTON_4_4)->GetCtrlText()) != "")
    {
        SetBtnDown(ID_PICMIL_BUTTON_4_4);
    }
}
void CMaintainerIDListPage::OnUpdatePage()
{
    int i = 0;
    int nArray[] =
    {
        ID_PICMIL_BUTTON_1_1,
        ID_PICMIL_BUTTON_1_2,
        ID_PICMIL_BUTTON_1_3,
        ID_PICMIL_BUTTON_1_4,
        ID_PICMIL_BUTTON_2_1,
        ID_PICMIL_BUTTON_2_2,
        ID_PICMIL_BUTTON_2_3,
        ID_PICMIL_BUTTON_2_4,
        ID_PICMIL_BUTTON_3_1,
        ID_PICMIL_BUTTON_3_2,
        ID_PICMIL_BUTTON_3_3,
        ID_PICMIL_BUTTON_3_4,
        ID_PICMIL_BUTTON_4_1,
        ID_PICMIL_BUTTON_4_2,
        ID_PICMIL_BUTTON_4_3,
        ID_PICMIL_BUTTON_4_4
    };

    for(i = 0; i < 16; i++)
    {
        ((CButton *)GetDlgItem(nArray[i]))->SetCtrlText("");
    }
    if(m_MapMaintainer.count() < 16)
    {
        for( i = 0; i < (m_MapMaintainer.count()%16); i++)
        {
            ((CButton *)GetDlgItem(nArray[i]))->SetCtrlText(m_MapMaintainer[ (16*m_PageIndex + i + 1)]);
        }
    }
    else if(m_MapMaintainer.count() ==16)
    {
        for( i = 0; i < 16; i++)
        {
            ((CButton *)GetDlgItem(nArray[i]))->SetCtrlText(m_MapMaintainer[ (16*m_PageIndex + i + 1)]);
        }
    }
    else
    {
        if( (16 * (m_PageIndex + 1)) <= m_MapMaintainer.count())
        {
            for( i = 0; i < 16; i++)
            {
                ((CButton *)GetDlgItem(nArray[i]))->SetCtrlText(m_MapMaintainer[ (16*m_PageIndex + i + 1)]);
            }
        }
        else
        {
            for( i = 0; i < (m_MapMaintainer.count()%16); i++)
            {
                ((CButton *)GetDlgItem(nArray[i]))->SetCtrlText(m_MapMaintainer[ (16*m_PageIndex + i + 1)]);
            }
        }
    }

    int nMaxPageNum = m_MapMaintainer.count()/16 + (m_MapMaintainer.count()%16 != 0 ? 1 : 0);
    GetDlgItem(ID_PICMIL_BUTTON_PAGENUM)->SetCtrlText(QString::number(m_PageIndex+1) + "/" + QString::number(nMaxPageNum));
}

void CMaintainerIDListPage::OnQuitButtonDown()
{
    ((CButton*)GetDlgItem(IDBTN_PICMIL_QUIT))->ChangeButtonState(LBUTTON_DOWN);
}

void CMaintainerIDListPage::OnQuitButtonUp()
{
    ((CButton*)GetDlgItem(IDBTN_PICMIL_QUIT))->ChangeButtonState(LBUTTON_UP);
    ChangePage(PAGE_ROM_INDEX_MAINTAINERMANAGE);
}

void CMaintainerIDListPage::OnDropButtonUpDown()
{
    CBitmapButton *bitmapButton;

    bitmapButton = (CBitmapButton *)GetDlgItem(ID_PICMIL_BUTTON_UP);
    bitmapButton->SetCtrlText("downpress.png");
    bitmapButton->ChangeButtonState(LBUTTON_DOWN);
}

void CMaintainerIDListPage::OnDropButtonDownDown()
{
    CBitmapButton *bitmapButton;

    bitmapButton = (CBitmapButton *)GetDlgItem(ID_PICMIL_BUTTON_DOWN);
    bitmapButton->SetCtrlText("uppress.png");
    bitmapButton->ChangeButtonState(LBUTTON_DOWN);
}

void CMaintainerIDListPage::OnDropButtonUpUp()
{
    CBitmapButton *bitmapButton;

    if((m_PageIndex + 1) * 16 < m_MapMaintainer.count())
    {
        m_PageIndex++;
    }
    bitmapButton = (CBitmapButton *)GetDlgItem(ID_PICMIL_BUTTON_UP);
    bitmapButton->SetCtrlText("down.png");
    bitmapButton->ChangeButtonState(LBUTTON_UP);
}

void CMaintainerIDListPage::OnDropButtonDownUp()
{
    CBitmapButton *bitmapButton;

    if(m_PageIndex > 0)
    {
        m_PageIndex--;
    }
    bitmapButton = (CBitmapButton *)GetDlgItem(ID_PICMIL_BUTTON_DOWN);
    bitmapButton->SetCtrlText("up.png");
    bitmapButton->ChangeButtonState(LBUTTON_UP);
}
void CMaintainerIDListPage::OnDeleteButtonDown()
{
    ((CButton*)GetDlgItem(IDBTN_PICMIL_DELETE))->ChangeButtonState(LBUTTON_DOWN);
}
void CMaintainerIDListPage::OnDeleteButtonUp()
{
    QSettings* ConfigIniRead = NULL;
    QString path = qApp->applicationDirPath();
    QString fileName = path + "/system.ini";
    QString strDelId;
    QString strIdOutput;
    QString strPwdOutput;
    bool bDel;
    int nId = -1;
    QFile inifile( fileName );
    CMaintainerManagePage* pPage = (CMaintainerManagePage*)g_PageVec[PAGE_ROM_INDEX_MAINTAINERMANAGE];


    nId = GetQMapKey();
    if(nId != -1)
    {
        CConfirmDialog confirmDlg;
        confirmDlg.SetConfirmStr(QSTR("sure to delete?"));
        confirmDlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
        confirmDlg.exec();
        if(!confirmDlg.GetContinue())
        {
            return;
        }

        if(m_MapMaintainer.find(nId) != m_MapMaintainer.end())
        {
            strDelId = m_MapMaintainer[nId];
            m_MapMaintainer.remove(nId);
            bDel = true;
        }
        if(bDel)
        {
            if((pPage->m_MapMaintainer).find(strDelId) != (pPage->m_MapMaintainer).end())
            {

                (pPage->m_MapMaintainer).remove(strDelId);
            }
            if( inifile.exists( fileName ) ){
                if( inifile.setPermissions( QFile::WriteOther | QFile::ReadOther ) ){
                    ConfigIniRead = new QSettings( fileName, QSettings::IniFormat );
                } //end if
            } // end if
            QMapIterator<QString,QString> itMap((pPage->m_MapMaintainer));
            strIdOutput = "";
            strPwdOutput = "";

            m_MapMaintainer.clear();
            m_MapIndex = 1;
            (pPage->m_MapMaintainer).clear();
            while(itMap.hasNext())
            {

                itMap.next();
                strIdOutput += itMap.key();
                strPwdOutput += itMap.value();
                (pPage->m_MapMaintainer)[itMap.key()]= itMap.value();
                m_MapMaintainer[m_MapIndex] = itMap.key();
                m_MapIndex++;
                if(itMap.hasNext())
                {
                    strIdOutput += ",";
                    strPwdOutput += ",";
                }

            }
            ConfigIniRead->setValue("/Maintainer/Id",strIdOutput);
            ConfigIniRead->setValue("/Maintainer/Pwd",strPwdOutput);

            //m_MapMaintainer.clear();
        }
    }
    ResetBtnUp();
    delete ConfigIniRead;
}


#include "cstartstationsetpage.h"
#include "cpispage.h"

extern vector<CPage*> g_PageVec;

ROMDATA g_PicRom_StartStationSet[] =
{
    /*string                font                         rc                    foreground color              background color                control type                   ID           */
  D_COMMON_PAGE_HEADER
  {QSTR("Starting Station Setting")  ,  D_FONT(8),      QRect(  0,  65, 640, 30),       Qt::black,                      Qt::yellow,                  CONTROL_LABEL,          ID_IGNORE    },
  {"",        D_COMMON_TITLE_FONT,      QRect( 40, 105, 160, 20),       Qt::black,                      Qt::yellow,                  CONTROL_BUTTON,         ID_PICSSS_BUTTON_S1      },
  {"",        D_COMMON_TITLE_FONT,      QRect(240, 105, 160, 20),       Qt::black,                      Qt::yellow,                  CONTROL_BUTTON,         ID_PICSSS_BUTTON_S2      },
  {"",        D_COMMON_TITLE_FONT,      QRect(440, 105, 160, 20),       Qt::black,                      Qt::yellow,                  CONTROL_BUTTON,         ID_PICSSS_BUTTON_S3     },
  {"",        D_COMMON_TITLE_FONT,      QRect( 40, 135, 160, 20),       Qt::black,                      Qt::yellow,                  CONTROL_BUTTON,         ID_PICSSS_BUTTON_S4      },
  {"",        D_COMMON_TITLE_FONT,      QRect(240, 135, 160, 20),       Qt::black,                      Qt::yellow,                  CONTROL_BUTTON,         ID_PICSSS_BUTTON_S5      },
  {"",        D_COMMON_TITLE_FONT,      QRect(440, 135, 160, 20),       Qt::black,                      Qt::yellow,                  CONTROL_BUTTON,         ID_PICSSS_BUTTON_S6     },
  {"",        D_COMMON_TITLE_FONT,      QRect( 40, 165, 160, 20),       Qt::black,                      Qt::yellow,                  CONTROL_BUTTON,         ID_PICSSS_BUTTON_S7      },
  {"",        D_COMMON_TITLE_FONT,      QRect(240, 165, 160, 20),       Qt::black,                      Qt::yellow,                  CONTROL_BUTTON,         ID_PICSSS_BUTTON_S8     },
  {"",        D_COMMON_TITLE_FONT,      QRect(440, 165, 160, 20),       Qt::black,                      Qt::yellow,                  CONTROL_BUTTON,         ID_PICSSS_BUTTON_S9     },
  {"",        D_COMMON_TITLE_FONT,      QRect( 40, 195, 160, 20),       Qt::black,                      Qt::yellow,                  CONTROL_BUTTON,         ID_PICSSS_BUTTON_S10      },
  {"",        D_COMMON_TITLE_FONT,      QRect(240, 195, 160, 20),       Qt::black,                      Qt::yellow,                  CONTROL_BUTTON,         ID_PICSSS_BUTTON_S11     },
  {"",        D_COMMON_TITLE_FONT,      QRect(440, 195, 160, 20),       Qt::black,                      Qt::yellow,                  CONTROL_BUTTON,         ID_PICSSS_BUTTON_S12     },
  {"",        D_COMMON_TITLE_FONT,      QRect( 40, 225, 160, 20),       Qt::black,                      Qt::yellow,                  CONTROL_BUTTON,         ID_PICSSS_BUTTON_S13      },
  {"",        D_COMMON_TITLE_FONT,      QRect(240, 225, 160, 20),       Qt::black,                      Qt::yellow,                  CONTROL_BUTTON,         ID_PICSSS_BUTTON_S14     },
  {"",        D_COMMON_TITLE_FONT,      QRect(440, 225, 160, 20),       Qt::black,                      Qt::yellow,                  CONTROL_BUTTON,         ID_PICSSS_BUTTON_S15      },
  {"",        D_COMMON_TITLE_FONT,      QRect( 40, 255, 160, 20),       Qt::black,                      Qt::yellow,                  CONTROL_BUTTON,         ID_PICSSS_BUTTON_S16     },
  {"",        D_COMMON_TITLE_FONT,      QRect(240, 255, 160, 20),       Qt::black,                      Qt::yellow,                  CONTROL_BUTTON,         ID_PICSSS_BUTTON_S17     },
  {"",        D_COMMON_TITLE_FONT,      QRect(440, 255, 160, 20),       Qt::black,                      Qt::yellow,                  CONTROL_BUTTON,         ID_PICSSS_BUTTON_S18     },
  {"",        D_COMMON_TITLE_FONT,      QRect( 40, 285, 160, 20),       Qt::black,                      Qt::yellow,                  CONTROL_BUTTON,         ID_PICSSS_BUTTON_S19     },
  {"",        D_COMMON_TITLE_FONT,      QRect(240, 285, 160, 20),       Qt::black,                      Qt::yellow,                  CONTROL_BUTTON,         ID_PICSSS_BUTTON_S20     },
  {"",        D_COMMON_TITLE_FONT,      QRect(440, 285, 160, 20),       Qt::black,                      Qt::yellow,                  CONTROL_BUTTON,         ID_PICSSS_BUTTON_S21     },
  {"",        D_COMMON_TITLE_FONT,      QRect( 40, 315, 160, 20),       Qt::black,                      Qt::yellow,                  CONTROL_BUTTON,         ID_PICSSS_BUTTON_S22     },
  {"",        D_COMMON_TITLE_FONT,      QRect(240, 315, 160, 20),       Qt::black,                      Qt::yellow,                  CONTROL_BUTTON,         ID_PICSSS_BUTTON_S23     },
  {"",        D_COMMON_TITLE_FONT,      QRect(440, 315, 160, 20),       Qt::black,                      Qt::yellow,                  CONTROL_BUTTON,         ID_PICSSS_BUTTON_S24     },
  {"",        D_COMMON_TITLE_FONT,      QRect( 40, 345, 160, 20),       Qt::black,                      Qt::yellow,                  CONTROL_BUTTON,         ID_PICSSS_BUTTON_S25     },
  {"",        D_COMMON_TITLE_FONT,      QRect(240, 345, 160, 20),       Qt::black,                      Qt::yellow,                  CONTROL_BUTTON,         ID_PICSSS_BUTTON_S26     },
  {"",        D_COMMON_TITLE_FONT,      QRect(440, 345, 160, 20),       Qt::black,                      Qt::yellow,                  CONTROL_BUTTON,         ID_PICSSS_BUTTON_S27     },
  {"",        D_COMMON_TITLE_FONT,      QRect( 40, 375, 160, 20),       Qt::black,                      Qt::yellow,                  CONTROL_BUTTON,         ID_PICSSS_BUTTON_S28     },
  {"",        D_COMMON_TITLE_FONT,      QRect(240, 375, 160, 20),       Qt::black,                      Qt::yellow,                  CONTROL_BUTTON,         ID_PICSSS_BUTTON_S29     },
  {"",        D_COMMON_TITLE_FONT,      QRect(440, 375, 160, 20),       Qt::black,                      Qt::yellow,                  CONTROL_BUTTON,         ID_PICSSS_BUTTON_S30     },
  {"",        D_COMMON_TITLE_FONT,      QRect( 40, 405, 160, 20),       Qt::black,                      Qt::yellow,                  CONTROL_BUTTON,         ID_PICSSS_BUTTON_S31     },
  {"",        D_COMMON_TITLE_FONT,      QRect(240, 405, 160, 20),       Qt::black,                      Qt::yellow,                  CONTROL_BUTTON,         ID_PICSSS_BUTTON_S32     },
  {"",        D_COMMON_TITLE_FONT,      QRect(440, 405, 160, 20),       Qt::black,                      Qt::yellow,                  CONTROL_BUTTON,         ID_PICSSS_BUTTON_S33     },

  {"",        D_COMMON_TITLE_FONT,      QRect(201, 110,  39, 10),       Qt::yellow,                     Qt::yellow,                  CONTROL_LABEL,          ID_PICSSS_LABEL_S1     },
  {"",        D_COMMON_TITLE_FONT,      QRect(401, 110,  39, 10),       Qt::yellow,                     Qt::yellow,                  CONTROL_LABEL,          ID_PICSSS_LABEL_S2     },
  {"",        D_COMMON_TITLE_FONT,      QRect(601, 110,  39, 10),       Qt::yellow,                     Qt::yellow,                  CONTROL_LABEL,          ID_PICSSS_LABEL_S3     },
  {"",        D_COMMON_TITLE_FONT,      QRect(201, 140,  39, 10),       Qt::yellow,                     Qt::yellow,                  CONTROL_LABEL,          ID_PICSSS_LABEL_S4     },
  {"",        D_COMMON_TITLE_FONT,      QRect(401, 140,  39, 10),       Qt::yellow,                     Qt::yellow,                  CONTROL_LABEL,          ID_PICSSS_LABEL_S5     },
  {"",        D_COMMON_TITLE_FONT,      QRect(601, 140,  39, 10),       Qt::yellow,                     Qt::yellow,                  CONTROL_LABEL,          ID_PICSSS_LABEL_S6     },
  {"",        D_COMMON_TITLE_FONT,      QRect(201, 170,  39, 10),       Qt::yellow,                     Qt::yellow,                  CONTROL_LABEL,          ID_PICSSS_LABEL_S7     },
  {"",        D_COMMON_TITLE_FONT,      QRect(401, 170,  39, 10),       Qt::yellow,                     Qt::yellow,                  CONTROL_LABEL,          ID_PICSSS_LABEL_S8     },
  {"",        D_COMMON_TITLE_FONT,      QRect(601, 170,  39, 10),       Qt::yellow,                     Qt::yellow,                  CONTROL_LABEL,          ID_PICSSS_LABEL_S9     },
  {"",        D_COMMON_TITLE_FONT,      QRect(201, 200,  39, 10),       Qt::yellow,                     Qt::yellow,                  CONTROL_LABEL,          ID_PICSSS_LABEL_S10     },
  {"",        D_COMMON_TITLE_FONT,      QRect(401, 200,  39, 10),       Qt::yellow,                     Qt::yellow,                  CONTROL_LABEL,          ID_PICSSS_LABEL_S11     },
  {"",        D_COMMON_TITLE_FONT,      QRect(601, 200,  39, 10),       Qt::yellow,                     Qt::yellow,                  CONTROL_LABEL,          ID_PICSSS_LABEL_S12     },
  {"",        D_COMMON_TITLE_FONT,      QRect(201, 230,  39, 10),       Qt::yellow,                     Qt::yellow,                  CONTROL_LABEL,          ID_PICSSS_LABEL_S13     },
  {"",        D_COMMON_TITLE_FONT,      QRect(401, 230,  39, 10),       Qt::yellow,                     Qt::yellow,                  CONTROL_LABEL,          ID_PICSSS_LABEL_S14     },
  {"",        D_COMMON_TITLE_FONT,      QRect(601, 230,  39, 10),       Qt::yellow,                     Qt::yellow,                  CONTROL_LABEL,          ID_PICSSS_LABEL_S15     },
  {"",        D_COMMON_TITLE_FONT,      QRect(201, 260,  39, 10),       Qt::yellow,                     Qt::yellow,                  CONTROL_LABEL,          ID_PICSSS_LABEL_S16     },
  {"",        D_COMMON_TITLE_FONT,      QRect(401, 260,  39, 10),       Qt::yellow,                     Qt::yellow,                  CONTROL_LABEL,          ID_PICSSS_LABEL_S17     },
  {"",        D_COMMON_TITLE_FONT,      QRect(601, 260,  39, 10),       Qt::yellow,                     Qt::yellow,                  CONTROL_LABEL,          ID_PICSSS_LABEL_S18     },
  {"",        D_COMMON_TITLE_FONT,      QRect(201, 290,  39, 10),       Qt::yellow,                     Qt::yellow,                  CONTROL_LABEL,          ID_PICSSS_LABEL_S19     },
  {"",        D_COMMON_TITLE_FONT,      QRect(401, 290,  39, 10),       Qt::yellow,                     Qt::yellow,                  CONTROL_LABEL,          ID_PICSSS_LABEL_S20     },
  {"",        D_COMMON_TITLE_FONT,      QRect(601, 290,  39, 10),       Qt::yellow,                     Qt::yellow,                  CONTROL_LABEL,          ID_PICSSS_LABEL_S21     },
  {"",        D_COMMON_TITLE_FONT,      QRect(201, 320,  39, 10),       Qt::yellow,                     Qt::yellow,                  CONTROL_LABEL,          ID_PICSSS_LABEL_S22     },
  {"",        D_COMMON_TITLE_FONT,      QRect(401, 320,  39, 10),       Qt::yellow,                     Qt::yellow,                  CONTROL_LABEL,          ID_PICSSS_LABEL_S23     },
  {"",        D_COMMON_TITLE_FONT,      QRect(601, 320,  39, 10),       Qt::yellow,                     Qt::yellow,                  CONTROL_LABEL,          ID_PICSSS_LABEL_S24     },
  {"",        D_COMMON_TITLE_FONT,      QRect(201, 350,  39, 10),       Qt::yellow,                     Qt::yellow,                  CONTROL_LABEL,          ID_PICSSS_LABEL_S25     },
  {"",        D_COMMON_TITLE_FONT,      QRect(401, 350,  39, 10),       Qt::yellow,                     Qt::yellow,                  CONTROL_LABEL,          ID_PICSSS_LABEL_S26     },
  {"",        D_COMMON_TITLE_FONT,      QRect(601, 350,  39, 10),       Qt::yellow,                     Qt::yellow,                  CONTROL_LABEL,          ID_PICSSS_LABEL_S27     },
  {"",        D_COMMON_TITLE_FONT,      QRect(201, 380,  39, 10),       Qt::yellow,                     Qt::yellow,                  CONTROL_LABEL,          ID_PICSSS_LABEL_S28     },
  {"",        D_COMMON_TITLE_FONT,      QRect(401, 380,  39, 10),       Qt::yellow,                     Qt::yellow,                  CONTROL_LABEL,          ID_PICSSS_LABEL_S29     },
  {"",        D_COMMON_TITLE_FONT,      QRect(601, 380,  39, 10),       Qt::yellow,                     Qt::yellow,                  CONTROL_LABEL,          ID_PICSSS_LABEL_S30     },
  {"",        D_COMMON_TITLE_FONT,      QRect(201, 410,  39, 10),       Qt::yellow,                     Qt::yellow,                  CONTROL_LABEL,          ID_PICSSS_LABEL_S31     },
  {"",        D_COMMON_TITLE_FONT,      QRect(401, 410,  39, 10),       Qt::yellow,                     Qt::yellow,                  CONTROL_LABEL,          ID_PICSSS_LABEL_S32     },

  {QSTR("OK"),  D_COMMON_TITLE_FONT,      QRect(470,445, 70, 30),       Qt::black,                      Qt::yellow,                  CONTROL_BUTTON,          ID_PICSSS_BUTTON_OK      },
  {QSTR("Quit"),  D_COMMON_TITLE_FONT,      QRect(550,445, 70, 30),       Qt::black,                      Qt::yellow,                  CONTROL_BUTTON,          ID_PICSSS_BUTTON_QUIT    },

  {QSTR("Please select a station press\"OK\"。"),               D_DEFAULT_FONT,      QRect(5,450, 440, 25),    Qt::yellow,                     Qt::black,                      CONTROL_LABEL,          ID_IGNORE       },
};
int g_StartStationSetRomLen = sizeof(g_PicRom_StartStationSet)/sizeof(ROMDATA);

int nStartStationBtnIDArray[]=
{
    ID_PICSSS_BUTTON_S1,
    ID_PICSSS_BUTTON_S2,
    ID_PICSSS_BUTTON_S3,
    ID_PICSSS_BUTTON_S4,
    ID_PICSSS_BUTTON_S5,
    ID_PICSSS_BUTTON_S6,
    ID_PICSSS_BUTTON_S7,
    ID_PICSSS_BUTTON_S8,
    ID_PICSSS_BUTTON_S9,
    ID_PICSSS_BUTTON_S10,
    ID_PICSSS_BUTTON_S11,
    ID_PICSSS_BUTTON_S12,
    ID_PICSSS_BUTTON_S13,
    ID_PICSSS_BUTTON_S14,
    ID_PICSSS_BUTTON_S15,
    ID_PICSSS_BUTTON_S16,
    ID_PICSSS_BUTTON_S17,
    ID_PICSSS_BUTTON_S18,
    ID_PICSSS_BUTTON_S19,
    ID_PICSSS_BUTTON_S20,
    ID_PICSSS_BUTTON_S21,
    ID_PICSSS_BUTTON_S22,
    ID_PICSSS_BUTTON_S23,
    ID_PICSSS_BUTTON_S24,
    ID_PICSSS_BUTTON_S25,
    ID_PICSSS_BUTTON_S26,
    ID_PICSSS_BUTTON_S27,
    ID_PICSSS_BUTTON_S28,
    ID_PICSSS_BUTTON_S29,
    ID_PICSSS_BUTTON_S30,
    ID_PICSSS_BUTTON_S31,
    ID_PICSSS_BUTTON_S32,
    ID_PICSSS_BUTTON_S33
};
int nStartStationLabelIDArray[]=
{
   ID_PICSSS_LABEL_S1,
   ID_PICSSS_LABEL_S2,
   ID_PICSSS_LABEL_S3,
   ID_PICSSS_LABEL_S4,
   ID_PICSSS_LABEL_S5,
   ID_PICSSS_LABEL_S6,
   ID_PICSSS_LABEL_S7,
   ID_PICSSS_LABEL_S8,
   ID_PICSSS_LABEL_S9,
   ID_PICSSS_LABEL_S10,
   ID_PICSSS_LABEL_S11,
   ID_PICSSS_LABEL_S12,
   ID_PICSSS_LABEL_S13,
   ID_PICSSS_LABEL_S14,
   ID_PICSSS_LABEL_S15,
   ID_PICSSS_LABEL_S16,
   ID_PICSSS_LABEL_S17,
   ID_PICSSS_LABEL_S18,
   ID_PICSSS_LABEL_S19,
   ID_PICSSS_LABEL_S20,
   ID_PICSSS_LABEL_S21,
   ID_PICSSS_LABEL_S22,
   ID_PICSSS_LABEL_S23,
   ID_PICSSS_LABEL_S24,
   ID_PICSSS_LABEL_S25,
   ID_PICSSS_LABEL_S26,
   ID_PICSSS_LABEL_S27,
   ID_PICSSS_LABEL_S28,
   ID_PICSSS_LABEL_S29,
   ID_PICSSS_LABEL_S30,
   ID_PICSSS_LABEL_S31,
   ID_PICSSS_LABEL_S32
};

BEGIN_MESSAGE_MAP(CStartStationSetPage,CPage)
        ON_UPDATE_PAGE()
        ON_SHOWPAGE()
        ON_LBUTTONDOWN(ID_PICSSS_BUTTON_QUIT, OnQuitDown)
        ON_LBUTTONUP(ID_PICSSS_BUTTON_QUIT, OnQuitUp)
        ON_LBUTTONDOWN(ID_PICSSS_BUTTON_OK, OnOKDown)
        ON_LBUTTONUP(ID_PICSSS_BUTTON_OK, OnOKUp)
        ON_LBUTTONDOWN(ID_PICSSS_BUTTON_S1, OnStation1Down)
        ON_LBUTTONDOWN(ID_PICSSS_BUTTON_S2, OnStation2Down)
        ON_LBUTTONDOWN(ID_PICSSS_BUTTON_S3, OnStation3Down)
        ON_LBUTTONDOWN(ID_PICSSS_BUTTON_S4, OnStation4Down)
        ON_LBUTTONDOWN(ID_PICSSS_BUTTON_S5, OnStation5Down)
        ON_LBUTTONDOWN(ID_PICSSS_BUTTON_S6, OnStation6Down)
        ON_LBUTTONDOWN(ID_PICSSS_BUTTON_S7, OnStation7Down)
        ON_LBUTTONDOWN(ID_PICSSS_BUTTON_S8, OnStation8Down)
        ON_LBUTTONDOWN(ID_PICSSS_BUTTON_S9, OnStation9Down)
        ON_LBUTTONDOWN(ID_PICSSS_BUTTON_S10, OnStation10Down)
        ON_LBUTTONDOWN(ID_PICSSS_BUTTON_S11, OnStation11Down)
        ON_LBUTTONDOWN(ID_PICSSS_BUTTON_S12, OnStation12Down)
        ON_LBUTTONDOWN(ID_PICSSS_BUTTON_S13, OnStation13Down)
        ON_LBUTTONDOWN(ID_PICSSS_BUTTON_S14, OnStation14Down)
        ON_LBUTTONDOWN(ID_PICSSS_BUTTON_S15, OnStation15Down)
        ON_LBUTTONDOWN(ID_PICSSS_BUTTON_S16, OnStation16Down)
        ON_LBUTTONDOWN(ID_PICSSS_BUTTON_S17, OnStation17Down)
        ON_LBUTTONDOWN(ID_PICSSS_BUTTON_S18, OnStation18Down)
        ON_LBUTTONDOWN(ID_PICSSS_BUTTON_S19, OnStation19Down)
        ON_LBUTTONDOWN(ID_PICSSS_BUTTON_S20, OnStation20Down)
        ON_LBUTTONDOWN(ID_PICSSS_BUTTON_S21, OnStation21Down)
        ON_LBUTTONDOWN(ID_PICSSS_BUTTON_S22, OnStation22Down)
        ON_LBUTTONDOWN(ID_PICSSS_BUTTON_S23, OnStation23Down)
        ON_LBUTTONDOWN(ID_PICSSS_BUTTON_S24, OnStation24Down)
        ON_LBUTTONDOWN(ID_PICSSS_BUTTON_S25, OnStation25Down)
        ON_LBUTTONDOWN(ID_PICSSS_BUTTON_S26, OnStation26Down)
        ON_LBUTTONDOWN(ID_PICSSS_BUTTON_S27, OnStation27Down)
        ON_LBUTTONDOWN(ID_PICSSS_BUTTON_S28, OnStation28Down)
        ON_LBUTTONDOWN(ID_PICSSS_BUTTON_S29, OnStation29Down)
        ON_LBUTTONDOWN(ID_PICSSS_BUTTON_S30, OnStation30Down)
        ON_LBUTTONDOWN(ID_PICSSS_BUTTON_S31, OnStation31Down)
        ON_LBUTTONDOWN(ID_PICSSS_BUTTON_S32, OnStation32Down)
        ON_LBUTTONDOWN(ID_PICSSS_BUTTON_S33, OnStation33Down)
END_MESSAGE_MAP()

CStartStationSetPage::CStartStationSetPage()
{
}

void CStartStationSetPage::OnInitPage()
{
    int i = 0;
    int stationNum = 0;
    QStringList stationNameList;
    switch((int)LineNumber_Char)
    {
    case 1:
    case 2:
        stationNum = g_stationNameLine1.size();
        stationNameList = g_stationNameLine1;
        break;
    case 3:
    case 4:
        stationNum = g_stationNameLine2.size();
        stationNameList = g_stationNameLine2;
        break;
    case 5:
    case 6:
        stationNum = g_stationNameLine3.size();
        stationNameList = g_stationNameLine3;
        break;
    case 7:
    case 8:
        stationNum = g_stationNameLine4.size();
        stationNameList = g_stationNameLine4;
        break;
    case 9:
    case 10:
        stationNum = g_stationNameLine5.size();
        stationNameList = g_stationNameLine5;
        break;
    default:
        stationNum = g_stationNameLine1.size();
        stationNameList = g_stationNameLine1;
        break;
    }

    for(i=0; i < stationNum; i++)
    {
        ((CButton*)GetDlgItem(nStartStationBtnIDArray[i]))->m_bAutoUpState = false;
        ((CButton*)GetDlgItem(nStartStationBtnIDArray[i]))->SetCtrlText( stationNameList.at(i) );
    }
    for(; i < 33; i++)
    {
        ((CButton*)GetDlgItem(nStartStationBtnIDArray[i]))->m_bAutoUpState = false;
        ((CButton*)GetDlgItem(nStartStationBtnIDArray[i]))->SetInVisible();
    }
    for(i=0; i < (stationNum-1); i++)
    {
        ((CLabel*)GetDlgItem(nStartStationLabelIDArray[i]))->SetVisible(true);
    }
    for(; i < 32; i++)
    {
        ((CLabel*)GetDlgItem(nStartStationLabelIDArray[i]))->SetVisible(false);
    }
    SetBtnDown(ID_PICSSS_BUTTON_S1 + g_StationSet_DepartureStation_Uchar-1);
    m_nPreIndex = ID_PICSSS_BUTTON_S1 + g_StationSet_DepartureStation_Uchar-1;
    m_StationSet_DepartureStation_Uchar = g_StationSet_DepartureStation_Uchar;
}
void CStartStationSetPage::OnShowPage()
{
    int stationNum = 0;
    switch((int)LineNumber_Char)
    {
    case 1:
    case 2:
        stationNum = g_stationNameLine1.size();
        break;
    case 3:
    case 4:
        stationNum = g_stationNameLine2.size();
        break;
    case 5:
    case 6:
        stationNum = g_stationNameLine3.size();
        break;
    case 7:
    case 8:
        stationNum = g_stationNameLine4.size();
        break;
    case 9:
    case 10:
        stationNum = g_stationNameLine5.size();
        break;
    default:
        stationNum = g_stationNameLine1.size();
        break;
    }

    if( (g_StationSet_DepartureStation_Uchar > 0) && (g_StationSet_DepartureStation_Uchar < (stationNum+1)) )
    {
        SetBtnDown(ID_PICSSS_BUTTON_S1 + g_StationSet_DepartureStation_Uchar-1);
        m_nPreIndex = ID_PICSSS_BUTTON_S1 + g_StationSet_DepartureStation_Uchar-1;
        m_StationSet_DepartureStation_Uchar = g_StationSet_DepartureStation_Uchar;
    }
}
void CStartStationSetPage::OnOKDown()
{
    ((CButton*)GetDlgItem(ID_PICSSS_BUTTON_OK))->ChangeButtonState(LBUTTON_DOWN);
}

void CStartStationSetPage::OnOKUp()
{
    if(!StationSet_UpOrDown_Bool) // 下行线路
    {
        if(m_StationSet_DepartureStation_Uchar>g_StationSet_TerminalStation_Uchar)
        {
            ((CButton*)GetDlgItem(ID_PICSSS_BUTTON_OK))->ChangeButtonState(LBUTTON_UP);
            g_StationSet_DepartureStation_Uchar = m_StationSet_DepartureStation_Uchar; // 20100828 zlb add
            m_nPreIndex = ID_PICSSS_BUTTON_S1 + (int)g_StationSet_DepartureStation_Uchar-1;
            StationSettedFlag_Bool = true; // 20130105 add
            ChangePage(PAGE_ROM_INDEX_PIS);
        }
        else
        {
            CWarningDialog warningDlg;
            warningDlg.SetWarningStr(QSTR("Downline，Start station should be set after End Station！"));
            warningDlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
            warningDlg.exec();
            return;
        }
    }
    else
    {
        if(m_StationSet_DepartureStation_Uchar<g_StationSet_TerminalStation_Uchar)
        {
            ((CButton*)GetDlgItem(ID_PICSSS_BUTTON_OK))->ChangeButtonState(LBUTTON_UP);
            g_StationSet_DepartureStation_Uchar = m_StationSet_DepartureStation_Uchar; // 20100828 zlb add
            m_nPreIndex = ID_PICSSS_BUTTON_S1 + (int)g_StationSet_DepartureStation_Uchar-1;
            StationSettedFlag_Bool = true; // 20130105 add
            ChangePage(PAGE_ROM_INDEX_PIS);

        }
        else
        {
            CWarningDialog warningDlg;
            warningDlg.SetWarningStr(QSTR("Upline，Start station should be set ahead End Station！"));
            warningDlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
            warningDlg.exec();
            return;
        }
    }

}

void CStartStationSetPage::OnQuitDown()
{
    ((CButton*)GetDlgItem(ID_PICSSS_BUTTON_QUIT))->ChangeButtonState(LBUTTON_DOWN);
}

void CStartStationSetPage::OnQuitUp()
{
    ((CButton*)GetDlgItem(ID_PICSSS_BUTTON_QUIT))->ChangeButtonState(LBUTTON_UP);
    ChangePage(PAGE_ROM_INDEX_PIS);
    SetBtnDown(m_nPreIndex);
}

void CStartStationSetPage::SetBtnDown(int btnId)
{
    int i = 0;
    int stationNum = 0;
    QStringList stationNameList;

    switch((int)LineNumber_Char)
    {
    case 1:
    case 2:
        stationNum = g_stationNameLine1.size();
        stationNameList = g_stationNameLine1;
        break;
    case 3:
    case 4:
        stationNum = g_stationNameLine2.size();
        stationNameList = g_stationNameLine2;
        break;
    case 5:
    case 6:
        stationNum = g_stationNameLine3.size();
        stationNameList = g_stationNameLine3;
        break;
    case 7:
    case 8:
        stationNum = g_stationNameLine4.size();
        stationNameList = g_stationNameLine4;
        break;
    case 9:
    case 10:
        stationNum = g_stationNameLine5.size();
        stationNameList = g_stationNameLine5;
        break;
    default:
        stationNum = g_stationNameLine1.size();
        stationNameList = g_stationNameLine1;
        break;
    }

    if(btnId > nStartStationBtnIDArray[stationNum-1])
        return;
    for(i=0; i < stationNum; i++)
    {
        if(nStartStationBtnIDArray[i] == btnId)
        {
            ((CButton *)GetDlgItem(nStartStationBtnIDArray[i]))->ChangeButtonState(LBUTTON_DOWN);
            m_StationSet_DepartureStation_Uchar = i + 1;
            (g_PageVec[PAGE_ROM_INDEX_PIS])->GetDlgItem(ID_PICPIS_LABEL_STARTSTATION)->SetCtrlText(stationNameList.at((int)m_StationSet_DepartureStation_Uchar - 1));
        }
        else
        {
            ((CButton *)GetDlgItem(nStartStationBtnIDArray[i]))->ChangeButtonState(LBUTTON_UP);
        }
    }
    for(; i < 33; i++)
    {
        ((CButton*)GetDlgItem(nStartStationBtnIDArray[i]))->m_bAutoUpState = false;
        ((CButton*)GetDlgItem(nStartStationBtnIDArray[i]))->SetInVisible();
    }

    for(i=0; i < (stationNum-1); i++)
    {
        ((CLabel*)GetDlgItem(nStartStationLabelIDArray[i]))->SetVisible(true);
    }
    for(; i < 32; i++)
    {
        ((CLabel*)GetDlgItem(nStartStationLabelIDArray[i]))->SetVisible(false);
    }
}

void CStartStationSetPage::OnStation1Down()
{
    SetBtnDown(ID_PICSSS_BUTTON_S1);
}

void CStartStationSetPage::OnStation2Down()
{
    SetBtnDown(ID_PICSSS_BUTTON_S2);
}

void CStartStationSetPage::OnStation3Down()
{
    SetBtnDown(ID_PICSSS_BUTTON_S3);
}

void CStartStationSetPage::OnStation4Down()
{
    SetBtnDown(ID_PICSSS_BUTTON_S4);
}

void CStartStationSetPage::OnStation5Down()
{
    SetBtnDown(ID_PICSSS_BUTTON_S5);
}

void CStartStationSetPage::OnStation6Down()
{
    SetBtnDown(ID_PICSSS_BUTTON_S6);
}

void CStartStationSetPage::OnStation7Down()
{
    SetBtnDown(ID_PICSSS_BUTTON_S7);
}

void CStartStationSetPage::OnStation8Down()
{
    SetBtnDown(ID_PICSSS_BUTTON_S8);
}

void CStartStationSetPage::OnStation9Down()
{
    SetBtnDown(ID_PICSSS_BUTTON_S9);
}

void CStartStationSetPage::OnStation10Down()
{
    SetBtnDown(ID_PICSSS_BUTTON_S10);
}

void CStartStationSetPage::OnStation11Down()
{
    SetBtnDown(ID_PICSSS_BUTTON_S11);
}

void CStartStationSetPage::OnStation12Down()
{
    SetBtnDown(ID_PICSSS_BUTTON_S12);
}

void CStartStationSetPage::OnStation13Down()
{
    SetBtnDown(ID_PICSSS_BUTTON_S13);
}
void CStartStationSetPage::OnStation14Down()
{
    SetBtnDown(ID_PICSSS_BUTTON_S14);
}

void CStartStationSetPage::OnStation15Down()
{
    SetBtnDown(ID_PICSSS_BUTTON_S15);
}
void CStartStationSetPage::OnStation16Down()
{
    SetBtnDown(ID_PICSSS_BUTTON_S16);
}

void CStartStationSetPage::OnStation17Down()
{
    SetBtnDown(ID_PICSSS_BUTTON_S17);
}

void CStartStationSetPage::OnStation18Down()
{
    SetBtnDown(ID_PICSSS_BUTTON_S18);
}

void CStartStationSetPage::OnStation19Down()
{
    SetBtnDown(ID_PICSSS_BUTTON_S19);
}

void CStartStationSetPage::OnStation20Down()
{
    SetBtnDown(ID_PICSSS_BUTTON_S20);
}

void CStartStationSetPage::OnStation21Down()
{
    SetBtnDown(ID_PICSSS_BUTTON_S21);
}

void CStartStationSetPage::OnStation22Down()
{
    SetBtnDown(ID_PICSSS_BUTTON_S22);
}
void CStartStationSetPage::OnStation23Down()
{
    SetBtnDown(ID_PICSSS_BUTTON_S23);
}
void CStartStationSetPage::OnStation24Down()
{
    SetBtnDown(ID_PICSSS_BUTTON_S24);
}
void CStartStationSetPage::OnStation25Down()
{
    SetBtnDown(ID_PICSSS_BUTTON_S25);
}
void CStartStationSetPage::OnStation26Down()
{
    SetBtnDown(ID_PICSSS_BUTTON_S26);
}
void CStartStationSetPage::OnStation27Down()
{
    SetBtnDown(ID_PICSSS_BUTTON_S27);
}
void CStartStationSetPage::OnStation28Down()
{
    SetBtnDown(ID_PICSSS_BUTTON_S28);
}
void CStartStationSetPage::OnStation29Down()
{
    SetBtnDown(ID_PICSSS_BUTTON_S29);
}
void CStartStationSetPage::OnStation30Down()
{
    SetBtnDown(ID_PICSSS_BUTTON_S30);
}
void CStartStationSetPage::OnStation31Down()
{
    SetBtnDown(ID_PICSSS_BUTTON_S31);
}
void CStartStationSetPage::OnStation32Down()
{
    SetBtnDown(ID_PICSSS_BUTTON_S32);
}
void CStartStationSetPage::OnStation33Down()
{
    SetBtnDown(ID_PICSSS_BUTTON_S33);
}
void CStartStationSetPage::OnUpdatePage()
{
    int i = 0;
    int stationNum = 0;
    QStringList stationNameList;
    switch((int)LineNumber_Char)
    {
    case 1:
    case 2:
        stationNum = g_stationNameLine1.size();
        stationNameList = g_stationNameLine1;
        break;
    case 3:
    case 4:
        stationNum = g_stationNameLine2.size();
        stationNameList = g_stationNameLine2;
        break;
    case 5:
    case 6:
        stationNum = g_stationNameLine3.size();
        stationNameList = g_stationNameLine3;
        break;
    case 7:
    case 8:
        stationNum = g_stationNameLine4.size();
        stationNameList = g_stationNameLine4;
        break;
    case 9:
    case 10:
        stationNum = g_stationNameLine5.size();
        stationNameList = g_stationNameLine5;
        break;
    default:
        stationNum = g_stationNameLine1.size();
        stationNameList = g_stationNameLine1;
        break;
    }

    for(i=0; i < stationNum; i++)
    {
        ((CButton*)GetDlgItem(nStartStationBtnIDArray[i]))->m_bAutoUpState = false;
        ((CButton*)GetDlgItem(nStartStationBtnIDArray[i]))->SetCtrlText( stationNameList.at(i) );
    }
    for(; i < 33; i++)
    {
        ((CButton*)GetDlgItem(nStartStationBtnIDArray[i]))->m_bAutoUpState = false;
        ((CButton*)GetDlgItem(nStartStationBtnIDArray[i]))->SetInVisible();
    }

    for(i=0; i < (stationNum-1); i++)
    {
        ((CLabel*)GetDlgItem(nStartStationLabelIDArray[i]))->SetVisible(true);
    }
    for(; i < 32; i++)
    {
        ((CLabel*)GetDlgItem(nStartStationLabelIDArray[i]))->SetVisible(false);
    }
}

#include "cpispage.h"

ROMDATA g_PicRom_Pis[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
    D_COMMON_PAGE_HEADER
    {"down.png",           D_DEFAULT_FONT,           QRect(440,120, 40, 35),    Qt::yellow,                     Qt::black,                  CONTROL_BMPBUTTON,        ID_PICPIS_BUTTON_DOWN  },
    {"up.png",             D_DEFAULT_FONT,           QRect(440, 80, 40, 35),    Qt::yellow,                     Qt::black,                  CONTROL_BMPBUTTON,        ID_PICPIS_BUTTON_UP  },
    {QSTR("Path Select"),      D_COMMON_TITLE_FONT,      QRect(80, 100, 170, 30),    Qt::yellow,                     Qt::black,                     CONTROL_LABEL,         ID_PICPIS_LABEL_LINECH      },
    {QSTR("up/down"),     D_COMMON_TITLE_FONT,      QRect(80, 160, 170, 30),    Qt::black,                     Qt::yellow,                     CONTROL_BUTTON,         ID_PICPIS_BUTTON_UPORDOWN      },
    {QSTR("Starting station"),        D_COMMON_TITLE_FONT,      QRect(80, 210, 170, 30),    Qt::black,                     Qt::yellow,                     CONTROL_BUTTON,         ID_PICPIS_BUTTON_STARTSTATION  },
    {QSTR("Terminal station"),        D_COMMON_TITLE_FONT,      QRect(80, 260, 170, 30),    Qt::black,                     Qt::yellow,                     CONTROL_BUTTON,         ID_PICPIS_BUTTON_ENDSTATION    },
    //{QSTR("当前站"),        D_COMMON_TITLE_FONT,      QRect(80, 310, 170, 30),    Qt::black,                     Qt::yellow,                     CONTROL_BUTTON,         ID_PICPIS_BUTTON_CURRENTSTATION},
    {QSTR("TCM OR TC"),     D_COMMON_TITLE_FONT,      QRect(80, 360, 170, 30),    Qt::black,                     Qt::yellow,                     CONTROL_BUTTON,         ID_PICPIS_BUTTON_TCMSORTC      },

    {"1",                 D_COMMON_TITLE_FONT,       QRect(385,100,  30, 30),    Qt::yellow,                    Qt::black,                      CONTROL_LABEL,          ID_PICPIS_LABEL_LINENO   },
    {QSTR("up"),         D_COMMON_TITLE_FONT,       QRect(320,160, 160, 30),    Qt::yellow,                    Qt::black,                      CONTROL_LABEL,          ID_PICPIS_LABEL_UPDOWN   },
    {"Stationa",          D_COMMON_TITLE_FONT,       QRect(320,210, 160, 30),    Qt::yellow,                    Qt::black,                      CONTROL_LABEL,          ID_PICPIS_LABEL_STARTSTATION   },
    {"Stationb",          D_COMMON_TITLE_FONT,       QRect(320,260, 160, 30),    Qt::yellow,                    Qt::black,                      CONTROL_LABEL,          ID_PICPIS_LABEL_ENDSTATION     },
    //{"Stationc",          D_COMMON_TITLE_FONT,       QRect(320,310, 160, 30),    Qt::yellow,                    Qt::black,                      CONTROL_LABEL,          ID_PICPIS_LABEL_CURRENTSTATION },
    {QSTR("Auto"),              D_COMMON_TITLE_FONT,       QRect(320,360, 160, 30),    Qt::yellow,                    Qt::black,                      CONTROL_LABEL,          ID_PICPIS_LABEL_TCMSORTC       },
    D_LAYER1_NAVIGATION_BAR
};
int g_PisRomLen = sizeof(g_PicRom_Pis)/sizeof(ROMDATA);

BEGIN_MESSAGE_MAP(CPisPage,CPage)
        ON_UPDATE_PAGE()
        ON_LBUTTONDOWN(IDBTN_NAVIBAR_QUIT, OnCommonQuitButtonDown)

        ON_LBUTTONDOWN(ID_PICPIS_BUTTON_UPORDOWN, OnUpDownBtnDown)
        ON_LBUTTONDOWN(ID_PICPIS_BUTTON_STARTSTATION, OnStartStationSetButtonDown)
        //ON_LBUTTONDOWN(ID_PICPIS_BUTTON_CURRENTSTATION, OnCurrentStationSetButtonDown)
        ON_LBUTTONDOWN(ID_PICPIS_BUTTON_ENDSTATION, OnEndStationSetButtonDown)
        ON_LBUTTONDOWN(ID_PICPIS_BUTTON_TCMSORTC, OnTcmsOrTcDown)

        ON_LBUTTONUP(ID_PICPIS_BUTTON_UPORDOWN, OnUpDownBtnUp)
        ON_LBUTTONUP(ID_PICPIS_BUTTON_STARTSTATION, OnStartStationSetButtonUp)
        //ON_LBUTTONUP(ID_PICPIS_BUTTON_CURRENTSTATION, OnCurrentStationSetButtonUp)
        ON_LBUTTONUP(ID_PICPIS_BUTTON_ENDSTATION, OnEndStationSetButtonUp)
        ON_LBUTTONUP(ID_PICPIS_BUTTON_TCMSORTC, OnTcmsOrTcUp)

        ON_LBUTTONDOWN(ID_PICPIS_BUTTON_DOWN, OnDownButtonDown)
        ON_LBUTTONUP(ID_PICPIS_BUTTON_DOWN, OnDownButtonUp)
        ON_LBUTTONDOWN(ID_PICPIS_BUTTON_UP, OnUpButtonDown)
        ON_LBUTTONUP(ID_PICPIS_BUTTON_UP, OnUpButtonUp)
        END_MESSAGE_MAP()

        CPisPage::CPisPage()
{
}

void CPisPage::OnInitPage()
{
    int stationNum = 0;
    QStringList stationNameList;
    switch((int)LineNumber_Char)
    {
    case 1:
    case 2:
        currentLineNo = 1;
        stationNum = g_stationNameLine1.size();
        stationNameList = g_stationNameLine1;
        break;
    case 3:
    case 4:
        currentLineNo = 2;
        stationNum = g_stationNameLine2.size();
        stationNameList = g_stationNameLine2;
        break;
    case 5:
    case 6:
        currentLineNo = 3;
        stationNum = g_stationNameLine3.size();
        stationNameList = g_stationNameLine3;
        break;
    case 7:
    case 8:
        currentLineNo = 4;
        stationNum = g_stationNameLine4.size();
        stationNameList = g_stationNameLine4;
        break;
    case 9:
    case 10:
        currentLineNo = 5;
        stationNum = g_stationNameLine5.size();
        stationNameList = g_stationNameLine5;
        break;
    default:
        currentLineNo = 1;
        stationNum = g_stationNameLine1.size();
        stationNameList = g_stationNameLine1;
        break;
    }

    if( g_StationSet_TerminalStation_Uchar==g_StationSet_DepartureStation_Uchar )
        g_StationSet_TerminalStation_Uchar = stationNum;

    //qDebug() << "CPisPage::OnInitPage():" << MAIN_TOP_CURENTSTATION_QUINT8<< stationNum << "g_StationSet_DepartureStation_Uchar" << (int)g_StationSet_DepartureStation_Uchar;
    GetDlgItem(ID_PICPIS_LABEL_STARTSTATION)->SetCtrlText (stationNameList.at((int)g_StationSet_DepartureStation_Uchar-1) );
//    if( ((int)MAIN_TOP_CURENTSTATION_QUINT8 > 0) && (MAIN_TOP_CURENTSTATION_QUINT8 < (stationNum+1)) )
//    {
//        GetDlgItem(ID_PICPIS_LABEL_CURRENTSTATION)->SetCtrlText(stationNameList.at((int)MAIN_TOP_CURENTSTATION_QUINT8-1));
//    }
//    else
//    {
//        GetDlgItem(ID_PICPIS_LABEL_CURRENTSTATION)->SetCtrlText(QSTR("请设置当前站"));
//    }
    //qDebug() << "CPisPage::OnInitPage():" << "g_StationSet_TerminalStation_Uchar" << (int)g_StationSet_TerminalStation_Uchar;
    GetDlgItem(ID_PICPIS_LABEL_ENDSTATION)->SetCtrlText(stationNameList.at((int)g_StationSet_TerminalStation_Uchar-1));

    if( currentLineNo==MIN_LINENO )
    {
        ((CBitmapButton *)GetDlgItem(ID_PICPIS_BUTTON_DOWN))->SetCtrlText("downgray.png");
    }
    else if(currentLineNo==MAX_LINENO )
    {
        ((CBitmapButton *)GetDlgItem(ID_PICPIS_BUTTON_UP))->SetCtrlText("upgray.png");
    }
    ((CLabel*)GetDlgItem(ID_PICPIS_LABEL_LINENO))->SetBorderColor(Qt::yellow);
    ((CLabel*)GetDlgItem(ID_PICPIS_LABEL_LINENO))->SetCtrlText(QString::number(currentLineNo));

    if(StationSet_UpOrDown_Bool)
    {
        ((CLabel*)GetDlgItem(ID_PICPIS_LABEL_UPDOWN))->SetCtrlText(QSTR("UP"));
    }
    else
    {
        ((CLabel*)GetDlgItem(ID_PICPIS_LABEL_UPDOWN))->SetCtrlText(QSTR("DOWN"));
    }

    if(StationSet_PisToTCMS_Bool)
        GetDlgItem(ID_PICPIS_LABEL_TCMSORTC)->SetCtrlText(QSTR("AUTO"));
    else
        GetDlgItem(ID_PICPIS_LABEL_TCMSORTC)->SetCtrlText(QSTR("MANUAL"));

    //qDebug() << "CPisPage::OnInitPage():end";

}
void CPisPage::OnUpdatePage()
{
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
    //qDebug() << "CPisPage::OnUpdatePage()0:" <<  "stationNum:" << stationNum << stationNameList.size();
    //qDebug() << "CPisPage::OnUpdatePage()1:" <<  g_StationSet_DepartureStation_Uchar;
    GetDlgItem(ID_PICPIS_LABEL_STARTSTATION)->SetCtrlText(stationNameList.at((int)g_StationSet_DepartureStation_Uchar-1));
    //qDebug() << "CPisPage::OnUpdatePage()2:" <<  MAIN_TOP_CURENTSTATION_QUINT8;
//    if( ((int)MAIN_TOP_CURENTSTATION_QUINT8 > 0) && (MAIN_TOP_CURENTSTATION_QUINT8 < (stationNum+1)) )
//    {
//        GetDlgItem(ID_PICPIS_LABEL_CURRENTSTATION)->SetCtrlText(stationNameList.at((int)MAIN_TOP_CURENTSTATION_QUINT8-1));
//    }
//    else
//    {
//        GetDlgItem(ID_PICPIS_LABEL_CURRENTSTATION)->SetCtrlText(QSTR("请设置当前站"));
//    }
    //qDebug() << "CPisPage::OnUpdatePage()3:" <<  stationNameList.size() << g_StationSet_TerminalStation_Uchar;
    GetDlgItem(ID_PICPIS_LABEL_ENDSTATION)->SetCtrlText(stationNameList.at((int)g_StationSet_TerminalStation_Uchar-1));
    //qDebug() << "CPisPage::OnUpdatePage()4:";
    if( currentLineNo==MIN_LINENO )
    {
        ((CBitmapButton *)GetDlgItem(ID_PICPIS_BUTTON_DOWN))->SetCtrlText("downgray.png");
    }
    else if(currentLineNo==MAX_LINENO )
    {
        ((CBitmapButton *)GetDlgItem(ID_PICPIS_BUTTON_UP))->SetCtrlText("upgray.png");
    }
    ((CLabel*)GetDlgItem(ID_PICPIS_LABEL_LINENO))->SetBorderColor(Qt::yellow);
    ((CLabel*)GetDlgItem(ID_PICPIS_LABEL_LINENO))->SetCtrlText(QString::number(currentLineNo));
    //qDebug() << "CPisPage::OnUpdatePage()5:" <<  currentLineNo;
}
void CPisPage::OnCommonQuitButtonDown()
{
    ChangePage(PAGE_ROM_INDEX_MAIN);
}


void CPisPage::OnUpDownBtnDown()
{
    ((CButton*)GetDlgItem(ID_PICPIS_BUTTON_UPORDOWN))->ChangeButtonState(LBUTTON_DOWN);
}

void CPisPage::OnStartStationSetButtonDown()
{
    ((CButton*)GetDlgItem(ID_PICPIS_BUTTON_STARTSTATION))->ChangeButtonState(LBUTTON_DOWN);
}

//void CPisPage::OnCurrentStationSetButtonDown()
//{
//    ((CButton*)GetDlgItem(ID_PICPIS_BUTTON_CURRENTSTATION))->ChangeButtonState(LBUTTON_DOWN);
//}

void CPisPage::OnEndStationSetButtonDown()
{
    ((CButton*)GetDlgItem(ID_PICPIS_BUTTON_ENDSTATION))->ChangeButtonState(LBUTTON_DOWN);
}

void CPisPage::OnTcmsOrTcDown()
{
    ((CButton*)GetDlgItem(ID_PICPIS_BUTTON_TCMSORTC))->ChangeButtonState(LBUTTON_DOWN);
}

void CPisPage::OnUpDownBtnUp()
{
    uchar var;
    ((CButton*)GetDlgItem(ID_PICPIS_BUTTON_UPORDOWN))->ChangeButtonState(LBUTTON_UP);
    StationSet_UpOrDown_Bool = !StationSet_UpOrDown_Bool;

    var = g_StationSet_DepartureStation_Uchar;
    g_StationSet_DepartureStation_Uchar = g_StationSet_TerminalStation_Uchar;
    g_StationSet_TerminalStation_Uchar = var;
    StationSettedFlag_Bool = true;
    if(StationSet_UpOrDown_Bool)
    {
        ((CLabel*)GetDlgItem(ID_PICPIS_LABEL_UPDOWN))->SetCtrlText(QSTR("UP"));
        LineNumber_Char = char(currentLineNo*2);
    }
    else
    {
        ((CLabel*)GetDlgItem(ID_PICPIS_LABEL_UPDOWN))->SetCtrlText(QSTR("DOWN"));
        LineNumber_Char = char(currentLineNo*2-1);
    }
}

void CPisPage::OnStartStationSetButtonUp()
{
    ((CButton*)GetDlgItem(ID_PICPIS_BUTTON_STARTSTATION))->ChangeButtonState(LBUTTON_UP);
    ChangePage(PAGE_ROM_INDEX_STARTSTATIONSET);
}

//void CPisPage::OnCurrentStationSetButtonUp()
//{
//    ((CButton*)GetDlgItem(ID_PICPIS_BUTTON_CURRENTSTATION))->ChangeButtonState(LBUTTON_UP);
//    ChangePage(PAGE_ROM_INDEX_CURRENTSTATIONSET);
//}

void CPisPage::OnEndStationSetButtonUp()
{
    ((CButton*)GetDlgItem(ID_PICPIS_BUTTON_ENDSTATION))->ChangeButtonState(LBUTTON_UP);
    ChangePage(PAGE_ROM_INDEX_ENDSTATIONSET);
}

void CPisPage::OnTcmsOrTcUp()
{
    ((CButton*)GetDlgItem(ID_PICPIS_BUTTON_TCMSORTC))->ChangeButtonState(LBUTTON_UP);
    StationSet_PisToTCMS_Bool = !StationSet_PisToTCMS_Bool;

    if(StationSet_PisToTCMS_Bool)
        GetDlgItem(ID_PICPIS_LABEL_TCMSORTC)->SetCtrlText(QSTR("AUTO"));
    else
        GetDlgItem(ID_PICPIS_LABEL_TCMSORTC)->SetCtrlText(QSTR("MANUAL"));
}
void CPisPage::OnDownButtonDown()
{
    CBitmapButton *bitmapButton;

    if( currentLineNo>MIN_LINENO )
    {
        bitmapButton = (CBitmapButton *)GetDlgItem(ID_PICPIS_BUTTON_DOWN);
        bitmapButton->SetCtrlText("downpress.png");
        bitmapButton->ChangeButtonState(LBUTTON_DOWN);
    }
    else
    {
        bitmapButton = (CBitmapButton *)GetDlgItem(ID_PICPIS_BUTTON_DOWN);
        bitmapButton->SetCtrlText("downgray.png");
    }
}

void CPisPage::OnDownButtonUp()
{
    CBitmapButton *bitmapButton;
    //qDebug() << "CPisPage::OnDownButtonUp()-1:" << LineNumber_Char << currentLineNo;
    if( currentLineNo>(MIN_LINENO+1) )
    {
        currentLineNo--;
        if(currentLineNo==4)
            currentLineNo--;
        bitmapButton = (CBitmapButton *)GetDlgItem(ID_PICPIS_BUTTON_DOWN);
        bitmapButton->SetCtrlText("down.png");
        bitmapButton->ChangeButtonState(LBUTTON_UP);
    }
    else if( currentLineNo==(MIN_LINENO+1) )
    {
        currentLineNo--;
        if(currentLineNo==4)
            currentLineNo--;
        bitmapButton = (CBitmapButton *)GetDlgItem(ID_PICPIS_BUTTON_DOWN);
        bitmapButton->SetCtrlText("downgray.png");
    }

    if(StationSet_UpOrDown_Bool)
        LineNumber_Char = char(currentLineNo*2);
    else
        LineNumber_Char = char(currentLineNo*2-1);

    switch((int)LineNumber_Char)
    {
    case 2:
        g_StationSet_DepartureStation_Uchar = 1;
        //g_StationSet_CurrentStation_Uchar = 1;
        g_StationSet_TerminalStation_Uchar = (uchar)g_stationNameLine1.size();
        break;
    case 1:
        g_StationSet_DepartureStation_Uchar = (uchar)g_stationNameLine1.size();
        //g_StationSet_CurrentStation_Uchar = (uchar)g_stationNameLine1.size();
        g_StationSet_TerminalStation_Uchar = 1;
        break;
    case 4:
        g_StationSet_DepartureStation_Uchar = 1;
        //g_StationSet_CurrentStation_Uchar = 1;
        g_StationSet_TerminalStation_Uchar = (uchar)g_stationNameLine2.size();
        break;
    case 3:
        g_StationSet_DepartureStation_Uchar = (uchar)g_stationNameLine2.size();
        //g_StationSet_CurrentStation_Uchar = (uchar)g_stationNameLine2.size();
        g_StationSet_TerminalStation_Uchar = 1;
        break;
    case 6:
        g_StationSet_DepartureStation_Uchar = 1;
        //g_StationSet_CurrentStation_Uchar = 1;
        g_StationSet_TerminalStation_Uchar = (uchar)g_stationNameLine3.size();
        break;
    case 5:
        g_StationSet_DepartureStation_Uchar = (uchar)g_stationNameLine3.size();
        //g_StationSet_CurrentStation_Uchar = (uchar)g_stationNameLine3.size();
        g_StationSet_TerminalStation_Uchar = 1;
        break;
    case 8:
        g_StationSet_DepartureStation_Uchar = 1;
        //g_StationSet_CurrentStation_Uchar = 1;
        g_StationSet_TerminalStation_Uchar = (uchar)g_stationNameLine4.size();
        break;
    case 7:
        g_StationSet_DepartureStation_Uchar = (uchar)g_stationNameLine4.size();
        //g_StationSet_CurrentStation_Uchar = (uchar)g_stationNameLine4.size();
        g_StationSet_TerminalStation_Uchar = 1;
        break;
    case 10:
        g_StationSet_DepartureStation_Uchar = 1;
        //g_StationSet_CurrentStation_Uchar = 1;
        g_StationSet_TerminalStation_Uchar = (uchar)g_stationNameLine5.size();
        break;
    case 9:
        g_StationSet_DepartureStation_Uchar = (uchar)g_stationNameLine5.size();
        //g_StationSet_CurrentStation_Uchar = (uchar)g_stationNameLine5.size();
        g_StationSet_TerminalStation_Uchar = 1;
        break;
    default:
        g_StationSet_DepartureStation_Uchar = 1;
        //g_StationSet_CurrentStation_Uchar = 1;
        g_StationSet_TerminalStation_Uchar = (uchar)g_stationNameLine1.size();
        break;
    }

    ((CBitmapButton *)GetDlgItem(ID_PICPIS_BUTTON_UP))->SetCtrlText("up.png");
    //qDebug() << "CPisPage::OnDownButtonUp()" << LineNumber_Char << currentLineNo;
}
void CPisPage::OnUpButtonDown()
{
    CBitmapButton *bitmapButton;

    if( currentLineNo<MAX_LINENO )
    {
        bitmapButton = (CBitmapButton *)GetDlgItem(ID_PICPIS_BUTTON_UP);
        bitmapButton->SetCtrlText("uppress.png");
        bitmapButton->ChangeButtonState(LBUTTON_DOWN);
    }
    else
    {
        bitmapButton = (CBitmapButton *)GetDlgItem(ID_PICPIS_BUTTON_UP);
        bitmapButton->SetCtrlText("upgray.png");
    }
    //qDebug() << "CPisPage::OnUpButtonDown()" << int(LineNumber_Char) << currentLineNo;
}

void CPisPage::OnUpButtonUp()
{
    CBitmapButton *bitmapButton;
    //qDebug() << "CPisPage::OnUpButtonUp()1->" << int(LineNumber_Char) << currentLineNo;
    if( currentLineNo<=(MAX_LINENO-1) )
    {
        currentLineNo++;
        if(currentLineNo==4)
            currentLineNo++;

    }
    if( currentLineNo==MAX_LINENO )
    {
        bitmapButton = (CBitmapButton *)GetDlgItem(ID_PICPIS_BUTTON_UP);
        bitmapButton->SetCtrlText("upgray.png");
        bitmapButton->ChangeButtonState(LBUTTON_UP);
    }
    else
    {
        bitmapButton = (CBitmapButton *)GetDlgItem(ID_PICPIS_BUTTON_UP);
        bitmapButton->SetCtrlText("up.png");
        bitmapButton->ChangeButtonState(LBUTTON_UP);
    }

    //qDebug() << "CPisPage::OnUpButtonUp()2->" << int(LineNumber_Char) << currentLineNo;
    if(StationSet_UpOrDown_Bool)
        LineNumber_Char = char(currentLineNo*2);
    else
        LineNumber_Char = char(currentLineNo*2-1);

    switch((int)LineNumber_Char)
    {
    case 2:
        g_StationSet_DepartureStation_Uchar = 1;
        //g_StationSet_CurrentStation_Uchar = 1;
        g_StationSet_TerminalStation_Uchar = (uchar)g_stationNameLine1.size();
        break;
    case 1:
        g_StationSet_DepartureStation_Uchar = (uchar)g_stationNameLine1.size();
        //g_StationSet_CurrentStation_Uchar = (uchar)g_stationNameLine1.size();
        g_StationSet_TerminalStation_Uchar = 1;
        break;
    case 4:
        g_StationSet_DepartureStation_Uchar = 1;
       // g_StationSet_CurrentStation_Uchar = 1;
        g_StationSet_TerminalStation_Uchar = (uchar)g_stationNameLine2.size();
        break;
    case 3:
        g_StationSet_DepartureStation_Uchar = (uchar)g_stationNameLine2.size();
        //g_StationSet_CurrentStation_Uchar = (uchar)g_stationNameLine2.size();
        g_StationSet_TerminalStation_Uchar = 1;
        break;
    case 6:
        g_StationSet_DepartureStation_Uchar = 1;
        //g_StationSet_CurrentStation_Uchar = 1;
        g_StationSet_TerminalStation_Uchar = (uchar)g_stationNameLine3.size();
        break;
    case 5:
        g_StationSet_DepartureStation_Uchar = (uchar)g_stationNameLine3.size();
        //g_StationSet_CurrentStation_Uchar = (uchar)g_stationNameLine3.size();
        g_StationSet_TerminalStation_Uchar = 1;
        break;
    case 8:
        g_StationSet_DepartureStation_Uchar = 1;
        //g_StationSet_CurrentStation_Uchar = 1;
        g_StationSet_TerminalStation_Uchar = (uchar)g_stationNameLine4.size();
        break;
    case 7:
        g_StationSet_DepartureStation_Uchar = (uchar)g_stationNameLine4.size();
        //g_StationSet_CurrentStation_Uchar = (uchar)g_stationNameLine4.size();
        g_StationSet_TerminalStation_Uchar = 1;
        break;
    case 10:
        g_StationSet_DepartureStation_Uchar = 1;
        //g_StationSet_CurrentStation_Uchar = 1;
        g_StationSet_TerminalStation_Uchar = (uchar)g_stationNameLine5.size();
        break;
    case 9:
        g_StationSet_DepartureStation_Uchar = (uchar)g_stationNameLine5.size();
        //g_StationSet_CurrentStation_Uchar = (uchar)g_stationNameLine5.size();
        g_StationSet_TerminalStation_Uchar = 1;
        break;
    default:
        g_StationSet_DepartureStation_Uchar = 1;
        //g_StationSet_CurrentStation_Uchar = 1;
        g_StationSet_TerminalStation_Uchar = (uchar)g_stationNameLine1.size();
        break;
    }
    ((CBitmapButton *)GetDlgItem(ID_PICPIS_BUTTON_DOWN))->SetCtrlText("down.png");
    //qDebug() << "CPisPage::OnUpButtonUp()3->" << int(LineNumber_Char) << currentLineNo;
}

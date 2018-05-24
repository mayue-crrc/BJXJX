#include "csystimesetpage.h"

ROMDATA g_PicRom_SysTimeSet[] =
{
    /*string               font         rc                         foreground color              background color               control type                   ID           */
    {QSTR("系统时间设定")  ,  D_FONT(13),  QRect(0,  0,640, 60),          Qt::black,                   Qt::yellow,                 CONTROL_LABEL,        ID_PISTS_LABEL_TITLE                },

    {QSTR("年"),                   D_FONT(9),   QRect( 50,80,100, 30),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,        ID_PISTS_LABEL_YEAR      },
    {QSTR("月"),                   D_FONT(9),   QRect(180,80, 70, 30),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,        ID_PISTS_LABEL_MONTH     },
    {QSTR("日"),                   D_FONT(9),   QRect(280,80, 70, 30),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,        ID_PISTS_LABEL_DAY       },
    {"",                   D_COMMON_TITLE_FONT,  QRect( 50,120,100, 50),         Qt::yellow,                  Qt::black,                  CONTROL_EDIT,         ID_PISTS_EDIT_YEAR       },
    {"",                   D_COMMON_TITLE_FONT,  QRect(180,120, 70, 50),         Qt::yellow,                  Qt::black,                  CONTROL_EDIT,         ID_PISTS_EDIT_MONTH      },
    {"",                   D_COMMON_TITLE_FONT,  QRect(280,120, 70, 50),         Qt::yellow,                  Qt::black,                  CONTROL_EDIT,         ID_PISTS_EDIT_DAY      },

    {QSTR("时"),                   D_FONT(9),   QRect( 50,180,100, 30),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,        ID_PISTS_LABEL_HOUR      },
    {QSTR("分"),                   D_FONT(9),   QRect(180,180, 70, 30),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,        ID_PISTS_LABEL_MINUTE     },
    {QSTR("秒"),                   D_FONT(9),   QRect(280,180, 70, 30),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,        ID_PISTS_LABEL_SECOND       },
    {"",                   D_COMMON_TITLE_FONT,  QRect( 50,220,100, 50),         Qt::yellow,                  Qt::black,                  CONTROL_EDIT,         ID_PISTS_EDIT_HOUR       },
    {"",                   D_COMMON_TITLE_FONT,  QRect(180,220, 70, 50),         Qt::yellow,                  Qt::black,                  CONTROL_EDIT,         ID_PISTS_EDIT_MINUTE      },
    {"",                   D_COMMON_TITLE_FONT,  QRect(280,220, 70, 50),         Qt::yellow,                  Qt::black,                  CONTROL_EDIT,         ID_PISTS_EDIT_SECOND        },

//    {QSTR("日期"),                   D_FONT(9),   QRect( 50,100+110,100, 30),         Qt::yellow,                  Qt::black,                  CONTROL_BUTTON,        ID_PISTS_BUTTON_DATE   },
//    {QSTR("时间"),                   D_FONT(9),   QRect(180,100+110, 100, 30),         Qt::yellow,                  Qt::black,                  CONTROL_BUTTON,       ID_PISTS_BUTTON_TIME   },
    {QSTR("")  ,                    D_FONT(9),   QRect(90,  320,460, 60),         Qt::black,                   Qt::yellow,                 CONTROL_LABEL,        ID_PISTS_LABEL_SETNUM   },


    {"-",                  D_FONT(15),  QRect(151,120, 29, 50),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,        ID_PISTS_LABEL_SPLIT1},
    {"-",                  D_FONT(15),  QRect(251,120, 29, 50),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,        ID_PISTS_LABEL_SPLIT2},
    {":",                  D_FONT(15),  QRect(151,220, 29, 50),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,        ID_PISTS_LABEL_SPLIT1},
    {":",                  D_FONT(15),  QRect(251,220, 29, 50),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,        ID_PISTS_LABEL_SPLIT2},

    {QSTR("设定"),         D_COMMON_TITLE_FONT,  QRect(160,  400, 120, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PISTS_BUTTON_SET      },
    {QSTR("退出"),         D_COMMON_TITLE_FONT,  QRect(360,  400, 120, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PISTS_BTN_QUIT        },

    {"1",                  D_COMMON_TITLE_FONT,  QRect(400,  100,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PISTS_BUTTON_NUMBER1  },
    {"2",                  D_COMMON_TITLE_FONT,  QRect(450,  100,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PISTS_BUTTON_NUMBER2  },
    {"3",                  D_COMMON_TITLE_FONT,  QRect(500,  100,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PISTS_BUTTON_NUMBER3  },
    {"4",                  D_COMMON_TITLE_FONT,  QRect(400,  150,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PISTS_BUTTON_NUMBER4  },
    {"5",                  D_COMMON_TITLE_FONT,  QRect(450,  150,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PISTS_BUTTON_NUMBER5  },
    {"6",                  D_COMMON_TITLE_FONT,  QRect(500,  150,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PISTS_BUTTON_NUMBER6  },
    {"7",                  D_COMMON_TITLE_FONT,  QRect(400,  200,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PISTS_BUTTON_NUMBER7  },
    {"8",                  D_COMMON_TITLE_FONT,  QRect(450,  200,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PISTS_BUTTON_NUMBER8  },
    {"9",                  D_COMMON_TITLE_FONT,  QRect(500,  200,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PISTS_BUTTON_NUMBER9  },
    {"0",                  D_COMMON_TITLE_FONT,  QRect(400,  250,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PISTS_BUTTON_NUMBER0  },

    {QSTR("清除"),              D_COMMON_TITLE_FONT,  QRect(450,  250, 100, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PISTS_BUTTON_CLEAR  },
    //{"TIME RECVED FLAG",                   D_FONT(8),   QRect(80,200, 200, 30),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,        ID_PISTS_RECVFLAG       },
    //{"TIME SEND FLAG",                   D_FONT(8),   QRect(80,250, 200, 30),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,        ID_PISTS_SENDFLAG       },

};
int g_SysTimeSetRomLen = sizeof(g_PicRom_SysTimeSet)/sizeof(ROMDATA);

BEGIN_MESSAGE_MAP(CSysTimeSetPage,CPage)
        ON_UPDATE_PAGE()
        ON_LBUTTONDOWN(ID_PISTS_BTN_QUIT, OnQuitButtonDown)
        ON_LBUTTONUP(ID_PISTS_BTN_QUIT, OnQuitButtonUp)
        ON_LBUTTONDOWN(ID_PISTS_BUTTON_SET, OnSetButtonDown)
        ON_LBUTTONUP(ID_PISTS_BUTTON_SET, OnSetButtonUp)
        ON_LBUTTONDOWN(ID_PISTS_BUTTON_NUMBER0,OnNum0Down)
        ON_LBUTTONDOWN(ID_PISTS_BUTTON_NUMBER1,OnNum1Down)
        ON_LBUTTONDOWN(ID_PISTS_BUTTON_NUMBER2,OnNum2Down)
        ON_LBUTTONDOWN(ID_PISTS_BUTTON_NUMBER3,OnNum3Down)
        ON_LBUTTONDOWN(ID_PISTS_BUTTON_NUMBER4,OnNum4Down)
        ON_LBUTTONDOWN(ID_PISTS_BUTTON_NUMBER5,OnNum5Down)
        ON_LBUTTONDOWN(ID_PISTS_BUTTON_NUMBER6,OnNum6Down)
        ON_LBUTTONDOWN(ID_PISTS_BUTTON_NUMBER7,OnNum7Down)
        ON_LBUTTONDOWN(ID_PISTS_BUTTON_NUMBER8,OnNum8Down)
        ON_LBUTTONDOWN(ID_PISTS_BUTTON_NUMBER9,OnNum9Down)
        ON_LBUTTONDOWN(ID_PISTS_BUTTON_CLEAR,OnClearDown)
        ON_LBUTTONUP(ID_PISTS_BUTTON_NUMBER0,OnNum0Up)
        ON_LBUTTONUP(ID_PISTS_BUTTON_NUMBER1,OnNum1Up)
        ON_LBUTTONUP(ID_PISTS_BUTTON_NUMBER2,OnNum2Up)
        ON_LBUTTONUP(ID_PISTS_BUTTON_NUMBER3,OnNum3Up)
        ON_LBUTTONUP(ID_PISTS_BUTTON_NUMBER4,OnNum4Up)
        ON_LBUTTONUP(ID_PISTS_BUTTON_NUMBER5,OnNum5Up)
        ON_LBUTTONUP(ID_PISTS_BUTTON_NUMBER6,OnNum6Up)
        ON_LBUTTONUP(ID_PISTS_BUTTON_NUMBER7,OnNum7Up)
        ON_LBUTTONUP(ID_PISTS_BUTTON_NUMBER8,OnNum8Up)
        ON_LBUTTONUP(ID_PISTS_BUTTON_NUMBER9,OnNum9Up)
        ON_LBUTTONUP(ID_PISTS_BUTTON_CLEAR,OnClearUp)

       // ON_LBUTTONUP(ID_PISTS_BUTTON_DATE,OnDateUp)
       // ON_LBUTTONUP(ID_PISTS_BUTTON_TIME,OnTimeUp)
       // ON_LBUTTONDOWN(ID_PISTS_BUTTON_DATE,OnDateDown)
       // ON_LBUTTONDOWN(ID_PISTS_BUTTON_TIME,OnTimeDown)

        ON_LBUTTONDOWN(ID_PISTS_EDIT_YEAR, OnYearEdit)
        ON_LBUTTONDOWN(ID_PISTS_EDIT_MONTH, OnMonthEdit)
        ON_LBUTTONDOWN(ID_PISTS_EDIT_DAY, OnDayEdit)
        ON_LBUTTONDOWN(ID_PISTS_EDIT_HOUR, OnHourEdit)
        ON_LBUTTONDOWN(ID_PISTS_EDIT_MINUTE, OnMinuteEdit)
        ON_LBUTTONDOWN(ID_PISTS_EDIT_SECOND, OnSecondEdit)

END_MESSAGE_MAP()

CSysTimeSetPage::CSysTimeSetPage()
{
   // m_settype = E_SET_DATE;
    m_btnPress = false;
}

void CSysTimeSetPage::OnUpdatePage()
{


            GetDlgItem(ID_PISTS_LABEL_SETNUM)->SetCtrlText( QSTR("注意：具体设定数值以下方设定值为准")+"\n"+
                                                            QSTR("设定值：")+
                                                            QString::number(IDUCT_Year_U8 +2000)+"-"+
                                                            QString::number(IDUCT_Month_U8)+"-"+
                                                            QString::number(IDUCT_Day_U8)+"    "+
                                                            QString::number(IDUCT_Hour_U8)+"-"+
                                                            QString::number(IDUCT_Minute_U8) +"-"+
                                                            QString::number(IDUCT_Second_U8));


    if (m_btnPress)
    {

        ((CButton*)GetDlgItem(ID_PISTS_BUTTON_SET))->ChangeButtonState(LBUTTON_DOWN);

        static int times = 0;
        times++;
        if (times%times_n == 0)
        {
           DATE_valid_timer--;
            if (DATE_valid_timer==0)
            {
                ((CButton*)GetDlgItem(ID_PISTS_BUTTON_SET))->ChangeButtonState(LBUTTON_UP);

                m_btnPress = false;

//                IDUCT_Year_U8 = 0;
//                IDUCT_Month_U8 = 0;
//                IDUCT_Day_U8 = 0;
//                IDUCT_Hour_U8 = 0;
//                IDUCT_Minute_U8 = 0;
//                IDUCT_Second_U8 = 0;
                IDUCT_TimeUpdate_B1 = false;



            }

        }

    }


    /*
if(TEST_TIMESYNC_CMD_BOOL)
        GetDlgItem(ID_PISTS_RECVFLAG)->SetCtrlText(QSTR("FLAG RECEIVED!"));
    else
        GetDlgItem(ID_PISTS_RECVFLAG)->SetCtrlText(QSTR("FLAG NOT RECEIVED!"));

    if(g_SystemTimeSetEn_Bool)
        GetDlgItem(ID_PISTS_SENDFLAG)->SetCtrlText(QSTR("FLAG SEND!"));
    else
        GetDlgItem(ID_PISTS_SENDFLAG)->SetCtrlText(QSTR("FLAG NOT SEND!"));*/
}

void CSysTimeSetPage::OnInitPage()
{
        GetDlgItem(ID_PISTS_LABEL_TITLE)->SetCtrlText(QSTR("系统时间设定"));


        QString year, month, day;
        year.sprintf("%d", QDateTime::currentDateTime().date().year());
        month.sprintf("%d", QDateTime::currentDateTime().date().month());
        day.sprintf("%d", QDateTime::currentDateTime().date().day());
        SetLabelSelected(ID_PISTS_LABEL_YEAR,true);
        SetEditSelected(ID_PISTS_EDIT_YEAR,true);
        SetEditSelected(ID_PISTS_EDIT_MONTH,false);
        SetEditSelected(ID_PISTS_EDIT_DAY,false);
        GetDlgItem(ID_PISTS_EDIT_YEAR)->SetCtrlText(year);
        GetDlgItem(ID_PISTS_EDIT_MONTH)->SetCtrlText(month);
        GetDlgItem(ID_PISTS_EDIT_DAY)->SetCtrlText(day);

        QString hour, minute, second;
        hour.sprintf("%d", QDateTime::currentDateTime().time().hour());
        minute.sprintf("%d", QDateTime::currentDateTime().time().minute());
        second.sprintf("%d", QDateTime::currentDateTime().time().second());
        SetEditSelected(ID_PISTS_EDIT_HOUR,false);
        SetEditSelected(ID_PISTS_EDIT_MINUTE,false);
        SetEditSelected(ID_PISTS_EDIT_SECOND,false);
        GetDlgItem(ID_PISTS_EDIT_HOUR)->SetCtrlText(hour);
        GetDlgItem(ID_PISTS_EDIT_MINUTE)->SetCtrlText(minute);
        GetDlgItem(ID_PISTS_EDIT_SECOND)->SetCtrlText(second);

}

void CSysTimeSetPage::OnQuitButtonDown()
{
    ((CButton*)GetDlgItem(ID_PISTS_BTN_QUIT))->ChangeButtonState(LBUTTON_DOWN);
}

void CSysTimeSetPage::OnQuitButtonUp()
{

    ((CButton*)GetDlgItem(ID_PISTS_BTN_QUIT))->ChangeButtonState(LBUTTON_UP);
    ChangePage(PAGE_ROM_INDEX_PARAMETERSET);

}

void CSysTimeSetPage::OnSetButtonDown()
{

    ((CButton*)GetDlgItem(ID_PISTS_BUTTON_SET))->ChangeButtonState(LBUTTON_DOWN);

}

void CSysTimeSetPage::OnSetButtonUp()
{
    if(m_btnPress == false)
    {
        m_btnPress = true;
        DATE_valid_timer = 5;
    QString strYear;
    QString strMonth;
    QString strDay;
    QString strHour;
    QString strMinute;
    QString strSecond;
    int nYear = 0;
    int nMonth = 0;
    int nDay = 0;
    int nHour = 0;
    int nMinute = 0;
    int nSecond = 0;



    QDate intputdate,update( 2040, 01, 19 ),downdate( 2000, 01, 1 );

    strYear.sprintf("%d", QDateTime::currentDateTime().date().year());
    strMonth.sprintf("%d", QDateTime::currentDateTime().date().month());
    strDay.sprintf("%d", QDateTime::currentDateTime().date().day());
    strHour.sprintf("%d", QDateTime::currentDateTime().time().hour());
    strMinute.sprintf("%d", QDateTime::currentDateTime().time().minute());
    strSecond.sprintf("%d", QDateTime::currentDateTime().time().second());

    //qDebug()<<strYear<<"-"<<strMonth<<"-"<<strDay<<" "<<strHour<<":"<<strMinute<<":"<<strSecond;


        strYear = GetDlgItem(ID_PISTS_EDIT_YEAR)->GetCtrlText();
        strMonth = GetDlgItem(ID_PISTS_EDIT_MONTH)->GetCtrlText();
        strDay = GetDlgItem(ID_PISTS_EDIT_DAY)->GetCtrlText();
        strHour = GetDlgItem(ID_PISTS_EDIT_HOUR)->GetCtrlText();
        strMinute = GetDlgItem(ID_PISTS_EDIT_MINUTE)->GetCtrlText();
        strSecond = GetDlgItem(ID_PISTS_EDIT_SECOND)->GetCtrlText();


    if(strYear.length() != 4 || strMonth.length() > 2
       || strDay.length() > 2 || strHour.length() > 2
       || strMinute.length() > 2 || strSecond.length() > 2)
    {
        OnInitPage();
        ShowWarningDialog();
    }
    else
    {
        nYear = strYear.toInt();
        nMonth = strMonth.toInt();
        nDay = strDay.toInt();
        nHour = strHour.toInt();
        nMinute = strMinute.toInt();
        nSecond = strSecond.toInt();


        if(QDate::isValid( nYear, nMonth, nDay ) && QTime::isValid( nHour, nMinute, nSecond ))
        {
            intputdate.setDate( nYear, nMonth, nDay );
            if( intputdate.daysTo( update ) >= 1 && downdate.daysTo( intputdate ) >= 0 )
            {
                setScreenTime( nYear, nMonth, nDay, nHour, nMinute, nSecond );
                //ChangePage(PAGE_ROM_INDEX_PARAMETERSET);
              //**********0721

                IDUCT_Year_U8 = nYear-2000 ;

                IDUCT_Month_U8 = nMonth;
                IDUCT_Day_U8 = nDay;
                IDUCT_Hour_U8 = nHour;
                IDUCT_Minute_U8 = nMinute;
                IDUCT_Second_U8 =nSecond ;
                IDUCT_TimeUpdate_B1 = true ;

            }
            else
            {
                OnInitPage();
                ShowWarningDialog();
            }
        }
        else
        {
            OnInitPage();
            ShowWarningDialog();
        }

    }
}
}

/*
//void CSysTimeSetPage::OnDateUp()
//{

//}

//void CSysTimeSetPage::OnDateDown()
//{
//    if(m_btnPress == false)
//    {
//     m_settype = E_SET_DATE ;
//    ((CButton*)GetDlgItem(ID_PISTS_BUTTON_DATE))->ChangeButtonState(LBUTTON_DOWN);
//}
//}

//void CSysTimeSetPage::OnTimeUp()
//{

//}

//void CSysTimeSetPage::OnTimeDown()
//{
//    {
//    m_settype = E_SET_TIME ;
//   ((CButton*)GetDlgItem(ID_PISTS_BUTTON_TIME))->ChangeButtonState(LBUTTON_DOWN);

//}
//}
*/
void CSysTimeSetPage::setScreenTime( int year, int mon, int day, int hour, int minute, int second )
{
    time_t t;
    struct tm nowtime;
    nowtime.tm_sec = second; // second
    nowtime.tm_min = minute; ///*       Minutes.[0-59]
    nowtime.tm_hour = hour;  ///*       Hours.   [0-23]
    nowtime.tm_mday = day;   ///*       Day.[1-31]
    nowtime.tm_mon = mon - 1; ///*       Month.   [0-11]
    nowtime.tm_year = year - 1900; ///*       Year-       1900.
    nowtime.tm_isdst = -1;    ///*       DST.[-1/0/1]
    t = mktime(&nowtime);
    stime(&t);
    #ifndef windows_demo
    g_SystemTimeSetEn_Bool = true;
    QDate date( year, mon, day );
    QTime time( hour, minute, second );
    QString dateStr = date.toString( "yyyy-MM-dd" );
    QString timeStr = time.toString( "hh:mm:ss" );
    QString hwclockStr = "hwclock --set --date \"";
    //QString hwclockStr = "date -s \"";
    dateStr.replace(QRegExp("-"), "");
    timeStr.replace(QRegExp("-"), ":");
    hwclockStr = hwclockStr + dateStr + " " + timeStr + "\"";
    char *c=hwclockStr.toAscii().data();
    system(c);

    //system("hwclock -w");
    #endif  //windows_demo


}

void CSysTimeSetPage::AddSelectedEditBox(QString str)
{
    int str_len;
    if (IsEditSelected(ID_PISTS_EDIT_YEAR))
    {
        str_len = AddEditStr(ID_PISTS_EDIT_YEAR, str);
        if (4 == str_len)
        {
            SetEditSelected(ID_PISTS_EDIT_YEAR,false);
            SetEditSelected(ID_PISTS_EDIT_MONTH,true);
            SetEditSelected(ID_PISTS_EDIT_DAY,false);
            SetEditSelected(ID_PISTS_EDIT_HOUR,false);
            SetEditSelected(ID_PISTS_EDIT_MINUTE,false);
            SetEditSelected(ID_PISTS_EDIT_SECOND,false);

            SetLabelSelected(ID_PISTS_LABEL_YEAR,false);
            SetLabelSelected(ID_PISTS_LABEL_MONTH,true);
            SetLabelSelected(ID_PISTS_LABEL_DAY,false);
            SetLabelSelected(ID_PISTS_LABEL_HOUR,false);
            SetLabelSelected(ID_PISTS_LABEL_MINUTE,false);
            SetLabelSelected(ID_PISTS_LABEL_SECOND,false);
        }
    }
    else if (IsEditSelected(ID_PISTS_EDIT_MONTH))
    {
        str_len = AddEditStr(ID_PISTS_EDIT_MONTH, str);
        if (2 == str_len)
        {
            SetEditSelected(ID_PISTS_EDIT_YEAR,false);
            SetEditSelected(ID_PISTS_EDIT_MONTH,false);
            SetEditSelected(ID_PISTS_EDIT_DAY,true);
            SetEditSelected(ID_PISTS_EDIT_HOUR,false);
            SetEditSelected(ID_PISTS_EDIT_MINUTE,false);
            SetEditSelected(ID_PISTS_EDIT_SECOND,false);

            SetLabelSelected(ID_PISTS_LABEL_YEAR,false);
            SetLabelSelected(ID_PISTS_LABEL_MONTH,false);
            SetLabelSelected(ID_PISTS_LABEL_DAY,true);
            SetLabelSelected(ID_PISTS_LABEL_HOUR,false);
            SetLabelSelected(ID_PISTS_LABEL_MINUTE,false);
            SetLabelSelected(ID_PISTS_LABEL_SECOND,false);
        }
    }
    else if ( IsEditSelected(ID_PISTS_EDIT_DAY))
    {
        str_len = AddEditStr(ID_PISTS_EDIT_DAY, str);
        if (2 == str_len)
        {
            SetEditSelected(ID_PISTS_EDIT_YEAR,false);
            SetEditSelected(ID_PISTS_EDIT_MONTH,false);
            SetEditSelected(ID_PISTS_EDIT_DAY,false);
            SetEditSelected(ID_PISTS_EDIT_HOUR,true);
            SetEditSelected(ID_PISTS_EDIT_MINUTE,false);
            SetEditSelected(ID_PISTS_EDIT_SECOND,false);

            SetLabelSelected(ID_PISTS_LABEL_YEAR,false);
            SetLabelSelected(ID_PISTS_LABEL_MONTH,false);
            SetLabelSelected(ID_PISTS_LABEL_DAY,false);
            SetLabelSelected(ID_PISTS_LABEL_HOUR,true);
            SetLabelSelected(ID_PISTS_LABEL_MINUTE,false);
            SetLabelSelected(ID_PISTS_LABEL_SECOND,false);
        }
    }
    else if ( IsEditSelected(ID_PISTS_EDIT_HOUR))
    {
        str_len = AddEditStr(ID_PISTS_EDIT_HOUR, str);
        if (2 == str_len)
        {
            SetEditSelected(ID_PISTS_EDIT_YEAR,false);
            SetEditSelected(ID_PISTS_EDIT_MONTH,false);
            SetEditSelected(ID_PISTS_EDIT_DAY,false);
            SetEditSelected(ID_PISTS_EDIT_HOUR,false);
            SetEditSelected(ID_PISTS_EDIT_MINUTE,true);
            SetEditSelected(ID_PISTS_EDIT_SECOND,false);

            SetLabelSelected(ID_PISTS_LABEL_YEAR,false);
            SetLabelSelected(ID_PISTS_LABEL_MONTH,false);
            SetLabelSelected(ID_PISTS_LABEL_DAY,false);
            SetLabelSelected(ID_PISTS_LABEL_HOUR,false);
            SetLabelSelected(ID_PISTS_LABEL_MINUTE,true);
            SetLabelSelected(ID_PISTS_LABEL_SECOND,false);
        }
    }
    else if (IsEditSelected(ID_PISTS_EDIT_MINUTE))
    {
        str_len = AddEditStr(ID_PISTS_EDIT_MINUTE, str);
        if (2 == str_len)
        {
            SetEditSelected(ID_PISTS_EDIT_YEAR,false);
            SetEditSelected(ID_PISTS_EDIT_MONTH,false);
            SetEditSelected(ID_PISTS_EDIT_DAY,false);
            SetEditSelected(ID_PISTS_EDIT_HOUR,false);
            SetEditSelected(ID_PISTS_EDIT_MINUTE,false);
            SetEditSelected(ID_PISTS_EDIT_SECOND,true);

            SetLabelSelected(ID_PISTS_LABEL_YEAR,false);
            SetLabelSelected(ID_PISTS_LABEL_MONTH,false);
            SetLabelSelected(ID_PISTS_LABEL_DAY,false);
            SetLabelSelected(ID_PISTS_LABEL_HOUR,false);
            SetLabelSelected(ID_PISTS_LABEL_MINUTE,false);
            SetLabelSelected(ID_PISTS_LABEL_SECOND,true);
        }
    }
    else if (IsEditSelected(ID_PISTS_EDIT_SECOND))
    {
        str_len = AddEditStr(ID_PISTS_EDIT_SECOND, str);
        if (2 == str_len)
        {
            SetEditSelected(ID_PISTS_EDIT_YEAR,true);
            SetEditSelected(ID_PISTS_EDIT_MONTH,false);
            SetEditSelected(ID_PISTS_EDIT_DAY,false);
            SetEditSelected(ID_PISTS_EDIT_HOUR,false);
            SetEditSelected(ID_PISTS_EDIT_MINUTE,false);
            SetEditSelected(ID_PISTS_EDIT_SECOND,false);

            SetLabelSelected(ID_PISTS_LABEL_YEAR,true);
            SetLabelSelected(ID_PISTS_LABEL_MONTH,false);
            SetLabelSelected(ID_PISTS_LABEL_DAY,false);
            SetLabelSelected(ID_PISTS_LABEL_HOUR,false);
            SetLabelSelected(ID_PISTS_LABEL_MINUTE,false);
            SetLabelSelected(ID_PISTS_LABEL_SECOND,false);
        }
    }
    else
    {
        //do nothing
    }
}

bool CSysTimeSetPage::IsEditSelected(int EditId)
{
    CEdit *pEdit = NULL;
    pEdit = (CEdit *)GetDlgItem(EditId);
    if (NULL == pEdit)
    {
        return false;
    }

    return pEdit->GetSelected();
}

int CSysTimeSetPage::AddEditStr(int EditId, QString str)
{
    CEdit *pEdit = NULL;
    pEdit = (CEdit *)GetDlgItem(EditId);
    if (NULL == pEdit)
    {
        return 0;
    }
    QString edit_str;
    edit_str = pEdit->GetCtrlText();

    if (
            ((ID_PISTS_EDIT_YEAR == EditId) && (4 == edit_str.length()))
        || ((ID_PISTS_EDIT_MONTH == EditId) && (2 == edit_str.length()))
        || ((ID_PISTS_EDIT_DAY == EditId) && (2 == edit_str.length()))
        || ((ID_PISTS_EDIT_HOUR == EditId) && (2 == edit_str.length()))
        || ((ID_PISTS_EDIT_MINUTE == EditId) && (2 == edit_str.length()))
        || ((ID_PISTS_EDIT_SECOND == EditId) && (2 == edit_str.length()))
        )
  // if(0)
    {
        edit_str = str;
    }
    else
    {
        edit_str = edit_str.append(str);
    }
    pEdit->SetCtrlText(edit_str);
    return edit_str.length();
}

void CSysTimeSetPage::SetEditSelected(int EditId, bool flg)
{
    CEdit *pEdit = NULL;
    pEdit = (CEdit *)GetDlgItem(EditId);
    if (NULL == pEdit)
    {
        return;
    }
    pEdit->SetSelected(flg);
}
void CSysTimeSetPage::SetLabelSelected(int LabelId, bool flg)
{
    CLabel *pLabel = NULL;
    pLabel = (CLabel *)GetDlgItem(LabelId);
    if (NULL == pLabel)
    {
        return;
    }
    if(flg)
    {
    pLabel->SetTxtColor(Qt::black);
    pLabel->SetCtrlBKColor(Qt::yellow);
    }
    else
    {
        pLabel->SetTxtColor(Qt::yellow);
        pLabel->SetCtrlBKColor(Qt::black);
    }
}
void CSysTimeSetPage::SetSelectedEditBox(QString str)
{

    if (IsEditSelected(ID_PISTS_EDIT_YEAR))
    {
        SetEditStr(ID_PISTS_EDIT_YEAR, str);
    }
    else if (IsEditSelected(ID_PISTS_EDIT_MONTH))
    {
        SetEditStr(ID_PISTS_EDIT_MONTH, str);
    }
    else if (IsEditSelected(ID_PISTS_EDIT_DAY))
    {
        SetEditStr(ID_PISTS_EDIT_DAY, str);
    }
    else  if (IsEditSelected(ID_PISTS_EDIT_HOUR))
    {
        SetEditStr(ID_PISTS_EDIT_HOUR, str);
    }
    else if (IsEditSelected(ID_PISTS_EDIT_MINUTE))
    {
        SetEditStr(ID_PISTS_EDIT_MINUTE, str);
    }
    else if (IsEditSelected(ID_PISTS_EDIT_SECOND))
    {
        SetEditStr(ID_PISTS_EDIT_SECOND, str);
    }
    else
    {
        // do nothing
    }
}

void CSysTimeSetPage::SetEditStr(int EditId, QString str)
{
    CEdit *pEdit = NULL;
    pEdit = (CEdit *)GetDlgItem(EditId);
    if (NULL == pEdit)
    {
        return;
    }
    pEdit->SetCtrlText(str);
}

void CSysTimeSetPage::SetBtnDown(int btnId)
{
    CButton *pButton = NULL;
    int nIDArray[] =
    {
        ID_PISTS_BUTTON_NUMBER1,
        ID_PISTS_BUTTON_NUMBER2,
        ID_PISTS_BUTTON_NUMBER3,
        ID_PISTS_BUTTON_NUMBER4,
        ID_PISTS_BUTTON_NUMBER5,
        ID_PISTS_BUTTON_NUMBER6,
        ID_PISTS_BUTTON_NUMBER7,
        ID_PISTS_BUTTON_NUMBER8,
        ID_PISTS_BUTTON_NUMBER9,
        ID_PISTS_BUTTON_NUMBER0,
        ID_PISTS_BUTTON_CLEAR
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

void CSysTimeSetPage::SetBtnUp(int btnId)
{
    CButton *pButton = NULL;
    int nIDArray[] =
    {
        ID_PISTS_BUTTON_NUMBER1,
        ID_PISTS_BUTTON_NUMBER2,
        ID_PISTS_BUTTON_NUMBER3,
        ID_PISTS_BUTTON_NUMBER4,
        ID_PISTS_BUTTON_NUMBER5,
        ID_PISTS_BUTTON_NUMBER6,
        ID_PISTS_BUTTON_NUMBER7,
        ID_PISTS_BUTTON_NUMBER8,
        ID_PISTS_BUTTON_NUMBER9,
        ID_PISTS_BUTTON_NUMBER0,
        ID_PISTS_BUTTON_CLEAR
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

void CSysTimeSetPage::OnNum0Down()
{
    if(m_btnPress == false)
    {
    SetBtnDown(ID_PISTS_BUTTON_NUMBER0);
}}

void CSysTimeSetPage::OnNum1Down()
{
    if(m_btnPress == false)
    {
    SetBtnDown(ID_PISTS_BUTTON_NUMBER1);
}}

void CSysTimeSetPage::OnNum2Down()
{
    if(m_btnPress == false)
    {
    SetBtnDown(ID_PISTS_BUTTON_NUMBER2);
}
}
void CSysTimeSetPage::OnNum3Down()
{
    if(m_btnPress == false)
    {
    SetBtnDown(ID_PISTS_BUTTON_NUMBER3);
}
}

void CSysTimeSetPage::OnNum4Down()
{
    if(m_btnPress == false)
    {
    SetBtnDown(ID_PISTS_BUTTON_NUMBER4);
}
}
void CSysTimeSetPage::OnNum5Down()
{
    if(m_btnPress == false)
    {
    SetBtnDown(ID_PISTS_BUTTON_NUMBER5);
}
}

void CSysTimeSetPage::OnNum6Down()
{
    if(m_btnPress == false)
    {
    SetBtnDown(ID_PISTS_BUTTON_NUMBER6);
}
}
void CSysTimeSetPage::OnNum7Down()
{
    if(m_btnPress == false)
    {
    SetBtnDown(ID_PISTS_BUTTON_NUMBER7);
}
}
void CSysTimeSetPage::OnNum8Down()
{
    if(m_btnPress == false)
    {
    SetBtnDown(ID_PISTS_BUTTON_NUMBER8);
}
}

void CSysTimeSetPage::OnNum9Down()
{
    if(m_btnPress == false)
    {
    SetBtnDown(ID_PISTS_BUTTON_NUMBER9);
}
}
void CSysTimeSetPage::OnNum0Up()
{
    if(m_btnPress == false)
    {
    SetBtnUp(ID_PISTS_BUTTON_NUMBER0);
    AddSelectedEditBox("0");
}
}

void CSysTimeSetPage::OnNum1Up()
{
    if(m_btnPress == false)
    {
    SetBtnUp(ID_PISTS_BUTTON_NUMBER1);
   AddSelectedEditBox("1");
}
}
void CSysTimeSetPage::OnNum2Up()
{
    if(m_btnPress == false)
    {
    SetBtnUp(ID_PISTS_BUTTON_NUMBER2);
    AddSelectedEditBox("2");
}
}

void CSysTimeSetPage::OnNum3Up()
{
    if(m_btnPress == false)
    {
    SetBtnUp(ID_PISTS_BUTTON_NUMBER3);
    AddSelectedEditBox("3");
}
}
void CSysTimeSetPage::OnNum4Up()
{
    if(m_btnPress == false)
    {
    SetBtnUp(ID_PISTS_BUTTON_NUMBER4);
    AddSelectedEditBox("4");
}
}
void CSysTimeSetPage::OnNum5Up()
{
    if(m_btnPress == false)
    {
    SetBtnUp(ID_PISTS_BUTTON_NUMBER5);
    AddSelectedEditBox("5");
}
}
void CSysTimeSetPage::OnNum6Up()
{
    if(m_btnPress == false)
    {
    SetBtnUp(ID_PISTS_BUTTON_NUMBER6);
    AddSelectedEditBox("6");
}
}

void CSysTimeSetPage::OnNum7Up()
{
    if(m_btnPress == false)
    {
    SetBtnUp(ID_PISTS_BUTTON_NUMBER7);
    AddSelectedEditBox("7");
}
}

void CSysTimeSetPage::OnNum8Up()
{
    if(m_btnPress == false)
    {
    SetBtnUp(ID_PISTS_BUTTON_NUMBER8);
    AddSelectedEditBox("8");
}
}

void CSysTimeSetPage::OnNum9Up()
{
    if(m_btnPress == false)
    {
    SetBtnUp(ID_PISTS_BUTTON_NUMBER9);
    AddSelectedEditBox("9");
}
}
void CSysTimeSetPage::OnClearDown()
{
    if(m_btnPress == false)
    {
    SetBtnDown(ID_PISTS_BUTTON_CLEAR);
}
}

void CSysTimeSetPage::OnClearUp()
{
    if(m_btnPress == false)
    {
    SetBtnUp(ID_PISTS_BUTTON_CLEAR);
    SetSelectedEditBox("");
}
}
void CSysTimeSetPage::OnYearEdit()
{
    if(m_btnPress == false)
    {
    SetEditSelected(ID_PISTS_EDIT_YEAR, true);
    SetEditSelected(ID_PISTS_EDIT_MONTH, false);
    SetEditSelected(ID_PISTS_EDIT_DAY, false);
    SetEditSelected(ID_PISTS_EDIT_HOUR, false);
    SetEditSelected(ID_PISTS_EDIT_MINUTE, false);
    SetEditSelected(ID_PISTS_EDIT_SECOND, false);

    SetLabelSelected(ID_PISTS_LABEL_YEAR,true);
    SetLabelSelected(ID_PISTS_LABEL_MONTH,false);
    SetLabelSelected(ID_PISTS_LABEL_DAY,false);
    SetLabelSelected(ID_PISTS_LABEL_HOUR,false);
    SetLabelSelected(ID_PISTS_LABEL_MINUTE,false);
    SetLabelSelected(ID_PISTS_LABEL_SECOND,false);

}

}
void CSysTimeSetPage::OnMonthEdit()
{
    if(m_btnPress == false)
    {
        SetEditSelected(ID_PISTS_EDIT_YEAR, false);
        SetEditSelected(ID_PISTS_EDIT_MONTH, true);
        SetEditSelected(ID_PISTS_EDIT_DAY, false);
        SetEditSelected(ID_PISTS_EDIT_HOUR, false);
        SetEditSelected(ID_PISTS_EDIT_MINUTE, false);
        SetEditSelected(ID_PISTS_EDIT_SECOND, false);

        SetLabelSelected(ID_PISTS_LABEL_YEAR,false);
        SetLabelSelected(ID_PISTS_LABEL_MONTH,true);
        SetLabelSelected(ID_PISTS_LABEL_DAY,false);
        SetLabelSelected(ID_PISTS_LABEL_HOUR,false);
        SetLabelSelected(ID_PISTS_LABEL_MINUTE,false);
        SetLabelSelected(ID_PISTS_LABEL_SECOND,false);

}
}

void CSysTimeSetPage::OnDayEdit()
{
    if(m_btnPress == false)
    {
        SetEditSelected(ID_PISTS_EDIT_YEAR, false);
        SetEditSelected(ID_PISTS_EDIT_MONTH, false);
        SetEditSelected(ID_PISTS_EDIT_DAY, true);
        SetEditSelected(ID_PISTS_EDIT_HOUR, false);
        SetEditSelected(ID_PISTS_EDIT_MINUTE, false);
        SetEditSelected(ID_PISTS_EDIT_SECOND, false);

        SetLabelSelected(ID_PISTS_LABEL_YEAR,false);
        SetLabelSelected(ID_PISTS_LABEL_MONTH,false);
        SetLabelSelected(ID_PISTS_LABEL_DAY,true);
        SetLabelSelected(ID_PISTS_LABEL_HOUR,false);
        SetLabelSelected(ID_PISTS_LABEL_MINUTE,false);
        SetLabelSelected(ID_PISTS_LABEL_SECOND,false);

}
}

void CSysTimeSetPage::OnHourEdit()
{
    if(m_btnPress == false)
    {
    SetEditSelected(ID_PISTS_EDIT_YEAR, false);
    SetEditSelected(ID_PISTS_EDIT_MONTH, false);
    SetEditSelected(ID_PISTS_EDIT_DAY, false);
    SetEditSelected(ID_PISTS_EDIT_HOUR, true);
    SetEditSelected(ID_PISTS_EDIT_MINUTE, false);
    SetEditSelected(ID_PISTS_EDIT_SECOND, false);

    SetLabelSelected(ID_PISTS_LABEL_YEAR,false);
    SetLabelSelected(ID_PISTS_LABEL_MONTH,false);
    SetLabelSelected(ID_PISTS_LABEL_DAY,false);
    SetLabelSelected(ID_PISTS_LABEL_HOUR,true);
    SetLabelSelected(ID_PISTS_LABEL_MINUTE,false);
    SetLabelSelected(ID_PISTS_LABEL_SECOND,false);

}

}
void CSysTimeSetPage::OnMinuteEdit()
{
    if(m_btnPress == false)
    {
        SetEditSelected(ID_PISTS_EDIT_YEAR, false);
        SetEditSelected(ID_PISTS_EDIT_MONTH, false);
        SetEditSelected(ID_PISTS_EDIT_DAY, false);
        SetEditSelected(ID_PISTS_EDIT_HOUR, false);
        SetEditSelected(ID_PISTS_EDIT_MINUTE, true);
        SetEditSelected(ID_PISTS_EDIT_SECOND, false);

        SetLabelSelected(ID_PISTS_LABEL_YEAR,false);
        SetLabelSelected(ID_PISTS_LABEL_MONTH,false);
        SetLabelSelected(ID_PISTS_LABEL_DAY,false);
        SetLabelSelected(ID_PISTS_LABEL_HOUR,false);
        SetLabelSelected(ID_PISTS_LABEL_MINUTE,true);
        SetLabelSelected(ID_PISTS_LABEL_SECOND,false);

}
}

void CSysTimeSetPage::OnSecondEdit()
{
    if(m_btnPress == false)
    {
        SetEditSelected(ID_PISTS_EDIT_YEAR, false);
        SetEditSelected(ID_PISTS_EDIT_MONTH, false);
        SetEditSelected(ID_PISTS_EDIT_DAY, false);
        SetEditSelected(ID_PISTS_EDIT_HOUR, false);
        SetEditSelected(ID_PISTS_EDIT_MINUTE, false);
        SetEditSelected(ID_PISTS_EDIT_SECOND, true);

        SetLabelSelected(ID_PISTS_LABEL_YEAR,false);
        SetLabelSelected(ID_PISTS_LABEL_MONTH,false);
        SetLabelSelected(ID_PISTS_LABEL_DAY,false);
        SetLabelSelected(ID_PISTS_LABEL_HOUR,false);
        SetLabelSelected(ID_PISTS_LABEL_MINUTE,false);
        SetLabelSelected(ID_PISTS_LABEL_SECOND,true);

}
}



void CSysTimeSetPage::ShowWarningDialog()
{
    CWarningDialog dlg;
    dlg.SetWarningStr(QSTR("时间设定错误！"));
    dlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
    dlg.exec();
}

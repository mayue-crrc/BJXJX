#include "cdoorpage.h"

ROMDATA g_PicRom_Door[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
    //{"0000",               D_DEFAULT_FONT,      QRect(440, 15, 60, 15),                   Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICDOOR_LABEL_CARNO },

    {QSTR("门参数设定"),       D_COMMON_TITLE_FONT,          QRect(0, 0, 640, 35),       Qt::black,                      Qt::yellow,                CONTROL_LABEL,        ID_IGNORE           },


//    {"bjcar.png",   D_DEFAULT_FONT,      QRect(140, 17+40,480, 35),                   Qt::yellow,                  Qt::black,                  CONTROL_IMAGE,            ID_IGNORE                   },
//    {"down.png",           D_DEFAULT_FONT,      QRect( 30, 17+40, 40, 30),                   Qt::yellow,                  Qt::black,                  CONTROL_BMPBUTTON,        ID_PICDOOR_PAGEDOWN},
//    {"upgray.png",         D_DEFAULT_FONT,      QRect(80, 17+40, 40, 30),                   Qt::yellow,                  Qt::black,                  CONTROL_BMPBUTTON,        ID_PICDOOR_PAGEUP},

    //H line
    {"",                   D_DEFAULT_FONT,      QRect(30,  55+40, 510, 1),                  Qt::cyan,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect(30,  75+40,   510, 1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect(30,  115+40,   510, 1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect(30,  155+40,   510, 1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect(30,  195+40,   510, 1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect(30,  235+40,   510, 1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect(30,  275+40,   510, 1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect(30,  315+40,   510, 1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect(30,  355+40,   510, 1),                  Qt::cyan,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },


    //    {"",                   D_DEFAULT_FONT,      QRect(30,  435-15, 530, 1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },

    // V line
    {" ",                   D_DEFAULT_FONT,     QRect(30, 55+40,   1,300),                     Qt::cyan,                    Qt::black,                    CONTROL_LINE,                    ID_IGNORE},
    {" ",                   D_DEFAULT_FONT,     QRect(190, 55+40,   1,300),                     Qt::cyan,                    Qt::black,                    CONTROL_LINE,                    ID_IGNORE},
    {" ",                   D_DEFAULT_FONT,     QRect(300, 55+40,   1,300),                     Qt::cyan,                    Qt::black,                    CONTROL_LINE,                    ID_IGNORE},
    {" ",                   D_DEFAULT_FONT,     QRect(370, 55+40,   1,300),                     Qt::cyan,                    Qt::black,                    CONTROL_LINE,                    ID_IGNORE},
    {" ",                   D_DEFAULT_FONT,     QRect(440, 55+40,   1,300),                     Qt::cyan,                    Qt::black,                    CONTROL_LINE,                    ID_IGNORE},
    {" ",                   D_DEFAULT_FONT,     QRect(540, 55+40,   1,300),                     Qt::cyan,                    Qt::black,                    CONTROL_LINE,                    ID_IGNORE},

    {QSTR("显示项目"),               D_DEFAULT_FONT,     QRect(31,96,   148,18),                    Qt::yellow,                    Qt::black,                    CONTROL_LABEL,                    ID_IGNORE},
    {QSTR("设定值"),                 D_DEFAULT_FONT,     QRect(191,96,    108,18),                    Qt::yellow,                    Qt::black,                    CONTROL_LABEL,                    ID_IGNORE},
    {"+",                           D_DEFAULT_FONT,     QRect(301,96,   68,18),                    Qt::yellow,                    Qt::black,                    CONTROL_LABEL,                    ID_IGNORE},
    {"-",                           D_DEFAULT_FONT,     QRect(371,96,   68,18),                    Qt::yellow,                    Qt::black,                    CONTROL_LABEL,                    ID_IGNORE},
    {QSTR("确认"),                  D_DEFAULT_FONT,     QRect(441,96,   98,18),                    Qt::yellow,                    Qt::black,                    CONTROL_LABEL,                    ID_IGNORE},

    {QSTR("开门时间"),               D_FONT(6),           QRect(35, 76+40,   150,  37),                  Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICDOOR_LABEL_2_1                },
    {QSTR("关门时间"),               D_FONT(6),           QRect(35, 116+40,   150,  37),                  Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICDOOR_LABEL_3_1                 },
    {QSTR("关门时障碍探测数"),               D_FONT(6),           QRect(35, 156+40,   150,  37),                  Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICDOOR_LABEL_4_1                 },
    {QSTR("开门时障碍探测数"),               D_FONT(6),           QRect(35, 196+40,   150,  37),                  Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICDOOR_LABEL_5_1                 },
    {QSTR("关门力"),               D_FONT(6),           QRect(35, 236+40,   150,  37),                  Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICDOOR_LABEL_6_1                 },
    {QSTR("关门延时"),               D_FONT(6),           QRect(35, 276+40,   150,  37),                  Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICDOOR_LABEL_7_1                 },
    {QSTR("开门延时"),               D_FONT(6),           QRect(35, 316+40,   150,  37),                  Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICDOOR_LABEL_8_1                 },


{"",                   D_DEFAULT_FONT,           QRect(195, 120,   100,  30),                  Qt::yellow,                  Qt::black,                    CONTROL_EDIT,            ID_PICDOOR_LABEL_2_1_1    },
{"",                   D_DEFAULT_FONT,           QRect(195, 160,   100,  30),                  Qt::yellow,                  Qt::black,                    CONTROL_EDIT,            ID_PICDOOR_LABEL_3_1_1    },
{"",                   D_DEFAULT_FONT,           QRect(195, 200,   100,  30),                  Qt::yellow,                  Qt::black,                    CONTROL_EDIT,            ID_PICDOOR_LABEL_4_1_1    },
{"",                   D_DEFAULT_FONT,           QRect(195, 240,   100,  30),                  Qt::yellow,                  Qt::black,                    CONTROL_EDIT,            ID_PICDOOR_LABEL_5_1_1    },
{"",                   D_DEFAULT_FONT,           QRect(195, 280,   100,  30),                  Qt::yellow,                  Qt::black,                    CONTROL_EDIT,            ID_PICDOOR_LABEL_6_1_1     },
{"",                   D_DEFAULT_FONT,           QRect(195, 320,   100,  30),                  Qt::yellow,                  Qt::black,                    CONTROL_EDIT,            ID_PICDOOR_LABEL_7_1_1     },
{"",                   D_DEFAULT_FONT,           QRect(195, 360,   100,  30),                  Qt::yellow,                  Qt::black,                    CONTROL_EDIT,            ID_PICDOOR_LABEL_8_1_1     },

    {"+",                   D_DEFAULT_FONT,           QRect(310, 76+44,   50,  30),                  Qt::black,                  Qt::black,                    CONTROL_BUTTON,            ID_PICDOOR_LABEL_2_2_1    },
    {"+",                   D_DEFAULT_FONT,           QRect(310, 116+44,   50,  30),                  Qt::black,                  Qt::black,                    CONTROL_BUTTON,            ID_PICDOOR_LABEL_3_2_1    },
    {"+",                   D_DEFAULT_FONT,           QRect(310, 156+44,   50,  30),                  Qt::black,                  Qt::black,                    CONTROL_BUTTON,            ID_PICDOOR_LABEL_4_2_1    },
    {"+",                   D_DEFAULT_FONT,           QRect(310, 196+44,   50,  30),                  Qt::black,                  Qt::black,                    CONTROL_BUTTON,            ID_PICDOOR_LABEL_5_2_1    },
    {"+",                   D_DEFAULT_FONT,           QRect(310, 236+44,   50,  30),                  Qt::black,                  Qt::black,                    CONTROL_BUTTON,            ID_PICDOOR_LABEL_6_2_1     },
    {"+",                   D_DEFAULT_FONT,           QRect(310, 276+44,   50,  30),                  Qt::black,                  Qt::black,                    CONTROL_BUTTON,            ID_PICDOOR_LABEL_7_2_1     },
    {"+",                   D_DEFAULT_FONT,           QRect(310, 316+44,   50,  30),                  Qt::black,                  Qt::black,                    CONTROL_BUTTON,            ID_PICDOOR_LABEL_8_2_1     },



{"-",                   D_DEFAULT_FONT,           QRect(380, 76+44,   50,  30),                  Qt::black,                  Qt::black,                    CONTROL_BUTTON,            ID_PICDOOR_LABEL_2_3_1    },
{"-",                   D_DEFAULT_FONT,           QRect(380, 116+44,   50,  30),                  Qt::black,                  Qt::black,                    CONTROL_BUTTON,            ID_PICDOOR_LABEL_3_3_1    },
{"-",                   D_DEFAULT_FONT,           QRect(380, 156+44,   50,  30),                  Qt::black,                  Qt::black,                    CONTROL_BUTTON,            ID_PICDOOR_LABEL_4_3_1    },
{"-",                   D_DEFAULT_FONT,           QRect(380, 196+44,   50,  30),                  Qt::black,                  Qt::black,                    CONTROL_BUTTON,            ID_PICDOOR_LABEL_5_3_1    },
{"-",                   D_DEFAULT_FONT,           QRect(380, 236+44,   50,  30),                  Qt::black,                  Qt::black,                    CONTROL_BUTTON,            ID_PICDOOR_LABEL_6_3_1     },
{"-",                   D_DEFAULT_FONT,           QRect(380, 276+44,   50,  30),                  Qt::black,                  Qt::black,                    CONTROL_BUTTON,            ID_PICDOOR_LABEL_7_3_1     },
{"-",                   D_DEFAULT_FONT,           QRect(380, 316+44,   50,  30),                  Qt::black,                  Qt::black,                    CONTROL_BUTTON,            ID_PICDOOR_LABEL_8_3_1     },

{QSTR("确 认"),                   D_DEFAULT_FONT,           QRect(450, 76+44,   80,  30),                  Qt::black,                  Qt::black,                    CONTROL_BUTTON,            ID_PICDOOR_LABEL_2_5_1    },
{QSTR("确 认"),                   D_DEFAULT_FONT,           QRect(450, 116+44,   80,  30),                  Qt::black,                  Qt::black,                    CONTROL_BUTTON,            ID_PICDOOR_LABEL_3_5_1    },
{QSTR("确 认"),                   D_DEFAULT_FONT,           QRect(450, 156+44,   80,  30),                  Qt::black,                  Qt::black,                    CONTROL_BUTTON,            ID_PICDOOR_LABEL_4_5_1    },
{QSTR("确 认"),                   D_DEFAULT_FONT,           QRect(450, 196+44,   80,  30),                  Qt::black,                  Qt::black,                    CONTROL_BUTTON,            ID_PICDOOR_LABEL_5_5_1    },
{QSTR("确 认"),                   D_DEFAULT_FONT,           QRect(450, 236+44,   80,  30),                  Qt::black,                  Qt::black,                    CONTROL_BUTTON,            ID_PICDOOR_LABEL_6_5_1     },
{QSTR("确 认"),                   D_DEFAULT_FONT,           QRect(450, 276+44,   80,  30),                  Qt::black,                  Qt::black,                    CONTROL_BUTTON,            ID_PICDOOR_LABEL_7_5_1     },
{QSTR("确 认"),                   D_DEFAULT_FONT,           QRect(450, 316+44,   80,  30),                  Qt::black,                  Qt::black,                    CONTROL_BUTTON,            ID_PICDOOR_LABEL_8_5_1     },

    {"",                   D_DEFAULT_FONT,           QRect(550, 120,  60,  30),                  Qt::yellow,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_2_4   },
    {"",                   D_DEFAULT_FONT,           QRect(550, 160,  60,  30),                  Qt::yellow,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_3_4   },
    {"",                   D_DEFAULT_FONT,           QRect(550, 200,  60,  30),                  Qt::yellow,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_4_4   },
    {"",                   D_DEFAULT_FONT,           QRect(550, 240,  60,  30),                  Qt::yellow,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_5_4   },
    {"",                   D_DEFAULT_FONT,           QRect(550, 280,  60,  30),                  Qt::yellow,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_6_4    },
    {"",                   D_DEFAULT_FONT,           QRect(550, 320,  60,  30),                  Qt::yellow,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_7_4    },
    {"",                   D_DEFAULT_FONT,           QRect(550, 360,  60,  30),                  Qt::yellow,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_8_4    },



{QSTR("退出"),          D_FONT(8),            QRect(578, 445, 53, 30),    Qt::black,                      Qt::yellow,                     CONTROL_BUTTON,         ID_PICDOOR_LABEL_QUIT            },


  //D_LAYER2_NAVIGATION_BAR_MAINTAIN
};
int g_DoorRomLen = sizeof(g_PicRom_Door)/sizeof(ROMDATA);

BEGIN_MESSAGE_MAP(CDoorPage,CPage)
        ON_UPDATE_PAGE()
        ON_LBUTTONDOWN(ID_PICDOOR_LABEL_QUIT, OnCommonQuitButtonDown)

        ON_LBUTTONDOWN(ID_PICDOOR_LABEL_2_2_1 , OnAddButtonDown2)
        ON_LBUTTONDOWN(ID_PICDOOR_LABEL_3_2_1 , OnAddButtonDown3)
        ON_LBUTTONDOWN(ID_PICDOOR_LABEL_4_2_1 , OnAddButtonDown4)
        ON_LBUTTONDOWN(ID_PICDOOR_LABEL_5_2_1 , OnAddButtonDown5)
        ON_LBUTTONDOWN(ID_PICDOOR_LABEL_6_2_1 , OnAddButtonDown6)
        ON_LBUTTONDOWN(ID_PICDOOR_LABEL_7_2_1 , OnAddButtonDown7)
        ON_LBUTTONDOWN(ID_PICDOOR_LABEL_8_2_1 , OnAddButtonDown8)
        ON_LBUTTONUP(ID_PICDOOR_LABEL_2_2_1 , OnAddButtonUp2)
        ON_LBUTTONUP(ID_PICDOOR_LABEL_3_2_1 , OnAddButtonUp3)
        ON_LBUTTONUP(ID_PICDOOR_LABEL_4_2_1 , OnAddButtonUp4)
        ON_LBUTTONUP(ID_PICDOOR_LABEL_5_2_1 , OnAddButtonUp5)
        ON_LBUTTONUP(ID_PICDOOR_LABEL_6_2_1 , OnAddButtonUp6)
        ON_LBUTTONUP(ID_PICDOOR_LABEL_7_2_1 , OnAddButtonUp7)
        ON_LBUTTONUP(ID_PICDOOR_LABEL_8_2_1 , OnAddButtonUp8)

        ON_LBUTTONDOWN(ID_PICDOOR_LABEL_2_3_1 , OnMinusButtonDown2)
        ON_LBUTTONDOWN(ID_PICDOOR_LABEL_3_3_1 , OnMinusButtonDown3)
        ON_LBUTTONDOWN(ID_PICDOOR_LABEL_4_3_1 , OnMinusButtonDown4)
        ON_LBUTTONDOWN(ID_PICDOOR_LABEL_5_3_1 , OnMinusButtonDown5)
        ON_LBUTTONDOWN(ID_PICDOOR_LABEL_6_3_1 , OnMinusButtonDown6)
        ON_LBUTTONDOWN(ID_PICDOOR_LABEL_7_3_1 , OnMinusButtonDown7)
        ON_LBUTTONDOWN(ID_PICDOOR_LABEL_8_3_1 , OnMinusButtonDown8)
        ON_LBUTTONUP(ID_PICDOOR_LABEL_2_3_1 , OnMinusButtonUp2)
        ON_LBUTTONUP(ID_PICDOOR_LABEL_3_3_1 , OnMinusButtonUp3)
        ON_LBUTTONUP(ID_PICDOOR_LABEL_4_3_1 , OnMinusButtonUp4)
        ON_LBUTTONUP(ID_PICDOOR_LABEL_5_3_1 , OnMinusButtonUp5)
        ON_LBUTTONUP(ID_PICDOOR_LABEL_6_3_1 , OnMinusButtonUp6)
        ON_LBUTTONUP(ID_PICDOOR_LABEL_7_3_1 , OnMinusButtonUp7)
        ON_LBUTTONUP(ID_PICDOOR_LABEL_8_3_1 , OnMinusButtonUp8)

        ON_LBUTTONDOWN(ID_PICDOOR_LABEL_2_5_1 , OnConfirmButtonDown2)
        ON_LBUTTONDOWN(ID_PICDOOR_LABEL_3_5_1 , OnConfirmButtonDown3)
        ON_LBUTTONDOWN(ID_PICDOOR_LABEL_4_5_1 , OnConfirmButtonDown4)
        ON_LBUTTONDOWN(ID_PICDOOR_LABEL_5_5_1 , OnConfirmButtonDown5)
        ON_LBUTTONDOWN(ID_PICDOOR_LABEL_6_5_1 , OnConfirmButtonDown6)
        ON_LBUTTONDOWN(ID_PICDOOR_LABEL_7_5_1 , OnConfirmButtonDown7)
        ON_LBUTTONDOWN(ID_PICDOOR_LABEL_8_5_1 , OnConfirmButtonDown8)
        ON_LBUTTONUP(ID_PICDOOR_LABEL_2_5_1 , OnConfirmButtonUp2)
        ON_LBUTTONUP(ID_PICDOOR_LABEL_3_5_1 , OnConfirmButtonUp3)
        ON_LBUTTONUP(ID_PICDOOR_LABEL_4_5_1 , OnConfirmButtonUp4)
        ON_LBUTTONUP(ID_PICDOOR_LABEL_5_5_1 , OnConfirmButtonUp5)
        ON_LBUTTONUP(ID_PICDOOR_LABEL_6_5_1 , OnConfirmButtonUp6)
        ON_LBUTTONUP(ID_PICDOOR_LABEL_7_5_1 , OnConfirmButtonUp7)
        ON_LBUTTONUP(ID_PICDOOR_LABEL_8_5_1 , OnConfirmButtonUp8)


//        ON_LBUTTONDOWN(ID_PICDOOR_PAGEDOWN, OnDownButtonDown)
//        ON_LBUTTONUP(ID_PICDOOR_PAGEDOWN, OnDownButtonUp)
//        ON_LBUTTONDOWN(ID_PICDOOR_PAGEUP, OnUpButtonDown)
//        ON_LBUTTONUP(ID_PICDOOR_PAGEUP, OnUpButtonUp)
END_MESSAGE_MAP()

CDoorPage::CDoorPage()
{
//    pageNo = DOOR_MIN_PAGE;
//    formerPageNo = 0;
}

void CDoorPage::OnUpdatePage()
{
     GetDlgItem(ID_PICDOOR_LABEL_2_1_1 )->SetCtrlText(QString::number(set_Door_2));
     GetDlgItem(ID_PICDOOR_LABEL_3_1_1 )->SetCtrlText(QString::number(set_Door_3));
     GetDlgItem(ID_PICDOOR_LABEL_4_1_1 )->SetCtrlText(QString::number(set_Door_4));
     GetDlgItem(ID_PICDOOR_LABEL_5_1_1 )->SetCtrlText(QString::number(set_Door_5));
     GetDlgItem(ID_PICDOOR_LABEL_6_1_1 )->SetCtrlText(QString::number(set_Door_6));
     GetDlgItem(ID_PICDOOR_LABEL_7_1_1 )->SetCtrlText(QString::number(set_Door_7));
     GetDlgItem(ID_PICDOOR_LABEL_8_1_1 )->SetCtrlText(QString::number(set_Door_8));

//     GetDlgItem(ID_PICDOOR_LABEL_2_4 )->SetCtrlText(QString::number(MVBsendData[6]));
//     GetDlgItem(ID_PICDOOR_LABEL_3_4 )->SetCtrlText(QString::number(MVBsendData[7]));
//     GetDlgItem(ID_PICDOOR_LABEL_4_4 )->SetCtrlText(QString::number(MVBsendData[8]));
//     GetDlgItem(ID_PICDOOR_LABEL_5_4 )->SetCtrlText(QString::number(MVBsendData[9]));
//     GetDlgItem(ID_PICDOOR_LABEL_6_4 )->SetCtrlText(QString::number(MVBsendData[10]));
//     GetDlgItem(ID_PICDOOR_LABEL_7_4 )->SetCtrlText(QString::number(MVBsendData[11]));
//     GetDlgItem(ID_PICDOOR_LABEL_8_4 )->SetCtrlText(QString::number(MVBsendData[12]));



     if (m_bBtnPress)
     {

         static int times = 0;
         times++;
         if (times%times_n == 0)
         {
              DOOR_valid_timer--;
             if (DOOR_valid_timer==0)
             {
                 //((CButton*)GetDlgItem(m_PressBtnID))->ChangeButtonState(LBUTTON_UP);
                 m_PressBtnID = 0;
                 m_bBtnPress = false;

                 IDUCT_OpenTime_U8 = 0;
                 IDUCT_CloseTime_U8 = 0;
                 IDUCT_ObsDetNumClose_U8 = 0;
                 IDUCT_ObsDetNumOpen_U8 = 0;
                 IDUCT_CloseForce_U8 = 0;
                 IDUCT_DTBDC_U8 = 0;
                 IDUCT_DTBDO_U8 = 0;

                 IDUCT_DoorUpdate_B1 = false;
             }

         }

     }

     int nIDArray[] =
     {
     ID_PICDOOR_LABEL_2_5_1 ,
     ID_PICDOOR_LABEL_3_5_1 ,
     ID_PICDOOR_LABEL_4_5_1 ,
     ID_PICDOOR_LABEL_5_5_1 ,
     ID_PICDOOR_LABEL_6_5_1 ,
     ID_PICDOOR_LABEL_7_5_1 ,
     ID_PICDOOR_LABEL_8_5_1 ,
    \
     };
     int IDArraylen = sizeof(nIDArray)/sizeof(int);

     //CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
     CButton* pButton = NULL;

     for(int i = 0; i < IDArraylen; i++)
     {
         pButton = (CButton *)GetDlgItem(nIDArray[i]);
         if(nIDArray[i] == m_PressBtnID)
         {
             pButton->ChangeButtonState(LBUTTON_DOWN);
         }
         else
         {
             pButton->ChangeButtonState(LBUTTON_UP);
         }
     }
}
void CDoorPage::OnCommonQuitButtonDown()
{
    ChangePage(PAGE_ROM_INDEX_PARAMETERSET);
}


void CDoorPage::OnAddButtonDown2()
{
    if(m_bBtnPress ==false)
    {
        ((CButton*)GetDlgItem(ID_PICDOOR_LABEL_2_2_1 ))->ChangeButtonState(LBUTTON_DOWN);
        if(set_Door_2<60)
        {
            set_Door_2=set_Door_2+5;
        }
    }

}

void CDoorPage::OnAddButtonDown3()
{
    if(m_bBtnPress ==false)
    {
        ((CButton*)GetDlgItem(ID_PICDOOR_LABEL_3_2_1 ))->ChangeButtonState(LBUTTON_DOWN);
        if(set_Door_3<60)
        {
            set_Door_3=set_Door_3+5;
        }
    }
}

void CDoorPage::OnAddButtonDown4()
{
    if(m_bBtnPress ==false)
    {
        ((CButton*)GetDlgItem(ID_PICDOOR_LABEL_4_2_1 ))->ChangeButtonState(LBUTTON_DOWN);
        if(set_Door_4<3)
        {
            set_Door_4++;
        }
    }
}
void CDoorPage::OnAddButtonDown5()
{
    if(m_bBtnPress ==false)
    {
        ((CButton*)GetDlgItem(ID_PICDOOR_LABEL_5_2_1 ))->ChangeButtonState(LBUTTON_DOWN);
        if(set_Door_5<3)
        {
            set_Door_5++;
        }
    }
}
void CDoorPage::OnAddButtonDown6()
{
    if(m_bBtnPress ==false)
    {
        ((CButton*)GetDlgItem(ID_PICDOOR_LABEL_6_2_1 ))->ChangeButtonState(LBUTTON_DOWN);
        if(set_Door_6<250)
        {
            set_Door_6=set_Door_6+50;
        }
    }
}
void CDoorPage::OnAddButtonDown7()
{
    if(m_bBtnPress ==false)
    {
        ((CButton*)GetDlgItem(ID_PICDOOR_LABEL_7_2_1 ))->ChangeButtonState(LBUTTON_DOWN);
        if(set_Door_7<30)
        {
            set_Door_7=set_Door_7+5;
        }
    }
}
void CDoorPage::OnAddButtonDown8()
{
    if(m_bBtnPress ==false)
    {
        ((CButton*)GetDlgItem(ID_PICDOOR_LABEL_8_2_1 ))->ChangeButtonState(LBUTTON_DOWN);
        if(set_Door_8<30)
        {
            set_Door_8=set_Door_8+5;
        }
    }
}
void CDoorPage::OnAddButtonUp2()
{

}

void CDoorPage::OnAddButtonUp3()
{

}

void CDoorPage::OnAddButtonUp4()
{

}

void CDoorPage::OnAddButtonUp5()
{

}
void CDoorPage::OnAddButtonUp6()
{

}

void CDoorPage::OnAddButtonUp7()
{

}

void CDoorPage::OnAddButtonUp8()
{

}

void CDoorPage::OnMinusButtonDown2()
{
    if(m_bBtnPress == false)
    {
        ((CButton*)GetDlgItem(ID_PICDOOR_LABEL_2_3_1))->ChangeButtonState(LBUTTON_DOWN);
        if(set_Door_2>30)
        {
            set_Door_2=set_Door_2-5;
        }
    }
}

void CDoorPage::OnMinusButtonDown3()
{
    if(m_bBtnPress == false)
    {
        ((CButton*)GetDlgItem(ID_PICDOOR_LABEL_3_3_1))->ChangeButtonState(LBUTTON_DOWN);
        if(set_Door_3>30)
        {
            set_Door_3=set_Door_3-5;
        }
    }
}
void CDoorPage::OnMinusButtonDown4()
{
    if(m_bBtnPress == false)
    {
        ((CButton*)GetDlgItem(ID_PICDOOR_LABEL_4_3_1))->ChangeButtonState(LBUTTON_DOWN);
        if(set_Door_4>1)
        {
            set_Door_4--;
        }
    }
}
void CDoorPage::OnMinusButtonDown5()
{
    if(m_bBtnPress == false)
    {
        ((CButton*)GetDlgItem(ID_PICDOOR_LABEL_5_3_1))->ChangeButtonState(LBUTTON_DOWN);
        if(set_Door_5>1)
        {
            set_Door_5--;
        }
    }
}
void CDoorPage::OnMinusButtonDown6()
{
    if(m_bBtnPress == false)
    {
        ((CButton*)GetDlgItem(ID_PICDOOR_LABEL_6_3_1))->ChangeButtonState(LBUTTON_DOWN);
        if(set_Door_6>150)
        {
            set_Door_6=set_Door_6-50;
        }
    }
}
void CDoorPage::OnMinusButtonDown7()
{
    if(m_bBtnPress == false)
    {
        ((CButton*)GetDlgItem(ID_PICDOOR_LABEL_7_3_1))->ChangeButtonState(LBUTTON_DOWN);
        if(set_Door_7>0)
        {
            set_Door_7=set_Door_7-5;
        }
    }
}
void CDoorPage::OnMinusButtonDown8()
{
    if(m_bBtnPress == false)
    {
        ((CButton*)GetDlgItem(ID_PICDOOR_LABEL_8_3_1))->ChangeButtonState(LBUTTON_DOWN);
        if(set_Door_8>0)
        {
            set_Door_8=set_Door_8-5;
        }
    }
}
void CDoorPage::OnMinusButtonUp2()
{

}

void CDoorPage::OnMinusButtonUp3()
{

}

void CDoorPage::OnMinusButtonUp4()
{

}

void CDoorPage::OnMinusButtonUp5()
{

}

void CDoorPage::OnMinusButtonUp6()
{

}

void CDoorPage::OnMinusButtonUp7()
{

}

void CDoorPage::OnMinusButtonUp8()
{

}

void CDoorPage::OnConfirmButtonDown2()
{
    if(m_bBtnPress == false)
    {
    m_bBtnPress = true;
    m_PressBtnID = ID_PICDOOR_LABEL_2_5_1;
    DOOR_valid_timer = 3 ;
    IDUCT_DoorUpdate_B1  = true;
    IDUCT_OpenTime_U8 = set_Door_2;
    }
}

void CDoorPage::OnConfirmButtonDown3()
{
    if(m_bBtnPress == false)
    {
    m_bBtnPress = true;
    m_PressBtnID = ID_PICDOOR_LABEL_3_5_1;
    DOOR_valid_timer = 3 ;
    IDUCT_DoorUpdate_B1  = true;
    IDUCT_CloseTime_U8 = set_Door_3;
    }
}
void CDoorPage::OnConfirmButtonDown4()
{
    if(m_bBtnPress == false)
    {
    m_bBtnPress = true;
    m_PressBtnID = ID_PICDOOR_LABEL_4_5_1;
    DOOR_valid_timer = 3 ;
    IDUCT_DoorUpdate_B1  = true;
    IDUCT_ObsDetNumClose_U8 = set_Door_4;
    }
}
void CDoorPage::OnConfirmButtonDown5()
{
    if(m_bBtnPress == false)
    {
    m_bBtnPress = true;
    m_PressBtnID = ID_PICDOOR_LABEL_5_5_1;
    DOOR_valid_timer = 3 ;
    IDUCT_DoorUpdate_B1  = true;
    IDUCT_ObsDetNumOpen_U8 = set_Door_5;
    }
}
void CDoorPage::OnConfirmButtonDown6()
{
    if(m_bBtnPress == false)
    {
    m_bBtnPress = true;
    m_PressBtnID = ID_PICDOOR_LABEL_6_5_1;
    DOOR_valid_timer = 3 ;
    IDUCT_DoorUpdate_B1  = true;
    IDUCT_CloseForce_U8 = set_Door_6;
    }
}
void CDoorPage::OnConfirmButtonDown7()
{
    if(m_bBtnPress == false)
    {
    m_bBtnPress = true;
    m_PressBtnID = ID_PICDOOR_LABEL_7_5_1;
    DOOR_valid_timer = 3 ;
    IDUCT_DoorUpdate_B1  = true;
    IDUCT_DTBDC_U8  = set_Door_7;
    }
}
void CDoorPage::OnConfirmButtonDown8()
{
    if(m_bBtnPress == false)
    {
    m_bBtnPress = true;
    m_PressBtnID = ID_PICDOOR_LABEL_8_5_1;
    DOOR_valid_timer = 3 ;
    IDUCT_DoorUpdate_B1  = true;
    IDUCT_DTBDO_U8  = set_Door_8;
    }
}
void CDoorPage::OnConfirmButtonUp2()
{

}

void CDoorPage::OnConfirmButtonUp3()
{

}

void CDoorPage::OnConfirmButtonUp4()
{

}

void CDoorPage::OnConfirmButtonUp5()
{

}

void CDoorPage::OnConfirmButtonUp6()
{

}

void CDoorPage::OnConfirmButtonUp7()
{

}

void CDoorPage::OnConfirmButtonUp8()
{

}

void CDoorPage::OnInitPage()
{


    ((CButton*)GetDlgItem(ID_PICDOOR_LABEL_2_5_1))->m_bAutoUpState = false;
    ((CButton*)GetDlgItem(ID_PICDOOR_LABEL_3_5_1))->m_bAutoUpState = false;
    ((CButton*)GetDlgItem(ID_PICDOOR_LABEL_4_5_1))->m_bAutoUpState = false;
    ((CButton*)GetDlgItem(ID_PICDOOR_LABEL_5_5_1))->m_bAutoUpState = false;
    ((CButton*)GetDlgItem(ID_PICDOOR_LABEL_6_5_1))->m_bAutoUpState = false;
    ((CButton*)GetDlgItem(ID_PICDOOR_LABEL_7_5_1))->m_bAutoUpState = false;
    ((CButton*)GetDlgItem(ID_PICDOOR_LABEL_8_5_1))->m_bAutoUpState = false;

    ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_2_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_3_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_4_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_5_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_6_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_7_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_8_1))->SetAlignment(Qt::AlignLeft);
    set_Door_2 = 40;
    set_Door_3 = 40;
    set_Door_4 = 3;
    set_Door_5 = 3;
    set_Door_6 = 150;
    set_Door_7 = 10;
    set_Door_8 = 0;
    m_bBtnPress = false;
    m_PressBtnID = 0;

}



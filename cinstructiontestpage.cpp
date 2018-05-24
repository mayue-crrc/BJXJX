#include "cinstructiontestpage.h"
#include "cconfirmdialog.h"

ROMDATA g_PicRom_InstructionTest[] =
{





    {QSTR("加速度测试"),   D_FONT(10),         QRect( 1,  1, 660, 30),       Qt::black,                   Qt::yellow,                CONTROL_LABEL,        ID_IGNORE  },


    {"",                   D_DEFAULT_FONT,      QRect( 125,50,500,  2),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect( 125,90,500,  2),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect( 125,145,500,  2),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect( 125,200,500,  2),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect( 125,255,500,  2),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect( 125,310,500,  2),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect( 125,365,500,  2),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect( 125,50,2,  315),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect( 225,50,2,  315),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect( 325,50,2,  315),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect( 425,50,2,  315),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect( 525,50,2,  315),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect( 625,50,2,  315),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },

    {QSTR("0～40Km/h平均\n加速度(m/s2)"),   D_FONT(7),         QRect( 127,  92, 96, 50),       Qt::yellow,                   Qt::black,                CONTROL_LABEL,         ID_PICIT_ACCELERATETEST_60_1   },
    {QSTR("0～70Km/h平均\n加速度(m/s2)"),   D_FONT(7),         QRect( 127,  147,96, 50),       Qt::yellow,                   Qt::black,                CONTROL_LABEL,         ID_PICIT_ACCELERATETEST_100_1   },
    {QSTR("初始速度\n(Km/s)"),   D_FONT(7),         QRect( 127,  202, 96, 50),       Qt::yellow,                   Qt::black,                CONTROL_LABEL,         ID_PICIT_DECELERATETEST_STARTSPEED_1   },
    {QSTR("平均减速\n加速度(m/s2)"),   D_FONT(7),         QRect( 127,  257, 96, 50),       Qt::yellow,                   Qt::black,                CONTROL_LABEL,         ID_PICIT_DECELERATETEST_DECELERATION_1   },
    {QSTR("制动距离(m)"),   D_FONT(7),         QRect( 127,  312, 96, 50),       Qt::yellow,                   Qt::black,                CONTROL_LABEL,         ID_PICIT_DECELERATETEST_BRKDISTANCE_1   },

    {QSTR("TCU1"),   D_FONT(7),         QRect( 227,  52, 96, 36),       Qt::yellow,                   Qt::black,                CONTROL_LABEL,        ID_IGNORE   },
    {QSTR(""),   D_FONT(7),         QRect( 227,  92, 96, 50),       Qt::yellow,                   Qt::black,                CONTROL_LABEL,         ID_PICIT_ACCELERATETEST_60   },
    {QSTR(""),   D_FONT(7),         QRect( 227,  147, 96, 50),       Qt::yellow,                   Qt::black,                CONTROL_LABEL,         ID_PICIT_ACCELERATETEST_100   },
    {QSTR(""),   D_FONT(7),         QRect( 227,  202, 96, 50),       Qt::yellow,                  Qt::black,               CONTROL_LABEL,         ID_PICIT_DECELERATETEST_STARTSPEED   },
    {QSTR(""),   D_FONT(7),         QRect( 227,  257, 96, 50),       Qt::yellow,                  Qt::black,                CONTROL_LABEL,         ID_PICIT_DECELERATETEST_DECELERATION   },
    {QSTR(""),   D_FONT(7),         QRect( 227,  312, 96, 50),       Qt::yellow,                  Qt::black,                CONTROL_LABEL,         ID_PICIT_DECELERATETEST_BRKDISTANCE   },
    {QSTR("TCU2"),   D_FONT(7),         QRect( 327,  52, 96, 36),       Qt::yellow,                   Qt::black,                CONTROL_LABEL,        ID_IGNORE   },
    {QSTR(""),   D_FONT(7),         QRect( 327,  92, 96, 50),       Qt::yellow,                   Qt::black,                CONTROL_LABEL,         ID_PICIT_ACCELERATETEST_60_2   },
    {QSTR(""),   D_FONT(7),         QRect( 327,  147, 96, 50),       Qt::yellow,                   Qt::black,                CONTROL_LABEL,         ID_PICIT_ACCELERATETEST_100_2   },
    {QSTR(""),   D_FONT(7),         QRect( 327,  202, 96, 50),       Qt::yellow,                  Qt::black,                CONTROL_LABEL,         ID_PICIT_DECELERATETEST_STARTSPEED_2   },
    {QSTR(""),   D_FONT(7),         QRect( 327,  257, 96, 50),       Qt::yellow,                  Qt::black,                CONTROL_LABEL,         ID_PICIT_DECELERATETEST_DECELERATION_2   },
    {QSTR(""),   D_FONT(7),         QRect( 327,  312, 96, 50),       Qt::yellow,                  Qt::black,                CONTROL_LABEL,         ID_PICIT_DECELERATETEST_BRKDISTANCE_2   },
    {QSTR("TCU3"),   D_FONT(7),         QRect( 427,  52, 96, 36),       Qt::yellow,                   Qt::black,                CONTROL_LABEL,        ID_IGNORE   },
    {QSTR(""),   D_FONT(7),         QRect( 427,  92, 96, 50),       Qt::yellow,                   Qt::black,                CONTROL_LABEL,         ID_PICIT_ACCELERATETEST_60_3   },
    {QSTR(""),   D_FONT(7),         QRect( 427,  147, 96, 50),       Qt::yellow,                   Qt::black,                CONTROL_LABEL,         ID_PICIT_ACCELERATETEST_100_3   },
    {QSTR(""),   D_FONT(7),         QRect( 427,  202, 96, 50),       Qt::yellow,                  Qt::black,                CONTROL_LABEL,         ID_PICIT_DECELERATETEST_STARTSPEED_3   },
    {QSTR(""),   D_FONT(7),         QRect( 427,  257, 96, 50),       Qt::yellow,                  Qt::black,                CONTROL_LABEL,         ID_PICIT_DECELERATETEST_DECELERATION_3   },
    {QSTR(""),   D_FONT(7),         QRect( 427,  312, 96, 50),       Qt::yellow,                  Qt::black,                CONTROL_LABEL,         ID_PICIT_DECELERATETEST_BRKDISTANCE_3   },
    {QSTR("TCU4"),   D_FONT(7),         QRect( 527,  52, 96, 36),       Qt::yellow,                   Qt::black,                CONTROL_LABEL,        ID_IGNORE   },
    {QSTR(""),   D_FONT(7),         QRect( 527,  92, 96, 50),       Qt::yellow,                   Qt::black,                CONTROL_LABEL,         ID_PICIT_ACCELERATETEST_60_4   },
    {QSTR(""),   D_FONT(7),         QRect( 527,  147, 96, 50),       Qt::yellow,                   Qt::black,                CONTROL_LABEL,         ID_PICIT_ACCELERATETEST_100_4   },
    {QSTR(""),   D_FONT(7),         QRect( 527,  202, 96, 50),       Qt::yellow,                  Qt::black,                CONTROL_LABEL,         ID_PICIT_DECELERATETEST_STARTSPEED_4   },
    {QSTR(""),   D_FONT(7),         QRect( 527,  257, 96, 50),       Qt::yellow,                  Qt::black,                CONTROL_LABEL,         ID_PICIT_DECELERATETEST_DECELERATION_4   },
    {QSTR(""),   D_FONT(7),         QRect( 527,  312, 96, 50),       Qt::yellow,                  Qt::black,                CONTROL_LABEL,         ID_PICIT_DECELERATETEST_BRKDISTANCE_4   },



    //{QSTR("减速度测试"),   D_FONT(10),         QRect( 1,  220, 660, 30),       Qt::black,                   Qt::yellow,                CONTROL_LABEL,        ID_IGNORE  },
    {QSTR("测试开始"),   D_FONT(7),         QRect( 15,  290, 90, 50),       Qt::black,                   Qt::yellow,                CONTROL_BUTTON,         ID_PICIT_TEST_BUTTON_START   },
    {QSTR("测试结束"),   D_FONT(7),         QRect( 15,  360, 90, 50),       Qt::black,                   Qt::yellow,                CONTROL_BUTTON,         ID_PICIT_TEST_BUTTON_STOPALL   },
    {QSTR("牵引测试"),   D_FONT(7),         QRect( 15,  50, 90, 50),       Qt::black,                   Qt::yellow,                CONTROL_BUTTON,         ID_PICIT_TEST_BUTTON_TRAMODE  },
    {QSTR("制动测试"),   D_FONT(7),         QRect( 15,  120, 90, 50),       Qt::black,                   Qt::yellow,                CONTROL_BUTTON,         ID_PICIT_TEST_BUTTON_BRAMODE   },
    {QSTR("牵引制动测试"),   D_FONT(7),         QRect( 15,  190, 90, 50),       Qt::black,                   Qt::yellow,                CONTROL_BUTTON,         ID_PICIT_TEST_BUTTON_TandBMODE   },
    {QSTR("退出"),    D_FONT_BOLD(8),      QRect(15, 430,  90,  30),                 Qt::yellow,                 Qt::black,                  CONTROL_BUTTON,           ID_PICIT_TEST_BUTTON_QUIT        },





   // D_LAYER2_NAVIGATION_BAR_MAINTAIN

};
int g_InstructionTestRomLen = sizeof(g_PicRom_InstructionTest)/sizeof(ROMDATA);

int nBtnIDArray[]=
{
    ID_PICIT_TEST_BUTTON_START,
    ID_PICIT_TEST_BUTTON_STOPALL,
    ID_PICIT_TEST_BUTTON_TRAMODE,
    ID_PICIT_TEST_BUTTON_BRAMODE,
    ID_PICIT_TEST_BUTTON_TandBMODE
};

BEGIN_MESSAGE_MAP(CInstructionTestPage,CPage)
        ON_UPDATE_PAGE()
        ON_LBUTTONDOWN( ID_PICIT_TEST_BUTTON_QUIT, OnCommonQuitButtonDown)
        ON_LBUTTONDOWN(ID_PICIT_TEST_BUTTON_TRAMODE,OnTESTtractionDown)
        ON_LBUTTONDOWN(ID_PICIT_TEST_BUTTON_BRAMODE,OnTESTbrakeDown)
        ON_LBUTTONDOWN(ID_PICIT_TEST_BUTTON_TandBMODE,OnTESTtractionandbrakeDown)
        ON_LBUTTONDOWN(ID_PICIT_TEST_BUTTON_START,OnTESTStartDown)
        ON_LBUTTONDOWN(ID_PICIT_TEST_BUTTON_STOPALL,OnTESTStopDown)
        ON_LBUTTONUP(ID_PICIT_TEST_BUTTON_STOPALL,OnTESTStopUp)

END_MESSAGE_MAP()

CInstructionTestPage::CInstructionTestPage()
{

  m_TestStart = false;
  m_Testmode = 0;
}

void CInstructionTestPage::OnInitPage()
{
    for(unsigned int i = 0; i < sizeof(nBtnIDArray)/sizeof(int); i++)
    {
        ((CButton*)GetDlgItem(nBtnIDArray[i]))->m_bAutoUpState = false;
    }

}

void CInstructionTestPage::OnUpdatePage()
{
    ((CLabel*)GetDlgItem(ID_PICIT_ACCELERATETEST_60))->SetCtrlText(QString::number(TCU1CCU_5_avgAcc40_U8 *0.01));
    ((CLabel*)GetDlgItem(ID_PICIT_ACCELERATETEST_60_2))->SetCtrlText(QString::number(TCU2CCU_5_avgAcc40_U8 *0.01));
    ((CLabel*)GetDlgItem(ID_PICIT_ACCELERATETEST_60_3))->SetCtrlText(QString::number(TCU3CCU_5_avgAcc40_U8 *0.01));
    ((CLabel*)GetDlgItem(ID_PICIT_ACCELERATETEST_60_4))->SetCtrlText(QString::number(TCU4CCU_5_avgAcc40_U8 *0.01));

    ((CLabel*)GetDlgItem(ID_PICIT_ACCELERATETEST_100))->SetCtrlText(QString::number(TCU1CCU_5_avgAcc70_U8 *0.01));
    ((CLabel*)GetDlgItem(ID_PICIT_ACCELERATETEST_100_2))->SetCtrlText(QString::number(TCU2CCU_5_avgAcc70_U8 *0.01));
    ((CLabel*)GetDlgItem(ID_PICIT_ACCELERATETEST_100_3))->SetCtrlText(QString::number(TCU3CCU_5_avgAcc70_U8 *0.01));
    ((CLabel*)GetDlgItem(ID_PICIT_ACCELERATETEST_100_4))->SetCtrlText(QString::number(TCU4CCU_5_avgAcc70_U8 *0.01));

    ((CLabel*)GetDlgItem( ID_PICIT_DECELERATETEST_STARTSPEED))->SetCtrlText(QString::number(TCU1CCU_5_StartSpeed_U8 ));
    ((CLabel*)GetDlgItem( ID_PICIT_DECELERATETEST_STARTSPEED_2))->SetCtrlText(QString::number(TCU2CCU_5_StartSpeed_U8 ));
    ((CLabel*)GetDlgItem( ID_PICIT_DECELERATETEST_STARTSPEED_3))->SetCtrlText(QString::number(TCU3CCU_5_StartSpeed_U8 ));
     ((CLabel*)GetDlgItem( ID_PICIT_DECELERATETEST_STARTSPEED_4))->SetCtrlText(QString::number(TCU4CCU_5_StartSpeed_U8 ));

    ((CLabel*)GetDlgItem( ID_PICIT_DECELERATETEST_DECELERATION))->SetCtrlText(QString::number(TCU1CCU_5_avgAccBrake_U8 *0.01 ));
    ((CLabel*)GetDlgItem( ID_PICIT_DECELERATETEST_DECELERATION_2))->SetCtrlText(QString::number(TCU2CCU_5_avgAccBrake_U8 *0.01 ));
    ((CLabel*)GetDlgItem( ID_PICIT_DECELERATETEST_DECELERATION_3))->SetCtrlText(QString::number(TCU3CCU_5_avgAccBrake_U8 *0.01 ));
    ((CLabel*)GetDlgItem( ID_PICIT_DECELERATETEST_DECELERATION_4))->SetCtrlText(QString::number(TCU4CCU_5_avgAccBrake_U8 *0.01 ));
    ((CLabel*)GetDlgItem( ID_PICIT_DECELERATETEST_BRKDISTANCE))->SetCtrlText(QString::number(TCU1CCU_5_Distance_U16 ));
    ((CLabel*)GetDlgItem( ID_PICIT_DECELERATETEST_BRKDISTANCE_2))->SetCtrlText(QString::number(TCU2CCU_5_Distance_U16 ));
     ((CLabel*)GetDlgItem( ID_PICIT_DECELERATETEST_BRKDISTANCE_3))->SetCtrlText(QString::number(TCU3CCU_5_Distance_U16 ));
     ((CLabel*)GetDlgItem( ID_PICIT_DECELERATETEST_BRKDISTANCE_4))->SetCtrlText(QString::number(TCU4CCU_5_Distance_U16 ));
}

void CInstructionTestPage::OnCommonQuitButtonDown()
{
     ChangePage(PAGE_ROM_INDEX_PARAMETERSET);
}

bool CInstructionTestPage::SetButtonDown(int nID)
{
    CButton* pButton = NULL;
    int buttonState;
    for(unsigned int i = 0; i <  sizeof(nBtnIDArray)/sizeof(int); i++)
    {
        pButton = (CButton *)GetDlgItem(nBtnIDArray[i]);
        if(nBtnIDArray[i] == nID) {
            buttonState = pButton->GetButtonState();
            if (buttonState == LBUTTON_UP
                || buttonState == LBUTTON_INIT)
            {
                CConfirmDialog dlg;
                    dlg.SetConfirmStr(QSTR("是否确认操作?"));
                dlg.move(m_pDlg->x()+int((m_pDlg->width()-dlg.width())/2),m_pDlg->y()+int((m_pDlg->height()-dlg.height())/2));
                dlg.exec();
                if(dlg.GetContinue())
                {
                    pButton->ChangeButtonState(LBUTTON_DOWN);
                    return true;
                }
            }
            else
            {
                pButton->ChangeButtonState(LBUTTON_UP);
                return true;
            }
        }
    }

    return false;
}
bool CInstructionTestPage::SetButtonUp(int nID)
{

    CButton* pButton = NULL;
    for(unsigned int i = 0; i <  sizeof(nBtnIDArray)/sizeof(int); i++)
    {
        pButton = (CButton *)GetDlgItem(nBtnIDArray[i]);
        if(nBtnIDArray[i] == nID) {
            pButton->ChangeButtonState(LBUTTON_UP);
            return true;
        }
    }

    return false;
}


void CInstructionTestPage::OnTESTStopDown()
{

    ((CButton*)GetDlgItem(ID_PICIT_TEST_BUTTON_TRAMODE))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_PICIT_TEST_BUTTON_BRAMODE))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_PICIT_TEST_BUTTON_TandBMODE))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_PICIT_TEST_BUTTON_START))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_PICIT_TEST_BUTTON_STOPALL))->ChangeButtonState(LBUTTON_DOWN);
    IDUCT_TcuTestRun_B1 = false;
    IDUCT_TcuTestStop_B1 = true;
    IDUCT_TestMode_A2 = 0;
}
void CInstructionTestPage::OnTESTStopUp()
{
    ((CButton*)GetDlgItem(ID_PICIT_TEST_BUTTON_STOPALL))->ChangeButtonState(LBUTTON_UP);
}
void CInstructionTestPage::OnTESTtractionDown()
{
    ((CButton*)GetDlgItem(ID_PICIT_TEST_BUTTON_TRAMODE))->ChangeButtonState(LBUTTON_DOWN);
    ((CButton*)GetDlgItem(ID_PICIT_TEST_BUTTON_BRAMODE))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_PICIT_TEST_BUTTON_TandBMODE))->ChangeButtonState(LBUTTON_UP);

    IDUCT_TestMode_A2 = 1;
}
void CInstructionTestPage::OnTESTbrakeDown()
{
    ((CButton*)GetDlgItem(ID_PICIT_TEST_BUTTON_TRAMODE))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_PICIT_TEST_BUTTON_BRAMODE))->ChangeButtonState(LBUTTON_DOWN);
    ((CButton*)GetDlgItem(ID_PICIT_TEST_BUTTON_TandBMODE))->ChangeButtonState(LBUTTON_UP);
    IDUCT_TestMode_A2 = 2;
}
void CInstructionTestPage::OnTESTtractionandbrakeDown()
{
    ((CButton*)GetDlgItem(ID_PICIT_TEST_BUTTON_TRAMODE))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_PICIT_TEST_BUTTON_BRAMODE))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_PICIT_TEST_BUTTON_TandBMODE))->ChangeButtonState(LBUTTON_DOWN);
    IDUCT_TestMode_A2 = 3;
}
void CInstructionTestPage::OnTESTStartDown()
{
    ((CButton*)GetDlgItem(ID_PICIT_TEST_BUTTON_START))->ChangeButtonState(LBUTTON_DOWN);
    ((CButton*)GetDlgItem(ID_PICIT_TEST_BUTTON_STOPALL))->ChangeButtonState(LBUTTON_UP);
    IDUCT_TcuTestRun_B1 = false;
    IDUCT_TcuTestStop_B1 = true;
}

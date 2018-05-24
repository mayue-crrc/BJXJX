#include <qdebug.h>

#include "cparametersetpage.h"
#include "cwheeldiametersetpage.h"
#include "ccarcodesetpage.h"
#include "csysloginpage.h"
#include "csystimesetpage.h"
#include "clocaliopage.h"

extern vector<CPage*> g_PageVec;
ROMDATA g_PicRom_ParameterSet[] =
{
    /*string                font                         rc                  foreground color              background color                control type                   ID           */
  D_COMMON_PAGE_HEADER
  {QSTR("参数设定"),       D_COMMON_TITLE_FONT,          QRect(260, 80, 120, 30),       Qt::yellow,                      Qt::black,                CONTROL_LABEL,         ID_IGNORE          },
  {"",                   D_DEFAULT_FONT,      QRect( 0,95,260,  2),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 380,95,260,  2),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {QSTR("系统时间设定"),     D_COMMON_TITLE_FONT,          QRect(60-10,  100+30, 120, 30),       Qt::black,                      Qt::yellow,                CONTROL_BUTTON,     ID_PICPS_BUTTON_SYSDATESET          },
  //{QSTR("车号设定"),     D_COMMON_TITLE_FONT,             QRect(200-10, 100+30, 120, 30),       Qt::black,                      Qt::yellow,                CONTROL_BUTTON,         ID_PICPS_BUTTON_CARCODESET       },
  //{QSTR("轮径设定"),        D_COMMON_TITLE_FONT,          QRect(340-10, 100+30, 120, 30),       Qt::black,                      Qt::yellow,                CONTROL_BUTTON,         ID_PICPS_BUTTON_WDIAMETERSET     },
  {QSTR("轮径设定"),        D_COMMON_TITLE_FONT,          QRect(200-10, 100+30, 120, 30),       Qt::black,                      Qt::yellow,                CONTROL_BUTTON,         ID_PICPS_BUTTON_WDIAMETERSET     },
 // {QSTR("门参数设定"),       D_COMMON_TITLE_FONT,          QRect(480-10, 100+30, 120, 30),       Qt::black,                      Qt::yellow,                CONTROL_BUTTON,        ID_PICPS_BUTTON_DOORPARASET           },


  {QSTR("管理和测试"),       D_COMMON_TITLE_FONT,          QRect(260, 180, 120, 30),       Qt::yellow,                      Qt::black,                CONTROL_LABEL,         ID_IGNORE          },
  {"",                   D_DEFAULT_FONT,      QRect( 0,195,260,  2),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 380,195,260,  2),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {QSTR("调试监控"),     D_COMMON_TITLE_FONT,          QRect(200-10, 280, 120, 30),      Qt::black,                      Qt::yellow,                CONTROL_BUTTON,         ID_PICPS_BUTTON_DRICODEMANAGE    },
  {QSTR("软件版本"),        D_COMMON_TITLE_FONT,          QRect(200-10,230, 120, 30) ,      Qt::black,                      Qt::yellow,               CONTROL_BUTTON,         ID_PICPS_BUTTON_VERSION          },
  //{QSTR("测试指令"),        D_COMMON_TITLE_FONT,          QRect(340-10,230, 120, 30) ,      Qt::black,                      Qt::yellow,               CONTROL_BUTTON,         ID_PICPS_BUTTON_TEST          },
 // {QSTR("密码管理"),     D_COMMON_TITLE_FONT,          QRect(480-10,230, 120, 30),       Qt::black,                      Qt::yellow,                CONTROL_BUTTON,         ID_PICPS_BUTTON_QUIT             },
  {QSTR("密码管理"),     D_COMMON_TITLE_FONT,          QRect(340-10,230, 120, 30),       Qt::black,                      Qt::yellow,                CONTROL_BUTTON,         ID_PICPS_BUTTON_QUIT             },

  {QSTR("亮度调节"),        D_COMMON_TITLE_FONT,          QRect(60-10, 280, 120, 30),       Qt::black,                      Qt::yellow,                CONTROL_BUTTON,         ID_PICPS_BUTTON_LUMINANCESET     },
  //{QSTR("屏幕校正"),     D_COMMON_TITLE_FONT,          QRect(200-10, 280, 120, 30),       Qt::black,                      Qt::black,                CONTROL_BUTTON,            ID_PICPS_BUTTON_SCREENRECTIFY    },
  {QSTR("运行数据管理"),     D_COMMON_TITLE_FONT,          QRect(330,280, 120, 30),       Qt::black,                      Qt::yellow,                CONTROL_BUTTON,         ID_PICPS_BUTTON_MODACCMILE       },
  {QSTR("超级电容管理"),     D_COMMON_TITLE_FONT,          QRect(60-10 ,230, 120, 30),       Qt::black,                      Qt::yellow,                CONTROL_BUTTON,         ID_PICPS_BUTTON_SUPERCAPACITY       },

  {QSTR("信息查看"),       D_COMMON_TITLE_FONT,          QRect(260, 330, 120, 30),       Qt::yellow,                      Qt::black,                CONTROL_LABEL,         ID_IGNORE          },
  {"",                   D_DEFAULT_FONT,      QRect( 0,345,260,  2),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(380,345,260,  2),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },

  {QSTR("当前故障"),        D_COMMON_TITLE_FONT,          QRect(60-10,380, 120, 30) ,      Qt::black,                      Qt::yellow,               CONTROL_BUTTON,          ID_PICPS_BUTTON_CURRENTFAULT       },
  {QSTR("历史故障"),     D_COMMON_TITLE_FONT,             QRect(200-10,380, 120, 30),       Qt::black,                      Qt::yellow,                CONTROL_BUTTON,            ID_PICPS_BUTTON_HISTORYFAULT            },
  {QSTR("网络IO"),          D_COMMON_TITLE_FONT,          QRect(340-10, 380, 120, 30),       Qt::black,                      Qt::yellow,                CONTROL_BUTTON,         ID_PICPS_BUTTON_LOCALIO          },
  {QSTR("运行数据"),          D_COMMON_TITLE_FONT,          QRect(480-10, 380, 120, 30),       Qt::black,                      Qt::yellow,                CONTROL_BUTTON,         ID_PICPS_BUTTON_REFRESHTIME          },

 // {QSTR(""),     D_COMMON_TITLE_FONT,          QRect(200-10,220+30, 120, 30),       Qt::black,                      Qt::yellow,                CONTROL_BUTTON,         ID_PICPS_BUTTON_MAINTAINERMANAGE },



  //{QSTR("屏幕校正"),      D_COMMON_TITLE_FONT,          QRect(60, 150+30, 120, 30),       Qt::black,                      Qt::yellow,                CONTROL_BUTTON,         ID_PICPS_BUTTON_SCREENRECTIFY    },
  //{QSTR("网络IO"),       D_COMMON_TITLE_FONT,          QRect(66, 380+30, 120, 30),       Qt::black,                      Qt::yellow,                CONTROL_BUTTON,         ID_PICPS_BUTTON_LOCALIO          },

 // {QSTR("空调测试"),       D_COMMON_TITLE_FONT,          QRect(200-10, 150+30, 120, 30),       Qt::black,                      Qt::yellow,                CONTROL_BUTTON,         ID_IGNORE          },


  //{QSTR("测试指令"),        D_COMMON_TITLE_FONT,          QRect(340,340, 100, 30) ,      Qt::black,                      Qt::yellow,               CONTROL_BUTTON,         ID_IGNORE          },

  D_LAYER1_NAVIGATION_BAR
  //D_LAYER2_NAVIGATION_BAR_MAINTAIN
};
int g_ParameterSetRomLen = sizeof(g_PicRom_ParameterSet)/sizeof(ROMDATA);

BEGIN_MESSAGE_MAP(CParameterSetPage,CPage)
        ON_UPDATE_PAGE()
        ON_LBUTTONDOWN(IDBTN_NAVIBAR_QUIT, OnCommonQuitButtonDown)
        ON_LBUTTONDOWN(ID_PICPS_BUTTON_SYSTIMESET, OnSysTimeSetButtonDown)
        ON_LBUTTONDOWN(ID_PICPS_BUTTON_SYSDATESET, OnSysDateSetButtonDown)
        ON_LBUTTONDOWN(ID_PICPS_BUTTON_CARCODESET, OnCarCodeSetButtonDown)
        ON_LBUTTONDOWN(ID_PICPS_BUTTON_WDIAMETERSET, OnWheelDiameterSetButtonDown)
        ON_LBUTTONDOWN(ID_PICPS_BUTTON_DRICODEMANAGE, OnDriverCodeManageButtonDown)
        ON_LBUTTONDOWN(ID_PICPS_BUTTON_LUMINANCESET, OnLuminanceButtonDown)
        ON_LBUTTONDOWN(ID_PICPS_BUTTON_MAINTAINERMANAGE, OnMaintainerButtonDown)
        ON_LBUTTONDOWN(ID_PICPS_BUTTON_MODACCMILE, OnModAccMileButtonDown)
        ON_LBUTTONDOWN(ID_PICPS_BUTTON_VERSION, OnVersionButtonDown)
        ON_LBUTTONDOWN(ID_PICPS_BUTTON_QUIT, OnReturnButtonDown)
        ON_LBUTTONDOWN(ID_PICPS_BUTTON_LOCALIO, OnLocalIoButtonDown)
        //ON_LBUTTONDOWN(ID_PICPS_BUTTON_TEST, OnTestButtonDown)
        ON_LBUTTONDOWN(ID_PICPS_BUTTON_CURRENTFAULT, OnCurrentFaultButtonDown)
        ON_LBUTTONDOWN(ID_PICPS_BUTTON_HISTORYFAULT, OnHistoryFaultButtonDown)
        //ON_LBUTTONDOWN(ID_PICPS_BUTTON_DOORPARASET , OnDoorParaSetButtonDown)
        ON_LBUTTONDOWN(ID_PICPS_BUTTON_SUPERCAPACITY , OnSuperCapacityButtonDown)


        ON_LBUTTONUP(ID_PICPS_BUTTON_QUIT, OnReturnButtonUp)
        ON_LBUTTONUP(ID_PICPS_BUTTON_SYSTIMESET, OnSysTimeSetButtonUp)
        ON_LBUTTONUP(ID_PICPS_BUTTON_SYSDATESET, OnSysDateSetButtonUp)
        //ON_LBUTTONUP(ID_PICPS_BUTTON_CARCODESET, OnCarCodeSetButtonUp)
        ON_LBUTTONUP(ID_PICPS_BUTTON_WDIAMETERSET, OnWheelDiameterSetButtonUp)
        ON_LBUTTONUP(ID_PICPS_BUTTON_DRICODEMANAGE, OnDriverCodeManageButtonUp)
        ON_LBUTTONUP(ID_PICPS_BUTTON_LUMINANCESET, OnLuminanceButtonUp)
        ON_LBUTTONUP(ID_PICPS_BUTTON_MAINTAINERMANAGE, OnMaintainerButtonUp)
        ON_LBUTTONUP(ID_PICPS_BUTTON_MODACCMILE, OnModAccMileButtonUp)
        ON_LBUTTONUP(ID_PICPS_BUTTON_VERSION, OnVersionButtonUp)
        ON_LBUTTONUP(ID_PICPS_BUTTON_LOCALIO, OnLocalIoButtonUp)
       // ON_LBUTTONUP(ID_PICPS_BUTTON_TEST, OnTestButtonUp)
        ON_LBUTTONUP(ID_PICPS_BUTTON_CURRENTFAULT, OnCurrentFaultButtonUp)
        ON_LBUTTONUP(ID_PICPS_BUTTON_HISTORYFAULT, OnHistoryFaultButtonUp)
       // ON_LBUTTONUP(ID_PICPS_BUTTON_DOORPARASET , OnDoorParaSetButtonUp)
        ON_LBUTTONUP(ID_PICPS_BUTTON_SUPERCAPACITY , OnSuperCapacityButtonUp)

        ON_LBUTTONDOWN(ID_PICPS_BUTTON_REFRESHTIME , OnRefreshTimeButtonDown)
        ON_LBUTTONUP(ID_PICPS_BUTTON_REFRESHTIME ,OnRefreshTimeButtonUp)
END_MESSAGE_MAP()

CParameterSetPage::CParameterSetPage()
{

}
void CParameterSetPage::OnInitPage()
{
}

void CParameterSetPage::OnUpdatePage()
{

}

void CParameterSetPage::ShowWarningDialog()
{
    CWarningDialog dlg;
    dlg.SetWarningStr(QSTR("本端为非激活端，\n无法设定"));
    dlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
    dlg.exec();
}

void CParameterSetPage::OnCommonQuitButtonDown()
{
    ChangePage(PAGE_ROM_INDEX_MAIN);
}

void CParameterSetPage::OnReturnButtonDown()
{
    ((CButton*)GetDlgItem(ID_PICPS_BUTTON_QUIT))->ChangeButtonState(LBUTTON_DOWN);
}

void CParameterSetPage::OnReturnButtonUp()
{

    ChangePage(PAGE_PASSWORD_SET);

}

void CParameterSetPage::OnSysTimeSetButtonDown()
{
    ((CButton*)GetDlgItem(ID_PICPS_BUTTON_SYSTIMESET))->ChangeButtonState(LBUTTON_DOWN);
}

void CParameterSetPage::OnSysDateSetButtonDown()
{
    ((CButton*)GetDlgItem(ID_PICPS_BUTTON_SYSDATESET))->ChangeButtonState(LBUTTON_DOWN);
}


void CParameterSetPage::OnCarCodeSetButtonDown()
{
    //((CButton*)GetDlgItem(ID_PICPS_BUTTON_CARCODESET))->ChangeButtonState(LBUTTON_DOWN);
}

void CParameterSetPage::OnWheelDiameterSetButtonDown()
{
    ((CButton*)GetDlgItem(ID_PICPS_BUTTON_WDIAMETERSET))->ChangeButtonState(LBUTTON_DOWN);
}

void CParameterSetPage::OnDriverCodeManageButtonDown()
{
    ((CButton*)GetDlgItem(ID_PICPS_BUTTON_DRICODEMANAGE))->ChangeButtonState(LBUTTON_DOWN);
}

void CParameterSetPage::OnLuminanceButtonDown()
{
    ((CButton*)GetDlgItem(ID_PICPS_BUTTON_LUMINANCESET))->ChangeButtonState(LBUTTON_DOWN);
}

void CParameterSetPage::OnMaintainerButtonDown()
{

    ((CButton*)GetDlgItem(ID_PICPS_BUTTON_MAINTAINERMANAGE))->ChangeButtonState(LBUTTON_DOWN);
}

void CParameterSetPage::OnModAccMileButtonDown()
{
    ((CButton*)GetDlgItem(ID_PICPS_BUTTON_MODACCMILE))->ChangeButtonState(LBUTTON_DOWN);
}

void CParameterSetPage::OnVersionButtonDown()
{
    ((CButton*)GetDlgItem(ID_PICPS_BUTTON_VERSION))->ChangeButtonState(LBUTTON_DOWN);
}

void CParameterSetPage::OnRefreshTimeButtonDown()
{
    ((CButton*)GetDlgItem(ID_PICPS_BUTTON_REFRESHTIME))->ChangeButtonState(LBUTTON_DOWN);
}
void CParameterSetPage::OnRefreshTimeButtonUp()
{
        ((CButton*)GetDlgItem(ID_PICPS_BUTTON_REFRESHTIME))->ChangeButtonState(LBUTTON_UP);
        //ChangePage(PAGE_ROM_INDEX_DCDCSTATECOUPLED);
        ChangePage(PAGE_ROM_INDEX_DRIVERCODEMANAGE);

        //************ChangePage(PAGE_ROM_INDEX_HVACPARAMETERSET);
        //ChangePage(PAGE_ROM_INDEX_DRIVERCODEMANAGE);
        //ChangePage(PAGE_ROM_INDEX_REFRESHTIME);
}

void CParameterSetPage::OnSysTimeSetButtonUp()
{
    ((CButton*)GetDlgItem(ID_PICPS_BUTTON_SYSTIMESET))->ChangeButtonState(LBUTTON_UP);
//    if (ENUM_LOGIN_TYPE_MAINTAINER != g_login_type)
//    {
//        ShowWarningDialog();
//        return;
//    }
    ChangePage(PAGE_ROM_INDEX_SYSTIMESET);
    CPage *pPage = g_PageVec[CGlobal::m_nCurPageIndex];
    ((CSysTimeSetPage *)pPage)->m_settype = E_SET_TIME;
    ((CSysTimeSetPage *)pPage)->OnInitPage();
}

void CParameterSetPage::OnSysDateSetButtonUp()
{
    ((CButton*)GetDlgItem(ID_PICPS_BUTTON_SYSDATESET))->ChangeButtonState(LBUTTON_UP);

    if(set_KeyState==1)
    {
        ChangePage(PAGE_ROM_INDEX_HVACPARAMETERSET);
        set_PwdPageID=3;
    }
    else
    {
         ShowWarningDialog();
    }

//    ChangePage(PAGE_ROM_INDEX_SYSTIMESET);
//    CPage *pPage = g_PageVec[CGlobal::m_nCurPageIndex];
//    ((CSysTimeSetPage *)pPage)->m_settype = E_SET_DATE;
//    ((CSysTimeSetPage *)pPage)->OnInitPage();

}

void CParameterSetPage::OnCarCodeSetButtonUp()
{
    ChangePage(PAGE_ROM_INDEX_HVACPARAMETERSET);
    set_PwdPageID=4;

}

void CParameterSetPage::OnWheelDiameterSetButtonUp()
{

    ChangePage(PAGE_ROM_INDEX_HVACPARAMETERSET);
    set_PwdPageID=5;


}

void CParameterSetPage::OnDriverCodeManageButtonUp()
{
//    if (ENUM_LOGIN_TYPE_MAINTAINER != g_login_type)
//    {
//        ShowWarningDialog();
//        return;
//    }

    ((CButton*)GetDlgItem(ID_PICPS_BUTTON_DRICODEMANAGE))->ChangeButtonState(LBUTTON_UP);
  // ChangePage(PAGE_ROM_INDEX_DRIVERCODEMANAGE);
    ChangePage(PAGE_ROM_INDEX_REFRESHTIME);
}

void CParameterSetPage::OnLuminanceButtonUp()
{
    ChangePage(PAGE_ROM_INDEX_LUMINANCESET);
}

void CParameterSetPage::OnMaintainerButtonUp()
{

    ChangePage(PAGE_ROM_INDEX_MAINTAINERMANAGE);

}

void CParameterSetPage::OnModAccMileButtonUp()
{
//    if(bool(TC1_HMI == 1) && bool(TC2_HMI == 0))
//    {
        set_PwdPageID = 1;
        ChangePage(PAGE_ROM_INDEX_HVACPARAMETERSET);
//    }else
//    {
//        CWarningDialog dlg;
//        dlg.SetWarningStr(QSTR("仅MC1端可设定运行数据"));
//        dlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
//        dlg.exec();
//    }



}

void CParameterSetPage::OnVersionButtonUp()
{
    ChangePage(PAGE_ROM_INDEX_VERSION);
}

void CParameterSetPage::OnScreenRectifyDown()
{
    //((CButton*)GetDlgItem(ID_PICPS_BUTTON_SCREENRECTIFY))->ChangeButtonState(LBUTTON_DOWN);
}

//void CParameterSetPage::OnScreenRectifyUp()
//{
//    static int cnt = 0;
//    if(cnt++>3)
//    {
//        ((CButton*)GetDlgItem(ID_PICPS_BUTTON_SCREENRECTIFY))->SetTxtColor(Qt::yellow);
//        if(cnt>4)
//        {
//            cnt = 0;
//            QString program = "./ts_calibrate_cnr";
//            QProcess::execute(program);
//        }
//    }
//}
//((CButton*)GetDlgItem(ID_PICPS_BUTTON_SCREENRECTIFY))->ChangeButtonState(LBUTTON_UP);
//    system("./ts__calibrate");
//    system("");


void CParameterSetPage::OnLocalIoButtonDown()
{
    ((CButton*)GetDlgItem(ID_PICPS_BUTTON_LOCALIO))->ChangeButtonState(LBUTTON_DOWN);
}

void CParameterSetPage::OnLocalIoButtonUp()
{
    ((CButton*)GetDlgItem(ID_PICPS_BUTTON_LOCALIO))->ChangeButtonState(LBUTTON_UP);
    ChangePage(PAGE_ROM_INDEX_DEBUGRIOMDETIALPAGE);
    //ChangePage(PAGE_ROM_INDEX_UDPDATAPAGE1);
    //ChangePage(PAGE_ROM_INDEX_LOCALIO);
    //ChangePage(PAGE_ROM_INDEX_SERIALDATA);
}
void CParameterSetPage::OnTestButtonDown()
{
     //((CButton*)GetDlgItem(ID_PICPS_BUTTON_TEST))->ChangeButtonState(LBUTTON_DOWN);
}

void CParameterSetPage::OnTestButtonUp()
{
   // ((CButton*)GetDlgItem(ID_PICPS_BUTTON_TEST))->ChangeButtonState(LBUTTON_UP);
   // ChangePage(PAGE_ROM_INDEX_INSTRUCTIONTEST);
}

void CParameterSetPage::OnCurrentFaultButtonUp()
{
    ((CButton*)GetDlgItem(ID_PICPS_BUTTON_CURRENTFAULT))->ChangeButtonState(LBUTTON_UP);
    ChangePage(PAGE_ROM_INDEX_CURRENTFAULTLIST);
}

void CParameterSetPage::OnCurrentFaultButtonDown()
{
     ((CButton*)GetDlgItem(ID_PICPS_BUTTON_CURRENTFAULT))->ChangeButtonState(LBUTTON_DOWN);
}

void CParameterSetPage::OnHistoryFaultButtonUp()
{
    ((CButton*)GetDlgItem(ID_PICPS_BUTTON_HISTORYFAULT))->ChangeButtonState(LBUTTON_UP);
    ChangePage(PAGE_ROM_INDEX_HISTORYFAULTLIST);
}

void CParameterSetPage::OnHistoryFaultButtonDown()
{
     ((CButton*)GetDlgItem(ID_PICPS_BUTTON_HISTORYFAULT))->ChangeButtonState(LBUTTON_DOWN);
}

void CParameterSetPage::OnDoorParaSetButtonUp()
{

   // ((CButton*)GetDlgItem(ID_PICPS_BUTTON_DOORPARASET))->ChangeButtonState(LBUTTON_UP);
   // ChangePage(PAGE_ROM_INDEX_HVACPARAMETERSET);
   // set_PwdPageID=6;

}

void CParameterSetPage::OnDoorParaSetButtonDown()
{
     //((CButton*)GetDlgItem(ID_PICPS_BUTTON_DOORPARASET))->ChangeButtonState(LBUTTON_DOWN);
}
void CParameterSetPage::OnSuperCapacityButtonDown()
{
     ((CButton*)GetDlgItem(ID_PICPS_BUTTON_SUPERCAPACITY ))->ChangeButtonState(LBUTTON_DOWN);
}

void CParameterSetPage::OnSuperCapacityButtonUp()
{
    ((CButton*)GetDlgItem(ID_PICPS_BUTTON_SUPERCAPACITY ))->ChangeButtonState(LBUTTON_UP);
    ChangePage(PAGE_ROM_INDEX_MODIFYACCUMULATEMILE);

}

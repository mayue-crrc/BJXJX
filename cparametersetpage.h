#ifndef CPARAMETERSETPAGE_H
#define CPARAMETERSETPAGE_H

#include "cpage.h"

//picture ParameterSet control id
#define ID_PICPS_BUTTON_SYSTIMESET       0x0E01
#define ID_PICPS_BUTTON_CARCODESET       0x0E02
#define ID_PICPS_BUTTON_WDIAMETERSET     0x0E03
#define ID_PICPS_BUTTON_LUMINANCESET     0x0E04
#define ID_PICPS_BUTTON_DRICODEMANAGE    0x0E05
#define ID_PICPS_BUTTON_MAINTAINERMANAGE 0x0E06
#define ID_PICPS_BUTTON_VERSION          0x0E07
#define ID_PICPS_BUTTON_MODACCMILE       0x0E08
#define ID_PICPS_BUTTON_QUIT             0x0E09
#define ID_PICPS_BUTTON_SCREENRECTIFY    0x0E0A
#define ID_PICPS_BUTTON_LOCALIO          0x0E0B
#define ID_PICPS_BUTTON_SYSDATESET       0x0E0C
#define ID_PICPS_BUTTON_DOORPARASET      0x0E0D
#define ID_PICPS_BUTTON_TEST             0x0E0F
#define ID_PICPS_BUTTON_CURRENTFAULT        0x0E10
#define ID_PICPS_BUTTON_HISTORYFAULT        0x0E11
#define ID_PICPS_BUTTON_REFRESHTIME         0x0E12
#define  ID_PICPS_BUTTON_SUPERCAPACITY      0x0E13

class CParameterSetPage : public CPage
{
    DECLEAR_MESSAGE_MAP(CParameterSetPage)
public:
    CParameterSetPage();

private:
    void ShowWarningDialog();


protected:
    //TODO:declear call back function
    QString accumulateMileage;
    void OnInitPage();

    void OnUpdatePage();
    void OnCommonQuitButtonDown();
    void OnSysTimeSetButtonDown();
    void OnSysDateSetButtonDown();
    void OnCarCodeSetButtonDown();
    void OnWheelDiameterSetButtonDown();
    void OnDriverCodeManageButtonDown();
    void OnLuminanceButtonDown();
    void OnScreenRectifyDown();
    void OnMaintainerButtonDown();
    void OnModAccMileButtonDown();
    void OnReturnButtonDown();
    void OnVersionButtonDown();
    void OnSysTimeSetButtonUp();
    void OnSysDateSetButtonUp();
    void OnCarCodeSetButtonUp();
    void OnWheelDiameterSetButtonUp();
    void OnDriverCodeManageButtonUp();
    void OnLuminanceButtonUp();
    void OnScreenRectifyUp();
    void OnMaintainerButtonUp();
    void OnModAccMileButtonUp();
    void OnVersionButtonUp();
    void OnReturnButtonUp();
    void OnLocalIoButtonDown();
    void OnLocalIoButtonUp();
    void OnTestButtonDown();
    void OnTestButtonUp();
    void OnCurrentFaultButtonUp();
    void OnCurrentFaultButtonDown();
    void OnHistoryFaultButtonUp();
    void OnHistoryFaultButtonDown();
    void OnDoorParaSetButtonUp();
    void OnDoorParaSetButtonDown();
    void OnRefreshTimeButtonDown();
    void OnRefreshTimeButtonUp();
    void OnSuperCapacityButtonDown();
    void OnSuperCapacityButtonUp();
};

#endif // CPARAMETERSETPAGE_H

#ifndef CMAINCONTROLCMDPAGE_H
#define CMAINCONTROLCMDPAGE_H

#include "cpage.h"

//picture MainControlCmd control id
#define ID_PICMCC_BUTTON_SAND_FORBID                0x2401
#define ID_PICMCC_BUTTON_WASHING                    0x2402
#define ID_PICMCC_BUTTON_DISPATCH                   0x2403
#define ID_PICMCC_BUTTON_LIGHT                      0x2404
#define ID_PICMCC_BUTTON_FORCED_PUMP                0x2405
#define ID_PICMCC_BUTTON_POWERON_BYHAND             0x2406
#define ID_PICMCC_BUTTON_SKIPSTATION                0x2407

#define ID_PICMCC_BUTTON_QUIT                       0x240F

class CMainControlCmdPage : public CPage
{
    DECLEAR_MESSAGE_MAP(CMainControlCmdPage)
public:
    CMainControlCmdPage();
    void OnInitPage();

private:
    void OnUpdatePage();
    void OnButtonSandForbidDown();
    void OnButtonWashingDown();
    void OnButtonDispatchDown();
    void OnButtonLightDown();
    void OnButtonForcedPumpDown();
    void OnButtonPoweronByhandDown();
    void OnSkipStationDown();

    void OnButtonQuitDown();

    void OnButtonForcedPumpUp();
};

#endif // CMAINCONTROLCMDPAGE_H

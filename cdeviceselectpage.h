#ifndef CDEVICESELECTPAGE_H
#define CDEVICESELECTPAGE_H

#include "cpage.h"

//picture DeviceSelect control id
#define ID_PICETS_BUTTON_ALL         0x1B01
#define ID_PICETS_BUTTON_TCU         0x1B02
#define ID_PICETS_BUTTON_HVAC        0x1B03
#define ID_PICETS_BUTTON_DCDC        0x1B04
#define ID_PICETS_BUTTON_ACU         0x1B05
#define ID_PICETS_BUTTON_DOOR        0x1B06
#define ID_PICETS_BUTTON_RIOM        0x1B07
#define ID_PICETS_BUTTON_BCU         0x1B08
#define ID_PICETS_BUTTON_PIS         0x1B09
#define ID_PICETS_BUTTON_TCMS         0x1B0A

class CDeviceSelectPage : public CPage
{
    DECLEAR_MESSAGE_MAP(CDeviceSelectPage)
public:
    CDeviceSelectPage();

private:
    //TODO:declear call back function
    void OnUpdatePage();
    void OnAllDown();
    void OnTCUDown();
    void OnHVACDown();
    void OnDCDCDown();
    void OnACUDown();
    void OnDoorDown();
    void OnRIOMDown();
    void OnBCUDown();
    void OnPISDown();
    void OnTCMSDown();

    void OnAllUp();
    void OnTCUUp();
    void OnHVACUp();
    void OnDCDCUp();
    void OnACUUp();
    void OnDoorUp();
    void OnRIOMUp();
    void OnBCUUp();
    void OnPISUp();
    void OnTCMSUp();
};

#endif // CDEVICESELECTPAGE_H

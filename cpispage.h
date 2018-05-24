#ifndef CPISPAGE_H
#define CPISPAGE_H

#include "cpage.h"

#define MIN_LINENO 1
#define MAX_LINENO 5

//picture PIS control id
#define ID_PICPIS_BUTTON_UPORDOWN       0x0701
#define ID_PICPIS_BUTTON_STARTSTATION   0x0702
#define ID_PICPIS_BUTTON_ENDSTATION     0x0703
//#define ID_PICPIS_BUTTON_CURRENTSTATION 0x0704
#define ID_PICPIS_BUTTON_TCMSORTC       0x0705

#define ID_PICPIS_LABEL_UPDOWN          0x0706
#define ID_PICPIS_LABEL_STARTSTATION    0x0707
#define ID_PICPIS_LABEL_ENDSTATION      0x0708
//#define ID_PICPIS_LABEL_CURRENTSTATION  0x0709
#define ID_PICPIS_LABEL_TCMSORTC        0x070A
#define ID_PICPIS_LABEL_LINECH          0x070B
#define ID_PICPIS_LABEL_LINENO          0x070C
#define ID_PICPIS_BUTTON_DOWN           0x070D
#define ID_PICPIS_BUTTON_UP             0x070E

class CPisPage : public CPage
{
    DECLEAR_MESSAGE_MAP(CPisPage)
public:
    CPisPage();

private:
    //TODO:declear call back function
    void OnInitPage();
    void OnUpdatePage();
    void OnCommonQuitButtonDown();
    void OnUpDownBtnDown();
    void OnStartStationSetButtonDown();
    //void OnCurrentStationSetButtonDown();
    void OnEndStationSetButtonDown();
    void OnTcmsOrTcDown();
    void OnUpDownBtnUp();
    void OnStartStationSetButtonUp();
    //void OnCurrentStationSetButtonUp();
    void OnEndStationSetButtonUp();
    void OnTcmsOrTcUp();

    void OnDownButtonDown();
    void OnDownButtonUp();
    void OnUpButtonDown();
    void OnUpButtonUp();

    int currentLineNo;
};

#endif // CPISPAGE_H

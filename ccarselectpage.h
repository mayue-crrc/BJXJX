#ifndef CCARSELECTPAGE_H
#define CCARSELECTPAGE_H

#include "cpage.h"
//picture CarSelect control id
#define ID_PICCS_BUTTON_CAR1         0x3801
#define ID_PICCS_BUTTON_CAR2         0x3802
#define ID_PICCS_BUTTON_CAR3         0x3803
#define ID_PICCS_BUTTON_CARALL       0x3804
#define ID_PICCS_BUTTON_UP           0x3805
#define ID_PICCS_BUTTON_DOWN         0x3806

#define D_CARID_LIST_CNT            100

class CCarSelectPage : public CPage
{
    DECLEAR_MESSAGE_MAP(CCarSelectPage)
public:
    CCarSelectPage();

protected:
    //TODO:declear call back function
    void OnUpdatePage();
    void OnCar1Down();
    void OnCar2Down();
    void OnCar3Down();
    void OnCarAllDown();
    void OnCar1Up();
    void OnCar2Up();
    void OnCar3Up();
    void OnCarAllUp();
    void OnBtnDownDown();
    void OnBtnDownUp();
    void OnBtnUpDown();
    void OnBtnUpUp();
    void UpdateCarIdList();
    bool FindCarIdInHistoryList(int carid);
    void UpdateBtnText();

private:
    int m_caridcount;
    int m_caridlist[D_CARID_LIST_CNT];
    int m_topidx;
};

#endif // CCARSELECTPAGE_H

#ifndef CHVACTESTPAGE_H
#define CHVACTESTPAGE_H

#include "cpage.h"

//picture HVACTest control id
#define ID_PICHTEST_BUTTON_FULLCOLD               0x0D01
#define ID_PICHTEST_BUTTON_FULLWARM               0x0D02
#define ID_PICHTEST_BUTTON_EMGCENTILATION         0x0D03
#define ID_PICHTEST_BUTTON_HALFCOLD               0x0D04
#define ID_PICHTEST_BUTTON_HALFWARM               0x0D05
#define ID_PICHTEST_BUTTON_STOP                   0x0D06


#define ID_PICHTEST_LABEL_CARNUM                  0x0D0D

class CHvacTestPage : public CPage
{
    DECLEAR_MESSAGE_MAP(CHvacTestPage)
public:
    CHvacTestPage();

private:
    //TODO:declear call back function
    void OnUpdatePage();
    void OnCommonQuitButtonDown();

    void SetBtnDown(int btnID);
    void SetBtnDown();
    void OnHalfColdDown();
    void OnFullColdDown();
    void OnEMGCVentilationDown();
    void OnStopDown();
    void OnHalfWarmDown();
    void OnFullWarmDown();

    void OnInitPage();

};

#endif // CHVACTESTPAGE_H

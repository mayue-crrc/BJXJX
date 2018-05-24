#ifndef CTCU2STATEPAGE_H
#define CTCU2STATEPAGE_H

#include "cpage.h"

#define ID_TCUSTATE2_TBLCHANGE           0x0401
#define ID_TCUSTATE2_CARNUM              0x0402
#define ID_TCUSTATE2_MC_INPUT            0x0403
#define ID_TCUSTATE2_M_INPUT             0x0404
#define ID_TCUSTATE2_MC_SUPPLY           0x0405
#define ID_TCUSTATE2_M_SUPPLY            0x0406
#define ID_TCUSTATE2_MC_SANDING          0x0407
#define ID_TCUSTATE2_M_SANDING           0x0408
#define ID_TCUSTATE2_MC_BRAKE            0x0409
#define ID_TCUSTATE2_M_BRAKE             0x040A
#define ID_TCUSTATE2_MC_SPEED            0x040B
#define ID_TCUSTATE2_M_SPEED             0x040C
#define ID_TCUSTATE2_MC_Q                0x040D
#define ID_TCUSTATE2_M_Q                 0x040E
#define IDLABEL_TCUSTATE2_2_1            0x040F
#define IDLABEL_TCUSTATE2_3_1            0x0410
#define IDLABEL_TCUSTATE2_4_1            0x0411
#define IDLABEL_TCUSTATE2_5_1            0x0412
#define IDLABEL_TCUSTATE2_6_1            0x0413
#define IDLABEL_TCUSTATE2_7_1            0x0414

extern vector<CPage*>  g_PageVec;

class CTcu2StatePage : public CPage
{
    DECLEAR_MESSAGE_MAP(CTcu2StatePage)
public:
    CTcu2StatePage();

protected:
    //TODO:declear call back function
    void OnUpdatePage();
    void OnInitPage();
    void OnCommonQuitButtonDown();
    void OnUpButtonUp();
    void OnUpButtonDown();
};

#endif // CTCU2STATEPAGE_H

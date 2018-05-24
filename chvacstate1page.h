#ifndef CHVACSTATE1PAGE_H
#define CHVACSTATE1PAGE_H

#include "cpage.h"

#define ID_HVACSTATE1_DROPDPWN     0x0D01

#define ID_HVACSTATE1_4_3L         0x0D02
#define ID_HVACSTATE1_4_3R         0x0D03
#define ID_HVACSTATE1_5_3          0x0D04
#define ID_HVACSTATE1_6_3L         0x0D05
#define ID_HVACSTATE1_6_3R         0x0D06
#define ID_HVACSTATE1_7_3L         0x0D07
#define ID_HVACSTATE1_7_3R         0x0D08
#define ID_HVACSTATE1_8_3          0x0D09

#define ID_HVACSTATE1_4_4L         0x0D0A
#define ID_HVACSTATE1_4_4R         0x0D0B
#define ID_HVACSTATE1_5_4          0x0D0C
#define ID_HVACSTATE1_6_4L         0x0D0D
#define ID_HVACSTATE1_6_4R         0x0D0E
#define ID_HVACSTATE1_7_4L         0x0D0F
#define ID_HVACSTATE1_7_4R         0x0D10
#define ID_HVACSTATE1_8_4          0x0D11

#define ID_HVACSTATE1_TRAINCODE    0x0D12
#define ID_HVACSTATE1_2_3          0x0D13
#define ID_HVACSTATE1_2_4          0x0D14
#define ID_HVACSTATE1_3_3          0x0D15
#define ID_HVACSTATE1_3_4          0x0D16

#define ID_HVACSTATE1_2_1          0x0D17
#define ID_HVACSTATE1_3_1          0x0D18
#define ID_HVACSTATE1_4_1          0x0D19
#define ID_HVACSTATE1_5_1          0x0D1A
#define ID_HVACSTATE1_6_1          0x0D1B
#define ID_HVACSTATE1_7_1          0x0D1C
#define ID_HVACSTATE1_8_1          0x0D1D
#define ID_HVACSTATE1_9_1          0x0D1E
#define ID_HVACSTATE1_9_3          0x0D1F
#define ID_HVACSTATE1_9_4          0x0D20
class CHvacState1Page : public CPage
{
    DECLEAR_MESSAGE_MAP(CHvacState1Page)
public:
    CHvacState1Page();

protected:
    //TODO:declear call back function
    void OnUpdatePage();
    void OnInitPage();
    void OnCommonQuitButtonDown();
    void OnUpButtonUp();
    void OnUpButtonDown();
};

#endif // CHVACSTATE1PAGE_H

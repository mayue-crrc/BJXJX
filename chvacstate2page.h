#ifndef CHVACSTATE2PAGE_H
#define CHVACSTATE2PAGE_H

#include "cpage.h"

#define ID_PICHS_BUTTON_UP               0x0E01
#define ID_PICHS_LABEL_MC_CARNUM         0x0E02
#define ID_PICHS_LABEL_MC_AUTO           0x0E03
#define ID_PICHS_LABEL_M_AUTO            0x0E04
#define ID_PICHS_LABEL_MC_STRONGCOOL     0x0E05
#define ID_PICHS_LABEL_M_STRONGCOOL      0x0E06
#define ID_PICHS_LABEL_MC_WEAKCOOL       0x0E07
#define ID_PICHS_LABEL_M_WEAKCOOL        0x0E08
#define ID_PICHS_LABEL_MC_VENTILATION    0x0E09
#define ID_PICHS_LABEL_M_VENTILATION     0x0E0A
#define ID_PICHS_LABEL_MC_EVENTILATION   0x0E0B
#define ID_PICHS_LABEL_M_EVENTILATION    0x0E0C
#define ID_PICHS_LABEL_MC_POWERFLR       0x0E0D
#define ID_PICHS_LABEL_M_POWERFLR        0x0E0E
#define ID_PICHS_LABEL_MC_HTEMPFAIR      0x0E0F
#define ID_PICHS_LABEL_M_HTEMPFAIR       0x0E10
#define ID_PICHS_LABEL_MC_HTEMPENVION    0x0E11
#define ID_PICHS_LABEL_M_HTEMPENVION     0x0E12
#define ID_PICHS_LABEL_MC_WEAKHEATING    0x0E13
#define ID_PICHS_LABEL_M_WEAKHEATING     0x0E14
#define ID_PICHS_LABEL_MC_STRONGHEATING  0x0E15
#define ID_PICHS_LABEL_M_STRONGHEATING   0x0E16
#define ID_PICHS_LABEL_MC_STOP           0x0E17
#define ID_PICHS_LABEL_M_STOP            0x0E18
#define IDLABEL_HVACSTATE2_2_1           0x0E19
#define IDLABEL_HVACSTATE2_3_1           0x0E1A
#define IDLABEL_HVACSTATE2_4_1           0x0E1B
#define IDLABEL_HVACSTATE2_5_1           0x0E1C
#define IDLABEL_HVACSTATE2_6_1           0x0E1D
#define IDLABEL_HVACSTATE2_7_1           0x0E1E
#define IDLABEL_HVACSTATE2_8_1           0x0E1F
#define IDLABEL_HVACSTATE2_9_1           0x0E20
#define IDLABEL_HVACSTATE2_10_1          0x0E21
#define IDLABEL_HVACSTATE2_11_1          0x0E22
#define IDLABEL_HVACSTATE2_12_1          0x0E23


class CHvacState2Page : public CPage
{
    DECLEAR_MESSAGE_MAP(CHvacState2Page)
public:
    CHvacState2Page();

protected:
    //TODO:declear call back function
    void OnUpdatePage();
    void OnInitPage();
    void OnCommonQuitButtonDown();
    void OnUpButtonDown();
    void OnUpButtonUp();
};

#endif // CHVACSTATE2PAGE_H

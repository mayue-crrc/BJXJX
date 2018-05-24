#ifndef CDOORPAGE_H
#define CDOORPAGE_H

#include "cpage.h"

#define DOOR_MIN_PAGE 1
#define DOOR_MAX_PAGE 2

#define ID_PICDOOR_LABEL_2_1_1                  0x1FA1
#define ID_PICDOOR_LABEL_3_1_1                  0x1FA2
#define ID_PICDOOR_LABEL_4_1_1                  0x1FA3
#define ID_PICDOOR_LABEL_5_1_1                  0x1FA4
#define ID_PICDOOR_LABEL_6_1_1                  0x1FA5
#define ID_PICDOOR_LABEL_7_1_1                  0x1FA6
#define ID_PICDOOR_LABEL_8_1_1                  0x1FA7



#define ID_PICDOOR_LABEL_2_1                    0x1F01
#define ID_PICDOOR_LABEL_3_1                    0x1F02
#define ID_PICDOOR_LABEL_4_1                    0x1F03
#define ID_PICDOOR_LABEL_5_1                    0x1F04
#define ID_PICDOOR_LABEL_6_1                    0x1F05
#define ID_PICDOOR_LABEL_7_1                    0x1F06
#define ID_PICDOOR_LABEL_8_1                    0x1F07


#define ID_PICDOOR_LABEL_2_2_1                  0x1F11
#define ID_PICDOOR_LABEL_3_2_1                  0x1F12
#define ID_PICDOOR_LABEL_4_2_1                  0x1F13
#define ID_PICDOOR_LABEL_5_2_1                  0x1F14
#define ID_PICDOOR_LABEL_6_2_1                  0x1F15
#define ID_PICDOOR_LABEL_7_2_1                  0x1F16
#define ID_PICDOOR_LABEL_8_2_1                  0x1F17




#define ID_PICDOOR_LABEL_2_3_1                  0x1F51
#define ID_PICDOOR_LABEL_3_3_1                  0x1F52
#define ID_PICDOOR_LABEL_4_3_1                  0x1F53
#define ID_PICDOOR_LABEL_5_3_1                  0x1F54
#define ID_PICDOOR_LABEL_6_3_1                  0x1F55
#define ID_PICDOOR_LABEL_7_3_1                  0x1F56
#define ID_PICDOOR_LABEL_8_3_1                  0x1F57



#define ID_PICDOOR_LABEL_2_5_1                  0x1FC1
#define ID_PICDOOR_LABEL_3_5_1                  0x1FC2
#define ID_PICDOOR_LABEL_4_5_1                  0x1FC3
#define ID_PICDOOR_LABEL_5_5_1                  0x1FC4
#define ID_PICDOOR_LABEL_6_5_1                  0x1FC5
#define ID_PICDOOR_LABEL_7_5_1                  0x1FC6
#define ID_PICDOOR_LABEL_8_5_1                  0x1FC7

#define ID_PICDOOR_LABEL_2_4                  0x1F41
#define ID_PICDOOR_LABEL_3_4                  0x1F42
#define ID_PICDOOR_LABEL_4_4                  0x1F43
#define ID_PICDOOR_LABEL_5_4                  0x1F44
#define ID_PICDOOR_LABEL_6_4                  0x1F45
#define ID_PICDOOR_LABEL_7_4                  0x1F46
#define ID_PICDOOR_LABEL_8_4                  0x1F47



#define ID_PICDOOR_LABEL_CARNO                  0x1F91
#define ID_PICDOOR_PAGEDOWN                     0x1F92
#define ID_PICDOOR_PAGEUP                       0x1F93
#define ID_PICDOOR_LABEL_QUIT                   0x1F94

class CDoorPage : public CPage
{
    DECLEAR_MESSAGE_MAP(CDoorPage)
public:
    CDoorPage();

private:
    void OnUpdatePage();
    void OnCommonQuitButtonDown();
    void OnInitPage();

    void OnAddButtonDown2();
    void OnAddButtonDown3();
    void OnAddButtonDown4();
    void OnAddButtonDown5();
    void OnAddButtonDown6();
    void OnAddButtonDown7();
    void OnAddButtonDown8();
    void OnAddButtonUp2();
    void OnAddButtonUp3();
    void OnAddButtonUp4();
    void OnAddButtonUp5();
    void OnAddButtonUp6();
    void OnAddButtonUp7();
    void OnAddButtonUp8();

    void OnMinusButtonDown2();
    void OnMinusButtonDown3();
    void OnMinusButtonDown4();
    void OnMinusButtonDown5();
    void OnMinusButtonDown6();
    void OnMinusButtonDown7();
    void OnMinusButtonDown8();
    void OnMinusButtonUp2();
    void OnMinusButtonUp3();
    void OnMinusButtonUp4();
    void OnMinusButtonUp5();
    void OnMinusButtonUp6();
    void OnMinusButtonUp7();
    void OnMinusButtonUp8();

    void OnConfirmButtonDown2();
    void OnConfirmButtonDown3();
    void OnConfirmButtonDown4();
    void OnConfirmButtonDown5();
    void OnConfirmButtonDown6();
    void OnConfirmButtonDown7();
    void OnConfirmButtonDown8();
    void OnConfirmButtonUp2();
    void OnConfirmButtonUp3();
    void OnConfirmButtonUp4();
    void OnConfirmButtonUp5();
    void OnConfirmButtonUp6();
    void OnConfirmButtonUp7();
    void OnConfirmButtonUp8();

    void OnDownButtonDown();
    void OnDownButtonUp();
    void OnUpButtonDown();
    void OnUpButtonUp();
    unsigned int pageNo,formerPageNo;
    int set_Door_2;
    int set_Door_3;
    int set_Door_4;
    int set_Door_5;
    int set_Door_6;
    int set_Door_7;
    int set_Door_8;
    bool m_bBtnPress;
    int m_PressBtnID ;
};

#endif // CDOORPAGE_H

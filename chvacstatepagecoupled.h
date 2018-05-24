#ifndef CHVACSTATEPAGECOUPLED_H
#define CHVACSTATEPAGECOUPLED_H
#include "cpage.h"
#include "cwarningdialog.h"
#include "databuffer.h"

#define HVAC_MIN_PAGE 1
#define HVAC_MAX_PAGE 2

//picture HVAC control id

#define IDLABEL_HVACSTATE_2_1          0x0B00
#define IDLABEL_HVACSTATE_3_1          0x0B01
#define IDLABEL_HVACSTATE_4_1          0x0B02
#define IDLABEL_HVACSTATE_5_1          0x0B03
#define IDLABEL_HVACSTATE_6_1          0x0B04
#define IDLABEL_HVACSTATE_7_1          0x0B05
#define IDLABEL_HVACSTATE_8_1          0x0B06
#define IDLABEL_HVACSTATE_9_1          0x0B07
//#define IDLABEL_HVACSTATE_10_1         0x0B08
//#define IDLABEL_HVACSTATE_11_1         0x0B09
//#define IDLABEL_HVACSTATE_12_1         0x0B0A

#define IDLABEL_HVACSTATE_2_2          0x0B10
#define IDLABEL_HVACSTATE_3_2          0x0B11
#define IDLABEL_HVACSTATE_4_2          0x0B12
#define IDLABEL_HVACSTATE_5_2          0x0B13
#define IDLABEL_HVACSTATE_6_2_1          0x0B14
#define IDLABEL_HVACSTATE_7_2_1          0x0B15
#define IDLABEL_HVACSTATE_8_2          0x0B16
#define IDLABEL_HVACSTATE_9_2          0x0B17
#define IDLABEL_HVACSTATE_6_2_2          0x0B18
#define IDLABEL_HVACSTATE_7_2_2          0x0B19
//#define IDLABEL_HVACSTATE_10_2         0x0B18
//#define IDLABEL_HVACSTATE_11_2         0x0B19
//#define IDLABEL_HVACSTATE_12_2         0x0B1A

#define IDLABEL_HVACSTATE_2_3          0x0B20
#define IDLABEL_HVACSTATE_3_3          0x0B21
#define IDLABEL_HVACSTATE_4_3          0x0B22
#define IDLABEL_HVACSTATE_5_3          0x0B23
#define IDLABEL_HVACSTATE_6_3_1          0x0B24
#define IDLABEL_HVACSTATE_7_3_1          0x0B25
#define IDLABEL_HVACSTATE_8_3          0x0B26
#define IDLABEL_HVACSTATE_9_3          0x0B27
#define IDLABEL_HVACSTATE_6_3_2          0x0B28
#define IDLABEL_HVACSTATE_7_3_2          0x0B29
//#define IDLABEL_HVACSTATE_10_3         0x0B28
//#define IDLABEL_HVACSTATE_11_3         0x0B29
//#define IDLABEL_HVACSTATE_12_3         0x0B2A

#define IDLABEL_HVACSTATE_2_4          0x0B40
#define IDLABEL_HVACSTATE_3_4          0x0B41
#define IDLABEL_HVACSTATE_4_4          0x0B42
#define IDLABEL_HVACSTATE_5_4          0x0B43
#define IDLABEL_HVACSTATE_6_4_1          0x0B44
#define IDLABEL_HVACSTATE_7_4_1          0x0B45
#define IDLABEL_HVACSTATE_8_4          0x0B46
#define IDLABEL_HVACSTATE_9_4          0x0B47
#define IDLABEL_HVACSTATE_6_4_2          0x0B48
#define IDLABEL_HVACSTATE_7_4_2          0x0B49
//#define IDLABEL_HVACSTATE_10_4         0x0B48
//#define IDLABEL_HVACSTATE_11_4         0x0B49
//#define IDLABEL_HVACSTATE_12_4         0x0B4A

#define IDLABEL_HVACSTATE_2_5          0x0B50
#define IDLABEL_HVACSTATE_3_5          0x0B51
#define IDLABEL_HVACSTATE_4_5          0x0B52
#define IDLABEL_HVACSTATE_5_5          0x0B53
#define IDLABEL_HVACSTATE_6_5_1          0x0B54
#define IDLABEL_HVACSTATE_7_5_1          0x0B55
#define IDLABEL_HVACSTATE_8_5          0x0B56
#define IDLABEL_HVACSTATE_9_5          0x0B57
#define IDLABEL_HVACSTATE_6_5_2          0x0B58
#define IDLABEL_HVACSTATE_7_5_2          0x0B59
//#define IDLABEL_HVACSTATE_10_5         0x0B58
//#define IDLABEL_HVACSTATE_11_5         0x0B59
//#define IDLABEL_HVACSTATE_12_5         0x0B5A
//#define IDLABEL_HVACSTATEPAGE         0x0B5B

//#define IDLABEL_HVACSTATE_TRAINNUM     0x0B30
#define ID_HVACSTATE_PAGEDOWN          0x0B31
#define ID_HVACSTATE_PAGEUP            0x0B32
#define ID_HVACSET_LABLE_0             0x0B6d
#define ID_HVACSET_LABLE_1            0x0B61
#define ID_HVACSET_EDIT_2             0x0B62
#define ID_HVACSET_LABLE_3            0x0B63
#define ID_HVACSET_LABLE_4            0x0B64
#define ID_HVACSET_LABLE_5            0x0B65
#define ID_HVACSET_LABLE_6            0x0B66
#define ID_HVACSET_LABLE_7            0x0B67
#define ID_HVACSET_LABLE_8            0x0B68
#define ID_HVACSET_LABLE_9            0x0B69
#define ID_HVACSET_LABLE_10            0x0B6a
#define ID_HVACSET_LABLE_11            0x0B6b
#define ID_HVACSET_LABLE_12            0x0B6c
#define ID_HVACSET_LABLE_COUPLESET     0x0B6e


class CHvacStatePageCoupled : public CPage
{
    DECLEAR_MESSAGE_MAP(CHvacStatePageCoupled)
public:
    CHvacStatePageCoupled();
private:
    //TODO:declear call back function
    void OnUpdatePage();
    void OnInitPage();
    void OnCommonQuitButtonDown();
    void OnDownButtonDown();
    void OnDownButtonUp();
    void OnUpButtonDown();
    void OnUpButtonUp();
    unsigned int pageNo;
    void OnInit();

    bool m_bBtnPress;
    int m_PressBtnID;
    void OnSet1ButtonDOWN();
    void OnSet3ButtonDOWN();
    void OnSet4ButtonDOWN();
    void OnSet5ButtonDOWN();
    void OnSet6ButtonDOWN();
    void OnSet7ButtonDOWN();
    void OnSet8ButtonDOWN();
    void OnSet9ButtonDOWN();
    void OnSet10ButtonDOWN();
    void OnSet11ButtonDOWN();
    void OnSet12ButtonDOWN();
    void OnSet1ButtonUP();
    void OnSet3ButtonUP();
    void OnSet4ButtonUP();
    void OnSet5ButtonUP();
    void OnSet6ButtonUP();
    void OnSet7ButtonUP();
    void OnSet8ButtonUP();
    void OnSet9ButtonUP();
    void OnSet10ButtonUP();
    void OnSet11ButtonUP();
    void OnSet12ButtonUP();
    bool mannalflg;
};

#endif // CHVACSTATEPAGECOUPLED_H

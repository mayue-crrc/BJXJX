#ifndef CDCDCSTATEPAGE_H
#define CDCDCSTATEPAGE_H
#include "databuffer.h"
#include "cpage.h"

#define DCDC_MIN_PAGE 1
#define DCDC_MAX_PAGE 7

//picture DCDC control id

#define IDLABEL_DCDCSTATE_2_1          0x0600
#define IDLABEL_DCDCSTATE_3_1          0x0601
#define IDLABEL_DCDCSTATE_4_1          0x0602
#define IDLABEL_DCDCSTATE_5_1          0x0603
#define IDLABEL_DCDCSTATE_6_1          0x0604
#define IDLABEL_DCDCSTATE_7_1          0x0605
#define IDLABEL_DCDCSTATE_8_1          0x0606
#define IDLABEL_DCDCSTATE_9_1          0x0607
#define IDLABEL_DCDCSTATE_10_1         0x0608
#define IDLABEL_DCDCSTATE_11_1         0x0609
#define IDLABEL_DCDCSTATE_12_1         0x060A
#define IDLABEL_DCDCSTATE_13_1         0x060B
#define IDLABEL_DCDCSTATE_14_1         0x060C

#define IDLABEL_DCDCSTATE_2_2          0x0610
#define IDLABEL_DCDCSTATE_3_2          0x0611
#define IDLABEL_DCDCSTATE_4_2          0x0612
#define IDLABEL_DCDCSTATE_5_2          0x0613
#define IDLABEL_DCDCSTATE_6_2          0x0614
#define IDLABEL_DCDCSTATE_7_2          0x0615
#define IDLABEL_DCDCSTATE_8_2          0x0616
#define IDLABEL_DCDCSTATE_9_2          0x0617
#define IDLABEL_DCDCSTATE_10_2         0x0618
#define IDLABEL_DCDCSTATE_11_2         0x0619
#define IDLABEL_DCDCSTATE_12_2         0x061A
#define IDLABEL_DCDCSTATE_13_2         0x061B
#define IDLABEL_DCDCSTATE_14_2         0x061C

#define IDLABEL_DCDCSTATE_2_3          0x0620
#define IDLABEL_DCDCSTATE_3_3          0x0621
#define IDLABEL_DCDCSTATE_4_3          0x0622
#define IDLABEL_DCDCSTATE_5_3          0x0623
#define IDLABEL_DCDCSTATE_6_3          0x0624
#define IDLABEL_DCDCSTATE_7_3          0x0625
#define IDLABEL_DCDCSTATE_8_3          0x0626
#define IDLABEL_DCDCSTATE_9_3          0x0627
#define IDLABEL_DCDCSTATE_10_3         0x0628
#define IDLABEL_DCDCSTATE_11_3         0x0629
#define IDLABEL_DCDCSTATE_12_3         0x062A
#define IDLABEL_DCDCSTATE_13_3         0x062B
#define IDLABEL_DCDCSTATE_14_3         0x062C



//#define IDLABEL_DCDCSTATE_TRAINNUM     0x0630
//#define ID_DCDCSTATE_PAGEDOWN          0x0631
//#define ID_DCDCSTATE_PAGEUP            0x0632
extern vector<CPage*>  g_PageVec;

class CDcdcStatePage : public CPage
{
    DECLEAR_MESSAGE_MAP(CDcdcStatePage)
public:
    CDcdcStatePage();

private:
    //TODO:declear call back function
    void OnUpdatePage();
    void OnInitPage();
    void OnCommonQuitButtonDown();
    void OnDownButtonDown();
    void OnDownButtonUp();
    void OnUpButtonDown();
    void OnUpButtonUp();
    unsigned int pageNo,formerPageNo;
};
#endif // CDCDCSTATEPAGE_H

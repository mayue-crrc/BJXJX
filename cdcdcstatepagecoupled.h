#ifndef CDCDCSTATEPAGECOUPLED_H
#define CDCDCSTATEPAGECOUPLED_H

#include "cpage.h"
#include "databuffer.h"
#define DCDC_MIN_PAGE 1
#define DCDC_MAX_PAGE 7

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


#define IDLABEL_DCDCSTATE_2_4          0x0630
#define IDLABEL_DCDCSTATE_3_4          0x0631
#define IDLABEL_DCDCSTATE_4_4          0x0632
#define IDLABEL_DCDCSTATE_5_4          0x0633
#define IDLABEL_DCDCSTATE_6_4          0x0634
#define IDLABEL_DCDCSTATE_7_4          0x0635
#define IDLABEL_DCDCSTATE_8_4          0x0636
#define IDLABEL_DCDCSTATE_9_4          0x0637
#define IDLABEL_DCDCSTATE_10_4         0x0638
#define IDLABEL_DCDCSTATE_11_4         0x0639
#define IDLABEL_DCDCSTATE_12_4         0x063A
#define IDLABEL_DCDCSTATE_13_4         0x063B
#define IDLABEL_DCDCSTATE_14_4         0x063C

#define IDLABEL_DCDCSTATE_2_5          0x0640
#define IDLABEL_DCDCSTATE_3_5          0x0641
#define IDLABEL_DCDCSTATE_4_5          0x0642
#define IDLABEL_DCDCSTATE_5_5          0x0643
#define IDLABEL_DCDCSTATE_6_5          0x0644
#define IDLABEL_DCDCSTATE_7_5          0x0645
#define IDLABEL_DCDCSTATE_8_5          0x0646
#define IDLABEL_DCDCSTATE_9_5          0x0647
#define IDLABEL_DCDCSTATE_10_5         0x0648
#define IDLABEL_DCDCSTATE_11_5         0x0649
#define IDLABEL_DCDCSTATE_12_5         0x064A
#define IDLABEL_DCDCSTATE_13_5         0x064B
#define IDLABEL_DCDCSTATE_14_5         0x064C

extern vector<CPage*>  g_PageVec;

class cdcdcstatepagecoupled : public CPage
{

    DECLEAR_MESSAGE_MAP(cdcdcstatepagecoupled)
public:
    cdcdcstatepagecoupled();

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
    void OnUpdatedatashow();

};

#endif // CDCDCSTATEPAGECOUPLED_H

#ifndef CBCUSTATEPAGECOUPLED_H
#define CBCUSTATEPAGECOUPLED_H
#include "cpage.h"
#include "databuffer.h"






#define MIN_PAGE 1
#define MAX_PAGE 2

//picture BcuL control id
#define IDLABEL_PICBCU_2_1            0x0501
#define IDLABEL_PICBCU_3_1            0x0502
#define IDLABEL_PICBCU_4_1            0x0503
#define IDLABEL_PICBCU_5_1            0x0504
#define IDLABEL_PICBCU_6_1            0x0505
#define IDLABEL_PICBCU_7_1            0x0506
#define IDLABEL_PICBCU_8_1            0x0507
#define IDLABEL_PICBCU_9_1            0x0508
#define IDLABEL_PICBCU_10_1           0x0509
#define IDLABEL_PICBCU_11_1           0x050A
#define IDLABEL_PICBCU_12_1           0x050B
#define IDLABEL_PICBCU_13_1           0x050C

#define IDLABEL_PICBCU_2_2            0x0511
#define IDLABEL_PICBCU_3_2            0x0512
#define IDLABEL_PICBCU_4_2            0x0513
#define IDLABEL_PICBCU_5_2            0x0514
#define IDLABEL_PICBCU_6_2            0x0515
#define IDLABEL_PICBCU_7_2            0x0516
#define IDLABEL_PICBCU_8_2            0x0517
#define IDLABEL_PICBCU_9_2            0x0518
#define IDLABEL_PICBCU_10_2           0x0519
#define IDLABEL_PICBCU_11_2           0x051A
#define IDLABEL_PICBCU_12_2           0x051B
#define IDLABEL_PICBCU_13_2           0x051C

#define IDLABEL_PICBCU_2_3            0x0531
#define IDLABEL_PICBCU_3_3            0x0532
#define IDLABEL_PICBCU_4_3            0x0533
#define IDLABEL_PICBCU_5_3            0x0534
#define IDLABEL_PICBCU_6_3            0x0535
#define IDLABEL_PICBCU_7_3            0x0536
#define IDLABEL_PICBCU_8_3            0x0537
#define IDLABEL_PICBCU_9_3            0x0538
#define IDLABEL_PICBCU_10_3           0x0539
#define IDLABEL_PICBCU_11_3           0x053A
#define IDLABEL_PICBCU_12_3           0x053B
#define IDLABEL_PICBCU_13_3           0x053C

#define IDLABEL_PICBCU_2_4           0x0541
#define IDLABEL_PICBCU_3_4           0x0542
#define IDLABEL_PICBCU_4_4           0x0543
#define IDLABEL_PICBCU_5_4           0x0544
#define IDLABEL_PICBCU_6_4           0x0545
#define IDLABEL_PICBCU_7_4           0x0546
#define IDLABEL_PICBCU_8_4           0x0547
#define IDLABEL_PICBCU_9_4           0x0548
#define IDLABEL_PICBCU_10_4          0x0549
#define IDLABEL_PICBCU_11_4          0x054A
#define IDLABEL_PICBCU_12_4          0x054B
#define IDLABEL_PICBCU_13_4          0x054C

#define IDLABEL_PICBCU_2_5           0x0551
#define IDLABEL_PICBCU_3_5           0x0552
#define IDLABEL_PICBCU_4_5           0x0553
#define IDLABEL_PICBCU_5_5           0x0554
#define IDLABEL_PICBCU_6_5           0x0555
#define IDLABEL_PICBCU_7_5           0x0556
#define IDLABEL_PICBCU_8_5           0x0557
#define IDLABEL_PICBCU_9_5           0x0558
#define IDLABEL_PICBCU_10_5          0x0559
#define IDLABEL_PICBCU_11_5          0x055A
#define IDLABEL_PICBCU_12_5          0x055B
#define IDLABEL_PICBCU_13_5          0x055C

#define IDLABEL_PICBCU_2_6           0x0561
#define IDLABEL_PICBCU_3_6           0x0562
#define IDLABEL_PICBCU_4_6           0x0563
#define IDLABEL_PICBCU_5_6           0x0564
#define IDLABEL_PICBCU_6_6           0x0565
#define IDLABEL_PICBCU_7_6           0x0566
#define IDLABEL_PICBCU_8_6           0x0567
#define IDLABEL_PICBCU_9_6           0x0568
#define IDLABEL_PICBCU_10_6          0x0569
#define IDLABEL_PICBCU_11_6          0x056A
#define IDLABEL_PICBCU_12_6          0x056B
#define IDLABEL_PICBCU_13_6          0x056C

#define IDLABEL_PICBCU_2_7           0x0571
#define IDLABEL_PICBCU_3_7           0x0572
#define IDLABEL_PICBCU_4_7           0x0573
#define IDLABEL_PICBCU_5_7           0x0574
#define IDLABEL_PICBCU_6_7           0x0575
#define IDLABEL_PICBCU_7_7           0x0576
#define IDLABEL_PICBCU_8_7           0x0577
#define IDLABEL_PICBCU_9_7           0x0578
#define IDLABEL_PICBCU_10_7          0x0579
#define IDLABEL_PICBCU_11_7          0x057A
#define IDLABEL_PICBCU_12_7          0x057B
#define IDLABEL_PICBCU_13_7          0x057C


//#define ID_PICBCU_PAGEDOWN            0x0521
//#define ID_PICBCU_PAGEUP              0x0522
#define IDLABEL_PICBCU_TRAINNUM       0x0523
#define IDLABEL_PICBCUPAGE            0x0540

class CBcuStatePageCoupled : public CPage
{
    DECLEAR_MESSAGE_MAP(CBcuStatePageCoupled)
public:
    CBcuStatePageCoupled();

private:
    //TODO:declear call back function
    void OnUpdatePage();
    void OnInitPage();
    void OnCommonQuitButtonDown();
    void OnCleardata();

   //void OnDownButtonDown();
    //void OnDownButtonUp();
    //void OnUpButtonDown();
    //void OnUpButtonUp();
    unsigned int pageNo,formerPageNo;
};

#endif // CBCUSTATEPAGECOUPLED_H


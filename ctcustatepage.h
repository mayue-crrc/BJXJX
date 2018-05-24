#ifndef CTCUSTATEPAGE_H
#define CTCUSTATEPAGE_H
#include "databuffer.h"
#include "cpage.h"

#define TCU_MIN_PAGE 1
#define TCU_MAX_PAGE 3
//#define ID_TCUSTATE_COUPLECHANGE          0x03a0
//#define ID_TCUSTATE_PAGEDOWN            0x0301
//#define ID_TCUSTATE_PAGEUP              0x0302

#define ID_TCUSTATE_CARNUM              0x0303

#define ID_TCUSTATE_MC1_MSR1_2               0x0304
#define ID_TCUSTATE_MC2_MSR1_2               0x0305
#define ID_TCUSTATE_MC1_MSR1_3               0x0306
#define ID_TCUSTATE_MC2_MSR1_3               0x0307
#define ID_TCUSTATE_MC1_MSR1_4               0x0308
#define ID_TCUSTATE_MC2_MSR1_4               0x0309
#define ID_TCUSTATE_MC1_MSR1_5               0x030A
#define ID_TCUSTATE_MC2_MSR1_5               0x030B
#define ID_TCUSTATE_MC1_MSR1_6               0x030C
#define ID_TCUSTATE_MC2_MSR1_6               0x030D
#define ID_TCUSTATE_MC1_MSR1_7               0x030E
#define ID_TCUSTATE_MC2_MSR1_7               0x030F
#define ID_TCUSTATE_MC1_MSR1_8               0x0310
#define ID_TCUSTATE_MC2_MSR1_8               0x0311
#define ID_TCUSTATE_MC1_MSR1_9               0x0312
#define ID_TCUSTATE_MC2_MSR1_9               0x0313
#define ID_TCUSTATE_MC1_MSR1_10              0x0314
#define ID_TCUSTATE_MC2_MSR1_10              0x0315
#define ID_TCUSTATE_MC1_MSR1_11              0x0316
#define ID_TCUSTATE_MC2_MSR1_11              0x0317
#define ID_TCUSTATE_MC1_MSR1_12              0x0318
#define ID_TCUSTATE_MC2_MSR1_12              0x0319
#define ID_TCUSTATE_MC1_MSR1_13              0x031a
#define ID_TCUSTATE_MC2_MSR1_13              0x031b

#define ID_TCUSTATE_MC1_MSR2_2               0x0324
#define ID_TCUSTATE_MC2_MSR2_2               0x0325
#define ID_TCUSTATE_MC1_MSR2_3               0x0326
#define ID_TCUSTATE_MC2_MSR2_3               0x0327
#define ID_TCUSTATE_MC1_MSR2_4               0x0328
#define ID_TCUSTATE_MC2_MSR2_4               0x0329
#define ID_TCUSTATE_MC1_MSR2_5               0x032A
#define ID_TCUSTATE_MC2_MSR2_5               0x032B
#define ID_TCUSTATE_MC1_MSR2_6               0x032C
#define ID_TCUSTATE_MC2_MSR2_6               0x032D
#define ID_TCUSTATE_MC1_MSR2_7               0x032E
#define ID_TCUSTATE_MC2_MSR2_7               0x032F
#define ID_TCUSTATE_MC1_MSR2_8               0x0330
#define ID_TCUSTATE_MC2_MSR2_8               0x0331
#define ID_TCUSTATE_MC1_MSR2_9               0x0332
#define ID_TCUSTATE_MC2_MSR2_9               0x0333
#define ID_TCUSTATE_MC1_MSR2_10              0x0334
#define ID_TCUSTATE_MC2_MSR2_10              0x0335
#define ID_TCUSTATE_MC1_MSR2_11              0x0336
#define ID_TCUSTATE_MC2_MSR2_11              0x0337
#define ID_TCUSTATE_MC1_MSR2_12              0x0338
#define ID_TCUSTATE_MC2_MSR2_12              0x0339
#define ID_TCUSTATE_MC1_MSR2_13              0x033a
#define ID_TCUSTATE_MC2_MSR2_13              0x033b



#define IDLABEL_TCUSTATE_2_1            0x034A
#define IDLABEL_TCUSTATE_3_1            0x034B
#define IDLABEL_TCUSTATE_4_1            0x034C
#define IDLABEL_TCUSTATE_5_1            0x034D
#define IDLABEL_TCUSTATE_6_1            0x034E
#define IDLABEL_TCUSTATE_7_1            0x034F
#define IDLABEL_TCUSTATE_8_1            0x0340
#define IDLABEL_TCUSTATE_9_1            0x0341
#define IDLABEL_TCUSTATE_10_1           0x0342
#define IDLABEL_TCUSTATE_11_1           0x0343
#define IDLABEL_TCUSTATE_12_1           0x0344
#define IDLABEL_TCUSTATE_13_1           0x0345

//#define IDLABEL_TCUSTATEPAGE            0x0338


extern vector<CPage*>  g_PageVec;
class CTcuStatePage : public CPage
{
    DECLEAR_MESSAGE_MAP(CTcuStatePage)
public:
    CTcuStatePage();

protected:
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

#endif // CTCUSTATEPAGE_H

#ifndef CTCUSTATEPAGECOUPLED_H
#define CTCUSTATEPAGECOUPLED_H
#include "cpage.h"
#include "databuffer.h"
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




#define ID_TCUSTATE_MC1_MSR1_2_TBC               0x0354
#define ID_TCUSTATE_MC2_MSR1_2_TBC               0x0355
#define ID_TCUSTATE_MC1_MSR1_3_TBC               0x0356
#define ID_TCUSTATE_MC2_MSR1_3_TBC               0x0357
#define ID_TCUSTATE_MC1_MSR1_4_TBC               0x0358
#define ID_TCUSTATE_MC2_MSR1_4_TBC               0x0359
#define ID_TCUSTATE_MC1_MSR1_5_TBC               0x035A
#define ID_TCUSTATE_MC2_MSR1_5_TBC               0x035B
#define ID_TCUSTATE_MC1_MSR1_6_TBC               0x035C
#define ID_TCUSTATE_MC2_MSR1_6_TBC               0x035D
#define ID_TCUSTATE_MC1_MSR1_7_TBC               0x035E
#define ID_TCUSTATE_MC2_MSR1_7_TBC               0x035F
#define ID_TCUSTATE_MC1_MSR1_8_TBC               0x0360
#define ID_TCUSTATE_MC2_MSR1_8_TBC               0x0361
#define ID_TCUSTATE_MC1_MSR1_9_TBC               0x0362
#define ID_TCUSTATE_MC2_MSR1_9_TBC               0x0363
#define ID_TCUSTATE_MC1_MSR1_10_TBC              0x0364
#define ID_TCUSTATE_MC2_MSR1_10_TBC              0x0365
#define ID_TCUSTATE_MC1_MSR1_11_TBC              0x0366
#define ID_TCUSTATE_MC2_MSR1_11_TBC              0x0367
#define ID_TCUSTATE_MC1_MSR1_12_TBC              0x0368
#define ID_TCUSTATE_MC2_MSR1_12_TBC              0x0369
#define ID_TCUSTATE_MC1_MSR1_13_TBC              0x036a
#define ID_TCUSTATE_MC2_MSR1_13_TBC              0x036b

#define ID_TCUSTATE_MC1_MSR2_2_TBC               0x0374
#define ID_TCUSTATE_MC2_MSR2_2_TBC               0x0375
#define ID_TCUSTATE_MC1_MSR2_3_TBC               0x0376
#define ID_TCUSTATE_MC2_MSR2_3_TBC               0x0377
#define ID_TCUSTATE_MC1_MSR2_4_TBC               0x0378
#define ID_TCUSTATE_MC2_MSR2_4_TBC               0x0379
#define ID_TCUSTATE_MC1_MSR2_5_TBC               0x037A
#define ID_TCUSTATE_MC2_MSR2_5_TBC               0x037B
#define ID_TCUSTATE_MC1_MSR2_6_TBC               0x037C
#define ID_TCUSTATE_MC2_MSR2_6_TBC              0x037D
#define ID_TCUSTATE_MC1_MSR2_7_TBC               0x037E
#define ID_TCUSTATE_MC2_MSR2_7_TBC               0x037F
#define ID_TCUSTATE_MC1_MSR2_8_TBC               0x0380
#define ID_TCUSTATE_MC2_MSR2_8_TBC               0x0381
#define ID_TCUSTATE_MC1_MSR2_9_TBC               0x0382
#define ID_TCUSTATE_MC2_MSR2_9_TBC               0x0383
#define ID_TCUSTATE_MC1_MSR2_10_TBC              0x0384
#define ID_TCUSTATE_MC2_MSR2_10_TBC              0x0385
#define ID_TCUSTATE_MC1_MSR2_11_TBC              0x0386
#define ID_TCUSTATE_MC2_MSR2_11_TBC              0x0387
#define ID_TCUSTATE_MC1_MSR2_12_TBC              0x0388
#define ID_TCUSTATE_MC2_MSR2_12_TBC              0x0389
#define ID_TCUSTATE_MC1_MSR2_13_TBC              0x038a
#define ID_TCUSTATE_MC2_MSR2_13_TBC              0x038b



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

//#define IDLABEL_TCUSTATEPAGE            0x0380

extern vector<CPage*>  g_PageVec;
class CTcuStatePageCoupled : public CPage
{
    DECLEAR_MESSAGE_MAP(CTcuStatePageCoupled)

public:
    CTcuStatePageCoupled();
protected:
    //TODO:declear call back function
    void OnUpdatePage();
    void OnInitPage();
    void OnCommonQuitButtonDown();
    void OnDownButtonDown();
    void OnDownButtonUp();
    void OnUpButtonDown();
    void OnUpButtonUp();
    void OnInit();
    unsigned int pageNo,formerPageNo;
};

#endif // CTCUSTATEPAGECOUPLED_H


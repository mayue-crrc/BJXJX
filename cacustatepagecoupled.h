#ifndef CACUSTATEPAGECOUPLED_H
#define CACUSTATEPAGECOUPLED_H
#include "cpage.h"
#include "databuffer.h"

#define ACU_MIN_PAGE 1
#define ACU_MAX_PAGE 2

#define IDIMAGE_ACUSTATE_TRAIN          0x0402

#define IDLABEL_ACUSTATE_2_2            0x0403
#define IDLABEL_ACUSTATE_3_2            0x0404
#define IDLABEL_ACUSTATE_4_2            0x0405
#define IDLABEL_ACUSTATE_5_2            0x0406
#define IDLABEL_ACUSTATE_6_2            0x0407
#define IDLABEL_ACUSTATE_7_2            0x0408
#define IDLABEL_ACUSTATE_8_2            0x0409
#define IDLABEL_ACUSTATE_9_2            0x040A
#define IDLABEL_ACUSTATE_10_2           0x040B
#define IDLABEL_ACUSTATE_11_2           0x0428
#define IDLABEL_ACUSTATE_12_2           0x0429
#define IDLABEL_ACUSTATE_13_2           0x042A
#define IDLABEL_ACUSTATE_14_2           0x042B

#define IDLABEL_ACUSTATE_2_3            0x040D
#define IDLABEL_ACUSTATE_3_3            0x040E
#define IDLABEL_ACUSTATE_4_3            0x040F
#define IDLABEL_ACUSTATE_5_3            0x0410
#define IDLABEL_ACUSTATE_6_3            0x0411
#define IDLABEL_ACUSTATE_7_3            0x0412
#define IDLABEL_ACUSTATE_8_3            0x0413
#define IDLABEL_ACUSTATE_9_3            0x0414
#define IDLABEL_ACUSTATE_10_3           0x0415
#define IDLABEL_ACUSTATE_11_3           0x0416
#define IDLABEL_ACUSTATE_12_3           0x042C
#define IDLABEL_ACUSTATE_13_3           0x042D
#define IDLABEL_ACUSTATE_14_3           0x042E

#define IDLABEL_ACUSTATE_2_1            0x0417
#define IDLABEL_ACUSTATE_3_1            0x0418
#define IDLABEL_ACUSTATE_4_1            0x0419
#define IDLABEL_ACUSTATE_5_1            0x041A
#define IDLABEL_ACUSTATE_6_1            0x041B
#define IDLABEL_ACUSTATE_7_1            0x041C
#define IDLABEL_ACUSTATE_8_1            0x041D
#define IDLABEL_ACUSTATE_9_1            0x041E
#define IDLABEL_ACUSTATE_10_1           0x041F
#define IDLABEL_ACUSTATE_11_1           0x0424
#define IDLABEL_ACUSTATE_12_1           0x0425
#define IDLABEL_ACUSTATE_13_1           0x0426
#define IDLABEL_ACUSTATE_14_1           0x0427

#define IDLABEL_ACUSTATE_TRAINNUM       0x0421
#define ID_ACUSTATE_COUPLECHANGE        0x04a0
//#define ID_ACUSTATE_PAGEDOWN            0x0422
//#define ID_ACUSTATE_PAGEUP              0x0423

///14-5-6 ADD COUPLED
#define IDLABEL_ACUSTATE_2_4            0x0430
#define IDLABEL_ACUSTATE_3_4            0x0431
#define IDLABEL_ACUSTATE_4_4            0x0432
#define IDLABEL_ACUSTATE_5_4            0x0433
#define IDLABEL_ACUSTATE_6_4            0x0434
#define IDLABEL_ACUSTATE_7_4            0x0435
#define IDLABEL_ACUSTATE_8_4            0x0436
#define IDLABEL_ACUSTATE_9_4            0x0437
#define IDLABEL_ACUSTATE_10_4           0x0438
#define IDLABEL_ACUSTATE_11_4           0x0439
#define IDLABEL_ACUSTATE_12_4           0x043A
#define IDLABEL_ACUSTATE_13_4           0x043B
#define IDLABEL_ACUSTATE_14_4           0x043C

#define IDLABEL_ACUSTATE_2_5            0x0440
#define IDLABEL_ACUSTATE_3_5            0x0441
#define IDLABEL_ACUSTATE_4_5            0x0442
#define IDLABEL_ACUSTATE_5_5            0x0443
#define IDLABEL_ACUSTATE_6_5            0x0444
#define IDLABEL_ACUSTATE_7_5            0x0445
#define IDLABEL_ACUSTATE_8_5            0x0446
#define IDLABEL_ACUSTATE_9_5            0x0447
#define IDLABEL_ACUSTATE_10_5           0x0448
#define IDLABEL_ACUSTATE_11_5           0x0449
#define IDLABEL_ACUSTATE_12_5           0x044A
#define IDLABEL_ACUSTATE_13_5           0x044B
#define IDLABEL_ACUSTATE_14_5           0x044C
//#define IDLABEL_ACUSTATEPAGE            0x044D

//extern vector<CPage*>  g_PageVec;
class CAcuStatePageCoupled : public CPage
{
    DECLEAR_MESSAGE_MAP(CAcuStatePageCoupled)

public:
    CAcuStatePageCoupled();
private:
    //TODO:declear call back function
    void OnUpdatePage();
    void OnCommonQuitButtonDown();
    void OnInitPage();
    void OnDownButtonDown();
    void OnDownButtonUp();
    void OnUpButtonDown();
    void OnUpButtonUp();
    unsigned int pageNo,formerPageNo;
};

#endif // CACUSTATEPAGECOUPLED_H


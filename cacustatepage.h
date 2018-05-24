#ifndef CACUSTATEPAGE_H
#define CACUSTATEPAGE_H
#include "databuffer.h"
#include "cpage.h"

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
#define ID_ACUSTATE_COUPLECHANGE        0x0430
//#define ID_ACUSTATE_PAGEDOWN            0x0422
//#define ID_ACUSTATE_PAGEUP              0x0423
//#define IDLABEL_ACUSTATEPAGE            0x0430
extern vector<CPage*>  g_PageVec;

class CAcuStatePage : public CPage
{
    DECLEAR_MESSAGE_MAP(CAcuStatePage)
public:
    CAcuStatePage();

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

#endif // CACUSTATEPAGE_H

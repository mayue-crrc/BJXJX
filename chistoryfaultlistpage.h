#ifndef CHISTORYFAULTLISTPAGE_H
#define CHISTORYFAULTLISTPAGE_H

#include "cpage.h"
#include "faultcommonprocess.h"

//button
//#define ID_PICHFL_BUTTON_CAR            0x1A01
#define ID_PICHFL_BUTTON_DEVICE         0x1A02
#define ID_PICHFL_BUTTON_GRADE          0x1A03
#define ID_PICHFL_BUTTON_START_TIME     0x1A04
#define ID_PICHFL_BUTTON_END_TIME       0x1A05
#define ID_PICHFL_BUTTON_DELETE_ALL     0x1A06
#define ID_PICHFL_BUTTON_DEFAULT        0x1A07
#define ID_PICHFL_BUTTON_UP             0x1A08
#define ID_PICHFL_BUTTON_DOWN           0x1A09
//label
//#define ID_PICHFL_LABEL_CAR            0x1A0A
#define ID_PICHFL_LABEL_DEVICE         0x1A0B
#define ID_PICHFL_LABEL_GRADE          0x1A0C
#define ID_PICHFL_LABEL_START_TIME     0x1A0D
#define ID_PICHFL_LABEL_END_TIME       0x1A0E

#define ID_PICHFL_LABEL_1_1 0x1A0F
#define ID_PICHFL_LABEL_1_2 0x1A10
#define ID_PICHFL_LABEL_1_3 0x1A11
#define ID_PICHFL_LABEL_1_4 0x1A12
#define ID_PICHFL_LABEL_1_5 0x1A13
#define ID_PICHFL_LABEL_2_1 0x1A14
#define ID_PICHFL_LABEL_2_2 0x1A15
#define ID_PICHFL_LABEL_2_3 0x1A16
#define ID_PICHFL_LABEL_2_4 0x1A17
#define ID_PICHFL_LABEL_2_5 0x1A18
#define ID_PICHFL_LABEL_3_1 0x1A19
#define ID_PICHFL_LABEL_3_2 0x1A1A
#define ID_PICHFL_LABEL_3_3 0x1A1B
#define ID_PICHFL_LABEL_3_4 0x1A1C
#define ID_PICHFL_LABEL_3_5 0x1A1D
#define ID_PICHFL_LABEL_4_1 0x1A1E
#define ID_PICHFL_LABEL_4_2 0x1A1F
#define ID_PICHFL_LABEL_4_3 0x1A20
#define ID_PICHFL_LABEL_4_4 0x1A21
#define ID_PICHFL_LABEL_4_5 0x1A22
#define ID_PICHFL_LABEL_5_1 0x1A23
#define ID_PICHFL_LABEL_5_2 0x1A24
#define ID_PICHFL_LABEL_5_3 0x1A25
#define ID_PICHFL_LABEL_5_4 0x1A26
#define ID_PICHFL_LABEL_5_5 0x1A27
#define ID_PICHFL_LABEL_6_1 0x1A28
#define ID_PICHFL_LABEL_6_2 0x1A29
#define ID_PICHFL_LABEL_6_3 0x1A2A
#define ID_PICHFL_LABEL_6_4 0x1A2B
#define ID_PICHFL_LABEL_6_5 0x1A2C
#define ID_PICHFL_LABEL_7_1 0x1A2D
#define ID_PICHFL_LABEL_7_2 0x1A2E
#define ID_PICHFL_LABEL_7_3 0x1A2F
#define ID_PICHFL_LABEL_7_4 0x1A30
#define ID_PICHFL_LABEL_7_5 0x1A31
#define ID_PICHFL_LABEL_8_1 0x1A32
#define ID_PICHFL_LABEL_8_2 0x1A33
#define ID_PICHFL_LABEL_8_3 0x1A34
#define ID_PICHFL_LABEL_8_4 0x1A35
#define ID_PICHFL_LABEL_8_5 0x1A36
#define ID_PICHFL_LABEL_9_1 0x1A37
#define ID_PICHFL_LABEL_9_2 0x1A38
#define ID_PICHFL_LABEL_9_3 0x1A39
#define ID_PICHFL_LABEL_9_4 0x1A3A
#define ID_PICHFL_LABEL_9_5 0x1A3B

#define ID_PICHFL_LABEL_PAGENUM 0x1A60
#define ID_PICHFL_LABEL_QUIT     0x1A61


class CHistoryFaultListPage : public CPage
{
    DECLEAR_MESSAGE_MAP(CHistoryFaultListPage)
public:
    CHistoryFaultListPage();
//    void SetCarType(QString car_text);
    void SetDeviceType(int device_type);
    void SetGradeType(int grade_type);
    void SetStartTime(QString str);
    void SetEndTime(QString str);

    ST_DATETIME m_starttime;
    ST_DATETIME m_endtime;
    int m_eligiblecount;
private:
    //TODO:declear call back function
    void OnInitPage();
    void OnUpdatePage();
    void OnShowPage();
    void OnCommonQuitButtonDown();
    void OnDropButtonUpDown();
    void OnDropButtonDownDown();
    void OnDropButtonUpUp();
    void OnDropButtonDownUp();
//    void OnCarDown();
    void OnDeviceDown();
    void OnGradeDown();
    void OnStartTimeDown();
    void OnEndTimeDown();
//  void OnQueryDown();
    void OnDefaultDown();
//    void OnCarUp();
    void OnDeviceUp();
    void OnGradeUp();
    void OnStartTimeUp();
    void OnEndTimeUp();
//  void OnQueryUp();
    void OnDefaultUp();
    void OnDeleteAllDown();
    void OnDeleteAllUp();

    void DrawLine(int line, int idx, ST_DATETIME datetime, quint16 carid);
    void ClearTable();
    bool ConditionFilter(int index);
    void GetFilterVal();
    void OnDetailClick1();
    void OnDetailClick2();
    void OnDetailClick3();
    void OnDetailClick4();
    void OnDetailClick5();
    void OnDetailClick6();
    void OnDetailClick7();
    void OnDetailClick8();
    void OnDetailClick9();
 };

#endif // CHISTORYFAULTLISTPAGE_H

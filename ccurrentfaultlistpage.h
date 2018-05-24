#ifndef CCURRENTFAULTLISTPAGE_H
#define CCURRENTFAULTLISTPAGE_H

#include "cpage.h"
#include "faultcommonprocess.h"

#define ID_PICCFL_BUTTON_UP             0x1901
#define ID_PICCFL_BUTTON_DOWN           0x1902

#define ID_PICCFL_LABEL_1_CAR           0x1903
#define ID_PICCFL_LABEL_1_CODE          0x1904
#define ID_PICCFL_LABEL_1_DATETIME      0x1905
#define ID_PICCFL_LABEL_1_GRADE         0x1906
#define ID_PICCFL_LABEL_1_NAME          0x1907
#define ID_PICCFL_LABEL_1_DEVICE        0x1908
#define ID_PICCFL_LABEL_1_POSITION      0x1909
#define ID_PICCFL_LABEL_1_CONFIRM       0x190A
#define ID_PICCFL_LABEL_2_CAR           0x190B
#define ID_PICCFL_LABEL_2_CODE          0x190C
#define ID_PICCFL_LABEL_2_DATETIME      0x190D
#define ID_PICCFL_LABEL_2_GRADE         0x190E
#define ID_PICCFL_LABEL_2_NAME          0x190F
#define ID_PICCFL_LABEL_2_DEVICE        0x1910
#define ID_PICCFL_LABEL_2_POSITION      0x1911
#define ID_PICCFL_LABEL_2_CONFIRM       0x1912
#define ID_PICCFL_LABEL_3_CAR           0x1913
#define ID_PICCFL_LABEL_3_CODE          0x1914
#define ID_PICCFL_LABEL_3_DATETIME      0x1915
#define ID_PICCFL_LABEL_3_GRADE         0x1916
#define ID_PICCFL_LABEL_3_NAME          0x1917
#define ID_PICCFL_LABEL_3_DEVICE        0x1918
#define ID_PICCFL_LABEL_3_POSITION      0x1919
#define ID_PICCFL_LABEL_3_CONFIRM       0x191A
#define ID_PICCFL_LABEL_4_CAR           0x191B
#define ID_PICCFL_LABEL_4_CODE          0x191C
#define ID_PICCFL_LABEL_4_DATETIME      0x191D
#define ID_PICCFL_LABEL_4_GRADE         0x191E
#define ID_PICCFL_LABEL_4_NAME          0x191F
#define ID_PICCFL_LABEL_4_DEVICE        0x1920
#define ID_PICCFL_LABEL_4_POSITION      0x1921
#define ID_PICCFL_LABEL_4_CONFIRM       0x1922
#define ID_PICCFL_LABEL_5_CAR           0x1923
#define ID_PICCFL_LABEL_5_CODE          0x1924
#define ID_PICCFL_LABEL_5_DATETIME      0x1925
#define ID_PICCFL_LABEL_5_GRADE         0x1926
#define ID_PICCFL_LABEL_5_NAME          0x1927
#define ID_PICCFL_LABEL_5_DEVICE        0x1928
#define ID_PICCFL_LABEL_5_POSITION      0x1929
#define ID_PICCFL_LABEL_5_CONFIRM       0x192A
#define ID_PICCFL_LABEL_6_CAR           0x192B
#define ID_PICCFL_LABEL_6_CODE          0x192C
#define ID_PICCFL_LABEL_6_DATETIME      0x192D
#define ID_PICCFL_LABEL_6_GRADE         0x192E
#define ID_PICCFL_LABEL_6_NAME          0x192F
#define ID_PICCFL_LABEL_6_DEVICE        0x1930
#define ID_PICCFL_LABEL_6_POSITION      0x1931
#define ID_PICCFL_LABEL_6_CONFIRM       0x1932
#define ID_PICCFL_LABEL_7_CAR           0x1933
#define ID_PICCFL_LABEL_7_CODE          0x1934
#define ID_PICCFL_LABEL_7_DATETIME      0x1935
#define ID_PICCFL_LABEL_7_GRADE         0x1936
#define ID_PICCFL_LABEL_7_NAME          0x1937
#define ID_PICCFL_LABEL_7_DEVICE        0x1938
#define ID_PICCFL_LABEL_7_POSITION      0x1939
#define ID_PICCFL_LABEL_7_CONFIRM       0x193A
#define ID_PICCFL_LABEL_8_CAR           0x193B
#define ID_PICCFL_LABEL_8_CODE          0x193C
#define ID_PICCFL_LABEL_8_DATETIME      0x193D
#define ID_PICCFL_LABEL_8_GRADE         0x193E
#define ID_PICCFL_LABEL_8_NAME          0x193F
#define ID_PICCFL_LABEL_8_DEVICE        0x1940
#define ID_PICCFL_LABEL_8_POSITION      0x1941
#define ID_PICCFL_LABEL_8_CONFIRM       0x1942
#define ID_PICCFL_LABEL_9_CAR           0x1943
#define ID_PICCFL_LABEL_9_CODE          0x1944
#define ID_PICCFL_LABEL_9_DATETIME      0x1945
#define ID_PICCFL_LABEL_9_GRADE         0x1946
#define ID_PICCFL_LABEL_9_NAME          0x1947
#define ID_PICCFL_LABEL_9_DEVICE        0x1948
#define ID_PICCFL_LABEL_9_POSITION      0x1949
#define ID_PICCFL_LABEL_9_CONFIRM       0x194A

//#define ID_PICCFL_BUTTON_CAR              0x194B
#define ID_PICCFL_BUTTON_DEVICE             0x194C
#define ID_PICCFL_BUTTON_GRADE              0x194D
#define ID_PICCFL_BUTTON_START_TIME         0x194E
#define ID_PICCFL_BUTTON_END_TIME           0x194F
#define ID_PICCFL_BUTTON_DEFAULT            0x1950

//#define ID_PICCFL_LABEL_CAR               0x1951
#define ID_PICCFL_LABEL_DEVICE              0x1952
#define ID_PICCFL_LABEL_GRADE               0x1953
#define ID_PICCFL_LABEL_START_TIME          0x1954
#define ID_PICCFL_LABEL_END_TIME            0x1955

#define ID_PICCFL_LABEL_PAGENUM             0x1960
#define ID_PICCFL_LABEL_QUIT                0x1961


class CCurrentFaultListPage : public CPage
{
    DECLEAR_MESSAGE_MAP(CCurrentFaultListPage)
public:
    CCurrentFaultListPage();
//    void SetCarType(QString car_text);
    void SetDeviceType(int device_type);
    void SetGradeType(int grade_type);
    void SetStartTime(QString str);
    void SetEndTime(QString str);
    void ResetAllLabelState();

    ST_DATETIME m_starttime;
    ST_DATETIME m_endtime;
    int m_eligiblecount;
private:
    //TODO:declear call back function
    void OnInitPage();
    void OnShowPage();
    void OnUpdatePage();
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
    void OnDefaultDown();
//    void OnCarUp();
    void OnDeviceUp();
    void OnGradeUp();
    void OnStartTimeUp();
    void OnEndTimeUp();
    void OnDefaultUp();

    void DrawLine(int line, int idx);
    void ClearTable();

    bool ConditionFilter(int index);
    void GetFilterVal();

    void OnConfirm1Down();
    void OnConfirm2Down();
    void OnConfirm3Down();
    void OnConfirm4Down();
    void OnConfirm5Down();
    void OnConfirm6Down();
    void OnConfirm7Down();
    void OnConfirm8Down();
    void OnConfirm9Down();
    void OnConfirm1Up();
    void OnConfirm2Up();
    void OnConfirm3Up();
    void OnConfirm4Up();
    void OnConfirm5Up();
    void OnConfirm6Up();
    void OnConfirm7Up();
    void OnConfirm8Up();
    void OnConfirm9Up();
    void SetLineClick(int linenum, bool flg);
    void OnDetail1Down();
    void OnDetail2Down();
    void OnDetail3Down();
    void OnDetail4Down();
    void OnDetail5Down();
    void OnDetail6Down();
    void OnDetail7Down();
    void OnDetail8Down();
    void OnDetail9Down();
    void OnDetail1Up();
    void OnDetail2Up();
    void OnDetail3Up();
    void OnDetail4Up();
    void OnDetail5Up();
    void OnDetail6Up();
    void OnDetail7Up();
    void OnDetail8Up();
    void OnDetail9Up();

};

#endif // CCURRENTFAULTLISTPAGE_H

#ifndef FAULTCOMMONPROCESS_H
#define FAULTCOMMONPROCESS_H

#include <qstring.h>
#include <qdatetime.h>
#include "cglobal.h"

#define D_HISTORY_FAULT_LIST_MAX_CNT    5000

typedef struct datetime {
    int year;
    BYTE month;
    BYTE day;
    BYTE hour;
    BYTE minute;
    BYTE second;
}ST_DATETIME;

typedef struct historyfaultinfo {
    int romIdx;
    quint16 carID;
    int nIDType; //0: driverID 1:maintainerID
    long lID;
    ST_DATETIME datetime;
} ST_HISTORY_FAULT_INFO;

typedef struct historyfaultslist {
    int cnt;
    int curIdx;
    ST_HISTORY_FAULT_INFO list[D_HISTORY_FAULT_LIST_MAX_CNT];
}ST_HISTORY_FAULTS_LIST;

typedef struct fault_rom_data
{
    int offset;
    WORD bit;
    BYTE car;
    int  code;
    BYTE grade;
    BYTE device;
    BYTE position;
    int deviceNo;
    bool flg;
    bool confirm;
    bool confirm_flg;
    QString name;
    QString advice;

    fault_rom_data* operator ->()
    {
        return this;
    }

} FAULTS_ROM_DATA;

typedef struct faults_list_filter {
    BYTE device;
    BYTE grade;
    ST_DATETIME start_time;
    ST_DATETIME end_time;
    QString car;

} ST_FAULTS_LIST_FILTER;

extern ST_FAULTS_LIST_FILTER g_historyFaultsListFilter;
extern ST_FAULTS_LIST_FILTER g_currentFaultsListFilter;

#define D_HISTORY_FILTER_OPT_ALL 0

#define D_CAR_1     1
#define D_CAR_2     2

#define D_FAULT_GRADE_1     1
#define D_FAULT_GRADE_2     2
#define D_FAULT_GRADE_3     3
#define D_FAULT_GRADE_4     4

// device
#define D_DEVICE_TRAIN      1
#define D_DEVICE_VCU        2
#define D_DEVICE_TCU        3
#define D_DEVICE_BCU        4
#define D_DEVICE_ACU        5
#define D_DEVICE_DOOR       6
#define D_DEVICE_HVAC       7
#define D_DEVICE_PIS        8
#define D_DEVICE_DCDC       9
#define D_DEVICE_LCU      10
#define D_DEVICE_IDU       11
#define D_DEVICE_COM      12
#define D_DEVICE_COMOT      13    //add the othertrain 111port fault
// position
#define D_POSITION_MC1     0
#define D_POSITION_MC2     1
#define D_POSITION_T       2
#define D_POSITION_TRAIN   3
#define D_POSITION_MA     4
#define D_POSITION_MB     5
#define D_POSITION_RA     6
#define D_POSITION_RB     7
#define D_POSITION_P      8



// deviceNo
#define D_DEVICENO_RIOM1        1
#define D_DEVICENO_RIOM2        2
#define D_DEVICENO_TCU1         3
#define D_DEVICENO_TCU2         4
#define D_DEVICENO_ACU1         5
#define D_DEVICENO_ACU2         6
#define D_DEVICENO_HVAC1        7
#define D_DEVICENO_HVAC2        8
#define D_DEVICENO_DOOR1        9
#define D_DEVICENO_DOOR2        10
#define D_DEVICENO_DOOR3        11
#define D_DEVICENO_DOOR4        12
#define D_DEVICENO_DOOR5        13
#define D_DEVICENO_DOOR6        14
#define D_DEVICENO_DOOR7        15
#define D_DEVICENO_DOOR8        16
#define D_DEVICENO_PIS          17
#define D_DEVICENO_DCDC1        18
#define D_DEVICENO_DCDC2        19
#define D_DEVICENO_BCU          20
#define D_DEVICENO_TRAIN        21
#define D_DEVICENO_CCU          22
#define D_DEVICENO_LCU          23
#define D_DEVICENO_IDU          24
#define D_DEVICENO_GTW          25
#define D_DEVICENO_ERM          26
#define D_DEVICENO_DDU          27
#define D_DEVICENO_TW           28
#define D_DEVICENO_TCU          29
#define D_DEVICENO_SCU          30
#define D_DEVICENO_TCU3         31
#define D_DEVICENO_TCU4         32
#define D_DEVICENO_PA           33
#define D_DEVICENO_PIDS         34
#define D_DEVICENO_CTTW         35
#define D_DEVICENO_DOOR         36

// speed limit
#define D_SPEED_LIMIT_STOP      0
#define D_SPEED_LIMIT_3KM       1
#define D_SPEED_LIMIT_10KM      2
#define D_SPEED_LIMIT_20KM      3
#define D_SPEED_LIMIT_40KM      4
#define D_SPEED_LIMIT_60KM      5
#define D_SPEED_LIMIT_NONE      6


// Anti-shaking counter
#define D_ANTI_SHAKING_CNT      3


// FaultsScanning() return value
#define D_FAULTS_SCANNING_CODE15    0x0001
#define D_FAULTS_SCANNING_CODE17    0x0002
#define D_FAULTS_SCANNING_CODE18    0x0004
#define D_FAULTS_SCANNING_CODE19    0x0008
#define D_FAULTS_SCANNING_CODE21    0x0010
#define D_FAULTS_SCANNING_CODE22    0x0020
#define D_FAULTS_SCANNING_CODE24    0x0040
#define D_FAULTS_SCANNING_CODE25    0x0080
#define D_FAULTS_SCANNING_CODE26    0x0100
#define D_FAULTS_SCANNING_CODE27    0x0200
#define D_FAULTS_SCANNING_CODE28    0x0400
#define D_FAULTS_SCANNING_CODE29    0x0800


enum {
    CNR_HFLP_CAR_TYPE_ONE,
    CNR_HFLP_CAR_TYPE_TWO,
    CNR_HFLP_CAR_TYPE_THREE,
    CNR_HFLP_CAR_TYPE_ALL,
};

enum {
    CNR_HFLP_DEVICE_TYPE_TCU,
    CNR_HFLP_DEVICE_TYPE_HVAC,
    CNR_HFLP_DEVICE_TYPE_ACU,
    CNR_HFLP_DEVICE_TYPE_DOOR,
    CNR_HFLP_DEVICE_TYPE_LCU,//MODIFY BY COM
    CNR_HFLP_DEVICE_TYPE_PIS,
    CNR_HFLP_DEVICE_TYPE_BCU,
    CNR_HFLP_DEVICE_TYPE_DCDC,
    CNR_HFLP_DEVICE_TYPE_TCMS,//MODIFY BY TRAIN
    CNR_HFLP_DEVICE_TYPE_ALL,
};

enum {
    CNR_HFLP_GRADE_TYPE_ONE,
    CNR_HFLP_GRADE_TYPE_TWO,
    CNR_HFLP_GRADE_TYPE_THREE,
    CNR_HFLP_GRADE_TYPE_FOUR,
    CNR_HFLP_GRADE_TYPE_ALL,
};

enum {
    E_INVOKE_HISTORY = 0,
    E_INVOKE_CURRENT
};



extern ST_HISTORY_FAULTS_LIST g_historyFaultsList;

extern FAULTS_ROM_DATA g_faultsrom[];
extern int g_faultsRomLen;
extern int g_history_click_idx;
extern int g_current_click_idx;
extern QString g_current_click_datetime;
extern int g_invoke_type;
extern int g_unconfirmed_faults_num;

extern bool FaultsVerdict(FAULTS_ROM_DATA *pdata);
extern int FaultsScanning();
extern void HistoryFaultsListInit();

extern QString GetDeviceStr(int val);
extern QString GetPositionStr(int val);
extern QString GetDateTimeStr(int idx);
extern QString GetCarCodeString(int carnum);
extern QString GetDeviceNoStr(int val);


extern int CompareDateTime(ST_DATETIME datetime1, ST_DATETIME datetime2);

extern BYTE GetDeviceValFromStr(QString &str);
extern BYTE GetGradeValFromStr(QString &str);
extern BYTE GetPositionValFromStr(QString &str);

extern int GetHistoryFaultIndexByNum(int num);
extern QString SaveFaultsHistory();
extern void ReadFaultsHistory();

QString HistoryFaultsOutput();
void HistoryFaultsLoad();

extern void HistoryListCollation(int idx);

extern BYTE g_antiShakingVect0[D_HISTORY_FAULT_LIST_MAX_CNT];
extern BYTE g_antiShakingVect1[D_HISTORY_FAULT_LIST_MAX_CNT];
extern ST_DATETIME g_current_faults_datetime_array[D_HISTORY_FAULT_LIST_MAX_CNT];

extern bool AntiShakingProcess(int idx, bool flg);
extern void ClearAllCurrentFaults();
extern void ClearAllHistoryFaults();
extern bool SkipScanning(FAULTS_ROM_DATA *pdata);

extern int FindFaultsNameTableIndex(int code);
extern void deleteUnexistFaults();

#endif // FAULTCOMMONPROCESS_H

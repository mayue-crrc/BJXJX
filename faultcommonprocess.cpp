
#include "faultcommonprocess.h"
#include "receivedata.h"
#include "databuffer.h"
#include "cglobal.h"
#include <fstream>
#include <qapplication.h>
#include <qdebug.h>
#include <qfile.h>
#include <qsettings.h>

ST_HISTORY_FAULTS_LIST g_historyFaultsList;
ST_FAULTS_LIST_FILTER g_historyFaultsListFilter;
ST_FAULTS_LIST_FILTER g_currentFaultsListFilter;
int g_history_click_idx = -1;
int g_current_click_idx = -1;
QString g_current_click_datetime;
int g_invoke_type = E_INVOKE_HISTORY;
int g_unconfirmed_faults_num = 0;

ST_DATETIME g_current_faults_datetime_array[D_HISTORY_FAULT_LIST_MAX_CNT];

FAULTS_ROM_DATA g_faultsrom[]={
 //  byte, bit,  car,     code,     grade,           device,        position,      deviceNo,           flag,  confirm, name,                             advice
    { 3000, bit0, D_CAR_1, 0x1101, D_FAULT_GRADE_1,  D_DEVICE_COM, D_POSITION_MA, D_DEVICENO_TCU1,    false, false,false,
      QSTR("MA_TCU1离线"),
      QSTR("检查MA_TCU1设备及通信线路。") },
    { 3000, bit2, D_CAR_1, 0x1102,  D_FAULT_GRADE_1,  D_DEVICE_COM, D_POSITION_MA, D_DEVICENO_TCU2,    false, false,false,
      QSTR("MA_TCU2离线"),
      QSTR("检查MA_TCU2设备及通信线路。") },
    { 3000, bit4, D_CAR_1, 0x1103, D_FAULT_GRADE_1,  D_DEVICE_COM, D_POSITION_MB, D_DEVICENO_TCU1,    false, false,false,
      QSTR("MB_TCU1离线"),
      QSTR("检查MB_TCU1设备及通信线路。") },
    { 3000, bit3, D_CAR_1,  0x1104, D_FAULT_GRADE_1,  D_DEVICE_COM, D_POSITION_MB, D_DEVICENO_TCU2,    false, false,false,
      QSTR("MB_TCU2离线"),
      QSTR("检查MB_TCU2设备及通信线路。") },
    { 3000, bit2, D_CAR_1, 0x1105, D_FAULT_GRADE_1,  D_DEVICE_COM, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
      QSTR("MA_BCU离线"),
      QSTR("检查MA_BCU设备及通信线路。") },
    { 3000, bit4, D_CAR_1, 0x1106, D_FAULT_GRADE_1,  D_DEVICE_COM, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
      QSTR("MB_BCU离线"),
      QSTR("检查MB_BCU设备及通信线路。") },
    { 3000, bit0, D_CAR_1, 0x1107, D_FAULT_GRADE_1,  D_DEVICE_COM, D_POSITION_P, D_DEVICENO_BCU,    false, false,false,
      QSTR("P_BCU离线"),
      QSTR("检查P_BCU设备及通信线路。") },
    { 3000, bit0, D_CAR_1, 0x1108, D_FAULT_GRADE_1,  D_DEVICE_COM, D_POSITION_MA, D_DEVICENO_CCU,    false, false,false,
      QSTR("MA_CCU32离线"),
      QSTR("检查MA_CCU32设备及通信线路。") },
    { 3000, bit2, D_CAR_1, 0x1109, D_FAULT_GRADE_1,  D_DEVICE_COM, D_POSITION_MA, D_DEVICENO_LCU,    false, false,false,
      QSTR("MA_LCU离线"),
      QSTR("检查MA_LCU设备及通信线路。") },
    { 3000, bit4, D_CAR_1, 0x110A, D_FAULT_GRADE_1,  D_DEVICE_COM, D_POSITION_RA, D_DEVICENO_LCU,    false, false,false,
      QSTR("RA_LCU离线"),
      QSTR("检查RA_LCU设备及通信线路。") },
    { 3000, bitE, D_CAR_1, 0x110B, D_FAULT_GRADE_1,  D_DEVICE_COM, D_POSITION_P, D_DEVICENO_LCU,    false, false,false,
      QSTR("P_LCU离线"),
      QSTR("检查P_LCU设备及通信线路。") },
    { 3000, bitC, D_CAR_1, 0x110C, D_FAULT_GRADE_1,  D_DEVICE_COM, D_POSITION_RB, D_DEVICENO_LCU,    false, false,false,
      QSTR("RB_LCU离线"),
      QSTR("检查RB_LCU设备及通信线路。") },
    { 3000, bitA, D_CAR_1, 0x110D, D_FAULT_GRADE_1,  D_DEVICE_COM, D_POSITION_MB, D_DEVICENO_LCU,    false, false,false,
      QSTR("MB_LCU离线"),
      QSTR("检查MB_LCU设备及通信线路。") },
    { 3000, bit8, D_CAR_1, 0x110E, D_FAULT_GRADE_1,  D_DEVICE_COM, D_POSITION_MB, D_DEVICENO_CCU,    false, false,false,
      QSTR("MB_CCU32离线"),
      QSTR("检查MB_CCU32设备及通信线路。") },
    { 3000, bit0, D_CAR_1, 0x110F, D_FAULT_GRADE_1,  D_DEVICE_COM, D_POSITION_MA, D_DEVICENO_IDU,    false, false,false,
      QSTR("MA_IDU离线"),
      QSTR("检查MA_IDU设备及通信线路。") },
    { 3000, bit2, D_CAR_1, 0x1110, D_FAULT_GRADE_1,  D_DEVICE_COM, D_POSITION_MB, D_DEVICENO_IDU,    false, false,false,
      QSTR("MB_IDU离线"),
      QSTR("检查MB_IDU设备及通信线路。") },
    { 3000, bit6, D_CAR_1, 0x1111, D_FAULT_GRADE_1,  D_DEVICE_COM, D_POSITION_MA, D_DEVICENO_GTW,    false, false,false,
      QSTR("MA_GTW离线"),
      QSTR("检查MA_GTW设备及通信线路。") },
    { 3000, bit0, D_CAR_1, 0x1112, D_FAULT_GRADE_1,  D_DEVICE_COM, D_POSITION_MB, D_DEVICENO_ERM,    false, false,false,
      QSTR("MB_ERM离线"),
      QSTR("检查MB_ERM设备及通信线路。") },
    { 3000, bit8, D_CAR_1, 0x1213, D_FAULT_GRADE_2,  D_DEVICE_COM, D_POSITION_MA, D_DEVICENO_PIS,    false, false,false,
      QSTR("MA_PIDS离线"),
          QSTR("检查MA_PIDS设备及通信线路。") },
    { 3000, bitC, D_CAR_1, 0x1214, D_FAULT_GRADE_2,  D_DEVICE_COM, D_POSITION_MA, D_DEVICENO_PIS,    false, false,false,
      QSTR("MA_PA离线"),
      QSTR("检查MA_PA设备及通信线路。") },
    { 3000, bitA, D_CAR_1, 0x1215, D_FAULT_GRADE_2,  D_DEVICE_COM, D_POSITION_MB, D_DEVICENO_PIS,    false, false,false,
      QSTR("MB_PIDS离线"),
      QSTR("检查MB_PIDS设备及通信线路。") },
    { 3000, bitE, D_CAR_1, 0x1216, D_FAULT_GRADE_2,  D_DEVICE_COM, D_POSITION_MB, D_DEVICENO_PIS,    false, false,false,
      QSTR("MB_PA离线"),
      QSTR("检查MB_PA设备及通信线路。") },
    { 3000, bit0, D_CAR_1, 0x1217, D_FAULT_GRADE_2,  D_DEVICE_COM, D_POSITION_MA, D_DEVICENO_IDU,    false, false,false,
      QSTR("MA_DCU离线"),
      QSTR("检查MA_DCU设备及通信线路。") },
    { 3000, bit8, D_CAR_1, 0x1218, D_FAULT_GRADE_2,  D_DEVICE_COM, D_POSITION_MB, D_DEVICENO_IDU,    false, false,false,
      QSTR("MB_DCU离线"),
      QSTR("检查MB_DCU设备及通信线路。") },
    { 3000, bit8, D_CAR_1, 0x1219, D_FAULT_GRADE_2,  D_DEVICE_COM, D_POSITION_RA, D_DEVICENO_IDU,    false, false,false,
      QSTR("RA_DCU离线"),
      QSTR("检查RA_DCU设备及通信线路。") },
    { 3000, bit0, D_CAR_1, 0x121A, D_FAULT_GRADE_2,  D_DEVICE_COM, D_POSITION_RB, D_DEVICENO_IDU,    false, false,false,
      QSTR("RB_DCU离线"),
      QSTR("检查RB_DCU设备及通信线路。") },
    { 3000, bitE, D_CAR_1, 0x121B, D_FAULT_GRADE_2,  D_DEVICE_COM, D_POSITION_RA, D_DEVICENO_HVAC1,    false, false,false,
      QSTR("RA_HVAC离线"),
      QSTR("检查RA_HVAC设备及通信线路。") },
    { 3000, bit6, D_CAR_1, 0x121C, D_FAULT_GRADE_2,  D_DEVICE_COM, D_POSITION_RB, D_DEVICENO_HVAC2,    false, false,false,
      QSTR("RB_HVAC离线"),
      QSTR("检查RB_HVAC设备及通信线路。") },
    { 3000, bit1, D_CAR_1, 0x2101, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_CCU,    false, false,false,
      QSTR("CCU_MA 大故障"),
      QSTR("检查CCU_MA断路器是否闭合。") },
    { 3000, bit3, D_CAR_1, 0x2102, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_LCU,    false, false,false,
      QSTR("LCU_MA主 大故障"),
      QSTR("检查LCU_MA主 断路器是否闭合。") },
    { 3000, bit5, D_CAR_1, 0x2103, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_RA, D_DEVICENO_LCU,    false, false,false,
      QSTR("LCU_RA大故障"),
      QSTR("检查LCU_RA断路器是否闭合。") },
    { 3000, bitB, D_CAR_1, 0x2104, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_LCU,    false, false,false,
      QSTR("LCU_MB主 大故障"),
      QSTR("检查LCU_MB主 断路器是否闭合。") },
    { 3000, bitD, D_CAR_1, 0x2105, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_RB, D_DEVICENO_LCU,    false, false,false,
      QSTR("LCU_RB大故障"),
      QSTR("检查LCU_RB断路器是否闭合。") },
    { 3000, bitF, D_CAR_1, 0x2106, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_P, D_DEVICENO_LCU,    false, false,false,
      QSTR("LCU_P大故障"),
          QSTR("检查LCU_P断路器是否闭合。") },
    { 3000, bit7, D_CAR_1, 0x2107, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_GTW,    false, false,false,
      QSTR("重联通信网关GTW大故障"),
      QSTR("检查GTW_MA断路器是否闭合。") },
    //****** add other train fault form
    { 3000, bit0, D_CAR_2, 0x1101, D_FAULT_GRADE_1,  D_DEVICE_COM, D_POSITION_MA, D_DEVICENO_TCU1,    false, false,false,
      QSTR("MA_TCU1离线"),
      QSTR("检查MA_TCU1设备及通信线路。") },
    { 3000, bit2, D_CAR_2, 0x1102,  D_FAULT_GRADE_1,  D_DEVICE_COM, D_POSITION_MA, D_DEVICENO_TCU2,    false, false,false,
      QSTR("MA_TCU2离线"),
      QSTR("检查MA_TCU2设备及通信线路。") },
    { 3000, bit4, D_CAR_2, 0x1103, D_FAULT_GRADE_1,  D_DEVICE_COM, D_POSITION_MB, D_DEVICENO_TCU1,    false, false,false,
      QSTR("MB_TCU1离线"),
      QSTR("检查MB_TCU1设备及通信线路。") },
    { 3000, bit3, D_CAR_2,  0x1104, D_FAULT_GRADE_1,  D_DEVICE_COM, D_POSITION_MB, D_DEVICENO_TCU2,    false, false,false,
      QSTR("MB_TCU2离线"),
      QSTR("检查MB_TCU2设备及通信线路。") },
    { 3000, bit2, D_CAR_2, 0x1105, D_FAULT_GRADE_1,  D_DEVICE_COM, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
      QSTR("MA_BCU离线"),
      QSTR("检查MA_BCU设备及通信线路。") },
    { 3000, bit4, D_CAR_2, 0x1106, D_FAULT_GRADE_1,  D_DEVICE_COM, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
      QSTR("MB_BCU离线"),
      QSTR("检查MB_BCU设备及通信线路。") },
    { 3000, bit0, D_CAR_2, 0x1107, D_FAULT_GRADE_1,  D_DEVICE_COM, D_POSITION_P, D_DEVICENO_BCU,    false, false,false,
      QSTR("P_BCU离线"),
      QSTR("检查P_BCU设备及通信线路。") },
    { 3000, bit0, D_CAR_2, 0x1108, D_FAULT_GRADE_1,  D_DEVICE_COM, D_POSITION_MA, D_DEVICENO_CCU,    false, false,false,
      QSTR("MA_CCU32离线"),
      QSTR("检查MA_CCU32设备及通信线路。") },
    { 3000, bit2, D_CAR_2, 0x1109, D_FAULT_GRADE_1,  D_DEVICE_COM, D_POSITION_MA, D_DEVICENO_LCU,    false, false,false,
      QSTR("MA_LCU离线"),
      QSTR("检查MA_LCU设备及通信线路。") },
    { 3000, bit4, D_CAR_2, 0x110A, D_FAULT_GRADE_1,  D_DEVICE_COM, D_POSITION_RA, D_DEVICENO_LCU,    false, false,false,
      QSTR("RA_LCU离线"),
      QSTR("检查RA_LCU设备及通信线路。") },
    { 3000, bitE, D_CAR_2, 0x110B, D_FAULT_GRADE_1,  D_DEVICE_COM, D_POSITION_P, D_DEVICENO_LCU,    false, false,false,
      QSTR("P_LCU离线"),
      QSTR("检查P_LCU设备及通信线路。") },
    { 3000, bitC, D_CAR_2, 0x110C, D_FAULT_GRADE_1,  D_DEVICE_COM, D_POSITION_RB, D_DEVICENO_LCU,    false, false,false,
      QSTR("RB_LCU离线"),
      QSTR("检查RB_LCU设备及通信线路。") },
    { 3000, bitA, D_CAR_2, 0x110D, D_FAULT_GRADE_1,  D_DEVICE_COM, D_POSITION_MB, D_DEVICENO_LCU,    false, false,false,
      QSTR("MB_LCU离线"),
      QSTR("检查MB_LCU设备及通信线路。") },
    { 3000, bit8, D_CAR_2, 0x110E, D_FAULT_GRADE_1,  D_DEVICE_COM, D_POSITION_MB, D_DEVICENO_CCU,    false, false,false,
      QSTR("MB_CCU32离线"),
      QSTR("检查MB_CCU32设备及通信线路。") },
    { 3000, bit0, D_CAR_2, 0x110F, D_FAULT_GRADE_1,  D_DEVICE_COM, D_POSITION_MA, D_DEVICENO_IDU,    false, false,false,
      QSTR("MA_IDU离线"),
      QSTR("检查MA_IDU设备及通信线路。") },
    { 3000, bit2, D_CAR_2, 0x1110, D_FAULT_GRADE_1,  D_DEVICE_COM, D_POSITION_MB, D_DEVICENO_IDU,    false, false,false,
      QSTR("MB_IDU离线"),
      QSTR("检查MB_IDU设备及通信线路。") },
    { 3000, bit6, D_CAR_2, 0x1111, D_FAULT_GRADE_1,  D_DEVICE_COM, D_POSITION_MA, D_DEVICENO_GTW,    false, false,false,
      QSTR("MA_GTW离线"),
      QSTR("检查MA_GTW设备及通信线路。") },
    { 3000, bit0, D_CAR_2, 0x1112, D_FAULT_GRADE_1,  D_DEVICE_COM, D_POSITION_MB, D_DEVICENO_ERM,    false, false,false,
      QSTR("MB_ERM离线"),
      QSTR("检查MB_ERM设备及通信线路。") },
    { 3000, bit8, D_CAR_2, 0x1213, D_FAULT_GRADE_2,  D_DEVICE_COM, D_POSITION_MA, D_DEVICENO_PIS,    false, false,false,
      QSTR("MA_PIDS离线"),
      QSTR("检查MA_PIDS设备及通信线路。") },
    { 3000, bitC, D_CAR_2, 0x1214, D_FAULT_GRADE_2,  D_DEVICE_COM, D_POSITION_MA, D_DEVICENO_PIS,    false, false,false,
      QSTR("MA_PA离线"),
      QSTR("检查MA_PA设备及通信线路。") },
    { 3000, bitA, D_CAR_2, 0x1215, D_FAULT_GRADE_2,  D_DEVICE_COM, D_POSITION_MB, D_DEVICENO_PIS,    false, false,false,
      QSTR("MB_PIDS离线"),
      QSTR("检查MB_PIDS设备及通信线路。") },
    { 3000, bitE, D_CAR_2, 0x1216, D_FAULT_GRADE_2,  D_DEVICE_COM, D_POSITION_MB, D_DEVICENO_PIS,    false, false,false,
      QSTR("MB_PA离线"),
      QSTR("检查MB_PA设备及通信线路。") },
    { 3000, bit0, D_CAR_2, 0x1217, D_FAULT_GRADE_2,  D_DEVICE_COM, D_POSITION_MA, D_DEVICENO_IDU,    false, false,false,
      QSTR("MA_DCU离线"),
      QSTR("检查MA_DCU设备及通信线路。") },
    { 3000, bit8, D_CAR_2, 0x1218, D_FAULT_GRADE_2,  D_DEVICE_COM, D_POSITION_MB, D_DEVICENO_IDU,    false, false,false,
      QSTR("MB_DCU离线"),
      QSTR("检查MB_DCU设备及通信线路。") },
    { 3000, bit8, D_CAR_2, 0x1219, D_FAULT_GRADE_2,  D_DEVICE_COM, D_POSITION_RA, D_DEVICENO_IDU,    false, false,false,
      QSTR("RA_DCU离线"),
      QSTR("检查RA_DCU设备及通信线路。") },
    { 3000, bit0, D_CAR_2, 0x121A, D_FAULT_GRADE_2,  D_DEVICE_COM, D_POSITION_RB, D_DEVICENO_IDU,    false, false,false,
      QSTR("RB_DCU离线"),
      QSTR("检查RB_DCU设备及通信线路。") },
    { 3000, bitE, D_CAR_2, 0x121B, D_FAULT_GRADE_2,  D_DEVICE_COM, D_POSITION_RA, D_DEVICENO_HVAC1,    false, false,false,
      QSTR("RA_HVAC离线"),
      QSTR("检查RA_HVAC设备及通信线路。") },
    { 3000, bit6, D_CAR_2, 0x121C, D_FAULT_GRADE_2,  D_DEVICE_COM, D_POSITION_RB, D_DEVICENO_HVAC2,    false, false,false,
      QSTR("RB_HVAC离线"),
      QSTR("检查RB_HVAC设备及通信线路。") },
    { 3000, bit1, D_CAR_2, 0x2101, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_CCU,    false, false,false,
      QSTR("CCU_MA 大故障"),
      QSTR("检查CCU_MA断路器是否闭合。") },
    { 3000, bit3, D_CAR_2, 0x2102, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_LCU,    false, false,false,
      QSTR("LCU_MA主 大故障"),
      QSTR("检查LCU_MA主 断路器是否闭合。") },
    { 3000, bit5, D_CAR_2, 0x2103, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_RA, D_DEVICENO_LCU,    false, false,false,
      QSTR("LCU_RA大故障"),
      QSTR("检查LCU_RA断路器是否闭合。") },
    { 3000, bitB, D_CAR_2, 0x2104, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_LCU,    false, false,false,
      QSTR("LCU_MB主 大故障"),
      QSTR("检查LCU_MB主 断路器是否闭合。") },
    { 3000, bitD, D_CAR_2, 0x2105, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_RB, D_DEVICENO_LCU,    false, false,false,
      QSTR("LCU_RB大故障"),
      QSTR("检查LCU_RB断路器是否闭合。") },
    { 3000, bitF, D_CAR_2, 0x2106, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_P, D_DEVICENO_LCU,    false, false,false,
      QSTR("LCU_P大故障"),
      QSTR("检查LCU_P断路器是否闭合。") },
    { 3000, bit7, D_CAR_2, 0x2107, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_GTW,    false, false,false,
      QSTR("重联通信网关GTW大故障"),
      QSTR("检查GTW_MA断路器是否闭合。") },
    // **************
    // ************** add port 111 subsystem fault (A2 type data)
    { 3000, bit7, D_CAR_1, 0xF101, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_CTTW,    false, false,false,
      QSTR("TCU1大故障"),
      QSTR("--") },
    { 3000, bit7, D_CAR_1, 0xF102, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_CTTW,    false, false,false,
      QSTR("TCU2大故障"),
      QSTR("--") },
    { 3000, bit7, D_CAR_1, 0xF103, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_CTTW,    false, false,false,
      QSTR("TCU3大故障"),
      QSTR("--") },
    { 3000, bit7, D_CAR_1, 0xF104, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_CTTW,    false, false,false,
      QSTR("TCU4大故障"),
      QSTR("--") },
    { 3000, bit7, D_CAR_1, 0xF105, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MA, D_DEVICENO_CTTW,    false, false,false,
      QSTR("ACU MA大故障"),
      QSTR("--") },
    { 3000, bit7, D_CAR_1, 0xF106, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MB, D_DEVICENO_CTTW,    false, false,false,
      QSTR("ACU MB大故障"),
      QSTR("--") },
    { 3000, bit7, D_CAR_1, 0xF107, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MA, D_DEVICENO_CTTW,    false, false,false,
      QSTR("BCC MA大故障"),
      QSTR("--") },
    { 3000, bit7, D_CAR_1, 0xF108, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MB, D_DEVICENO_CTTW,    false, false,false,
      QSTR("BCC MB大故障"),
      QSTR("--") },
    { 3000, bit7, D_CAR_1, 0xF109, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_CTTW,    false, false,false,
      QSTR("CCU MA大故障"),
      QSTR("--") },
    { 3000, bit7, D_CAR_1, 0xF10A, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_CTTW,    false, false,false,
      QSTR("LCU MA大故障"),
      QSTR("--") },
    { 3000, bit7, D_CAR_1, 0xF10B, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_RA, D_DEVICENO_CTTW,    false, false,false,
      QSTR("LCU RA大故障"),
      QSTR("--") },
    { 3000, bit7, D_CAR_1, 0xF10C, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_CTTW,    false, false,false,
      QSTR("CCU MB大故障"),
      QSTR("--") },
    { 3000, bit7, D_CAR_1, 0xF10D, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_CTTW,    false, false,false,
      QSTR("LCU MB大故障"),
      QSTR("--") },
    { 3000, bit7, D_CAR_1, 0xF10E, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_RB, D_DEVICENO_CTTW,    false, false,false,
      QSTR("LCU RB大故障"),
      QSTR("--") },
    { 3000, bit7, D_CAR_1, 0xF10F, D_FAULT_GRADE_1,  D_DEVICE_HVAC, D_POSITION_RA, D_DEVICENO_CTTW,    false, false,false,
      QSTR("HVAC RA大故障"),
      QSTR("--") },
    { 3000, bit7, D_CAR_1, 0xF110, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_P, D_DEVICENO_CTTW,    false, false,false,
      QSTR("BCU P大故障"),
      QSTR("--") },
    { 3000, bit7, D_CAR_1, 0xF111, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_MA, D_DEVICENO_CTTW,    false, false,false,
      QSTR("BCU MA大故障"),
      QSTR("--") },
    { 3000, bit7, D_CAR_1, 0xF112, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_MB, D_DEVICENO_CTTW,    false, false,false,
      QSTR("BCU MB大故障"),
      QSTR("--") },
    { 3000, bit7, D_CAR_1, 0xF113, D_FAULT_GRADE_1,  D_DEVICE_HVAC, D_POSITION_RB, D_DEVICENO_CTTW,    false, false,false,
      QSTR("HVAC RB大故障"),
      QSTR("--") },
    { 3000, bit7, D_CAR_1, 0xF114, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_P, D_DEVICENO_CTTW,    false, false,false,
      QSTR("LCU P大故障"),
      QSTR("--") },
    { 3000, bit7, D_CAR_1, 0xF115, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_CTTW,    false, false,false,
      QSTR("IDU MA大故障"),
      QSTR("--") },
    { 3000, bit7, D_CAR_1, 0xF116, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_CTTW,    false, false,false,
      QSTR("IDU MB大故障"),
      QSTR("--") },
    { 3000, bit7, D_CAR_1, 0xF117, D_FAULT_GRADE_1,  D_DEVICE_PIS, D_POSITION_MA, D_DEVICENO_CTTW,    false, false,false,
      QSTR("PIDS MA大故障"),
      QSTR("--") },
    { 3000, bit7, D_CAR_1, 0xF118, D_FAULT_GRADE_1,  D_DEVICE_PIS, D_POSITION_MB, D_DEVICENO_CTTW,    false, false,false,
      QSTR("PIDS MB大故障"),
      QSTR("--") },
    { 3000, bit7, D_CAR_1, 0xF119, D_FAULT_GRADE_1,  D_DEVICE_PIS, D_POSITION_MA, D_DEVICENO_CTTW,    false, false,false,
      QSTR("PA MA大故障"),
      QSTR("--") },
    { 3000, bit7, D_CAR_1, 0xF11A, D_FAULT_GRADE_1,  D_DEVICE_PIS, D_POSITION_MB, D_DEVICENO_CTTW,    false, false,false,
      QSTR("PA MB大故障"),
      QSTR("--") },
    { 3000, bit7, D_CAR_1, 0xF11B, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_CTTW,    false, false,false,
      QSTR("GTW MA大故障"),
      QSTR("--") },
    { 512+12, bit0, D_CAR_1, 0xF11C, D_FAULT_GRADE_1,  D_DEVICE_DCDC, D_POSITION_MA, D_DEVICENO_CTTW,    false, false,false,
      QSTR("SCU MA大故障"),
      QSTR("--") },
    { 512+12, bit3, D_CAR_1, 0xF11D, D_FAULT_GRADE_1,  D_DEVICE_DCDC, D_POSITION_MB, D_DEVICENO_CTTW,    false, false,false,
      QSTR("SCU MB大故障"),
      QSTR("--") },
    { 3000, bit7, D_CAR_1, 0xF11E, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_MA, D_DEVICENO_CTTW,    false, false,false,
      QSTR("DOOR1 MA大故障"),
      QSTR("--") },
    { 3000, bit7, D_CAR_1, 0xF11F, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_MA, D_DEVICENO_CTTW,    false, false,false,
      QSTR("DOOR2 MA大故障"),
      QSTR("--") },
    { 3000, bit7, D_CAR_1, 0xF120, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_RA, D_DEVICENO_CTTW,    false, false,false,
      QSTR("DOOR1 RA大故障"),
      QSTR("--") },
    { 3000, bit7, D_CAR_1, 0xF121, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_RA, D_DEVICENO_CTTW,    false, false,false,
      QSTR("DOOR2 RA大故障"),
      QSTR("--") },
    { 3000, bit7, D_CAR_1, 0xF122, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_RA, D_DEVICENO_CTTW,    false, false,false,
      QSTR("DOOR3 RA大故障"),
      QSTR("--") },
    { 3000, bit7, D_CAR_1, 0xF123, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_RA, D_DEVICENO_CTTW,    false, false,false,
      QSTR("DOOR4 RA大故障"),
      QSTR("--") },
    { 3000, bit7, D_CAR_1, 0xF124, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_RB, D_DEVICENO_CTTW,    false, false,false,
      QSTR("DOOR1 RB大故障"),
      QSTR("--") },
    { 3000, bit7, D_CAR_1, 0xF125, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_RB, D_DEVICENO_CTTW,    false, false,false,
      QSTR("DOOR2 RB大故障"),
      QSTR("--") },
    { 3000, bit7, D_CAR_1, 0xF126, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_RB, D_DEVICENO_CTTW,    false, false,false,
      QSTR("DOOR3 RB大故障"),
      QSTR("--") },
    { 3000, bit7, D_CAR_1, 0xF127, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_RB, D_DEVICENO_CTTW,    false, false,false,
      QSTR("DOOR4 RB大故障"),
      QSTR("--") },
    { 3000, bit7, D_CAR_1, 0xF128, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_MB, D_DEVICENO_CTTW,    false, false,false,
      QSTR("DOOR2 MB大故障"),
      QSTR("--") },
    { 3000, bit7, D_CAR_1, 0xF129, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_MB, D_DEVICENO_CTTW,    false, false,false,
      QSTR("DOOR2 MB大故障"),
      QSTR("--") },
    // **************
    // ************** add port 141 subsystem fault (A2 type data)
    { 3000, bit7, D_CAR_2, 0xF101, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_CTTW,    false, false,false,
      QSTR("TCU1大故障"),
      QSTR("--") },
    { 3000, bit7, D_CAR_2, 0xF102, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_CTTW,    false, false,false,
      QSTR("TCU2大故障"),
      QSTR("--") },
    { 3000, bit7, D_CAR_2, 0xF103, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_CTTW,    false, false,false,
      QSTR("TCU3大故障"),
      QSTR("--") },
    { 3000, bit7, D_CAR_2, 0xF104, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_CTTW,    false, false,false,
      QSTR("TCU4大故障"),
      QSTR("--") },
    { 3000, bit7, D_CAR_2, 0xF105, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MA, D_DEVICENO_CTTW,    false, false,false,
      QSTR("ACU MA大故障"),
      QSTR("--") },
    { 3000, bit7, D_CAR_2, 0xF106, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MB, D_DEVICENO_CTTW,    false, false,false,
      QSTR("ACU MB大故障"),
      QSTR("--") },
    { 3000, bit7, D_CAR_2, 0xF107, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MA, D_DEVICENO_CTTW,    false, false,false,
      QSTR("BCC MA大故障"),
      QSTR("--") },
    { 3000, bit7, D_CAR_2, 0xF108, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MB, D_DEVICENO_CTTW,    false, false,false,
      QSTR("BCC MB大故障"),
      QSTR("--") },
    { 3000, bit7, D_CAR_2, 0xF109, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_CTTW,    false, false,false,
      QSTR("CCU MA大故障"),
      QSTR("--") },
    { 3000, bit7, D_CAR_2, 0xF10A, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_CTTW,    false, false,false,
      QSTR("LCU MA大故障"),
      QSTR("--") },
    { 3000, bit7, D_CAR_2, 0xF10B, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_RA, D_DEVICENO_CTTW,    false, false,false,
      QSTR("LCU RA大故障"),
      QSTR("--") },
    { 3000, bit7, D_CAR_2, 0xF10C, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_CTTW,    false, false,false,
      QSTR("CCU MB大故障"),
      QSTR("--") },
    { 3000, bit7, D_CAR_2, 0xF10D, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_CTTW,    false, false,false,
      QSTR("LCU MB大故障"),
      QSTR("--") },
    { 3000, bit7, D_CAR_2, 0xF10E, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_RB, D_DEVICENO_CTTW,    false, false,false,
      QSTR("LCU RB大故障"),
      QSTR("--") },
    { 3000, bit7, D_CAR_2, 0xF10F, D_FAULT_GRADE_1,  D_DEVICE_HVAC, D_POSITION_RA, D_DEVICENO_CTTW,    false, false,false,
      QSTR("HVAC RA大故障"),
      QSTR("--") },
    { 3000, bit7, D_CAR_2, 0xF110, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_P, D_DEVICENO_CTTW,    false, false,false,
      QSTR("BCU P大故障"),
      QSTR("--") },
    { 3000, bit7, D_CAR_2, 0xF111, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_MA, D_DEVICENO_CTTW,    false, false,false,
      QSTR("BCU MA大故障"),
      QSTR("--") },
    { 3000, bit7, D_CAR_2, 0xF112, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_MB, D_DEVICENO_CTTW,    false, false,false,
      QSTR("BCU MB大故障"),
      QSTR("--") },
    { 3000, bit7, D_CAR_2, 0xF113, D_FAULT_GRADE_1,  D_DEVICE_HVAC, D_POSITION_RB, D_DEVICENO_CTTW,    false, false,false,
      QSTR("HVAC RB大故障"),
      QSTR("--") },
    { 3000, bit7, D_CAR_2, 0xF114, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_P, D_DEVICENO_CTTW,    false, false,false,
      QSTR("LCU P大故障"),
      QSTR("--") },
    { 3000, bit7, D_CAR_2, 0xF115, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_CTTW,    false, false,false,
      QSTR("IDU MA大故障"),
      QSTR("--") },
    { 3000, bit7, D_CAR_2, 0xF116, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_CTTW,    false, false,false,
      QSTR("IDU MB大故障"),
      QSTR("--") },
    { 3000, bit7, D_CAR_2, 0xF117, D_FAULT_GRADE_1,  D_DEVICE_PIS, D_POSITION_MA, D_DEVICENO_CTTW,    false, false,false,
      QSTR("PIDS MA大故障"),
      QSTR("--") },
    { 3000, bit7, D_CAR_2, 0xF118, D_FAULT_GRADE_1,  D_DEVICE_PIS, D_POSITION_MB, D_DEVICENO_CTTW,    false, false,false,
      QSTR("PIDS MB大故障"),
      QSTR("--") },
    { 3000, bit7, D_CAR_2, 0xF119, D_FAULT_GRADE_1,  D_DEVICE_PIS, D_POSITION_MA, D_DEVICENO_CTTW,    false, false,false,
      QSTR("PA MA大故障"),
      QSTR("--") },
    { 3000, bit7, D_CAR_2, 0xF11A, D_FAULT_GRADE_1,  D_DEVICE_PIS, D_POSITION_MB, D_DEVICENO_CTTW,    false, false,false,
      QSTR("PA MB大故障"),
      QSTR("--") },
    { 3000, bit7, D_CAR_2, 0xF11B, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_CTTW,    false, false,false,
      QSTR("GTW MA大故障"),
      QSTR("--") },
    { 480+12, bit0, D_CAR_2, 0xF11C, D_FAULT_GRADE_1,  D_DEVICE_DCDC, D_POSITION_MA, D_DEVICENO_CTTW,    false, false,false,
      QSTR("SCU MA大故障"),
      QSTR("--") },
    { 480+12, bit3, D_CAR_2, 0xF11D, D_FAULT_GRADE_1,  D_DEVICE_DCDC, D_POSITION_MB, D_DEVICENO_CTTW,    false, false,false,
      QSTR("SCU MB大故障"),
      QSTR("--") },
    { 3000, bit7, D_CAR_2, 0xF11E, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_MA, D_DEVICENO_CTTW,    false, false,false,
      QSTR("DOOR1 MA大故障"),
      QSTR("--") },
    { 3000, bit7, D_CAR_2, 0xF11F, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_MA, D_DEVICENO_CTTW,    false, false,false,
      QSTR("DOOR2 MA大故障"),
      QSTR("--") },
    { 3000, bit7, D_CAR_2, 0xF120, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_RA, D_DEVICENO_CTTW,    false, false,false,
      QSTR("DOOR1 RA大故障"),
      QSTR("--") },
    { 3000, bit7, D_CAR_2, 0xF121, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_RA, D_DEVICENO_CTTW,    false, false,false,
      QSTR("DOOR2 RA大故障"),
      QSTR("--") },
    { 3000, bit7, D_CAR_2, 0xF122, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_RA, D_DEVICENO_CTTW,    false, false,false,
      QSTR("DOOR3 RA大故障"),
      QSTR("--") },
    { 3000, bit7, D_CAR_2, 0xF123, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_RA, D_DEVICENO_CTTW,    false, false,false,
      QSTR("DOOR4 RA大故障"),
      QSTR("--") },
    { 3000, bit7, D_CAR_2, 0xF124, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_RB, D_DEVICENO_CTTW,    false, false,false,
      QSTR("DOOR1 RB大故障"),
      QSTR("--") },
    { 3000, bit7, D_CAR_2, 0xF125, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_RB, D_DEVICENO_CTTW,    false, false,false,
      QSTR("DOOR2 RB大故障"),
      QSTR("--") },
    { 3000, bit7, D_CAR_2, 0xF126, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_RB, D_DEVICENO_CTTW,    false, false,false,
      QSTR("DOOR3 RB大故障"),
      QSTR("--") },
    { 3000, bit7, D_CAR_2, 0xF127, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_RB, D_DEVICENO_CTTW,    false, false,false,
      QSTR("DOOR4 RB大故障"),
      QSTR("--") },
    { 3000, bit7, D_CAR_2, 0xF128, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_MB, D_DEVICENO_CTTW,    false, false,false,
      QSTR("DOOR1 MB大故障"),
      QSTR("--") },
    { 3000, bit7, D_CAR_2, 0xF129, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_MB, D_DEVICENO_CTTW,    false, false,false,
      QSTR("DOOR2 MB大故障"),
      QSTR("--") },
    // **************
    // ************** add port 151 othertrain fault
    { 528-32, bit9, D_CAR_2, 0x2109, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
    QSTR("MA车磁轨制动故障"),
    QSTR("MA磁轨制动不工作，紧急制动施加受限。") },
    { 528-32, bitA, D_CAR_2, 0x210A, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_P, D_DEVICENO_BCU,    false, false,false,
    QSTR("P车磁轨制动故障"),
    QSTR("P磁轨制动不工作，紧急制动施加受限。") },
    { 528-32, bitB, D_CAR_2, 0x210B, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
    QSTR("MB车磁轨制动故障"),
    QSTR("MB磁轨制动不工作，紧急制动施加受限。") },
    { 529-32, bit9, D_CAR_2, 0x210E, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
    QSTR("MB安全制动环路电源断路器故障"),
    QSTR("MB检查安全制动环路电源断路器是否闭合。") },
    { 529-32, bitD, D_CAR_2, 0x210F, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
    QSTR("CB司控器TFC电源断路器故障"),
    QSTR("检查CB司控器TFC电源断路器是否闭合。") },
    { 529-32, bitE, D_CAR_2, 0x2110, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
    QSTR("MA AT通风机断路器故障"),
    QSTR("检查MA AT通风机断路器是否闭合。") },
    { 530-32, bit1, D_CAR_2, 0x2111, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
    QSTR("CA 司控器TFC故障"),
    QSTR("检查CA 06F01线路断路器是否闭合\n检查CA 06F03线路断路器是否闭合\n检查后故障仍然存在，退出运行图，进入紧急运行模式限速30km/h回库检修。") },
    { 530-32, bit2, D_CAR_2, 0x2112, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
    QSTR("CA 司控器编码器故障"),
    QSTR("检查CA 06F01线路断路器是否闭合\n检查CA 06F03线路断路器是否闭合\n检查后故障仍然存在，退出运行图，进入紧急运行模式限速30km/h回库检修。") },
    { 530-32, bit3, D_CAR_2, 0x2113, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
    QSTR("CB 司控器TFC故障"),
    QSTR("检查CB 06F01线路断路器是否闭合\n检查CB 06F03线路断路器是否闭合\n检查后故障仍然存在，退出运行图，进入紧急运行模式限速30km/h回库检修。") },
    { 530-32, bit4, D_CAR_2, 0x2114, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
    QSTR("CB 司控器编码器故障"),
    QSTR("检查CB 06F01线路断路器是否闭合\n检查CB 06F03线路断路器是否闭合\n检查后故障仍然存在，退出运行图，进入紧急运行模式限速30km/h回库检修。") },
    { 536-32, bit1, D_CAR_2, 0x211E, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
    QSTR("MA安全制动环路电源断路器故障"),
    QSTR("MA检查安全制动环路电源断路器是否闭合。") },
    { 536-32, bit5, D_CAR_2, 0x211F, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
    QSTR("CA司控器TFC电源断路器故障"),
    QSTR("检查CA司控器TFC电源断路器是否闭合。") },
    { 536-32, bit6, D_CAR_2, 0x2120, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
    QSTR("MB AT通风机断路器故障"),
    QSTR("检查MB AT通风机断路器是否闭合。") },
    { 539-32, bit0, D_CAR_2, 0x2121, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
    QSTR("CA弓/靴供电模式转换开关故障"),
    QSTR("使用另一端司机室操纵台的转换开关，移动车辆下线回库检修。") },
    { 539-32, bit1, D_CAR_2, 0x2122, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
    QSTR("CA超级电容启动/停止手动选择开关故障"),
    QSTR("使用另一端司机室操纵台的手动转换开关或者自动转换模式功能，移动车辆下线回库检修。") },
    { 539-32, bit2, D_CAR_2, 0x2123, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
    QSTR("CA受电弓升/降选择开关故障"),
    QSTR("使用另一端司机室操纵台的转换开关，移动车辆下线回库检修。") },
    { 539-32, bit3, D_CAR_2, 0x2124, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
    QSTR("CA集电靴升/降选择开关故障"),
    QSTR("使用另一端司机室操纵台的转换开关，移动车辆下线回库检修。") },
    { 539-32, bit4, D_CAR_2, 0x2125, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
    QSTR("CB弓/靴供电模式转换开关故障"),
    QSTR("使用另一端司机室操纵台的转换开关，移动车辆下线回库检修。") },
    { 539-32, bit5, D_CAR_2, 0x2126, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
    QSTR("CB超级电容启动/停止手动选择开关故障"),
    QSTR("使用另一端司机室操纵台的手动转换开关或者自动转换模式功能，移动车辆下线回库检修。") },
    { 539-32, bit6, D_CAR_2, 0x2127, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
    QSTR("CB受电弓升/降选择开关故障"),
    QSTR("使用另一端司机室操纵台的转换开关，移动车辆下线回库检修。") },
    { 539-32, bit7, D_CAR_2, 0x2128, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
    QSTR("CB集电靴升/降选择开关故障"),
    QSTR("使用另一端司机室操纵台的转换开关，移动车辆下线回库检修。") },
    { 542-32, bit8, D_CAR_2, 0x2129, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_TCU,    false, false,false,
    QSTR("牵引封锁（门安全线）"),
    QSTR("检查门是否全关闭\n移动手柄回惰行位并重新请求牵引。\n若确信门已全关闭，但牵引仍无效\n激活门安全线旁路开关\n移动手柄回惰行位并重新请求牵引。") },
    { 542-32, bitA, D_CAR_2, 0x212A, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_TCU,    false, false,false,
    QSTR("牵引封锁（门使能有效）"),
    QSTR("将门使能信号无效\n移动手柄回惰行位并重新请求牵引") },
    { 542-32, bitB, D_CAR_2, 0x212B, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_TCU,    false, false,false,
    QSTR("牵引封锁（司控器不在惰行位时进行HSCB闭合操作）"),
    QSTR("移动手柄回惰行位并重新请求牵引") },
    { 542-32, bitC, D_CAR_2, 0x212C, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_TCU,    false, false,false,
    QSTR("牵引封锁（司控器不在惰行位时进行门闭合操作）"),
    QSTR("移动手柄回惰行位并重新请求牵引") },
    { 542-32, bitD, D_CAR_2, 0x212D, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_TCU,    false, false,false,
    QSTR("牵引封锁（司控器不在惰行位时进行\n供电转换、升降弓、升降靴操作）"),
    QSTR("移动手柄回惰行位并重新请求牵引") },
    { 529-32, bitA, D_CAR_2, 0x222E, D_FAULT_GRADE_2,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_ACU2,    false, false,false,
    QSTR("MB司机室激活线路断路器CABN故障"),
    QSTR("检查MB司机室激活线路断路器CABN是否闭合") },
    { 530-32, bit9, D_CAR_2, 0x222F, D_FAULT_GRADE_2,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_ACU1,    false, false,false,
    QSTR("MA AC接触器08K01故障"),
    QSTR("启动扩展供电，运行完本次交路，回库维修") },
    { 530-32, bitB, D_CAR_2, 0x2230, D_FAULT_GRADE_2,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_ACU2,    false, false,false,
    QSTR("MB AC接触器08K01故障"),
    QSTR("启动扩展供电，运行完本次交路，回库维修") },
    { 533-32, bit0, D_CAR_2, 0x2231, D_FAULT_GRADE_2,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_CCU,    false, false,false,
    QSTR("从CCU 故障"),
    QSTR("完成本次交路后，回库维修") },
    { 533-32, bit1, D_CAR_2, 0x2232, D_FAULT_GRADE_2,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_LCU,    false, false,false,
    QSTR("从LCU_MA 故障"),
    QSTR("完成本次交路后，回库维修") },
    { 533-32, bit2, D_CAR_2, 0x2233, D_FAULT_GRADE_2,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_CCU,    false, false,false,
    QSTR("从GTW 故障"),
    QSTR("完成本次交路后，回库维修") },
    { 533-32, bit5, D_CAR_2, 0x2234, D_FAULT_GRADE_2,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_LCU,    false, false,false,
    QSTR("从LCU_MB 故障"),
    QSTR("完成本次交路后，回库维修") },
    { 536-32, bit2, D_CAR_2, 0x2235, D_FAULT_GRADE_2,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_ACU2,    false, false,false,
    QSTR("MA司机室激活线路断路器CABN故障"),
    QSTR("检查MA司机室激活线路断路器CABN是否闭合") },
    ///add new
    { 524-32, bit0, D_CAR_2, 0x217B, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_RA, D_DEVICENO_SCU,    false, false,false,
      QSTR("SCU_RA 大故障"),
      QSTR("禁用TW自动模式，使用受电弓受电\n或者TW手动模式使列车下线回库维修") },
    { 524-32, bit3, D_CAR_2, 0x217C, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_RB, D_DEVICENO_SCU,    false, false,false,
      QSTR("SCU_RB 大故障"),
      QSTR("禁用TW自动模式，使用受电弓受电\n或者TW手动模式使列车下线回库维修") },
    { 528-32, bit0, D_CAR_2, 0x217D, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_RA, D_DEVICENO_SCU,    false, false,false,
      QSTR("SCU_RA 通信故障"),
      QSTR("检查设备断路器是否闭合") },
    { 528-32, bit1, D_CAR_2, 0x217E, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_RB, D_DEVICENO_SCU,    false, false,false,
      QSTR("SCU_RB 通信故障"),
      QSTR("检查设备断路器是否闭合") },
    { 531-32, bitB, D_CAR_2, 0x217F, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
      QSTR("MA转向架制动隔离"),
      QSTR("尝试3次司控器从惰行位到牵引位，\n均无效后，旁路该转向架制动，限速50km/h") },
    { 531-32, bitC, D_CAR_2, 0x2180, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_P, D_DEVICENO_BCU,    false, false,false,
      QSTR("P转向架制动隔离"),
      QSTR("尝试3次司控器从惰行位到牵引位，\n均无效后，旁路该转向架制动，限速50km/h") },
    { 531-32, bitD, D_CAR_2, 0x2181, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
      QSTR("MB转向架制动隔离"),
      QSTR("尝试3次司控器从惰行位到牵引位，\n均无效后，旁路该转向架制动，限速50km/h") },
    { 532-32, bit2, D_CAR_2, 0x2182, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_ACU1,    false, false,false,
      QSTR("MA 蓄电池充电器故障"),
      QSTR("继续运行，每30分钟检查蓄电池状态，\n如果蓄电池电压低于22V，完成本次交路后，回库检修。") },
    { 532-32, bit3, D_CAR_2, 0x2183, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_ACU2,    false, false,false,
      QSTR("MB 蓄电池充电器故障"),
      QSTR("继续运行，每30分钟检查蓄电池状态，\n如果蓄电池电压低于22V，完成本次交路后，回库检修。") },
    { 532-32, bit8, D_CAR_2, 0x2184, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_ACU1,    false, false,false,
      QSTR("两套辅助电源均故障"),
      QSTR("清客，等待救援。") },
    { 532-32, bitB, D_CAR_2, 0x2285, D_FAULT_GRADE_2,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_ACU2,    false, false,false,
      QSTR("MA 辅助电源故障"),
      QSTR("切断故障辅助电源，完成当日运行后回库维修。") },
    { 532-32, bitC, D_CAR_2, 0x2286, D_FAULT_GRADE_2,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_ACU2,    false, false,false,
      QSTR("MB 辅助电源故障"),
      QSTR("切断故障辅助电源，完成当日运行后回库维修。") },
    { 524-32, bit1, D_CAR_2, 0x2387, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_RA, D_DEVICENO_SCU,    false, false,false,
      QSTR("SCU_RA 小故障"),
      QSTR("无") },
    { 524-32, bit4, D_CAR_2, 0x2388, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_RB, D_DEVICENO_SCU,    false, false,false,
      QSTR("SCU_RB 小故障"),
      QSTR("无") },
    { 529-32, bit0, D_CAR_2, 0x2389, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MA硬线与网络信号不一致（BCU小故障）"),
      QSTR("无") },
    { 529-32, bit1, D_CAR_2, 0x239A, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MB硬线与网络信号不一致（BCU小故障）"),
      QSTR("无") },
    { 529-32, bit2, D_CAR_2, 0x239B, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_P, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_P硬线与网络信号不一致（BCU小故障）"),
      QSTR("无") },
    { 529-32, bit3, D_CAR_2, 0x239C, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MA硬线与网络信号不一致（BCU大故障）"),
      QSTR("无") },
    { 529-32, bit4, D_CAR_2, 0x239D, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MB硬线与网络信号不一致（BCU大故障）"),
      QSTR("无") },
    { 529-32, bit5, D_CAR_2, 0x239E, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_P, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_P硬线与网络信号不一致（BCU大故障）"),
      QSTR("无") },
    { 528-32, bit8, D_CAR_2, 0x2108, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_P, D_DEVICENO_TW,    false, false,false,
      QSTR("TW信号系统SCG大故障"),
      QSTR("TW自动模式不可用，\n启动TW手动模式紧急脱离运行线路。") },
    { 528-32, bitF, D_CAR_2, 0x210C, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_P, D_DEVICENO_TW,    false, false,false,
      QSTR("执行SCU手动控制模式前\nTW为手动控制模式"),
      QSTR("执行SCU手动控制模式前\nTW为手动控制模式。") },
    { 529-32, bit7, D_CAR_2, 0x210D, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_TW,    false, false,false,
      QSTR("TW系统液压泵故障"),
      QSTR("TW系统无法工作，请求救援。") },
    { 530-32, bitC, D_CAR_2, 0x2115, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_P, D_DEVICENO_TW,    false, false,false,
      QSTR("P车 08K02接触器故障"),
      QSTR("车辆限速20km/h，回库检修。") },
    { 530-32, bitD, D_CAR_2, 0x2116, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_TW,    false, false,false,
      QSTR("TW降下时故障"),
      QSTR("再次尝试降下操作，如果仍然\n无法降下，请求救援，回库检修。") },
    { 530-32, bitE, D_CAR_2, 0x2117, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_TW,    false, false,false,
      QSTR("TW升上时故障"),
      QSTR("再次尝试升起操作，如果仍然\n无法升起，请求救援，回库检修。") },
    { 531-32, bit0, D_CAR_2, 0x2118, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_P, D_DEVICENO_TW,    false, false,false,
      QSTR("升弓故障"),
      QSTR("再次尝试升弓指令，如果故障仍然存在，\n切换手动模式升弓，\n如果手动模式也无法完成升弓，\n请求救援回库检修") },
    { 531-32, bit1, D_CAR_2, 0x2119, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_P, D_DEVICENO_TW,    false, false,false,
      QSTR("降弓故障"),
      QSTR("再次尝试降弓指令，如果故障仍然存在，切换手动模式降弓") },
    { 531-32, bit2, D_CAR_2, 0x211A, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_P, D_DEVICENO_TW,    false, false,false,
      QSTR("高速断路器无法正常闭合"),
      QSTR("再次尝试闭合指令，如果故障仍存在，请求救援，回库检修") },
    { 531-32, bit3, D_CAR_2, 0x211B, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_P, D_DEVICENO_TW,    false, false,false,
      QSTR("高速断路器无法正常断开"),
      QSTR("再次尝试断开指令，如果故障仍存在，请求救援，回库检修") },
    { 532-32, bit9, D_CAR_2, 0x211C, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_P, D_DEVICENO_TW,    false, false,false,
      QSTR("运行方向错误"),
      QSTR("停车，重新选择运行方向，请求牵引。") },
    { 533-32, bitD, D_CAR_2, 0x211D, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_P, D_DEVICENO_TW,    false, false,false,
      QSTR("驾驶警惕装置动作触发紧急制动"),
      QSTR("驾驶警惕装置动作后，重新按压\n警惕装置，手柄回惰行位后，重新请求牵引。") },
    { 528-32, bit2, D_CAR_2, 0x2374, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_P, D_DEVICENO_TW,    false, false,false,
      QSTR("TW信号系统SCG小故障"),
      QSTR("无") },
    { 528-32, bit3, D_CAR_2, 0x2375, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_P, D_DEVICENO_TW,    false, false,false,
      QSTR("KTP接触器故障"),
      QSTR("无") },
    { 528-32, bit4, D_CAR_2, 0x2376, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_TW,    false, false,false,
      QSTR("KTW接触器故障"),
      QSTR("无") },
    { 528-32, bit5, D_CAR_2, 0x2377, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_TW,    false, false,false,
      QSTR("TW Rostro A故障"),
      QSTR("无") },
    { 528-32, bit6, D_CAR_2, 0x2378, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_TW,    false, false,false,
      QSTR("TW Rostro B故障"),
      QSTR("无") },
    { 528-32, bit7, D_CAR_2, 0x2379, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_TW,    false, false,false,
      QSTR("TW Frame故障"),
      QSTR("无") },
    { 529-32, bit6, D_CAR_2, 0x237A, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_TW,    false, false,false,
      QSTR("TW 集电靴故障"),
      QSTR("无") },
    { 532-32, bit4, D_CAR_2, 0x239F, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_TW,    false, false,false,
      QSTR("TW 护盖开关故障"),
      QSTR("无") },
    { 532-32, bit5, D_CAR_2, 0x23A0, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_TW,    false, false,false,
      QSTR("TW 排障器A开关故障"),
      QSTR("无") },
    { 532-32, bit6, D_CAR_2, 0x23A1, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_TW,    false, false,false,
      QSTR("TW 排障器B开关故障"),
      QSTR("无") },
    { 532-32, bit7, D_CAR_2, 0x23A2, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_TW,    false, false,false,
      QSTR("TW 集电靴开关故障"),
      QSTR("无") },
    { 538-32, bit8, D_CAR_2, 0x23A3, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_TW,    false, false,false,
      QSTR("CA 左侧撒砂故障"),
      QSTR("无") },
    { 538-32, bit9, D_CAR_2, 0x23A4, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_TW,    false, false,false,
      QSTR("CA 右侧撒砂故障"),
      QSTR("无") },
    { 538-32, bitA, D_CAR_2, 0x23A5, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_TW,    false, false,false,
      QSTR("CB 左侧撒砂故障"),
      QSTR("无") },
    { 538-32, bitB, D_CAR_2, 0x23A6, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_TW,    false, false,false,
      QSTR("CB 右侧撒砂故障"),
      QSTR("无") },
    { 528+3-32, bit4, D_CAR_2, 0x23AA, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_P, D_DEVICENO_TW,    false, false,false,
      QSTR("MB KTW接触器故障"),
      QSTR("无") },
    { 528+3-32, bit5, D_CAR_2, 0x23AB, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_TW,    false, false,false,
      QSTR("TW Rostro A故障"),
      QSTR("无") },
    { 528+3-32, bit6, D_CAR_2, 0x23AC, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_TW,    false, false,false,
      QSTR("TW Rostro B故障"),
      QSTR("无") },
    { 528+3-32, bit7, D_CAR_2, 0x23AD, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_TW,    false, false,false,
      QSTR("TW Frame故障"),
      QSTR("无") },
    { 528+3-32, bit8, D_CAR_2, 0x23AE, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_TW,    false, false,false,
      QSTR("TW 集电靴故障"),
      QSTR("") },
    { 528+3-32, bit9, D_CAR_2, 0x21A7, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_TW,    false, false,false,
      QSTR("TW系统液压泵故障"),
      QSTR("TW系统无法工作，请求救援。") },
    { 528+3-32, bitE, D_CAR_2, 0x23AF, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_TW,    false, false,false,
      QSTR("TW 护盖开关故障"),
      QSTR("无") },
    { 528+3-32, bitF, D_CAR_2, 0x23B0, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_TW,    false, false,false,
      QSTR("TW 排障器A开关故障"),
      QSTR("无") },
    { 528+4-32, bit0, D_CAR_2, 0x23B1, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_TW,    false, false,false,
      QSTR("TW 排障器B开关故障"),
      QSTR("无") },
    { 528+4-32, bit1, D_CAR_2, 0x23B2, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_TW,    false, false,false,
      QSTR("TW 集电靴开关故障"),
      QSTR("无") },
    { 528+4-32, bitD, D_CAR_2, 0x21A8, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_TW,    false, false,false,
      QSTR("TW降下时故障"),
      QSTR("无") },
    { 528+4-32, bitE, D_CAR_2, 0x21A9, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_TW,    false, false,false,
      QSTR("TW升上时故障"),
      QSTR("无") },
    { 528-32, bitC, D_CAR_2, 0x23B3, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_P, D_DEVICENO_TW,    false, false,false,
      QSTR("自动过道岔故障1"),
      QSTR("无") },
    { 528-32, bitD, D_CAR_2, 0x23B4, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_P, D_DEVICENO_TW,    false, false,false,
      QSTR("自动过道岔故障2"),
      QSTR("无") },
    //*****************
    //***********  port 121 local faultdata
    { 528, bit9, D_CAR_1, 0x2109, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
      QSTR("MA车磁轨制动故障"),
      QSTR("MA磁轨制动不工作，紧急制动施加受限。") },
    { 528, bitA, D_CAR_1, 0x210A, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_P, D_DEVICENO_BCU,    false, false,false,
      QSTR("P车磁轨制动故障"),
      QSTR("P磁轨制动不工作，紧急制动施加受限。") },
    { 528, bitB, D_CAR_1, 0x210B, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
      QSTR("MB车磁轨制动故障"),
      QSTR("MB磁轨制动不工作，紧急制动施加受限。") },
    { 529, bit9, D_CAR_1, 0x210E, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
      QSTR("MB安全制动环路电源断路器故障"),
      QSTR("MB检查安全制动环路电源断路器是否闭合。") },
    { 529, bitD, D_CAR_1, 0x210F, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
      QSTR("CB司控器TFC电源断路器故障"),
      QSTR("检查CB司控器TFC电源断路器是否闭合。") },
    { 529, bitE, D_CAR_1, 0x2110, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
      QSTR("MA AT通风机断路器故障"),
      QSTR("检查MA AT通风机断路器是否闭合。") },
    { 530, bit1, D_CAR_1, 0x2111, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
      QSTR("CA 司控器TFC故障"),
      QSTR("检查CA 06F01线路断路器是否闭合\n检查CA 06F03线路断路器是否闭合\n检查后故障仍然存在，退出运行图，进入紧急运行模式限速30km/h回库检修。") },
    { 530, bit2, D_CAR_1, 0x2112, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
      QSTR("CA 司控器编码器故障"),
      QSTR("检查CA 06F01线路断路器是否闭合\n检查CA 06F03线路断路器是否闭合\n检查后故障仍然存在，退出运行图，进入紧急运行模式限速30km/h回库检修。") },
    { 530, bit3, D_CAR_1, 0x2113, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
      QSTR("CB 司控器TFC故障"),
      QSTR("检查CB 06F01线路断路器是否闭合\n检查CB 06F03线路断路器是否闭合\n检查后故障仍然存在，退出运行图，进入紧急运行模式限速30km/h回库检修。") },
    { 530, bit4, D_CAR_1, 0x2114, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
      QSTR("CB 司控器编码器故障"),
      QSTR("检查CB 06F01线路断路器是否闭合\n检查CB 06F03线路断路器是否闭合\n检查后故障仍然存在，退出运行图，进入紧急运行模式限速30km/h回库检修。") },
    { 536, bit1, D_CAR_1, 0x211E, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
      QSTR("MA安全制动环路电源断路器故障"),
      QSTR("MA检查安全制动环路电源断路器是否闭合。") },
    { 536, bit5, D_CAR_1, 0x211F, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
      QSTR("CA司控器TFC电源断路器故障"),
      QSTR("检查CA司控器TFC电源断路器是否闭合。") },
    { 536, bit6, D_CAR_1, 0x2120, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
      QSTR("MB AT通风机断路器故障"),
      QSTR("检查MB AT通风机断路器是否闭合。") },
    { 539, bit0, D_CAR_1, 0x2121, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
      QSTR("CA弓/靴供电模式转换开关故障"),
      QSTR("使用另一端司机室操纵台的转换开关，移动车辆下线回库检修。") },
    { 539, bit1, D_CAR_1, 0x2122, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
      QSTR("CA超级电容启动/停止手动选择开关故障"),
      QSTR("使用另一端司机室操纵台的手动转换开关或者自动转换模式功能，移动车辆下线回库检修。") },
    { 539, bit2, D_CAR_1, 0x2123, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
      QSTR("CA受电弓升/降选择开关故障"),
      QSTR("使用另一端司机室操纵台的转换开关，移动车辆下线回库检修。") },
    { 539, bit3, D_CAR_1, 0x2124, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
      QSTR("CA集电靴升/降选择开关故障"),
      QSTR("使用另一端司机室操纵台的转换开关，移动车辆下线回库检修。") },
    { 539, bit4, D_CAR_1, 0x2125, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
      QSTR("CB弓/靴供电模式转换开关故障"),
      QSTR("使用另一端司机室操纵台的转换开关，移动车辆下线回库检修。") },
    { 539, bit5, D_CAR_1, 0x2126, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
      QSTR("CB超级电容启动/停止手动选择开关故障"),
      QSTR("使用另一端司机室操纵台的手动转换开关或者自动转换模式功能，移动车辆下线回库检修。") },
    { 539, bit6, D_CAR_1, 0x2127, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
      QSTR("CB受电弓升/降选择开关故障"),
      QSTR("使用另一端司机室操纵台的转换开关，移动车辆下线回库检修。") },
    { 539, bit7, D_CAR_1, 0x2128, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
      QSTR("CB集电靴升/降选择开关故障"),
      QSTR("使用另一端司机室操纵台的转换开关，移动车辆下线回库检修。") },
    { 542, bit8, D_CAR_1, 0x2129, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_TCU,    false, false,false,
      QSTR("牵引封锁（门安全线）"),
      QSTR("检查门是否全关闭\n移动手柄回惰行位并重新请求牵引。\n若确信门已全关闭，但牵引仍无效\n激活门安全线旁路开关\n移动手柄回惰行位并重新请求牵引。") },
    { 542, bitA, D_CAR_1, 0x212A, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_TCU,    false, false,false,
      QSTR("牵引封锁（门使能有效）"),
      QSTR("将门使能信号无效\n移动手柄回惰行位并重新请求牵引") },
    { 542, bitB, D_CAR_1, 0x212B, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_TCU,    false, false,false,
      QSTR("牵引封锁（司控器不在惰行位时进行HSCB闭合操作）"),
      QSTR("移动手柄回惰行位并重新请求牵引") },
    { 542, bitC, D_CAR_1, 0x212C, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_TCU,    false, false,false,
      QSTR("牵引封锁（司控器不在惰行位时进行门闭合操作）"),
      QSTR("移动手柄回惰行位并重新请求牵引") },
    { 542, bitD, D_CAR_1, 0x212D, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_TCU,    false, false,false,
      QSTR("牵引封锁（司控器不在惰行位时进行\n供电转换、升降弓、升降靴操作）"),
      QSTR("移动手柄回惰行位并重新请求牵引") },
    { 529, bitA, D_CAR_1, 0x222E, D_FAULT_GRADE_2,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_ACU2,    false, false,false,
      QSTR("MB司机室激活线路断路器CABN故障"),
      QSTR("检查MB司机室激活线路断路器CABN是否闭合") },
    { 530, bit9, D_CAR_1, 0x222F, D_FAULT_GRADE_2,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_ACU1,    false, false,false,
      QSTR("MA AC接触器08K01故障"),
      QSTR("启动扩展供电，运行完本次交路，回库维修") },
    { 530, bitB, D_CAR_1, 0x2230, D_FAULT_GRADE_2,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_ACU2,    false, false,false,
      QSTR("MB AC接触器08K01故障"),
      QSTR("启动扩展供电，运行完本次交路，回库维修") },
    { 533, bit0, D_CAR_1, 0x2231, D_FAULT_GRADE_2,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_CCU,    false, false,false,
      QSTR("从CCU 故障"),
      QSTR("完成本次交路后，回库维修") },
    { 533, bit1, D_CAR_1, 0x2232, D_FAULT_GRADE_2,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_LCU,    false, false,false,
      QSTR("从LCU_MA 故障"),
      QSTR("完成本次交路后，回库维修") },
    { 533, bit2, D_CAR_1, 0x2233, D_FAULT_GRADE_2,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_CCU,    false, false,false,
      QSTR("从GTW 故障"),
      QSTR("完成本次交路后，回库维修") },
    { 533, bit5, D_CAR_1, 0x2234, D_FAULT_GRADE_2,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_LCU,    false, false,false,
      QSTR("从LCU_MB 故障"),
      QSTR("完成本次交路后，回库维修") },
    { 536, bit2, D_CAR_1, 0x2235, D_FAULT_GRADE_2,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_ACU2,    false, false,false,
      QSTR("MA司机室激活线路断路器CABN故障"),
      QSTR("检查MA司机室激活线路断路器CABN是否闭合") },
    { 524, bit0, D_CAR_1, 0x217B, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_RA, D_DEVICENO_SCU,    false, false,false,
      QSTR("SCU_RA 大故障"),
      QSTR("禁用TW自动模式，使用受电弓受电\n或者TW手动模式使列车下线回库维修") },
    { 524, bit3, D_CAR_1, 0x217C, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_RB, D_DEVICENO_SCU,    false, false,false,
      QSTR("SCU_RB 大故障"),
      QSTR("禁用TW自动模式，使用受电弓受电\n或者TW手动模式使列车下线回库维修") },
    { 528, bit0, D_CAR_1, 0x217D, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_RA, D_DEVICENO_SCU,    false, false,false,
      QSTR("SCU_RA 通信故障"),
      QSTR("检查设备断路器是否闭合") },
    { 528, bit1, D_CAR_1, 0x217E, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_RB, D_DEVICENO_SCU,    false, false,false,
      QSTR("SCU_RB 通信故障"),
      QSTR("检查设备断路器是否闭合") },
    { 531, bitB, D_CAR_1, 0x217F, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
      QSTR("MA转向架制动隔离"),
      QSTR("尝试3次司控器从惰行位到牵引位，\n均无效后，旁路该转向架制动，限速50km/h") },
    { 531, bitC, D_CAR_1, 0x2180, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_P, D_DEVICENO_BCU,    false, false,false,
      QSTR("P转向架制动隔离"),
      QSTR("尝试3次司控器从惰行位到牵引位，\n均无效后，旁路该转向架制动，限速50km/h") },
    { 531, bitD, D_CAR_1, 0x2181, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
      QSTR("MB转向架制动隔离"),
      QSTR("尝试3次司控器从惰行位到牵引位，\n均无效后，旁路该转向架制动，限速50km/h") },
    { 532, bit2, D_CAR_1, 0x2182, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_ACU1,    false, false,false,
      QSTR("MA 蓄电池充电器故障"),
      QSTR("继续运行，每30分钟检查蓄电池状态，\n如果蓄电池电压低于22V，完成本次交路后，回库检修。") },
    { 532, bit3, D_CAR_1, 0x2183, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_ACU2,    false, false,false,
      QSTR("MB 蓄电池充电器故障"),
      QSTR("继续运行，每30分钟检查蓄电池状态，\n如果蓄电池电压低于22V，完成本次交路后，回库检修。") },
    { 532, bit8, D_CAR_1, 0x2184, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_ACU1,    false, false,false,
      QSTR("两套辅助电源均故障"),
      QSTR("清客，等待救援。") },
    { 532, bitB, D_CAR_1, 0x2285, D_FAULT_GRADE_2,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_ACU2,    false, false,false,
      QSTR("MA 辅助电源故障"),
      QSTR("切断故障辅助电源，完成当日运行后回库维修。") },
    { 532, bitC, D_CAR_1, 0x2286, D_FAULT_GRADE_2,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_ACU2,    false, false,false,
      QSTR("MB 辅助电源故障"),
      QSTR("切断故障辅助电源，完成当日运行后回库维修。") },
    { 524, bit1, D_CAR_1, 0x2387, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_RA, D_DEVICENO_SCU,    false, false,false,
      QSTR("SCU_RA 小故障"),
      QSTR("无") },
    { 524, bit4, D_CAR_1, 0x2388, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_RB, D_DEVICENO_SCU,    false, false,false,
      QSTR("SCU_RB 小故障"),
      QSTR("无") },
    { 529, bit0, D_CAR_1, 0x2389, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MA硬线与网络信号不一致（BCU小故障）"),
      QSTR("无") },
    { 529, bit1, D_CAR_1, 0x239A, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MB硬线与网络信号不一致（BCU小故障）"),
      QSTR("无") },
    { 529, bit2, D_CAR_1, 0x239B, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_P, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_P硬线与网络信号不一致（BCU小故障）"),
      QSTR("无") },
    { 529, bit3, D_CAR_1, 0x239C, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MA硬线与网络信号不一致（BCU大故障）"),
      QSTR("无") },
    { 529, bit4, D_CAR_1, 0x239D, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MB硬线与网络信号不一致（BCU大故障）"),
      QSTR("无") },
    { 529, bit5, D_CAR_1, 0x239E, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_P, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_P硬线与网络信号不一致（BCU大故障）"),
      QSTR("无") },
    //*****add new fault 3-23******//
    { 528, bit8, D_CAR_1, 0x2108, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_P, D_DEVICENO_TW,    false, false,false,
      QSTR("TW信号系统SCG大故障"),
      QSTR("TW自动模式不可用，\n启动TW手动模式紧急脱离运行线路。") },
    { 528, bitF, D_CAR_1, 0x210C, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_P, D_DEVICENO_TW,    false, false,false,
      QSTR("执行SCU手动控制模式前\nTW为手动控制模式"),
      QSTR("执行SCU手动控制模式前\nTW为手动控制模式。") },
    { 529, bit7, D_CAR_1, 0x210D, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_TW,    false, false,false,
      QSTR("TW系统液压泵故障"),
      QSTR("TW系统无法工作，请求救援。") },
    { 530, bitC, D_CAR_1, 0x2115, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_P, D_DEVICENO_TW,    false, false,false,
      QSTR("P车 08K02接触器故障"),
      QSTR("车辆限速20km/h，回库检修。") },
    { 530, bitD, D_CAR_1, 0x2116, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_TW,    false, false,false,
      QSTR("TW降下时故障"),
      QSTR("再次尝试降下操作，如果仍然\n无法降下，请求救援，回库检修。") },
    { 530, bitE, D_CAR_1, 0x2117, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_TW,    false, false,false,
      QSTR("TW升上时故障"),
      QSTR("再次尝试升起操作，如果仍然\n无法升起，请求救援，回库检修。") },
    { 531, bit0, D_CAR_1, 0x2118, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_P, D_DEVICENO_TW,    false, false,false,
      QSTR("升弓故障"),
      QSTR("再次尝试升弓指令，如果故障仍然存在，\n切换手动模式升弓，\n如果手动模式也无法完成升弓，\n请求救援回库检修") },
    { 531, bit1, D_CAR_1, 0x2119, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_P, D_DEVICENO_TW,    false, false,false,
      QSTR("降弓故障"),
      QSTR("再次尝试降弓指令，如果故障仍然存在，切换手动模式降弓") },
    { 531, bit2, D_CAR_1, 0x211A, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_P, D_DEVICENO_TW,    false, false,false,
      QSTR("高速断路器无法正常闭合"),
      QSTR("再次尝试闭合指令，如果故障仍存在，请求救援，回库检修") },
    { 531, bit3, D_CAR_1, 0x211B, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_P, D_DEVICENO_TW,    false, false,false,
      QSTR("高速断路器无法正常断开"),
      QSTR("再次尝试断开指令，如果故障仍存在，请求救援，回库检修") },
    { 532, bit9, D_CAR_1, 0x211C, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_P, D_DEVICENO_TW,    false, false,false,
      QSTR("运行方向错误"),
      QSTR("停车，重新选择运行方向，请求牵引。") },
    { 533, bitD, D_CAR_1, 0x211D, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_P, D_DEVICENO_TW,    false, false,false,
      QSTR("驾驶警惕装置动作触发紧急制动"),
      QSTR("驾驶警惕装置动作后，重新按压\n警惕装置，手柄回惰行位后，重新请求牵引。") },
    { 528, bit2, D_CAR_1, 0x2374, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_P, D_DEVICENO_TW,    false, false,false,
      QSTR("TW信号系统SCG小故障"),
      QSTR("无") },
    { 528, bit3, D_CAR_1, 0x2375, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_P, D_DEVICENO_TW,    false, false,false,
      QSTR("KTP接触器故障"),
      QSTR("无") },
    { 528, bit4, D_CAR_1, 0x2376, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_TW,    false, false,false,
      QSTR("KTW接触器故障"),
      QSTR("无") },
    { 528, bit5, D_CAR_1, 0x2377, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_TW,    false, false,false,
      QSTR("TW Rostro A故障"),
      QSTR("无") },
    { 528, bit6, D_CAR_1, 0x2378, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_TW,    false, false,false,
      QSTR("TW Rostro B故障"),
      QSTR("无") },
    { 528, bit7, D_CAR_1, 0x2379, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_TW,    false, false,false,
      QSTR("TW Frame故障"),
      QSTR("无") },
    { 529, bit6, D_CAR_1, 0x237A, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_TW,    false, false,false,
      QSTR("TW 集电靴故障"),
      QSTR("无") },
    { 532, bit4, D_CAR_1, 0x239F, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_TW,    false, false,false,
      QSTR("TW 护盖开关故障"),
      QSTR("无") },
    { 532, bit5, D_CAR_1, 0x23A0, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_TW,    false, false,false,
      QSTR("TW 排障器A开关故障"),
      QSTR("无") },
    { 532, bit6, D_CAR_1, 0x23A1, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_TW,    false, false,false,
      QSTR("TW 排障器B开关故障"),
      QSTR("无") },
    { 532, bit7, D_CAR_1, 0x23A2, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_TW,    false, false,false,
      QSTR("TW 集电靴开关故障"),
      QSTR("无") },
    { 538, bit8, D_CAR_1, 0x23A3, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_TW,    false, false,false,
      QSTR("CA 左侧撒砂故障"),
      QSTR("无") },
    { 538, bit9, D_CAR_1, 0x23A4, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_TW,    false, false,false,
      QSTR("CA 右侧撒砂故障"),
      QSTR("无") },
    { 538, bitA, D_CAR_1, 0x23A5, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_TW,    false, false,false,
      QSTR("CB 左侧撒砂故障"),
      QSTR("无") },
    { 538, bitB, D_CAR_1, 0x23A6, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_TW,    false, false,false,
      QSTR("CB 右侧撒砂故障"),
      QSTR("无") },
    { 528+3, bit4, D_CAR_1, 0x23AA, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_TW,    false, false,false,
      QSTR("KTW接触器故障"),
      QSTR("无") },
    { 528+3, bit5, D_CAR_1, 0x23AB, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_TW,    false, false,false,
      QSTR("TW Rostro A故障"),
      QSTR("无") },
    { 528+3, bit6, D_CAR_1, 0x23AC, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_TW,    false, false,false,
      QSTR("TW Rostro B故障"),
      QSTR("无") },
    { 528+3, bit7, D_CAR_1, 0x23AD, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_TW,    false, false,false,
      QSTR("TW Frame故障"),
      QSTR("无") },
    { 528+3, bit8, D_CAR_1, 0x23AE, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_TW,    false, false,false,
      QSTR("TW 集电靴故障"),
      QSTR("") },
    { 528+3, bit9, D_CAR_1, 0x21A7, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_TW,    false, false,false,
      QSTR("TW系统液压泵故障"),
      QSTR("TW系统无法工作，请求救援。") },
    { 528+3, bitE, D_CAR_1, 0x23AF, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_TW,    false, false,false,
      QSTR("TW 护盖开关故障"),
      QSTR("无") },
    { 528+3, bitF, D_CAR_1, 0x23B0, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_TW,    false, false,false,
      QSTR("TW 排障器A开关故障"),
      QSTR("无") },
    { 528+4, bit0, D_CAR_1, 0x23B1, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_TW,    false, false,false,
      QSTR("TW 排障器B开关故障"),
      QSTR("无") },
    { 528+4, bit1, D_CAR_1, 0x23B2, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_TW,    false, false,false,
      QSTR("TW 集电靴开关故障"),
      QSTR("无") },
    { 528+4, bitD, D_CAR_1, 0x21A8, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_TW,    false, false,false,
      QSTR("TW降下时故障"),
      QSTR("无") },
    { 528+4, bitE, D_CAR_1, 0x21A9, D_FAULT_GRADE_1,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_TW,    false, false,false,
      QSTR("TW升上时故障"),
      QSTR("无") },
    { 528, bitC, D_CAR_1, 0x23B3, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_P, D_DEVICENO_TW,    false, false,false,
      QSTR("自动过道岔故障1"),
      QSTR("无") },
    { 528, bitD, D_CAR_1, 0x23B4, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_P, D_DEVICENO_TW,    false, false,false,
      QSTR("自动过道岔故障2"),
      QSTR("无") },
    //****************
    { 1466, bit0, D_CAR_1, 0x2336, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_LCU,    false, false,false,
      QSTR("LCU_MA(下)板卡1故障"),
      QSTR("无") },
    { 1466, bit1, D_CAR_1, 0x2337, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_LCU,    false, false,false,
      QSTR("LCU_MA(下)板卡2故障"),
      QSTR("无") },
    { 1466, bit2, D_CAR_1, 0x2338, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_LCU,    false, false,false,
      QSTR("LCU_MA(下)板卡3故障"),
      QSTR("无") },
    { 1466, bit3, D_CAR_1, 0x2339, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_LCU,    false, false,false,
      QSTR("LCU_MA(下)板卡4故障"),
      QSTR("无") },
    { 1466, bit4, D_CAR_1, 0x233A, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_LCU,    false, false,false,
      QSTR("LCU_MA(下)板卡5故障"),
      QSTR("无") },
    { 1466, bit5, D_CAR_1, 0x233B, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_LCU,    false, false,false,
      QSTR("LCU_MA(下)板卡6故障"),
      QSTR("无") },
    { 1466, bit6, D_CAR_1, 0x233C, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_LCU,    false, false,false,
      QSTR("LCU_MA(下)板卡7故障"),
      QSTR("无") },
    { 1466, bit7, D_CAR_1, 0x233D, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_LCU,    false, false,false,
      QSTR("LCU_MA(下)板卡8故障"),
      QSTR("无") },
    { 1466, bit8, D_CAR_1, 0x233E, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_LCU,    false, false,false,
      QSTR("LCU_MA(下)板卡9故障"),
      QSTR("无") },
    { 1466, bit9, D_CAR_1, 0x233F, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_LCU,    false, false,false,
      QSTR("LCU_MA(下)板卡10故障"),
      QSTR("无") },
    { 1466, bitA, D_CAR_1, 0x2340, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_LCU,    false, false,false,
      QSTR("LCU_MA(下)板卡11故障"),
      QSTR("无") },
    { 1467, bit0, D_CAR_1, 0x2341, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_LCU,    false, false,false,
      QSTR("LCU_MA(上)板卡1故障"),
      QSTR("无") },
    { 1467, bit1, D_CAR_1, 0x2342, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_LCU,    false, false,false,
      QSTR("LCU_MA(上)板卡2故障"),
      QSTR("无") },
    { 1467, bit2, D_CAR_1, 0x2343, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_LCU,    false, false,false,
      QSTR("LCU_MA(上)板卡3故障"),
      QSTR("无") },
    { 1467, bit3, D_CAR_1, 0x2344, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_LCU,    false, false,false,
      QSTR("LCU_MA(上)板卡4故障"),
      QSTR("无") },
    { 1467, bit4, D_CAR_1, 0x2345, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_LCU,    false, false,false,
      QSTR("LCU_MA(上)板卡5故障"),
      QSTR("无") },
    { 1467, bit5, D_CAR_1, 0x2346, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_LCU,    false, false,false,
      QSTR("LCU_MA(上)板卡6故障"),
      QSTR("无") },
    { 1467, bit6, D_CAR_1, 0x2347, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_LCU,    false, false,false,
      QSTR("LCU_MA(上)板卡7故障"),
      QSTR("无") },
    { 1467, bit7, D_CAR_1, 0x2348, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_LCU,    false, false,false,
      QSTR("LCU_MA(上)板卡8故障"),
      QSTR("无") },
    { 1466, bitC, D_CAR_1, 0x2349, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_LCU,    false, false,false,
      QSTR("LCU_MA(上)板卡9故障"),
      QSTR("无") },
    { 1466, bitD, D_CAR_1, 0x234A, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_LCU,    false, false,false,
      QSTR("LCU_MA(上)板卡10故障"),
      QSTR("无") },
    { 1466, bitE, D_CAR_1, 0x234B, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MA, D_DEVICENO_LCU,    false, false,false,
      QSTR("LCU_MA(上)板卡11故障"),
      QSTR("无") },
    { 1482, bit0, D_CAR_1, 0x234C, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_RA, D_DEVICENO_LCU,    false, false,false,
      QSTR("LCU_RA板卡1故障"),
      QSTR("无") },
    { 1482, bit1, D_CAR_1, 0x234D, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_RA, D_DEVICENO_LCU,    false, false,false,
      QSTR("LCU_RA板卡2故障"),
      QSTR("无") },
    { 1482, bit2, D_CAR_1, 0x234E, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_RA, D_DEVICENO_LCU,    false, false,false,
      QSTR("LCU_RA板卡3故障"),
      QSTR("无") },
    { 1482, bit3, D_CAR_1, 0x234F, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_RA, D_DEVICENO_LCU,    false, false,false,
      QSTR("LCU_RA板卡4故障"),
      QSTR("无") },
    { 1482, bit4, D_CAR_1, 0x2350, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_RA, D_DEVICENO_LCU,    false, false,false,
      QSTR("LCU_RA板卡5故障"),
      QSTR("无") },
    { 1482, bit5, D_CAR_1, 0x2351, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_RA, D_DEVICENO_LCU,    false, false,false,
      QSTR("LCU_RA板卡6故障"),
      QSTR("无") },
    { 1498, bit0, D_CAR_1, 0x2352, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_P, D_DEVICENO_LCU,    false, false,false,
      QSTR("LCU_P板卡1故障"),
      QSTR("无") },
    { 1498, bit1, D_CAR_1, 0x2353, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_P, D_DEVICENO_LCU,    false, false,false,
      QSTR("LCU_P板卡2故障"),
      QSTR("无") },
    { 1498, bit2, D_CAR_1, 0x2354, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_P, D_DEVICENO_LCU,    false, false,false,
      QSTR("LCU_P板卡3故障"),
      QSTR("无") },
    { 1498, bit3, D_CAR_1, 0x2355, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_P, D_DEVICENO_LCU,    false, false,false,
      QSTR("LCU_P板卡4故障"),
      QSTR("无") },
    { 1498, bit4, D_CAR_1, 0x2356, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_P, D_DEVICENO_LCU,    false, false,false,
      QSTR("LCU_P板卡5故障"),
      QSTR("无") },
    { 1498, bit5, D_CAR_1, 0x2357, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_P, D_DEVICENO_LCU,    false, false,false,
      QSTR("LCU_P板卡6故障"),
      QSTR("无") },
    { 1514, bit0, D_CAR_1, 0x2358, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_RB, D_DEVICENO_LCU,    false, false,false,
      QSTR("LCU_RB板卡1故障"),
      QSTR("无") },
    { 1514, bit1, D_CAR_1, 0x2359, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_RB, D_DEVICENO_LCU,    false, false,false,
      QSTR("LCU_RB板卡2故障"),
      QSTR("无") },
    { 1514, bit2, D_CAR_1, 0x235A, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_RB, D_DEVICENO_LCU,    false, false,false,
      QSTR("LCU_RB板卡3故障"),
      QSTR("无") },
    { 1514, bit3, D_CAR_1, 0x235B, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_RB, D_DEVICENO_LCU,    false, false,false,
      QSTR("LCU_RB板卡4故障"),
      QSTR("无") },
    { 1514, bit4, D_CAR_1, 0x235C, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_RB, D_DEVICENO_LCU,    false, false,false,
      QSTR("LCU_RB板卡5故障"),
      QSTR("无") },
    { 1514, bit5, D_CAR_1, 0x235D, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_RB, D_DEVICENO_LCU,    false, false,false,
      QSTR("LCU_RB板卡6故障"),
      QSTR("无") },
    { 1530, bit0, D_CAR_1, 0x235E, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_LCU,    false, false,false,
      QSTR("LCU_MB(下)板卡1故障"),
      QSTR("无") },
    { 1530, bit1, D_CAR_1, 0x235F, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_LCU,    false, false,false,
      QSTR("LCU_MB(下)板卡2故障"),
      QSTR("无") },
    { 1530, bit2, D_CAR_1, 0x2360, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_LCU,    false, false,false,
      QSTR("LCU_MB(下)板卡3故障"),
      QSTR("无") },
    { 1530, bit3, D_CAR_1, 0x2361, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_LCU,    false, false,false,
      QSTR("LCU_MB(下)板卡4故障"),
      QSTR("无") },
    { 1530, bit4, D_CAR_1, 0x2362, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_LCU,    false, false,false,
      QSTR("LCU_MB(下)板卡5故障"),
      QSTR("无") },
    { 1530, bit5, D_CAR_1, 0x2363, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_LCU,    false, false,false,
      QSTR("LCU_MB(下)板卡6故障"),
      QSTR("无") },
    { 1530, bit6, D_CAR_1, 0x2364, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_LCU,    false, false,false,
      QSTR("LCU_MB(下)板卡7故障"),
      QSTR("无") },
    { 1530, bit7, D_CAR_1, 0x2365, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_LCU,    false, false,false,
      QSTR("LCU_MB(下)板卡8故障"),
      QSTR("无") },
    { 1530, bit8, D_CAR_1, 0x2366, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_LCU,    false, false,false,
      QSTR("LCU_MB(下)板卡9故障"),
      QSTR("无") },
    { 1530, bit9, D_CAR_1, 0x2367, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_LCU,    false, false,false,
      QSTR("LCU_MB(下)板卡10故障"),
      QSTR("无") },
    { 1530, bitA, D_CAR_1, 0x2368, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_LCU,    false, false,false,
      QSTR("LCU_MB(下)板卡11故障"),
      QSTR("无") },
    { 1531, bit0, D_CAR_1, 0x2369, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_LCU,    false, false,false,
      QSTR("LCU_MB(上)板卡1故障"),
      QSTR("无") },
    { 1531, bit1, D_CAR_1, 0x236A, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_LCU,    false, false,false,
      QSTR("LCU_MB(上)板卡2故障"),
      QSTR("无") },
    { 1531, bit2, D_CAR_1, 0x236B, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_LCU,    false, false,false,
      QSTR("LCU_MB(上)板卡3故障"),
      QSTR("无") },
    { 1531, bit3, D_CAR_1, 0x236C, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_LCU,    false, false,false,
      QSTR("LCU_MB(上)板卡4故障"),
      QSTR("无") },
    { 1531, bit4, D_CAR_1, 0x236D, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_LCU,    false, false,false,
      QSTR("LCU_MB(上)板卡5故障"),
      QSTR("无") },
    { 1531, bit5, D_CAR_1, 0x236E, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_LCU,    false, false,false,
      QSTR("LCU_MB(上)板卡6故障"),
      QSTR("无") },
    { 1531, bit6, D_CAR_1, 0x236F, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_LCU,    false, false,false,
      QSTR("LCU_MB(上)板卡7故障"),
      QSTR("无") },
    { 1531, bit7, D_CAR_1, 0x2370, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_LCU,    false, false,false,
      QSTR("LCU_MB(上)板卡8故障"),
      QSTR("无") },
    { 1530, bitC, D_CAR_1, 0x2371, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_LCU,    false, false,false,
      QSTR("LCU_MB(上)板卡9故障"),
      QSTR("无") },
    { 1530, bitD, D_CAR_1, 0x2372, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_LCU,    false, false,false,
      QSTR("LCU_MB(上)板卡10故障"),
      QSTR("无") },
    { 1466, bitE, D_CAR_1, 0x2373, D_FAULT_GRADE_3,  D_DEVICE_TRAIN, D_POSITION_MB, D_DEVICENO_LCU,    false, false,false,
      QSTR("LCU_MB(上)板卡11故障"),
      QSTR("无") },
    { 1142, bit1, D_CAR_1, 0x3101, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MA, D_DEVICENO_ACU1,    false, false,false,
      QSTR("MA蓄电池充电器PSC-01板卡硬件故障"),
      QSTR("检查PSC-01 board，检查ACU") },
    { 1174, bit1, D_CAR_1, 0x3102, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MB, D_DEVICENO_ACU2,    false, false,false,
      QSTR("MB电池充电器PSC-01板卡硬件故障"),
      QSTR("检查PSC-01 board，检查ACU") },
    { 1142, bit3, D_CAR_1, 0x3103, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MA, D_DEVICENO_ACU1,    false, false,false,
      QSTR("MA BC 输入电流超过最大电流限制"),
      QSTR("检查短路检查 BC硬线") },
    { 1174, bit3, D_CAR_1, 0x3104, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MB, D_DEVICENO_ACU2,    false, false,false,
      QSTR("MB BC 输入电流超过最大电流限制"),
      QSTR("检查短路检查 BC硬线") },
    { 1142, bit4, D_CAR_1, 0x3105, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MA, D_DEVICENO_ACU1,    false, false,false,
      QSTR("MA 蓄电池支路输出电流超过最大电流限制"),
      QSTR("检查短路：蓄电池支路，检查PSC-01 board，检查ACU") },
    { 1174, bit4, D_CAR_1, 0x3106, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MB, D_DEVICENO_ACU2,    false, false,false,
      QSTR("MB 蓄电池支路输出电流超过最大电流限制"),
      QSTR("检查短路：蓄电池支路，检查PSC-01 board，检查ACU") },
    { 1142, bit5, D_CAR_1, 0x3107, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MA, D_DEVICENO_ACU1,    false, false,false,
      QSTR("MA BC 输出电流超过最大限制"),
      QSTR("检查短路 外部低压电路，\n检查低压负载 低压负载接触器 低压配线，\n检查PSC-01 board，检查ACU") },
    { 1174, bit5, D_CAR_1, 0x3108, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MB, D_DEVICENO_ACU2,    false, false,false,
      QSTR("MB BC 输出电流超过最大限制"),
      QSTR("检查短路 外部低压电路，\n检查低压负载 低压负载接触器 低压配线，\n检查PSC-01 board，检查ACU") },
    { 1142, bit6, D_CAR_1, 0x3109, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MA, D_DEVICENO_ACU1,    false, false,false,
      QSTR("MA BC低压输出超过最大限制"),
      QSTR("检查C9/C10电容与ACU之前的接线\n检查PSC-01板\n检查ACU\n检查变压器02L02") },
    { 1174, bit6, D_CAR_1, 0x310A, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MB, D_DEVICENO_ACU2,    false, false,false,
      QSTR("MB BC低压输出超过最大限制"),
      QSTR("检查C9/C10电容与ACU之前的接线\n检查PSC-01板\n检查ACU\n检查变压器02L02") },
    { 1142, bit8, D_CAR_1, 0x310B, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MA, D_DEVICENO_ACU1,    false, false,false,
      QSTR("MA BC电源单元故障"),
      QSTR("检查ACU电源供电单元") },
    { 1174, bit8, D_CAR_1, 0x310C, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MB, D_DEVICENO_ACU2,    false, false,false,
      QSTR("MB BC电源单元故障"),
      QSTR("检查ACU电源供电单元") },
    { 1142, bit9, D_CAR_1, 0x310D, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MA, D_DEVICENO_ACU1,    false, false,false,
      QSTR("MA ACU PSC-01板卡开关稳压器故障"),
      QSTR("检查PSC-01板") },
    { 1174, bit9, D_CAR_1, 0x310E, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MB, D_DEVICENO_ACU2,    false, false,false,
      QSTR("MB ACU PSC-01板卡开关稳压器故障"),
      QSTR("检查PSC-01板") },
    { 1143, bit2, D_CAR_1, 0x310F, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MA, D_DEVICENO_ACU1,    false, false,false,
      QSTR("MA BC 热敏开关断开"),
      QSTR("检查风机08M01\n检查冷却管") },
    { 1175, bit2, D_CAR_1, 0x3110, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MB, D_DEVICENO_ACU2,    false, false,false,
      QSTR("MB BC 热敏开关断开"),
      QSTR("检查风机08M01\n检查冷却管") },
    { 1141, bit1, D_CAR_1, 0x3111, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MA, D_DEVICENO_ACU1,    false, false,false,
      QSTR("MA BC 高压输入电流超过最大允许限制"),
      QSTR("检查短路\n检查蓄电池充电模块接线") },
    { 1173, bit1, D_CAR_1, 0x3112, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MB, D_DEVICENO_ACU2,    false, false,false,
      QSTR("MB BC 高压输入电流超过最大允许限制"),
      QSTR("检查短路\n检查蓄电池充电模块接线") },
    { 1141, bit2, D_CAR_1, 0x3113, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MA, D_DEVICENO_ACU1,    false, false,false,
      QSTR("MA BC 输入电流超过最大允许限制"),
      QSTR("检查蓄电池充电器变压器02L02\n检查PSC-01板\n检查ACU") },
    { 1173, bit2, D_CAR_1, 0x3114, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MB, D_DEVICENO_ACU2,    false, false,false,
      QSTR("MB BC 输入电流超过最大允许限制"),
      QSTR("检查蓄电池充电器变压器02L02\n检查PSC-01板\n检查ACU") },
    { 1141, bit3, D_CAR_1, 0x3115, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MA, D_DEVICENO_ACU1,    false, false,false,
      QSTR("MA BC 电池支路低压输出电流超过最大允许限制"),
      QSTR("检查短路，蓄电池支路\n检查蓄电池配线\n检查PSC-01板\n检查ACU") },
    { 1173, bit3, D_CAR_1, 0x3116, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MB, D_DEVICENO_ACU2,    false, false,false,
      QSTR("MB BC 电池支路低压输出电流超过最大允许限制"),
      QSTR("检查短路，蓄电池支路\n检查蓄电池配线\n检查PSC-01板\n检查ACU") },
    { 1141, bit4, D_CAR_1, 0x3117, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MA, D_DEVICENO_ACU1,    false, false,false,
      QSTR("MA BC 低压输出电流超过最大允许限制"),
      QSTR("检查短路、外部电路\n 检查低压负载、负载接触器、低压配线 \n检查PSC-01板\n 检查ACU") },
    { 1173, bit4, D_CAR_1, 0x3118, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MB, D_DEVICENO_ACU2,    false, false,false,
      QSTR("MB BC 低压输出电流超过最大允许限制"),
      QSTR("检查短路、外部电路\n 检查低压负载、负载接触器、低压配线 \n检查PSC-01板\n 检查ACU") },
    { 1141, bit5, D_CAR_1, 0x3119, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MA, D_DEVICENO_ACU1,    false, false,false,
      QSTR("MA BC 低压输出电压超过最大允许输出电压"),
      QSTR("检查蓄电池、检查蓄电池配线\n检查C9/C10电容有ACU之间的配线\n检查PSC-01板") },
    { 1173, bit5, D_CAR_1, 0x311A, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MB, D_DEVICENO_ACU2,    false, false,false,
      QSTR("MB BC 低压输出电压超过最大允许输出电压"),
      QSTR("检查蓄电池、检查蓄电池配线\n检查C9/C10电容有ACU之间的配线\n检查PSC-01板") },
    { 1141, bit6, D_CAR_1, 0x311B, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MA, D_DEVICENO_ACU1,    false, false,false,
      QSTR("MA BC 低压输出电压低于最小允许输出电压"),
      QSTR("检查短路，蓄电池支路\n检查蓄电池配线\n检查PSC-01板\n检查C9/C10电容与ACU之间的配线") },
     { 1173, bit6, D_CAR_1, 0x311C, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MB, D_DEVICENO_ACU2,    false, false,false,
      QSTR("MB BC 低压输出电压低于最小允许输出电压"),
      QSTR("检查短路，蓄电池支路\n检查蓄电池配线\n检查PSC-01板\n检查C9/C10电容与ACU之间的配线") },
    { 1141, bit7, D_CAR_1, 0x311D, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MA, D_DEVICENO_ACU1,    false, false,false,
      QSTR("MA BC 电源故障"),
      QSTR("检查蓄电池\n检查蓄电池配线\n检查PSC-01板\n检查C9/C10电容与ACU之间的配线\n检查ACU") },
    { 1173, bit7, D_CAR_1, 0x311E, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MB, D_DEVICENO_ACU2,    false, false,false,
      QSTR("MB BC 电源故障"),
      QSTR("检查蓄电池\n检查蓄电池配线\n检查PSC-01板\n检查C9/C10电容与ACU之间的配线\n检查ACU") },
    { 1141, bit9, D_CAR_1, 0x311F, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MA, D_DEVICENO_ACU1,    false, false,false,
      QSTR("MA BC 持续输出过载"),
      QSTR("检查外部电路短路\n检查低压负载，低压负载接触器，低压配线\n 检查02L03变压器\n检查PSC-01板\n检查ACU") },
    { 1173, bit9, D_CAR_1, 0x3120, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MB, D_DEVICENO_ACU2,    false, false,false,
      QSTR("MB BC 持续输出过载"),
      QSTR("检查外部电路短路\n检查低压负载，低压负载接触器，低压配线\n 检查02L03变压器\n检查PSC-01板\n检查ACU") },
    { 1141, bitA, D_CAR_1, 0x3121, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MA, D_DEVICENO_ACU1,    false, false,false,
      QSTR("MA BC TA传感器故障"),
      QSTR("检查TA传感器") },
    { 1173, bitA, D_CAR_1, 0x3122, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MB, D_DEVICENO_ACU2,    false, false,false,
      QSTR("MB BC TA传感器故障"),
      QSTR("检查TA传感器") },
    { 1141, bitB, D_CAR_1, 0x3123, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MA, D_DEVICENO_ACU1,    false, false,false,
      QSTR("MA BC TIB传感器故障"),
      QSTR("检查TIB传感器") },
    { 1173, bitB, D_CAR_1, 0x3124, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MB, D_DEVICENO_ACU2,    false, false,false,
      QSTR("MB BC TIB传感器故障"),
      QSTR("检查TIB传感器") },
    { 1141, bitC, D_CAR_1, 0x3125, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MA, D_DEVICENO_ACU1,    false, false,false,
      QSTR("MA BC TIC传感器故障"),
      QSTR("检查TIC传感器") },
    { 1173, bitC, D_CAR_1, 0x3126, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MB, D_DEVICENO_ACU2,    false, false,false,
      QSTR("MB BC TIC传感器故障"),
      QSTR("检查TIC传感器") },
    { 1205, bit1, D_CAR_1, 0x3127, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MA, D_DEVICENO_ACU1,    false, false,false,
      QSTR("MA INV高压输入电流超过允许最大允许电流"),
      QSTR("检查短路\n逆变器模块配线") },
    { 1237, bit1, D_CAR_1, 0x3128, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MB, D_DEVICENO_ACU2,    false, false,false,
      QSTR("MB INV高压输入电流超过允许最大允许电流"),
      QSTR("检查短路\n逆变器模块配线") },
    { 1205, bit2, D_CAR_1, 0x3129, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MA, D_DEVICENO_ACU1,    false, false,false,
      QSTR("MA BC 中压电流输出超过最大允许电流"),
      QSTR("检查短路：中压外部电路\n检查中压负载，负载接触器，负载配线\n检查TAU/TAV/TAW传感器\n检查CIA-01板\n检查ACU") },
    { 1237, bit2, D_CAR_1, 0x312A, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MB, D_DEVICENO_ACU2,    false, false,false,
      QSTR("MB BC 中压电流输出超过最大允许电流"),
      QSTR("检查短路：中压外部电路\n检查中压负载，负载接触器，负载配线\n检查TAU/TAV/TAW传感器\n检查CIA-01板\n检查ACU") },
     { 1205, bit3, D_CAR_1, 0x312B, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MA, D_DEVICENO_ACU1,    false, false,false,
      QSTR("MA INV电源故障"),
      QSTR("检查ACU 电源单元") },
    { 1237, bit3, D_CAR_1, 0x312C, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MB, D_DEVICENO_ACU2,    false, false,false,
      QSTR("MB INV电源故障"),
      QSTR("检查ACU 电源单元") },
    { 1208, bit1, D_CAR_1, 0x312D, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MA, D_DEVICENO_ACU1,    false, false,false,
     QSTR("MA INV 预充电状态"),
     QSTR("检查预充电装置") },
    { 1240, bit1, D_CAR_1, 0x312E, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MB, D_DEVICENO_ACU2,    false, false,false,
     QSTR("MB INV 预充电状态"),
     QSTR("检查预充电装置") },
    { 1208, bit3, D_CAR_1, 0x312F, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MA, D_DEVICENO_ACU1,    false, false,false,
     QSTR("MA INV 延迟干预第二次限制"),
     QSTR("检查短路：外部中压电路\n检查中压负载，负载接触器。负载配线\n检查TAU/TAV/TAW传感器\n检查CIA-01板\n检查ACU") },
    { 1240, bit3, D_CAR_1, 0x3130, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MB, D_DEVICENO_ACU2,    false, false,false,
     QSTR("MB INV 延迟干预第二次限制"),
     QSTR("检查短路：外部中压电路\n检查中压负载，负载接触器。负载配线\n检查TAU/TAV/TAW传感器\n检查CIA-01板\n检查ACU") },
     { 1208, bit4, D_CAR_1, 0x3131, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MA, D_DEVICENO_ACU1,    false, false,false,
     QSTR("MA INV热敏开关动作"),
     QSTR("检查风机08M01\n检查冷却管") },
    { 1240, bit4, D_CAR_1, 0x3132, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MB, D_DEVICENO_ACU2,    false, false,false,
     QSTR("MB INV热敏开关动作"),
     QSTR("检查风机08M01\n检查冷却管") },
    { 1208, bit5, D_CAR_1, 0x3133, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MA, D_DEVICENO_ACU1,    false, false,false,
     QSTR("MA INV 风扇未连接"),
     QSTR("检查风扇开关") },
    { 1240, bit5, D_CAR_1, 0x3134, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MB, D_DEVICENO_ACU2,    false, false,false,
     QSTR("MB INV 风扇未连接"),
     QSTR("检查风扇开关") },
    { 1208, bit8, D_CAR_1, 0x3135, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MA, D_DEVICENO_ACU1,    false, false,false,
     QSTR("MA INV模块故障"),
     QSTR("检查逆变器模块\n检查02L03变压器\n检查TAU/TAV/TAW传感器\n检查CIA-01板\n检查ACU") },
    { 1240, bit8, D_CAR_1, 0x3136, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MB, D_DEVICENO_ACU2,    false, false,false,
     QSTR("MB INV模块故障"),
     QSTR("检查逆变器模块\n检查02L03变压器\n检查TAU/TAV/TAW传感器\n检查CIA-01板\n检查ACU") },
    { 1142, bit2, D_CAR_1, 0x3237, D_FAULT_GRADE_2,  D_DEVICE_ACU, D_POSITION_MA, D_DEVICENO_ACU1,    false, false,false,
      QSTR("MA BC软件保护"),
      QSTR("软件保护触发") },
    { 1174, bit2, D_CAR_1, 0x3238, D_FAULT_GRADE_2,  D_DEVICE_ACU, D_POSITION_MB, D_DEVICENO_ACU2,    false, false,false,
      QSTR("MB BC软件保护"),
      QSTR("软件保护触发") },
    { 1142, bit7, D_CAR_1, 0x3239, D_FAULT_GRADE_2,  D_DEVICE_ACU, D_POSITION_MA, D_DEVICENO_ACU1,    false, false,false,
      QSTR("MA BC 导频脉冲禁用"),
      QSTR("保护触发") },
    { 1174, bit7, D_CAR_1, 0x323A, D_FAULT_GRADE_2,  D_DEVICE_ACU, D_POSITION_MB, D_DEVICENO_ACU2,    false, false,false,
      QSTR("MB BC 导频脉冲禁用"),
      QSTR("保护触发") },
    { 1143, bit1, D_CAR_1, 0x323B, D_FAULT_GRADE_2,  D_DEVICE_ACU, D_POSITION_MA, D_DEVICENO_ACU1,    false, false,false,
      QSTR("MA  BC 预充电未完成"),
      QSTR("检查预充电装置") },
    { 1175, bit1, D_CAR_1, 0x323C, D_FAULT_GRADE_2,  D_DEVICE_ACU, D_POSITION_MB, D_DEVICENO_ACU2,    false, false,false,
      QSTR("MB BC 预充电未完成"),
      QSTR("检查预充电装置") },
    { 1143, bit4, D_CAR_1, 0x323D, D_FAULT_GRADE_2,  D_DEVICE_ACU, D_POSITION_MA, D_DEVICENO_ACU1,    false, false,false,
      QSTR("MA  BC 触发软件封锁保护"),
      QSTR("软件保护触发") },
    { 1175, bit4, D_CAR_1, 0x323E, D_FAULT_GRADE_2,  D_DEVICE_ACU, D_POSITION_MB, D_DEVICENO_ACU2,    false, false,false,
      QSTR("    MB BC 触发软件封锁保护"),
      QSTR("软件保护触发") },
    { 1143, bit5, D_CAR_1, 0x323F, D_FAULT_GRADE_2,  D_DEVICE_ACU, D_POSITION_MA, D_DEVICENO_ACU1,    false, false,false,
      QSTR("MA  BC 触发快速软件保护"),
      QSTR("软件保护触发") },
    { 1175, bit5, D_CAR_1, 0x3240, D_FAULT_GRADE_2,  D_DEVICE_ACU, D_POSITION_MB, D_DEVICENO_ACU2,    false, false,false,
      QSTR("MB BC 触发快速软件保护"),
      QSTR("软件保护触发") },
    { 1141, bit8, D_CAR_1, 0x3241, D_FAULT_GRADE_2,  D_DEVICE_ACU, D_POSITION_MA, D_DEVICENO_ACU1,    false, false,false,
      QSTR("MA  BC持续输入过载"),
      QSTR("检查短路，外部电路\n检查低压负载，负载接触器、负载配线。\n检查02L03变压器\n检查PSC-01板\n检查ACU") },
    { 1173, bit8, D_CAR_1, 0x3242, D_FAULT_GRADE_2,  D_DEVICE_ACU, D_POSITION_MB, D_DEVICENO_ACU2,    false, false,false,
      QSTR("MB BC持续输入过载"),
      QSTR("检查短路，外部电路\n检查低压负载，负载接触器、负载配线。\n检查02L03变压器\n检查PSC-01板\n检查ACU") },
    { 1205, bit4, D_CAR_1, 0x3243, D_FAULT_GRADE_2,  D_DEVICE_ACU, D_POSITION_MA, D_DEVICENO_ACU1,    false, false,false,
      QSTR("MA BC 导频脉冲封锁"),
      QSTR("无") },
    { 1237, bit4, D_CAR_1, 0x3244, D_FAULT_GRADE_2,  D_DEVICE_ACU, D_POSITION_MB, D_DEVICENO_ACU2,    false, false,false,
      QSTR("MB BC 导频脉冲封锁"),
      QSTR("无") },
    { 1208, bit9, D_CAR_1, 0x3245, D_FAULT_GRADE_2,  D_DEVICE_ACU, D_POSITION_MA, D_DEVICENO_ACU1,    false, false,false,
      QSTR("MA INV R/S相输出电流不平衡"),
      QSTR("检查中压负载，检查02L03变压器\n检查02C01/02C02/02C03电容，检查TAU/TAV/TAW传感器\n检查CIA-01板\n检查ACU") },
    { 1240, bit9, D_CAR_1, 0x3246, D_FAULT_GRADE_2,  D_DEVICE_ACU, D_POSITION_MB, D_DEVICENO_ACU2,    false, false,false,
      QSTR("MB INV R/S相输出电流不平衡"),
      QSTR("检查中压负载，检查02L03变压器\n检查02C01/02C02/02C03电容，检查TAU/TAV/TAW传感器\n检查CIA-01板\n检查ACU") },
    { 1208, bitA, D_CAR_1, 0x3247, D_FAULT_GRADE_2,  D_DEVICE_ACU, D_POSITION_MA, D_DEVICENO_ACU1,    false, false,false,
      QSTR("MA INV T/S相输出电流不平衡"),
      QSTR("检查中压负载，检查02L03变压器\n检查02C01/02C02/02C03电容，检查TAU/TAV/TAW传感器\n检查CIA-01板\n检查ACU") },
    { 1240, bitA, D_CAR_1, 0x3248, D_FAULT_GRADE_2,  D_DEVICE_ACU, D_POSITION_MB, D_DEVICENO_ACU2,    false, false,false,
      QSTR("MB INV T/S相输出电流不平衡"),
      QSTR("检查中压负载，检查02L03变压器\n检查02C01/02C02/02C03电容，检查TAU/TAV/TAW传感器\n检查CIA-01板\n检查ACU") },
    { 1208, bitB, D_CAR_1, 0x3249, D_FAULT_GRADE_2,  D_DEVICE_ACU, D_POSITION_MA, D_DEVICENO_ACU1,    false, false,false,
      QSTR("MA INV过载"),
      QSTR("检查中压负载\n检查TAU/TAV/TAW传感器\n检查CIA-01板\n检查ACU") },
    { 1240, bitB, D_CAR_1, 0x324A, D_FAULT_GRADE_2,  D_DEVICE_ACU, D_POSITION_MB, D_DEVICENO_ACU2,    false, false,false,
      QSTR("MB INV过载"),
      QSTR("检查中压负载\n检查TAU/TAV/TAW传感器\n检查CIA-01板\n检查ACU") },
    { 1142, bit0, D_CAR_1, 0x334B, D_FAULT_GRADE_3,  D_DEVICE_ACU, D_POSITION_MA, D_DEVICENO_ACU1,    false, false,false,
      QSTR("MA BC高压输入电压超过允许最大电压（HW）"),
      QSTR("检查线路电压等级\n检查TV传感器\n检查PSC-01板\n检查ACU") },
    { 1174, bit0, D_CAR_1, 0x334C, D_FAULT_GRADE_3,  D_DEVICE_ACU, D_POSITION_MB, D_DEVICENO_ACU2,    false, false,false,
      QSTR("MB BC高压输入电压超过允许最大电压（HW）"),
      QSTR("检查线路电压等级\n检查TV传感器\n检查PSC-01板\n检查ACU") },
    { 1142, bitA, D_CAR_1, 0x334D, D_FAULT_GRADE_3,  D_DEVICE_ACU, D_POSITION_MA, D_DEVICENO_ACU1,    false, false,false,
      QSTR("MA BC来自CCU的重启信号有效（HW）"),
      QSTR("检查CCU\n检查CCU与ACU的配线") },
    { 1174, bitA, D_CAR_1, 0x334E, D_FAULT_GRADE_3,  D_DEVICE_ACU, D_POSITION_MB, D_DEVICENO_ACU2,    false, false,false,
      QSTR("MB BC来自CCU的重启信号有效（HW）"),
      QSTR("检查CCU\n检查CCU与ACU的配线") },
    { 1143, bit0, D_CAR_1, 0x334F, D_FAULT_GRADE_3,  D_DEVICE_ACU, D_POSITION_MA, D_DEVICENO_ACU1,    false, false,false,
      QSTR("MA BC高压输入电压超过允许最大电压(SW)"),
      QSTR("检查线路电压等级\n检查TV传感器\n检查PSC-01板\n检查ACU") },
    { 1175, bit0, D_CAR_1, 0x3350, D_FAULT_GRADE_3,  D_DEVICE_ACU, D_POSITION_MB, D_DEVICENO_ACU2,    false, false,false,
      QSTR("MB BC高压输入电压超过允许最大电压(SW)"),
      QSTR("检查线路电压等级\n检查TV传感器\n检查PSC-01板\n检查ACU") },
    { 1143, bit3, D_CAR_1, 0x3351, D_FAULT_GRADE_3,  D_DEVICE_ACU, D_POSITION_MA, D_DEVICENO_ACU1,    false, false,false,
      QSTR("MA BC来自CCU的重启信号有效(SW)"),
      QSTR("检查CCU\n检查CCU与ACU的配线") },
    { 1175, bit3, D_CAR_1, 0x3352, D_FAULT_GRADE_3,  D_DEVICE_ACU, D_POSITION_MB, D_DEVICENO_ACU2,    false, false,false,
      QSTR("MB BC来自CCU的重启信号有效(SW)"),
      QSTR("检查CCU\n检查CCU与ACU的配线") },
    { 1141, bit0, D_CAR_1, 0x3353, D_FAULT_GRADE_3,  D_DEVICE_ACU, D_POSITION_MA, D_DEVICENO_ACU1,    false, false,false,
      QSTR("MA BC 高压输入电压超过最大允许电压"),
      QSTR("检查线路电压等级\n检查TV传感器\n 检查PSC-01板\n检查ACU") },
    { 1173, bit0, D_CAR_1, 0x3354, D_FAULT_GRADE_3,  D_DEVICE_ACU, D_POSITION_MB, D_DEVICENO_ACU2,    false, false,false,
      QSTR("MB BC 高压输入电压超过最大允许电压"),
      QSTR("检查线路电压等级\n检查TV传感器\n 检查PSC-01板\n检查ACU") },
    { 1205, bit0, D_CAR_1, 0x3355, D_FAULT_GRADE_3,  D_DEVICE_ACU, D_POSITION_MA, D_DEVICENO_ACU1,    false, false,false,
      QSTR("MA INV高压输入电压超过最大允许电压"),
      QSTR("检查线路电压等级\n检查TV传感器\n 检查CIA-01板\n检查ACU") },
    { 1237, bit0, D_CAR_1, 0x3356, D_FAULT_GRADE_3,  D_DEVICE_ACU, D_POSITION_MB, D_DEVICENO_ACU2,    false, false,false,
      QSTR("MB INV高压输入电压超过最大允许电压"),
      QSTR("检查线路电压等级\n检查TV传感器\n 检查CIA-01板\n检查ACU") },
    { 1208, bit0, D_CAR_1, 0x3357, D_FAULT_GRADE_3,  D_DEVICE_ACU, D_POSITION_MA, D_DEVICENO_ACU1,    false, false,false,
      QSTR("MA INV高压输入电压超过最大允许限制"),
      QSTR("检查线路电压等级\n检查TV传感器\n 检查CIA-01板\n检查ACU") },
    { 1240, bit0, D_CAR_1, 0x3358, D_FAULT_GRADE_3,  D_DEVICE_ACU, D_POSITION_MB, D_DEVICENO_ACU2,    false, false,false,
      QSTR("MB INV高压输入电压超过最大允许限制"),
      QSTR("检查线路电压等级\n检查TV传感器\n 检查CIA-01板\n检查ACU") },
    { 1208, bit2, D_CAR_1, 0x3359, D_FAULT_GRADE_3,  D_DEVICE_ACU, D_POSITION_MA, D_DEVICENO_ACU1,    false, false,false,
      QSTR("MA INV滤波器长时间过压"),
      QSTR("检查线路电压等级\n检查TV传感器\n 检查CIA-01板\n检查ACU") },
    { 1240, bit2, D_CAR_1, 0x335A, D_FAULT_GRADE_3,  D_DEVICE_ACU, D_POSITION_MB, D_DEVICENO_ACU2,    false, false,false,
      QSTR("MB INV滤波器长时间过压"),
      QSTR("检查线路电压等级\n检查TV传感器\n 检查CIA-01板\n检查ACU") },

    { 1011, bit0, D_CAR_1, 0x4101, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU1,    false, false,false,
      QSTR("TCU1_DEW板卡通信故障"),
      QSTR("无") },
    { 1027, bit0, D_CAR_1, 0x4102, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU2,    false, false,false,
      QSTR("TCU2_DEW板卡通信故障"),
      QSTR("无") },
    { 1043, bit0, D_CAR_1, 0x4103, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU3,    false, false,false,
      QSTR("TCU3_DEW板卡通信故障"),
      QSTR("无") },
    { 1059, bit0, D_CAR_1, 0x4104, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU4,    false, false,false,
      QSTR("TCU4_DEW板卡通信故障"),
      QSTR("无") },
    { 1014, bitD, D_CAR_1, 0x4105, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU1,    false, false,false,
      QSTR("TCU1_多个或连续相位模块热开关干预"),
      QSTR("警告司机车辆运行时该牵引系统切除") },
    { 1030, bitD, D_CAR_1, 0x4106, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU2,    false, false,false,
      QSTR("TCU2_多个或连续相位模块热开关干预"),
      QSTR("警告司机车辆运行时该牵引系统切除") },
    { 1046, bitD, D_CAR_1, 0x4107, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU3,    false, false,false,
      QSTR("TCU3_多个或连续相位模块热开关干预"),
      QSTR("警告司机车辆运行时该牵引系统切除") },
    { 1062, bitD, D_CAR_1, 0x4108, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU4,    false, false,false,
      QSTR("TCU4_多个或连续相位模块热开关干预"),
      QSTR("警告司机车辆运行时该牵引系统切除") },
    { 1011, bit6, D_CAR_1, 0x4109, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU1,    false, false,false,
      QSTR("TCU1_HSCB封锁"),
      QSTR("警告司机车辆运行时该牵引系统切除") },
    { 1027, bit6, D_CAR_1, 0x410A, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU2,    false, false,false,
      QSTR("TCU2_HSCB封锁"),
      QSTR("警告司机车辆运行时该牵引系统切除") },
    { 1043, bit6, D_CAR_1, 0x410B, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU3,    false, false,false,
      QSTR("TCU3_HSCB封锁"),
      QSTR("警告司机车辆运行时该牵引系统切除") },
    { 1059, bit6, D_CAR_1, 0x410C, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU4,    false, false,false,
      QSTR("TCU4_HSCB封锁"),
      QSTR("警告司机车辆运行时该牵引系统切除") },
    { 1012, bit8, D_CAR_1, 0x410D, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU1,    false, false,false,
      QSTR("TCU1_主接触器封锁"),
      QSTR("警告司机车辆运行时该牵引系统切除") },
    { 1028, bit8, D_CAR_1, 0x410E, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU2,    false, false,false,
      QSTR("TCU2_主接触器封锁"),
      QSTR("警告司机车辆运行时该牵引系统切除") },
    { 1044, bit8, D_CAR_1, 0x410F, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU3,    false, false,false,
      QSTR("TCU3_主接触器封锁"),
      QSTR("警告司机车辆运行时该牵引系统切除") },
    { 1060, bit8, D_CAR_1, 0x4110, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU4,    false, false,false,
      QSTR("TCU4_主接触器封锁"),
      QSTR("警告司机车辆运行时该牵引系统切除") },
    { 1012, bit9, D_CAR_1, 0x4111, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU1,    false, false,false,
      QSTR("TCU1_充电接触器封锁"),
      QSTR("警告司机车辆运行时该牵引系统切除") },
    { 1028, bit9, D_CAR_1, 0x4112, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU2,    false, false,false,
      QSTR("TCU2_充电接触器封锁"),
      QSTR("警告司机车辆运行时该牵引系统切除") },
    { 1044, bit9, D_CAR_1, 0x4113, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU3,    false, false,false,
      QSTR("TCU3_充电接触器封锁"),
      QSTR("警告司机车辆运行时该牵引系统切除") },
    { 1060, bit9, D_CAR_1, 0x4114, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU4,    false, false,false,
      QSTR("TCU4_充电接触器封锁"),
      QSTR("警告司机车辆运行时该牵引系统切除") },
    { 1012, bitA, D_CAR_1, 0x4115, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU1,    false, false,false,
      QSTR("TCU1_线电流传感器故障"),
      QSTR("无") },
    { 1028, bitA, D_CAR_1, 0x4116, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU2,    false, false,false,
      QSTR("TCU2_线电流传感器故障"),
      QSTR("无") },
    { 1044, bitA, D_CAR_1, 0x4117, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU3,    false, false,false,
      QSTR("TCU3_线电流传感器故障"),
      QSTR("无") },
    { 1060, bitA, D_CAR_1, 0x4118, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU4,    false, false,false,
      QSTR("TCU4_线电流传感器故障"),
      QSTR("无") },
    { 1012, bitD, D_CAR_1, 0x4119, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU1,    false, false,false,
      QSTR("TCU1_HSCB LDO通道短路"),
      QSTR("打开磁性TCU供电开关，警告司机车辆运行时该牵引系统切除") },
    { 1028, bitD, D_CAR_1, 0x411A, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU2,    false, false,false,
      QSTR("TCU2_HSCB LDO通道短路"),
      QSTR("打开磁性TCU供电开关，警告司机车辆运行时该牵引系统切除") },
    { 1044, bitD, D_CAR_1, 0x411B, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU3,    false, false,false,
      QSTR("TCU3_HSCB LDO通道短路"),
      QSTR("打开磁性TCU供电开关，警告司机车辆运行时该牵引系统切除") },
    { 1060, bitD, D_CAR_1, 0x411C, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU4,    false, false,false,
      QSTR("TCU4_HSCB LDO通道短路"),
      QSTR("打开磁性TCU供电开关，警告司机车辆运行时该牵引系统切除") },
    { 1012, bitE, D_CAR_1, 0x411D, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU1,    false, false,false,
      QSTR("TCU1_主接触器SRO通道短路"),
      QSTR("无") },
    { 1028, bitE, D_CAR_1, 0x411E, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU2,    false, false,false,
      QSTR("TCU2_主接触器SRO通道短路"),
      QSTR("无") },
    { 1044, bitE, D_CAR_1, 0x411F, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU3,    false, false,false,
      QSTR("TCU3_主接触器SRO通道短路"),
      QSTR("无") },
    { 1060, bitE, D_CAR_1, 0x4120, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU4,    false, false,false,
      QSTR("TCU4_主接触器SRO通道短路"),
      QSTR("无") },
    { 1012, bitF, D_CAR_1, 0x4121, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU1,    false, false,false,
      QSTR("TCU1_预充电接触器SRO通道短路"),
      QSTR("无") },
    { 1028, bitF, D_CAR_1, 0x4122, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU2,    false, false,false,
      QSTR("TCU2_预充电接触器SRO通道短路"),
      QSTR("无") },
    { 1044, bitF, D_CAR_1, 0x4123, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU3,    false, false,false,
      QSTR("TCU3_预充电接触器SRO通道短路"),
      QSTR("无") },
    { 1060, bitF, D_CAR_1, 0x4124, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU4,    false, false,false,
      QSTR("TCU4_预充电接触器SRO通道短路"),
      QSTR("无") },
    { 1012, bit0, D_CAR_1, 0x4125, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU1,    false, false,false,
      QSTR("TCU1_TCUKO DO通道封锁"),
      QSTR("警告司机车辆运行时该牵引系统切除") },
    { 1028, bit0, D_CAR_1, 0x4126, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU2,    false, false,false,
      QSTR("TCU2_TCUKO DO通道封锁"),
      QSTR("警告司机车辆运行时该牵引系统切除") },
    { 1044, bit0, D_CAR_1, 0x4127, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU3,    false, false,false,
      QSTR("TCU3_TCUKO DO通道封锁"),
      QSTR("警告司机车辆运行时该牵引系统切除") },
    { 1060, bit0, D_CAR_1, 0x4128, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU4,    false, false,false,
      QSTR("TCU4_TCUKO DO通道封锁"),
      QSTR("警告司机车辆运行时该牵引系统切除") },
    { 1013, bit0, D_CAR_1, 0x4129, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU1,    false, false,false,
      QSTR("TCU1_滤波电压传感器故障"),
      QSTR("警告司机车辆运行时该牵引系统切除") },
    { 1029, bit0, D_CAR_1, 0x412A, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU2,    false, false,false,
      QSTR("TCU2_滤波电压传感器故障"),
      QSTR("警告司机车辆运行时该牵引系统切除") },
    { 1045, bit0, D_CAR_1, 0x412B, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU3,    false, false,false,
      QSTR("TCU3_滤波电压传感器故障"),
      QSTR("警告司机车辆运行时该牵引系统切除") },
    { 1061, bit0, D_CAR_1, 0x412C, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU4,    false, false,false,
      QSTR("TCU4_滤波电压传感器故障"),
      QSTR("警告司机车辆运行时该牵引系统切除") },
    { 1014, bit8, D_CAR_1, 0x412D, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU1,    false, false,false,
      QSTR("TCU1_主接触器DO通道封锁"),
      QSTR("警告司机车辆运行时该牵引系统切除") },
    { 1030, bit8, D_CAR_1, 0x412E, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU2,    false, false,false,
      QSTR("TCU2_主接触器DO通道封锁"),
      QSTR("警告司机车辆运行时该牵引系统切除") },
    { 1046, bit8, D_CAR_1, 0x412F, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU3,    false, false,false,
      QSTR("TCU3_主接触器DO通道封锁"),
      QSTR("警告司机车辆运行时该牵引系统切除") },
    { 1062, bit8, D_CAR_1, 0x4130, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU4,    false, false,false,
      QSTR("TCU4_主接触器DO通道封锁"),
      QSTR("警告司机车辆运行时该牵引系统切除") },
    { 1014, bit9, D_CAR_1, 0x4131, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU1,    false, false,false,
      QSTR("TCU1_充电接触器DO通道封锁"),
      QSTR("警告司机车辆运行时该牵引系统切除") },
    { 1030, bit9, D_CAR_1, 0x4132, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU2,    false, false,false,
      QSTR("TCU2_充电接触器DO通道封锁"),
      QSTR("警告司机车辆运行时该牵引系统切除") },
    { 1046, bit9, D_CAR_1, 0x4133, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU3,    false, false,false,
      QSTR("TCU3_充电接触器DO通道封锁"),
      QSTR("警告司机车辆运行时该牵引系统切除") },
    { 1062, bit9, D_CAR_1, 0x4134, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU4,    false, false,false,
      QSTR("TCU4_充电接触器DO通道封锁"),
      QSTR("警告司机车辆运行时该牵引系统切除") },
    { 1014, bitA, D_CAR_1, 0x4135, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU1,    false, false,false,
      QSTR("TCU1_HSCB命令DO通道封锁"),
      QSTR("警告司机车辆运行时该牵引系统切除") },
    { 1030, bitA, D_CAR_1, 0x4136, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU2,    false, false,false,
      QSTR("TCU2_HSCB命令DO通道封锁"),
      QSTR("警告司机车辆运行时该牵引系统切除") },
    { 1046, bitA, D_CAR_1, 0x4137, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU3,    false, false,false,
      QSTR("TCU3_HSCB命令DO通道封锁"),
      QSTR("警告司机车辆运行时该牵引系统切除") },
    { 1062, bitA, D_CAR_1, 0x4138, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU4,    false, false,false,
      QSTR("TCU4_HSCB命令DO通道封锁"),
      QSTR("警告司机车辆运行时该牵引系统切除") },
    { 1014, bitB, D_CAR_1, 0x4139, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU1,    false, false,false,
      QSTR("TCU1_TCUKO DO通道封锁达90s"),
      QSTR("警告司机车辆运行时该牵引系统切除") },
    { 1030, bitB, D_CAR_1, 0x413A, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU2,    false, false,false,
      QSTR("TCU2_TCUKO DO通道封锁达90s"),
      QSTR("警告司机车辆运行时该牵引系统切除") },
    { 1046, bitB, D_CAR_1, 0x413B, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU3,    false, false,false,
      QSTR("TCU3_TCUKO DO通道封锁达90s"),
      QSTR("警告司机车辆运行时该牵引系统切除") },
    { 1062, bitB, D_CAR_1, 0x413C, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU4,    false, false,false,
      QSTR("TCU4_TCUKO DO通道封锁达90s"),
      QSTR("警告司机车辆运行时该牵引系统切除") },
    { 1014, bitC, D_CAR_1, 0x413D, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU1,    false, false,false,
      QSTR("TCU1_HSCB 5分钟内超过3次跳闸"),
      QSTR("打开磁性TCU供电开关，警告司机车辆运行时该牵引系统切除") },
    { 1030, bitC, D_CAR_1, 0x413E, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU2,    false, false,false,
      QSTR("TCU2_HSCB 5分钟内超过3次跳闸"),
      QSTR("打开磁性TCU供电开关，警告司机车辆运行时该牵引系统切除") },
    { 1046, bitC, D_CAR_1, 0x413F, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU3,    false, false,false,
      QSTR("TCU3_HSCB 5分钟内超过3次跳闸"),
      QSTR("打开磁性TCU供电开关，警告司机车辆运行时该牵引系统切除") },
    { 1062, bitC, D_CAR_1, 0x4140, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU4,    false, false,false,
      QSTR("TCU4_HSCB 5分钟内超过3次跳闸"),
      QSTR("打开磁性TCU供电开关，警告司机车辆运行时该牵引系统切除") },
    { 1014, bitF, D_CAR_1, 0x4141, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU1,    false, false,false,
      QSTR("TCU1_滤波器放电故障"),
      QSTR("警告司机车辆运行时该牵引系统切除") },
    { 1030, bitF, D_CAR_1, 0x4142, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU2,    false, false,false,
      QSTR("TCU2_滤波器放电故障"),
      QSTR("警告司机车辆运行时该牵引系统切除") },
    { 1046, bitF, D_CAR_1, 0x4143, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU3,    false, false,false,
      QSTR("TCU3_滤波器放电故障"),
      QSTR("警告司机车辆运行时该牵引系统切除") },
    { 1062, bitF, D_CAR_1, 0x4144, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU4,    false, false,false,
      QSTR("TCU4_滤波器放电故障"),
      QSTR("警告司机车辆运行时该牵引系统切除") },
//    { 1014, bitA, D_CAR_1, 0x4145, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU1,    false, false,false,
//      QSTR("TCU1_线电流传感器故障3次"),
//      QSTR("警告司机车辆运行时该牵引系统切除") },
//    { 1030, bitA, D_CAR_1, 0x4146, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU2,    false, false,false,
//      QSTR("TCU2_线电流传感器故障3次"),
//      QSTR("警告司机车辆运行时该牵引系统切除") },
//    { 1046, bitA, D_CAR_1, 0x4147, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU3,    false, false,false,
//      QSTR("TCU3_线电流传感器故障3次"),
//      QSTR("警告司机车辆运行时该牵引系统切除") },
//    { 1062, bitA, D_CAR_1, 0x4148, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU4,    false, false,false,
//      QSTR("TCU4_线电流传感器故障3次"),
//      QSTR("警告司机车辆运行时该牵引系统切除") },
    { 1014, bit3, D_CAR_1, 0x4149, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU1,    false, false,false,
      QSTR("TCU1_所有电机温度传感器故障"),
      QSTR("警告司机车辆运行时该牵引系统切除") },
    { 1030, bit3, D_CAR_1, 0x414A, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU2,    false, false,false,
      QSTR("TCU2_所有电机温度传感器故障"),
      QSTR("警告司机车辆运行时该牵引系统切除") },
    { 1046, bit3, D_CAR_1, 0x414B, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU3,    false, false,false,
      QSTR("TCU3_所有电机温度传感器故障"),
      QSTR("警告司机车辆运行时该牵引系统切除") },
    { 1062, bit3, D_CAR_1, 0x414C, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU4,    false, false,false,
      QSTR("TCU4_所有电机温度传感器故障"),
      QSTR("警告司机车辆运行时该牵引系统切除") },
    { 1015, bit8, D_CAR_1, 0x414D, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU1,    false, false,false,
      QSTR("TCU1_速度传感器1故障"),
      QSTR("警告司机车辆运行时该牵引系统切除") },
    { 1031, bit8, D_CAR_1, 0x414E, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU2,    false, false,false,
      QSTR("TCU2_速度传感器1故障"),
      QSTR("警告司机车辆运行时该牵引系统切除") },
    { 1047, bit8, D_CAR_1, 0x414F, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU3,    false, false,false,
      QSTR("TCU3_速度传感器1故障"),
      QSTR("警告司机车辆运行时该牵引系统切除") },
    { 1063, bit8, D_CAR_1, 0x4150, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU4,    false, false,false,
      QSTR("TCU4_速度传感器1故障"),
      QSTR("警告司机车辆运行时该牵引系统切除") },
    //*********************************故障代码重复使用
    { 1015, bit9, D_CAR_1, 0x414D, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU1,    false, false,false,
      QSTR("TCU1_速度传感器2故障"),
      QSTR("警告司机车辆运行时该牵引系统切除") },
    { 1031, bit9, D_CAR_1, 0x414E, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU2,    false, false,false,
      QSTR("TCU2_速度传感器2故障"),
      QSTR("警告司机车辆运行时该牵引系统切除") },
    { 1047, bit9, D_CAR_1, 0x414F, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU3,    false, false,false,
      QSTR("TCU3_速度传感器2故障"),
      QSTR("警告司机车辆运行时该牵引系统切除") },
    { 1063, bit9, D_CAR_1, 0x4150, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU4,    false, false,false,
      QSTR("TCU4_速度传感器2故障"),
      QSTR("警告司机车辆运行时该牵引系统切除") },
    //*********************************故障代码重复使用
    { 1016, bitA, D_CAR_1, 0x4151, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU1,    false, false,false,
      QSTR("TCU1_UDI板卡故障"),
      QSTR("警告司机车辆运行时该牵引系统切除") },
    { 1032, bitA, D_CAR_1, 0x4152, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU2,    false, false,false,
      QSTR("TCU2_UDI板卡故障"),
      QSTR("警告司机车辆运行时该牵引系统切除") },
    { 1048, bitA, D_CAR_1, 0x4153, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU3,    false, false,false,
      QSTR("TCU3_UDI板卡故障"),
      QSTR("警告司机车辆运行时该牵引系统切除") },
    { 1064, bitA, D_CAR_1, 0x4154, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU4,    false, false,false,
      QSTR("TCU4_UDI板卡故障"),
      QSTR("警告司机车辆运行时该牵引系统切除") },
    { 1016, bitB, D_CAR_1, 0x4155, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU1,    false, false,false,
      QSTR("TCU1_LDO板卡故障"),
      QSTR("警告司机车辆运行时该牵引系统切除") },
    { 1032, bitB, D_CAR_1, 0x4156, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU2,    false, false,false,
      QSTR("TCU2_LDO板卡故障"),
      QSTR("警告司机车辆运行时该牵引系统切除") },
    { 1048, bitB, D_CAR_1, 0x4157, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU3,    false, false,false,
      QSTR("TCU3_LDO板卡故障"),
      QSTR("警告司机车辆运行时该牵引系统切除") },
    { 1064, bitB, D_CAR_1, 0x4158, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU4,    false, false,false,
      QSTR("TCU4_LDO板卡故障"),
      QSTR("警告司机车辆运行时该牵引系统切除") },
    { 1016, bitC, D_CAR_1, 0x4159, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU1,    false, false,false,
      QSTR("TCU1_SRO板卡故障"),
      QSTR("警告司机车辆运行时该牵引系统切除") },
    { 1032, bitC, D_CAR_1, 0x415A, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU2,    false, false,false,
      QSTR("TCU2_SRO板卡故障"),
      QSTR("警告司机车辆运行时该牵引系统切除") },
    { 1048, bitC, D_CAR_1, 0x415B, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU3,    false, false,false,
      QSTR("TCU3_SRO板卡故障"),
      QSTR("警告司机车辆运行时该牵引系统切除") },
    { 1064, bitC, D_CAR_1, 0x415C, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU4,    false, false,false,
      QSTR("TCU4_SRO板卡故障"),
      QSTR("警告司机车辆运行时该牵引系统切除") },
    { 1016, bitD, D_CAR_1, 0x415D, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU1,    false, false,false,
      QSTR("TCU1_UTI板卡故障"),
      QSTR("警告司机车辆运行时该牵引系统切除") },
    { 1032, bitD, D_CAR_1, 0x415E, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU2,    false, false,false,
      QSTR("TCU2_UTI板卡故障"),
      QSTR("警告司机车辆运行时该牵引系统切除") },
    { 1048, bitD, D_CAR_1, 0x415F, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU3,    false, false,false,
      QSTR("TCU3_UTI板卡故障"),
      QSTR("警告司机车辆运行时该牵引系统切除") },
    { 1064, bitD, D_CAR_1, 0x4160, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU4,    false, false,false,
      QSTR("TCU4_UTI板卡故障"),
      QSTR("警告司机车辆运行时该牵引系统切除") },
    { 1020, bit8, D_CAR_1, 0x4161, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU1,    false, false,false,
      QSTR("TCU1_逆变器相位不平衡"),
      QSTR("无") },
    { 1036, bit8, D_CAR_1, 0x4162, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU2,    false, false,false,
      QSTR("TCU2_逆变器相位不平衡"),
      QSTR("无") },
    { 1052, bit8, D_CAR_1, 0x4163, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU3,    false, false,false,
      QSTR("TCU3_逆变器相位不平衡"),
      QSTR("无") },
    { 1068, bit8, D_CAR_1, 0x4164, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU4,    false, false,false,
      QSTR("TCU4_逆变器相位不平衡"),
      QSTR("无") },
    { 1019, bit8, D_CAR_1, 0x4165, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU1,    false, false,false,
      QSTR("TCU1_IGBT相位模块A故障"),
      QSTR("尝试闭合HSCB") },
    { 1035, bit8, D_CAR_1, 0x4166, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU2,    false, false,false,
      QSTR("TCU2_IGBT相位模块A故障"),
      QSTR("尝试闭合HSCB") },
    { 1051, bit8, D_CAR_1, 0x4167, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU3,    false, false,false,
      QSTR("TCU3_IGBT相位模块A故障"),
      QSTR("尝试闭合HSCB") },
    { 1067, bit8, D_CAR_1, 0x4168, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU4,    false, false,false,
      QSTR("TCU4_IGBT相位模块A故障"),
      QSTR("尝试闭合HSCB") },
    { 1019, bit9, D_CAR_1, 0x4169, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU1,    false, false,false,
      QSTR("TCU1_IGBT相位模块B故障"),
      QSTR("尝试闭合HSCB") },
    { 1035, bit9, D_CAR_1, 0x416A, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU2,    false, false,false,
      QSTR("TCU2_IGBT相位模块B故障"),
      QSTR("尝试闭合HSCB") },
    { 1051, bit9, D_CAR_1, 0x416B, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU3,    false, false,false,
      QSTR("TCU3_IGBT相位模块B故障"),
      QSTR("尝试闭合HSCB") },
    { 1067, bit9, D_CAR_1, 0x416C, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU4,    false, false,false,
      QSTR("TCU4_IGBT相位模块B故障"),
      QSTR("尝试闭合HSCB") },
    { 1019, bitA, D_CAR_1, 0x416D, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU1,    false, false,false,
      QSTR("TCU1_IGBT相位模块C故障"),
      QSTR("尝试闭合HSCB") },
    { 1035, bitA, D_CAR_1, 0x416E, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU2,    false, false,false,
      QSTR("TCU2_IGBT相位模块C故障"),
      QSTR("尝试闭合HSCB") },
    { 1051, bitA, D_CAR_1, 0x416F, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU3,    false, false,false,
      QSTR("TCU3_IGBT相位模块C故障"),
      QSTR("尝试闭合HSCB") },
    { 1067, bitA, D_CAR_1, 0x4170, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU4,    false, false,false,
      QSTR("TCU4_IGBT相位模块C故障"),
      QSTR("尝试闭合HSCB") },
    { 1019, bitE, D_CAR_1, 0x4171, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU1,    false, false,false,
      QSTR("TCU1_IGBT相位模块CH故障"),
      QSTR("尝试闭合HSCB") },
    { 1035, bitE, D_CAR_1, 0x4172, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU2,    false, false,false,
      QSTR("TCU2_IGBT相位模块CH故障"),
      QSTR("尝试闭合HSCB") },
    { 1051, bitE, D_CAR_1, 0x4173, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU3,    false, false,false,
      QSTR("TCU3_IGBT相位模块CH故障"),
      QSTR("尝试闭合HSCB") },
    { 1067, bitE, D_CAR_1, 0x4174, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU4,    false, false,false,
      QSTR("TCU4_IGBT相位模块CH故障"),
      QSTR("尝试闭合HSCB") },
    { 1020, bitB, D_CAR_1, 0x4175, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU1,    false, false,false,
      QSTR("TCU1_1低电压电源故障"),
      QSTR("核对低压车辆供电") },
    { 1036, bitB, D_CAR_1, 0x4176, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU2,    false, false,false,
      QSTR("TCU2_1低电压电源故障"),
      QSTR("核对低压车辆供电") },
    { 1052, bitB, D_CAR_1, 0x4177, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU3,    false, false,false,
      QSTR("TCU3_1低电压电源故障"),
      QSTR("核对低压车辆供电") },
    { 1068, bitB, D_CAR_1, 0x4178, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU4,    false, false,false,
      QSTR("TCU4_1低电压电源故障"),
      QSTR("核对低压车辆供电") },
    //*********************************故障代码重复使用
    { 1020, bitC, D_CAR_1, 0x4175, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU1,    false, false,false,
      QSTR("TCU1_2低电压电源故障"),
      QSTR("核对低压车辆供电") },
    { 1036, bitC, D_CAR_1, 0x4176, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU2,    false, false,false,
      QSTR("TCU2_2低电压电源故障"),
      QSTR("核对低压车辆供电") },
    { 1052, bitC, D_CAR_1, 0x4177, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU3,    false, false,false,
      QSTR("TCU3_2低电压电源故障"),
      QSTR("核对低压车辆供电") },
    { 1068, bitC, D_CAR_1, 0x4178, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU4,    false, false,false,
      QSTR("TCU4_2低电压电源故障"),
      QSTR("核对低压车辆供电") },
    //*********************************故障代码重复使用

    { 1011, bit8, D_CAR_1, 0x4279, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU1,    false, false,false,
      QSTR("TCU1_指令错误"),
      QSTR("尝试闭合HSCB") },
    { 1027, bit8, D_CAR_1, 0x427A, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU2,    false, false,false,
      QSTR("TCU2_指令错误"),
      QSTR("尝试闭合HSCB") },
    { 1043, bit8, D_CAR_1, 0x427B, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU3,    false, false,false,
      QSTR("TCU3_指令错误"),
      QSTR("尝试闭合HSCB") },
    { 1059, bit8, D_CAR_1, 0x427C, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU4,    false, false,false,
      QSTR("TCU4_指令错误"),
      QSTR("尝试闭合HSCB") },
    { 1011, bit9, D_CAR_1, 0x427D, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU1,    false, false,false,
      QSTR("TCU1_无法断开主接触器"),
      QSTR("尝试闭合HSCB") },
    { 1027, bit9, D_CAR_1, 0x427E, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU2,    false, false,false,
      QSTR("TCU2_无法断开主接触器"),
      QSTR("尝试闭合HSCB") },
    { 1043, bit9, D_CAR_1, 0x427F, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU3,    false, false,false,
      QSTR("TCU3_无法断开主接触器"),
      QSTR("尝试闭合HSCB") },
    { 1059, bit9, D_CAR_1, 0x4280, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU4,    false, false,false,
      QSTR("TCU4_无法断开主接触器"),
      QSTR("尝试闭合HSCB") },
    { 1011, bitA, D_CAR_1, 0x4281, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU1,    false, false,false,
      QSTR("TCU1_MVB总线CCUKO"),
      QSTR("在紧急运行模式内转换") },
    { 1027, bitA, D_CAR_1, 0x4282, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU2,    false, false,false,
      QSTR("TCU2_MVB总线CCUKO"),
      QSTR("在紧急运行模式内转换") },
    { 1043, bitA, D_CAR_1, 0x4283, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU3,    false, false,false,
      QSTR("TCU3_MVB总线CCUKO"),
      QSTR("在紧急运行模式内转换") },
    { 1059, bitA, D_CAR_1, 0x4284, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU4,    false, false,false,
      QSTR("TCU4_MVB总线CCUKO"),
      QSTR("在紧急运行模式内转换") },
    { 1011, bitB, D_CAR_1, 0x4285, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU1,    false, false,false,
      QSTR("TCU1_滤波器连续过压"),
      QSTR("尝试闭合HSCB") },
    { 1027, bitB, D_CAR_1, 0x4286, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU2,    false, false,false,
      QSTR("TCU2_滤波器连续过压"),
      QSTR("尝试闭合HSCB") },
    { 1043, bitB, D_CAR_1, 0x4287, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU3,    false, false,false,
      QSTR("TCU3_滤波器连续过压"),
      QSTR("尝试闭合HSCB") },
    { 1059, bitB, D_CAR_1, 0x4288, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU4,    false, false,false,
      QSTR("TCU4_滤波器连续过压"),
      QSTR("尝试闭合HSCB") },
    { 1011, bitC, D_CAR_1, 0x4289, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU1,    false, false,false,
      QSTR("TCU1_制动电阻过热"),
      QSTR("检查制动电阻区域有无火情") },
    { 1027, bitC, D_CAR_1, 0x428A, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU2,    false, false,false,
      QSTR("TCU2_制动电阻过热"),
      QSTR("检查制动电阻区域有无火情") },
    { 1043, bitC, D_CAR_1, 0x428B, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU3,    false, false,false,
      QSTR("TCU3_制动电阻过热"),
      QSTR("检查制动电阻区域有无火情") },
    { 1059, bitC, D_CAR_1, 0x428C, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU4,    false, false,false,
      QSTR("TCU4_制动电阻过热"),
      QSTR("检查制动电阻区域有无火情") },
    { 1011, bitD, D_CAR_1, 0x428D, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU1,    false, false,false,
      QSTR("TCU1_速度传感器方向错误"),
      QSTR("尝试将主司控器置于惰性模式后再置于牵引模式") },
    { 1027, bitD, D_CAR_1, 0x428E, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU2,    false, false,false,
      QSTR("TCU2_速度传感器方向错误"),
      QSTR("尝试将主司控器置于惰性模式后再置于牵引模式") },
    { 1043, bitD, D_CAR_1, 0x428F, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU3,    false, false,false,
      QSTR("TCU3_速度传感器方向错误"),
      QSTR("尝试将主司控器置于惰性模式后再置于牵引模式") },
    { 1059, bitD, D_CAR_1, 0x4290, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU4,    false, false,false,
      QSTR("TCU4_速度传感器方向错误"),
      QSTR("尝试将主司控器置于惰性模式后再置于牵引模式") },
    { 1011, bitF, D_CAR_1, 0x4291, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU1,    false, false,false,
      QSTR("TCU1_滤波器低电压"),
      QSTR("无") },
    { 1027, bitF, D_CAR_1, 0x4292, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU2,    false, false,false,
      QSTR("TCU2_滤波器低电压"),
      QSTR("无") },
    { 1043, bitF, D_CAR_1, 0x4293, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU3,    false, false,false,
      QSTR("TCU3_滤波器低电压"),
      QSTR("无") },
    { 1059, bitF, D_CAR_1, 0x4294, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU4,    false, false,false,
      QSTR("TCU4_滤波器低电压"),
      QSTR("无") },
    { 1011, bit1, D_CAR_1, 0x4295, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU1,    false, false,false,
      QSTR("TCU1_DO板卡故障"),
      QSTR("无") },
    { 1027, bit1, D_CAR_1, 0x4296, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU2,    false, false,false,
      QSTR("TCU2_DO板卡故障"),
      QSTR("无") },
    { 1043, bit1, D_CAR_1, 0x4297, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU3,    false, false,false,
      QSTR("TCU3_DO板卡故障"),
      QSTR("无") },
    { 1059, bit1, D_CAR_1, 0x4298, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU4,    false, false,false,
      QSTR("TCU4_DO板卡故障"),
      QSTR("无") },
    { 1011, bit3, D_CAR_1, 0x4299, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU1,    false, false,false,
      QSTR("TCU1_NPC板卡DSP计算故障"),
      QSTR("无") },
    { 1027, bit3, D_CAR_1, 0x429A, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU2,    false, false,false,
      QSTR("TCU2_NPC板卡DSP计算故障"),
      QSTR("无") },
    { 1043, bit3, D_CAR_1, 0x429B, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU3,    false, false,false,
      QSTR("TCU3_NPC板卡DSP计算故障"),
      QSTR("无") },
    { 1059, bit3, D_CAR_1, 0x429C, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU4,    false, false,false,
      QSTR("TCU4_NPC板卡DSP计算故障"),
      QSTR("无") },
    { 1011, bit4, D_CAR_1, 0x429D, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU1,    false, false,false,
      QSTR("TCU1_相位模块热开关干预2秒"),
      QSTR("无") },
    { 1027, bit4, D_CAR_1, 0x429E, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU2,    false, false,false,
      QSTR("TCU2_相位模块热开关干预2秒"),
      QSTR("无") },
    { 1043, bit4, D_CAR_1, 0x429F, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU3,    false, false,false,
      QSTR("TCU3_相位模块热开关干预2秒"),
      QSTR("无") },
    { 1059, bit4, D_CAR_1, 0x42A0, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU4,    false, false,false,
      QSTR("TCU4_相位模块热开关干预2秒"),
      QSTR("无") },
    { 1011, bit5, D_CAR_1, 0x42A1, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU1,    false, false,false,
      QSTR("TCU1_预充电错误"),
      QSTR("尝试闭合HSCB") },
    { 1027, bit5, D_CAR_1, 0x42A2, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU2,    false, false,false,
      QSTR("TCU2_预充电错误"),
      QSTR("尝试闭合HSCB") },
    { 1043, bit5, D_CAR_1, 0x42A3, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU3,    false, false,false,
      QSTR("TCU3_预充电错误"),
      QSTR("尝试闭合HSCB") },
    { 1059, bit5, D_CAR_1, 0x42A4, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU4,    false, false,false,
      QSTR("TCU4_预充电错误"),
      QSTR("尝试闭合HSCB") },
    { 1011, bit7, D_CAR_1, 0x42A5, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU1,    false, false,false,
      QSTR("TCU1_HW不服从SW命令"),
      QSTR("无") },
    { 1027, bit7, D_CAR_1, 0x42A6, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU2,    false, false,false,
      QSTR("TCU2_HW不服从SW命令"),
      QSTR("无") },
    { 1043, bit7, D_CAR_1, 0x42A7, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU3,    false, false,false,
      QSTR("TCU3_HW不服从SW命令"),
      QSTR("无") },
    { 1059, bit7, D_CAR_1, 0x42A8, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU4,    false, false,false,
      QSTR("TCU4_HW不服从SW命令"),
      QSTR("无") },
    { 1012, bitB, D_CAR_1, 0x42A9, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU1,    false, false,false,
      QSTR("TCU1_DO板卡电源故障"),
      QSTR("核对此行通道电源开关状态") },
    { 1028, bitB, D_CAR_1, 0x42AA, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU2,    false, false,false,
      QSTR("TCU2_DO板卡电源故障"),
      QSTR("核对此行通道电源开关状态") },
    { 1044, bitB, D_CAR_1, 0x42AB, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU3,    false, false,false,
      QSTR("TCU3_DO板卡电源故障"),
      QSTR("核对此行通道电源开关状态") },
    { 1060, bitB, D_CAR_1, 0x42AC, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU4,    false, false,false,
      QSTR("TCU4_DO板卡电源故障"),
      QSTR("核对此行通道电源开关状态") },
    { 1012, bit1, D_CAR_1, 0x42AD, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU1,    false, false,false,
      QSTR("TCU1_HSCB指令的DO通道封锁"),
      QSTR("无") },
    { 1028, bit1, D_CAR_1, 0x42AE, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU2,    false, false,false,
      QSTR("TCU2_HSCB指令的DO通道封锁"),
      QSTR("无") },
    { 1044, bit1, D_CAR_1, 0x42AF, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU3,    false, false,false,
      QSTR("TCU3_HSCB指令的DO通道封锁"),
      QSTR("无") },
    { 1060, bit1, D_CAR_1, 0x42B0, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU4,    false, false,false,
      QSTR("TCU4_HSCB指令的DO通道封锁"),
      QSTR("无") },
    //********************同0x412D故障名称重复
    { 1012, bit2, D_CAR_1, 0x42B1, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU1,    false, false,false,
      QSTR("TCU1_主接触器DO通道封锁"),
      QSTR("无") },
    { 1028, bit2, D_CAR_1, 0x42B2, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU2,    false, false,false,
      QSTR("TCU2_主接触器DO通道封锁"),
      QSTR("无") },
    { 1044, bit2, D_CAR_1, 0x42B3, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU3,    false, false,false,
      QSTR("TCU3_主接触器DO通道封锁"),
      QSTR("无") },
    { 1060, bit2, D_CAR_1, 0x42B4, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU4,    false, false,false,
      QSTR("TCU4_主接触器DO通道封锁"),
      QSTR("无") },
    //********************同0x4131故障名称重复
    { 1012, bit3, D_CAR_1, 0x42B5, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU1,    false, false,false,
      QSTR("TCU1_充电接触器DO通道封锁"),
      QSTR("无") },
    { 1028, bit3, D_CAR_1, 0x42B6, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU2,    false, false,false,
      QSTR("TCU2_充电接触器DO通道封锁"),
      QSTR("无") },
    { 1044, bit3, D_CAR_1, 0x42B7, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU3,    false, false,false,
      QSTR("TCU3_充电接触器DO通道封锁"),
      QSTR("无") },
    { 1060, bit3, D_CAR_1, 0x42B8, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU4,    false, false,false,
      QSTR("TCU4_充电接触器DO通道封锁"),
      QSTR("无") },
    { 1012, bit6, D_CAR_1, 0x42B9, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU1,    false, false,false,
      QSTR("TCU1_电机温度警告"),
      QSTR("无") },
    { 1028, bit6, D_CAR_1, 0x42BA, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU2,    false, false,false,
      QSTR("TCU2_电机温度警告"),
      QSTR("无") },
    { 1044, bit6, D_CAR_1, 0x42BB, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU3,    false, false,false,
      QSTR("TCU3_电机温度警告"),
      QSTR("无") },
    { 1060, bit6, D_CAR_1, 0x42BC, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU4,    false, false,false,
      QSTR("TCU4_电机温度警告"),
      QSTR("无") },
    { 1012, bit7, D_CAR_1, 0x42BD, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU1,    false, false,false,
      QSTR("TCU1_电机过热"),
      QSTR("无") },
    { 1028, bit7, D_CAR_1, 0x42BE, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU2,    false, false,false,
      QSTR("TCU2_电机过热"),
      QSTR("无") },
    { 1044, bit7, D_CAR_1, 0x42BF, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU3,    false, false,false,
      QSTR("TCU3_电机过热"),
      QSTR("无") },
    { 1060, bit7, D_CAR_1, 0x42C0, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU4,    false, false,false,
      QSTR("TCU4_电机过热"),
      QSTR("无") },
    { 1013, bit3, D_CAR_1, 0x42C1, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU1,    false, false,false,
      QSTR("TCU1_MVB通信有干扰"),
      QSTR("无") },
    { 1029, bit3, D_CAR_1, 0x42C2, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU2,    false, false,false,
      QSTR("TCU2_MVB通信有干扰"),
      QSTR("无") },
    { 1045, bit3, D_CAR_1, 0x42C3, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU3,    false, false,false,
      QSTR("TCU3_MVB通信有干扰"),
      QSTR("无") },
    { 1061, bit3, D_CAR_1, 0x42C4, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU4,    false, false,false,
      QSTR("TCU4_MVB通信有干扰"),
      QSTR("无") },
    { 1013, bit4, D_CAR_1, 0x42C5, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU1,    false, false,false,
      QSTR("TCU1_线电压过高"),
      QSTR("无") },
    { 1029, bit4, D_CAR_1, 0x42C6, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU2,    false, false,false,
      QSTR("TCU2_线电压过高"),
      QSTR("无") },
    { 1045, bit4, D_CAR_1, 0x42C7, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU3,    false, false,false,
      QSTR("TCU3_线电压过高"),
      QSTR("无") },
    { 1061, bit4, D_CAR_1, 0x42C8, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU4,    false, false,false,
      QSTR("TCU4_线电压过高"),
      QSTR("无") },
    { 1016, bit8, D_CAR_1, 0x42C9, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU1,    false, false,false,
      QSTR("TCU1_NPC-DEW通信故障"),
      QSTR("无") },
    { 1032, bit8, D_CAR_1, 0x42CA, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU2,    false, false,false,
      QSTR("TCU2_NPC-DEW通信故障"),
      QSTR("无") },
    { 1048, bit8, D_CAR_1, 0x42CB, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU3,    false, false,false,
      QSTR("TCU3_NPC-DEW通信故障"),
      QSTR("无") },
    { 1064, bit8, D_CAR_1, 0x42CC, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU4,    false, false,false,
      QSTR("TCU4_NPC-DEW通信故障"),
      QSTR("无") },
    { 1016, bit9, D_CAR_1, 0x42CD, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU1,    false, false,false,
      QSTR("TCU1_NPC-DEW通信KO"),
      QSTR("警告司机车辆运行时该牵引系统切除") },
    { 1032, bit9, D_CAR_1, 0x42CE, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU2,    false, false,false,
      QSTR("TCU2_NPC-DEW通信KO"),
      QSTR("警告司机车辆运行时该牵引系统切除") },
    { 1048, bit9, D_CAR_1, 0x42CF, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU3,    false, false,false,
      QSTR("TCU3_NPC-DEW通信KO"),
      QSTR("警告司机车辆运行时该牵引系统切除") },
    { 1064, bit9, D_CAR_1, 0x42D0, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU4,    false, false,false,
      QSTR("TCU4_NPC-DEW通信KO"),
      QSTR("警告司机车辆运行时该牵引系统切除") },
    { 1017, bit8, D_CAR_1, 0x42D1, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU1,    false, false,false,
      QSTR("TCU1_逆变器A相过流"),
      QSTR("无") },
    { 1033, bit8, D_CAR_1, 0x42D2, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU2,    false, false,false,
      QSTR("TCU2_逆变器A相过流"),
      QSTR("无") },
    { 1049, bit8, D_CAR_1, 0x42D3, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU3,    false, false,false,
      QSTR("TCU3_逆变器A相过流"),
      QSTR("无") },
    { 1065, bit8, D_CAR_1, 0x42D4, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU4,    false, false,false,
      QSTR("TCU4_逆变器A相过流"),
      QSTR("无") },
    { 1017, bit9, D_CAR_1, 0x42D5, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU1,    false, false,false,
      QSTR("TCU1_逆变器B相过流"),
      QSTR("无") },
    { 1033, bit9, D_CAR_1, 0x42D6, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU2,    false, false,false,
      QSTR("TCU2_逆变器B相过流"),
      QSTR("无") },
    { 1049, bit9, D_CAR_1, 0x42D7, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU3,    false, false,false,
      QSTR("TCU3_逆变器B相过流"),
      QSTR("无") },
    { 1065, bit9, D_CAR_1, 0x42D8, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU4,    false, false,false,
      QSTR("TCU4_逆变器B相过流"),
      QSTR("无") },
    { 1017, bitA, D_CAR_1, 0x42D9, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU1,    false, false,false,
      QSTR("TCU1_逆变器C相过流"),
      QSTR("无") },
    { 1033, bitA, D_CAR_1, 0x42DA, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU2,    false, false,false,
      QSTR("TCU2_逆变器C相过流"),
      QSTR("无") },
    { 1049, bitA, D_CAR_1, 0x42DB, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU3,    false, false,false,
      QSTR("TCU3_逆变器C相过流"),
      QSTR("无") },
    { 1065, bitA, D_CAR_1, 0x42DC, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU4,    false, false,false,
      QSTR("TCU4_逆变器C相过流"),
      QSTR("无") },
    { 1017, bit0, D_CAR_1, 0x42DD, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU1,    false, false,false,
      QSTR("TCU1_滤波器过压"),
      QSTR("尝试闭合HSCB") },
    { 1033, bit0, D_CAR_1, 0x42DE, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU2,    false, false,false,
      QSTR("TCU2_滤波器过压"),
      QSTR("尝试闭合HSCB") },
    { 1049, bit0, D_CAR_1, 0x42DF, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU3,    false, false,false,
      QSTR("TCU3_滤波器过压"),
      QSTR("尝试闭合HSCB") },
    { 1065, bit0, D_CAR_1, 0x42E0, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU4,    false, false,false,
      QSTR("TCU4_滤波器过压"),
      QSTR("尝试闭合HSCB") },
    { 1017, bit2, D_CAR_1, 0x42E1, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU1,    false, false,false,
      QSTR("TCU1_线路过流"),
      QSTR("尝试闭合HSCB") },
    { 1033, bit2, D_CAR_1, 0x42E2, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU2,    false, false,false,
      QSTR("TCU2_线路过流"),
      QSTR("尝试闭合HSCB") },
    { 1049, bit2, D_CAR_1, 0x42E3, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU3,    false, false,false,
      QSTR("TCU3_线路过流"),
      QSTR("尝试闭合HSCB") },
    { 1065, bit2, D_CAR_1, 0x42E4, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU4,    false, false,false,
      QSTR("TCU4_线路过流"),
      QSTR("尝试闭合HSCB") },
    { 1012, bit4, D_CAR_1, 0x43E5, D_FAULT_GRADE_3,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU1,    false, false,false,
      QSTR("TCU1_延迟电制动关闭"),
      QSTR("无") },
    { 1028, bit4, D_CAR_1, 0x43E6, D_FAULT_GRADE_3,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU2,    false, false,false,
      QSTR("TCU2_延迟电制动关闭"),
      QSTR("无") },
    { 1044, bit4, D_CAR_1, 0x43E7, D_FAULT_GRADE_3,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU3,    false, false,false,
      QSTR("TCU3_延迟电制动关闭"),
      QSTR("无") },
    { 1060, bit4, D_CAR_1, 0x43E8, D_FAULT_GRADE_3,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU4,    false, false,false,
      QSTR("TCU4_延迟电制动关闭"),
      QSTR("无") },
    { 1013, bit1, D_CAR_1, 0x43E9, D_FAULT_GRADE_3,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU1,    false, false,false,
      QSTR("TCU1_滤波电压偏差值大"),
      QSTR("无") },
    { 1029, bit1, D_CAR_1, 0x43EA, D_FAULT_GRADE_3,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU2,    false, false,false,
      QSTR("TCU2_滤波电压偏差值大"),
      QSTR("无") },
    { 1045, bit1, D_CAR_1, 0x43EB, D_FAULT_GRADE_3,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU3,    false, false,false,
      QSTR("TCU3_滤波电压偏差值大"),
      QSTR("无") },
    { 1061, bit1, D_CAR_1, 0x43EC, D_FAULT_GRADE_3,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU4,    false, false,false,
      QSTR("TCU4_滤波电压偏差值大"),
      QSTR("无") },
    { 1013, bit6, D_CAR_1, 0x43ED, D_FAULT_GRADE_3,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU1,    false, false,false,
      QSTR("TCU1_滤波器放电电阻故障"),
      QSTR("无") },
    { 1029, bit6, D_CAR_1, 0x43EE, D_FAULT_GRADE_3,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU2,    false, false,false,
      QSTR("TCU2_滤波器放电电阻故障"),
      QSTR("无") },
    { 1045, bit6, D_CAR_1, 0x43EF, D_FAULT_GRADE_3,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU3,    false, false,false,
      QSTR("TCU3_滤波器放电电阻故障"),
      QSTR("无") },
    { 1061, bit6, D_CAR_1, 0x43F0, D_FAULT_GRADE_3,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU4,    false, false,false,
      QSTR("TCU4_滤波器放电电阻故障"),
      QSTR("无") },
    { 1013, bit7, D_CAR_1, 0x43F1, D_FAULT_GRADE_3,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU1,    false, false,false,
      QSTR("TCU1_MVB通信数据错误"),
      QSTR("无") },
    { 1029, bit7, D_CAR_1, 0x43F2, D_FAULT_GRADE_3,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU2,    false, false,false,
      QSTR("TCU2_MVB通信数据错误"),
      QSTR("无") },
    { 1045, bit7, D_CAR_1, 0x43F3, D_FAULT_GRADE_3,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU3,    false, false,false,
      QSTR("TCU3_MVB通信数据错误"),
      QSTR("无") },
    { 1061, bit7, D_CAR_1, 0x43F4, D_FAULT_GRADE_3,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU4,    false, false,false,
      QSTR("TCU4_MVB通信数据错误"),
      QSTR("无") },
    { 1015, bit4, D_CAR_1, 0x43F5, D_FAULT_GRADE_3,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU1,    false, false,false,
      QSTR("TCU1_电机温度传感器1故障"),
      QSTR("无") },
    { 1031, bit4, D_CAR_1, 0x43F6, D_FAULT_GRADE_3,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU2,    false, false,false,
      QSTR("TCU2_电机温度传感器1故障"),
      QSTR("无") },
    { 1047, bit4, D_CAR_1, 0x43F7, D_FAULT_GRADE_3,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU3,    false, false,false,
      QSTR("TCU3_电机温度传感器1故障"),
      QSTR("无") },
    { 1063, bit4, D_CAR_1, 0x43F8, D_FAULT_GRADE_3,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU4,    false, false,false,
      QSTR("TCU4_电机温度传感器1故障"),
      QSTR("无") },
    { 1015, bit5, D_CAR_1, 0x43F9, D_FAULT_GRADE_3,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU1,    false, false,false,
      QSTR("TCU1_电机温度传感器2故障"),
      QSTR("无") },
    { 1031, bit5, D_CAR_1, 0x43FA, D_FAULT_GRADE_3,  D_DEVICE_TCU, D_POSITION_MA, D_DEVICENO_TCU2,    false, false,false,
      QSTR("TCU2_电机温度传感器2故障"),
      QSTR("无") },
    { 1047, bit5, D_CAR_1, 0x43FB, D_FAULT_GRADE_3,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU3,    false, false,false,
      QSTR("TCU3_电机温度传感器2故障"),
      QSTR("无") },
    { 1063, bit5, D_CAR_1, 0x43FC, D_FAULT_GRADE_3,  D_DEVICE_TCU, D_POSITION_MB, D_DEVICENO_TCU4,    false, false,false,
      QSTR("TCU4_电机温度传感器2故障"),
      QSTR("无") },




//5_DCDC
    { 2022, bitA, D_CAR_1, 0x5101, D_FAULT_GRADE_1,  D_DEVICE_DCDC, D_POSITION_RA, D_DEVICENO_DCDC1,    false, false,false,
      QSTR("SCU1 IGBT相位模块故障（持久）"),
      QSTR("警告：车辆目前在一个超级电容系统切除的情况下运行") },
    { 2038, bitA, D_CAR_1, 0x5102, D_FAULT_GRADE_1,  D_DEVICE_DCDC, D_POSITION_RB, D_DEVICENO_DCDC2,    false, false,false,
      QSTR("SCU2 IGBT相位模块故障（持久）"),
      QSTR("警告：车辆目前在一个超级电容系统切除的情况下运行") },
    { 2023, bit0, D_CAR_1, 0x5103, D_FAULT_GRADE_1,  D_DEVICE_DCDC, D_POSITION_RA, D_DEVICENO_DCDC1,    false, false,false,
      QSTR("SCU1 预充电接触器封锁"),
      QSTR("警告：车辆目前在一个超级电容系统切除的情况下运行") },
    { 2039, bit0, D_CAR_1, 0x5104, D_FAULT_GRADE_1,  D_DEVICE_DCDC, D_POSITION_RB, D_DEVICENO_DCDC2,    false, false,false,
      QSTR("SCU2 预充电接触器封锁"),
      QSTR("警告：车辆目前在一个超级电容系统切除的情况下运行") },
    { 2023, bit1, D_CAR_1, 0x5105, D_FAULT_GRADE_1,  D_DEVICE_DCDC, D_POSITION_RA, D_DEVICENO_DCDC1,    false, false,false,
      QSTR("SCU1 主接触器封锁"),
      QSTR("警告：车辆目前在一个超级电容系统切除的情况下运行") },
    { 2039, bit1, D_CAR_1, 0x5106, D_FAULT_GRADE_1,  D_DEVICE_DCDC, D_POSITION_RB, D_DEVICENO_DCDC2,    false, false,false,
      QSTR("SCU2 主接触器封锁"),
      QSTR("警告：车辆目前在一个超级电容系统切除的情况下运行") },
    { 2023, bit3, D_CAR_1, 0x5107, D_FAULT_GRADE_1,  D_DEVICE_DCDC, D_POSITION_RA, D_DEVICENO_DCDC1,    false, false,false,
      QSTR("SCU1 HSCB封锁"),
      QSTR("警告：车辆目前在一个超级电容系统切除的情况下运行") },
    { 2039, bit3, D_CAR_1, 0x5108, D_FAULT_GRADE_1,  D_DEVICE_DCDC, D_POSITION_RB, D_DEVICENO_DCDC2,    false, false,false,
      QSTR("SCU2 HSCB封锁"),
      QSTR("警告：车辆目前在一个超级电容系统切除的情况下运行") },
    { 2023, bit4, D_CAR_1, 0x5109, D_FAULT_GRADE_1,  D_DEVICE_DCDC, D_POSITION_RA, D_DEVICENO_DCDC1,    false, false,false,
      QSTR("SCU1 嵌入熔断器熔断"),
      QSTR("警告：车辆目前在一个超级电容系统切除的情况下运行") },
    { 2039, bit4, D_CAR_1, 0x510A, D_FAULT_GRADE_1,  D_DEVICE_DCDC, D_POSITION_RB, D_DEVICENO_DCDC2,    false, false,false,
      QSTR("SCU2 嵌入熔断器熔断"),
      QSTR("警告：车辆目前在一个超级电容系统切除的情况下运行") },
    { 2023, bit5, D_CAR_1, 0x510B, D_FAULT_GRADE_1,  D_DEVICE_DCDC, D_POSITION_RA, D_DEVICENO_DCDC1,    false, false,false,
      QSTR("SCU1 HSCB动作次数超限"),
      QSTR("警告：车辆目前在一个超级电容系统切除的情况下运行") },
    { 2039, bit5, D_CAR_1, 0x510C, D_FAULT_GRADE_1,  D_DEVICE_DCDC, D_POSITION_RB, D_DEVICENO_DCDC2,    false, false,false,
      QSTR("SCU2 HSCB动作次数超限"),
      QSTR("警告：车辆目前在一个超级电容系统切除的情况下运行") },
    { 2023, bit6, D_CAR_1, 0x510D, D_FAULT_GRADE_1,  D_DEVICE_DCDC, D_POSITION_RA, D_DEVICENO_DCDC1,    false, false,false,
      QSTR("SCU1 手动切除相位模块"),
      QSTR("警告：车辆目前在一个超级电容系统切除的情况下运行") },
    { 2039, bit6, D_CAR_1, 0x510E, D_FAULT_GRADE_1,  D_DEVICE_DCDC, D_POSITION_RB, D_DEVICENO_DCDC2,    false, false,false,
      QSTR("SCU2 手动切除相位模块"),
      QSTR("警告：车辆目前在一个超级电容系统切除的情况下运行") },
    { 2023, bit7, D_CAR_1, 0x510F, D_FAULT_GRADE_1,  D_DEVICE_DCDC, D_POSITION_RA, D_DEVICENO_DCDC1,    false, false,false,
      QSTR("SCU1 相位模块热敏开关多次或连续干预"),
      QSTR("警告：车辆目前在一个超级电容系统切除的情况下运行") },
    { 2039, bit7, D_CAR_1, 0x5110, D_FAULT_GRADE_1,  D_DEVICE_DCDC, D_POSITION_RB, D_DEVICENO_DCDC2,    false, false,false,
      QSTR("SCU2 相位模块热敏开关多次或连续干预"),
      QSTR("警告：车辆目前在一个超级电容系统切除的情况下运行") },
    { 2024, bit4, D_CAR_1, 0x5111, D_FAULT_GRADE_1,  D_DEVICE_DCDC, D_POSITION_RA, D_DEVICENO_DCDC1,    false, false,false,
      QSTR("SCU1 SCM1内部高压不平衡超限"),
      QSTR("无，系统功能能保证此次运行交路") },
    { 2025, bit4, D_CAR_1, 0x5112, D_FAULT_GRADE_1,  D_DEVICE_DCDC, D_POSITION_RA, D_DEVICENO_DCDC1,    false, false,false,
      QSTR("SCU1 SCM2内部高压不平衡超限"),
      QSTR("无，系统功能能保证此次运行交路") },
    { 2026, bit4, D_CAR_1, 0x5113, D_FAULT_GRADE_1,  D_DEVICE_DCDC, D_POSITION_RA, D_DEVICENO_DCDC1,    false, false,false,
      QSTR("SCU1 SCM3内部高压不平衡超限"),
      QSTR("无，系统功能能保证此次运行交路") },
    { 2027, bit4, D_CAR_1, 0x5114, D_FAULT_GRADE_1,  D_DEVICE_DCDC, D_POSITION_RA, D_DEVICENO_DCDC1,    false, false,false,
      QSTR("SCU1 SCM4内部高压不平衡超限"),
      QSTR("无，系统功能能保证此次运行交路") },
    { 2040, bit4, D_CAR_1, 0x5115, D_FAULT_GRADE_1,  D_DEVICE_DCDC, D_POSITION_RB, D_DEVICENO_DCDC2,    false, false,false,
      QSTR("SCU2 SCM1内部高压不平衡超限"),
      QSTR("无，系统功能能保证此次运行交路") },
    { 2041, bit4, D_CAR_1, 0x5116, D_FAULT_GRADE_1,  D_DEVICE_DCDC, D_POSITION_RB, D_DEVICENO_DCDC2,    false, false,false,
      QSTR("SCU2 SCM2内部高压不平衡超限"),
      QSTR("无，系统功能能保证此次运行交路") },
    { 2042, bit4, D_CAR_1, 0x5117, D_FAULT_GRADE_1,  D_DEVICE_DCDC, D_POSITION_RB, D_DEVICENO_DCDC2,    false, false,false,
      QSTR("SCU2 SCM3内部高压不平衡超限"),
      QSTR("无，系统功能能保证此次运行交路") },
    { 2043, bit4, D_CAR_1, 0x5118, D_FAULT_GRADE_1,  D_DEVICE_DCDC, D_POSITION_RB, D_DEVICENO_DCDC2,    false, false,false,
      QSTR("SCU2 SCM4内部高压不平衡超限"),
      QSTR("无，系统功能能保证此次运行交路") },
    { 2024, bit5, D_CAR_1, 0x5119, D_FAULT_GRADE_1,  D_DEVICE_DCDC, D_POSITION_RA, D_DEVICENO_DCDC1,    false, false,false,
      QSTR("SCU1 SCM1达到模块最大工作温度"),
      QSTR("警告：车辆目前在一个超级电容系统关闭的情况下运行") },
    { 2025, bit5, D_CAR_1, 0x511A, D_FAULT_GRADE_1,  D_DEVICE_DCDC, D_POSITION_RA, D_DEVICENO_DCDC1,    false, false,false,
      QSTR("SCU1 SCM2达到模块最大工作温度"),
      QSTR("警告：车辆目前在一个超级电容系统关闭的情况下运行") },
    { 2026, bit5, D_CAR_1, 0x511B, D_FAULT_GRADE_1,  D_DEVICE_DCDC, D_POSITION_RA, D_DEVICENO_DCDC1,    false, false,false,
      QSTR("SCU1 SCM3达到模块最大工作温度"),
      QSTR("警告：车辆目前在一个超级电容系统关闭的情况下运行") },
    { 2027, bit5, D_CAR_1, 0x511C, D_FAULT_GRADE_1,  D_DEVICE_DCDC, D_POSITION_RA, D_DEVICENO_DCDC1,    false, false,false,
      QSTR("SCU1 SCM4达到模块最大工作温度"),
      QSTR("警告：车辆目前在一个超级电容系统关闭的情况下运行") },
    { 2040, bit5, D_CAR_1, 0x511D, D_FAULT_GRADE_1,  D_DEVICE_DCDC, D_POSITION_RB, D_DEVICENO_DCDC2,    false, false,false,
      QSTR("SCU2 SCM1达到模块最大工作温度"),
      QSTR("警告：车辆目前在一个超级电容系统关闭的情况下运行") },
    { 2041, bit5, D_CAR_1, 0x511E, D_FAULT_GRADE_1,  D_DEVICE_DCDC, D_POSITION_RB, D_DEVICENO_DCDC2,    false, false,false,
      QSTR("SCU2 SCM2达到模块最大工作温度"),
      QSTR("警告：车辆目前在一个超级电容系统关闭的情况下运行") },
    { 2042, bit5, D_CAR_1, 0x511F, D_FAULT_GRADE_1,  D_DEVICE_DCDC, D_POSITION_RB, D_DEVICENO_DCDC2,    false, false,false,
      QSTR("SCU2 SCM3达到模块最大工作温度"),
      QSTR("警告：车辆目前在一个超级电容系统关闭的情况下运行") },
    { 2043, bit5, D_CAR_1, 0x5120, D_FAULT_GRADE_1,  D_DEVICE_DCDC, D_POSITION_RB, D_DEVICENO_DCDC2,    false, false,false,
      QSTR("SCU2 SCM4达到模块最大工作温度"),
      QSTR("警告：车辆目前在一个超级电容系统关闭的情况下运行") },
    { 2024, bit7, D_CAR_1, 0x5121, D_FAULT_GRADE_1,  D_DEVICE_DCDC, D_POSITION_RA, D_DEVICENO_DCDC1,    false, false,false,
      QSTR("SCU1 SCM1服务请求"),
      QSTR("无") },
    { 2025, bit7, D_CAR_1, 0x5122, D_FAULT_GRADE_1,  D_DEVICE_DCDC, D_POSITION_RA, D_DEVICENO_DCDC1,    false, false,false,
      QSTR("SCU1 SCM2服务请求"),
      QSTR("无") },
    { 2026, bit7, D_CAR_1, 0x5123, D_FAULT_GRADE_1,  D_DEVICE_DCDC, D_POSITION_RA, D_DEVICENO_DCDC1,    false, false,false,
      QSTR("SCU1 SCM3服务请求"),
      QSTR("无") },
    { 2027, bit7, D_CAR_1, 0x5124, D_FAULT_GRADE_1,  D_DEVICE_DCDC, D_POSITION_RA, D_DEVICENO_DCDC1,    false, false,false,
      QSTR("SCU1 SCM4服务请求"),
      QSTR("无") },
    { 2040, bit7, D_CAR_1, 0x5125, D_FAULT_GRADE_1,  D_DEVICE_DCDC, D_POSITION_RB, D_DEVICENO_DCDC2,    false, false,false,
      QSTR("SCU2 SCM1服务请求"),
      QSTR("无") },
    { 2041, bit7, D_CAR_1, 0x5126, D_FAULT_GRADE_1,  D_DEVICE_DCDC, D_POSITION_RB, D_DEVICENO_DCDC2,    false, false,false,
      QSTR("SCU2 SCM2服务请求"),
      QSTR("无") },
    { 2042, bit7, D_CAR_1, 0x5127, D_FAULT_GRADE_1,  D_DEVICE_DCDC, D_POSITION_RB, D_DEVICENO_DCDC2,    false, false,false,
      QSTR("SCU2 SCM3服务请求"),
      QSTR("无") },
    { 2043, bit7, D_CAR_1, 0x5128, D_FAULT_GRADE_1,  D_DEVICE_DCDC, D_POSITION_RB, D_DEVICENO_DCDC2,    false, false,false,
      QSTR("SCU2 SCM4服务请求"),
      QSTR("无") },
    { 2024, bit8, D_CAR_1, 0x5129, D_FAULT_GRADE_1,  D_DEVICE_DCDC, D_POSITION_RA, D_DEVICENO_DCDC1,    false, false,false,
      QSTR("SCU1 SCM1达到模块最小工作温度"),
      QSTR("警告：车辆目前在一个超级电容系统关闭的情况下运行") },
    { 2025, bit8, D_CAR_1, 0x512A, D_FAULT_GRADE_1,  D_DEVICE_DCDC, D_POSITION_RA, D_DEVICENO_DCDC1,    false, false,false,
      QSTR("SCU1 SCM2达到模块最小工作温度"),
      QSTR("警告：车辆目前在一个超级电容系统关闭的情况下运行") },
    { 2026, bit8, D_CAR_1, 0x512B, D_FAULT_GRADE_1,  D_DEVICE_DCDC, D_POSITION_RA, D_DEVICENO_DCDC1,    false, false,false,
      QSTR("SCU1 SCM3达到模块最小工作温度"),
      QSTR("警告：车辆目前在一个超级电容系统关闭的情况下运行") },
    { 2027, bit8, D_CAR_1, 0x512C, D_FAULT_GRADE_1,  D_DEVICE_DCDC, D_POSITION_RA, D_DEVICENO_DCDC1,    false, false,false,
      QSTR("SCU1 SCM4达到模块最小工作温度"),
      QSTR("警告：车辆目前在一个超级电容系统关闭的情况下运行") },
    { 2040, bit8, D_CAR_1, 0x512D, D_FAULT_GRADE_1,  D_DEVICE_DCDC, D_POSITION_RB, D_DEVICENO_DCDC2,    false, false,false,
      QSTR("SCU2 SCM1达到模块最小工作温度"),
      QSTR("警告：车辆目前在一个超级电容系统关闭的情况下运行") },
    { 2041, bit8, D_CAR_1, 0x512E, D_FAULT_GRADE_1,  D_DEVICE_DCDC, D_POSITION_RB, D_DEVICENO_DCDC2,    false, false,false,
      QSTR("SCU2 SCM2达到模块最小工作温度"),
      QSTR("警告：车辆目前在一个超级电容系统关闭的情况下运行") },
    { 2042, bit8, D_CAR_1, 0x512F, D_FAULT_GRADE_1,  D_DEVICE_DCDC, D_POSITION_RB, D_DEVICENO_DCDC2,    false, false,false,
      QSTR("SCU2 SCM3达到模块最小工作温度"),
      QSTR("警告：车辆目前在一个超级电容系统关闭的情况下运行") },
    { 2043, bit8, D_CAR_1, 0x5130, D_FAULT_GRADE_1,  D_DEVICE_DCDC, D_POSITION_RB, D_DEVICENO_DCDC2,    false, false,false,
      QSTR("SCU2 SCM4达到模块最小工作温度"),
      QSTR("警告：车辆目前在一个超级电容系统关闭的情况下运行") },
    { 2024, bitC, D_CAR_1, 0x5131, D_FAULT_GRADE_1,  D_DEVICE_DCDC, D_POSITION_RA, D_DEVICENO_DCDC1,    false, false,false,
      QSTR("SCU1 SCM1内部高压不平衡"),
      QSTR("无") },
    { 2025, bitC, D_CAR_1, 0x5132, D_FAULT_GRADE_1,  D_DEVICE_DCDC, D_POSITION_RA, D_DEVICENO_DCDC1,    false, false,false,
      QSTR("SCU1 SCM2内部高压不平衡"),
      QSTR("无") },
    { 2026, bitC, D_CAR_1, 0x5133, D_FAULT_GRADE_1,  D_DEVICE_DCDC, D_POSITION_RA, D_DEVICENO_DCDC1,    false, false,false,
      QSTR("SCU1 SCM3内部高压不平衡"),
      QSTR("无") },
    { 2027, bitC, D_CAR_1, 0x5134, D_FAULT_GRADE_1,  D_DEVICE_DCDC, D_POSITION_RA, D_DEVICENO_DCDC1,    false, false,false,
      QSTR("SCU1 SCM4内部高压不平衡"),
      QSTR("无") },
    { 2040, bitC, D_CAR_1, 0x5135, D_FAULT_GRADE_1,  D_DEVICE_DCDC, D_POSITION_RB, D_DEVICENO_DCDC2,    false, false,false,
      QSTR("SCU2 SCM1内部高压不平衡"),
      QSTR("无") },
    { 2041, bitC, D_CAR_1, 0x5136, D_FAULT_GRADE_1,  D_DEVICE_DCDC, D_POSITION_RB, D_DEVICENO_DCDC2,    false, false,false,
      QSTR("SCU2 SCM2内部高压不平衡"),
      QSTR("无") },
    { 2042, bitC, D_CAR_1, 0x5137, D_FAULT_GRADE_1,  D_DEVICE_DCDC, D_POSITION_RB, D_DEVICENO_DCDC2,    false, false,false,
      QSTR("SCU2 SCM3内部高压不平衡"),
      QSTR("无") },
    { 2043, bitC, D_CAR_1, 0x5138, D_FAULT_GRADE_1,  D_DEVICE_DCDC, D_POSITION_RB, D_DEVICENO_DCDC2,    false, false,false,
      QSTR("SCU2 SCM4内部高压不平衡"),
      QSTR("无") },
    { 2024, bitD, D_CAR_1, 0x5139, D_FAULT_GRADE_1,  D_DEVICE_DCDC, D_POSITION_RA, D_DEVICENO_DCDC1,    false, false,false,
      QSTR("SCU1 SCM1模块温度超过最大限制"),
      QSTR("警告：车辆目前在一个超级电容系统关闭的情况下运行") },
    { 2025, bitD, D_CAR_1, 0x513A, D_FAULT_GRADE_1,  D_DEVICE_DCDC, D_POSITION_RA, D_DEVICENO_DCDC1,    false, false,false,
      QSTR("SCU1 SCM2模块温度超过最大限制"),
      QSTR("警告：车辆目前在一个超级电容系统关闭的情况下运行") },
    { 2026, bitD, D_CAR_1, 0x513B, D_FAULT_GRADE_1,  D_DEVICE_DCDC, D_POSITION_RA, D_DEVICENO_DCDC1,    false, false,false,
      QSTR("SCU1 SCM3模块温度超过最大限制"),
      QSTR("警告：车辆目前在一个超级电容系统关闭的情况下运行") },
    { 2027, bitD, D_CAR_1, 0x513C, D_FAULT_GRADE_1,  D_DEVICE_DCDC, D_POSITION_RA, D_DEVICENO_DCDC1,    false, false,false,
      QSTR("SCU1 SCM4模块温度超过最大限制"),
      QSTR("警告：车辆目前在一个超级电容系统关闭的情况下运行") },
    { 2040, bitD, D_CAR_1, 0x513D, D_FAULT_GRADE_1,  D_DEVICE_DCDC, D_POSITION_RB, D_DEVICENO_DCDC2,    false, false,false,
      QSTR("SCU2 SCM1模块温度超过最大限制"),
      QSTR("警告：车辆目前在一个超级电容系统关闭的情况下运行") },
    { 2041, bitD, D_CAR_1, 0x513E, D_FAULT_GRADE_1,  D_DEVICE_DCDC, D_POSITION_RB, D_DEVICENO_DCDC2,    false, false,false,
      QSTR("SCU2 SCM2模块温度超过最大限制"),
      QSTR("警告：车辆目前在一个超级电容系统关闭的情况下运行") },
    { 2042, bitD, D_CAR_1, 0x513F, D_FAULT_GRADE_1,  D_DEVICE_DCDC, D_POSITION_RB, D_DEVICENO_DCDC2,    false, false,false,
      QSTR("SCU2 SCM3模块温度超过最大限制"),
      QSTR("警告：车辆目前在一个超级电容系统关闭的情况下运行") },
    { 2043, bitD, D_CAR_1, 0x5140, D_FAULT_GRADE_1,  D_DEVICE_DCDC, D_POSITION_RB, D_DEVICENO_DCDC2,    false, false,false,
      QSTR("SCU2 SCM4模块温度超过最大限制"),
      QSTR("警告：车辆目前在一个超级电容系统关闭的情况下运行") },
    { 2024, bitF, D_CAR_1, 0x5141, D_FAULT_GRADE_1,  D_DEVICE_DCDC, D_POSITION_RA, D_DEVICENO_DCDC1,    false, false,false,
      QSTR("SCU1 SCM1服务请求"),
      QSTR("无") },
    { 2025, bitF, D_CAR_1, 0x5142, D_FAULT_GRADE_1,  D_DEVICE_DCDC, D_POSITION_RA, D_DEVICENO_DCDC1,    false, false,false,
      QSTR("SCU1 SCM2服务请求"),
      QSTR("无") },
    { 2026, bitF, D_CAR_1, 0x5143, D_FAULT_GRADE_1,  D_DEVICE_DCDC, D_POSITION_RA, D_DEVICENO_DCDC1,    false, false,false,
      QSTR("SCU1 SCM3服务请求"),
      QSTR("无") },
    { 2027, bitF, D_CAR_1, 0x5144, D_FAULT_GRADE_1,  D_DEVICE_DCDC, D_POSITION_RA, D_DEVICENO_DCDC1,    false, false,false,
      QSTR("SCU1 SCM4服务请求"),
      QSTR("无") },
    { 2040, bitF, D_CAR_1, 0x5145, D_FAULT_GRADE_1,  D_DEVICE_DCDC, D_POSITION_RB, D_DEVICENO_DCDC2,    false, false,false,
      QSTR("SCU2 SCM1服务请求"),
      QSTR("无") },
    { 2041, bitF, D_CAR_1, 0x5146, D_FAULT_GRADE_1,  D_DEVICE_DCDC, D_POSITION_RB, D_DEVICENO_DCDC2,    false, false,false,
      QSTR("SCU2 SCM2服务请求"),
      QSTR("无") },
    { 2042, bitF, D_CAR_1, 0x5147, D_FAULT_GRADE_1,  D_DEVICE_DCDC, D_POSITION_RB, D_DEVICENO_DCDC2,    false, false,false,
      QSTR("SCU2 SCM3服务请求"),
      QSTR("无") },
    { 2043, bitF, D_CAR_1, 0x5148, D_FAULT_GRADE_1,  D_DEVICE_DCDC, D_POSITION_RB, D_DEVICENO_DCDC2,    false, false,false,
      QSTR("SCU2 SCM4服务请求"),
      QSTR("无") },
    { 2022, bit0, D_CAR_1, 0x5249, D_FAULT_GRADE_2,  D_DEVICE_DCDC, D_POSITION_RA, D_DEVICENO_DCDC1,    false, false,false,
      QSTR("SCU1 IGBT 相位模块故障"),
      QSTR("尝试闭合HSCB") },
    { 2038, bit0, D_CAR_1, 0x524A, D_FAULT_GRADE_2,  D_DEVICE_DCDC, D_POSITION_RB, D_DEVICENO_DCDC2,    false, false,false,
      QSTR("SCU2 IGBT 相位模块故障"),
      QSTR("尝试闭合HSCB") },
    { 2022, bit2, D_CAR_1, 0x524B, D_FAULT_GRADE_2,  D_DEVICE_DCDC, D_POSITION_RA, D_DEVICENO_DCDC1,    false, false,false,
      QSTR("SCU1 滤波器过电压(HW)"),
      QSTR("尝试闭合HSCB") },
    { 2038, bit2, D_CAR_1, 0x524C, D_FAULT_GRADE_2,  D_DEVICE_DCDC, D_POSITION_RB, D_DEVICENO_DCDC2,    false, false,false,
      QSTR("SCU2 滤波器过电压(HW)"),
      QSTR("尝试闭合HSCB") },
    { 2022, bit3, D_CAR_1, 0x524D, D_FAULT_GRADE_2,  D_DEVICE_DCDC, D_POSITION_RA, D_DEVICENO_DCDC1,    false, false,false,
      QSTR("SCU1 线电流过流（HW）"),
      QSTR("尝试闭合HSCB") },
    { 2038, bit3, D_CAR_1, 0x524E, D_FAULT_GRADE_2,  D_DEVICE_DCDC, D_POSITION_RB, D_DEVICENO_DCDC2,    false, false,false,
      QSTR("SCU2 线电流过流（HW）"),
      QSTR("尝试闭合HSCB") },
    { 2022, bit5, D_CAR_1, 0x524F, D_FAULT_GRADE_2,  D_DEVICE_DCDC, D_POSITION_RA, D_DEVICENO_DCDC1,    false, false,false,
      QSTR("SCU1 过压（HW）"),
      QSTR("无") },
    { 2038, bit5, D_CAR_1, 0x5250, D_FAULT_GRADE_2,  D_DEVICE_DCDC, D_POSITION_RB, D_DEVICENO_DCDC2,    false, false,false,
      QSTR("SCU2 过压（HW）"),
      QSTR("无") },
    { 2022, bit6, D_CAR_1, 0x5251, D_FAULT_GRADE_2,  D_DEVICE_DCDC, D_POSITION_RA, D_DEVICENO_DCDC1,    false, false,false,
      QSTR("SCU1 过流（HW）"),
      QSTR("无") },
    { 2038, bit6, D_CAR_1, 0x5252, D_FAULT_GRADE_2,  D_DEVICE_DCDC, D_POSITION_RB, D_DEVICENO_DCDC2,    false, false,false,
      QSTR("SCU2 过流（HW）"),
      QSTR("无") },
    { 2022, bit8, D_CAR_1, 0x5253, D_FAULT_GRADE_2,  D_DEVICE_DCDC, D_POSITION_RA, D_DEVICENO_DCDC1,    false, false,false,
      QSTR("SCU1 滤波器过电压(SW)"),
      QSTR("无") },
    { 2038, bit8, D_CAR_1, 0x5254, D_FAULT_GRADE_2,  D_DEVICE_DCDC, D_POSITION_RB, D_DEVICENO_DCDC2,    false, false,false,
      QSTR("SCU2 滤波器过电压(SW)"),
      QSTR("无") },
    { 2022, bitB, D_CAR_1, 0x5255, D_FAULT_GRADE_2,  D_DEVICE_DCDC, D_POSITION_RA, D_DEVICENO_DCDC1,    false, false,false,
      QSTR("SCU1 过压（SW）"),
      QSTR("无") },
    { 2038, bitB, D_CAR_1, 0x5256, D_FAULT_GRADE_2,  D_DEVICE_DCDC, D_POSITION_RB, D_DEVICENO_DCDC2,    false, false,false,
      QSTR("SCU2 过压（SW）"),
      QSTR("无") },
    { 2022, bitC, D_CAR_1, 0x5257, D_FAULT_GRADE_2,  D_DEVICE_DCDC, D_POSITION_RA, D_DEVICENO_DCDC1,    false, false,false,
      QSTR("SCU1 过流（SW）"),
      QSTR("无") },
    { 2038, bitC, D_CAR_1, 0x5258, D_FAULT_GRADE_2,  D_DEVICE_DCDC, D_POSITION_RB, D_DEVICENO_DCDC2,    false, false,false,
      QSTR("SCU2 过流（SW）"),
      QSTR("无") },
    { 2023, bit8, D_CAR_1, 0x5259, D_FAULT_GRADE_2,  D_DEVICE_DCDC, D_POSITION_RA, D_DEVICENO_DCDC1,    false, false,false,
      QSTR("SCU1 相位模块热敏开关干预"),
      QSTR("无") },
    { 2039, bit8, D_CAR_1, 0x525A, D_FAULT_GRADE_2,  D_DEVICE_DCDC, D_POSITION_RB, D_DEVICENO_DCDC2,    false, false,false,
      QSTR("SCU2 相位模块热敏开关干预"),
      QSTR("无") },
    { 2023, bit9, D_CAR_1, 0x525B, D_FAULT_GRADE_2,  D_DEVICE_DCDC, D_POSITION_RA, D_DEVICENO_DCDC1,    false, false,false,
      QSTR("SCU1 预充电错误"),
      QSTR("尝试闭合HSCB") },
    { 2039, bit9, D_CAR_1, 0x525C, D_FAULT_GRADE_2,  D_DEVICE_DCDC, D_POSITION_RB, D_DEVICENO_DCDC2,    false, false,false,
      QSTR("SCU2 预充电错误"),
      QSTR("尝试闭合HSCB") },
    { 2024, bit6, D_CAR_1, 0x525D, D_FAULT_GRADE_2,  D_DEVICE_DCDC, D_POSITION_RA, D_DEVICENO_DCDC1,    false, false,false,
      QSTR("SCU1 SCM1模块全电压过高"),
      QSTR("无") },
    { 2025, bit6, D_CAR_1, 0x525E, D_FAULT_GRADE_2,  D_DEVICE_DCDC, D_POSITION_RA, D_DEVICENO_DCDC1,    false, false,false,
      QSTR("SCU1 SCM2模块全电压过高"),
      QSTR("无") },
    { 2026, bit6, D_CAR_1, 0x525F, D_FAULT_GRADE_2,  D_DEVICE_DCDC, D_POSITION_RA, D_DEVICENO_DCDC1,    false, false,false,
      QSTR("SCU1 SCM3模块全电压过高"),
      QSTR("无") },
    { 2027, bit6, D_CAR_1, 0x5260, D_FAULT_GRADE_2,  D_DEVICE_DCDC, D_POSITION_RA, D_DEVICENO_DCDC1,    false, false,false,
      QSTR("SCU1 SCM4模块全电压过高"),
      QSTR("无") },
    { 2040, bit6, D_CAR_1, 0x5261, D_FAULT_GRADE_2,  D_DEVICE_DCDC, D_POSITION_RB, D_DEVICENO_DCDC2,    false, false,false,
      QSTR("SCU2 SCM1模块全电压过高"),
      QSTR("无") },
    { 2041, bit6, D_CAR_1, 0x5262, D_FAULT_GRADE_2,  D_DEVICE_DCDC, D_POSITION_RB, D_DEVICENO_DCDC2,    false, false,false,
      QSTR("SCU2 SCM2模块全电压过高"),
      QSTR("无") },
    { 2042, bit6, D_CAR_1, 0x5263, D_FAULT_GRADE_2,  D_DEVICE_DCDC, D_POSITION_RB, D_DEVICENO_DCDC2,    false, false,false,
      QSTR("SCU2 SCM3模块全电压过高"),
      QSTR("无") },
    { 2043, bit6, D_CAR_1, 0x5264, D_FAULT_GRADE_2,  D_DEVICE_DCDC, D_POSITION_RB, D_DEVICENO_DCDC2,    false, false,false,
      QSTR("SCU2 SCM4模块全电压过高"),
      QSTR("无") },
    { 2024, bit9, D_CAR_1, 0x5265, D_FAULT_GRADE_2,  D_DEVICE_DCDC, D_POSITION_RA, D_DEVICENO_DCDC1,    false, false,false,
      QSTR("SCU1 SCM1模块半电压过高"),
      QSTR("无") },
    { 2025, bit9, D_CAR_1, 0x5266, D_FAULT_GRADE_2,  D_DEVICE_DCDC, D_POSITION_RA, D_DEVICENO_DCDC1,    false, false,false,
      QSTR("SCU1 SCM2模块半电压过高"),
      QSTR("无") },
    { 2026, bit9, D_CAR_1, 0x5267, D_FAULT_GRADE_2,  D_DEVICE_DCDC, D_POSITION_RA, D_DEVICENO_DCDC1,    false, false,false,
      QSTR("SCU1 SCM3模块半电压过高"),
      QSTR("无") },
    { 2027, bit9, D_CAR_1, 0x5268, D_FAULT_GRADE_2,  D_DEVICE_DCDC, D_POSITION_RA, D_DEVICENO_DCDC1,    false, false,false,
      QSTR("SCU1 SCM4模块半电压过高"),
      QSTR("无") },
    { 2040, bit9, D_CAR_1, 0x5269, D_FAULT_GRADE_2,  D_DEVICE_DCDC, D_POSITION_RB, D_DEVICENO_DCDC2,    false, false,false,
      QSTR("SCU2 SCM1模块半电压过高"),
      QSTR("无") },
    { 2041, bit9, D_CAR_1, 0x526A, D_FAULT_GRADE_2,  D_DEVICE_DCDC, D_POSITION_RB, D_DEVICENO_DCDC2,    false, false,false,
      QSTR("SCU2 SCM2模块半电压过高"),
      QSTR("无") },
    { 2042, bit9, D_CAR_1, 0x526B, D_FAULT_GRADE_2,  D_DEVICE_DCDC, D_POSITION_RB, D_DEVICENO_DCDC2,    false, false,false,
      QSTR("SCU2 SCM3模块半电压过高"),
      QSTR("无") },
    { 2043, bit9, D_CAR_1, 0x526C, D_FAULT_GRADE_2,  D_DEVICE_DCDC, D_POSITION_RB, D_DEVICENO_DCDC2,    false, false,false,
      QSTR("SCU2 SCM4模块半电压过高"),
      QSTR("无") },
    { 2024, bitE, D_CAR_1, 0x526D, D_FAULT_GRADE_2,  D_DEVICE_DCDC, D_POSITION_RA, D_DEVICENO_DCDC1,    false, false,false,
      QSTR("SCU1 SCM1模块全电压超限"),
      QSTR("无") },
    { 2025, bitE, D_CAR_1, 0x526E, D_FAULT_GRADE_2,  D_DEVICE_DCDC, D_POSITION_RA, D_DEVICENO_DCDC1,    false, false,false,
      QSTR("SCU1 SCM2模块全电压超限"),
      QSTR("无") },
    { 2026, bitE, D_CAR_1, 0x526F, D_FAULT_GRADE_2,  D_DEVICE_DCDC, D_POSITION_RA, D_DEVICENO_DCDC1,    false, false,false,
      QSTR("SCU1 SCM3模块全电压超限"),
      QSTR("无") },
    { 2027, bitE, D_CAR_1, 0x5270, D_FAULT_GRADE_2,  D_DEVICE_DCDC, D_POSITION_RA, D_DEVICENO_DCDC1,    false, false,false,
      QSTR("SCU1 SCM4模块全电压超限"),
      QSTR("无") },
    { 2040, bitE, D_CAR_1, 0x5271, D_FAULT_GRADE_2,  D_DEVICE_DCDC, D_POSITION_RB, D_DEVICENO_DCDC2,    false, false,false,
      QSTR("SCU2 SCM1模块全电压超限"),
      QSTR("无") },
    { 2041, bitE, D_CAR_1, 0x5272, D_FAULT_GRADE_2,  D_DEVICE_DCDC, D_POSITION_RB, D_DEVICENO_DCDC2,    false, false,false,
      QSTR("SCU2 SCM2模块全电压超限"),
      QSTR("无") },
    { 2042, bitE, D_CAR_1, 0x5273, D_FAULT_GRADE_2,  D_DEVICE_DCDC, D_POSITION_RB, D_DEVICENO_DCDC2,    false, false,false,
      QSTR("SCU2 SCM3模块全电压超限"),
      QSTR("无") },
    { 2043, bitE, D_CAR_1, 0x5274, D_FAULT_GRADE_2,  D_DEVICE_DCDC, D_POSITION_RB, D_DEVICENO_DCDC2,    false, false,false,
      QSTR("SCU2 SCM4模块全电压超限"),
      QSTR("无") },
    { 2022, bitF, D_CAR_1, 0x5375, D_FAULT_GRADE_3,  D_DEVICE_DCDC, D_POSITION_RA, D_DEVICENO_DCDC1,    false, false,false,
      QSTR("SCU1 滤波器预充电过快"),
      QSTR("尝试闭合HSCB") },
    { 2038, bitF, D_CAR_1, 0x5376, D_FAULT_GRADE_3,  D_DEVICE_DCDC, D_POSITION_RB, D_DEVICENO_DCDC2,    false, false,false,
      QSTR("SCU2 滤波器预充电过快"),
      QSTR("尝试闭合HSCB") },
    { 2024, bit0, D_CAR_1, 0x5377, D_FAULT_GRADE_3,  D_DEVICE_DCDC, D_POSITION_RA, D_DEVICENO_DCDC1,    false, false,false,
      QSTR("SCU1 SCM1模块温度低"),
      QSTR("无") },
    { 2025, bit0, D_CAR_1, 0x5378, D_FAULT_GRADE_3,  D_DEVICE_DCDC, D_POSITION_RA, D_DEVICENO_DCDC1,    false, false,false,
      QSTR("SCU1 SCM2模块温度低"),
      QSTR("无") },
    { 2026, bit0, D_CAR_1, 0x5379, D_FAULT_GRADE_3,  D_DEVICE_DCDC, D_POSITION_RA, D_DEVICENO_DCDC1,    false, false,false,
      QSTR("SCU1 SCM3模块温度低"),
      QSTR("无") },
    { 2027, bit0, D_CAR_1, 0x537A, D_FAULT_GRADE_3,  D_DEVICE_DCDC, D_POSITION_RA, D_DEVICENO_DCDC1,    false, false,false,
      QSTR("SCU1 SCM4模块温度低"),
      QSTR("无") },
    { 2040, bit0, D_CAR_1, 0x537B, D_FAULT_GRADE_3,  D_DEVICE_DCDC, D_POSITION_RB, D_DEVICENO_DCDC2,    false, false,false,
      QSTR("SCU2 SCM1模块温度低"),
      QSTR("无") },
    { 2041, bit0, D_CAR_1, 0x537C, D_FAULT_GRADE_3,  D_DEVICE_DCDC, D_POSITION_RB, D_DEVICENO_DCDC2,    false, false,false,
      QSTR("SCU2 SCM2模块温度低"),
      QSTR("无") },
    { 2042, bit0, D_CAR_1, 0x537D, D_FAULT_GRADE_3,  D_DEVICE_DCDC, D_POSITION_RB, D_DEVICENO_DCDC2,    false, false,false,
      QSTR("SCU2 SCM3模块温度低"),
      QSTR("无") },
    { 2043, bit0, D_CAR_1, 0x537E, D_FAULT_GRADE_3,  D_DEVICE_DCDC, D_POSITION_RB, D_DEVICENO_DCDC2,    false, false,false,
      QSTR("SCU2 SCM4模块温度低"),
      QSTR("无") },
    { 2024, bit1, D_CAR_1, 0x537F, D_FAULT_GRADE_3,  D_DEVICE_DCDC, D_POSITION_RA, D_DEVICENO_DCDC1,    false, false,false,
      QSTR("SCU1 SCM1模块温度高"),
      QSTR("无") },
    { 2025, bit1, D_CAR_1, 0x5380, D_FAULT_GRADE_3,  D_DEVICE_DCDC, D_POSITION_RA, D_DEVICENO_DCDC1,    false, false,false,
      QSTR("SCU1 SCM2模块温度高"),
      QSTR("无") },
    { 2026, bit1, D_CAR_1, 0x5381, D_FAULT_GRADE_3,  D_DEVICE_DCDC, D_POSITION_RA, D_DEVICENO_DCDC1,    false, false,false,
      QSTR("SCU1 SCM3模块温度高"),
      QSTR("无") },
    { 2027, bit1, D_CAR_1, 0x5382, D_FAULT_GRADE_3,  D_DEVICE_DCDC, D_POSITION_RA, D_DEVICENO_DCDC1,    false, false,false,
      QSTR("SCU1 SCM4模块温度高"),
      QSTR("无") },
    { 2040, bit1, D_CAR_1, 0x5383, D_FAULT_GRADE_3,  D_DEVICE_DCDC, D_POSITION_RB, D_DEVICENO_DCDC2,    false, false,false,
      QSTR("SCU2 SCM1模块温度高"),
      QSTR("无") },
    { 2041, bit1, D_CAR_1, 0x5384, D_FAULT_GRADE_3,  D_DEVICE_DCDC, D_POSITION_RB, D_DEVICENO_DCDC2,    false, false,false,
      QSTR("SCU2 SCM2模块温度高"),
      QSTR("无") },
    { 2042, bit1, D_CAR_1, 0x5385, D_FAULT_GRADE_3,  D_DEVICE_DCDC, D_POSITION_RB, D_DEVICENO_DCDC2,    false, false,false,
      QSTR("SCU2 SCM3模块温度高"),
      QSTR("无") },
    { 2043, bit1, D_CAR_1, 0x5386, D_FAULT_GRADE_3,  D_DEVICE_DCDC, D_POSITION_RB, D_DEVICENO_DCDC2,    false, false,false,
      QSTR("SCU2 SCM4模块温度高"),
      QSTR("无") },
    { 2024, bit2, D_CAR_1, 0x5387, D_FAULT_GRADE_3,  D_DEVICE_DCDC, D_POSITION_RA, D_DEVICENO_DCDC1,    false, false,false,
      QSTR("SCU1 SCM1模块全电压低"),
      QSTR("无") },
    { 2025, bit2, D_CAR_1, 0x5388, D_FAULT_GRADE_3,  D_DEVICE_DCDC, D_POSITION_RA, D_DEVICENO_DCDC1,    false, false,false,
      QSTR("SCU1 SCM2模块全电压低"),
      QSTR("无") },
    { 2026, bit2, D_CAR_1, 0x5389, D_FAULT_GRADE_3,  D_DEVICE_DCDC, D_POSITION_RA, D_DEVICENO_DCDC1,    false, false,false,
      QSTR("SCU1 SCM3模块全电压低"),
      QSTR("无") },
    { 2027, bit2, D_CAR_1, 0x538A, D_FAULT_GRADE_3,  D_DEVICE_DCDC, D_POSITION_RA, D_DEVICENO_DCDC1,    false, false,false,
      QSTR("SCU1 SCM4模块全电压低"),
      QSTR("无") },
    { 2040, bit2, D_CAR_1, 0x538B, D_FAULT_GRADE_3,  D_DEVICE_DCDC, D_POSITION_RB, D_DEVICENO_DCDC2,    false, false,false,
      QSTR("SCU2 SCM1模块全电压低"),
      QSTR("无") },
    { 2041, bit2, D_CAR_1, 0x538C, D_FAULT_GRADE_3,  D_DEVICE_DCDC, D_POSITION_RB, D_DEVICENO_DCDC2,    false, false,false,
      QSTR("SCU2 SCM2模块全电压低"),
      QSTR("无") },
    { 2042, bit2, D_CAR_1, 0x538D, D_FAULT_GRADE_3,  D_DEVICE_DCDC, D_POSITION_RB, D_DEVICENO_DCDC2,    false, false,false,
      QSTR("SCU2 SCM3模块全电压低"),
      QSTR("无") },
    { 2043, bit2, D_CAR_1, 0x538E, D_FAULT_GRADE_3,  D_DEVICE_DCDC, D_POSITION_RB, D_DEVICENO_DCDC2,    false, false,false,
      QSTR("SCU2 SCM4模块全电压低"),
      QSTR("无") },
    { 2024, bit3, D_CAR_1, 0x538F, D_FAULT_GRADE_3,  D_DEVICE_DCDC, D_POSITION_RA, D_DEVICENO_DCDC1,    false, false,false,
      QSTR("SCU1 SCM1模块全电压高"),
      QSTR("无") },
    { 2025, bit3, D_CAR_1, 0x5390, D_FAULT_GRADE_3,  D_DEVICE_DCDC, D_POSITION_RA, D_DEVICENO_DCDC1,    false, false,false,
      QSTR("SCU1 SCM2模块全电压高"),
      QSTR("无") },
    { 2026, bit3, D_CAR_1, 0x5391, D_FAULT_GRADE_3,  D_DEVICE_DCDC, D_POSITION_RA, D_DEVICENO_DCDC1,    false, false,false,
      QSTR("SCU1 SCM3模块全电压高"),
      QSTR("无") },
    { 2027, bit3, D_CAR_1, 0x5392, D_FAULT_GRADE_3,  D_DEVICE_DCDC, D_POSITION_RA, D_DEVICENO_DCDC1,    false, false,false,
      QSTR("SCU1 SCM4模块全电压高"),
      QSTR("无") },
    { 2040, bit3, D_CAR_1, 0x5393, D_FAULT_GRADE_3,  D_DEVICE_DCDC, D_POSITION_RB, D_DEVICENO_DCDC2,    false, false,false,
      QSTR("SCU2 SCM1模块全电压高"),
      QSTR("无") },
    { 2041, bit3, D_CAR_1, 0x5394, D_FAULT_GRADE_3,  D_DEVICE_DCDC, D_POSITION_RB, D_DEVICENO_DCDC2,    false, false,false,
      QSTR("SCU2 SCM2模块全电压高"),
      QSTR("无") },
    { 2042, bit3, D_CAR_1, 0x5395, D_FAULT_GRADE_3,  D_DEVICE_DCDC, D_POSITION_RB, D_DEVICENO_DCDC2,    false, false,false,
      QSTR("SCU2 SCM3模块全电压高"),
      QSTR("无") },
    { 2043, bit3, D_CAR_1, 0x5396, D_FAULT_GRADE_3,  D_DEVICE_DCDC, D_POSITION_RB, D_DEVICENO_DCDC2,    false, false,false,
      QSTR("SCU2 SCM4模块全电压高"),
      QSTR("无") },
    { 2024, bitA, D_CAR_1, 0x5397, D_FAULT_GRADE_3,  D_DEVICE_DCDC, D_POSITION_RA, D_DEVICENO_DCDC1,    false, false,false,
      QSTR("SCU1 SCM1模块半电压低"),
      QSTR("无") },
    { 2025, bitA, D_CAR_1, 0x5398, D_FAULT_GRADE_3,  D_DEVICE_DCDC, D_POSITION_RA, D_DEVICENO_DCDC1,    false, false,false,
      QSTR("SCU1 SCM2模块半电压低"),
      QSTR("无") },
    { 2026, bitA, D_CAR_1, 0x5399, D_FAULT_GRADE_3,  D_DEVICE_DCDC, D_POSITION_RA, D_DEVICENO_DCDC1,    false, false,false,
      QSTR("SCU1 SCM3模块半电压低"),
      QSTR("无") },
    { 2027, bitA, D_CAR_1, 0x539A, D_FAULT_GRADE_3,  D_DEVICE_DCDC, D_POSITION_RA, D_DEVICENO_DCDC1,    false, false,false,
      QSTR("SCU1 SCM4模块半电压低"),
      QSTR("无") },
    { 2040, bitA, D_CAR_1, 0x539B, D_FAULT_GRADE_3,  D_DEVICE_DCDC, D_POSITION_RB, D_DEVICENO_DCDC2,    false, false,false,
      QSTR("SCU2 SCM1模块半电压低"),
      QSTR("无") },
    { 2041, bitA, D_CAR_1, 0x539C, D_FAULT_GRADE_3,  D_DEVICE_DCDC, D_POSITION_RB, D_DEVICENO_DCDC2,    false, false,false,
      QSTR("SCU2 SCM2模块半电压低"),
      QSTR("无") },
    { 2042, bitA, D_CAR_1, 0x539D, D_FAULT_GRADE_3,  D_DEVICE_DCDC, D_POSITION_RB, D_DEVICENO_DCDC2,    false, false,false,
      QSTR("SCU2 SCM3模块半电压低"),
      QSTR("无") },
    { 2043, bitA, D_CAR_1, 0x539E, D_FAULT_GRADE_3,  D_DEVICE_DCDC, D_POSITION_RB, D_DEVICENO_DCDC2,    false, false,false,
      QSTR("SCU2 SCM4模块半电压低"),
      QSTR("无") },
    { 2024, bitB, D_CAR_1, 0x539F, D_FAULT_GRADE_3,  D_DEVICE_DCDC, D_POSITION_RA, D_DEVICENO_DCDC1,    false, false,false,
      QSTR("SCU1 SCM1模块半电压高"),
      QSTR("无") },
    { 2025, bitB, D_CAR_1, 0x53A0, D_FAULT_GRADE_3,  D_DEVICE_DCDC, D_POSITION_RA, D_DEVICENO_DCDC1,    false, false,false,
      QSTR("SCU1 SCM2模块半电压高"),
      QSTR("无") },
    { 2026, bitB, D_CAR_1, 0x53A1, D_FAULT_GRADE_3,  D_DEVICE_DCDC, D_POSITION_RA, D_DEVICENO_DCDC1,    false, false,false,
      QSTR("SCU1 SCM3模块半电压高"),
      QSTR("无") },
    { 2027, bitB, D_CAR_1, 0x53A2, D_FAULT_GRADE_3,  D_DEVICE_DCDC, D_POSITION_RA, D_DEVICENO_DCDC1,    false, false,false,
      QSTR("SCU1 SCM4模块半电压高"),
      QSTR("无") },
    { 2040, bitB, D_CAR_1, 0x53A3, D_FAULT_GRADE_3,  D_DEVICE_DCDC, D_POSITION_RB, D_DEVICENO_DCDC2,    false, false,false,
      QSTR("SCU2 SCM1模块半电压高"),
      QSTR("无") },
    { 2041, bitB, D_CAR_1, 0x53A4, D_FAULT_GRADE_3,  D_DEVICE_DCDC, D_POSITION_RB, D_DEVICENO_DCDC2,    false, false,false,
      QSTR("SCU2 SCM2模块半电压高"),
      QSTR("无") },
    { 2042, bitB, D_CAR_1, 0x53A5, D_FAULT_GRADE_3,  D_DEVICE_DCDC, D_POSITION_RB, D_DEVICENO_DCDC2,    false, false,false,
      QSTR("SCU2 SCM3模块半电压高"),
      QSTR("无") },
    { 2043, bitB, D_CAR_1, 0x53A6, D_FAULT_GRADE_3,  D_DEVICE_DCDC, D_POSITION_RB, D_DEVICENO_DCDC2,    false, false,false,
      QSTR("SCU2 SCM4模块半电压高"),
      QSTR("无") },

//6_BCU
    { 576, bit0, D_CAR_1, 0x6101, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_P, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_P  MB04B板卡硬件错误"),
      QSTR("BCU_P故障  旁路P 车转向架") },
    { 640, bit0, D_CAR_1, 0x6102, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MA MB04B板卡硬件错误"),
      QSTR("BCU_MA故障 旁路MA车转向架") },
    { 688, bit0, D_CAR_1, 0x6103, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MB MB04B板卡软件错误"),
      QSTR("BCU_MB故障 旁路MB车转向架") },
    { 576, bit1, D_CAR_1, 0x6104, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_P, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_P  MB04B板卡软件错误"),
      QSTR("BCU_P故障  旁路P 车转向架") },
    { 640, bit1, D_CAR_1, 0x6105, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MA MB04B板卡软件错误"),
      QSTR("BCU_MA故障 旁路MA车转向架") },
    { 688, bit1, D_CAR_1, 0x6106, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MB MB04B板卡软件错误"),
      QSTR("BCU_MB故障 旁路MB车转向架") },
    { 576, bit2, D_CAR_1, 0x6107, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_P, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_P  MB04B板卡通信错误"),
      QSTR("BCU_P故障  旁路P 车转向架") },
    { 640, bit2, D_CAR_1, 0x6108, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MA MB04B板卡通信错误"),
      QSTR("BCU_MA故障 旁路MA车转向架") },
    { 688, bit2, D_CAR_1, 0x6109, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MB MB04B板卡通信错误"),
      QSTR("BCU_MB故障 旁路MB车转向架") },
    { 576, bit3, D_CAR_1, 0x610A, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_P, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_P  MB04B板卡前部连接器错误"),
      QSTR("BCU_P故障  旁路P 车转向架") },
    { 640, bit3, D_CAR_1, 0x610B, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MA MB04B板卡前部连接器错误"),
      QSTR("BCU_MA故障 旁路MA车转向架") },
    { 688, bit3, D_CAR_1, 0x610C, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MB MB04B板卡前部连接器错误"),
      QSTR("BCU_MB故障 旁路MB车转向架") },
    { 577, bit0, D_CAR_1, 0x610D, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_P, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_P  EB01A板卡硬件错误"),
      QSTR("BCU_P故障  旁路P 车转向架") },
    { 641, bit0, D_CAR_1, 0x610E, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MA EB01A板卡硬件错误"),
      QSTR("BCU_MA故障 旁路MA车转向架") },
    { 689, bit0, D_CAR_1, 0x610F, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MB EB01A板卡软件错误"),
      QSTR("BCU_MB故障 旁路MB车转向架") },
    { 577, bit1, D_CAR_1, 0x6110, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_P, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_P  EB01A板卡软件错误"),
      QSTR("BCU_P故障  旁路P 车转向架") },
    { 641, bit1, D_CAR_1, 0x6111, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MA EB01A板卡软件错误"),
      QSTR("BCU_MA故障 旁路MA车转向架") },
    { 689, bit1, D_CAR_1, 0x6112, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MB EB01A板卡软件错误"),
      QSTR("BCU_MB故障 旁路MB车转向架") },
    { 577, bit2, D_CAR_1, 0x6113, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_P, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_P  EB01A板卡通信错误"),
      QSTR("BCU_P故障  旁路P 车转向架") },
    { 641, bit2, D_CAR_1, 0x6114, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MA EB01A板卡通信错误"),
      QSTR("BCU_MA故障 旁路MA车转向架") },
    { 689, bit2, D_CAR_1, 0x6115, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MB EB01A板卡通信错误"),
      QSTR("BCU_MB故障 旁路MB车转向架") },
    { 577, bit3, D_CAR_1, 0x6116, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_P, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_P  EB01A板卡前部连接器错误"),
      QSTR("BCU_P故障  旁路P 车转向架") },
    { 641, bit3, D_CAR_1, 0x6117, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MA EB01A板卡前部连接器错误"),
      QSTR("BCU_MA故障 旁路MA车转向架") },
    { 689, bit3, D_CAR_1, 0x6118, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MB EB01A板卡前部连接器错误"),
      QSTR("BCU_MB故障 旁路MB车转向架") },
    { 576, bit4, D_CAR_1, 0x6119, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_P, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_P  缓解阀故障"),
      QSTR("液压制动故障  旁路P 车转向架") },
    { 640, bit4, D_CAR_1, 0x611A, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MA 缓解阀故障"),
      QSTR("液压制动故障 旁路MA车转向架") },
    { 688, bit4, D_CAR_1, 0x611B, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MB 缓解阀故障"),
      QSTR("液压制动故障 旁路MB车转向架") },
    { 576, bit5, D_CAR_1, 0x611C, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_P, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_P  制动阀故障"),
      QSTR("液压制动故障  旁路P 车转向架") },
    { 640, bit5, D_CAR_1, 0x611D, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MA 制动阀故障"),
      QSTR("液压制动故障 旁路MA车转向架") },
    { 688, bit5, D_CAR_1, 0x611E, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MB 制动阀故障"),
      QSTR("液压制动故障 旁路MB车转向架") },
    { 577, bit4, D_CAR_1, 0x611F, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_P, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_P  制动缓解继电器故障"),
      QSTR("BCU_P故障  旁路P 车转向架") },
    { 641, bit4, D_CAR_1, 0x6120, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MA 制动缓解继电器故障"),
      QSTR("BCU_MA故障 旁路MA车转向架") },
    { 689, bit4, D_CAR_1, 0x6121, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MB 制动缓解继电器故障"),
      QSTR("BCU_MB故障 旁路MB车转向架") },
    { 577, bit6, D_CAR_1, 0x6122, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_P, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_P  电动泵继电器故障障"),
      QSTR("BCU_P故障  旁路P 车转向架") },
    { 641, bit6, D_CAR_1, 0x6123, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MA 电动泵继电器故障障"),
      QSTR("BCU_MA故障 旁路MA车转向架") },
    { 689, bit6, D_CAR_1, 0x6124, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MB 电动泵继电器故障障"),
      QSTR("BCU_MB故障 旁路MB车转向架") },
    { 577, bit7, D_CAR_1, 0x6125, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_P, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_P  大故障继电器故障"),
      QSTR("BCU_P故障  旁路P 车转向架") },
    { 641, bit7, D_CAR_1, 0x6126, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MA 大故障继电器故障"),
      QSTR("BCU_MA故障 旁路MA车转向架") },
    { 689, bit7, D_CAR_1, 0x6127, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MB 大故障继电器故障"),
      QSTR("BCU_MB故障 旁路MB车转向架") },
    { 578, bit4, D_CAR_1, 0x6128, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_P, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_P  全部速度传感器故障"),
      QSTR("BCU_P故障  旁路P 车转向架") },
    { 642, bit4, D_CAR_1, 0x6129, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MA 全部速度传感器故障"),
      QSTR("BCU_MA故障 旁路MA车转向架") },
    { 690, bit4, D_CAR_1, 0x612A, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MB 全部速度传感器故障"),
      QSTR("BCU_MB故障 旁路MB车转向架") },
    { 579, bit0, D_CAR_1, 0x612B, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_P, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_P  夹钳压力传感器超范围"),
      QSTR("BCU_P故障  旁路P 车转向架") },
    { 643, bit0, D_CAR_1, 0x612C, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MA 夹钳压力传感器超范围"),
      QSTR("BCU_MA故障 旁路MA车转向架") },
    { 691, bit0, D_CAR_1, 0x612D, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MB 夹钳压力传感器超范围"),
      QSTR("BCU_MB故障 旁路MB车转向架") },
    { 579, bit1, D_CAR_1, 0x612E, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_P, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_P  蓄能器压力传感器超范围"),
      QSTR("BCU_P故障  旁路P 车转向架") },
    { 643, bit1, D_CAR_1, 0x612F, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MA 蓄能器压力传感器超范围"),
      QSTR("BCU_MA故障 旁路MA车转向架") },
    { 691, bit1, D_CAR_1, 0x6130, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MB 蓄能器压力传感器超范围"),
      QSTR("BCU_MB故障 旁路MB车转向架") },
    { 581, bit0, D_CAR_1, 0x6131, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_P, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_P  学习阶段压力调节错误"),
      QSTR("回库检测BCU_P") },
    { 645, bit0, D_CAR_1, 0x6132, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MA 学习阶段压力调节错误"),
      QSTR("回库检测BCU_MA") },
    { 693, bit0, D_CAR_1, 0x6133, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MB 学习阶段压力调节错误"),
      QSTR("回库检测BCU_MB") },
    { 581, bit1, D_CAR_1, 0x6134, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_P, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_P 夹钳压力传感器偏移错误"),
      QSTR("BCU_P故障  旁路P 车转向架") },
    { 645, bit1, D_CAR_1, 0x6135, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MA夹钳压力传感器偏移错误"),
      QSTR("BCU_MA故障 旁路MA车转向架") },
    { 693, bit1, D_CAR_1, 0x6136, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MB夹钳压力传感器偏移错误"),
      QSTR("BCU_MB故障 旁路MB车转向架") },
    { 581, bit2, D_CAR_1, 0x6137, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_P, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_P 夹钳压力调节器错误"),
      QSTR("BCU_P故障  旁路P 车转向架") },
    { 645, bit2, D_CAR_1, 0x6138, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MA夹钳压力调节器错误"),
      QSTR("BCU_MA故障 旁路MA车转向架") },
    { 693, bit2, D_CAR_1, 0x6139, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MB夹钳压力调节器错误"),
      QSTR("BCU_MB故障 旁路MB车转向架") },
    { 584, bit4, D_CAR_1, 0x613A, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_P, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_P 泵电机故障"),
      QSTR("泵电机始终不能正常工作") },
    { 648, bit4, D_CAR_1, 0x613B, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MA泵电机故障"),
      QSTR("泵电机始终不能正常工作") },
    { 696, bit4, D_CAR_1, 0x613C, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MB泵电机故障"),
      QSTR("泵电机始终不能正常工作") },
    { 585, bit3, D_CAR_1, 0x613D, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_P, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_P 安全制动电磁阀故障"),
      QSTR("安全制动电磁阀故障，回库检修") },
    { 649, bit3, D_CAR_1, 0x613E, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MA安全制动电磁阀故障"),
      QSTR("安全制动电磁阀故障，回库检修") },
    { 697, bit3, D_CAR_1, 0x613F, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MB安全制动电磁阀故障"),
      QSTR("安全制动电磁阀故障，回库检修") },
    { 577, bit5, D_CAR_1, 0x6240, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_P, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_P 撒砂继电器故障"),
      QSTR("无") },
    { 641, bit5, D_CAR_1, 0x6241, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MA撒砂继电器故障"),
      QSTR("无") },
    { 689, bit5, D_CAR_1, 0x6242, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MB撒砂继电器故障"),
      QSTR("无") },
    { 578, bit0, D_CAR_1, 0x6243, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_P, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_P 速度传感器1故障"),
      QSTR("无") },
    { 642, bit0, D_CAR_1, 0x6244, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MA速度传感器1故障"),
      QSTR("无") },
    { 690, bit0, D_CAR_1, 0x6245, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MB速度传感器1故障"),
      QSTR("无") },
    { 578, bit1, D_CAR_1, 0x6246, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_P, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_P 速度传感器2故障"),
      QSTR("无") },
    { 642, bit1, D_CAR_1, 0x6247, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MA速度传感器2故障"),
      QSTR("无") },
    { 690, bit1, D_CAR_1, 0x6248, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MB速度传感器2故障"),
      QSTR("无") },
    { 578, bit2, D_CAR_1, 0x6249, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_P, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_P 速度传感器3故障"),
      QSTR("无") },
    { 642, bit2, D_CAR_1, 0x624A, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MA速度传感器3故障"),
      QSTR("无") },
    { 690, bit2, D_CAR_1, 0x624B, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MB速度传感器3故障"),
      QSTR("无") },
    { 578, bit3, D_CAR_1, 0x624C, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_P, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_P 速度传感器4故障"),
      QSTR("无") },
    { 642, bit3, D_CAR_1, 0x624D, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MA速度传感器4故障"),
      QSTR("无") },
    { 690, bit3, D_CAR_1, 0x624E, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MB速度传感器4故障"),
      QSTR("无") },
    { 580, bit1, D_CAR_1, 0x624F, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_P, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_P 载荷传感器输出超出范围"),
      QSTR("载荷传感器故障，可能过度制动") },
    { 644, bit1, D_CAR_1, 0x6250, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MA载荷传感器输出超出范围"),
      QSTR("载荷传感器故障，可能过度制动") },
    { 692, bit1, D_CAR_1, 0x6251, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MB载荷传感器输出超出范围"),
      QSTR("载荷传感器故障，可能过度制动") },
    { 580, bit0, D_CAR_1, 0x6252, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_P, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_P 载荷值超出限制"),
      QSTR("载荷传感器故障，可能过度制动") },
    { 644, bit0, D_CAR_1, 0x6253, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MA载荷值超出限制"),
      QSTR("载荷传感器故障，可能过度制动") },
    { 692, bit0, D_CAR_1, 0x6254, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MB载荷值超出限制"),
      QSTR("载荷传感器故障，可能过度制动") },
    { 583, bit0, D_CAR_1, 0x6255, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_P, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_P 总线初始化故障"),
      QSTR("无") },
    { 647, bit0, D_CAR_1, 0x6256, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MA总线初始化故障"),
      QSTR("无") },
    { 695, bit0, D_CAR_1, 0x6257, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MB总线初始化故障"),
      QSTR("无") },
    { 583, bit1, D_CAR_1, 0x6258, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_P, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_P 总线通信丢失"),
      QSTR("无") },
    { 647, bit1, D_CAR_1, 0x6259, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MA总线通信丢失"),
      QSTR("无") },
    { 695, bit1, D_CAR_1, 0x625A, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MB总线通信丢失"),
      QSTR("无") },
    { 583, bit4, D_CAR_1, 0x625B, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_P, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_P  CCU源端口265数据无效"),
      QSTR("无") },
    { 647, bit4, D_CAR_1, 0x625C, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MA CCU源端口265数据无效"),
      QSTR("无") },
    { 695, bit4, D_CAR_1, 0x625D, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MB CCU源端口265数据无效"),
      QSTR("无") },
    { 583, bit5, D_CAR_1, 0x625E, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_P, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_P  CCU源端口266数据无效"),
      QSTR("无") },
    { 647, bit5, D_CAR_1, 0x625F, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MA CCU源端口266数据无效"),
      QSTR("无") },
    { 695, bit5, D_CAR_1, 0x6260, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MB CCU源端口266数据无效"),
      QSTR("无") },
    { 583, bit6, D_CAR_1, 0x6261, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_P, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_P  CCU源端口267数据无效"),
      QSTR("无") },
    { 647, bit6, D_CAR_1, 0x6262, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MA CCU源端口267数据无效"),
      QSTR("无") },
    { 695, bit6, D_CAR_1, 0x6263, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MB CCU源端口267数据无效"),
      QSTR("无") },
    { 583, bit7, D_CAR_1, 0x6264, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_P, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_P  CCU源端口268数据无效"),
      QSTR("无") },
    { 647, bit7, D_CAR_1, 0x6265, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MA CCU源端口268数据无效"),
      QSTR("无") },
    { 695, bit7, D_CAR_1, 0x6266, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MB CCU源端口268数据无效"),
      QSTR("无") },
    { 583, bit8, D_CAR_1, 0x6267, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_P, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_P  CCU源端口269数据无效"),
      QSTR("无") },
    { 647, bit8, D_CAR_1, 0x6268, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MA CCU源端口269数据无效"),
      QSTR("无") },
    { 695, bit8, D_CAR_1, 0x6269, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MB CCU源端口269数据无效"),
      QSTR("无") },
    { 583, bit9, D_CAR_1, 0x626A, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_P, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_P  CCU源端口270数据无效"),
      QSTR("无") },
    { 647, bit9, D_CAR_1, 0x626B, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MA CCU源端口270数据无效"),
      QSTR("无") },
    { 695, bit9, D_CAR_1, 0x626C, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MB CCU源端口270数据无效"),
      QSTR("无") },
    { 584, bit2, D_CAR_1, 0x626D, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_P, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_P  蓄能器压力小于105bar，WSP失效"),
      QSTR("蓄能器压力小于105bar，WSP失效") },
    { 648, bit2, D_CAR_1, 0x626E, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MA 蓄能器压力小于105bar，WSP失效"),
      QSTR("蓄能器压力小于105bar，WSP失效") },
    { 696, bit2, D_CAR_1, 0x626F, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MB 蓄能器压力小于105bar，WSP失效"),
      QSTR("蓄能器压力小于105bar，WSP失效") },
    { 584, bit6, D_CAR_1, 0x6270, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_P, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_P 安全制动信号硬线与网络不一致"),
      QSTR("无") },
    { 648, bit6, D_CAR_1, 0x6271, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MA安全制动信号硬线与网络不一致"),
      QSTR("无") },
    { 696, bit6, D_CAR_1, 0x6272, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MB安全制动信号硬线与网络不一致"),
      QSTR("无") },
    { 584, bit7, D_CAR_1, 0x6273, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_P, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_P 紧急制动信号硬线与网络不一致"),
      QSTR("无") },
    { 648, bit7, D_CAR_1, 0x6274, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MA紧急制动信号硬线与网络不一致"),
      QSTR("无") },
    { 696, bit7, D_CAR_1, 0x6275, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MB紧急制动信号硬线与网络不一致"),
      QSTR("无") },
    { 584, bit8, D_CAR_1, 0x6276, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_P, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_P 制动信号硬线与网络不一致"),
      QSTR("无") },
    { 648, bit8, D_CAR_1, 0x6277, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MA制动信号硬线与网络不一致"),
      QSTR("无") },
    { 696, bit8, D_CAR_1, 0x6278, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MB制动信号硬线与网络不一致"),
      QSTR("无") },
    { 584, bit9, D_CAR_1, 0x6279, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_P, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_P 停车制动信号硬线与网络不一致"),
      QSTR("无") },
    { 648, bit9, D_CAR_1, 0x627A, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MA停车制动信号硬线与网络不一致"),
      QSTR("无") },
    { 696, bit9, D_CAR_1, 0x627B, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MB停车制动信号硬线与网络不一致"),
      QSTR("无") },
    { 584, bitA, D_CAR_1, 0x627C, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_P, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_P 磁轨制动信号硬线与网络不一致"),
      QSTR("无") },
    { 648, bitA, D_CAR_1, 0x627D, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MA磁轨制动信号硬线与网络不一致"),
      QSTR("无") },
    { 696, bitA, D_CAR_1, 0x627E, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MB磁轨制动信号硬线与网络不一致"),
      QSTR("无") },
    { 584, bitB, D_CAR_1, 0x627F, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_P, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_P 电制动切除信号硬线与网络不一致"),
      QSTR("无") },
    { 648, bitB, D_CAR_1, 0x6280, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MA电制动切除信号硬线与网络不一致"),
      QSTR("无") },
    { 696, bitB, D_CAR_1, 0x6281, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MB电制动切除信号硬线与网络不一致"),
      QSTR("无") },
    { 584, bitC, D_CAR_1, 0x6282, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_P, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_P 电机A1电制动力超出限制"),
      QSTR("无") },
    { 648, bitC, D_CAR_1, 0x6283, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MA电机A1电制动力超出限制"),
      QSTR("无") },
    { 696, bitC, D_CAR_1, 0x6284, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MB电机A1电制动力超出限制"),
      QSTR("无") },
    { 584, bitD, D_CAR_1, 0x6285, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_P, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_P 电机A2电制动力超出限制"),
      QSTR("无") },
    { 648, bitD, D_CAR_1, 0x6286, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MA电机A2电制动力超出限制"),
      QSTR("无") },
    { 696, bitD, D_CAR_1, 0x6287, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MB电机A2电制动力超出限制"),
      QSTR("无") },
    { 584, bitE, D_CAR_1, 0x6288, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_P, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_P 电机B1电制动力超出限制"),
      QSTR("无") },
    { 648, bitE, D_CAR_1, 0x6289, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MA电机B1电制动力超出限制"),
      QSTR("无") },
    { 696, bitE, D_CAR_1, 0x628A, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MB电机B1电制动力超出限制"),
      QSTR("无") },
    { 584, bitF, D_CAR_1, 0x628B, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_P, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_P 电机B2电制动力超出限制"),
      QSTR("无") },
    { 648, bitF, D_CAR_1, 0x628C, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MA电机B2电制动力超出限制"),
      QSTR("无") },
    { 696, bitF, D_CAR_1, 0x628D, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MB电机B2电制动力超出限制"),
      QSTR("无") },
    { 585, bit0, D_CAR_1, 0x628E, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_P, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_P 来自CCU制动力请求值超出限制"),
      QSTR("无") },
    { 649, bit0, D_CAR_1, 0x628F, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MA来自CCU制动力请求值超出限制"),
      QSTR("无") },
    { 697, bit0, D_CAR_1, 0x6290, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MB来自CCU制动力请求值超出限制"),
      QSTR("无") },
    { 585, bit1, D_CAR_1, 0x6291, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_P, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_P 牵引、制动、惰行信号不匹配"),
      QSTR("无") },
    { 649, bit1, D_CAR_1, 0x6292, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MA牵引、制动、惰行信号不匹配"),
      QSTR("无") },
    { 697, bit1, D_CAR_1, 0x6293, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MB牵引、制动、惰行信号不匹配"),
      QSTR("无") },
    { 585, bit2, D_CAR_1, 0x6294, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_P, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_P 蓄能器预充压力超出范围"),
      QSTR("无") },
    { 649, bit2, D_CAR_1, 0x6295, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MA蓄能器预充压力超出范围"),
      QSTR("无") },
    { 697, bit2, D_CAR_1, 0x6296, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MB蓄能器预充压力超出范围"),
      QSTR("无") },
    { 577, bit8, D_CAR_1, 0x6397, D_FAULT_GRADE_3,  D_DEVICE_BCU, D_POSITION_P, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_P 小事件继电器故障"),
      QSTR("无") },
    { 641, bit8, D_CAR_1, 0x6398, D_FAULT_GRADE_3,  D_DEVICE_BCU, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MA小事件继电器故障"),
      QSTR("无") },
    { 689, bit8, D_CAR_1, 0x6399, D_FAULT_GRADE_3,  D_DEVICE_BCU, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MB小事件继电器故障"),
      QSTR("无") },
    { 577, bit9, D_CAR_1, 0x639A, D_FAULT_GRADE_3,  D_DEVICE_BCU, D_POSITION_P, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_P 零速继电器故障"),
      QSTR("无") },
    { 641, bit9, D_CAR_1, 0x639B, D_FAULT_GRADE_3,  D_DEVICE_BCU, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MA零速继电器故障"),
      QSTR("无") },
    { 689, bit9, D_CAR_1, 0x639C, D_FAULT_GRADE_3,  D_DEVICE_BCU, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MB零速继电器故障"),
      QSTR("无") },
    { 583, bit2, D_CAR_1, 0x639D, D_FAULT_GRADE_3,  D_DEVICE_BCU, D_POSITION_P, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_P CCU源端口264CCU生命信号超时"),
      QSTR("无") },
    { 647, bit2, D_CAR_1, 0x639E, D_FAULT_GRADE_3,  D_DEVICE_BCU, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MACCU源端口264CCU生命信号超时"),
      QSTR("无") },
    { 695, bit2, D_CAR_1, 0x639F, D_FAULT_GRADE_3,  D_DEVICE_BCU, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MBCCU源端口264CCU生命信号超时"),
      QSTR("无") },
    { 583, bit3, D_CAR_1, 0x63A0, D_FAULT_GRADE_3,  D_DEVICE_BCU, D_POSITION_P, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_P CCU源端口264 MVB数据无效"),
      QSTR("无") },
    { 647, bit3, D_CAR_1, 0x63A1, D_FAULT_GRADE_3,  D_DEVICE_BCU, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MACCU源端口264 MVB数据无效"),
      QSTR("无") },
    { 695, bit3, D_CAR_1, 0x63A2, D_FAULT_GRADE_3,  D_DEVICE_BCU, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MBCCU源端口264 MVB数据无效"),
      QSTR("无") },
    { 583, bitA, D_CAR_1, 0x63A3, D_FAULT_GRADE_3,  D_DEVICE_BCU, D_POSITION_P, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_P BCUT源端口375 MVB数据无效"),
      QSTR("无") },
    { 647, bitA, D_CAR_1, 0x63A4, D_FAULT_GRADE_3,  D_DEVICE_BCU, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MABCUT源端口375 MVB数据无效"),
      QSTR("无") },
    { 695, bitA, D_CAR_1, 0x63A5, D_FAULT_GRADE_3,  D_DEVICE_BCU, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MBBCUT源端口375 MVB数据无效"),
      QSTR("无") },
    { 583, bitB, D_CAR_1, 0x63A6, D_FAULT_GRADE_3,  D_DEVICE_BCU, D_POSITION_P, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_P BCUT源端口376 MVB数据无效"),
      QSTR("无") },
    { 647, bitB, D_CAR_1, 0x63A7, D_FAULT_GRADE_3,  D_DEVICE_BCU, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MABCUT源端口376 MVB数据无效"),
      QSTR("无") },
    { 695, bitB, D_CAR_1, 0x63A8, D_FAULT_GRADE_3,  D_DEVICE_BCU, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MBBCUT源端口376 MVB数据无效"),
      QSTR("无") },
    { 583, bitC, D_CAR_1, 0x63A9, D_FAULT_GRADE_3,  D_DEVICE_BCU, D_POSITION_P, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_P BCUT源端口377 MVB数据无效"),
      QSTR("无") },
    { 647, bitC, D_CAR_1, 0x63AA, D_FAULT_GRADE_3,  D_DEVICE_BCU, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MABCUT源端口377 MVB数据无效"),
      QSTR("无") },
    { 695, bitC, D_CAR_1, 0x63AB, D_FAULT_GRADE_3,  D_DEVICE_BCU, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MBBCUT源端口377 MVB数据无效"),
      QSTR("无") },
    { 584, bit0, D_CAR_1, 0x63AC, D_FAULT_GRADE_3,  D_DEVICE_BCU, D_POSITION_P, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_P 收到停车制动信号时速度超出限制"),
      QSTR("无") },
    { 648, bit0, D_CAR_1, 0x63AD, D_FAULT_GRADE_3,  D_DEVICE_BCU, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MA收到停车制动信号时速度超出限制"),
      QSTR("无") },
    { 696, bit0, D_CAR_1, 0x63AE, D_FAULT_GRADE_3,  D_DEVICE_BCU, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MB收到停车制动信号时速度超出限制"),
      QSTR("无") },
    { 584, bit1, D_CAR_1, 0x63AF, D_FAULT_GRADE_3,  D_DEVICE_BCU, D_POSITION_P, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_P 速度小于规定值时停车制动自动被激活"),
      QSTR("无") },
    { 648, bit1, D_CAR_1, 0x63B0, D_FAULT_GRADE_3,  D_DEVICE_BCU, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MA速度小于规定值时停车制动自动被激活"),
      QSTR("无") },
    { 696, bit1, D_CAR_1, 0x63B1, D_FAULT_GRADE_3,  D_DEVICE_BCU, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MB速度小于规定值时停车制动自动被激活"),
      QSTR("无") },
    { 584, bit3, D_CAR_1, 0x63B2, D_FAULT_GRADE_3,  D_DEVICE_BCU, D_POSITION_P, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_P 蓄能器压力小于110bar"),
      QSTR("无") },
    { 648, bit3, D_CAR_1, 0x63B3, D_FAULT_GRADE_3,  D_DEVICE_BCU, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MA蓄能器压力小于110bar"),
      QSTR("无") },
    { 696, bit3, D_CAR_1, 0x63B4, D_FAULT_GRADE_3,  D_DEVICE_BCU, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MB蓄能器压力小于110bar"),
      QSTR("无") },
    { 584, bit5, D_CAR_1, 0x63B5, D_FAULT_GRADE_3,  D_DEVICE_BCU, D_POSITION_P, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_P 电动泵在预定时间内尝试给蓄能器充压失败"),
      QSTR("无") },
    { 648, bit5, D_CAR_1, 0x63B6, D_FAULT_GRADE_3,  D_DEVICE_BCU, D_POSITION_MA, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MA电动泵在预定时间内尝试给蓄能器充压失败"),
      QSTR("无") },
    { 696, bit5, D_CAR_1, 0x63B7, D_FAULT_GRADE_3,  D_DEVICE_BCU, D_POSITION_MB, D_DEVICENO_BCU,    false, false,false,
      QSTR("BCU_MB电动泵在预定时间内尝试给蓄能器充压失败"),
      QSTR("无") },
//7_DOOR
    { 160, bitA, D_CAR_1, 0x7101, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_MA, D_DEVICENO_DOOR1,    false, false,false,
      QSTR("MA_DOOR1电机电路故障"),
      QSTR("排除故障后，再次进行开门、关门控制") },
    { 164, bit2, D_CAR_1, 0x7102, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_MA, D_DEVICENO_DOOR2,    false, false,false,
      QSTR("MA_DOOR2电机电路故障"),
      QSTR("排除故障后，再次进行开门、关门控制") },
    { 176, bitA, D_CAR_1, 0x7103, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_RA, D_DEVICENO_DOOR1,    false, false,false,
      QSTR("RA_DOOR1电机电路故障"),
      QSTR("排除故障后，再次进行开门、关门控制") },
    { 180, bit2, D_CAR_1, 0x7104, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_RA, D_DEVICENO_DOOR2,    false, false,false,
      QSTR("RA_DOOR2电机电路故障"),
      QSTR("排除故障后，再次进行开门、关门控制") },
    { 183, bitA, D_CAR_1, 0x7105, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_RA, D_DEVICENO_DOOR3,    false, false,false,
      QSTR("RA_DOOR3电机电路故障"),
      QSTR("排除故障后，再次进行开门、关门控制") },
    { 187, bit2, D_CAR_1, 0x7106, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_RA, D_DEVICENO_DOOR4,    false, false,false,
      QSTR("RA_DOOR4电机电路故障"),
      QSTR("排除故障后，再次进行开门、关门控制") },
    { 192, bitA, D_CAR_1, 0x7107, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_RB, D_DEVICENO_DOOR1,    false, false,false,
      QSTR("RB_DOOR1电机电路故障"),
      QSTR("排除故障后，再次进行开门、关门控制") },
    { 196, bit2, D_CAR_1, 0x7108, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_RB, D_DEVICENO_DOOR2,    false, false,false,
      QSTR("RB_DOOR2电机电路故障"),
      QSTR("排除故障后，再次进行开门、关门控制") },
    { 199, bitA, D_CAR_1, 0x7109, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_RB, D_DEVICENO_DOOR3,    false, false,false,
      QSTR("RB_DOOR3电机电路故障"),
      QSTR("排除故障后，再次进行开门、关门控制") },
    { 203, bit2, D_CAR_1, 0x710A, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_RB, D_DEVICENO_DOOR4,    false, false,false,
      QSTR("RB_DOOR4电机电路故障"),
      QSTR("排除故障后，再次进行开门、关门控制") },
    { 208, bitA, D_CAR_1, 0x710B, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_MB, D_DEVICENO_DOOR1,    false, false,false,
      QSTR("MB_DOOR1电机电路故障"),
      QSTR("排除故障后，再次进行开门、关门控制") },
    { 212, bit2, D_CAR_1, 0x710C, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_MB, D_DEVICENO_DOOR2,    false, false,false,
      QSTR("MB_DOOR2电机电路故障"),
      QSTR("排除故障后，再次进行开门、关门控制") },

    { 160, bitB, D_CAR_1, 0x710D, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_MA, D_DEVICENO_DOOR1,    false, false,false,
      QSTR("MA_DOOR1 DCU故障"),
      QSTR("切除DCU电源") },
    { 164, bit3, D_CAR_1, 0x710E, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_MA, D_DEVICENO_DOOR2,    false, false,false,
      QSTR("MA_DOOR2 DCU故障"),
      QSTR("切除DCU电源") },
    { 176, bitB, D_CAR_1, 0x710F, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_RA, D_DEVICENO_DOOR1,    false, false,false,
      QSTR("RA_DOOR1 DCU故障"),
      QSTR("切除DCU电源") },
    { 180, bit3, D_CAR_1, 0x7110, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_RA, D_DEVICENO_DOOR2,    false, false,false,
      QSTR("RA_DOOR2 DCU故障"),
      QSTR("切除DCU电源") },
    { 183, bitB, D_CAR_1, 0x7111, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_RA, D_DEVICENO_DOOR3,    false, false,false,
      QSTR("RA_DOOR3 DCU故障"),
      QSTR("切除DCU电源") },
    { 187, bit3, D_CAR_1, 0x7112, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_RA, D_DEVICENO_DOOR4,    false, false,false,
      QSTR("RA_DOOR4 DCU故障"),
      QSTR("切除DCU电源") },
    { 192, bitB, D_CAR_1, 0x7113, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_RB, D_DEVICENO_DOOR1,    false, false,false,
      QSTR("RB_DOOR1 DCU故障"),
      QSTR("切除DCU电源") },
    { 196, bit3, D_CAR_1, 0x7114, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_RB, D_DEVICENO_DOOR2,    false, false,false,
      QSTR("RB_DOOR2 DCU故障"),
      QSTR("切除DCU电源") },
    { 199, bitB, D_CAR_1, 0x7115, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_RB, D_DEVICENO_DOOR3,    false, false,false,
      QSTR("RB_DOOR3 DCU故障"),
      QSTR("切除DCU电源") },
    { 203, bit3, D_CAR_1, 0x7116, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_RB, D_DEVICENO_DOOR4,    false, false,false,
      QSTR("RB_DOOR4 DCU故障"),
      QSTR("切除DCU电源") },
    { 208, bitB, D_CAR_1, 0x7117, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_MB, D_DEVICENO_DOOR1,    false, false,false,
      QSTR("MB_DOOR1 DCU故障"),
      QSTR("切除DCU电源") },
    { 212, bit3, D_CAR_1, 0x7118, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_MB, D_DEVICENO_DOOR2,    false, false,false,
      QSTR("MB_DOOR2 DCU故障"),
      QSTR("切除DCU电源") },
    { 160, bitC, D_CAR_1, 0x7119, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_MA, D_DEVICENO_DOOR1,    false, false,false,
      QSTR("MA_DOOR1 DLS故障"),
      QSTR("如果门是打开的，手动关闭门；\n使用IC隔离该门，并重启") },
    { 164, bit4, D_CAR_1, 0x711A, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_MA, D_DEVICENO_DOOR2,    false, false,false,
      QSTR("MA_DOOR2 DLS故障"),
      QSTR("如果门是打开的，手动关闭门；\n使用IC隔离该门，并重启") },
    { 176, bitC, D_CAR_1, 0x711B, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_RA, D_DEVICENO_DOOR1,    false, false,false,
      QSTR("RA_DOOR1 DLS故障"),
      QSTR("如果门是打开的，手动关闭门；\n使用IC隔离该门，并重启") },
    { 180, bit4, D_CAR_1, 0x711C, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_RA, D_DEVICENO_DOOR2,    false, false,false,
      QSTR("RA_DOOR2 DLS故障"),
      QSTR("如果门是打开的，手动关闭门；\n使用IC隔离该门，并重启") },
    { 183, bitC, D_CAR_1, 0x711D, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_RA, D_DEVICENO_DOOR3,    false, false,false,
      QSTR("RA_DOOR3 DLS故障"),
      QSTR("如果门是打开的，手动关闭门；\n使用IC隔离该门，并重启") },
    { 187, bit4, D_CAR_1, 0x711E, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_RA, D_DEVICENO_DOOR4,    false, false,false,
      QSTR("RA_DOOR4 DLS故障"),
      QSTR("如果门是打开的，手动关闭门；\n使用IC隔离该门，并重启") },
    { 192, bitC, D_CAR_1, 0x711F, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_RB, D_DEVICENO_DOOR1,    false, false,false,
      QSTR("RB_DOOR1 DLS故障"),
      QSTR("如果门是打开的，手动关闭门；\n使用IC隔离该门，并重启") },
    { 196, bit4, D_CAR_1, 0x7120, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_RB, D_DEVICENO_DOOR2,    false, false,false,
      QSTR("RB_DOOR2 DLS故障"),
      QSTR("如果门是打开的，手动关闭门；\n使用IC隔离该门，并重启") },
    { 199, bitC, D_CAR_1, 0x7121, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_RB, D_DEVICENO_DOOR3,    false, false,false,
      QSTR("RB_DOOR3 DLS故障"),
      QSTR("如果门是打开的，手动关闭门；\n使用IC隔离该门，并重启") },
    { 203, bit4, D_CAR_1, 0x7122, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_RB, D_DEVICENO_DOOR4,    false, false,false,
      QSTR("RB_DOOR4 DLS故障"),
      QSTR("如果门是打开的，手动关闭门；\n使用IC隔离该门，并重启") },
    { 208, bitC, D_CAR_1, 0x7123, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_MB, D_DEVICENO_DOOR1,    false, false,false,
      QSTR("MB_DOOR1 DLS故障"),
      QSTR("如果门是打开的，手动关闭门；\n使用IC隔离该门，并重启") },
    { 212, bit4, D_CAR_1, 0x7124, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_MB, D_DEVICENO_DOOR2,    false, false,false,
      QSTR("MB_DOOR2 DLS故障"),
      QSTR("如果门是打开的，手动关闭门；\n使用IC隔离该门，并重启") },
    { 160, bitD, D_CAR_1, 0x7125, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_MA, D_DEVICENO_DOOR1,    false, false,false,
      QSTR("MA_DOOR1 DCS故障"),
      QSTR("如果门是打开的，手动关闭门；\n使用IC隔离该门，并重启。\n如果门关闭，无") },
    { 164, bit5, D_CAR_1, 0x7126, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_MA, D_DEVICENO_DOOR2,    false, false,false,
      QSTR("MA_DOOR2 DCS故障"),
      QSTR("如果门是打开的，手动关闭门；\n使用IC隔离该门，并重启。\n如果门关闭，无") },
    { 176, bitD, D_CAR_1, 0x7127, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_RA, D_DEVICENO_DOOR1,    false, false,false,
      QSTR("RA_DOOR1 DCS故障"),
      QSTR("如果门是打开的，手动关闭门；\n使用IC隔离该门，并重启。\n如果门关闭，无") },
    { 180, bit5, D_CAR_1, 0x7128, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_RA, D_DEVICENO_DOOR2,    false, false,false,
      QSTR("RA_DOOR2 DCS故障"),
      QSTR("如果门是打开的，手动关闭门；\n使用IC隔离该门，并重启。\n如果门关闭，无") },
    { 183, bitD, D_CAR_1, 0x7129, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_RA, D_DEVICENO_DOOR3,    false, false,false,
      QSTR("RA_DOOR3 DCS故障"),
      QSTR("如果门是打开的，手动关闭门；\n使用IC隔离该门，并重启。\n如果门关闭，无") },
    { 187, bit5, D_CAR_1, 0x712A, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_RA, D_DEVICENO_DOOR4,    false, false,false,
      QSTR("RA_DOOR4 DCS故障"),
      QSTR("如果门是打开的，手动关闭门；\n使用IC隔离该门，并重启。\n如果门关闭，无") },
    { 192, bitD, D_CAR_1, 0x712B, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_RB, D_DEVICENO_DOOR1,    false, false,false,
      QSTR("RB_DOOR1 DCS故障"),
      QSTR("如果门是打开的，手动关闭门；\n使用IC隔离该门，并重启。\n如果门关闭，无") },
    { 196, bit5, D_CAR_1, 0x712C, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_RB, D_DEVICENO_DOOR2,    false, false,false,
      QSTR("RB_DOOR2 DCS故障"),
      QSTR("如果门是打开的，手动关闭门；\n使用IC隔离该门，并重启。\n如果门关闭，无") },
    { 199, bitD, D_CAR_1, 0x712D, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_RB, D_DEVICENO_DOOR3,    false, false,false,
      QSTR("RB_DOOR3 DCS故障"),
      QSTR("如果门是打开的，手动关闭门；\n使用IC隔离该门，并重启。\n如果门关闭，无") },
    { 203, bit5, D_CAR_1, 0x712E, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_RB, D_DEVICENO_DOOR4,    false, false,false,
      QSTR("RB_DOOR4 DCS故障"),
      QSTR("如果门是打开的，手动关闭门；\n使用IC隔离该门，并重启。\n如果门关闭，无") },
    { 208, bitD, D_CAR_1, 0x712F, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_MB, D_DEVICENO_DOOR1,    false, false,false,
      QSTR("MB_DOOR1 DCS故障"),
      QSTR("如果门是打开的，手动关闭门；\n使用IC隔离该门，并重启。\n如果门关闭，无") },
    { 212, bit5, D_CAR_1, 0x7130, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_MB, D_DEVICENO_DOOR2,    false, false,false,
      QSTR("MB_DOOR2 DCS故障"),
      QSTR("如果门是打开的，手动关闭门；\n使用IC隔离该门，并重启。\n如果门关闭，无") },
    { 161, bit5, D_CAR_1, 0x7131, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_MA, D_DEVICENO_DOOR1,    false, false,false,
      QSTR("MA_DOOR1意外解锁故障"),
      QSTR("手动锁闭车门。使用切除装置隔离车门，再将切除装置复位") },
    { 164, bitD, D_CAR_1, 0x7132, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_MA, D_DEVICENO_DOOR2,    false, false,false,
      QSTR("MA_DOOR2意外解锁故障"),
      QSTR("手动锁闭车门。使用切除装置隔离车门，再将切除装置复位") },
    { 177, bit5, D_CAR_1, 0x7133, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_RA, D_DEVICENO_DOOR1,    false, false,false,
      QSTR("RA_DOOR1意外解锁故障"),
      QSTR("手动锁闭车门。使用切除装置隔离车门，再将切除装置复位") },
    { 180, bitD, D_CAR_1, 0x7134, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_RA, D_DEVICENO_DOOR2,    false, false,false,
      QSTR("RA_DOOR2意外解锁故障"),
      QSTR("手动锁闭车门。使用切除装置隔离车门，再将切除装置复位") },
    { 184, bit5, D_CAR_1, 0x7135, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_RA, D_DEVICENO_DOOR3,    false, false,false,
      QSTR("RA_DOOR3意外解锁故障"),
      QSTR("手动锁闭车门。使用切除装置隔离车门，再将切除装置复位") },
    { 187, bitD, D_CAR_1, 0x7136, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_RA, D_DEVICENO_DOOR4,    false, false,false,
      QSTR("RA_DOOR4意外解锁故障"),
      QSTR("手动锁闭车门。使用切除装置隔离车门，再将切除装置复位") },
    { 193, bit5, D_CAR_1, 0x7137, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_RB, D_DEVICENO_DOOR1,    false, false,false,
      QSTR("RB_DOOR1意外解锁故障"),
      QSTR("手动锁闭车门。使用切除装置隔离车门，再将切除装置复位") },
    { 196, bitD, D_CAR_1, 0x7138, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_RB, D_DEVICENO_DOOR2,    false, false,false,
      QSTR("RB_DOOR2意外解锁故障"),
      QSTR("手动锁闭车门。使用切除装置隔离车门，再将切除装置复位") },
    { 200, bit5, D_CAR_1, 0x7139, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_RB, D_DEVICENO_DOOR3,    false, false,false,
      QSTR("RB_DOOR3意外解锁故障"),
      QSTR("手动锁闭车门。使用切除装置隔离车门，再将切除装置复位") },
    { 203, bitD, D_CAR_1, 0x713A, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_RB, D_DEVICENO_DOOR4,    false, false,false,
      QSTR("RB_DOOR4意外解锁故障"),
      QSTR("手动锁闭车门。使用切除装置隔离车门，再将切除装置复位") },
    { 209, bit5, D_CAR_1, 0x713B, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_MB, D_DEVICENO_DOOR1,    false, false,false,
      QSTR("MB_DOOR1意外解锁故障"),
      QSTR("手动锁闭车门。使用切除装置隔离车门，再将切除装置复位") },
    { 212, bitD, D_CAR_1, 0x713C, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_MB, D_DEVICENO_DOOR2,    false, false,false,
      QSTR("MB_DOOR2意外解锁故障"),
      QSTR("手动锁闭车门。使用切除装置隔离车门，再将切除装置复位") },
    { 161, bit0, D_CAR_1, 0x713D, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_MA, D_DEVICENO_DOOR1,    false, false,false,
      QSTR("MA_DOOR1锁闭失败故障"),
      QSTR("门到达锁闭位置，自动恢复") },
    { 164, bit8, D_CAR_1, 0x713E, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_MA, D_DEVICENO_DOOR2,    false, false,false,
      QSTR("MA_DOOR2锁闭失败故障"),
      QSTR("门到达锁闭位置，自动恢复") },
    { 177, bit0, D_CAR_1, 0x713F, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_RA, D_DEVICENO_DOOR1,    false, false,false,
      QSTR("RA_DOOR1锁闭失败故障"),
      QSTR("门到达锁闭位置，自动恢复") },
    { 180, bit8, D_CAR_1, 0x7140, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_RA, D_DEVICENO_DOOR2,    false, false,false,
      QSTR("RA_DOOR2锁闭失败故障"),
      QSTR("门到达锁闭位置，自动恢复") },
    { 184, bit0, D_CAR_1, 0x7141, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_RA, D_DEVICENO_DOOR3,    false, false,false,
      QSTR("RA_DOOR3锁闭失败故障"),
      QSTR("门到达锁闭位置，自动恢复") },
    { 187, bit8, D_CAR_1, 0x7142, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_RA, D_DEVICENO_DOOR4,    false, false,false,
      QSTR("RA_DOOR4锁闭失败故障"),
      QSTR("门到达锁闭位置，自动恢复") },
    { 193, bit0, D_CAR_1, 0x7143, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_RB, D_DEVICENO_DOOR1,    false, false,false,
      QSTR("RB_DOOR1锁闭失败故障"),
      QSTR("门到达锁闭位置，自动恢复") },
    { 196, bit8, D_CAR_1, 0x7144, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_RB, D_DEVICENO_DOOR2,    false, false,false,
      QSTR("RB_DOOR2锁闭失败故障"),
      QSTR("门到达锁闭位置，自动恢复") },
    { 200, bit0, D_CAR_1, 0x7145, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_RB, D_DEVICENO_DOOR3,    false, false,false,
      QSTR("RB_DOOR3锁闭失败故障"),
      QSTR("门到达锁闭位置，自动恢复") },
    { 203, bit8, D_CAR_1, 0x7146, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_RB, D_DEVICENO_DOOR4,    false, false,false,
      QSTR("RB_DOOR4锁闭失败故障"),
      QSTR("门到达锁闭位置，自动恢复") },
    { 209, bit0, D_CAR_1, 0x7147, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_MB, D_DEVICENO_DOOR1,    false, false,false,
      QSTR("MB_DOOR1锁闭失败故障"),
      QSTR("门到达锁闭位置，自动恢复") },
    { 212, bit8, D_CAR_1, 0x7148, D_FAULT_GRADE_1,  D_DEVICE_DOOR, D_POSITION_MB, D_DEVICENO_DOOR2,    false, false,false,
      QSTR("MB_DOOR2锁闭失败故障"),
      QSTR("门到达锁闭位置，自动恢复") },
    { 161, bit3, D_CAR_1, 0x7249, D_FAULT_GRADE_2,  D_DEVICE_DOOR, D_POSITION_MA, D_DEVICENO_DOOR1,    false, false,false,
      QSTR("MA_DOOR1开门超时故障"),
      QSTR("门到达完全打开位置后，自动恢复") },
    { 164, bitB, D_CAR_1, 0x724A, D_FAULT_GRADE_2,  D_DEVICE_DOOR, D_POSITION_MA, D_DEVICENO_DOOR2,    false, false,false,
      QSTR("MA_DOOR2开门超时故障"),
      QSTR("门到达完全打开位置后，自动恢复") },
    { 177, bit3, D_CAR_1, 0x724B, D_FAULT_GRADE_2,  D_DEVICE_DOOR, D_POSITION_RA, D_DEVICENO_DOOR1,    false, false,false,
      QSTR("RA_DOOR1开门超时故障"),
      QSTR("门到达完全打开位置后，自动恢复") },
    { 180, bitB, D_CAR_1, 0x724C, D_FAULT_GRADE_2,  D_DEVICE_DOOR, D_POSITION_RA, D_DEVICENO_DOOR2,    false, false,false,
      QSTR("RA_DOOR2开门超时故障"),
      QSTR("门到达完全打开位置后，自动恢复") },
    { 184, bit3, D_CAR_1, 0x724D, D_FAULT_GRADE_2,  D_DEVICE_DOOR, D_POSITION_RA, D_DEVICENO_DOOR3,    false, false,false,
      QSTR("RA_DOOR3开门超时故障"),
      QSTR("门到达完全打开位置后，自动恢复") },
    { 187, bitB, D_CAR_1, 0x724E, D_FAULT_GRADE_2,  D_DEVICE_DOOR, D_POSITION_RA, D_DEVICENO_DOOR4,    false, false,false,
      QSTR("RA_DOOR4开门超时故障"),
      QSTR("门到达完全打开位置后，自动恢复") },
    { 193, bit3, D_CAR_1, 0x724F, D_FAULT_GRADE_2,  D_DEVICE_DOOR, D_POSITION_RB, D_DEVICENO_DOOR1,    false, false,false,
      QSTR("RB_DOOR1开门超时故障"),
      QSTR("门到达完全打开位置后，自动恢复") },
    { 196, bitB, D_CAR_1, 0x7250, D_FAULT_GRADE_2,  D_DEVICE_DOOR, D_POSITION_RB, D_DEVICENO_DOOR2,    false, false,false,
      QSTR("RB_DOOR2开门超时故障"),
      QSTR("门到达完全打开位置后，自动恢复") },
    { 200, bit3, D_CAR_1, 0x7251, D_FAULT_GRADE_2,  D_DEVICE_DOOR, D_POSITION_RB, D_DEVICENO_DOOR3,    false, false,false,
      QSTR("RB_DOOR3开门超时故障"),
      QSTR("门到达完全打开位置后，自动恢复") },
    { 203, bitB, D_CAR_1, 0x7252, D_FAULT_GRADE_2,  D_DEVICE_DOOR, D_POSITION_RB, D_DEVICENO_DOOR4,    false, false,false,
      QSTR("RB_DOOR4开门超时故障"),
      QSTR("门到达完全打开位置后，自动恢复") },
    { 209, bit3, D_CAR_1, 0x7253, D_FAULT_GRADE_2,  D_DEVICE_DOOR, D_POSITION_MB, D_DEVICENO_DOOR1,    false, false,false,
      QSTR("MB_DOOR1开门超时故障"),
      QSTR("门到达完全打开位置后，自动恢复") },
    { 212, bitB, D_CAR_1, 0x7254, D_FAULT_GRADE_2,  D_DEVICE_DOOR, D_POSITION_MB, D_DEVICENO_DOOR2,    false, false,false,
      QSTR("MB_DOOR2开门超时故障"),
      QSTR("门到达完全打开位置后，自动恢复") },
    { 161, bit4, D_CAR_1, 0x7255, D_FAULT_GRADE_2,  D_DEVICE_DOOR, D_POSITION_MA, D_DEVICENO_DOOR1,    false, false,false,
      QSTR("MA_DOOR1关门超时故障"),
      QSTR("门到达完全打开位置后，自动恢复") },
    { 164, bitC, D_CAR_1, 0x7256, D_FAULT_GRADE_2,  D_DEVICE_DOOR, D_POSITION_MA, D_DEVICENO_DOOR2,    false, false,false,
      QSTR("MA_DOOR2关门超时故障"),
      QSTR("门到达完全打开位置后，自动恢复") },
    { 177, bit4, D_CAR_1, 0x7257, D_FAULT_GRADE_2,  D_DEVICE_DOOR, D_POSITION_RA, D_DEVICENO_DOOR1,    false, false,false,
      QSTR("RA_DOOR1关门超时故障"),
      QSTR("门到达完全打开位置后，自动恢复") },
    { 180, bitC, D_CAR_1, 0x7258, D_FAULT_GRADE_2,  D_DEVICE_DOOR, D_POSITION_RA, D_DEVICENO_DOOR2,    false, false,false,
      QSTR("RA_DOOR2关门超时故障"),
      QSTR("门到达完全打开位置后，自动恢复") },
    { 184, bit4, D_CAR_1, 0x7259, D_FAULT_GRADE_2,  D_DEVICE_DOOR, D_POSITION_RA, D_DEVICENO_DOOR3,    false, false,false,
      QSTR("RA_DOOR3关门超时故障"),
      QSTR("门到达完全打开位置后，自动恢复") },
    { 187, bitC, D_CAR_1, 0x725A, D_FAULT_GRADE_2,  D_DEVICE_DOOR, D_POSITION_RA, D_DEVICENO_DOOR4,    false, false,false,
      QSTR("RA_DOOR4关门超时故障"),
      QSTR("门到达完全打开位置后，自动恢复") },
    { 193, bit4, D_CAR_1, 0x725B, D_FAULT_GRADE_2,  D_DEVICE_DOOR, D_POSITION_RB, D_DEVICENO_DOOR1,    false, false,false,
      QSTR("RB_DOOR1关门超时故障"),
      QSTR("门到达完全打开位置后，自动恢复") },
    { 196, bitC, D_CAR_1, 0x725C, D_FAULT_GRADE_2,  D_DEVICE_DOOR, D_POSITION_RB, D_DEVICENO_DOOR2,    false, false,false,
      QSTR("RB_DOOR2关门超时故障"),
      QSTR("门到达完全打开位置后，自动恢复") },
    { 200, bit4, D_CAR_1, 0x725D, D_FAULT_GRADE_2,  D_DEVICE_DOOR, D_POSITION_RB, D_DEVICENO_DOOR3,    false, false,false,
      QSTR("RB_DOOR3关门超时故障"),
      QSTR("门到达完全打开位置后，自动恢复") },
    { 203, bitC, D_CAR_1, 0x725E, D_FAULT_GRADE_2,  D_DEVICE_DOOR, D_POSITION_RB, D_DEVICENO_DOOR4,    false, false,false,
      QSTR("RB_DOOR4关门超时故障"),
      QSTR("门到达完全打开位置后，自动恢复") },
    { 209, bit4, D_CAR_1, 0x725F, D_FAULT_GRADE_2,  D_DEVICE_DOOR, D_POSITION_MB, D_DEVICENO_DOOR1,    false, false,false,
      QSTR("MB_DOOR1关门超时故障"),
      QSTR("门到达完全打开位置后，自动恢复") },
    { 212, bitC, D_CAR_1, 0x7260, D_FAULT_GRADE_2,  D_DEVICE_DOOR, D_POSITION_MB, D_DEVICENO_DOOR2,    false, false,false,
      QSTR("MB_DOOR2关门超时故障"),
      QSTR("门到达完全打开位置后，自动恢复") },
    { 161, bit1, D_CAR_1, 0x7361, D_FAULT_GRADE_3,  D_DEVICE_DOOR, D_POSITION_MA, D_DEVICENO_DOOR1,    false, false,false,
      QSTR("MA_DOOR1障碍物关门失败故障"),
      QSTR("移除障碍物，并发送开关门指令，或者释放零速，或者手动关门") },
    { 164, bit9, D_CAR_1, 0x7362, D_FAULT_GRADE_3,  D_DEVICE_DOOR, D_POSITION_MA, D_DEVICENO_DOOR2,    false, false,false,
      QSTR("MA_DOOR2障碍物关门失败故障"),
      QSTR("移除障碍物，并发送开关门指令，或者释放零速，或者手动关门") },
    { 177, bit1, D_CAR_1, 0x7363, D_FAULT_GRADE_3,  D_DEVICE_DOOR, D_POSITION_RA, D_DEVICENO_DOOR1,    false, false,false,
      QSTR("RA_DOOR1障碍物关门失败故障"),
      QSTR("移除障碍物，并发送开关门指令，或者释放零速，或者手动关门") },
    { 180, bit9, D_CAR_1, 0x7364, D_FAULT_GRADE_3,  D_DEVICE_DOOR, D_POSITION_RA, D_DEVICENO_DOOR2,    false, false,false,
      QSTR("RA_DOOR2障碍物关门失败故障"),
      QSTR("移除障碍物，并发送开关门指令，或者释放零速，或者手动关门") },
    { 184, bit1, D_CAR_1, 0x7365, D_FAULT_GRADE_3,  D_DEVICE_DOOR, D_POSITION_RA, D_DEVICENO_DOOR3,    false, false,false,
      QSTR("RA_DOOR3障碍物关门失败故障"),
      QSTR("移除障碍物，并发送开关门指令，或者释放零速，或者手动关门") },
    { 187, bit9, D_CAR_1, 0x7366, D_FAULT_GRADE_3,  D_DEVICE_DOOR, D_POSITION_RA, D_DEVICENO_DOOR4,    false, false,false,
      QSTR("RA_DOOR4障碍物关门失败故障"),
      QSTR("移除障碍物，并发送开关门指令，或者释放零速，或者手动关门") },
    { 193, bit1, D_CAR_1, 0x7367, D_FAULT_GRADE_3,  D_DEVICE_DOOR, D_POSITION_RB, D_DEVICENO_DOOR1,    false, false,false,
      QSTR("RB_DOOR1障碍物关门失败故障"),
      QSTR("移除障碍物，并发送开关门指令，或者释放零速，或者手动关门") },
    { 196, bit9, D_CAR_1, 0x7368, D_FAULT_GRADE_3,  D_DEVICE_DOOR, D_POSITION_RB, D_DEVICENO_DOOR2,    false, false,false,
      QSTR("RB_DOOR2障碍物关门失败故障"),
      QSTR("移除障碍物，并发送开关门指令，或者释放零速，或者手动关门") },
    { 200, bit1, D_CAR_1, 0x7369, D_FAULT_GRADE_3,  D_DEVICE_DOOR, D_POSITION_RB, D_DEVICENO_DOOR3,    false, false,false,
      QSTR("RB_DOOR3障碍物关门失败故障"),
      QSTR("移除障碍物，并发送开关门指令，或者释放零速，或者手动关门") },
    { 203, bit9, D_CAR_1, 0x736A, D_FAULT_GRADE_3,  D_DEVICE_DOOR, D_POSITION_RB, D_DEVICENO_DOOR4,    false, false,false,
      QSTR("RB_DOOR4障碍物关门失败故障"),
      QSTR("移除障碍物，并发送开关门指令，或者释放零速，或者手动关门") },
    { 209, bit1, D_CAR_1, 0x736B, D_FAULT_GRADE_3,  D_DEVICE_DOOR, D_POSITION_MB, D_DEVICENO_DOOR1,    false, false,false,
      QSTR("MB_DOOR1障碍物关门失败故障"),
      QSTR("移除障碍物，并发送开关门指令，或者释放零速，或者手动关门") },
    { 212, bit9, D_CAR_1, 0x736C, D_FAULT_GRADE_3,  D_DEVICE_DOOR, D_POSITION_MB, D_DEVICENO_DOOR2,    false, false,false,
      QSTR("MB_DOOR2障碍物关门失败故障"),
      QSTR("移除障碍物，并发送开关门指令，或者释放零速，或者手动关门") },
    { 161, bit2, D_CAR_1, 0x736D, D_FAULT_GRADE_3,  D_DEVICE_DOOR, D_POSITION_MA, D_DEVICENO_DOOR1,    false, false,false,
      QSTR("MA_DOOR1障碍物开门失败故障"),
      QSTR("移除障碍物，并发送开开门指令，或者释放零速，或者手动开门") },
    { 164, bitA, D_CAR_1, 0x736E, D_FAULT_GRADE_3,  D_DEVICE_DOOR, D_POSITION_MA, D_DEVICENO_DOOR2,    false, false,false,
      QSTR("MA_DOOR2障碍物开门失败故障"),
      QSTR("移除障碍物，并发送开开门指令，或者释放零速，或者手动开门") },
    { 177, bit2, D_CAR_1, 0x736F, D_FAULT_GRADE_3,  D_DEVICE_DOOR, D_POSITION_RA, D_DEVICENO_DOOR1,    false, false,false,
      QSTR("RA_DOOR1障碍物开门失败故障"),
      QSTR("移除障碍物，并发送开开门指令，或者释放零速，或者手动开门") },
    { 180, bitA, D_CAR_1, 0x7370, D_FAULT_GRADE_3,  D_DEVICE_DOOR, D_POSITION_RA, D_DEVICENO_DOOR2,    false, false,false,
      QSTR("RA_DOOR2障碍物开门失败故障"),
      QSTR("移除障碍物，并发送开开门指令，或者释放零速，或者手动开门") },
    { 184, bit2, D_CAR_1, 0x7371, D_FAULT_GRADE_3,  D_DEVICE_DOOR, D_POSITION_RA, D_DEVICENO_DOOR3,    false, false,false,
      QSTR("RA_DOOR3障碍物开门失败故障"),
      QSTR("移除障碍物，并发送开开门指令，或者释放零速，或者手动开门") },
    { 187, bitA, D_CAR_1, 0x7372, D_FAULT_GRADE_3,  D_DEVICE_DOOR, D_POSITION_RA, D_DEVICENO_DOOR4,    false, false,false,
      QSTR("RA_DOOR4障碍物开门失败故障"),
      QSTR("移除障碍物，并发送开开门指令，或者释放零速，或者手动开门") },
    { 193, bit2, D_CAR_1, 0x7373, D_FAULT_GRADE_3,  D_DEVICE_DOOR, D_POSITION_RB, D_DEVICENO_DOOR1,    false, false,false,
      QSTR("RB_DOOR1障碍物开门失败故障"),
      QSTR("移除障碍物，并发送开开门指令，或者释放零速，或者手动开门") },
    { 196, bitA, D_CAR_1, 0x7374, D_FAULT_GRADE_3,  D_DEVICE_DOOR, D_POSITION_RB, D_DEVICENO_DOOR2,    false, false,false,
      QSTR("RB_DOOR2障碍物开门失败故障"),
      QSTR("移除障碍物，并发送开开门指令，或者释放零速，或者手动开门") },
    { 200, bit2, D_CAR_1, 0x7375, D_FAULT_GRADE_3,  D_DEVICE_DOOR, D_POSITION_RB, D_DEVICENO_DOOR3,    false, false,false,
      QSTR("RB_DOOR3障碍物开门失败故障"),
      QSTR("移除障碍物，并发送开开门指令，或者释放零速，或者手动开门") },
    { 203, bitA, D_CAR_1, 0x7376, D_FAULT_GRADE_3,  D_DEVICE_DOOR, D_POSITION_RB, D_DEVICENO_DOOR4,    false, false,false,
      QSTR("RB_DOOR4障碍物开门失败故障"),
      QSTR("移除障碍物，并发送开开门指令，或者释放零速，或者手动开门") },
    { 209, bit2, D_CAR_1, 0x7377, D_FAULT_GRADE_3,  D_DEVICE_DOOR, D_POSITION_MB, D_DEVICENO_DOOR1,    false, false,false,
      QSTR("MB_DOOR1障碍物开门失败故障"),
      QSTR("移除障碍物，并发送开开门指令，或者释放零速，或者手动开门") },
    { 212, bitA, D_CAR_1, 0x7378, D_FAULT_GRADE_3,  D_DEVICE_DOOR, D_POSITION_MB, D_DEVICENO_DOOR2,    false, false,false,
      QSTR("MB_DOOR2障碍物开门失败故障"),
      QSTR("移除障碍物，并发送开开门指令，或者释放零速，或者手动开门") },
    { 160, bitE, D_CAR_1, 0x7379, D_FAULT_GRADE_3,  D_DEVICE_DOOR, D_POSITION_MA, D_DEVICENO_DOOR1,    false, false,false,
      QSTR("MA_DOOR1静态输出1（辅助蜂鸣器）故障"),
      QSTR("故障消失，自动恢复") },
    { 160, bitF, D_CAR_1, 0x737A, D_FAULT_GRADE_3,  D_DEVICE_DOOR, D_POSITION_MA, D_DEVICENO_DOOR1,    false, false,false,
      QSTR("MA_DOOR1静态输出2（指示灯1）故障"),
      QSTR("故障消失，自动恢复") },
    { 161, bit6, D_CAR_1, 0x737B, D_FAULT_GRADE_3,  D_DEVICE_DOOR, D_POSITION_MA, D_DEVICENO_DOOR1,    false, false,false,
      QSTR("MA_DOOR1静态输出3（指示灯2）故障"),
      QSTR("故障消失，自动恢复") },
    { 161, bit7, D_CAR_1, 0x737C, D_FAULT_GRADE_3,  D_DEVICE_DOOR, D_POSITION_MA, D_DEVICENO_DOOR1,    false, false,false,
      QSTR("MA_DOOR1静态输出4（指示灯3）故障"),
      QSTR("故障消失，自动恢复") },
    { 164, bit6, D_CAR_1, 0x737D, D_FAULT_GRADE_3,  D_DEVICE_DOOR, D_POSITION_MA, D_DEVICENO_DOOR2,    false, false,false,
      QSTR("MA_DOOR2静态输出1（辅助蜂鸣器）故障"),
      QSTR("故障消失，自动恢复") },
    { 164, bit7, D_CAR_1, 0x737E, D_FAULT_GRADE_3,  D_DEVICE_DOOR, D_POSITION_MA, D_DEVICENO_DOOR2,    false, false,false,
      QSTR("MA_DOOR2静态输出2（指示灯1）故障"),
      QSTR("故障消失，自动恢复") },
    { 164, bitE, D_CAR_1, 0x737F, D_FAULT_GRADE_3,  D_DEVICE_DOOR, D_POSITION_MA, D_DEVICENO_DOOR2,    false, false,false,
      QSTR("MA_DOOR2静态输出3（指示灯2）故障"),
      QSTR("故障消失，自动恢复") },
    { 164, bitF, D_CAR_1, 0x7380, D_FAULT_GRADE_3,  D_DEVICE_DOOR, D_POSITION_MA, D_DEVICENO_DOOR2,    false, false,false,
      QSTR("MA_DOOR2静态输出4（指示灯3）故障"),
      QSTR("故障消失，自动恢复") },
    { 176, bitE, D_CAR_1, 0x7381, D_FAULT_GRADE_3,  D_DEVICE_DOOR, D_POSITION_RA, D_DEVICENO_DOOR1,    false, false,false,
      QSTR("RA_DOOR1静态输出1（辅助蜂鸣器）故障"),
      QSTR("故障消失，自动恢复") },
    { 176, bitF, D_CAR_1, 0x7382, D_FAULT_GRADE_3,  D_DEVICE_DOOR, D_POSITION_RA, D_DEVICENO_DOOR1,    false, false,false,
      QSTR("RA_DOOR1静态输出2（指示灯1）故障"),
      QSTR("故障消失，自动恢复") },
    { 177, bit6, D_CAR_1, 0x7383, D_FAULT_GRADE_3,  D_DEVICE_DOOR, D_POSITION_RA, D_DEVICENO_DOOR1,    false, false,false,
      QSTR("RA_DOOR1静态输出3（指示灯2）故障"),
      QSTR("故障消失，自动恢复") },
    { 177, bit7, D_CAR_1, 0x7384, D_FAULT_GRADE_3,  D_DEVICE_DOOR, D_POSITION_RA, D_DEVICENO_DOOR1,    false, false,false,
      QSTR("RA_DOOR1静态输出4（指示灯3）故障"),
      QSTR("故障消失，自动恢复") },
    { 180, bit6, D_CAR_1, 0x7385, D_FAULT_GRADE_3,  D_DEVICE_DOOR, D_POSITION_RA, D_DEVICENO_DOOR2,    false, false,false,
      QSTR("RA_DOOR2静态输出1（辅助蜂鸣器）故障"),
      QSTR("故障消失，自动恢复") },
    { 180, bit7, D_CAR_1, 0x7386, D_FAULT_GRADE_3,  D_DEVICE_DOOR, D_POSITION_RA, D_DEVICENO_DOOR2,    false, false,false,
      QSTR("RA_DOOR2静态输出2（指示灯1）故障"),
      QSTR("故障消失，自动恢复") },
    { 180, bitE, D_CAR_1, 0x7387, D_FAULT_GRADE_3,  D_DEVICE_DOOR, D_POSITION_RA, D_DEVICENO_DOOR2,    false, false,false,
      QSTR("RA_DOOR2静态输出3（指示灯2）故障"),
      QSTR("故障消失，自动恢复") },
    { 180, bitF, D_CAR_1, 0x7388, D_FAULT_GRADE_3,  D_DEVICE_DOOR, D_POSITION_RA, D_DEVICENO_DOOR2,    false, false,false,
      QSTR("RA_DOOR2静态输出4（指示灯3）故障"),
      QSTR("故障消失，自动恢复") },
    { 183, bitE, D_CAR_1, 0x7389, D_FAULT_GRADE_3,  D_DEVICE_DOOR, D_POSITION_RA, D_DEVICENO_DOOR3,    false, false,false,
      QSTR("RA_DOOR3静态输出1（辅助蜂鸣器）故障"),
      QSTR("故障消失，自动恢复") },
    { 183, bitF, D_CAR_1, 0x738A, D_FAULT_GRADE_3,  D_DEVICE_DOOR, D_POSITION_RA, D_DEVICENO_DOOR3,    false, false,false,
      QSTR("RA_DOOR3静态输出2（指示灯1）故障"),
      QSTR("故障消失，自动恢复") },
    { 184, bit6, D_CAR_1, 0x738B, D_FAULT_GRADE_3,  D_DEVICE_DOOR, D_POSITION_RA, D_DEVICENO_DOOR3,    false, false,false,
      QSTR("RA_DOOR3静态输出3（指示灯2）故障"),
      QSTR("故障消失，自动恢复") },
    { 184, bit7, D_CAR_1, 0x738C, D_FAULT_GRADE_3,  D_DEVICE_DOOR, D_POSITION_RA, D_DEVICENO_DOOR3,    false, false,false,
      QSTR("RA_DOOR3静态输出4（指示灯3）故障"),
      QSTR("故障消失，自动恢复") },
    { 187, bit6, D_CAR_1, 0x738D, D_FAULT_GRADE_3,  D_DEVICE_DOOR, D_POSITION_RA, D_DEVICENO_DOOR4,    false, false,false,
      QSTR("RA_DOOR4静态输出1（辅助蜂鸣器）故障"),
      QSTR("故障消失，自动恢复") },
    { 187, bit7, D_CAR_1, 0x738E, D_FAULT_GRADE_3,  D_DEVICE_DOOR, D_POSITION_RA, D_DEVICENO_DOOR4,    false, false,false,
      QSTR("RA_DOOR4静态输出2（指示灯1）故障"),
      QSTR("故障消失，自动恢复") },
    { 187, bitE, D_CAR_1, 0x738F, D_FAULT_GRADE_3,  D_DEVICE_DOOR, D_POSITION_RA, D_DEVICENO_DOOR4,    false, false,false,
      QSTR("RA_DOOR4静态输出3（指示灯2）故障"),
      QSTR("故障消失，自动恢复") },
    { 187, bitF, D_CAR_1, 0x7390, D_FAULT_GRADE_3,  D_DEVICE_DOOR, D_POSITION_RA, D_DEVICENO_DOOR4,    false, false,false,
      QSTR("RA_DOOR4静态输出4（指示灯3）故障"),
      QSTR("故障消失，自动恢复") },
    { 192, bitE, D_CAR_1, 0x7391, D_FAULT_GRADE_3,  D_DEVICE_DOOR, D_POSITION_RB, D_DEVICENO_DOOR1,    false, false,false,
      QSTR("RB_DOOR1静态输出1（辅助蜂鸣器）故障"),
      QSTR("故障消失，自动恢复") },
    { 192, bitF, D_CAR_1, 0x7392, D_FAULT_GRADE_3,  D_DEVICE_DOOR, D_POSITION_RB, D_DEVICENO_DOOR1,    false, false,false,
      QSTR("RB_DOOR1静态输出2（指示灯1）故障"),
      QSTR("故障消失，自动恢复") },
    { 193, bit6, D_CAR_1, 0x7393, D_FAULT_GRADE_3,  D_DEVICE_DOOR, D_POSITION_RB, D_DEVICENO_DOOR1,    false, false,false,
      QSTR("RB_DOOR1静态输出3（指示灯2）故障"),
      QSTR("故障消失，自动恢复") },
    { 193, bit7, D_CAR_1, 0x7394, D_FAULT_GRADE_3,  D_DEVICE_DOOR, D_POSITION_RB, D_DEVICENO_DOOR1,    false, false,false,
      QSTR("RB_DOOR1静态输出4（指示灯3）故障"),
      QSTR("故障消失，自动恢复") },
    { 196, bit6, D_CAR_1, 0x7395, D_FAULT_GRADE_3,  D_DEVICE_DOOR, D_POSITION_RB, D_DEVICENO_DOOR2,    false, false,false,
      QSTR("RB_DOOR2静态输出1（辅助蜂鸣器）故障"),
      QSTR("故障消失，自动恢复") },
    { 196, bit7, D_CAR_1, 0x7396, D_FAULT_GRADE_3,  D_DEVICE_DOOR, D_POSITION_RB, D_DEVICENO_DOOR2,    false, false,false,
      QSTR("RB_DOOR2静态输出2（指示灯1）故障"),
      QSTR("故障消失，自动恢复") },
    { 196, bitE, D_CAR_1, 0x7397, D_FAULT_GRADE_3,  D_DEVICE_DOOR, D_POSITION_RB, D_DEVICENO_DOOR2,    false, false,false,
      QSTR("RB_DOOR2静态输出3（指示灯2）故障"),
      QSTR("故障消失，自动恢复") },
    { 196, bitF, D_CAR_1, 0x7398, D_FAULT_GRADE_3,  D_DEVICE_DOOR, D_POSITION_RB, D_DEVICENO_DOOR2,    false, false,false,
      QSTR("RB_DOOR2静态输出4（指示灯3）故障"),
      QSTR("故障消失，自动恢复") },
    { 199, bitE, D_CAR_1, 0x7399, D_FAULT_GRADE_3,  D_DEVICE_DOOR, D_POSITION_RB, D_DEVICENO_DOOR3,    false, false,false,
      QSTR("RB_DOOR3静态输出1（辅助蜂鸣器）故障"),
      QSTR("故障消失，自动恢复") },
    { 199, bitF, D_CAR_1, 0x739A, D_FAULT_GRADE_3,  D_DEVICE_DOOR, D_POSITION_RB, D_DEVICENO_DOOR3,    false, false,false,
      QSTR("RB_DOOR3静态输出2（指示灯1）故障"),
      QSTR("故障消失，自动恢复") },
    { 200, bit6, D_CAR_1, 0x739B, D_FAULT_GRADE_3,  D_DEVICE_DOOR, D_POSITION_RB, D_DEVICENO_DOOR3,    false, false,false,
      QSTR("RB_DOOR3静态输出3（指示灯2）故障"),
      QSTR("故障消失，自动恢复") },
    { 200, bit7, D_CAR_1, 0x739C, D_FAULT_GRADE_3,  D_DEVICE_DOOR, D_POSITION_RB, D_DEVICENO_DOOR3,    false, false,false,
      QSTR("RB_DOOR3静态输出4（指示灯3）故障"),
      QSTR("故障消失，自动恢复") },
    { 203, bit6, D_CAR_1, 0x739D, D_FAULT_GRADE_3,  D_DEVICE_DOOR, D_POSITION_RB, D_DEVICENO_DOOR4,    false, false,false,
      QSTR("RB_DOOR4静态输出1（辅助蜂鸣器）故障"),
      QSTR("故障消失，自动恢复") },
    { 203, bit7, D_CAR_1, 0x739E, D_FAULT_GRADE_3,  D_DEVICE_DOOR, D_POSITION_RB, D_DEVICENO_DOOR4,    false, false,false,
      QSTR("RB_DOOR4静态输出2（指示灯1）故障"),
      QSTR("故障消失，自动恢复") },
    { 203, bitE, D_CAR_1, 0x739F, D_FAULT_GRADE_3,  D_DEVICE_DOOR, D_POSITION_RB, D_DEVICENO_DOOR4,    false, false,false,
      QSTR("RB_DOOR4静态输出3（指示灯2）故障"),
      QSTR("故障消失，自动恢复") },
    { 203, bitF, D_CAR_1, 0x73A0, D_FAULT_GRADE_3,  D_DEVICE_DOOR, D_POSITION_RB, D_DEVICENO_DOOR4,    false, false,false,
      QSTR("RB_DOOR4静态输出4（指示灯3）故障"),
      QSTR("故障消失，自动恢复") },
    { 208, bitE, D_CAR_1, 0x73A1, D_FAULT_GRADE_3,  D_DEVICE_DOOR, D_POSITION_MB, D_DEVICENO_DOOR1,    false, false,false,
      QSTR("MB_DOOR1静态输出1（辅助蜂鸣器）故障"),
      QSTR("故障消失，自动恢复") },
    { 208, bitF, D_CAR_1, 0x73A2, D_FAULT_GRADE_3,  D_DEVICE_DOOR, D_POSITION_MB, D_DEVICENO_DOOR1,    false, false,false,
      QSTR("MB_DOOR1静态输出2（指示灯1）故障"),
      QSTR("故障消失，自动恢复") },
    { 209, bit6, D_CAR_1, 0x73A3, D_FAULT_GRADE_3,  D_DEVICE_DOOR, D_POSITION_MB, D_DEVICENO_DOOR1,    false, false,false,
      QSTR("MB_DOOR1静态输出3（指示灯2）故障"),
      QSTR("故障消失，自动恢复") },
    { 209, bit7, D_CAR_1, 0x73A4, D_FAULT_GRADE_3,  D_DEVICE_DOOR, D_POSITION_MB, D_DEVICENO_DOOR1,    false, false,false,
      QSTR("MB_DOOR1静态输出4（指示灯3）故障"),
      QSTR("故障消失，自动恢复") },
    { 212, bit6, D_CAR_1, 0x73A5, D_FAULT_GRADE_3,  D_DEVICE_DOOR, D_POSITION_MB, D_DEVICENO_DOOR2,    false, false,false,
      QSTR("MB_DOOR2静态输出1（辅助蜂鸣器）故障"),
      QSTR("故障消失，自动恢复") },
    { 212, bit7, D_CAR_1, 0x73A6, D_FAULT_GRADE_3,  D_DEVICE_DOOR, D_POSITION_MB, D_DEVICENO_DOOR2,    false, false,false,
      QSTR("MB_DOOR2静态输出2（指示灯1）故障"),
      QSTR("故障消失，自动恢复") },
    { 212, bitE, D_CAR_1, 0x73A7, D_FAULT_GRADE_3,  D_DEVICE_DOOR, D_POSITION_MB, D_DEVICENO_DOOR2,    false, false,false,
      QSTR("MB_DOOR2静态输出3（指示灯2）故障"),
      QSTR("故障消失，自动恢复") },
    { 212, bitF, D_CAR_1, 0x73A8, D_FAULT_GRADE_3,  D_DEVICE_DOOR, D_POSITION_MB, D_DEVICENO_DOOR2,    false, false,false,
      QSTR("MB_DOOR2静态输出4（指示灯3）故障"),
      QSTR("故障消失，自动恢复") },
//8_HVAC
    { 228, bitB, D_CAR_1, 0x8101, D_FAULT_GRADE_1,  D_DEVICE_HVAC, D_POSITION_RA, D_DEVICENO_HVAC1,    false, false,false,
      QSTR("HVAC_RA紧急通风逆变器通讯故障"),
      QSTR("检查IO板与紧急通风逆变器通信接线、检查紧急通风逆变器工作状态。") },
    { 244, bitB, D_CAR_1, 0x8102, D_FAULT_GRADE_1,  D_DEVICE_HVAC, D_POSITION_RB, D_DEVICENO_HVAC2,    false, false,false,
      QSTR("HVAC_RB紧急通风逆变器通讯故障"),
      QSTR("检查IO板与紧急通风逆变器通信接线、检查紧急通风逆变器工作状态。") },
    { 230, bit9, D_CAR_1, 0x8103, D_FAULT_GRADE_1,  D_DEVICE_HVAC, D_POSITION_RA, D_DEVICENO_HVAC1,    false, false,false,
      QSTR("HVAC_RA通风机变频器通讯故障"),
      QSTR("检查通讯线路、查看通风机变频器工作状态。") },
    { 246, bit9, D_CAR_1, 0x8104, D_FAULT_GRADE_1,  D_DEVICE_HVAC, D_POSITION_RB, D_DEVICENO_HVAC2,    false, false,false,
      QSTR("HVAC_RB通风机变频器通讯故障"),
      QSTR("检查通讯线路、查看通风机变频器工作状态。。") },
    { 227, bitB, D_CAR_1, 0x8105, D_FAULT_GRADE_1,  D_DEVICE_HVAC, D_POSITION_RA, D_DEVICENO_HVAC1,    false, false,false,
      QSTR("HVAC_RA通风机变频器保护"),
      QSTR("检查通风机是否缺相，短路") },
    { 243, bitB, D_CAR_1, 0x8106, D_FAULT_GRADE_1,  D_DEVICE_HVAC, D_POSITION_RB, D_DEVICENO_HVAC2,    false, false,false,
      QSTR("HVAC_RB通风机变频器保护"),
      QSTR("检查通风机是否缺相，短路") },
    { 228, bit5, D_CAR_1, 0x8107, D_FAULT_GRADE_1,  D_DEVICE_HVAC, D_POSITION_RA, D_DEVICENO_HVAC1,    false, false,false,
      QSTR("HVAC_RA紧急通风逆变器保护"),
      QSTR("检查通风机是否缺相，短路") },
    { 244, bit5, D_CAR_1, 0x8108, D_FAULT_GRADE_1,  D_DEVICE_HVAC, D_POSITION_RB, D_DEVICENO_HVAC2,    false, false,false,
      QSTR("HVAC_RB紧急通风逆变器保护"),
      QSTR("检查通风机是否缺相，短路") },
    { 230, bit7, D_CAR_1, 0x8209, D_FAULT_GRADE_2,  D_DEVICE_HVAC, D_POSITION_RA, D_DEVICENO_HVAC1,    false, false,false,
      QSTR("HVAC_RA检测板通讯故障"),
      QSTR("检查IO板与检测板通信接线、检查检测板工作状态。") },
    { 246, bit7, D_CAR_1, 0x820A, D_FAULT_GRADE_2,  D_DEVICE_HVAC, D_POSITION_RB, D_DEVICENO_HVAC2,    false, false,false,
      QSTR("HVAC_RB检测板通讯故障"),
      QSTR("检查IO板与检测板通信接线、检查检测板工作状态。") },
    { 229, bitD, D_CAR_1, 0x820B, D_FAULT_GRADE_2,  D_DEVICE_HVAC, D_POSITION_RA, D_DEVICENO_HVAC1,    false, false,false,
      QSTR("HVAC_RA回风阀故障"),
      QSTR("检查回风阀1/2接线、检查风阀及执行器状态。") },
    { 245, bitD, D_CAR_1, 0x820C, D_FAULT_GRADE_2,  D_DEVICE_HVAC, D_POSITION_RB, D_DEVICENO_HVAC2,    false, false,false,
      QSTR("HVAC_RB回风阀故障"),
      QSTR("检查回风阀1/2接线、检查风阀及执行器状态。") },
    { 229, bitF, D_CAR_1, 0x820D, D_FAULT_GRADE_2,  D_DEVICE_HVAC, D_POSITION_RA, D_DEVICENO_HVAC1,    false, false,false,
      QSTR("HVAC_RA新风阀故障"),
      QSTR("检查新风阀1/2接线、检查风阀及执行器状态。") },
    { 245, bitF, D_CAR_1, 0x820E, D_FAULT_GRADE_2,  D_DEVICE_HVAC, D_POSITION_RB, D_DEVICENO_HVAC2,    false, false,false,
      QSTR("HVAC_RB新风阀故障"),
      QSTR("检查新风阀1/2接线、检查风阀及执行器状态。") },
    { 230, bitA, D_CAR_1, 0x820F, D_FAULT_GRADE_2,  D_DEVICE_HVAC, D_POSITION_RA, D_DEVICENO_HVAC1,    false, false,false,
      QSTR("HVAC_RA直流电源故障"),
      QSTR("检查直流电源工作状态、检查直流电源是否保护") },
    { 246, bitA, D_CAR_1, 0x8210, D_FAULT_GRADE_2,  D_DEVICE_HVAC, D_POSITION_RB, D_DEVICENO_HVAC2,    false, false,false,
      QSTR("HVAC_RB直流电源故障"),
      QSTR("检查直流电源工作状态、检查直流电源是否保护") },
    { 230, bit6, D_CAR_1, 0x8211, D_FAULT_GRADE_2,  D_DEVICE_HVAC, D_POSITION_RA, D_DEVICENO_HVAC1,    false, false,false,
      QSTR("HVAC_RA IO板通讯故障"),
      QSTR("检测IO板与车控器板之间的通信线束，观察IO板的工作状态") },
    { 246, bit6, D_CAR_1, 0x8212, D_FAULT_GRADE_2,  D_DEVICE_HVAC, D_POSITION_RB, D_DEVICENO_HVAC2,    false, false,false,
      QSTR("HVAC_RB IO板通讯故障"),
      QSTR("检测IO板与车控器板之间的通信线束，观察IO板的工作状态") },
    { 229, bit5, D_CAR_1, 0x8213, D_FAULT_GRADE_2,  D_DEVICE_HVAC, D_POSITION_RA, D_DEVICENO_HVAC1,    false, false,false,
      QSTR("HVAC_RA 压缩机1过载保护"),
      QSTR("检查电子膨胀阀、检查系统管路、确认冷凝风机是否工作正常") },
    { 245, bit5, D_CAR_1, 0x8214, D_FAULT_GRADE_2,  D_DEVICE_HVAC, D_POSITION_RB, D_DEVICENO_HVAC2,    false, false,false,
      QSTR("HVAC_RB 压缩机1过载保护"),
      QSTR("检查电子膨胀阀、检查系统管路、确认冷凝风机是否工作正常") },
    { 229, bit3, D_CAR_1, 0x8215, D_FAULT_GRADE_2,  D_DEVICE_HVAC, D_POSITION_RA, D_DEVICENO_HVAC1,    false, false,false,
      QSTR("HVAC_RA 压缩机1高压故障"),
      QSTR("检查电子膨胀阀、检查系统管路、确认冷凝风机是否工作正常") },
    { 245, bit3, D_CAR_1, 0x8216, D_FAULT_GRADE_2,  D_DEVICE_HVAC, D_POSITION_RB, D_DEVICENO_HVAC2,    false, false,false,
      QSTR("HVAC_RB 压缩机1高压故障"),
      QSTR("检查电子膨胀阀、检查系统管路、确认冷凝风机是否工作正常") },
    { 229, bit1, D_CAR_1, 0x8217, D_FAULT_GRADE_2,  D_DEVICE_HVAC, D_POSITION_RA, D_DEVICENO_HVAC1,    false, false,false,
      QSTR("HVAC_RA 压缩机1低压故障"),
      QSTR("检查电子膨胀阀、检查系统管路，检查通风机，回风机是否工作正常") },
    { 245, bit1, D_CAR_1, 0x8218, D_FAULT_GRADE_2,  D_DEVICE_HVAC, D_POSITION_RB, D_DEVICENO_HVAC2,    false, false,false,
      QSTR("HVAC_RB 压缩机1低压故障"),
      QSTR("检查电子膨胀阀、检查系统管路，检查通风机，回风机是否工作正常") },
    { 230, bit5, D_CAR_1, 0x8219, D_FAULT_GRADE_2,  D_DEVICE_HVAC, D_POSITION_RA, D_DEVICENO_HVAC1,    false, false,false,
      QSTR("HVAC_RA 压缩机1变频器通讯故障"),
      QSTR("检查通讯线路、查看压缩机1变频器工作状态") },
    { 246, bit5, D_CAR_1, 0x821A, D_FAULT_GRADE_2,  D_DEVICE_HVAC, D_POSITION_RB, D_DEVICENO_HVAC2,    false, false,false,
      QSTR("HVAC_RB 压缩机1变频器通讯故障"),
      QSTR("检查通讯线路、查看压缩机1变频器工作状态") },
    { 230, bit8, D_CAR_1, 0x821B, D_FAULT_GRADE_2,  D_DEVICE_HVAC, D_POSITION_RA, D_DEVICENO_HVAC1,    false, false,false,
      QSTR("HVAC_RA 冷凝风机变频器通信故障"),
      QSTR("检查通讯线路、查看冷凝风机变频器工作状态") },
    { 246, bit8, D_CAR_1, 0x821C, D_FAULT_GRADE_2,  D_DEVICE_HVAC, D_POSITION_RB, D_DEVICENO_HVAC2,    false, false,false,
      QSTR("HVAC_RB 冷凝风机变频器通信故障"),
      QSTR("检查通讯线路、查看冷凝风机变频器工作状态") },
    { 230, bitC, D_CAR_1, 0x821D, D_FAULT_GRADE_2,  D_DEVICE_HVAC, D_POSITION_RA, D_DEVICENO_HVAC1,    false, false,false,
      QSTR("HVAC_RA 电加热1故障"),
      QSTR("检查电加热1和接触器接线、确认通风机正常工作运转") },
    { 246, bitC, D_CAR_1, 0x821E, D_FAULT_GRADE_2,  D_DEVICE_HVAC, D_POSITION_RB, D_DEVICENO_HVAC2,    false, false,false,
      QSTR("HVAC_RB 电加热1故障"),
      QSTR("检查电加热1和接触器接线、确认通风机正常工作运转") },
    { 229, bit4, D_CAR_1, 0x821F, D_FAULT_GRADE_2,  D_DEVICE_HVAC, D_POSITION_RA, D_DEVICENO_HVAC1,    false, false,false,
      QSTR("HVAC_RA 压缩机2过载保护"),
      QSTR("检查电子膨胀阀、检查系统管路、确认冷凝风机是否工作正常") },
    { 245, bit4, D_CAR_1, 0x8220, D_FAULT_GRADE_2,  D_DEVICE_HVAC, D_POSITION_RB, D_DEVICENO_HVAC2,    false, false,false,
      QSTR("HVAC_RB 压缩机2过载保护"),
      QSTR("检查电子膨胀阀、检查系统管路、确认冷凝风机是否工作正常") },
    { 229, bit2, D_CAR_1, 0x8221, D_FAULT_GRADE_2,  D_DEVICE_HVAC, D_POSITION_RA, D_DEVICENO_HVAC1,    false, false,false,
      QSTR("HVAC_RA 压缩机2高压故障"),
      QSTR("检查电子膨胀阀、检查系统管路、确认冷凝风机是否工作正常") },
    { 245, bit2, D_CAR_1, 0x8222, D_FAULT_GRADE_2,  D_DEVICE_HVAC, D_POSITION_RB, D_DEVICENO_HVAC2,    false, false,false,
      QSTR("HVAC_RB 压缩机2高压故障"),
      QSTR("检查电子膨胀阀、检查系统管路、确认冷凝风机是否工作正常") },
    { 229, bit0, D_CAR_1, 0x8223, D_FAULT_GRADE_2,  D_DEVICE_HVAC, D_POSITION_RA, D_DEVICENO_HVAC1,    false, false,false,
      QSTR("HVAC_RA 压缩机2低压故障"),
      QSTR("检查电子膨胀阀、检查系统管路，检查通风机，回风机是否工作正常") },
    { 245, bit0, D_CAR_1, 0x8224, D_FAULT_GRADE_2,  D_DEVICE_HVAC, D_POSITION_RB, D_DEVICENO_HVAC2,    false, false,false,
      QSTR("HVAC_RB 压缩机2低压故障"),
      QSTR("检查电子膨胀阀、检查系统管路，检查通风机，回风机是否工作正常") },
    { 230, bit4, D_CAR_1, 0x8225, D_FAULT_GRADE_2,  D_DEVICE_HVAC, D_POSITION_RA, D_DEVICENO_HVAC1,    false, false,false,
      QSTR("HVAC_RA 压缩机2变频器通讯故障"),
      QSTR("检查通讯线路、查看压缩机2变频器工作状态") },
    { 246, bit4, D_CAR_1, 0x8226, D_FAULT_GRADE_2,  D_DEVICE_HVAC, D_POSITION_RB, D_DEVICENO_HVAC2,    false, false,false,
      QSTR("HVAC_RB 压缩机2变频器通讯故障"),
      QSTR("检查通讯线路、查看压缩机2变频器工作状态") },
    { 230, bitB, D_CAR_1, 0x8227, D_FAULT_GRADE_2,  D_DEVICE_HVAC, D_POSITION_RA, D_DEVICENO_HVAC1,    false, false,false,
      QSTR("HVAC_RA 电加热2故障"),
      QSTR("检查电加热2和接触器接线、确认通风机正常工作运转") },
    { 246, bitB, D_CAR_1, 0x8228, D_FAULT_GRADE_2,  D_DEVICE_HVAC, D_POSITION_RB, D_DEVICENO_HVAC2,    false, false,false,
      QSTR("HVAC_RB 电加热2故障"),
      QSTR("检查电加热2和接触器接线、确认通风机正常工作运转") },
    { 229, bit7, D_CAR_1, 0x8229, D_FAULT_GRADE_2,  D_DEVICE_HVAC, D_POSITION_RA, D_DEVICENO_HVAC1,    false, false,false,
      QSTR("HVAC_RA 压缩机1变频器保护"),
      QSTR("检查压缩机1是否缺相，短路") },
    { 245, bit7, D_CAR_1, 0x822A, D_FAULT_GRADE_2,  D_DEVICE_HVAC, D_POSITION_RB, D_DEVICENO_HVAC2,    false, false,false,
      QSTR("HVAC_RB 压缩机1变频器保护"),
      QSTR("检查压缩机1是否缺相，短路") },
    { 229, bit6, D_CAR_1, 0x822B, D_FAULT_GRADE_2,  D_DEVICE_HVAC, D_POSITION_RA, D_DEVICENO_HVAC1,    false, false,false,
      QSTR("HVAC_RA 压缩机2变频器保护"),
      QSTR("检查压缩机2是否缺相，短路") },
    { 245, bit6, D_CAR_1, 0x822C, D_FAULT_GRADE_2,  D_DEVICE_HVAC, D_POSITION_RB, D_DEVICENO_HVAC2,    false, false,false,
      QSTR("HVAC_RB 压缩机2变频器保护"),
      QSTR("检查压缩机2是否缺相，短路") },
    { 227, bitA, D_CAR_1, 0x822D, D_FAULT_GRADE_2,  D_DEVICE_HVAC, D_POSITION_RA, D_DEVICENO_HVAC1,    false, false,false,
      QSTR("HVAC_RA 冷凝风机变频器保护"),
      QSTR("检查冷凝风机是否缺相，短路") },
    { 243, bitA, D_CAR_1, 0x822E, D_FAULT_GRADE_2,  D_DEVICE_HVAC, D_POSITION_RB, D_DEVICENO_HVAC2,    false, false,false,
      QSTR("HVAC_RB 冷凝风机变频器保护"),
      QSTR("检查冷凝风机是否缺相，短路") },
    { 228, bit3, D_CAR_1, 0x832F, D_FAULT_GRADE_3,  D_DEVICE_HVAC, D_POSITION_RA, D_DEVICENO_HVAC1,    false, false,false,
      QSTR("HVAC_RA 回风传感器故障"),
      QSTR("检查回风传感器是否短路、断路") },
    { 244, bit3, D_CAR_1, 0x8330, D_FAULT_GRADE_3,  D_DEVICE_HVAC, D_POSITION_RB, D_DEVICENO_HVAC2,    false, false,false,
      QSTR("HVAC_RB 回风传感器故障"),
      QSTR("检查回风传感器是否短路、断路") },
    { 228, bit2, D_CAR_1, 0x8331, D_FAULT_GRADE_3,  D_DEVICE_HVAC, D_POSITION_RA, D_DEVICENO_HVAC1,    false, false,false,
      QSTR("HVAC_RA 新风传感器故障"),
      QSTR("检查新风传感器是否短路、断路") },
    { 244, bit2, D_CAR_1, 0x8332, D_FAULT_GRADE_3,  D_DEVICE_HVAC, D_POSITION_RB, D_DEVICENO_HVAC2,    false, false,false,
      QSTR("HVAC_RB 新风传感器故障"),
      QSTR("检查新风传感器是否短路、断路") },
//PIS
    { 1991, bit1, D_CAR_1, 0x9201, D_FAULT_GRADE_2,  D_DEVICE_PIS, D_POSITION_MA, D_DEVICENO_PA,    false, false,false,
      QSTR("(PA)MA车广播控制盒故障"),
      QSTR("无") },
    { 1993, bit1, D_CAR_1, 0x9202, D_FAULT_GRADE_2,  D_DEVICE_PIS, D_POSITION_MB, D_DEVICENO_PA,    false, false,false,
      QSTR("(PA)MB车广播控制盒故障"),
      QSTR("无") },
    { 1991, bit0, D_CAR_1, 0x9203, D_FAULT_GRADE_2,  D_DEVICE_PIS, D_POSITION_MA, D_DEVICENO_PA,    false, false,false,
      QSTR("(PA)MA车主机故障"),
      QSTR("无") },
    { 1993, bit0, D_CAR_1, 0x9204, D_FAULT_GRADE_2,  D_DEVICE_PIS, D_POSITION_MB, D_DEVICENO_PA,    false, false,false,
      QSTR("(PA)MB车主机故障"),
      QSTR("无") },
    { 1993, bit7, D_CAR_1, 0x9205, D_FAULT_GRADE_2,  D_DEVICE_PIS, D_POSITION_MB, D_DEVICENO_PA,    false, false,false,
      QSTR("(PA)MB车紧急报警器故障"),
      QSTR("无") },
    { 1991, bit7, D_CAR_1, 0x9206, D_FAULT_GRADE_2,  D_DEVICE_PIS, D_POSITION_MA, D_DEVICENO_PA,    false, false,false,
      QSTR("(PA)MA车紧急报警器故障"),
      QSTR("无") },
    { 1992, bitC, D_CAR_1, 0x9207, D_FAULT_GRADE_2,  D_DEVICE_PIS, D_POSITION_RB, D_DEVICENO_PA,    false, false,false,
      QSTR("(PA)RB车紧急报警器故障"),
      QSTR("无") },
    { 1991, bitC, D_CAR_1, 0x9208, D_FAULT_GRADE_2,  D_DEVICE_PIS, D_POSITION_RA, D_DEVICENO_PA,    false, false,false,
      QSTR("(PA)RA车紧急报警器故障"),
      QSTR("无") },
    { 1993, bit2, D_CAR_1, 0x9309, D_FAULT_GRADE_3,  D_DEVICE_PIS, D_POSITION_MB, D_DEVICENO_PA,    false, false,false,
      QSTR("(PA)MB车终点站屏故障"),
      QSTR("无") },
    { 1991, bit2, D_CAR_1, 0x930A, D_FAULT_GRADE_3,  D_DEVICE_PIS, D_POSITION_MA, D_DEVICENO_PA,    false, false,false,
      QSTR("(PA)MA车终点站屏故障"),
      QSTR("无") },
    { 1993, bit3, D_CAR_1, 0x930B, D_FAULT_GRADE_3,  D_DEVICE_PIS, D_POSITION_MB, D_DEVICENO_PA,    false, false,false,
      QSTR("(PA)MB车两侧LED屏1故障"),
      QSTR("无") },
    { 1993, bit4, D_CAR_1, 0x930C, D_FAULT_GRADE_3,  D_DEVICE_PIS, D_POSITION_MB, D_DEVICENO_PA,    false, false,false,
      QSTR("(PA)MB车两侧LED屏2故障"),
      QSTR("无") },
    { 1993, bit5, D_CAR_1, 0x930D, D_FAULT_GRADE_3,  D_DEVICE_PIS, D_POSITION_MB, D_DEVICENO_PA,    false, false,false,
      QSTR("(PA)MB车贯通道地图1故障"),
      QSTR("无") },
    { 1993, bit6, D_CAR_1, 0x930E, D_FAULT_GRADE_3,  D_DEVICE_PIS, D_POSITION_MB, D_DEVICENO_PA,    false, false,false,
      QSTR("(PA)MB车贯通道地图2故障"),
      QSTR("无") },
    { 1992, bitA, D_CAR_1, 0x930F, D_FAULT_GRADE_3,  D_DEVICE_PIS, D_POSITION_RB, D_DEVICENO_PA,    false, false,false,
      QSTR("(PA)RB车乘务员对讲1故障"),
      QSTR("无") },
    { 1992, bitB, D_CAR_1, 0x9310, D_FAULT_GRADE_3,  D_DEVICE_PIS, D_POSITION_RB, D_DEVICENO_PA,    false, false,false,
      QSTR("(PA)RB车乘务员对讲2故障"),
      QSTR("无") },
    { 1992, bit8, D_CAR_1, 0x9311, D_FAULT_GRADE_3,  D_DEVICE_PIS, D_POSITION_RB, D_DEVICENO_PA,    false, false,false,
      QSTR("(PA)RB车贯通道地图1故障"),
      QSTR("无") },
    { 1992, bit9, D_CAR_1, 0x9312, D_FAULT_GRADE_3,  D_DEVICE_PIS, D_POSITION_RB, D_DEVICENO_PA,    false, false,false,
      QSTR("(PA)RB车贯通道地图2故障"),
      QSTR("无") },
    { 1992, bit0, D_CAR_1, 0x9313, D_FAULT_GRADE_3,  D_DEVICE_PIS, D_POSITION_P , D_DEVICENO_PA,    false, false,false,
      QSTR("(PA)P 车贯通道地图1故障"),
      QSTR("无") },
    { 1992, bit1, D_CAR_1, 0x9314, D_FAULT_GRADE_3,  D_DEVICE_PIS, D_POSITION_P , D_DEVICENO_PA,    false, false,false,
      QSTR("(PA)P 车贯通道地图2故障"),
      QSTR("无") },
    { 1991, bitA, D_CAR_1, 0x9315, D_FAULT_GRADE_3,  D_DEVICE_PIS, D_POSITION_RA, D_DEVICENO_PA,    false, false,false,
      QSTR("(PA)RA车乘务员对讲1故障"),
      QSTR("无") },
    { 1991, bitB, D_CAR_1, 0x9316, D_FAULT_GRADE_3,  D_DEVICE_PIS, D_POSITION_RA, D_DEVICENO_PA,    false, false,false,
      QSTR("(PA)RA车乘务员对讲2故障"),
      QSTR("无") },
    { 1991, bit8, D_CAR_1, 0x9317, D_FAULT_GRADE_3,  D_DEVICE_PIS, D_POSITION_RA, D_DEVICENO_PA,    false, false,false,
      QSTR("(PA)RA车贯通道地图1故障"),
      QSTR("无") },
    { 1991, bit9, D_CAR_1, 0x9318, D_FAULT_GRADE_3,  D_DEVICE_PIS, D_POSITION_RA, D_DEVICENO_PA,    false, false,false,
      QSTR("(PA)RA车贯通道地图2故障"),
      QSTR("无") },
    { 1991, bit3, D_CAR_1, 0x9319, D_FAULT_GRADE_3,  D_DEVICE_PIS, D_POSITION_MA, D_DEVICENO_PA,    false, false,false,
      QSTR("(PA)MA车两侧LED屏1故障"),
      QSTR("无") },
    { 1991, bit4, D_CAR_1, 0x931A, D_FAULT_GRADE_3,  D_DEVICE_PIS, D_POSITION_MA, D_DEVICENO_PA,    false, false,false,
      QSTR("(PA)MA车两侧LED屏2故障"),
      QSTR("无") },
    { 1991, bit5, D_CAR_1, 0x931B, D_FAULT_GRADE_3,  D_DEVICE_PIS, D_POSITION_MA, D_DEVICENO_PA,    false, false,false,
      QSTR("(PA)MA车贯通道地图1故障"),
      QSTR("无") },
    { 1991, bit6, D_CAR_1, 0x931C, D_FAULT_GRADE_3,  D_DEVICE_PIS, D_POSITION_MA, D_DEVICENO_PA,    false, false,false,
      QSTR("(PA)MA车贯通道地图2故障"),
      QSTR("无") },
    { 1939, bit0, D_CAR_1, 0x931D, D_FAULT_GRADE_3,  D_DEVICE_PIS, D_POSITION_MA, D_DEVICENO_PIDS,    false, false,false,
      QSTR("(PIDS)CA端CMON 故障"),
      QSTR("无") },
    { 1939, bit1, D_CAR_1, 0x931E, D_FAULT_GRADE_3,  D_DEVICE_PIS, D_POSITION_MB, D_DEVICENO_PIDS,    false, false,false,
      QSTR("(PIDS)CB端CMON 故障"),
      QSTR("无") },
    { 1939, bit2, D_CAR_1, 0x931F, D_FAULT_GRADE_3,  D_DEVICE_PIS, D_POSITION_MA, D_DEVICENO_PIDS,    false, false,false,
      QSTR("(PIDS)MA主机故障"),
      QSTR("无") },
    { 1939, bit3, D_CAR_1, 0x9320, D_FAULT_GRADE_3,  D_DEVICE_PIS, D_POSITION_MB, D_DEVICENO_PIDS,    false, false,false,
      QSTR("(PIDS)MB主机故障"),
      QSTR("无") },
    { 1939, bit8, D_CAR_1, 0x9321, D_FAULT_GRADE_3,  D_DEVICE_PIS, D_POSITION_MA, D_DEVICENO_PIDS,    false, false,false,
      QSTR("(PIDS)MA车MDU屏故障"),
      QSTR("无") },
    { 1939, bit9, D_CAR_1, 0x9322, D_FAULT_GRADE_3,  D_DEVICE_PIS, D_POSITION_RA, D_DEVICENO_PIDS,    false, false,false,
      QSTR("(PIDS)RA车MDU屏故障"),
      QSTR("无") },
    { 1939, bitA, D_CAR_1, 0x9323, D_FAULT_GRADE_3,  D_DEVICE_PIS, D_POSITION_P , D_DEVICENO_PIDS,    false, false,false,
      QSTR("(PIDS)P 车MDU屏故障"),
      QSTR("无") },
    { 1939, bitB, D_CAR_1, 0x9324, D_FAULT_GRADE_3,  D_DEVICE_PIS, D_POSITION_RB, D_DEVICENO_PIDS,    false, false,false,
      QSTR("(PIDS)RB车MDU屏故障"),
      QSTR("无") },
    { 1939, bitC, D_CAR_1, 0x9325, D_FAULT_GRADE_3,  D_DEVICE_PIS, D_POSITION_MB, D_DEVICENO_PIDS,    false, false,false,
      QSTR("(PIDS)MB车MDU屏故障"),
      QSTR("无") },
    { 1940, bit8, D_CAR_1, 0x9326, D_FAULT_GRADE_3,  D_DEVICE_PIS, D_POSITION_MA, D_DEVICENO_PIDS,    false, false,false,
      QSTR("(PIDS)CA室内1位端摄像头故障"),
      QSTR("无") },
    { 1940, bit9, D_CAR_1, 0x9327, D_FAULT_GRADE_3,  D_DEVICE_PIS, D_POSITION_MA, D_DEVICENO_PIDS,    false, false,false,
      QSTR("(PIDS)CA室内2位端摄像头故障"),
      QSTR("无") },
    { 1940, bitA, D_CAR_1, 0x9328, D_FAULT_GRADE_3,  D_DEVICE_PIS, D_POSITION_MA, D_DEVICENO_PIDS,    false, false,false,
      QSTR("(PIDS)CA室外1位端摄像头故障"),
      QSTR("无") },
    { 1940, bitB, D_CAR_1, 0x9329, D_FAULT_GRADE_3,  D_DEVICE_PIS, D_POSITION_MA, D_DEVICENO_PIDS,    false, false,false,
      QSTR("(PIDS)CA室外2位端摄像头故障"),
      QSTR("无") },
    { 1940, bitC, D_CAR_1, 0x932A, D_FAULT_GRADE_3,  D_DEVICE_PIS, D_POSITION_MA, D_DEVICENO_PIDS,    false, false,false,
      QSTR("(PIDS)MA车1位端摄像头故障"),
      QSTR("无") },
    { 1940, bitD, D_CAR_1, 0x932B, D_FAULT_GRADE_3,  D_DEVICE_PIS, D_POSITION_MA, D_DEVICENO_PIDS,    false, false,false,
      QSTR("(PIDS)MA车2位端摄像头故障"),
      QSTR("无") },
    { 1940, bitE, D_CAR_1, 0x932C, D_FAULT_GRADE_3,  D_DEVICE_PIS, D_POSITION_RA, D_DEVICENO_PIDS,    false, false,false,
      QSTR("(PIDS)RA车1位端摄像头故障"),
      QSTR("无") },
    { 1940, bitF, D_CAR_1, 0x932D, D_FAULT_GRADE_3,  D_DEVICE_PIS, D_POSITION_RA, D_DEVICENO_PIDS,    false, false,false,
      QSTR("(PIDS)RA车2位端摄像头故障"),
      QSTR("无") },
    { 1941, bit0, D_CAR_1, 0x932E, D_FAULT_GRADE_3,  D_DEVICE_PIS, D_POSITION_RB, D_DEVICENO_PIDS,    false, false,false,
      QSTR("(PIDS)RB车1位端摄像头故障"),
      QSTR("无") },
    { 1941, bit1, D_CAR_1, 0x932F, D_FAULT_GRADE_3,  D_DEVICE_PIS, D_POSITION_RB, D_DEVICENO_PIDS,    false, false,false,
      QSTR("(PIDS)RB车2位端摄像头故障"),
      QSTR("无") },
    { 1941, bit2, D_CAR_1, 0x9330, D_FAULT_GRADE_3,  D_DEVICE_PIS, D_POSITION_MB, D_DEVICENO_PIDS,    false, false,false,
      QSTR("(PIDS)MB车1位端摄像头故障"),
      QSTR("无") },
    { 1941, bit3, D_CAR_1, 0x9331, D_FAULT_GRADE_3,  D_DEVICE_PIS, D_POSITION_MB, D_DEVICENO_PIDS,    false, false,false,
      QSTR("(PIDS)MB车2位端摄像头故障"),
      QSTR("无") },
    { 1941, bit4, D_CAR_1, 0x9332, D_FAULT_GRADE_3,  D_DEVICE_PIS, D_POSITION_MB, D_DEVICENO_PIDS,    false, false,false,
      QSTR("(PIDS)CB室内1位端摄像头故障"),
      QSTR("无") },
    { 1941, bit5, D_CAR_1, 0x9333, D_FAULT_GRADE_3,  D_DEVICE_PIS, D_POSITION_MB, D_DEVICENO_PIDS,    false, false,false,
      QSTR("(PIDS)CB室内2位端摄像头故障"),
      QSTR("无") },
    { 1941, bit6, D_CAR_1, 0x9334, D_FAULT_GRADE_3,  D_DEVICE_PIS, D_POSITION_MB, D_DEVICENO_PIDS,    false, false,false,
      QSTR("(PIDS)CB室外1位端摄像头故障"),
      QSTR("无") },
    { 1941, bit7, D_CAR_1, 0x9335, D_FAULT_GRADE_3,  D_DEVICE_PIS, D_POSITION_MB, D_DEVICENO_PIDS,    false, false,false,
      QSTR("(PIDS)CB室外2位端摄像头故障"),
      QSTR("无") },

};

int g_faultsRomLen = sizeof(g_faultsrom)/sizeof(FAULTS_ROM_DATA);

bool FaultsVerdict(FAULTS_ROM_DATA *pdata)
{
    if  ((pdata->code >= 0x1101) && (pdata->code <= 0x121c))
    {
        if(pdata->code == 0x1101&&pdata->position == D_POSITION_MA)///Tcu
        {
            if(g_dataBuffer_MVB[512+4]&bit0 && g_dataBuffer_MVB[512+4]&bit1 && (pdata->car == D_CAR_1))// local train fault port 111
            {
                return true;
            }
            if(g_dataBuffer_MVB[480+4]&bit0 && g_dataBuffer_MVB[480+4]&bit1 && (pdata->car == D_CAR_2))// local train fault port 141
            {
                return true;
            }
        }
        else if(pdata->code == 0x1102&&pdata->position == D_POSITION_MA)
        {
            if(g_dataBuffer_MVB[512+4]&bit2 && g_dataBuffer_MVB[512+4]&bit3 && (pdata->car == D_CAR_1))
            {
                return true;
            }
            if(g_dataBuffer_MVB[480+4]&bit2 && g_dataBuffer_MVB[480+4]&bit3 && (pdata->car == D_CAR_2))
            {
                return true;
            }
        }
        else if(pdata->code == 0x1103&&pdata->position == D_POSITION_MB)
        {
            if(g_dataBuffer_MVB[512+4]&bit4 && g_dataBuffer_MVB[512+4]&bit5 && (pdata->car == D_CAR_1))
            {
                return true;
            }
            if(g_dataBuffer_MVB[480+4]&bit4 && g_dataBuffer_MVB[480+4]&bit5 && (pdata->car == D_CAR_2))
            {
                return true;
            }
        }
        else if(pdata->code == 0x1104&&pdata->position == D_POSITION_MB)
        {
            if(g_dataBuffer_MVB[512+4]&bit6 && g_dataBuffer_MVB[512+4]&bit7 && (pdata->car == D_CAR_1))
            {
                return true;
            }
            if(g_dataBuffer_MVB[480+4]&bit6 && g_dataBuffer_MVB[480+4]&bit7 && (pdata->car == D_CAR_2))
            {
                return true;
            }
        }
        else if(pdata->code == 0x1105&&pdata->position == D_POSITION_MA)///bcu
        {
            if(g_dataBuffer_MVB[512+6]&bit2 && g_dataBuffer_MVB[512+6]&bit3 && (pdata->car == D_CAR_1))
            {
                return true;
            }
            if(g_dataBuffer_MVB[480+6]&bit2 && g_dataBuffer_MVB[480+6]&bit3 && (pdata->car == D_CAR_2))
            {
                return true;
            }
        }
        else if(pdata->code == 0x1106&&pdata->position == D_POSITION_MB)
        {
            if(g_dataBuffer_MVB[512+6]&bit4 && g_dataBuffer_MVB[512+6]&bit5 && (pdata->car == D_CAR_1))
            {
                return true;
            }
            if(g_dataBuffer_MVB[480+6]&bit4 && g_dataBuffer_MVB[480+6]&bit5 && (pdata->car == D_CAR_2))
            {
                return true;
            }
        }
        else if(pdata->code == 0x1107&&pdata->position == D_POSITION_P)
        {
            if(g_dataBuffer_MVB[512+6]&bit6 && g_dataBuffer_MVB[512+6]&bit7 && (pdata->car == D_CAR_1))
            {
                return true;
            }
            if(g_dataBuffer_MVB[480+6]&bit6 && g_dataBuffer_MVB[480+6]&bit7 && (pdata->car == D_CAR_2))
            {
                return true;
            }
        }
        else if(pdata->code == 0x1108&&pdata->position == D_POSITION_MA)//CCU
        {
            if(g_dataBuffer_MVB[512+5]&bit0 && g_dataBuffer_MVB[512+5]&bit1 && (pdata->car == D_CAR_1))
            {
                return true;
            }
            if(g_dataBuffer_MVB[480+5]&bit0 && g_dataBuffer_MVB[480+5]&bit1 && (pdata->car == D_CAR_2))
            {
                return true;
            }
        }
        else if(pdata->code == 0x1109&&pdata->position == D_POSITION_MA)//LCU
        {
            if(g_dataBuffer_MVB[512+5]&bit2 && g_dataBuffer_MVB[512+5]&bit3 && (pdata->car == D_CAR_1))
            {
                return true;
            }
            if(g_dataBuffer_MVB[480+5]&bit2 && g_dataBuffer_MVB[480+5]&bit3 && (pdata->car == D_CAR_2))
            {
                return true;
            }
        }
        else if(pdata->code == 0x110A&&pdata->position == D_POSITION_RA)
        {
            if(g_dataBuffer_MVB[512+5]&bit4 && g_dataBuffer_MVB[512+5]&bit5 && (pdata->car == D_CAR_1))
            {
                return true;
            }
            if(g_dataBuffer_MVB[480+5]&bit4 && g_dataBuffer_MVB[480+5]&bit5 && (pdata->car == D_CAR_2))
            {
                return true;
            }
        }
        else if(pdata->code == 0x110B&&pdata->position == D_POSITION_P)
        {
            if(g_dataBuffer_MVB[512+6]&bitE && g_dataBuffer_MVB[512+6]&bitF && (pdata->car == D_CAR_1))
            {
                return true;
            }
            if(g_dataBuffer_MVB[480+6]&bitE && g_dataBuffer_MVB[480+6]&bitF && (pdata->car == D_CAR_2))
            {
                return true;
            }
        }
        else if(pdata->code == 0x110C&&pdata->position == D_POSITION_RB)
        {
            if(g_dataBuffer_MVB[512+5]&bitC && g_dataBuffer_MVB[512+5]&bitD && (pdata->car == D_CAR_1))
            {
                return true;
            }
            if(g_dataBuffer_MVB[480+5]&bitC && g_dataBuffer_MVB[480+5]&bitD && (pdata->car == D_CAR_2))
            {
                return true;
            }
        }
        else if(pdata->code == 0x110D&&pdata->position == D_POSITION_MB)
        {
            if(g_dataBuffer_MVB[512+5]&bitA && g_dataBuffer_MVB[512+5]&bitB && (pdata->car == D_CAR_1))
            {
                return true;
            }
            if(g_dataBuffer_MVB[480+5]&bitA && g_dataBuffer_MVB[480+5]&bitB && (pdata->car == D_CAR_2))
            {
                return true;
            }
        }
        else if(pdata->code == 0x110E&&pdata->position == D_POSITION_MB)///CCU
        {
            if(g_dataBuffer_MVB[512+5]&bit8 && g_dataBuffer_MVB[512+5]&bit9 && (pdata->car == D_CAR_1))
            {
                return true;
            }
            if(g_dataBuffer_MVB[480+5]&bit8 && g_dataBuffer_MVB[480+5]&bit9 && (pdata->car == D_CAR_2))
            {
                return true;
            }
        }
        else if(pdata->code == 0x110F&&pdata->position == D_POSITION_MA)///IDU MA
        {
            if(g_dataBuffer_MVB[512+7]&bit0 && g_dataBuffer_MVB[512+7]&bit1 && (pdata->car == D_CAR_1))
            {
                return true;
            }
            if(g_dataBuffer_MVB[480+7]&bit0 && g_dataBuffer_MVB[480+7]&bit1 && (pdata->car == D_CAR_2))
            {
                return true;
            }
        }
        else if(pdata->code == 0x1110&&pdata->position == D_POSITION_MB)///IDU MB
        {
            if(g_dataBuffer_MVB[512+7]&bit2 && g_dataBuffer_MVB[512+7]&bit3 && (pdata->car == D_CAR_1))
            {
                return true;
            }
            if(g_dataBuffer_MVB[480+7]&bit2 && g_dataBuffer_MVB[480+7]&bit3 && (pdata->car == D_CAR_2))
            {
                return true;
            }
        }
        else if(pdata->code == 0x1111&&pdata->position == D_POSITION_MA)///GTW MA
        {
            if(g_dataBuffer_MVB[512+8]&bit6 && g_dataBuffer_MVB[512+8]&bit7 && (pdata->car == D_CAR_1))
            {
                return true;
            }
            if(g_dataBuffer_MVB[480+8]&bit6 && g_dataBuffer_MVB[480+8]&bit7 && (pdata->car == D_CAR_2))
            {
                return true;
            }
        }
        else if(pdata->code == 0x1112&&pdata->position == D_POSITION_MB)///ERM MB
        {
            if(g_dataBuffer_MVB[512+8]&bit0 && g_dataBuffer_MVB[512+8]&bit1 && (pdata->car == D_CAR_1))
            {
                return true;
            }
            if(g_dataBuffer_MVB[480+8]&bit0 && g_dataBuffer_MVB[480+8]&bit1 && (pdata->car == D_CAR_2))
            {
                return true;
            }
        }
        else if(pdata->code == 0x1213&&pdata->position == D_POSITION_MA)///PIDS MA
        {
            if(g_dataBuffer_MVB[512+7]&bit8 && g_dataBuffer_MVB[512+7]&bit9 && (pdata->car == D_CAR_1))
            {
                return true;
            }
            if(g_dataBuffer_MVB[480+7]&bit8 && g_dataBuffer_MVB[480+7]&bit9 && (pdata->car == D_CAR_2))
            {
                return true;
            }
        }
        else if(pdata->code == 0x1214&&pdata->position == D_POSITION_MA)///PA MA
        {
            if(g_dataBuffer_MVB[512+7]&bitC && g_dataBuffer_MVB[512+7]&bitD && (pdata->car == D_CAR_1))
            {
                return true;
            }
            if(g_dataBuffer_MVB[480+7]&bitC && g_dataBuffer_MVB[480+7]&bitD && (pdata->car == D_CAR_2))
            {
                return true;
            }
        }
        else if(pdata->code == 0x1215&&pdata->position == D_POSITION_MB)///PIDS MB
        {
            if(g_dataBuffer_MVB[512+7]&bitA && g_dataBuffer_MVB[512+7]&bitB && (pdata->car == D_CAR_1))
            {
                return true;
            }
            if(g_dataBuffer_MVB[480+7]&bitA && g_dataBuffer_MVB[480+7]&bitB && (pdata->car == D_CAR_2))
            {
                return true;
            }
        }
        else if(pdata->code == 0x1216&&pdata->position == D_POSITION_MB)///PA MB
        {
            if(g_dataBuffer_MVB[512+7]&bitE && g_dataBuffer_MVB[512+7]&bitF && (pdata->car == D_CAR_1))
            {
                return true;
            }
            if(g_dataBuffer_MVB[480+7]&bitE && g_dataBuffer_MVB[480+7]&bitF && (pdata->car == D_CAR_2))
            {
                return true;
            }
        }
        else if(pdata->code == 0x1217&&pdata->position == D_POSITION_MA)///DCU MA
        {
            if(g_dataBuffer_MVB[528+6]&bit0 && g_dataBuffer_MVB[528+6]&bit1 && (pdata->car == D_CAR_1))
            {
                return true;
            }
            if(g_dataBuffer_MVB[496+6]&bit0 && g_dataBuffer_MVB[496+6]&bit1 && (pdata->car == D_CAR_2))
            {
                return true;
            }
        }
        else if(pdata->code == 0x1218&&pdata->position == D_POSITION_MB)///DCU MB
        {
            if(g_dataBuffer_MVB[528+7]&bit8 && g_dataBuffer_MVB[528+7]&bit9 && (pdata->car == D_CAR_1))
            {
                return true;
            }
            if(g_dataBuffer_MVB[496+7]&bit8 && g_dataBuffer_MVB[496+7]&bit9 && (pdata->car == D_CAR_2))
            {
                return true;
            }
        }
        else if(pdata->code == 0x1219&&pdata->position == D_POSITION_RA)///DCU MA
        {
            if(g_dataBuffer_MVB[528+6]&bit8 && g_dataBuffer_MVB[528+6]&bit9 && (pdata->car == D_CAR_1))
            {
                return true;
            }
            if(g_dataBuffer_MVB[496+6]&bit8 && g_dataBuffer_MVB[496+6]&bit9 && (pdata->car == D_CAR_2))
            {
                return true;
            }
        }
        else if(pdata->code == 0x121A&&pdata->position == D_POSITION_RB)///DCU MB
        {
            if(g_dataBuffer_MVB[528+7]&bit0 && g_dataBuffer_MVB[528+7]&bit1 && (pdata->car == D_CAR_1))
            {
                return true;
            }
            if(g_dataBuffer_MVB[496+7]&bit0 && g_dataBuffer_MVB[496+7]&bit1 && (pdata->car == D_CAR_2))
            {
                return true;
            }
        }
        else if(pdata->code == 0x121B&&pdata->position == D_POSITION_MA)///HVAC MA
        {
            if(g_dataBuffer_MVB[512+5]&bitE && g_dataBuffer_MVB[512+5]&bitF && (pdata->car == D_CAR_1))
            {
                return true;
            }
            if(g_dataBuffer_MVB[480+5]&bitE && g_dataBuffer_MVB[480+5]&bitF && (pdata->car == D_CAR_2))
            {
                return true;
            }
        }
        else if(pdata->code == 0x121C&&pdata->position == D_POSITION_MB)///HVAC MB
        {
            if(g_dataBuffer_MVB[512+6]&bit6 && g_dataBuffer_MVB[512+6]&bit7 && (pdata->car == D_CAR_1))
            {
                return true;
            }
            if(g_dataBuffer_MVB[480+6]&bit6 && g_dataBuffer_MVB[480+6]&bit7 && (pdata->car == D_CAR_2))
            {
                return true;
            }
        }
    }
    else if((pdata->code >= 0x2101) && (pdata->code <= 0x23ff))
    {
        if(pdata->code == 0x2101 && pdata->position == D_POSITION_MA)///ccu
        {
            if(!(g_dataBuffer_MVB[512+5]&bit0) && g_dataBuffer_MVB[512+5]&bit1 && (pdata->car == D_CAR_1))
            {
                return true;
            }
            if(!(g_dataBuffer_MVB[480+5]&bit0) && g_dataBuffer_MVB[480+5]&bit1 && (pdata->car == D_CAR_2))
            {
                return true;
            }
        }
        else if(pdata->code == 0x2102 && pdata->position == D_POSITION_MA)///lcu
        {
            if(!(g_dataBuffer_MVB[512+5]&bit2) && g_dataBuffer_MVB[512+5]&bit3 && (pdata->car == D_CAR_1))
            {
                return true;
            }
            if(!(g_dataBuffer_MVB[480+5]&bit2) && g_dataBuffer_MVB[480+5]&bit3 && (pdata->car == D_CAR_2))
            {
                return true;
            }
        }
        else if(pdata->code == 0x2103 && pdata->position == D_POSITION_RA)///lcu
        {
            if(!(g_dataBuffer_MVB[512+5]&bit4) && g_dataBuffer_MVB[512+5]&bit5 && (pdata->car == D_CAR_1))
            {
                return true;
            }
            if(!(g_dataBuffer_MVB[480+5]&bit4) && g_dataBuffer_MVB[480+5]&bit5 && (pdata->car == D_CAR_2))
            {
                return true;
            }
        }
        else if(pdata->code == 0x2104 && pdata->position == D_POSITION_MB)///lcu
        {
            if(!(g_dataBuffer_MVB[512+5]&bitA) && g_dataBuffer_MVB[512+5]&bitB && (pdata->car == D_CAR_1))
            {
                return true;
            }
            if(!(g_dataBuffer_MVB[480+5]&bitA) && g_dataBuffer_MVB[480+5]&bitB && (pdata->car == D_CAR_2))
            {
                return true;
            }
        }
        else if(pdata->code == 0x2105 && pdata->position == D_POSITION_RB)///lcu
        {
            if(!(g_dataBuffer_MVB[512+5]&bitC) && g_dataBuffer_MVB[512+5]&bitD && (pdata->car == D_CAR_1))
            {
                return true;
            }
            if(!(g_dataBuffer_MVB[480+5]&bitC) && g_dataBuffer_MVB[480+5]&bitD && (pdata->car == D_CAR_2))
            {
                return true;
            }
        }
        else if(pdata->code == 0x2106 && pdata->position == D_POSITION_P)///lcu
        {
            if(!(g_dataBuffer_MVB[512+6]&bitE) && g_dataBuffer_MVB[512+6]&bitF && (pdata->car == D_CAR_1))
            {
                return true;
            }
            if(!(g_dataBuffer_MVB[480+6]&bitE) && g_dataBuffer_MVB[480+6]&bitF && (pdata->car == D_CAR_2))
            {
                return true;
            }
        }
        else if(pdata->code == 0x2107 && pdata->position == D_POSITION_MA)///GTW
        {
            if(!(g_dataBuffer_MVB[512+8]&bit6) && g_dataBuffer_MVB[512+8]&bit7 && (pdata->car == D_CAR_1))// local train fault port 111
            {
                return true;
            }
            if(!(g_dataBuffer_MVB[480+8]&bit6) && g_dataBuffer_MVB[480+8]&bit7 && (pdata->car == D_CAR_2))// local train fault port 141
            {
                return true;
            }
        }
        else if (0 != (g_dataBuffer_MVB[pdata->offset] & pdata->bit))
        {
            return true;
        }
    }
    else if((pdata->code >= 0xf101) && (pdata->code <= 0xf1ff))// add 111/141 port fault only for tips
    {
        if(pdata->code == 0xF101 && pdata->position == D_POSITION_MA)///tcu1
        {
            if(!(g_dataBuffer_MVB[512+4]&bit0) && g_dataBuffer_MVB[512+4]&bit1 && (pdata->car == D_CAR_1))
            {
                return true;
            }
            if(!(g_dataBuffer_MVB[480+4]&bit0) && g_dataBuffer_MVB[480+4]&bit1 && (pdata->car == D_CAR_2))
            {
                return true;
            }
        }
        else if(pdata->code == 0xF102 && pdata->position == D_POSITION_MA)///tcu2
        {
            if(!(g_dataBuffer_MVB[512+4]&bit2) && g_dataBuffer_MVB[512+4]&bit3 && (pdata->car == D_CAR_1))
            {
                return true;
            }
            if(!(g_dataBuffer_MVB[480+4]&bit2) && g_dataBuffer_MVB[480+4]&bit3 && (pdata->car == D_CAR_2))
            {
                return true;
            }
        }
        else if(pdata->code == 0xF103 && pdata->position == D_POSITION_MB)///tcu3
        {
            if(!(g_dataBuffer_MVB[512+4]&bit4) && g_dataBuffer_MVB[512+4]&bit5 && (pdata->car == D_CAR_1))
            {
                return true;
            }
            if(!(g_dataBuffer_MVB[480+4]&bit4) && g_dataBuffer_MVB[480+4]&bit5 && (pdata->car == D_CAR_2))
            {
                return true;
            }
        }
        else if(pdata->code == 0xF104 && pdata->position == D_POSITION_MB)///tcu4
        {
            if(!(g_dataBuffer_MVB[512+4]&bit6) && g_dataBuffer_MVB[512+4]&bit7 && (pdata->car == D_CAR_1))
            {
                return true;
            }
            if(!(g_dataBuffer_MVB[480+4]&bit6) && g_dataBuffer_MVB[480+4]&bit7 && (pdata->car == D_CAR_2))
            {
                return true;
            }
        }
        else if(pdata->code == 0xF105 && pdata->position == D_POSITION_MA)///ACU1
        {
            if(!(g_dataBuffer_MVB[512+4]&bit8) && g_dataBuffer_MVB[512+4]&bit9 && (pdata->car == D_CAR_1))
            {
                return true;
            }
            if(!(g_dataBuffer_MVB[480+4]&bit8) && g_dataBuffer_MVB[480+4]&bit9 && (pdata->car == D_CAR_2))
            {
                return true;
            }
        }
        else if(pdata->code == 0xF106 && pdata->position == D_POSITION_MB)///ACU2
        {
            if(!(g_dataBuffer_MVB[512+4]&bitA) && g_dataBuffer_MVB[512+4]&bitB && (pdata->car == D_CAR_1))
            {
                return true;
            }
            if(!(g_dataBuffer_MVB[480+4]&bitA) && g_dataBuffer_MVB[480+4]&bitB && (pdata->car == D_CAR_2))
            {
                return true;
            }
        }
        else if(pdata->code == 0xF107 && pdata->position == D_POSITION_MA)///BCC1
        {
            if(!(g_dataBuffer_MVB[512+4]&bitC) && g_dataBuffer_MVB[512+4]&bitD && (pdata->car == D_CAR_1))
            {
                return true;
            }
            if(!(g_dataBuffer_MVB[480+4]&bitC) && g_dataBuffer_MVB[480+4]&bitD && (pdata->car == D_CAR_2))
            {
                return true;
            }
        }
        else if(pdata->code == 0xF108 && pdata->position == D_POSITION_MB)///BCC2
        {
            if(!(g_dataBuffer_MVB[512+4]&bitE) && g_dataBuffer_MVB[512+4]&bitF && (pdata->car == D_CAR_1))
            {
                return true;
            }
            if(!(g_dataBuffer_MVB[480+4]&bitE) && g_dataBuffer_MVB[480+4]&bitF && (pdata->car == D_CAR_2))
            {
                return true;
            }
        }
        else if(pdata->code == 0xF109 && pdata->position == D_POSITION_MA)///CCU1
        {
            if(!(g_dataBuffer_MVB[512+5]&bit0) && g_dataBuffer_MVB[512+5]&bit1 && (pdata->car == D_CAR_1))
            {
                return true;
            }
            if(!(g_dataBuffer_MVB[480+5]&bit0) && g_dataBuffer_MVB[480+5]&bit1 && (pdata->car == D_CAR_2))
            {
                return true;
            }
        }
        else if(pdata->code == 0xF10A && pdata->position == D_POSITION_MA)///LCUMA
        {
            if(!(g_dataBuffer_MVB[512+5]&bit2) && g_dataBuffer_MVB[512+5]&bit3 && (pdata->car == D_CAR_1))
            {
                return true;
            }
            if(!(g_dataBuffer_MVB[480+5]&bit2) && g_dataBuffer_MVB[480+5]&bit3 && (pdata->car == D_CAR_2))
            {
                return true;
            }
        }
        else if(pdata->code == 0xF10B && pdata->position == D_POSITION_RA)///LCURA
        {
            if(!(g_dataBuffer_MVB[512+5]&bit4) && g_dataBuffer_MVB[512+5]&bit5 && (pdata->car == D_CAR_1))
            {
                return true;
            }
            if(!(g_dataBuffer_MVB[480+5]&bit4) && g_dataBuffer_MVB[480+5]&bit5 && (pdata->car == D_CAR_2))
            {
                return true;
            }
        }
        else if(pdata->code == 0xF10C && pdata->position == D_POSITION_MB)///CCU2
        {
            if(!(g_dataBuffer_MVB[512+5]&bit8) && g_dataBuffer_MVB[512+5]&bit9 && (pdata->car == D_CAR_1))
            {
                return true;
            }
            if(!(g_dataBuffer_MVB[480+5]&bit8) && g_dataBuffer_MVB[480+5]&bit9 && (pdata->car == D_CAR_2))
            {
                return true;
            }
        }
        else if(pdata->code == 0xF10D && pdata->position == D_POSITION_MB)///LCUMB
        {
            if(!(g_dataBuffer_MVB[512+5]&bitA) && g_dataBuffer_MVB[512+5]&bitB && (pdata->car == D_CAR_1))
            {
                return true;
            }
            if(!(g_dataBuffer_MVB[480+5]&bitA) && g_dataBuffer_MVB[480+5]&bitB && (pdata->car == D_CAR_2))
            {
                return true;
            }
        }
        else if(pdata->code == 0xF10E && pdata->position == D_POSITION_RB)///LCURB
        {
            if(!(g_dataBuffer_MVB[512+5]&bitC) && g_dataBuffer_MVB[512+5]&bitD && (pdata->car == D_CAR_1))
            {
                return true;
            }
            if(!(g_dataBuffer_MVB[480+5]&bitC) && g_dataBuffer_MVB[480+5]&bitD && (pdata->car == D_CAR_2))
            {
                return true;
            }
        }
        else if(pdata->code == 0xF10F && pdata->position == D_POSITION_RA)///HVAC1
        {
            if(!(g_dataBuffer_MVB[512+5]&bitE) && g_dataBuffer_MVB[512+5]&bitF && (pdata->car == D_CAR_1))
            {
                return true;
            }
            if(!(g_dataBuffer_MVB[480+5]&bitE) && g_dataBuffer_MVB[480+5]&bitF && (pdata->car == D_CAR_2))
            {
                return true;
            }
        }
        else if(pdata->code == 0xF110 && pdata->position == D_POSITION_P)///BCUP
        {
            if(!(g_dataBuffer_MVB[512+6]&bit0) && g_dataBuffer_MVB[512+6]&bit1 && (pdata->car == D_CAR_1))
            {
                return true;
            }
            if(!(g_dataBuffer_MVB[480+6]&bit0) && g_dataBuffer_MVB[480+6]&bit1 && (pdata->car == D_CAR_2))
            {
                return true;
            }
        }
        else if(pdata->code == 0xF111 && pdata->position == D_POSITION_MA)///BCUMA
        {
            if(!(g_dataBuffer_MVB[512+6]&bit2) && g_dataBuffer_MVB[512+6]&bit3 && (pdata->car == D_CAR_1))
            {
                return true;
            }
            if(!(g_dataBuffer_MVB[480+6]&bit2) && g_dataBuffer_MVB[480+6]&bit3 && (pdata->car == D_CAR_2))
            {
                return true;
            }
        }
        else if(pdata->code == 0xF112 && pdata->position == D_POSITION_MB)///BCUMB
        {
            if(!(g_dataBuffer_MVB[512+6]&bit4) && g_dataBuffer_MVB[512+6]&bit5 && (pdata->car == D_CAR_1))
            {
                return true;
            }
            if(!(g_dataBuffer_MVB[480+6]&bit4) && g_dataBuffer_MVB[480+6]&bit5 && (pdata->car == D_CAR_2))
            {
                return true;
            }
        }
        else if(pdata->code == 0xF113 && pdata->position == D_POSITION_RB)///HVAC2
        {
            if(!(g_dataBuffer_MVB[512+6]&bit6) && g_dataBuffer_MVB[512+6]&bit7 && (pdata->car == D_CAR_1))
            {
                return true;
            }
            if(!(g_dataBuffer_MVB[480+6]&bit6) && g_dataBuffer_MVB[480+6]&bit7 && (pdata->car == D_CAR_2))
            {
                return true;
            }
        }
        else if(pdata->code == 0xF114 && pdata->position == D_POSITION_P)///LCUP
        {
            if(!(g_dataBuffer_MVB[512+6]&bitE) && g_dataBuffer_MVB[512+6]&bitF && (pdata->car == D_CAR_1))
            {
                return true;
            }
            if(!(g_dataBuffer_MVB[480+6]&bitE) && g_dataBuffer_MVB[480+6]&bitF && (pdata->car == D_CAR_2))
            {
                return true;
            }
        }
        else if(pdata->code == 0xF115 && pdata->position == D_POSITION_MA)///IDU1
        {
            if(!(g_dataBuffer_MVB[512+7]&bit0) && g_dataBuffer_MVB[512+7]&bit1 && (pdata->car == D_CAR_1))
            {
                return true;
            }
            if(!(g_dataBuffer_MVB[480+7]&bit0) && g_dataBuffer_MVB[480+7]&bit1 && (pdata->car == D_CAR_2))
            {
                return true;
            }
        }
        else if(pdata->code == 0xF116 && pdata->position == D_POSITION_MB)///IDU2
        {
            if(!(g_dataBuffer_MVB[512+7]&bit2) && g_dataBuffer_MVB[512+7]&bit3 && (pdata->car == D_CAR_1))
            {
                return true;
            }
            if(!(g_dataBuffer_MVB[480+7]&bit2) && g_dataBuffer_MVB[480+7]&bit3 && (pdata->car == D_CAR_2))
            {
                return true;
            }
        }
        else if(pdata->code == 0xF117 && pdata->position == D_POSITION_MA)///PIDS1
        {
            if(!(g_dataBuffer_MVB[512+7]&bit8) && g_dataBuffer_MVB[512+7]&bit9 && (pdata->car == D_CAR_1))
            {
                return true;
            }
            if(!(g_dataBuffer_MVB[480+7]&bit8) && g_dataBuffer_MVB[480+7]&bit9 && (pdata->car == D_CAR_2))
            {
                return true;
            }
        }
        else if(pdata->code == 0xF118 && pdata->position == D_POSITION_MB)///PIDS2
        {
            if(!(g_dataBuffer_MVB[512+7]&bitA) && g_dataBuffer_MVB[512+7]&bitB && (pdata->car == D_CAR_1))
            {
                return true;
            }
            if(!(g_dataBuffer_MVB[480+7]&bitA) && g_dataBuffer_MVB[480+7]&bitB && (pdata->car == D_CAR_2))
            {
                return true;
            }
        }
        if(pdata->code == 0xF119 && pdata->position == D_POSITION_MA)///PA1
        {
            if(!(g_dataBuffer_MVB[512+7]&bitC) && g_dataBuffer_MVB[512+7]&bitD && (pdata->car == D_CAR_1))
            {
                return true;
            }
            if(!(g_dataBuffer_MVB[480+7]&bitC) && g_dataBuffer_MVB[480+7]&bitD && (pdata->car == D_CAR_2))
            {
                return true;
            }
        }
        else if(pdata->code == 0xF11A && pdata->position == D_POSITION_MB)///PA2
        {
            if(!(g_dataBuffer_MVB[512+7]&bitE) && g_dataBuffer_MVB[512+7]&bitF && (pdata->car == D_CAR_1))
            {
                return true;
            }
            if(!(g_dataBuffer_MVB[480+7]&bitE) && g_dataBuffer_MVB[480+7]&bitF && (pdata->car == D_CAR_2))
            {
                return true;
            }
        }
        else if(pdata->code == 0xF11B && pdata->position == D_POSITION_MA)///GTW
        {
            if(!(g_dataBuffer_MVB[512+8]&bit6) && g_dataBuffer_MVB[512+8]&bit7 && (pdata->car == D_CAR_1))
            {
                return true;
            }
            if(!(g_dataBuffer_MVB[480+8]&bit6) && g_dataBuffer_MVB[480+8]&bit7 && (pdata->car == D_CAR_2))
            {
                return true;
            }
        }
        else if(pdata->code == 0xF11E && pdata->position == D_POSITION_MA)///DOOR1 MA
        {
            if(!(g_dataBuffer_MVB[528+6]&bit0) && g_dataBuffer_MVB[528+6]&bit1 && (pdata->car == D_CAR_1))
            {
                return true;
            }
            if(!(g_dataBuffer_MVB[496+6]&bit0) && g_dataBuffer_MVB[496+6]&bit1 && (pdata->car == D_CAR_2))
            {
                return true;
            }
        }
        else if(pdata->code == 0xF11F && pdata->position == D_POSITION_MA)///DOOR2 MA
        {
            if(!(g_dataBuffer_MVB[528+6]&bit2) && g_dataBuffer_MVB[528+6]&bit3 && (pdata->car == D_CAR_1))
            {
                return true;
            }
            if(!(g_dataBuffer_MVB[496+6]&bit2) && g_dataBuffer_MVB[496+6]&bit3 && (pdata->car == D_CAR_2))
            {
                return true;
            }
        }
        else if(pdata->code == 0xF120 && pdata->position == D_POSITION_RA)///DOOR1 RA
        {
            if(!(g_dataBuffer_MVB[528+6]&bit8) && g_dataBuffer_MVB[528+6]&bit9 && (pdata->car == D_CAR_1))
            {
                return true;
            }
            if(!(g_dataBuffer_MVB[496+6]&bit8) && g_dataBuffer_MVB[496+6]&bit9 && (pdata->car == D_CAR_2))
            {
                return true;
            }
        }
        else if(pdata->code == 0xF121 && pdata->position == D_POSITION_RA)///DOOR2 RA
        {
            if(!(g_dataBuffer_MVB[528+6]&bitA) && g_dataBuffer_MVB[528+6]&bitB && (pdata->car == D_CAR_1))
            {
                return true;
            }
            if(!(g_dataBuffer_MVB[496+6]&bitA) && g_dataBuffer_MVB[496+6]&bitB && (pdata->car == D_CAR_2))
            {
                return true;
            }
        }
        else if(pdata->code == 0xF122 && pdata->position == D_POSITION_RA)///DOOR3 RA
        {
            if(!(g_dataBuffer_MVB[528+6]&bitC) && g_dataBuffer_MVB[528+6]&bitD && (pdata->car == D_CAR_1))
            {
                return true;
            }
            if(!(g_dataBuffer_MVB[496+6]&bitC) && g_dataBuffer_MVB[496+6]&bitD && (pdata->car == D_CAR_2))
            {
                return true;
            }
        }
        else if(pdata->code == 0xF123 && pdata->position == D_POSITION_RA)///DOOR4 RA
        {
            if(!(g_dataBuffer_MVB[528+6]&bitE) && g_dataBuffer_MVB[528+6]&bitF && (pdata->car == D_CAR_1))
            {
                return true;
            }
            if(!(g_dataBuffer_MVB[496+6]&bitE) && g_dataBuffer_MVB[496+6]&bitF && (pdata->car == D_CAR_2))
            {
                return true;
            }
        }
        else if(pdata->code == 0xF124 && pdata->position == D_POSITION_RB)///DOOR1 RB
        {
            if(!(g_dataBuffer_MVB[528+7]&bit0) && g_dataBuffer_MVB[528+7]&bit1 && (pdata->car == D_CAR_1))
            {
                return true;
            }
            if(!(g_dataBuffer_MVB[496+7]&bit0) && g_dataBuffer_MVB[496+7]&bit1 && (pdata->car == D_CAR_2))
            {
                return true;
            }
        }
        else if(pdata->code == 0xF125 && pdata->position == D_POSITION_RB)///DOOR2 RB
        {
            if(!(g_dataBuffer_MVB[528+7]&bit2) && g_dataBuffer_MVB[528+7]&bit3 && (pdata->car == D_CAR_1))
            {
                return true;
            }
            if(!(g_dataBuffer_MVB[496+7]&bit2) && g_dataBuffer_MVB[496+7]&bit3 && (pdata->car == D_CAR_2))
            {
                return true;
            }
        }
        else if(pdata->code == 0xF126 && pdata->position == D_POSITION_RB)///DOOR3 RB
        {
            if(!(g_dataBuffer_MVB[528+7]&bit4) && g_dataBuffer_MVB[528+7]&bit5 && (pdata->car == D_CAR_1))
            {
                return true;
            }
            if(!(g_dataBuffer_MVB[496+7]&bit4) && g_dataBuffer_MVB[496+7]&bit5 && (pdata->car == D_CAR_2))
            {
                return true;
            }
        }
        else if(pdata->code == 0xF127 && pdata->position == D_POSITION_RB)///DOOR4 RB
        {
            if(!(g_dataBuffer_MVB[528+7]&bit6) && g_dataBuffer_MVB[528+7]&bit7 && (pdata->car == D_CAR_1))
            {
                return true;
            }
            if(!(g_dataBuffer_MVB[496+7]&bit6) && g_dataBuffer_MVB[496+7]&bit7 && (pdata->car == D_CAR_2))
            {
                return true;
            }
        }
        else if(pdata->code == 0xF128 && pdata->position == D_POSITION_MB)///DOOR1 RB
        {
            if(!(g_dataBuffer_MVB[528+7]&bit8) && g_dataBuffer_MVB[528+7]&bit9 && (pdata->car == D_CAR_1))
            {
                return true;
            }
            if(!(g_dataBuffer_MVB[496+7]&bit8) && g_dataBuffer_MVB[496+7]&bit9 && (pdata->car == D_CAR_2))
            {
                return true;
            }
        }
        else if(pdata->code == 0xF129 && pdata->position == D_POSITION_MB)///DOOR2 RB
        {
            if(!(g_dataBuffer_MVB[528+7]&bitA) && g_dataBuffer_MVB[528+7]&bitB && (pdata->car == D_CAR_1))
            {
                return true;
            }
            if(!(g_dataBuffer_MVB[496+7]&bitA) && g_dataBuffer_MVB[496+7]&bitB && (pdata->car == D_CAR_2))
            {
                return true;
            }
        }
        else if (0 != (g_dataBuffer_MVB[pdata->offset] & pdata->bit))
        {
            return true;
        }
    }
    else if (0 != (g_dataBuffer_MVB[pdata->offset] & pdata->bit))
    {
        return true;
    }

    return false;
}
// 20110118 zlb modify (0 == CAR1_NET_RIOMONLINESTATE_BOOL)->!(CAR1_NET_RIOMONLINESTATE_BOOL)
bool CheckDeviceOnline(FAULTS_ROM_DATA *pdata)
{
    return true;
}

bool SkipScanning(FAULTS_ROM_DATA *pdata)
{
    ASSERT(NULL != pdata );
    if((D_CAR_1 != pdata->car)&&(D_CAR_2 != pdata->car) )
    {
        return true;
    }
    else
    {
        return false;
    }
}

int GetTrainFaultsReturnValue(int code)
{
    int ret = 0;
    switch (code)
    {
    case 15:
        ret = D_FAULTS_SCANNING_CODE15;
        break;
    case 17:
        ret = D_FAULTS_SCANNING_CODE17;
        break;
    case 18:
        ret = D_FAULTS_SCANNING_CODE18;
        break;
    case 19:
        ret = D_FAULTS_SCANNING_CODE19;
        break;
    case 21:
        ret = D_FAULTS_SCANNING_CODE21;
        break;
    case 22:
        ret = D_FAULTS_SCANNING_CODE22;
        break;
    case 24:
        ret = D_FAULTS_SCANNING_CODE24;
        break;
    case 25:
        ret = D_FAULTS_SCANNING_CODE25;
        break;
    case 26:
        ret = D_FAULTS_SCANNING_CODE26;
        break;
    case 27:
        ret = D_FAULTS_SCANNING_CODE27;
        break;
    case 28:
        ret = D_FAULTS_SCANNING_CODE28;
        break;
    case 29:
        ret = D_FAULTS_SCANNING_CODE29;
        break;
    default:
        break;
    }

    return ret;
}

int FaultsScanning()
{
    int ret = 0;
//    if (!g_communication_ok_flag)
//    {
//        return ret;
//    }
    int i;
    FAULTS_ROM_DATA *pdata = &g_faultsrom[0];
    bool found = false;
    int unconfirmed_count = 0;
    for (i=0; i<g_faultsRomLen; i++)
    {
        if (FaultsVerdict(pdata))
        {
         //   if( CheckDeviceOnline(pdata) )//paichu buzaixian shebei
            {
                if (pdata->flg)
                {   // already exist
                    // leave it alone

                    // shift the position in history-list in order to make
                    // the current-existing faults always on top of the stack
                    // HistoryListCollation(i);
                }
                else
                {   // a new fault occur
                    if (!AntiShakingProcess(i, true))
                    {
                        pdata++;
                        continue;
                    }
                    pdata->flg = true;
                    pdata->confirm = false;
                    QDateTime datetime = QDateTime::currentDateTime();

                    // 20111031 zlbzeb modify, remove "000000..." begin
                    if( datetime.date().year() < 1 ) continue;
                    // 20111031 zlbzeb modify, remove "000000..." end

                    // create a fault record
                    g_historyFaultsList.list[g_historyFaultsList.curIdx].datetime.year = datetime.date().year();
                    g_historyFaultsList.list[g_historyFaultsList.curIdx].datetime.month = datetime.date().month();
                    g_historyFaultsList.list[g_historyFaultsList.curIdx].datetime.day = datetime.date().day();
                    g_historyFaultsList.list[g_historyFaultsList.curIdx].datetime.hour = datetime.time().hour();
                    g_historyFaultsList.list[g_historyFaultsList.curIdx].datetime.minute = datetime.time().minute();
                    g_historyFaultsList.list[g_historyFaultsList.curIdx].datetime.second = datetime.time().second();
                    g_historyFaultsList.list[g_historyFaultsList.curIdx].romIdx = i;
                    if (D_CAR_1 == pdata->car)
                    {
                        g_historyFaultsList.list[g_historyFaultsList.curIdx].carID = g_car1IDUint16;
                    }
                    else if(D_CAR_2 == pdata->car)
                    {
                        // impossible
                        g_historyFaultsList.list[g_historyFaultsList.curIdx].carID = 0xFFFF;

                    }

//                    if(g_login_type == ENUM_LOGIN_TYPE_DRIVER)
//                    {
//                        g_historyFaultsList.list[g_historyFaultsList.curIdx].nIDType = ENUM_LOGIN_TYPE_DRIVER;
//                    }
//                    else if(g_login_type == ENUM_LOGIN_TYPE_MAINTAINER)
//                    {
//                        g_historyFaultsList.list[g_historyFaultsList.curIdx].nIDType = ENUM_LOGIN_TYPE_MAINTAINER;
//                    }
//                    else
//                    {
//                         g_historyFaultsList.list[g_historyFaultsList.curIdx].nIDType = -1;
//                    }
                    g_historyFaultsList.list[g_historyFaultsList.curIdx].nIDType = g_fault_recorder_login_type;
                    g_historyFaultsList.list[g_historyFaultsList.curIdx].lID = g_fault_recorder_loginID.toLong();

                    g_current_faults_datetime_array[i] = g_historyFaultsList.list[g_historyFaultsList.curIdx].datetime;

                    if (g_historyFaultsList.curIdx < (D_HISTORY_FAULT_LIST_MAX_CNT - 1))
                    {
                        g_historyFaultsList.curIdx += 1;
                    }
                    else
                    {
                        g_historyFaultsList.curIdx = 0;
                    }

                    if (g_historyFaultsList.cnt < D_HISTORY_FAULT_LIST_MAX_CNT)
                    {
                        g_historyFaultsList.cnt += 1;
                    }

                    // if "found" is true, faults history file saving is needed when the scanning is finished!
                    found = true;
                    isNewFaultsOccurBool = true;
//                    if (D_POSITION_TRAIN == pdata->position)
//                    {
//                        ret |= GetTrainFaultsReturnValue(pdata->code);
//                    }
                }
                if (!pdata->confirm)
                {
                    unconfirmed_count += 1;
                }
            }
        }
        else
        {
            if (pdata->flg)
            { // fault disapear
                if (!AntiShakingProcess(i, false))
                {
                    pdata++;
                    continue;
                }
                pdata->flg = false;
                pdata->confirm = false;
                memset(&g_current_faults_datetime_array[i], 0, sizeof(g_current_faults_datetime_array[i]));
            }
        }
        pdata++;
    }
    if (isNewFaultsOccurBool & (writeFileCnt>24) ) //400ms*25
    {
        //SaveFaultsHistory();
        isNewFaultsOccurBool = false;
        HistoryFaultsOutput();
        writeFileCnt = 0;
    }
    g_unconfirmed_faults_num = unconfirmed_count;
    return ret;
}

void HistoryFaultsListInit()
{
//    g_historyFaultsList.cnt = 0;
//    g_historyFaultsList.curIdx = 0;

    memset(&g_historyFaultsList, 0, sizeof(g_historyFaultsList));

    HistoryFaultsLoad();

    if((g_historyFaultsList.curIdx < 0) || (g_historyFaultsList.curIdx > D_HISTORY_FAULT_LIST_MAX_CNT))
    {
        g_historyFaultsList.curIdx = 0;
    }
}
QString GetDeviceNoStr(int val)
{
    QString str;
    switch (val)
    {
    case D_DEVICENO_CCU:
        str = "CCU";
        break;
    case D_DEVICENO_LCU:
        str = "LCU";
        break;
    case D_DEVICENO_IDU:
        str = "IDU";
        break;
    case D_DEVICENO_GTW:
        str = "GTW";
        break;
    case D_DEVICENO_ERM:
        str = "ERM";
        break;
    case D_DEVICENO_TW:
        str = "TW";
        break;
    case D_DEVICENO_BCU:
        str = "BCU";
        break;
    case D_DEVICENO_ACU1:
        str = "ACU1";
        break;
    case D_DEVICENO_ACU2:
        str = "ACU2";
        break;
    case D_DEVICENO_TCU1:
        str = "TCU1";
        break;
    case D_DEVICENO_TCU2:
        str = "TCU2";
        break;
    case D_DEVICENO_TCU3:
        str = "TCU3";
        break;
    case D_DEVICENO_TCU4:
        str = "TCU4";
        break;
    case D_DEVICENO_TCU:
        str = "TCU";
        break;
    case D_DEVICENO_SCU:
        str = "SCU";
        break;
    case D_DEVICENO_DCDC1:
        str = "SCU1";
        break;
    case D_DEVICENO_DCDC2:
        str = "SCU2";
        break;
    case D_DEVICENO_HVAC1:
        str = "HVAC1";
        break;
    case D_DEVICENO_HVAC2:
        str = "HVAC2";
        break;
    case D_DEVICENO_DOOR:
        str = "DOOR";
        break;
    case D_DEVICENO_DOOR1:
        str = "DOOR1";
        break;
    case D_DEVICENO_DOOR2:
        str = "DOOR2";
        break;
    case D_DEVICENO_DOOR3:
        str = "DOOR3";
        break;
    case D_DEVICENO_DOOR4:
        str = "DOOR4";
        break;
    case D_DEVICENO_PIS:
        str = "PIS";
        break;
    case D_DEVICENO_PIDS:
        str = "PIDS";
        break;
    case D_DEVICENO_PA:
        str = "PA";
        break;
    default:
        str = "---";
        break;
    }
    return str;
}

QString GetDeviceStr(int val)
{
    QString str;
    switch (val)
    {
    case D_DEVICE_COM:
        str = "TCMS";
        break;
    case D_DEVICE_TRAIN:
        str = "VEHICLE";
        break;
    case D_DEVICE_VCU:
        str = "VCU";
        break;
    case D_DEVICE_TCU:
        str = "TCU";
        break;
    case D_DEVICE_BCU:
        str = "BCU";
        break;
    case D_DEVICE_ACU:
        str = "ACU";
        break;
    case D_DEVICE_DOOR:
        str = "DOOR";
        break;
    case D_DEVICE_HVAC:
        str = "HVAC";
        break;
    case D_DEVICE_PIS:
        str = "PIS";
        break;
    case D_DEVICE_DCDC:
        str = "SCU";
        break;
    case D_DEVICE_LCU:
        str = "LCU";
        break;
    case D_DEVICE_IDU:
        str = "IDU";
        break;
    default:
        str = "---";
        break;
    }
    return str;
}

QString GetPositionStr(int val)
{
    QString str;
    switch (val)
    {
    case  D_POSITION_MA:
        str = "MA";
        break;
    case  D_POSITION_MB:
        str = "MB";
        break;
    case  D_POSITION_RA:
        str = "RA";
        break;
    case  D_POSITION_RB:
        str = "RB";
        break;
    case  D_POSITION_P :
        str = "P";
        break;
    case D_POSITION_MC1:
        str = "Mc1";
        break;
    case D_POSITION_MC2:
        str = "Mc2";
        break;
    case D_POSITION_T:
        str = "T";
        break;
    case D_POSITION_TRAIN:
        str = "Train";
        break;
    default:
        str = "---";
        break;
    }
    return str;
}

QString GetDateTimeStr(int idx)
{
    QString str = "-";

    ASSERT(idx < g_faultsRomLen)
    ST_DATETIME datetime = g_current_faults_datetime_array[idx];
    str.sprintf("%4d-%02d-%02d %02d:%02d:%02d",
                datetime.year, datetime.month, datetime.day,
                datetime.hour, datetime.minute, datetime.second);

    return str;
}

int CompareDateTime(ST_DATETIME datetime1, ST_DATETIME datetime2)
{
    if (datetime1.year > datetime2.year)
    {
        return 1;
    }
    else if (datetime1.year < datetime2.year)
    {
        return -1;
    }

    if (datetime1.month > datetime2.month)
    {
        return 1;
    }
    else if (datetime1.month < datetime2.month)
    {
        return -1;
    }

    if (datetime1.day > datetime2.day)
    {
        return 1;
    }
    else if (datetime1.day < datetime2.day)
    {
        return -1;
    }

    if (datetime1.hour > datetime2.hour)
    {
        return 1;
    }
    else if (datetime1.hour < datetime2.hour)
    {
        return -1;
    }

    if (datetime1.minute > datetime2.minute)
    {
        return 1;
    }
    else if (datetime1.minute < datetime2.minute)
    {
        return -1;
    }

    if (datetime1.second > datetime2.second)
    {
        return 1;
    }
    else if (datetime1.second < datetime2.second)
    {
        return -1;
    }

    return 0;
}

BYTE GetDeviceValFromStr(QString &str)
{
    BYTE val = 0;

    if (str == "D_DEVICE_COM")
    {
        val = D_DEVICE_COM;
    }
    else if (str == "D_DEVICE_TRAIN")
    {
        val = D_DEVICE_TRAIN;
    }
    else if (str ==  "D_DEVICE_VCU")
    {
        val = D_DEVICE_VCU;
    }
    else if (str ==  "D_DEVICE_TCU")
    {
        val = D_DEVICE_TCU;
    }
    else if (str ==  "D_DEVICE_BCU")
    {
        val = D_DEVICE_BCU;
    }
    else if (str ==  "D_DEVICE_ACU")
    {
        val = D_DEVICE_ACU;
    }
    else if (str ==  "D_DEVICE_DOOR")
    {
        val = D_DEVICE_DOOR;
    }
    else if (str ==  "D_DEVICE_HVAC")
    {
        val = D_DEVICE_HVAC;
    }
    else if (str ==  "D_DEVICE_PIS")
    {
        val = D_DEVICE_PIS;
    }
    else if (str ==  "D_DEVICE_DCDC")
    {
        val = D_DEVICE_DCDC;
    }
    else if (str ==  "D_DEVICE_LCU")
    {
        val = D_DEVICE_LCU;
    }
    else if (str ==  "D_DEVICE_IDU")
    {
        val = D_DEVICE_IDU;
    }

    return val;
}

BYTE GetGradeValFromStr(QString &str)
{
    BYTE val = 0;

    if (str == "D_FAULT_GRADE_1")
    {
        val = D_FAULT_GRADE_1;
    }
    else if (str ==  "D_FAULT_GRADE_2")
    {
        val = D_FAULT_GRADE_2;
    }
    else if (str ==  "D_FAULT_GRADE_3")
    {
        val = D_FAULT_GRADE_3;
    }
    else if (str ==  "D_FAULT_GRADE_4")
    {
        val = D_FAULT_GRADE_4;
    }

    return val;
}

BYTE GetPositionValFromStr(QString &str)
{
    BYTE val = 5;

    if (str == "D_POSITION_MC2")
    {
        val = D_POSITION_MC2;
    }
    else if (str ==  "D_POSITION_MC1")
    {
        val = D_POSITION_MC1;
    }
    else if (str ==  "D_POSITION_T")
    {
        val = D_POSITION_T;
    }
    else
    {
        ;
    }

    return val;
}

void ReadFaultsHistory()
{
    QString appPath = QApplication::applicationDirPath();
    QString fName = appPath + "/faultshistory.csv";

    QFile f(fName);

    if (!f.open(QIODevice::ReadOnly|QIODevice::Text))
    {
        return;
    }

    QTextStream stream(&f);

    QString line;
    QStringList list;
    QString str;

    g_historyFaultsList.cnt = 0;
    g_historyFaultsList.curIdx = 0;
    ST_HISTORY_FAULT_INFO *pdata = &g_historyFaultsList.list[0];
    
    while (NULL != (line = stream.readLine(0)))
    {
        list = line.split(",", QString::SkipEmptyParts);
        if (8 > list.count())
        {
            if(line.contains("curIndex:") == true)
            {
                g_historyFaultsList.curIdx = line.mid(9).toInt();
            }
            continue;
        }
        str = list[0].simplified();
        // 20111031 zlbzeb modify, remove "000000..." begin
        if( str.toInt() < 1 ) continue;
        // 20111031 zlbzeb modify, remove "000000..." end
        pdata->datetime.year = str.toInt();
        str = list[1].simplified();
        pdata->datetime.month = str.toInt();
        str = list[2].simplified();
        pdata->datetime.day = str.toInt();
        str = list[3].simplified();
        pdata->datetime.hour = str.toInt();
        str = list[4].simplified();
        pdata->datetime.minute = str.toInt();
        str = list[5].simplified();
        pdata->datetime.second = str.toInt();
        str = list[6].simplified();
        pdata->romIdx = str.toInt();
        str = list[7].simplified();
        pdata->carID = str.toUInt();
        if(list.count() == 10 )
        {
            str = list[8].simplified();
            pdata->nIDType = str.toInt();
            str = list[9].simplified();
            pdata->lID = str.toLong();
        }
        else
        {
            pdata->nIDType = -1;
            pdata->lID = -1;
        }

        if (g_historyFaultsList.cnt < D_HISTORY_FAULT_LIST_MAX_CNT)
        {
            g_historyFaultsList.cnt++;
        }
        pdata++;
    }

    f.close();

    return;
}

QString SaveFaultsHistory()
{
    QString appPath = QApplication::applicationDirPath();
    QString fName = appPath + "/record/faultshistory.csv";

    fstream fs;
    fs.open(fName.toStdString().c_str(), ios_base::out);
    if (!fs.is_open())
    {
        return "";
    }

    char linebuff[100];
    int i = 0;

    ST_DATETIME datetime;
    for (i=0; i<g_historyFaultsList.cnt; i++)
    {
        memset(linebuff, 0, sizeof(linebuff));
        datetime = g_historyFaultsList.list[i].datetime;
        sprintf(linebuff,"%4d,%02d,%02d,%02d,%02d,%02d,%d,%d,%d,%ld\n",
                     datetime.year, datetime.month, datetime.day,
                     datetime.hour, datetime.minute, datetime.second,
                     g_historyFaultsList.list[i].romIdx,
                     g_historyFaultsList.list[i].carID,
                     g_historyFaultsList.list[i].nIDType,
                     g_historyFaultsList.list[i].lID);
        fs.write(linebuff,strlen(linebuff));
    }

    //save current history index.
    QString curIndex = "curIndex:" + QString::number(g_historyFaultsList.curIdx) + "\n";
    fs.write(curIndex.toStdString().c_str(),curIndex.length());

    fs.close();

    return fName;
}

void HistoryFaultsLoad()
{
    QString appPath = QApplication::applicationDirPath();
    QString fName = appPath + "/record/FaultsHistory.dat";

    fstream fs;
    fs.open(fName.toStdString().c_str(), ios_base::in);

    if (!fs.is_open())
    {
        return;
    }
    fs.read((char*)&g_historyFaultsList, sizeof(g_historyFaultsList));

    fs.close();

    deleteUnexistFaults();

}

QString HistoryFaultsOutput()
{
    QString appPath = QApplication::applicationDirPath();
    QString fName = appPath + "/record/FaultsHistory.dat";

    fstream fs;
    fs.open(fName.toStdString().c_str(), ios_base::out);

    if (!fs.is_open())
    {
        return "";
    }
    ST_HISTORY_FAULTS_LIST historyFaultsList = g_historyFaultsList;
    fs.write((char*)&historyFaultsList, sizeof(historyFaultsList));

    fs.close();

    return fName;
}
int GetHistoryFaultIndexByNum(int num)
{
    int i;
    int index = g_historyFaultsList.curIdx - 1;

    if(index < 0)
        index = g_historyFaultsList.cnt - 1;

    for (i = 0; i < num - 1; i++)
    {
        if (0 >= index)
        {
            index = g_historyFaultsList.cnt - 1;
        }
        else
        {
            index -= 1;
        }
    }

    return index;
}

void HistoryListCollation(int idx)
{
    int i = 0;
    int index = 0;
    int romIdx = 0;
    bool bfind = false;
    int shiftIdx = 0;
    for (i=0; i<g_historyFaultsList.cnt; i++)
    {
        index = GetHistoryFaultIndexByNum(i + 1);
        romIdx = g_historyFaultsList.list[index].romIdx;
        if (idx == romIdx)
        {
            if (bfind)
            {
                ST_HISTORY_FAULT_INFO tmp;
                tmp = g_historyFaultsList.list[index];
                g_historyFaultsList.list[index] = g_historyFaultsList.list[shiftIdx];
                g_historyFaultsList.list[shiftIdx] = tmp;
            }
            break;
        }
        else if (!bfind && !g_faultsrom[romIdx].flg)
        {
            bfind = true;
            shiftIdx = index;
        }
    }
}

BYTE g_antiShakingVect0[D_HISTORY_FAULT_LIST_MAX_CNT];
BYTE g_antiShakingVect1[D_HISTORY_FAULT_LIST_MAX_CNT];

bool AntiShakingProcess(int idx, bool flg)
{
    bool ret = false;

    //return true;
    ASSERT(idx <= g_faultsRomLen)

    if (flg)
    { // accur
        g_antiShakingVect0[idx] = 0;
        g_antiShakingVect1[idx] += 1;
        if (g_antiShakingVect1[idx] >= D_ANTI_SHAKING_CNT)
        {
            g_antiShakingVect1[idx] = 0;
            ret = true;
        }
        else
        {
        }
    }
    else
    { // disapear
        g_antiShakingVect1[idx] = 0;
        g_antiShakingVect0[idx] += 1;
        if (g_antiShakingVect0[idx] >= D_ANTI_SHAKING_CNT)
        {
            g_antiShakingVect0[idx] = 0;
            ret = true;
        }
        else
        {
        }
    }

    return ret;
}

void ClearAllCurrentFaults()
{
    int i;
    FAULTS_ROM_DATA *pdata = &g_faultsrom[0];
    for (i=0; i<g_faultsRomLen; i++)
    {
        pdata->flg = false;
        pdata->confirm = false;
        pdata++;
    }
    g_unconfirmed_faults_num = 0;
}

void ClearAllHistoryFaults()
{
    g_historyFaultsList.cnt = 0;
    g_historyFaultsList.curIdx = 0;

//    QString appPath = QApplication::applicationDirPath();
//    QString fName = appPath + "/faultshistory.csv";
    QString appPath = QApplication::applicationDirPath();
    QString fName = appPath + "/record/FaultsHistory.dat";
    QFile::remove(fName);
}

QString GetCarCodeString(int carnum)
{
    ASSERT((carnum == D_CAR_1) || (carnum == D_CAR_2));
    QString str = "";

    if (D_CAR_1 == carnum)
    {
        str = g_car1CodeStr;
    }else if(D_CAR_2 == carnum)
    {
        str = QSTR("它车");
    }

    return str;
}

void deleteUnexistFaults()
{
    size_t i = 0;

    while (i < g_historyFaultsList.cnt)
    {
        if (g_historyFaultsList.list[i].romIdx >= 0 && g_historyFaultsList.list[i].romIdx < g_faultsRomLen)
        {
            i ++;
            continue;
        }
        else
        {
            for (size_t j = i; j < g_historyFaultsList.cnt - 1; j ++)
            {
                g_historyFaultsList.list[j] = g_historyFaultsList.list[j + 1];
            }

            g_historyFaultsList.cnt --;

            if (i > g_historyFaultsList.curIdx)
            {
                continue;
            }
            else if (0 == g_historyFaultsList.curIdx)
            {
                g_historyFaultsList.curIdx = g_historyFaultsList.cnt;
            }
            else
            {
                g_historyFaultsList.curIdx --;
            }
        }
    }
}

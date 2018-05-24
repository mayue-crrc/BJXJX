#ifndef RECEIVEDATA_H
#define RECEIVEDATA_H

#define bit0 0x0001    //0000 0000 0000 0001
#define bit1 0x0002    //0000 0000 0000 0010
#define bit2 0x0004    //0000 0000 0000 0100
#define bit3 0x0008    //0000 0000 0000 1000
#define bit4 0x0010    //0000 0000 0001 0000
#define bit5 0x0020    //0000 0000 0010 0000
#define bit6 0x0040    //0000 0000 0100 0000
#define bit7 0x0080    //0000 0000 1000 0000
#define bit8 0x0100    //0000 0001 0000 0000
#define bit9 0x0200    //0000 0010 0000 0000
#define bitA 0x0400    //0000 0100 0000 0000
#define bitB 0x0800    //0000 1000 0000 0000
#define bitC 0x1000    //0001 0000 0000 0000
#define bitD 0x2000    //0010 0000 0000 0000
#define bitE 0x4000    //0100 0000 0000 0000
#define bitF 0x8000    //1000 0000 0000 0000

#define Nbit0 0xfe
#define Nbit1 0xfd
#define Nbit2 0xfb
#define Nbit3 0xf7
#define Nbit4 0xef
#define Nbit5 0xdf
#define Nbit6 0xbf
#define Nbit7 0x7f


#define TRACKBRAKE_MC1_RIOM_BOOL                       receiveData[0] & bit5

#define BATTERYCONTACTOR_MC1_RIOM_BOOL                 receiveData[1] & bit1
#define TTRACKBRAKE_MC1_RIOM_BOOL                      receiveData[1] & bit4

#define SPEEDSIGNAL_MC1_RIOM_WORD                      receiveData[4] + receiveData[5]*256
//2014-5-20 carcode sync
#define CARCODE_MAIN_WORD                              receiveData[398] + receiveData[399]*256
#define CARCODE_SYNC_MAIN_BOOL                              receiveData[383] & bit1
#define CARCODE_SLAVE_WORD                              receiveData[265]+receiveData[266]*256

    #define LOADSENSOR1_MC1_RIOM_WORD                      receiveData[10]

    #define LOADSENSOR2_MC1_RIOM_WORD                      receiveData[11]

    #define PRESSSENSOR_MC1_RIOM_WORD                      receiveData[9]

#define SGNLIFESIGNAL_MC1_RIOM_BYTE                    receiveData[24]
    #define SGNVERSION_MC1_RIOM_BYTE                       receiveData[17]
#define DI1LIFESIGNAL_MC1_RIOM_BYTE                    receiveData[26]
    #define DI1VERSION_MC1_RIOM_BYTE                       receiveData[19]
#define DI2LIFESIGNAL_MC1_RIOM_BYTE                    receiveData[28]
    #define DI2VERSION_MC1_RIOM_BYTE                       receiveData[19]
#define AXLIFESIGNAL_MC1_RIOM_BYTE                     receiveData[30]
    #define AXVERSION_MC1_RIOM_BYTE                        receiveData[21]
#define DO1LIFESIGNAL_MC1_RIOM_BYTE                    receiveData[32]
    #define DO1VERSION_MC1_RIOM_BYTE                       receiveData[20]
#define DO2LIFESIGNAL_MC1_RIOM_BYTE                    receiveData[34]
    #define DO2VERSION_MC1_RIOM_BYTE                       receiveData[20]
    #define VERSION_MC1_RIOM_BYTE                          receiveData[18]

    #define ADJUSTTIME_DAY_BYTE                            receiveData[372]
    #define ADJUSTTIME_HOUR_BYTE                           receiveData[373]

#define TRACKBRAKE_MC2_RIOM_BOOL                       receiveData[40] & bit5

#define BATTERYCONTACTOR_MC2_RIOM_BOOL                 receiveData[41] & bit1

#define SPEEDSIGNAL_MC2_RIOM_WORD                      receiveData[44] + receiveData[45]*256 

    #define ADJUSTTIME_MINUTE_BYTE                         receiveData[374]
    #define ADJUSTTIME_SECOND_BYTE                         receiveData[375]

    #define LOADSENSOR1_MC2_RIOM_WORD                      receiveData[35]

    #define LOADSENSOR2_MC2_RIOM_WORD                      receiveData[34]

    #define PRESSSENSOR_MC2_RIOM_WORD                      receiveData[33]

#define SGNLIFESIGNAL_MC2_RIOM_BYTE                    receiveData[64]
    #define SGNVERSION_MC2_RIOM_BYTE                       receiveData[41]
#define DI1LIFESIGNAL_MC2_RIOM_BYTE                    receiveData[66]
    #define DI1VERSION_MC2_RIOM_BYTE                       receiveData[43]
#define DI2LIFESIGNAL_MC2_RIOM_BYTE                    receiveData[68]
    #define DI2VERSION_MC2_RIOM_BYTE                       receiveData[43]
#define AXLIFESIGNAL_MC2_RIOM_BYTE                     receiveData[70]
    #define AXVERSION_MC2_RIOM_BYTE                        receiveData[45]
#define DO1LIFESIGNAL_MC2_RIOM_BYTE                    receiveData[72]
    #define DO1VERSION_MC2_RIOM_BYTE                       receiveData[44]
#define DO2LIFESIGNAL_MC2_RIOM_BYTE                    receiveData[74]
    #define DO2VERSION_MC2_RIOM_BYTE                       receiveData[44]

    #define VERSION_MC2_RIOM_BYTE                          receiveData[42]

#define VERSIONLOW_PIS_BYTE                            receiveData[78]
#define VERSIONHIGH_PIS_BYTE                           receiveData[79]

//TCU1 Modul1
#define TRACTION_MC1_TCU_MODULE1_WORD                  receiveData[80] + receiveData[81]*256
#define MOTORCURRENT_MC1_TCU_MODULE1_WORD              receiveData[82] + receiveData[83]*256
#define OUTPUTVOLTAGE_MC1_TCU_MODULE1_WORD             receiveData[84] + receiveData[85]*256

#define SAFEBREAK_MC1_TCU_MODULE1_BOOL                  receiveData[86] & bit0
#define TRACTIONPERMIT_MC1_TCU_MODULE1_BOOL             receiveData[86] & bit1
#define BRAKERELEASE_MC1_TCU_MODULE1_BOOL               receiveData[86] & bit2
#define SUPERCAPCHARGE_MC1_TCU_MODULE1_BOOL             receiveData[86] & bit3
#define SUPERCAPPOWERON_MC1_TCU_MODULE1_BOOL            receiveData[86] & bit4
#define SUPERCAPPOWERRELEASE_MC1_TCU_MODULE1_BOOL       receiveData[86] & bit5
#define REQUESTBRAKERELEASE_MC1_TCU_MODULE1_BOOL        receiveData[86] & bit6
#define FORCEDBRAKEOUTPUT_MC1_TCU_MODULE1_BOOL          receiveData[86] & bit7

#define CHARGECONTECTACT_MC1_TCU_MODULE1_BOOL           receiveData[87] & bit0
#define MAINCONTECTACT_MC1_TCU_MODULE1_BOOL             receiveData[87] & bit1
#define INVERTERACT_MC1_TCU_MODULE1_BOOL                receiveData[87] & bit2
#define INVERTEENABLE_MC1_TCU_MODULE1_BOOL              receiveData[87] & bit3
#define UNCHARGEREADY_MC1_TCU_MODULE1_BOOL              receiveData[87] & bit4
#define SANDDING_MC1_TCU_MODULE1_BOOL                   receiveData[87] & bit5
#define HARDBUSOVERVOLTAGE_MC1_TCU_MODULE1_BOOL         receiveData[87] & bit6
#define HARDINPUTOVERCURRENT_MC1_TCU_MODULE1_BOOL       receiveData[87] & bit7

#define MOTORSPEED_MC1_TCU_MODULE1_WORD                receiveData[88] + receiveData[89]*256
#define INPUTVOLTAGE_MC1_TCU_MODULE1_WORD              receiveData[90] + receiveData[91]*256

#define VERSIONLOW_MODULE1_MC1_TCU_BYTE                receiveData[92]
#define VERSIONHIGH_MODULE1_MC1_TCU_BYTE               receiveData[93]

#define VOLTAGEOVERVOLTAGE_MC1_TCU_MODULE1_BOOL        receiveData[94] & bit0
#define CHARGEFAULT_MC1_TCU_MODULE1_BOOL               receiveData[94] & bit1
#define BRAKEUNRELEASE_MC1_TCU_MODULE1_BOOL            receiveData[94] & bit2
#define CENTRIFUGALFANFAULT_MC1_TCU_MODULE1_BOOL       receiveData[94] & bit3
#define INSTRUCTIONERROR_MC1_TCU_MODULE1_BOOL          receiveData[94] & bit4
#define INPUTOVERCURRENT_MC1_TCU_MODULE1_BOOL          receiveData[94] & bit5
#define OVERSPEED_MC1_TCU_MODULE1_BOOL                 receiveData[94] & bit6
#define CHOPPINGTOOLONG_MC1_TCU_MODULE1_BOOL           receiveData[94] & bit7

#define FUSEFAULT_MC1_TCU_MODULE1_BOOL                 receiveData[95] & bit0
#define BUSOVERVOLTAGE_MC1_TCU_MODULE1_BOOL            receiveData[95] & bit1
#define BUSUNDERVOLTAGE_MC1_TCU_MODULE1_BOOL           receiveData[95] & bit2
#define OVERCURRENT_MC1_TCU_MODULE1_BOOL               receiveData[95] & bit3
#define CHOPPERDRIVERFAULT_MC1_TCU_MODULE1_BOOL        receiveData[95] & bit4
#define INVERTERDRIVERFAULT_MC1_TCU_MODULE1_BOOL       receiveData[95] & bit5
#define HEATSINKOVERTEMP_MC1_TCU_MODULE1_BOOL          receiveData[95] & bit6
#define REACTOROVERTEMP_MC1_TCU_MODULE1_BOOL           receiveData[95] & bit7

#define BUSOVERVOLTAGEFLAG_MC1_TCU_MODULE1_BOOL        receiveData[96] & bit0
#define INPUTOVERVOLTAGEFLAG_MC1_TCU_MODULE1_BOOL      receiveData[96] & bit1
#define INPUTOVERCURRENTFLAG_MC1_TCU_MODULE1_BOOL      receiveData[96] & bit2
#define ZEROLOCKFLAGE_MC1_TCU_MODULE1_BOOL             receiveData[96] & bit3

#define OUTPUTFREQUENCY_MC1_TCU_MODULE1_BYTE           receiveData[98]
#define LIFESIGNAL_MC1_TCU_MODULE1_BYTE                receiveData[99]

#define WARNING_MC1_TCU_MODULE1_BOOL                   receiveData[100] & bit0
#define FAULT_MC1_TCU_MODULE1_BOOL                     receiveData[100] & bit1
#define TRACTIONWORK_MC1_TCU_MODULE1_BOOL              receiveData[100] & bit2
#define BRAKEPIPEWORK_MC1_TCU_MODULE1_BOOL             receiveData[100] & bit3
#define MAINCONTACTCLOSE_MC1_TCU_MODULE1_BOOL          receiveData[100] & bit4
#define NONSLIP_MC1_TCU_MODULE1_BOOL                   receiveData[100] & bit5
#define ANTISLIP_MC1_TCU_MODULE1_BOOL                  receiveData[100] & bit6
#define FANWORKOK_MC1_TCU_MODULE1_BOOL                 receiveData[100] & bit7

#define NETCURRENT_MC1_TCU_MODULE1_WORD                receiveData[102] + receiveData[103]*256

//TCU1 Modul2
#define TRACTION_MC1_TCU_MODULE2_WORD                  receiveData[104] + receiveData[105]*256
#define MOTORCURRENT_MC1_TCU_MODULE2_WORD              receiveData[106] + receiveData[107]*256
#define OUTPUTVOLTAGE_MC1_TCU_MODULE2_WORD             receiveData[108] + receiveData[109]*256

#define SAFEBREAK_MC1_TCU_MODULE2_BOOL                  receiveData[110] & bit0
#define TRACTIONPERMIT_MC1_TCU_MODULE2_BOOL             receiveData[110] & bit1
#define BRAKERELEASE_MC1_TCU_MODULE2_BOOL               receiveData[110] & bit2
#define SUPERCAPCHARGE_MC1_TCU_MODULE2_BOOL             receiveData[110] & bit3
#define SUPERCAPPOWERON_MC1_TCU_MODULE2_BOOL            receiveData[110] & bit4
#define SUPERCAPPOWERRELEASE_MC1_TCU_MODULE2_BOOL       receiveData[110] & bit5
#define REQUESTBRAKERELEASE_MC1_TCU_MODULE2_BOOL        receiveData[110] & bit6
#define FORCEDBRAKEOUTPUT_MC1_TCU_MODULE2_BOOL          receiveData[110] & bit7

#define CHARGECONTECTACT_MC1_TCU_MODULE2_BOOL           receiveData[111] & bit0
#define MAINCONTECTACT_MC1_TCU_MODULE2_BOOL             receiveData[111] & bit1
#define INVERTERACT_MC1_TCU_MODULE2_BOOL                receiveData[111] & bit2
#define INVERTEENABLE_MC1_TCU_MODULE2_BOOL              receiveData[111] & bit3
#define UNCHARGEREADY_MC1_TCU_MODULE2_BOOL              receiveData[111] & bit4
#define SANDDING_MC1_TCU_MODULE2_BOOL                   receiveData[111] & bit5
#define HARDBUSOVERVOLTAGE_MC1_TCU_MODULE2_BOOL         receiveData[111] & bit6
#define HARDINPUTOVERCURRENT_MC1_TCU_MODULE2_BOOL       receiveData[111] & bit7

#define MOTORSPEED_MC1_TCU_MODULE2_WORD                receiveData[112] + receiveData[113]*256
#define INPUTVOLTAGE_MC1_TCU_MODULE2_WORD              receiveData[114] + receiveData[115]*256

#define VERSIONLOW_MODULE2_MC1_TCU_BYTE                receiveData[116]
#define VERSIONHIGH_MODULE2_MC1_TCU_BYTE               receiveData[117]

#define VOLTAGEOVERVOLTAGE_MC1_TCU_MODULE2_BOOL        receiveData[118] & bit0
#define CHARGEFAULT_MC1_TCU_MODULE2_BOOL               receiveData[118] & bit1
#define BRAKEUNRELEASE_MC1_TCU_MODULE2_BOOL            receiveData[118] & bit2
#define CENTRIFUGALFANFAULT_MC1_TCU_MODULE2_BOOL       receiveData[118] & bit3
#define INSTRUCTIONERROR_MC1_TCU_MODULE2_BOOL          receiveData[118] & bit4
#define INPUTOVERCURRENT_MC1_TCU_MODULE2_BOOL          receiveData[118] & bit5
#define OVERSPEED_MC1_TCU_MODULE2_BOOL                 receiveData[118] & bit6
#define CHOPPINGTOOLONG_MC1_TCU_MODULE2_BOOL           receiveData[118] & bit7

#define FUSEFAULT_MC1_TCU_MODULE2_BOOL                 receiveData[119] & bit0
#define BUSOVERVOLTAGE_MC1_TCU_MODULE2_BOOL            receiveData[119] & bit1
#define BUSUNDERVOLTAGE_MC1_TCU_MODULE2_BOOL           receiveData[119] & bit2
#define OVERCURRENT_MC1_TCU_MODULE2_BOOL               receiveData[119] & bit3
#define CHOPPERDRIVERFAULT_MC1_TCU_MODULE2_BOOL        receiveData[119] & bit4
#define INVERTERDRIVERFAULT_MC1_TCU_MODULE2_BOOL       receiveData[119] & bit5
#define HEATSINKOVERTEMP_MC1_TCU_MODULE2_BOOL          receiveData[119] & bit6
#define REACTOROVERTEMP_MC1_TCU_MODULE2_BOOL           receiveData[119] & bit7

#define BUSOVERVOLTAGEFLAG_MC1_TCU_MODULE2_BOOL        receiveData[120] & bit0
#define INPUTOVERVOLTAGEFLAG_MC1_TCU_MODULE2_BOOL      receiveData[120] & bit1
#define INPUTOVERCURRENTFLAG_MC1_TCU_MODULE2_BOOL      receiveData[120] & bit2
#define ZEROLOCKFLAGE_MC1_TCU_MODULE2_BOOL             receiveData[120] & bit3

#define OUTPUTFREQUENCY_MC1_TCU_MODULE2_BYTE           receiveData[122]
#define LIFESIGNAL_MC1_TCU_MODULE2_BYTE                receiveData[123]

#define WARNING_MC1_TCU_MODULE2_BOOL                   receiveData[124] & bit0
#define FAULT_MC1_TCU_MODULE2_BOOL                     receiveData[124] & bit1
#define TRACTIONWORK_MC1_TCU_MODULE2_BOOL              receiveData[124] & bit2
#define BRAKEPIPEWORK_MC1_TCU_MODULE2_BOOL             receiveData[124] & bit3
#define MAINCONTACTCLOSE_MC1_TCU_MODULE2_BOOL          receiveData[124] & bit4
#define NONSLIP_MC1_TCU_MODULE2_BOOL                   receiveData[124] & bit5
#define ANTISLIP_MC1_TCU_MODULE2_BOOL                  receiveData[124] & bit6
#define FANWORKOK_MC1_TCU_MODULE2_BOOL                 receiveData[124] & bit7

#define NETCURRENT_MC1_TCU_MODULE2_WORD                receiveData[126] + receiveData[127]*256

//TCU2 Modul1
#define TRACTION_MC2_TCU_MODULE1_WORD                  receiveData[128] + receiveData[129]*256
#define MOTORCURRENT_MC2_TCU_MODULE1_WORD              receiveData[130] + receiveData[131]*256
#define OUTPUTVOLTAGE_MC2_TCU_MODULE1_WORD             receiveData[132] + receiveData[133]*256

#define SAFEBREAK_MC2_TCU_MODULE1_BOOL                  receiveData[134] & bit0
#define TRACTIONPERMIT_MC2_TCU_MODULE1_BOOL             receiveData[134] & bit1
#define BRAKERELEASE_MC2_TCU_MODULE1_BOOL               receiveData[134] & bit2
#define SUPERCAPCHARGE_MC2_TCU_MODULE1_BOOL             receiveData[134] & bit3
#define SUPERCAPPOWERON_MC2_TCU_MODULE1_BOOL            receiveData[134] & bit4
#define SUPERCAPPOWERRELEASE_MC2_TCU_MODULE1_BOOL       receiveData[134] & bit5
#define REQUESTBRAKERELEASE_MC2_TCU_MODULE1_BOOL        receiveData[134] & bit6
#define FORCEDBRAKEOUTPUT_MC2_TCU_MODULE1_BOOL          receiveData[134] & bit7

#define CHARGECONTECTACT_MC2_TCU_MODULE1_BOOL           receiveData[135] & bit0
#define MAINCONTECTACT_MC2_TCU_MODULE1_BOOL             receiveData[135] & bit1
#define INVERTERACT_MC2_TCU_MODULE1_BOOL                receiveData[135] & bit2
#define INVERTEENABLE_MC2_TCU_MODULE1_BOOL              receiveData[135] & bit3
#define UNCHARGEREADY_MC2_TCU_MODULE1_BOOL              receiveData[135] & bit4
#define SANDDING_MC2_TCU_MODULE1_BOOL                   receiveData[135] & bit5
#define HARDBUSOVERVOLTAGE_MC2_TCU_MODULE1_BOOL         receiveData[135] & bit6
#define HARDINPUTOVERCURRENT_MC2_TCU_MODULE1_BOOL       receiveData[135] & bit7

#define MOTORSPEED_MC2_TCU_MODULE1_WORD                receiveData[136] + receiveData[137]*256
#define INPUTVOLTAGE_MC2_TCU_MODULE1_WORD              receiveData[138] + receiveData[139]*256

#define VERSIONLOW_MODULE1_MC2_TCU_BYTE                receiveData[140]
#define VERSIONHIGH_MODULE1_MC2_TCU_BYTE               receiveData[141]

#define VOLTAGEOVERVOLTAGE_MC2_TCU_MODULE1_BOOL        receiveData[142] & bit0
#define CHARGEFAULT_MC2_TCU_MODULE1_BOOL               receiveData[142] & bit1
#define BRAKEUNRELEASE_MC2_TCU_MODULE1_BOOL            receiveData[142] & bit2
#define CENTRIFUGALFANFAULT_MC2_TCU_MODULE1_BOOL       receiveData[142] & bit3
#define INSTRUCTIONERROR_MC2_TCU_MODULE1_BOOL          receiveData[142] & bit4
#define INPUTOVERCURRENT_MC2_TCU_MODULE1_BOOL          receiveData[142] & bit5
#define OVERSPEED_MC2_TCU_MODULE1_BOOL                 receiveData[142] & bit6
#define CHOPPINGTOOLONG_MC2_TCU_MODULE1_BOOL           receiveData[142] & bit7

#define FUSEFAULT_MC2_TCU_MODULE1_BOOL                 receiveData[143] & bit0
#define BUSOVERVOLTAGE_MC2_TCU_MODULE1_BOOL            receiveData[143] & bit1
#define BUSUNDERVOLTAGE_MC2_TCU_MODULE1_BOOL           receiveData[143] & bit2
#define OVERCURRENT_MC2_TCU_MODULE1_BOOL               receiveData[143] & bit3
#define CHOPPERDRIVERFAULT_MC2_TCU_MODULE1_BOOL        receiveData[143] & bit4
#define INVERTERDRIVERFAULT_MC2_TCU_MODULE1_BOOL       receiveData[143] & bit5
#define HEATSINKOVERTEMP_MC2_TCU_MODULE1_BOOL          receiveData[143] & bit6
#define REACTOROVERTEMP_MC2_TCU_MODULE1_BOOL           receiveData[143] & bit7

#define BUSOVERVOLTAGEFLAG_MC2_TCU_MODULE1_BOOL        receiveData[144] & bit0
#define INPUTOVERVOLTAGEFLAG_MC2_TCU_MODULE1_BOOL      receiveData[144] & bit1
#define INPUTOVERCURRENTFLAG_MC2_TCU_MODULE1_BOOL      receiveData[144] & bit2
#define ZEROLOCKFLAGE_MC2_TCU_MODULE1_BOOL             receiveData[144] & bit3

#define OUTPUTFREQUENCY_MC2_TCU_MODULE1_BYTE           receiveData[146]
#define LIFESIGNAL_MC2_TCU_MODULE1_BYTE                receiveData[147]

#define WARNING_MC2_TCU_MODULE1_BOOL                   receiveData[148] & bit0
#define FAULT_MC2_TCU_MODULE1_BOOL                     receiveData[148] & bit1
#define TRACTIONWORK_MC2_TCU_MODULE1_BOOL              receiveData[148] & bit2
#define BRAKEPIPEWORK_MC2_TCU_MODULE1_BOOL             receiveData[148] & bit3
#define MAINCONTACTCLOSE_MC2_TCU_MODULE1_BOOL          receiveData[148] & bit4
#define NONSLIP_MC2_TCU_MODULE1_BOOL                   receiveData[148] & bit5
#define ANTISLIP_MC2_TCU_MODULE1_BOOL                  receiveData[148] & bit6
#define FANWORKOK_MC2_TCU_MODULE1_BOOL                 receiveData[148] & bit7

#define NETCURRENT_MC2_TCU_MODULE1_WORD                receiveData[150] + receiveData[151]*256

//TCU2 Modul2
#define TRACTION_MC2_TCU_MODULE2_WORD                  receiveData[152] + receiveData[153]*256
#define MOTORCURRENT_MC2_TCU_MODULE2_WORD              receiveData[154] + receiveData[155]*256
#define OUTPUTVOLTAGE_MC2_TCU_MODULE2_WORD             receiveData[156] + receiveData[157]*256

#define SAFEBREAK_MC2_TCU_MODULE2_BOOL                  receiveData[158] & bit0
#define TRACTIONPERMIT_MC2_TCU_MODULE2_BOOL             receiveData[158] & bit1
#define BRAKERELEASE_MC2_TCU_MODULE2_BOOL               receiveData[158] & bit2
#define SUPERCAPCHARGE_MC2_TCU_MODULE2_BOOL             receiveData[158] & bit3
#define SUPERCAPPOWERON_MC2_TCU_MODULE2_BOOL            receiveData[158] & bit4
#define SUPERCAPPOWERRELEASE_MC2_TCU_MODULE2_BOOL       receiveData[158] & bit5
#define REQUESTBRAKERELEASE_MC2_TCU_MODULE2_BOOL        receiveData[158] & bit6
#define FORCEDBRAKEOUTPUT_MC2_TCU_MODULE2_BOOL          receiveData[158] & bit7

#define CHARGECONTECTACT_MC2_TCU_MODULE2_BOOL           receiveData[159] & bit0
#define MAINCONTECTACT_MC2_TCU_MODULE2_BOOL             receiveData[159] & bit1
#define INVERTERACT_MC2_TCU_MODULE2_BOOL                receiveData[159] & bit2
#define INVERTEENABLE_MC2_TCU_MODULE2_BOOL              receiveData[159] & bit3
#define UNCHARGEREADY_MC2_TCU_MODULE2_BOOL              receiveData[159] & bit4
#define SANDDING_MC2_TCU_MODULE2_BOOL                   receiveData[159] & bit5
#define HARDBUSOVERVOLTAGE_MC2_TCU_MODULE2_BOOL         receiveData[159] & bit6
#define HARDINPUTOVERCURRENT_MC2_TCU_MODULE2_BOOL       receiveData[159] & bit7

#define MOTORSPEED_MC2_TCU_MODULE2_WORD                receiveData[160] + receiveData[161]*256
#define INPUTVOLTAGE_MC2_TCU_MODULE2_WORD              receiveData[162] + receiveData[163]*256

#define VERSIONLOW_MODULE2_MC2_TCU_BYTE                receiveData[164]
#define VERSIONHIGH_MODULE2_MC2_TCU_BYTE               receiveData[165]

#define VOLTAGEOVERVOLTAGE_MC2_TCU_MODULE2_BOOL        receiveData[166] & bit0
#define CHARGEFAULT_MC2_TCU_MODULE2_BOOL               receiveData[166] & bit1
#define BRAKEUNRELEASE_MC2_TCU_MODULE2_BOOL            receiveData[166] & bit2
#define CENTRIFUGALFANFAULT_MC2_TCU_MODULE2_BOOL       receiveData[166] & bit3
#define INSTRUCTIONERROR_MC2_TCU_MODULE2_BOOL          receiveData[166] & bit4
#define INPUTOVERCURRENT_MC2_TCU_MODULE2_BOOL          receiveData[166] & bit5
#define OVERSPEED_MC2_TCU_MODULE2_BOOL                 receiveData[166] & bit6
#define CHOPPINGTOOLONG_MC2_TCU_MODULE2_BOOL           receiveData[166] & bit7

#define FUSEFAULT_MC2_TCU_MODULE2_BOOL                 receiveData[167] & bit0
#define BUSOVERVOLTAGE_MC2_TCU_MODULE2_BOOL            receiveData[167] & bit1
#define BUSUNDERVOLTAGE_MC2_TCU_MODULE2_BOOL           receiveData[167] & bit2
#define OVERCURRENT_MC2_TCU_MODULE2_BOOL               receiveData[167] & bit3
#define CHOPPERDRIVERFAULT_MC2_TCU_MODULE2_BOOL        receiveData[167] & bit4
#define INVERTERDRIVERFAULT_MC2_TCU_MODULE2_BOOL       receiveData[167] & bit5
#define HEATSINKOVERTEMP_MC2_TCU_MODULE2_BOOL          receiveData[167] & bit6
#define REACTOROVERTEMP_MC2_TCU_MODULE2_BOOL           receiveData[167] & bit7

#define BUSOVERVOLTAGEFLAG_MC2_TCU_MODULE2_BOOL        receiveData[168] & bit0
#define INPUTOVERVOLTAGEFLAG_MC2_TCU_MODULE2_BOOL      receiveData[168] & bit1
#define INPUTOVERCURRENTFLAG_MC2_TCU_MODULE2_BOOL      receiveData[168] & bit2
#define ZEROLOCKFLAGE_MC2_TCU_MODULE2_BOOL             receiveData[168] & bit3

#define OUTPUTFREQUENCY_MC2_TCU_MODULE2_BYTE           receiveData[170]
#define LIFESIGNAL_MC2_TCU_MODULE2_BYTE                receiveData[171]

#define WARNING_MC2_TCU_MODULE2_BOOL                   receiveData[172] & bit0
#define FAULT_MC2_TCU_MODULE2_BOOL                     receiveData[172] & bit1
#define TRACTIONWORK_MC2_TCU_MODULE2_BOOL              receiveData[172] & bit2
#define BRAKEPIPEWORK_MC2_TCU_MODULE2_BOOL             receiveData[172] & bit3
#define MAINCONTACTCLOSE_MC2_TCU_MODULE2_BOOL          receiveData[172] & bit4
#define NONSLIP_MC2_TCU_MODULE2_BOOL                   receiveData[172] & bit5
#define ANTISLIP_MC2_TCU_MODULE2_BOOL                  receiveData[172] & bit6
#define FANWORKOK_MC2_TCU_MODULE2_BOOL                 receiveData[172] & bit7

#define NETCURRENT_MC2_TCU_MODULE2_WORD                receiveData[174] + receiveData[175]*256

#define AUXOUTPUTVOLTAGE_MC1_ACU_WORD                  receiveData[176] + receiveData[177]*256
#define AUXOUTPUTCURRENT_MC1_ACU_WORD                  receiveData[178] + receiveData[179]*256

#define AUXINVERTERHARDFAULTCODE_MC1_ACU_WORD          receiveData[182] + receiveData[183]*256

#define VERSIONLOW_MC1_ACU_BYTE                        receiveData[184]
#define VERSIONHIGH_MC1_ACU_BYTE                       receiveData[185]

#define VERSIONLOW_MC1_DCDC_BYTE                       receiveData[186]
#define VERSIONHIGH_MC1_DCDC_BYTE                      receiveData[187]

#define AUXINVERTERSOFTFAULTCODE_MC1_ACU_WORD          receiveData[188] + receiveData[189]*256

#define AUXINVERTERSTATEOK_MC1_ACU_BOOL                receiveData[190] & bit0
#define AUXINVERTERWORKING_MC1_ACU_BOOL                receiveData[190] & bit1
#define AUXINVERTERWARNING_MC1_ACU_BOOL                receiveData[190] & bit2
#define AUXINVERTERSTOP_MC1_ACU_BOOL                   receiveData[190] & bit3
#define GLMODELFAULT_MC1_ACU_BOOL                      receiveData[190] & bit6
#define SRQOVERTEMP_MC1_ACU_BOOL                       receiveData[190] & bit7

#define AUXINVERTERFAULT_MC1_ACU_BOOL                  receiveData[191] & bit0
#define OUTPUTCONTACTFAULT_MC1_ACU_BOOL                receiveData[191] & bit1
#define OUTPUTUNDERVOLTAGE_MC1_ACU_BOOL                receiveData[191] & bit2
#define OUTPUTVOLTAGERMSOVERTAGE_MC1_ACU_BOOL          receiveData[191] & bit4
#define OUTPUTVOLTAGEPEAKOVERTAGE_MC1_ACU_BOOL         receiveData[191] & bit5
#define OUTPUTCURRENTRMSOVERTAGE_MC1_ACU_BOOL          receiveData[191] & bit6
#define OUTPUTCURRENTPEAKOVERTAGE_MC1_ACU_BOOL         receiveData[191] & bit7

#define CHARGEROUTPUTVOLTAGE_MC1_ACU_WORD              receiveData[192] + receiveData[193]*256
#define CHARGERLOADCURRENT_MC1_ACU_WORD                receiveData[194] + receiveData[195]*256
#define CHARGERCHARGINGCURRENT_MC1_ACU_WORD            receiveData[196] + receiveData[197]*256
#define BATTERYTEMP_MC1_ACU_WORD                       receiveData[198] + receiveData[199]*256
#define VERSIONLOW_MC1_ACU_BCC_BYTE                    receiveData[200]
#define VERSIONHIGH_MC1_ACU_BCC_BYTE                   receiveData[201]
#define CHARGERFAULTCODE1_MC1_ACU_WORD                 receiveData[202] + receiveData[203]*256
#define CHARGERFAULTCODE2_MC1_ACU_WORD                 receiveData[204] + receiveData[205]*256

#define CHARGERSTATEOK_MC1_ACU_BCC_BOOL                receiveData[206] & bit0
#define CHARGERWORKING_MC1_ACU_BCC_BOOL                receiveData[206] & bit1
#define CHARGERWARNING_MC1_ACU_BCC_BOOL                receiveData[206] & bit2
#define CHARGERSTOP_MC1_ACU_BCC_BOOL                   receiveData[206] & bit3
#define BATTERYOVERTEMP_MC1_ACU_BCC_BOOL               receiveData[206] & bit4
#define QYWDBC_MC1_ACU_BCC_BOOL                        receiveData[206] & bit5
#define SRQOVERTEMP_MC1_ACU_BCC_BOOL                   receiveData[206] & bit6
#define KZDYFAULT_MC1_ACU_BCC_BOOL                     receiveData[206] & bit7

#define OUTPUTVOLTAGEOVER_MC1_ACU_BCC_BOOL             receiveData[207] & bit0
#define CHARGINGCURRENTOVER_MC1_ACU_BCC_BOOL           receiveData[207] & bit2
#define LOADCURRENTOVER_MC1_ACU_BCC_BOOL               receiveData[207] & bit4
#define BATTERYTEMPSENSORFAULT_MC1_ACU_BCC_BOOL        receiveData[207] & bit7

#define AUXOUTPUTVOLTAGE_MC2_ACU_WORD                  receiveData[208] + receiveData[209]*256
#define AUXOUTPUTCURRENT_MC2_ACU_WORD                  receiveData[210] + receiveData[211]*256

#define AUXINVERTERHARDFAULTCODE_MC2_ACU_WORD          receiveData[214] + receiveData[215]*256

#define VERSIONLOW_MC2_ACU_BYTE                        receiveData[216]
#define VERSIONHIGH_MC2_ACU_BYTE                       receiveData[217]

#define VERSIONLOW_MC2_DCDC_BYTE                       receiveData[218]
#define VERSIONHIGH_MC2_DCDC_BYTE                      receiveData[219]

#define AUXINVERTERSOFTFAULTCODE_MC2_ACU_WORD          receiveData[220] + receiveData[221]*256

#define AUXINVERTERSTATEOK_MC2_ACU_BOOL                receiveData[222] & bit0
#define AUXINVERTERWORKING_MC2_ACU_BOOL                receiveData[222] & bit1
#define AUXINVERTERWARNING_MC2_ACU_BOOL                receiveData[222] & bit2
#define AUXINVERTERSTOP_MC2_ACU_BOOL                   receiveData[222] & bit3
#define GLMODELFAULT_MC2_ACU_BOOL                      receiveData[222] & bit6
#define SRQOVERTEMP_MC2_ACU_BOOL                       receiveData[222] & bit7

#define AUXINVERTERFAULT_MC2_ACU_BOOL                  receiveData[223] & bit0
#define OUTPUTCONTACTFAULT_MC2_ACU_BOOL                receiveData[223] & bit1
#define OUTPUTUNDERVOLTAGE_MC2_ACU_BOOL                receiveData[223] & bit2
#define OUTPUTVOLTAGERMSOVERTAGE_MC2_ACU_BOOL          receiveData[223] & bit4
#define OUTPUTVOLTAGEPEAKOVERTAGE_MC2_ACU_BOOL         receiveData[223] & bit5
#define OUTPUTCURRENTRMSOVERTAGE_MC2_ACU_BOOL          receiveData[223] & bit6
#define OUTPUTCURRENTPEAKOVERTAGE_MC2_ACU_BOOL         receiveData[223] & bit7

#define CHARGEROUTPUTVOLTAGE_MC2_ACU_WORD              receiveData[224] + receiveData[225]*256
#define CHARGERLOADCURRENT_MC2_ACU_WORD                receiveData[226] + receiveData[227]*256
#define CHARGERCHARGINGCURRENT_MC2_ACU_WORD            receiveData[228] + receiveData[229]*256
#define BATTERYTEMP_MC2_ACU_WORD                       receiveData[230] + receiveData[231]*256
#define VERSIONLOW_MC2_ACU_BCC_BYTE                    receiveData[232]
#define VERSIONHIGH_MC2_ACU_BCC_BYTE                   receiveData[233]
#define CHARGERFAULTCODE1_MC2_ACU_WORD                 receiveData[234] + receiveData[235]*256
#define CHARGERFAULTCODE2_MC2_ACU_WORD                 receiveData[236] + receiveData[237]*256

#define CHARGERSTATEOK_MC2_ACU_BCC_BOOL                receiveData[238] & bit0
#define CHARGERWORKING_MC2_ACU_BCC_BOOL                receiveData[238] & bit1
#define CHARGERWARNING_MC2_ACU_BCC_BOOL                receiveData[238] & bit2
#define CHARGERSTOP_MC2_ACU_BCC_BOOL                   receiveData[238] & bit3
#define BATTERYOVERTEMP_MC2_ACU_BCC_BOOL               receiveData[238] & bit4
#define QYWDBC_MC2_ACU_BCC_BOOL                        receiveData[238] & bit5
#define SRQOVERTEMP_MC2_ACU_BCC_BOOL                   receiveData[238] & bit6
#define KZDYFAULT_MC2_ACU_BCC_BOOL                     receiveData[238] & bit7

#define OUTPUTVOLTAGEOVER_MC2_ACU_BCC_BOOL             receiveData[239] & bit0
#define CHARGINGCURRENTOVER_MC2_ACU_BCC_BOOL           receiveData[239] & bit2
#define LOADCURRENTOVER_MC2_ACU_BCC_BOOL               receiveData[239] & bit4
#define BATTERYTEMPSENSORFAULT_MC2_ACU_BCC_BOOL        receiveData[239] & bit7

#define LOADTC_1_BCU_WORD                              receiveData[240] + receiveData[241]*256
#define LOADTC_2_BCU_WORD                              receiveData[242] + receiveData[243]*256

#define HW_EMGCBREAK_BCU_BOOL                          receiveData[244] & bit0
#define HW_SERVICEBRAKE_BCU_BOOL                       receiveData[244] & bit1
#define HW_SAFETYBRAKE_BCU_BOOL                        receiveData[244] & bit2
#define HW_DRIVING_BCU_BOOL                            receiveData[244] & bit3
#define BRAKERELEASED_CAN_BCU_BOOL                     receiveData[244] & bit4
#define BRAKEAPPLIED_CAN_BCU_BOOL                      receiveData[244] & bit5
#define HB_ON_CAN_BCU_BOOL                             receiveData[244] & bit6
#define WSP_TC_CAN_BCU_BOOL                            receiveData[244] & bit7

#define BSE_CAN_BCU_BOOL                               receiveData[245] & bit0
#define BSW_CAN_BCU_BOOL                               receiveData[245] & bit1

#define VERSION_LB_BCU_BYTE                            receiveData[246]
#define VERSION_HB_BCU_BYTE                            receiveData[247]

#define CHARGEWORKSTATE_MC1_DCDC_BOOL                  receiveData[256] & bit0
#define POWERSUPPLYWORKSTATE_MC1_DCDC_BOOL             receiveData[256] & bit1
#define UNCHARGEWORKSTATE_MC1_DCDC_BOOL                receiveData[256] & bit2
#define CHARGEFINISH_MC1_DCDC_BOOL                     receiveData[256] & bit3
#define POWERSUPPLYFINISH_MC1_DCDC_BOOL                receiveData[256] & bit4
#define UNCHARGEFINISH_MC1_DCDC_BOOL                   receiveData[256] & bit5
#define DCDCWARNING_MC1_DCDC_BOOL                      receiveData[256] & bit6
#define DCDCFAULT_MC1_DCDC_BOOL                        receiveData[256] & bit7

#define SUPERCAPNEEDRECHARGE_MC1_DCDC_BOOL             receiveData[257] & bit2
#define CHARGEKM1_MC1_DCDC_BOOL                        receiveData[257] & bit3
#define SUPPLYORUNCHARGEKM3_MC1_DCDC_BOOL              receiveData[257] & bit4
#define UNCHARGEKM4_MC1_DCDC_BOOL                      receiveData[257] & bit5


#define SUPERCAPVOLTAGE_MC1_DCDC_WORD                  receiveData[258] + receiveData[259]*256
#define SUPERCAPCURRENT_MC1_DCDC_WORD                  receiveData[260] + receiveData[261]*256
#define NETVOLTAGE_MC1_DCDC_WORD                       receiveData[262] + receiveData[263]*256
#define BUSVOLTAGE_MC1_DCDC_WORD                       receiveData[264] + receiveData[265]*256
#define NETSIDECURRENT_MC1_DCDC_WORD                   receiveData[266] + receiveData[267]*256

#define CHARGECONTACTFAULT_MC1_DCDC_BOOL               receiveData[268] & bit0
#define KM1FAULT_MC1_DCDC_BOOL                         receiveData[268] & bit1
#define BUSVOLTAGEOWNVOL_MC1_DCDC_BOOL                 receiveData[268] & bit2
#define BUSVOLTAGEOVERVOL_MC1_DCDC_BOOL                receiveData[268] & bit3
#define BUSVOLTAGEOVERVOL_HARD_MC1_DCDC_BOOL           receiveData[268] & bit4
#define NETVOLTAGEOVERVBOL_MC1_DCDC_BOOL               receiveData[268] & bit5
#define KM3FAULT_MC1_DCDC_BOOL                         receiveData[268] & bit6
#define DCDCOVERTEMP_MC1_DCDC_BOOL                     receiveData[268] & bit7

#define DRIVERBOARDFAULT_MC1_DCDC_BOOL                 receiveData[269] & bit0
#define SUPERCAP1MODULEOVERTEMP_MC1_DCDC_BOOL          receiveData[269] & bit1
#define SUPERCAP2MODULEOVERTEMP_MC1_DCDC_BOOL          receiveData[269] & bit2
#define SUPERCAP3MODULEOVERTEMP_MC1_DCDC_BOOL          receiveData[269] & bit3
#define SUPERCAP4MODULEOVERTEMP_MC1_DCDC_BOOL          receiveData[269] & bit4
#define NETSIDEFASTMELTFAULT_MC1_DCDC_BOOL             receiveData[269] & bit5
#define SUPERCAPFASTMELTFAULT_MC1_DCDC_BOOL            receiveData[269] & bit6
#define POWERSUPPLYOUTPUTVOLOVER_MC1_DCDC_BOOL         receiveData[269] & bit7

#define NETSIDECURRENTOVER_MC1_DCDC_BOOL               receiveData[270] & bit0
#define NETSIDECURRENTOVER_HARD_MC1_DCDC_BOOL          receiveData[270] & bit1
#define SUPERCAPCURRENTOVERCURRENT_MC1_DCDC_BOOL       receiveData[270] & bit2
#define BOOSTOUTPUTVOLOVERHARD_MC1_DCDC_BOOL           receiveData[270] & bit3
#define SUPERCAPTOTALOVOLOVER_MC1_DCDC_BOOL            receiveData[270] & bit4
#define SUPERCAPTOTALOVOLOVER_HARD_MC1_DCDC_BOOL       receiveData[270] & bit5
#define OUTPUTSHORTCIRCUITFAULT_MC1_DCDC_BOOL          receiveData[270] & bit7

#define CANCOMMFAULT_MC1_DCDC_BOOL                     receiveData[271] & bit0
#define SUPERCAPOVERCURRENT_HARD__MC1_DCDC_BOOL        receiveData[271] & bit1
#define SUPERCAP1MODULEOVERVOL_MC1_DCDC_BOOL           receiveData[271] & bit2
#define SUPERCAP2MODULEOVERVOL_MC1_DCDC_BOOL           receiveData[271] & bit3
#define SUPERCAP3MODULEOVERVOL_MC1_DCDC_BOOL           receiveData[271] & bit4
#define SUPERCAP4MODULEOVERVOL_MC1_DCDC_BOOL           receiveData[271] & bit5
#define UNDERVOLTAGEOF24_MC1_DCDC_BOOL                 receiveData[271] & bit6

#define SUPERCAP1OVERTEMP_MC1_DCDC_BOOL                receiveData[272] & bit0
#define SUPERCAP2OVERTEMP_MC1_DCDC_BOOL                receiveData[272] & bit1
#define SUPERCAP3OVERTEMP_MC1_DCDC_BOOL                receiveData[272] & bit2
#define SUPERCAP4OVERTEMP_MC1_DCDC_BOOL                receiveData[272] & bit3
#define SUPERCAP5OVERTEMP_MC1_DCDC_BOOL                receiveData[272] & bit4
#define SUPERCAP6OVERTEMP_MC1_DCDC_BOOL                receiveData[272] & bit5
#define SUPERCAP7OVERTEMP_MC1_DCDC_BOOL                receiveData[272] & bit6
#define SUPERCAP8OVERTEMP_MC1_DCDC_BOOL                receiveData[272] & bit7

#define SUPERCAP9OVERTEMP_MC1_DCDC_BOOL                receiveData[273] & bit0
#define SUPERCAP10OVERTEMP_MC1_DCDC_BOOL               receiveData[273] & bit1
#define SUPERCAP11OVERTEMP_MC1_DCDC_BOOL               receiveData[273] & bit2
#define SUPERCAP12OVERTEMP_MC1_DCDC_BOOL               receiveData[273] & bit3
#define SUPERCAP13OVERTEMP_MC1_DCDC_BOOL               receiveData[273] & bit4
#define SUPERCAP14OVERTEMP_MC1_DCDC_BOOL               receiveData[273] & bit5
#define SUPERCAP15OVERTEMP_MC1_DCDC_BOOL               receiveData[273] & bit6
#define SUPERCAP16OVERTEMP_MC1_DCDC_BOOL               receiveData[273] & bit7

#define SUPERCAP17OVERTEMP_MC1_DCDC_BOOL               receiveData[274] & bit0
#define SUPERCAP18OVERTEMP_MC1_DCDC_BOOL               receiveData[274] & bit1
#define SUPERCAP19OVERTEMP_MC1_DCDC_BOOL               receiveData[274] & bit2
#define SUPERCAP20OVERTEMP_MC1_DCDC_BOOL               receiveData[274] & bit3
#define SUPERCAP21OVERTEMP_MC1_DCDC_BOOL               receiveData[274] & bit4
#define SUPERCAP22OVERTEMP_MC1_DCDC_BOOL               receiveData[274] & bit5
#define SUPERCAP23OVERTEMP_MC1_DCDC_BOOL               receiveData[274] & bit6
#define SUPERCAP24OVERTEMP_MC1_DCDC_BOOL               receiveData[274] & bit7

#define CHARGEWORKSTATE_MC2_DCDC_BOOL                  receiveData[276] & bit0
#define POWERSUPPLYWORKSTATE_MC2_DCDC_BOOL             receiveData[276] & bit1
#define UNCHARGEWORKSTATE_MC2_DCDC_BOOL                receiveData[276] & bit2
#define CHARGEFINISH_MC2_DCDC_BOOL                     receiveData[276] & bit3
#define POWERSUPPLYFINISH_MC2_DCDC_BOOL                receiveData[276] & bit4
#define UNCHARGEFINISH_MC2_DCDC_BOOL                   receiveData[276] & bit5
#define DCDCWARNING_MC2_DCDC_BOOL                      receiveData[276] & bit6
#define DCDCFAULT_MC2_DCDC_BOOL                        receiveData[276] & bit7

#define SUPERCAPNEEDRECHARGE_MC2_DCDC_BOOL             receiveData[277] & bit2
#define CHARGEKM1_MC2_DCDC_BOOL                        receiveData[277] & bit3
#define SUPPLYORUNCHARGEKM3_MC2_DCDC_BOOL              receiveData[277] & bit4
#define UNCHARGEKM4_MC2_DCDC_BOOL                      receiveData[277] & bit5


#define SUPERCAPVOLTAGE_MC2_DCDC_WORD                  receiveData[278] + receiveData[279]*256
#define SUPERCAPCURRENT_MC2_DCDC_WORD                  receiveData[280] + receiveData[281]*256
#define NETVOLTAGE_MC2_DCDC_WORD                       receiveData[282] + receiveData[283]*256
#define BUSVOLTAGE_MC2_DCDC_WORD                       receiveData[284] + receiveData[285]*256
#define NETSIDECURRENT_MC2_DCDC_WORD                   receiveData[286] + receiveData[287]*256

#define CHARGECONTACTFAULT_MC2_DCDC_BOOL               receiveData[288] & bit0
#define KM1FAULT_MC2_DCDC_BOOL                         receiveData[288] & bit1
#define BUSVOLTAGEOWNVOL_MC2_DCDC_BOOL                 receiveData[288] & bit2
#define BUSVOLTAGEOVERVOL_MC2_DCDC_BOOL                receiveData[288] & bit3
#define BUSVOLTAGEOVERVOL_HARD_MC2_DCDC_BOOL           receiveData[288] & bit4
#define NETVOLTAGEOVERVBOL_MC2_DCDC_BOOL               receiveData[288] & bit5
#define KM3FAULT_MC2_DCDC_BOOL                         receiveData[288] & bit6
#define DCDCOVERTEMP_MC2_DCDC_BOOL                     receiveData[288] & bit7

#define DRIVERBOARDFAULT_MC2_DCDC_BOOL                 receiveData[289] & bit0
#define SUPERCAP1MODULEOVERTEMP_MC2_DCDC_BOOL          receiveData[289] & bit1
#define SUPERCAP2MODULEOVERTEMP_MC2_DCDC_BOOL          receiveData[289] & bit2
#define SUPERCAP3MODULEOVERTEMP_MC2_DCDC_BOOL          receiveData[289] & bit3
#define SUPERCAP4MODULEOVERTEMP_MC2_DCDC_BOOL          receiveData[289] & bit4
#define NETSIDEFASTMELTFAULT_MC2_DCDC_BOOL             receiveData[289] & bit5
#define SUPERCAPFASTMELTFAULT_MC2_DCDC_BOOL            receiveData[289] & bit6
#define POWERSUPPLYOUTPUTVOLOVER_MC2_DCDC_BOOL         receiveData[289] & bit7

#define NETSIDECURRENTOVER_MC2_DCDC_BOOL               receiveData[290] & bit0
#define NETSIDECURRENTOVER_HARD_MC2_DCDC_BOOL          receiveData[290] & bit1
#define SUPERCAPCURRENTOVERCURRENT_MC2_DCDC_BOOL       receiveData[290] & bit2
#define BOOSTOUTPUTVOLOVERHARD_MC2_DCDC_BOOL           receiveData[290] & bit3
#define SUPERCAPTOTALOVOLOVER_MC2_DCDC_BOOL            receiveData[290] & bit4
#define SUPERCAPTOTALOVOLOVER_HARD_MC2_DCDC_BOOL       receiveData[290] & bit5
#define OUTPUTSHORTCIRCUITFAULT_MC2_DCDC_BOOL          receiveData[290] & bit7

#define CANCOMMFAULT_MC2_DCDC_BOOL                     receiveData[291] & bit0
#define SUPERCAPOVERCURRENT_HARD__MC2_DCDC_BOOL        receiveData[291] & bit1
#define SUPERCAP1MODULEOVERVOL_MC2_DCDC_BOOL           receiveData[291] & bit2
#define SUPERCAP2MODULEOVERVOL_MC2_DCDC_BOOL           receiveData[291] & bit3
#define SUPERCAP3MODULEOVERVOL_MC2_DCDC_BOOL           receiveData[291] & bit4
#define SUPERCAP4MODULEOVERVOL_MC2_DCDC_BOOL           receiveData[291] & bit5
#define UNDERVOLTAGEOF24_MC2_DCDC_BOOL                 receiveData[291] & bit6

#define SUPERCAP1OVERTEMP_MC2_DCDC_BOOL                receiveData[292] & bit0
#define SUPERCAP2OVERTEMP_MC2_DCDC_BOOL                receiveData[292] & bit1
#define SUPERCAP3OVERTEMP_MC2_DCDC_BOOL                receiveData[292] & bit2
#define SUPERCAP4OVERTEMP_MC2_DCDC_BOOL                receiveData[292] & bit3
#define SUPERCAP5OVERTEMP_MC2_DCDC_BOOL                receiveData[292] & bit4
#define SUPERCAP6OVERTEMP_MC2_DCDC_BOOL                receiveData[292] & bit5
#define SUPERCAP7OVERTEMP_MC2_DCDC_BOOL                receiveData[292] & bit6
#define SUPERCAP8OVERTEMP_MC2_DCDC_BOOL                receiveData[292] & bit7

#define SUPERCAP9OVERTEMP_MC2_DCDC_BOOL                receiveData[293] & bit0
#define SUPERCAP10OVERTEMP_MC2_DCDC_BOOL               receiveData[293] & bit1
#define SUPERCAP11OVERTEMP_MC2_DCDC_BOOL               receiveData[293] & bit2
#define SUPERCAP12OVERTEMP_MC2_DCDC_BOOL               receiveData[293] & bit3
#define SUPERCAP13OVERTEMP_MC2_DCDC_BOOL               receiveData[293] & bit4
#define SUPERCAP14OVERTEMP_MC2_DCDC_BOOL               receiveData[293] & bit5
#define SUPERCAP15OVERTEMP_MC2_DCDC_BOOL               receiveData[293] & bit6
#define SUPERCAP16OVERTEMP_MC2_DCDC_BOOL               receiveData[293] & bit7

#define SUPERCAP17OVERTEMP_MC2_DCDC_BOOL               receiveData[294] & bit0
#define SUPERCAP18OVERTEMP_MC2_DCDC_BOOL               receiveData[294] & bit1
#define SUPERCAP19OVERTEMP_MC2_DCDC_BOOL               receiveData[294] & bit2
#define SUPERCAP20OVERTEMP_MC2_DCDC_BOOL               receiveData[294] & bit3
#define SUPERCAP21OVERTEMP_MC2_DCDC_BOOL               receiveData[294] & bit4
#define SUPERCAP22OVERTEMP_MC2_DCDC_BOOL               receiveData[294] & bit5
#define SUPERCAP23OVERTEMP_MC2_DCDC_BOOL               receiveData[294] & bit6
#define SUPERCAP24OVERTEMP_MC2_DCDC_BOOL               receiveData[294] & bit7

#define FAN1WORKING_MC1_HVAC_BOOL                      receiveData[300] & bit0
#define CONDENSERFAN1WORKING_MC1_HVAC_BOOL             receiveData[300] & bit1
#define COMPRESSOR1WORKING_MC1_HVAC_BOOL               receiveData[300] & bit2
#define ELECTRICHEAT1WORKING_MC1_HVAC_BOOL             receiveData[300] & bit3
#define FAN2WORKING_MC1_HVAC_BOOL                      receiveData[300] & bit4
#define CONDENSERFAN2WORKING_MC1_HVAC_BOOL             receiveData[300] & bit5
#define COMPRESSOR2WORKING_MC1_HVAC_BOOL               receiveData[300] & bit6
#define ELECTRICHEAT2WORKING_MC1_HVAC_BOOL             receiveData[300] & bit7

#define AUTOWARM_MC1_HVAC_BOOL                         receiveData[301] & bit0
#define AUTOCOLD_MC1_HVAC_BOOL                         receiveData[301] & bit1
#define VENTILATION_MC1_HVAC_BOOL                      receiveData[301] & bit2
#define EMGCVENTILATION_MC1_HVAC_BOOL                  receiveData[301] & bit3
#define STOP_MC1_HVAC_BOOL                             receiveData[301] & bit4
#define LOADSHEDDINGFEEDBACK_MC1_HVAC_BOOL             receiveData[301] & bit5
#define PRECOLD_MC1_HVAC_BOOL                          receiveData[301] & bit6
#define PREWARM_MC1_HVAC_BOOL                          receiveData[301] & bit7

#define NEWAIRVALVESTATE_MC1_HVAC_BOOL                 receiveData[302] & bit0
#define BACKAIRVALVESTATE_MC1_HVAC_BOOL                receiveData[302] & bit1
#define SELFCONTROL_MC1_HVAC_BOOL                      receiveData[302] & bit2
#define NETCONTROL_MC1_HVAC_BOOL                       receiveData[302] & bit3
#define HALFCOLDTESTSTATE_MC1_HVAC_BOOL                receiveData[302] & bit4
#define FULLCOLDTESTSTATE_MC1_HVAC_BOOL                receiveData[302] & bit5
#define HALFWRAMTESTSTATE_MC1_HVAC_BOOL                receiveData[302] & bit6
#define FULLWARMTESTSTATE_MC1_HVAC_BOOL                receiveData[302] & bit7


#define INDOORTEMP_MC1_HVAC_INT16                      receiveData[304] + receiveData[305]*256
#define OUTDOORTEMP_MC1_HVAC_INT16                     receiveData[306] + receiveData[307]*256

#define FAN1OVERLOADFAULT_MC1_HVAC_BOOL                receiveData[308] & bit0
#define CONDENSERFAN1OVERLOADFAULT_MC1_HVAC_BOOL       receiveData[308] & bit1
#define COMPRESSOR1OVERIPROTECT_MC1_HVAC_BOOL          receiveData[308] & bit2
#define COMPRESSOR1HIGHVPROTECT_MC1_HVAC_BOOL          receiveData[308] & bit3
#define COMPRESSOR1LOWVPROTECT_MC1_HVAC_BOOL           receiveData[308] & bit4
#define FAN2OVERLOADFAULT_MC1_HVAC_BOOL                receiveData[308] & bit5
#define CONDENSERFAN2OVERLOADFAULT_MC1_HVAC_BOOL       receiveData[308] & bit6
#define COMPRESSOR2OVERIPROTECT_MC1_HVAC_BOOL          receiveData[308] & bit7

#define COMPRESSOR2HIGHVPROTECT_MC1_HVAC_BOOL          receiveData[309] & bit0
#define COMPRESSOR2LOWVPROTECT_MC1_HVAC_BOOL           receiveData[309] & bit1
#define ELECTRICHEATOVERIFAULT_MC1_HVAC_BOOL           receiveData[309] & bit2
#define ELECTRICHEATOVERHEATFAULT_MC1_HVAC_BOOL        receiveData[309] & bit3
#define HVACOVERCURRENT_MC1_HVAC_BOOL                  receiveData[309] & bit4
#define NEWAIRTEMPSENSORFAULT_MC1_HVAC_BOOL            receiveData[309] & bit5
#define BACKAIRTEMPSENSORFAULT_MC1_HVAC_BOOL           receiveData[309] & bit6
#define THREEPHASEPOWERFAULT_MC1_HVAC_BOOL             receiveData[309] & bit7

#define VERSION_LB_MC1_HVAC_BYTE                       receiveData[310]
#define VERSION_HB_MC1_HVAC_BYTE                       receiveData[311]

#define FAN1WORKING_MC2_HVAC_BOOL                      receiveData[312] & bit0
#define CONDENSERFAN1WORKING_MC2_HVAC_BOOL             receiveData[312] & bit1
#define COMPRESSOR1WORKING_MC2_HVAC_BOOL               receiveData[312] & bit2
#define ELECTRICHEAT1WORKING_MC2_HVAC_BOOL             receiveData[312] & bit3
#define FAN2WORKING_MC2_HVAC_BOOL                      receiveData[312] & bit4
#define CONDENSERFAN2WORKING_MC2_HVAC_BOOL             receiveData[312] & bit5
#define COMPRESSOR2WORKING_MC2_HVAC_BOOL               receiveData[312] & bit6
#define ELECTRICHEAT2WORKING_MC2_HVAC_BOOL             receiveData[312] & bit7

#define AUTOWARM_MC2_HVAC_BOOL                         receiveData[313] & bit0
#define AUTOCOLD_MC2_HVAC_BOOL                         receiveData[313] & bit1
#define VENTILATION_MC2_HVAC_BOOL                      receiveData[313] & bit2
#define EMGCVENTILATION_MC2_HVAC_BOOL                  receiveData[313] & bit3
#define STOP_MC2_HVAC_BOOL                             receiveData[313] & bit4
#define LOADSHEDDINGFEEDBACK_MC2_HVAC_BOOL             receiveData[313] & bit5
#define PRECOLD_MC2_HVAC_BOOL                          receiveData[313] & bit6
#define PREWARM_MC2_HVAC_BOOL                          receiveData[313] & bit7

#define NEWAIRVALVESTATE_MC2_HVAC_BOOL                 receiveData[314] & bit0
#define BACKAIRVALVESTATE_MC2_HVAC_BOOL                receiveData[314] & bit1
#define SELFCONTROL_MC2_HVAC_BOOL                      receiveData[314] & bit2
#define NETCONTROL_MC2_HVAC_BOOL                       receiveData[314] & bit3
#define HALFCOLDTESTSTATE_MC2_HVAC_BOOL                receiveData[314] & bit4
#define FULLCOLDTESTSTATE_MC2_HVAC_BOOL                receiveData[314] & bit5
#define HALFWRAMTESTSTATE_MC2_HVAC_BOOL                receiveData[314] & bit6
#define FULLWARMTESTSTATE_MC2_HVAC_BOOL                receiveData[314] & bit7


#define INDOORTEMP_MC2_HVAC_INT16                      receiveData[316] + receiveData[317]*256
#define OUTDOORTEMP_MC2_HVAC_INT16                     receiveData[318] + receiveData[319]*256

#define FAN1OVERLOADFAULT_MC2_HVAC_BOOL                receiveData[320] & bit0
#define CONDENSERFAN1OVERLOADFAULT_MC2_HVAC_BOOL       receiveData[320] & bit1
#define COMPRESSOR1OVERIPROTECT_MC2_HVAC_BOOL          receiveData[320] & bit2
#define COMPRESSOR1HIGHVPROTECT_MC2_HVAC_BOOL          receiveData[320] & bit3
#define COMPRESSOR1LOWVPROTECT_MC2_HVAC_BOOL           receiveData[320] & bit4
#define FAN2OVERLOADFAULT_MC2_HVAC_BOOL                receiveData[320] & bit5
#define CONDENSERFAN2OVERLOADFAULT_MC2_HVAC_BOOL       receiveData[320] & bit6
#define COMPRESSOR2OVERIPROTECT_MC2_HVAC_BOOL          receiveData[320] & bit7

#define COMPRESSOR2HIGHVPROTECT_MC2_HVAC_BOOL          receiveData[321] & bit0
#define COMPRESSOR2LOWVPROTECT_MC2_HVAC_BOOL           receiveData[321] & bit1
#define ELECTRICHEATOVERIFAULT_MC2_HVAC_BOOL           receiveData[321] & bit2
#define ELECTRICHEATOVERHEATFAULT_MC2_HVAC_BOOL        receiveData[321] & bit3
#define HVACOVERCURRENT_MC2_HVAC_BOOL                  receiveData[321] & bit4
#define NEWAIRTEMPSENSORFAULT_MC2_HVAC_BOOL            receiveData[321] & bit5
#define BACKAIRTEMPSENSORFAULT_MC2_HVAC_BOOL           receiveData[321] & bit6
#define THREEPHASEPOWERFAULT_MC2_HVAC_BOOL             receiveData[321] & bit7

#define VERSION_LB_MC2_HVAC_BYTE                       receiveData[322]
#define VERSION_HB_MC2_HVAC_BYTE                       receiveData[323]

#define ZEROSPEEDHARDWIREDFEEDBACK_MC1_DOOR1_BOOL      receiveData[324] & bit0
#define DOORCLOSELINEFEEDBACK_MC1_DOOR1_BOOL           receiveData[324] & bit1
#define REOPENCLOSELINEFEEDBACK_MC1_DOOR1_BOOL         receiveData[324] & bit2
#define DOOROPENLINEFEEDBACK_MC1_DOOR1_BOOL            receiveData[324] & bit3
#define DOORCLOSEOK_MC1_DOOR1_BOOL                     receiveData[324] & bit4
#define DOOROPENOK_MC1_DOOR1_BOOL                      receiveData[324] & bit5
#define EMGCUNLOCK_MC1_DOOR1_BOOL                      receiveData[324] & bit6
#define DOORISOLATED_MC1_DOOR1_BOOL                    receiveData[324] & bit7

#define OBSTACLEDETECTIONACTIVATED_MC1_DOOR1_BOOL      receiveData[325] & bit0
#define DOORMAINTAINBUTTON_MC1_DOOR1_BOOL              receiveData[325] & bit1
#define SAFETYINTERLOCKOUTPUTFEEDBACK_MC1_DOOR1_BOOL   receiveData[325] & bit2
#define SAFETYINTERLOCKINPUTFEEDBACK_MC1_DOOR1_BOOL    receiveData[325] & bit3

#define MOTORFAULT_MC1_DOOR1_BOOL                      receiveData[326] & bit0
#define LOCKINPLACESWITCHFAULT_MC1_DOOR1_BOOL          receiveData[326] & bit1
#define CLOSEINPLACESWITCHFAULT_MC1_DOOR1_BOOL         receiveData[326] & bit2
#define DOORUNLOCK3SECS_MC1_DOOR1_BOOL                 receiveData[326] & bit3
#define DOORPOSITIONSENSORFAULT_MC1_DOOR1_BOOL         receiveData[326] & bit4
#define NUMBERREACHINDOORCLOSING_MC1_DOOR1_BOOL        receiveData[326] & bit5
#define NUMBERREACHINDOOROPENING_MC1_DOOR1_BOOL        receiveData[326] & bit6
#define SAFETYRELAYFAULT_MC1_DOOR1_BOOL                receiveData[326] & bit7

#define DOORLEAVELOCKPOSITION_MC1_DOOR1_BOOL           receiveData[327] & bit0
#define DOORLOCKINGDEVICEFAULT_MC1_DOOR1_BOOL          receiveData[327] & bit1
#define SAFETYINTERLOCKCIRCUITFAULT_MC1_DOOR1_BOOL     receiveData[327] & bit2
#define EDCUO0UOTPUTSHORTCIRCUITFAULT_MC1_DOOR1_BOOL   receiveData[327] & bit3
#define EDCUO1UOTPUTSHORTCIRCUITFAULT_MC1_DOOR1_BOOL   receiveData[327] & bit4
#define EDCUO2UOTPUTSHORTCIRCUITFAULT_MC1_DOOR1_BOOL   receiveData[327] & bit5
#define EDCUO3UOTPUTSHORTCIRCUITFAULT_MC1_DOOR1_BOOL   receiveData[327] & bit6

#define VERSION_LB_MC1_DOOR1_BYTE                      receiveData[328]
#define VERSION_HB_MC1_DOOR1_BYTE                      receiveData[329]

#define ZEROSPEEDHARDWIREDFEEDBACK_MC1_DOOR2_BOOL      receiveData[330] & bit0
#define DOORCLOSELINEFEEDBACK_MC1_DOOR2_BOOL           receiveData[330] & bit1
#define REOPENCLOSELINEFEEDBACK_MC1_DOOR2_BOOL         receiveData[330] & bit2
#define DOOROPENLINEFEEDBACK_MC1_DOOR2_BOOL            receiveData[330] & bit3
#define DOORCLOSEOK_MC1_DOOR2_BOOL                     receiveData[330] & bit4
#define DOOROPENOK_MC1_DOOR2_BOOL                      receiveData[330] & bit5
#define EMGCUNLOCK_MC1_DOOR2_BOOL                      receiveData[330] & bit6
#define DOORISOLATED_MC1_DOOR2_BOOL                    receiveData[330] & bit7

#define OBSTACLEDETECTIONACTIVATED_MC1_DOOR2_BOOL      receiveData[331] & bit0
#define DOORMAINTAINBUTTON_MC1_DOOR2_BOOL              receiveData[331] & bit1
#define SAFETYINTERLOCKOUTPUTFEEDBACK_MC1_DOOR2_BOOL   receiveData[331] & bit2
#define SAFETYINTERLOCKINPUTFEEDBACK_MC1_DOOR2_BOOL    receiveData[331] & bit3

#define MOTORFAULT_MC1_DOOR2_BOOL                      receiveData[332] & bit0
#define LOCKINPLACESWITCHFAULT_MC1_DOOR2_BOOL          receiveData[332] & bit1
#define CLOSEINPLACESWITCHFAULT_MC1_DOOR2_BOOL         receiveData[332] & bit2
#define DOORUNLOCK3SECS_MC1_DOOR2_BOOL                 receiveData[332] & bit3
#define DOORPOSITIONSENSORFAULT_MC1_DOOR2_BOOL         receiveData[332] & bit4
#define NUMBERREACHINDOORCLOSING_MC1_DOOR2_BOOL        receiveData[332] & bit5
#define NUMBERREACHINDOOROPENING_MC1_DOOR2_BOOL        receiveData[332] & bit6
#define SAFETYRELAYFAULT_MC1_DOOR2_BOOL                receiveData[332] & bit7

#define DOORLEAVELOCKPOSITION_MC1_DOOR2_BOOL           receiveData[333] & bit0
#define DOORLOCKINGDEVICEFAULT_MC1_DOOR2_BOOL          receiveData[333] & bit1
#define SAFETYINTERLOCKCIRCUITFAULT_MC1_DOOR2_BOOL     receiveData[333] & bit2
#define EDCUO0UOTPUTSHORTCIRCUITFAULT_MC1_DOOR2_BOOL   receiveData[333] & bit3
#define EDCUO1UOTPUTSHORTCIRCUITFAULT_MC1_DOOR2_BOOL   receiveData[333] & bit4
#define EDCUO2UOTPUTSHORTCIRCUITFAULT_MC1_DOOR2_BOOL   receiveData[333] & bit5
#define EDCUO3UOTPUTSHORTCIRCUITFAULT_MC1_DOOR2_BOOL   receiveData[333] & bit6

#define VERSION_LB_MC1_DOOR2_BYTE                      receiveData[334]
#define VERSION_HB_MC1_DOOR2_BYTE                      receiveData[335]

#define ZEROSPEEDHARDWIREDFEEDBACK_MC1_DOOR3_BOOL      receiveData[336] & bit0
#define DOORCLOSELINEFEEDBACK_MC1_DOOR3_BOOL           receiveData[336] & bit1
#define REOPENCLOSELINEFEEDBACK_MC1_DOOR3_BOOL         receiveData[336] & bit2
#define DOOROPENLINEFEEDBACK_MC1_DOOR3_BOOL            receiveData[336] & bit3
#define DOORCLOSEOK_MC1_DOOR3_BOOL                     receiveData[336] & bit4
#define DOOROPENOK_MC1_DOOR3_BOOL                      receiveData[336] & bit5
#define EMGCUNLOCK_MC1_DOOR3_BOOL                      receiveData[336] & bit6
#define DOORISOLATED_MC1_DOOR3_BOOL                    receiveData[336] & bit7

#define OBSTACLEDETECTIONACTIVATED_MC1_DOOR3_BOOL      receiveData[337] & bit0
#define DOORMAINTAINBUTTON_MC1_DOOR3_BOOL              receiveData[337] & bit1
#define SAFETYINTERLOCKOUTPUTFEEDBACK_MC1_DOOR3_BOOL   receiveData[337] & bit2
#define SAFETYINTERLOCKINPUTFEEDBACK_MC1_DOOR3_BOOL    receiveData[337] & bit3

#define MOTORFAULT_MC1_DOOR3_BOOL                      receiveData[338] & bit0
#define LOCKINPLACESWITCHFAULT_MC1_DOOR3_BOOL          receiveData[338] & bit1
#define CLOSEINPLACESWITCHFAULT_MC1_DOOR3_BOOL         receiveData[338] & bit2
#define DOORUNLOCK3SECS_MC1_DOOR3_BOOL                 receiveData[338] & bit3
#define DOORPOSITIONSENSORFAULT_MC1_DOOR3_BOOL         receiveData[338] & bit4
#define NUMBERREACHINDOORCLOSING_MC1_DOOR3_BOOL        receiveData[338] & bit5
#define NUMBERREACHINDOOROPENING_MC1_DOOR3_BOOL        receiveData[338] & bit6
#define SAFETYRELAYFAULT_MC1_DOOR3_BOOL                receiveData[338] & bit7

#define DOORLEAVELOCKPOSITION_MC1_DOOR3_BOOL           receiveData[339] & bit0
#define DOORLOCKINGDEVICEFAULT_MC1_DOOR3_BOOL          receiveData[339] & bit1
#define SAFETYINTERLOCKCIRCUITFAULT_MC1_DOOR3_BOOL     receiveData[339] & bit2
#define EDCUO0UOTPUTSHORTCIRCUITFAULT_MC1_DOOR3_BOOL   receiveData[339] & bit3
#define EDCUO1UOTPUTSHORTCIRCUITFAULT_MC1_DOOR3_BOOL   receiveData[339] & bit4
#define EDCUO2UOTPUTSHORTCIRCUITFAULT_MC1_DOOR3_BOOL   receiveData[339] & bit5
#define EDCUO3UOTPUTSHORTCIRCUITFAULT_MC1_DOOR3_BOOL   receiveData[339] & bit6

#define VERSION_LB_MC1_DOOR3_BYTE                      receiveData[340]
#define VERSION_HB_MC1_DOOR3_BYTE                      receiveData[341]

#define ZEROSPEEDHARDWIREDFEEDBACK_MC1_DOOR4_BOOL      receiveData[342] & bit0
#define DOORCLOSELINEFEEDBACK_MC1_DOOR4_BOOL           receiveData[342] & bit1
#define REOPENCLOSELINEFEEDBACK_MC1_DOOR4_BOOL         receiveData[342] & bit2
#define DOOROPENLINEFEEDBACK_MC1_DOOR4_BOOL            receiveData[342] & bit3
#define DOORCLOSEOK_MC1_DOOR4_BOOL                     receiveData[342] & bit4
#define DOOROPENOK_MC1_DOOR4_BOOL                      receiveData[342] & bit5
#define EMGCUNLOCK_MC1_DOOR4_BOOL                      receiveData[342] & bit6
#define DOORISOLATED_MC1_DOOR4_BOOL                    receiveData[342] & bit7

#define OBSTACLEDETECTIONACTIVATED_MC1_DOOR4_BOOL      receiveData[343] & bit0
#define DOORMAINTAINBUTTON_MC1_DOOR4_BOOL              receiveData[343] & bit1
#define SAFETYINTERLOCKOUTPUTFEEDBACK_MC1_DOOR4_BOOL   receiveData[343] & bit2
#define SAFETYINTERLOCKINPUTFEEDBACK_MC1_DOOR4_BOOL    receiveData[343] & bit3

#define MOTORFAULT_MC1_DOOR4_BOOL                      receiveData[344] & bit0
#define LOCKINPLACESWITCHFAULT_MC1_DOOR4_BOOL          receiveData[344] & bit1
#define CLOSEINPLACESWITCHFAULT_MC1_DOOR4_BOOL         receiveData[344] & bit2
#define DOORUNLOCK3SECS_MC1_DOOR4_BOOL                 receiveData[344] & bit3
#define DOORPOSITIONSENSORFAULT_MC1_DOOR4_BOOL         receiveData[344] & bit4
#define NUMBERREACHINDOORCLOSING_MC1_DOOR4_BOOL        receiveData[344] & bit5
#define NUMBERREACHINDOOROPENING_MC1_DOOR4_BOOL        receiveData[344] & bit6
#define SAFETYRELAYFAULT_MC1_DOOR4_BOOL                receiveData[344] & bit7

#define DOORLEAVELOCKPOSITION_MC1_DOOR4_BOOL           receiveData[345] & bit0
#define DOORLOCKINGDEVICEFAULT_MC1_DOOR4_BOOL          receiveData[345] & bit1
#define SAFETYINTERLOCKCIRCUITFAULT_MC1_DOOR4_BOOL     receiveData[345] & bit2
#define EDCUO0UOTPUTSHORTCIRCUITFAULT_MC1_DOOR4_BOOL   receiveData[345] & bit3
#define EDCUO1UOTPUTSHORTCIRCUITFAULT_MC1_DOOR4_BOOL   receiveData[345] & bit4
#define EDCUO2UOTPUTSHORTCIRCUITFAULT_MC1_DOOR4_BOOL   receiveData[345] & bit5
#define EDCUO3UOTPUTSHORTCIRCUITFAULT_MC1_DOOR4_BOOL   receiveData[345] & bit6

#define VERSION_LB_MC1_DOOR4_BYTE                      receiveData[346]
#define VERSION_HB_MC1_DOOR4_BYTE                      receiveData[347]

#define ZEROSPEEDHARDWIREDFEEDBACK_MC2_DOOR1_BOOL      receiveData[348] & bit0
#define DOORCLOSELINEFEEDBACK_MC2_DOOR1_BOOL           receiveData[348] & bit1
#define REOPENCLOSELINEFEEDBACK_MC2_DOOR1_BOOL         receiveData[348] & bit2
#define DOOROPENLINEFEEDBACK_MC2_DOOR1_BOOL            receiveData[348] & bit3
#define DOORCLOSEOK_MC2_DOOR1_BOOL                     receiveData[348] & bit4
#define DOOROPENOK_MC2_DOOR1_BOOL                      receiveData[348] & bit5
#define EMGCUNLOCK_MC2_DOOR1_BOOL                      receiveData[348] & bit6
#define DOORISOLATED_MC2_DOOR1_BOOL                    receiveData[348] & bit7

#define OBSTACLEDETECTIONACTIVATED_MC2_DOOR1_BOOL      receiveData[349] & bit0
#define DOORMAINTAINBUTTON_MC2_DOOR1_BOOL              receiveData[349] & bit1
#define SAFETYINTERLOCKOUTPUTFEEDBACK_MC2_DOOR1_BOOL   receiveData[349] & bit2
#define SAFETYINTERLOCKINPUTFEEDBACK_MC2_DOOR1_BOOL    receiveData[349] & bit3

#define MOTORFAULT_MC2_DOOR1_BOOL                      receiveData[350] & bit0
#define LOCKINPLACESWITCHFAULT_MC2_DOOR1_BOOL          receiveData[350] & bit1
#define CLOSEINPLACESWITCHFAULT_MC2_DOOR1_BOOL         receiveData[350] & bit2
#define DOORUNLOCK3SECS_MC2_DOOR1_BOOL                 receiveData[350] & bit3
#define DOORPOSITIONSENSORFAULT_MC2_DOOR1_BOOL         receiveData[350] & bit4
#define NUMBERREACHINDOORCLOSING_MC2_DOOR1_BOOL        receiveData[350] & bit5
#define NUMBERREACHINDOOROPENING_MC2_DOOR1_BOOL        receiveData[350] & bit6
#define SAFETYRELAYFAULT_MC2_DOOR1_BOOL                receiveData[350] & bit7

#define DOORLEAVELOCKPOSITION_MC2_DOOR1_BOOL           receiveData[351] & bit0
#define DOORLOCKINGDEVICEFAULT_MC2_DOOR1_BOOL          receiveData[351] & bit1
#define SAFETYINTERLOCKCIRCUITFAULT_MC2_DOOR1_BOOL     receiveData[351] & bit2
#define EDCUO0UOTPUTSHORTCIRCUITFAULT_MC2_DOOR1_BOOL   receiveData[351] & bit3
#define EDCUO1UOTPUTSHORTCIRCUITFAULT_MC2_DOOR1_BOOL   receiveData[351] & bit4
#define EDCUO2UOTPUTSHORTCIRCUITFAULT_MC2_DOOR1_BOOL   receiveData[351] & bit5
#define EDCUO3UOTPUTSHORTCIRCUITFAULT_MC2_DOOR1_BOOL   receiveData[351] & bit6

#define VERSION_LB_MC2_DOOR1_BYTE                      receiveData[352]
#define VERSION_HB_MC2_DOOR1_BYTE                      receiveData[353]

#define ZEROSPEEDHARDWIREDFEEDBACK_MC2_DOOR2_BOOL      receiveData[354] & bit0
#define DOORCLOSELINEFEEDBACK_MC2_DOOR2_BOOL           receiveData[354] & bit1
#define REOPENCLOSELINEFEEDBACK_MC2_DOOR2_BOOL         receiveData[354] & bit2
#define DOOROPENLINEFEEDBACK_MC2_DOOR2_BOOL            receiveData[354] & bit3
#define DOORCLOSEOK_MC2_DOOR2_BOOL                     receiveData[354] & bit4
#define DOOROPENOK_MC2_DOOR2_BOOL                      receiveData[354] & bit5
#define EMGCUNLOCK_MC2_DOOR2_BOOL                      receiveData[354] & bit6
#define DOORISOLATED_MC2_DOOR2_BOOL                    receiveData[354] & bit7

#define OBSTACLEDETECTIONACTIVATED_MC2_DOOR2_BOOL      receiveData[355] & bit0
#define DOORMAINTAINBUTTON_MC2_DOOR2_BOOL              receiveData[355] & bit1
#define SAFETYINTERLOCKOUTPUTFEEDBACK_MC2_DOOR2_BOOL   receiveData[355] & bit2
#define SAFETYINTERLOCKINPUTFEEDBACK_MC2_DOOR2_BOOL    receiveData[355] & bit3

#define MOTORFAULT_MC2_DOOR2_BOOL                      receiveData[356] & bit0
#define LOCKINPLACESWITCHFAULT_MC2_DOOR2_BOOL          receiveData[356] & bit1
#define CLOSEINPLACESWITCHFAULT_MC2_DOOR2_BOOL         receiveData[356] & bit2
#define DOORUNLOCK3SECS_MC2_DOOR2_BOOL                 receiveData[356] & bit3
#define DOORPOSITIONSENSORFAULT_MC2_DOOR2_BOOL         receiveData[356] & bit4
#define NUMBERREACHINDOORCLOSING_MC2_DOOR2_BOOL        receiveData[356] & bit5
#define NUMBERREACHINDOOROPENING_MC2_DOOR2_BOOL        receiveData[356] & bit6
#define SAFETYRELAYFAULT_MC2_DOOR2_BOOL                receiveData[356] & bit7

#define DOORLEAVELOCKPOSITION_MC2_DOOR2_BOOL           receiveData[357] & bit0
#define DOORLOCKINGDEVICEFAULT_MC2_DOOR2_BOOL          receiveData[357] & bit1
#define SAFETYINTERLOCKCIRCUITFAULT_MC2_DOOR2_BOOL     receiveData[357] & bit2
#define EDCUO0UOTPUTSHORTCIRCUITFAULT_MC2_DOOR2_BOOL   receiveData[357] & bit3
#define EDCUO1UOTPUTSHORTCIRCUITFAULT_MC2_DOOR2_BOOL   receiveData[357] & bit4
#define EDCUO2UOTPUTSHORTCIRCUITFAULT_MC2_DOOR2_BOOL   receiveData[357] & bit5
#define EDCUO3UOTPUTSHORTCIRCUITFAULT_MC2_DOOR2_BOOL   receiveData[357] & bit6

#define VERSION_LB_MC2_DOOR2_BYTE                      receiveData[358]
#define VERSION_HB_MC2_DOOR2_BYTE                      receiveData[359]

#define ZEROSPEEDHARDWIREDFEEDBACK_MC2_DOOR3_BOOL      receiveData[360] & bit0
#define DOORCLOSELINEFEEDBACK_MC2_DOOR3_BOOL           receiveData[360] & bit1
#define REOPENCLOSELINEFEEDBACK_MC2_DOOR3_BOOL         receiveData[360] & bit2
#define DOOROPENLINEFEEDBACK_MC2_DOOR3_BOOL            receiveData[360] & bit3
#define DOORCLOSEOK_MC2_DOOR3_BOOL                     receiveData[360] & bit4
#define DOOROPENOK_MC2_DOOR3_BOOL                      receiveData[360] & bit5
#define EMGCUNLOCK_MC2_DOOR3_BOOL                      receiveData[360] & bit6
#define DOORISOLATED_MC2_DOOR3_BOOL                    receiveData[360] & bit7

#define OBSTACLEDETECTIONACTIVATED_MC2_DOOR3_BOOL      receiveData[361] & bit0
#define DOORMAINTAINBUTTON_MC2_DOOR3_BOOL              receiveData[361] & bit1
#define SAFETYINTERLOCKOUTPUTFEEDBACK_MC2_DOOR3_BOOL   receiveData[361] & bit2
#define SAFETYINTERLOCKINPUTFEEDBACK_MC2_DOOR3_BOOL    receiveData[361] & bit3

#define MOTORFAULT_MC2_DOOR3_BOOL                      receiveData[362] & bit0
#define LOCKINPLACESWITCHFAULT_MC2_DOOR3_BOOL          receiveData[362] & bit1
#define CLOSEINPLACESWITCHFAULT_MC2_DOOR3_BOOL         receiveData[362] & bit2
#define DOORUNLOCK3SECS_MC2_DOOR3_BOOL                 receiveData[362] & bit3
#define DOORPOSITIONSENSORFAULT_MC2_DOOR3_BOOL         receiveData[362] & bit4
#define NUMBERREACHINDOORCLOSING_MC2_DOOR3_BOOL        receiveData[362] & bit5
#define NUMBERREACHINDOOROPENING_MC2_DOOR3_BOOL        receiveData[362] & bit6
#define SAFETYRELAYFAULT_MC2_DOOR3_BOOL                receiveData[362] & bit7

#define DOORLEAVELOCKPOSITION_MC2_DOOR3_BOOL           receiveData[363] & bit0
#define DOORLOCKINGDEVICEFAULT_MC2_DOOR3_BOOL          receiveData[363] & bit1
#define SAFETYINTERLOCKCIRCUITFAULT_MC2_DOOR3_BOOL     receiveData[363] & bit2
#define EDCUO0UOTPUTSHORTCIRCUITFAULT_MC2_DOOR3_BOOL   receiveData[363] & bit3
#define EDCUO1UOTPUTSHORTCIRCUITFAULT_MC2_DOOR3_BOOL   receiveData[363] & bit4
#define EDCUO2UOTPUTSHORTCIRCUITFAULT_MC2_DOOR3_BOOL   receiveData[363] & bit5
#define EDCUO3UOTPUTSHORTCIRCUITFAULT_MC2_DOOR3_BOOL   receiveData[363] & bit6

#define VERSION_LB_MC2_DOOR3_BYTE                      receiveData[364]
#define VERSION_HB_MC2_DOOR3_BYTE                      receiveData[365]

#define ZEROSPEEDHARDWIREDFEEDBACK_MC2_DOOR4_BOOL      receiveData[366] & bit0
#define DOORCLOSELINEFEEDBACK_MC2_DOOR4_BOOL           receiveData[366] & bit1
#define REOPENCLOSELINEFEEDBACK_MC2_DOOR4_BOOL         receiveData[366] & bit2
#define DOOROPENLINEFEEDBACK_MC2_DOOR4_BOOL            receiveData[366] & bit3
#define DOORCLOSEOK_MC2_DOOR4_BOOL                     receiveData[366] & bit4
#define DOOROPENOK_MC2_DOOR4_BOOL                      receiveData[366] & bit5
#define EMGCUNLOCK_MC2_DOOR4_BOOL                      receiveData[366] & bit6
#define DOORISOLATED_MC2_DOOR4_BOOL                    receiveData[366] & bit7

#define OBSTACLEDETECTIONACTIVATED_MC2_DOOR4_BOOL      receiveData[367] & bit0
#define DOORMAINTAINBUTTON_MC2_DOOR4_BOOL              receiveData[367] & bit1
#define SAFETYINTERLOCKOUTPUTFEEDBACK_MC2_DOOR4_BOOL   receiveData[367] & bit2
#define SAFETYINTERLOCKINPUTFEEDBACK_MC2_DOOR4_BOOL    receiveData[367] & bit3

#define MOTORFAULT_MC2_DOOR4_BOOL                      receiveData[368] & bit0
#define LOCKINPLACESWITCHFAULT_MC2_DOOR4_BOOL          receiveData[368] & bit1
#define CLOSEINPLACESWITCHFAULT_MC2_DOOR4_BOOL         receiveData[368] & bit2
#define DOORUNLOCK3SECS_MC2_DOOR4_BOOL                 receiveData[368] & bit3
#define DOORPOSITIONSENSORFAULT_MC2_DOOR4_BOOL         receiveData[368] & bit4
#define NUMBERREACHINDOORCLOSING_MC2_DOOR4_BOOL        receiveData[368] & bit5
#define NUMBERREACHINDOOROPENING_MC2_DOOR4_BOOL        receiveData[368] & bit6
#define SAFETYRELAYFAULT_MC2_DOOR4_BOOL                receiveData[368] & bit7

#define DOORLEAVELOCKPOSITION_MC2_DOOR4_BOOL           receiveData[369] & bit0
#define DOORLOCKINGDEVICEFAULT_MC2_DOOR4_BOOL          receiveData[369] & bit1
#define SAFETYINTERLOCKCIRCUITFAULT_MC2_DOOR4_BOOL     receiveData[369] & bit2
#define EDCUO0UOTPUTSHORTCIRCUITFAULT_MC2_DOOR4_BOOL   receiveData[369] & bit3
#define EDCUO1UOTPUTSHORTCIRCUITFAULT_MC2_DOOR4_BOOL   receiveData[369] & bit4
#define EDCUO2UOTPUTSHORTCIRCUITFAULT_MC2_DOOR4_BOOL   receiveData[369] & bit5
#define EDCUO3UOTPUTSHORTCIRCUITFAULT_MC2_DOOR4_BOOL   receiveData[369] & bit6

#define VERSION_LB_MC2_DOOR4_BYTE                      receiveData[370]
#define VERSION_HB_MC2_DOOR4_BYTE                      receiveData[371]

#define AO1SPEEDFRIVER_MC1_RIOM_WORD                   receiveData[376]+receiveData[377]*256

#define VERSIONLOW_VCU_BYTE                            receiveData[378]
#define VERSIONHIGH_VCU_BYTE                           receiveData[379]

    #define VERSION_VCU_WORD                            (receiveData[348]+receiveData[349]*256)/100
    #define MAIN_CONTROLLER_LEVEL                     receiveData[358]-7

#define AO1SPEEDFRIVER_MC2_RIOM_WORD               receiveData[384]+receiveData[385]*256

    #define ADJUSTTIME_YEAR_BYTE                           receiveData[370]
    #define ADJUSTTIME_MONTH_BYTE                          receiveData[371]

#define MAIN_VIGILANCEBYPASS_BOOL                      receiveData[388] & bit0
    #define MAIN_PANTOGRAPHUPOK_BOOL                       receiveData[368] & bit1
    #define MAIN_PANTOGRAPHDOWNOK_BOOL                     receiveData[368] & bit2

#define DOUBLECABACTIVED_BOOL                          receiveData[388] & bit3
    #define MAIN_MC1KEYACTIVE_BOOL                         receiveData[361] & bit2
    #define MAIN_MC2KEYACTIVE_BOOL                         receiveData[361] & bit3
    #define MAIN_SAFEBRAKESTATE_BOOL                       receiveData[363] & bit4
    #define MAIN_SAFECIRCLESTATE_BOOL                      receiveData[363] & bit0


//#define MAIN_TOP_CURENTSTATION_QUINT8                  receiveData[389] //cancel

#define MAIN_TOP_NEXTSTATION_QUINT8                    receiveData[390]

    #define MAIN_DEADMANDECOUNTER_QUINT8                   receiveData[353]

    #define MAIN_TOP_SPEED_QUINT8                          receiveData[359]

#define MAIN_CURRENTSTATIONSETTEDSUCCESS_BOOL          receiveData[393] & bit0
#define MAIN_SKIPSTATIONSETTEDSUCCESS_BOOL             receiveData[393] & bit1
    #define NET_MC1_RIOMONLINESTATE_BOOL                   receiveData[378] & bit0
    #define NET_MC2_RIOMONLINESTATE_BOOL                   receiveData[378] & bit1
    #define NET_MC1_TCUONLINE_BOOL                         receiveData[378] & bit2
    #define NET_MC2_TCUONLINE_BOOL                         receiveData[378] & bit3
    #define NET_MC1_ACUONLINE_BOOL                         receiveData[378] & bit4
    #define NET_MC2_ACUONLINE_BOOL                         receiveData[378] & bit5

    #define NET_MC1_DOOR1ONLINE_BOOL                       receiveData[378] & bit6
    #define NET_MC1_DOOR2ONLINE_BOOL                       receiveData[378] & bit7
    #define NET_MC1_DOOR3ONLINE_BOOL                       receiveData[379] & bit0
    #define NET_MC1_DOOR4ONLINE_BOOL                       receiveData[379] & bit1
    #define NET_MC2_DOOR5ONLINE_BOOL                       receiveData[379] & bit2
    #define NET_MC2_DOOR6ONLINE_BOOL                       receiveData[379] & bit3
    #define NET_MC2_DOOR7ONLINE_BOOL                       receiveData[379] & bit4
    #define NET_MC2_DOOR8ONLINE_BOOL                       receiveData[379] & bit5

    #define NET_MC1_HVACONLINE_BOOL                        receiveData[379] & bit6
    #define NET_MC2_HVACONLINE_BOOL                        receiveData[379] & bit7
    #define NET_PISONLINE_BOOL                             receiveData[380] & bit0
    #define NET_PISONLINE2_BOOL                            receiveData[380] & bit1
#define NET_MC1_DCDCONLINE_BOOL                        receiveData[395] & bit3
#define NET_MC2_DCDCONLINE_BOOL                        receiveData[395] & bit4
    #define NET_BCUONLINE_BOOL                             receiveData[380] & bit2



    #define NET_MC1_RIOM1_DI1ONLINE_BOOL                     receiveData[380] & bit3
    #define NET_MC1_RIOM1_DI2ONLINE_BOOL                       receiveData[380] & bit4
    #define NET_MC1_RIOM1_SGNONLINE_BOOL                       receiveData[380] & bit5
    #define NET_MC1_RIOM1_AXONLINE_BOOL                        receiveData[380] & bit6
    #define NET_MC1_RIOM1_DO1ONLINE_BOOL                      receiveData[380] & bit7

    #define NET_MC1_RIOM1_DO2ONLINE_BOOL                     receiveData[381] & bit0
    #define NET_MC2_RIOM2_DI1ONLINE_BOOL                       receiveData[381] & bit1
    #define NET_MC2_RIOM2_DI2ONLINE_BOOL                       receiveData[381] & bit2
    #define NET_MC2_RIOM2_SGNONLINE_BOOL                       receiveData[381] & bit3
    #define NET_MC2_RIOM2_AXONLINE_BOOL                        receiveData[381] & bit4
    #define NET_MC2_RIOM2_DO1ONLINE_BOOL                      receiveData[381] & bit5
    #define NET_MC2_RIOM2_DO2ONLINE_BOOL                     receiveData[381] & bit6

    #define NET_MC1_ATCONLINE_BOOL                       receiveData[382] & bit3
    #define NET_MC2_ATCONLINE_BOOL                       receiveData[382] & bit4
    #define NET_MC1_TicketONLINE_BOOL                    receiveData[382] & bit5
    #define NET_MC2_TicketONLINE_BOOL                    receiveData[382] & bit6
    #define NET_OTHERVCUONLINE_BOOL                    receiveData[382] & bit7
    #define NET_OTHERIDUONLINE_BOOL                    receiveData[383] & bit0

    #define TCMS_SPEED_LIMIT_QUINT8                        receiveData[360]

    #define MAIN_MC2_HMI_BOOL                              receiveData[362] & bit1
    #define MAIN_MC1_HMI_BOOL                              receiveData[362] & bit0
#define MAIN_INNOPOWERAREA_BOOL                        receiveData[397] & bit2
#define MAIN_INLARGENOPOWERAREA_BOOL                   receiveData[397] & bit3
    #define MAIN_Deadman_BOOL                              receiveData[363] & bit7
    #define MAIN_IMAIN_NETVOLTAGEOV1050_BOOL               receiveData[363] & bit2
    #define MAIN_ALLTCUFAULT_BOOL                          receiveData[363] & bit3
    #define ADJUSTTIME_ENABLE_BOOL                         receiveData[362] & bit7

    #define MAIN_TOP_ACCUMULATEDKMS_QUINT32                receiveData[357]*256*256*256+receiveData[356]*256*256+receiveData[355]*256+receiveData[354]
    #define TWOSTATIONDISTANCE_QINT16                      receiveData[376] + receiveData[377]*256

#define MAIN_TRACTIONSTATE_BOOL                        receiveData[404] & bit0
#define MAIN_BRAKESTATE_BOOL                           receiveData[404] & bit1
    #define MAIN_EMGCBRAKESTATE_BOOL                       receiveData[363] & bit6
    #define MAIN_FORWARDDIRECTION_BOOL                     receiveData[361] & bit0
    #define MAIN_BACKWARDDIRECTION_BOOL                    receiveData[361] & bit1
#define MAIN_BRAKECODE1_BOOL                           receiveData[404] & bit5
#define MAIN_BRAKECODE2_BOOL                           receiveData[404] & bit6
#define MAIN_BRAKECODE3_BOOL                           receiveData[404] & bit7

#define MAIN_TRACTIONCODE1_BOOL                        receiveData[405] & bit0
#define MAIN_TRACTIONCODE2_BOOL                        receiveData[405] & bit1
#define MAIN_TRACTIONCODE3_BOOL                        receiveData[405] & bit2
#define MAIN_TRACTIONCODE4_BOOL                        receiveData[405] & bit3
    #define MAIN_TCU1_TRACTIONREADY_BOOL                   receiveData[361] & bit4
    #define MAIN_TCU2_TRACTIONREADY_BOOL                   receiveData[361] & bit5
    #define MAIN_TCU_EB1FAULT_BOOL                         receiveData[361] & bit6
    #define MAIN_TCU_EB2FAULT_BOOL                         receiveData[361] & bit7

#define MAIN_DOORCLOSEOK_MC1_DOOR1_BOOL                receiveData[406] & bit0
#define MAIN_DOOROPENOK_MC1_DOOR1_BOOL                 receiveData[406] & bit1
#define MAIN_EMGCUNLOCK_MC1_DOOR1_BOOL                 receiveData[406] & bit2
#define MAIN_DOORISOLATED_MC1_DOOR1_BOOL               receiveData[406] & bit3
#define MAIN_DOORCLOSEOK_MC1_DOOR2_BOOL                receiveData[406] & bit4
#define MAIN_DOOROPENOK_MC1_DOOR2_BOOL                 receiveData[406] & bit5
#define MAIN_EMGCUNLOCK_MC1_DOOR2_BOOL                 receiveData[406] & bit6
#define MAIN_DOORISOLATED_MC1_DOOR2_BOOL               receiveData[406] & bit7

#define MAIN_DOORCLOSEOK_MC1_DOOR3_BOOL                receiveData[407] & bit0
#define MAIN_DOOROPENOK_MC1_DOOR3_BOOL                 receiveData[407] & bit1
#define MAIN_EMGCUNLOCK_MC1_DOOR3_BOOL                 receiveData[407] & bit2
#define MAIN_DOORISOLATED_MC1_DOOR3_BOOL               receiveData[407] & bit3
#define MAIN_DOORCLOSEOK_MC1_DOOR4_BOOL                receiveData[407] & bit4
#define MAIN_DOOROPENOK_MC1_DOOR4_BOOL                 receiveData[407] & bit5
#define MAIN_EMGCUNLOCK_MC1_DOOR4_BOOL                 receiveData[407] & bit6
#define MAIN_DOORISOLATED_MC1_DOOR4_BOOL               receiveData[407] & bit7

#define MAIN_DOORCLOSEOK_MC2_DOOR1_BOOL                receiveData[408] & bit0
#define MAIN_DOOROPENOK_MC2_DOOR1_BOOL                 receiveData[408] & bit1
#define MAIN_EMGCUNLOCK_MC2_DOOR1_BOOL                 receiveData[408] & bit2
#define MAIN_DOORISOLATED_MC2_DOOR1_BOOL               receiveData[408] & bit3
#define MAIN_DOORCLOSEOK_MC2_DOOR2_BOOL                receiveData[408] & bit4
#define MAIN_DOOROPENOK_MC2_DOOR2_BOOL                 receiveData[408] & bit5
#define MAIN_EMGCUNLOCK_MC2_DOOR2_BOOL                 receiveData[408] & bit6
#define MAIN_DOORISOLATED_MC2_DOOR2_BOOL               receiveData[408] & bit7

#define MAIN_DOORCLOSEOK_MC2_DOOR3_BOOL                receiveData[409] & bit0
#define MAIN_DOOROPENOK_MC2_DOOR3_BOOL                 receiveData[409] & bit1
#define MAIN_EMGCUNLOCK_MC2_DOOR3_BOOL                 receiveData[409] & bit2
#define MAIN_DOORISOLATED_MC2_DOOR3_BOOL               receiveData[409] & bit3
#define MAIN_DOORCLOSEOK_MC2_DOOR4_BOOL                receiveData[409] & bit4
#define MAIN_DOOROPENOK_MC2_DOOR4_BOOL                 receiveData[409] & bit5
#define MAIN_EMGCUNLOCK_MC2_DOOR4_BOOL                 receiveData[409] & bit6
#define MAIN_DOORISOLATED_MC2_DOOR4_BOOL               receiveData[409] & bit7

#define MAIN_DCDC1OK_BOOL                              receiveData[410] & bit0
#define MAIN_DCDC2OK_BOOL                              receiveData[410] & bit1
    #define MAIN_TCU1OK_BOOL                               receiveData[364] & bit2
    #define MAIN_TCU2OK_BOOL                               receiveData[364] & bit3
    #define MAIN_ACU1OK_BOOL                               receiveData[364] & bit4
    #define MAIN_ACU2OK_BOOL                               receiveData[364] & bit5
    #define MAIN_MC1BRAKEFAULT_BOOL                        receiveData[365] & bit2
    #define MAIN_MC2BRAKEFAULT_BOOL                        receiveData[365] & bit3
    #define MAIN_ACU1STOP_BOOL                             receiveData[364] &bit6
    #define MAIN_ACU2STOP_BOOL                             receiveData[364] &bit7

    #define MAIN_TPBRAKEFAULT_BOOL                         receiveData[365] & bit4
    #define MAIN_MC1BRAKERELEASE_BOOL                      receiveData[365] & bit5
    #define MAIN_MC2BRAKERELEASE_BOOL                      receiveData[365] & bit6
    #define MAIN_TPBRAKERELEASE_BOOL                       receiveData[365] & bit7
    #define MAIN_BRAKEALLRELEASE_BOOL                      receiveData[363] & bit1
    #define MAIN_HSCBSTATE_BOOL                            receiveData[368] & bit0
    #define MAIN_DOOR_BYPASS_BOOL                          receiveData[363] & bit5
#define MAIN_DOOR_ALLCLOSED_BOOL                       receiveData[411] & bit7

    #define MAIN_BATTERYVOLTAGE_USINT                      receiveData[352]
#define MAIN_DCDCPERSENT_USINT                         receiveData[413]
    #define MAIN_NETVOLTAGE_UINT                           receiveData[350] + receiveData[351]*256

// 20120118 add begin
#define CAN_OK_MC1_DCDC_BOOL                           receiveData[416] & bit0
#define CAN_OK_MC2_DCDC_BOOL                           receiveData[416] & bit1
    #define CAN_OK_MC1_ACU_BOOL                            receiveData[381] & bit7
    #define CAN_OK_MC2_ACU_BOOL                            receiveData[382] & bit0
    #define CAN_OK_MC1_TCU_BOOL                            receiveData[382] & bit1
    #define CAN_OK_MC2_TCU_BOOL                            receiveData[382] & bit2
// 20120118 add end

#define MAIN_OUTNOPOWERAREA_BOOL                       receiveData[417] & bit0
#define MAIN_MC1_ACU_NOTWORK_BOOL                      receiveData[417] & bit1
#define MAIN_MC2_ACU_NOTWORK_BOOL                      receiveData[417] & bit2
#define MAIN_CURRENTINLARGENOPOWERAREA_BOOL            receiveData[417] & bit3
//2014-4-21 Ethiopia
//TCU
#define SAFETYBRAKE_MC1_MSR1_BOOL                            receiveData[236-40] &bit0
#define TRACTIONENABLE_MC1_MSR1_BOOL                         receiveData[236-40] &bit1
#define ALLFRICTIONBRAKESRELEASED_MC1_MSR1_BOOL              receiveData[236-40] &bit2
#define BRAKEOVERTAKE_MC1_MSR1_BOOL                          receiveData[236-40] &bit6
#define FORCEDBRAKE_MC1_MSR1_BOOL                            receiveData[236-40] &bit7
#define CHARGINGCONTACTORSTATE_MC1_MSR1_BOOL                 receiveData[237-40] &bit0
#define MAINCONTACTORSTATE_MC1_MSR1_BOOL                     receiveData[237-40] &bit1
#define VVVFSTATE_MC1_MSR1_BOOL                              receiveData[237-40] &bit2
#define DRIVEENABLE_MC1_MSR1_BOOL                            receiveData[237-40] &bit3
#define SANDINGRECOMMEND_MC1_MSR1_BOOL                       receiveData[237-40] &bit5
#define HARDWAREOVERVOLTAGE_MC1_MSR1_BOOL                    receiveData[237-40] &bit6
#define HARDWARELINEOVERCURRENT_MC1_MSR1_BOOL                receiveData[237-40] &bit7
#define TRACTIONINVERTER1WARNING_MC1_MSR1_BOOL               receiveData[246-40] &bit0
#define TRACTIONINVERTER1FAULT_MC1_MSR1_BOOL                 receiveData[246-40] &bit1
#define TRACTIONINVERTER1WORKING_MC1_MSR1_BOOL               receiveData[246-40] &bit2
#define BRAKECHOPPER1WORKING_MC1_MSR1_BOOL                   receiveData[246-40] &bit3
#define MAINCONTACTOR1CLOSED_MC1_MSR1_BOOL                   receiveData[246-40] &bit4
#define MOTOR1SLIDE_MC1_MSR1_BOOL                            receiveData[246-40] &bit5
#define MOTOR1SLIP_MC1_MSR1_BOOL                             receiveData[246-40] &bit6
#define COOLINGFANOK_MC1_MSR1_BOOL                           receiveData[246-40] &bit7
#define SLIPFREQUENCY_MC1_MSR1_USINT                          receiveData[230-40]
#define STATORFREQUENCY_MC1_MSR1_USINT                        receiveData[231-40]
#define DYNACURRENT_TCU_MC1_MSR1_UINT                        receiveData[232-40]+receiveData[233-40]*256
#define OUTPUTVOLTAGE_TCU_MC1_MSR1_UINT                      receiveData[234-40]+receiveData[235-40]*256
#define INPUTVOLTAGE_TCU_MC1_MSR1_UINT                       receiveData[238-40]+receiveData[239-40]*256
#define OUTPUTFREQ_TCU_MC1_MSR1_USINT                       receiveData[247-40]
#define IFAULTREG1_TCU_MC1_MSR1                             receiveData[200]+receiveData[201]*256
#define IFAULTREG2_TCU_MC1_MSR1                             receiveData[202]+receiveData[203]*256


#define SAFETYBRAKE_MC1_MSR2_BOOL                            receiveData[254-40] &bit0
#define TRACTIONENABLE_MC1_MSR2_BOOL                         receiveData[254-40] &bit1
#define ALLFRICTIONBRAKESRELEASED_MC1_MSR2_BOOL              receiveData[254-40] &bit2
#define BRAKEOVERTAKE_MC1_MSR2_BOOL                          receiveData[254-40] &bit6
#define FORCEDBRAKE_MC1_MSR2_BOOL                            receiveData[254-40] &bit7
#define CHARGINGCONTACTORSTATE_MC1_MSR2_BOOL                 receiveData[255-40] &bit0
#define MAINCONTACTORSTATE_MC1_MSR2_BOOL                     receiveData[255-40] &bit1
#define VVVFSTATE_MC1_MSR2_BOOL                              receiveData[255-40] &bit2
#define DRIVEENABLE_MC1_MSR2_BOOL                            receiveData[255-40] &bit3
#define SANDINGRECOMMEND_MC1_MSR2_BOOL                       receiveData[255-40] &bit5
#define HARDWAREOVERVOLTAGE_MC1_MSR2_BOOL                    receiveData[255-40] &bit6
#define HARDWARELINEOVERCURRENT_MC1_MSR2_BOOL                receiveData[255-40] &bit7
#define TRACTIONINVERTER1WARNING_MC1_MSR2_BOOL               receiveData[264-40] &bit0
#define TRACTIONINVERTER1FAULT_MC1_MSR2_BOOL                 receiveData[264-40] &bit1
#define TRACTIONINVERTER1WORKING_MC1_MSR2_BOOL               receiveData[264-40] &bit2
#define BRAKECHOPPER1WORKING_MC1_MSR2_BOOL                   receiveData[264-40] &bit3
#define MAINCONTACTOR1CLOSED_MC1_MSR2_BOOL                   receiveData[264-40] &bit4
#define MOTOR1SLIDE_MC1_MSR2_BOOL                            receiveData[264-40] &bit5
#define MOTOR1SLIP_MC1_MSR2_BOOL                             receiveData[264-40] &bit6
#define COOLINGFANOK_MC1_MSR2_BOOL                           receiveData[264-40] &bit7
#define SLIPFREQUENCY_MC1_MSR2_USINT                          receiveData[248-40]
#define STATORFREQUENCY_MC1_MSR2_USINT                        receiveData[249-40]
#define DYNACURRENT_TCU_MC1_MSR2_UINT                        receiveData[250-40]+receiveData[251-40]*256
#define OUTPUTVOLTAGE_TCU_MC1_MSR2_UINT                      receiveData[252-40]+receiveData[253-40]*256
#define INPUTVOLTAGE_TCU_MC1_MSR2_UINT                       receiveData[256-40]+receiveData[257-40]*256
#define OUTPUTFREQ_TCU_MC1_MSR2_USINT                         receiveData[265-40]
#define IFAULTREG1_TCU_MC1_MSR2                             receiveData[218]+receiveData[219]*256
#define IFAULTREG2_TCU_MC1_MSR2                             receiveData[220]+receiveData[221]*256

#define SAFETYBRAKE_MC2_MSR1_BOOL                            receiveData[272-40] &bit0
#define TRACTIONENABLE_MC2_MSR1_BOOL                         receiveData[272-40] &bit1
#define ALLFRICTIONBRAKESRELEASED_MC2_MSR1_BOOL              receiveData[272-40] &bit2
#define BRAKEOVERTAKE_MC2_MSR1_BOOL                          receiveData[272-40] &bit6
#define FORCEDBRAKE_MC2_MSR1_BOOL                            receiveData[272-40] &bit7
#define CHARGINGCONTACTORSTATE_MC2_MSR1_BOOL                 receiveData[273-40] &bit0
#define MAINCONTACTORSTATE_MC2_MSR1_BOOL                     receiveData[273-40] &bit1
#define VVVFSTATE_MC2_MSR1_BOOL                              receiveData[273-40] &bit2
#define DRIVEENABLE_MC2_MSR1_BOOL                            receiveData[273-40] &bit3
#define SANDINGRECOMMEND_MC2_MSR1_BOOL                       receiveData[273-40] &bit5
#define HARDWAREOVERVOLTAGE_MC2_MSR1_BOOL                    receiveData[273-40] &bit6
#define HARDWARELINEOVERCURRENT_MC2_MSR1_BOOL                receiveData[273-40] &bit7
#define TRACTIONINVERTER1WARNING_MC2_MSR1_BOOL               receiveData[282-40] &bit0
#define TRACTIONINVERTER1FAULT_MC2_MSR1_BOOL                 receiveData[282-40] &bit1
#define TRACTIONINVERTER1WORKING_MC2_MSR1_BOOL               receiveData[282-40] &bit2
#define BRAKECHOPPER1WORKING_MC2_MSR1_BOOL                   receiveData[282-40] &bit3
#define MAINCONTACTOR1CLOSED_MC2_MSR1_BOOL                   receiveData[282-40] &bit4
#define MOTOR1SLIDE_MC2_MSR1_BOOL                            receiveData[282-40] &bit5
#define MOTOR1SLIP_MC2_MSR1_BOOL                             receiveData[282-40] &bit6
#define COOLINGFANOK_MC2_MSR1_BOOL                           receiveData[282-40] &bit7
#define SLIPFREQUENCY_MC2_MSR1_USINT                          receiveData[266-40]
#define STATORFREQUENCY_MC2_MSR1_USINT                        receiveData[267-40]
#define DYNACURRENT_TCU_MC2_MSR1_UINT                        receiveData[268-40]+receiveData[269-40]*256
#define OUTPUTVOLTAGE_TCU_MC2_MSR1_UINT                      receiveData[270-40]+receiveData[271-40]*256
#define INPUTVOLTAGE_TCU_MC2_MSR1_UINT                       receiveData[274-40]+receiveData[275-40]*256
#define OUTPUTFREQ_TCU_MC2_MSR1_USINT                         receiveData[283-40]
#define IFAULTREG1_TCU_MC2_MSR1                             receiveData[236]+receiveData[237]*256
#define IFAULTREG2_TCU_MC2_MSR1                             receiveData[238]+receiveData[239]*256


#define SAFETYBRAKE_MC2_MSR2_BOOL                            receiveData[290-40] &bit0
#define TRACTIONENABLE_MC2_MSR2_BOOL                         receiveData[290-40] &bit1
#define ALLFRICTIONBRAKESRELEASED_MC2_MSR2_BOOL              receiveData[290-40] &bit2
#define BRAKEOVERTAKE_MC2_MSR2_BOOL                          receiveData[290-40] &bit6
#define FORCEDBRAKE_MC2_MSR2_BOOL                            receiveData[290-40] &bit7
#define CHARGINGCONTACTORSTATE_MC2_MSR2_BOOL                 receiveData[291-40] &bit0
#define MAINCONTACTORSTATE_MC2_MSR2_BOOL                     receiveData[291-40] &bit1
#define VVVFSTATE_MC2_MSR2_BOOL                              receiveData[291-40] &bit2
#define DRIVEENABLE_MC2_MSR2_BOOL                            receiveData[291-40] &bit3
#define SANDINGRECOMMEND_MC2_MSR2_BOOL                       receiveData[291-40] &bit5
#define HARDWAREOVERVOLTAGE_MC2_MSR2_BOOL                    receiveData[291-40] &bit6
#define HARDWARELINEOVERCURRENT_MC2_MSR2_BOOL                receiveData[291-40] &bit7
#define TRACTIONINVERTER1WARNING_MC2_MSR2_BOOL               receiveData[300-40] &bit0
#define TRACTIONINVERTER1FAULT_MC2_MSR2_BOOL                 receiveData[300-40] &bit1
#define TRACTIONINVERTER1WORKING_MC2_MSR2_BOOL               receiveData[300-40] &bit2
#define BRAKECHOPPER1WORKING_MC2_MSR2_BOOL                   receiveData[300-40] &bit3
#define MAINCONTACTOR1CLOSED_MC2_MSR2_BOOL                   receiveData[300-40] &bit4
#define MOTOR1SLIDE_MC2_MSR2_BOOL                            receiveData[300-40] &bit5
#define MOTOR1SLIP_MC2_MSR2_BOOL                             receiveData[300-40] &bit6
#define COOLINGFANOK_MC2_MSR2_BOOL                           receiveData[300-40] &bit7
#define SLIPFREQUENCY_MC2_MSR2_USINT                          receiveData[284-40]
#define STATORFREQUENCY_MC2_MSR2_USINT                        receiveData[285-40]
#define DYNACURRENT_TCU_MC2_MSR2_UINT                        receiveData[286-40]+receiveData[287-40]*256
#define OUTPUTVOLTAGE_TCU_MC2_MSR2_UINT                      receiveData[288-40]+receiveData[289-40]*256
#define INPUTVOLTAGE_TCU_MC2_MSR2_UINT                       receiveData[292-40]+receiveData[293-40]*256
#define OUTPUTFREQ_TCU_MC2_MSR2_USINT                         receiveData[301-40]
#define IFAULTREG1_TCU_MC2_MSR2                             receiveData[254]+receiveData[255]*256
#define IFAULTREG2_TCU_MC2_MSR2                             receiveData[256]+receiveData[257]*256

#define NETCURRENT_TCU_MC1_MSR1_UINT                         receiveData[390] + receiveData[391]*256
#define NETCURRENT_TCU_MC1_MSR2_UINT                         receiveData[392] + receiveData[393]*256
#define NETCURRENT_TCU_MC2_MSR1_UINT                         receiveData[394] + receiveData[395]*256
#define NETCURRENT_TCU_MC2_MSR2_UINT                         receiveData[396] + receiveData[397]*256


//2014-4-22
//ACU
#define MODUL_OK_ACU_MC1_BOOL                                   receiveData[150] &bit0
#define MODUL_STOP_ACU_MC1_BOOL                                 receiveData[150] &bit1
#define MODUL_OK_BCC_MC1_BOOL                                   receiveData[159] &bit0
#define MODUL_STOP_BCC_MC1_BOOL                                 receiveData[159] &bit1
#define OUTPUTVOLTAGE_BCC_MC1_USINT                             receiveData[156]
#define CHARGINGCURRENT_BCC_MC1_USINT                           receiveData[157]
#define BATTTEMP_BCC_MC1_USINT                                  receiveData[158]
#define OUTPUTVOLTAGE_ACU_MC1_UINT                              receiveData[146]+ receiveData[147]*256
#define OUTPUTCURRENT_ACU_MC1_UINT                              receiveData[148]+ receiveData[149]*256
#define BATTCURRENT_BCC_MC1_UINT                                receiveData[160]+ receiveData[161]*256
#define ACU_IFAULTREG1_MC1_WORD                                 receiveData[152]+ receiveData[153]*256
#define ACU_IFAULTREG2_MC1_WORD                                 receiveData[154]+ receiveData[155]*256
#define BCC_IFAULTREG1_MC1_WORD                                 receiveData[164]+ receiveData[165]*256
#define BCC_IFAULTREG2_MC1_WORD                                 receiveData[166]+ receiveData[167]*256


#define MODUL_OK_ACU_MC2_BOOL                                   receiveData[172] &bit0
#define MODUL_STOP_ACU_MC2_BOOL                                 receiveData[172] &bit1
#define MODUL_OK_BCC_MC2_BOOL                                   receiveData[181] &bit0
#define MODUL_STOP_BCC_MC2_BOOL                                 receiveData[181] &bit1
#define OUTPUTVOLTAGE_BCC_MC2_USINT                             receiveData[178]
#define CHARGINGCURRENT_BCC_MC2_USINT                           receiveData[179]
#define BATTTEMP_BCC_MC2_USINT                                  receiveData[180]
#define OUTPUTVOLTAGE_ACU_MC2_UINT                              receiveData[168]+ receiveData[169]*256
#define OUTPUTCURRENT_ACU_MC2_UINT                              receiveData[170]+ receiveData[171]*256
#define BATTCURRENT_BCC_MC2_UINT                                receiveData[182]+ receiveData[183]*256
#define ACU_IFAULTREG1_MC2_WORD                                 receiveData[174]+ receiveData[175]*256
#define ACU_IFAULTREG2_MC2_WORD                                 receiveData[176]+ receiveData[177]*256
#define BCC_IFAULTREG1_MC2_WORD                                 receiveData[186]+ receiveData[187]*256
#define BCC_IFAULTREG2_MC2_WORD                                 receiveData[188]+ receiveData[189]*256

//2014-4-23
//add TBC_VCU DATA

#define MAIN_TCU1OK_TBC_BOOL                                    receiveData[366] &bit2
#define MAIN_TCU2OK_TBC_BOOL                                    receiveData[366] &bit3
#define MAIN_BCC1OK_TBC_BOOL                                    receiveData[366] &bit0
#define MAIN_BCC2OK_TBC_BOOL                                    receiveData[366] &bit1
#define MAIN_ACU1OK_TBC_BOOL                                    receiveData[366] &bit4
#define MAIN_ACU2OK_TBC_BOOL                                    receiveData[366] &bit5
#define MAIN_ACU1STOP_TBC_BOOL                                    receiveData[366] &bit6
#define MAIN_ACU2STOP_TBC_BOOL                                    receiveData[366] &bit7
#define MAIN_BCC1STOP_TBC_BOOL                                    receiveData[367] &bit0
#define MAIN_BCC2STOP_TBC_BOOL                                    receiveData[367] &bit1
#define MAIN_MC1FRICTIONBRAKEERR_TBC_BOOL                         receiveData[367] &bit2
#define MAIN_MC2FRICTIONBRAKEERR_TBC_BOOL                         receiveData[367] &bit3
#define MAIN_TPFRICTIONBRAKEERR_TBC_BOOL                          receiveData[367] &bit4
#define MAIN_MC1FRICTIONBRAKERELEASED_TBC_BOOL                    receiveData[367] &bit5
#define MAIN_MC2FRICTIONBRAKERELEASED_TBC_BOOL                    receiveData[367] &bit6
#define MAIN_TPFRICTIONBRAKERELEASED_TBC_BOOL                     receiveData[367] &bit7
#define MAIN_HSCB_ON_TBC_BOOL                                    receiveData[369] &bit0
#define MAIN_PANTO_UP_TBC_BOOL                                    receiveData[369] &bit1
#define MAIN_PANTO_DOWN_TBC_BOOL                                    receiveData[369] &bit2
///tbc
#define MAIN_TRAINCOUPLED_BOOL                                      receiveData[362] &bit2
#define MAIN_TRAINCOUPLEDMODE_BOOL                                  receiveData[362] &bit3


//2014-4-24
//tbc_door status
#define MAIN_CAR2DOOR1CLOSEDTX_TBC_BOOL                                    receiveData[263] &bit0
#define MAIN_CAR2DOOR1OPENEDTX_TBC_BOOL                                    receiveData[263] &bit1
#define MAIN_CAR2DOOR1EMERGENCYUNLOCKTX_TBC_BOOL                           receiveData[263] &bit2
#define MAIN_CAR2DOOR1ISOTX_TBC_BOOL                                       receiveData[263] &bit3
#define MAIN_CAR2DOOR2CLOSEDTX_TBC_BOOL                                    receiveData[263] &bit4
#define MAIN_CAR2DOOR2OPENEDTX_TBC_BOOL                                    receiveData[263] &bit5
#define MAIN_CAR2DOOR2EMERGENCYUNLOCKTX_TBC_BOOL                           receiveData[263] &bit6
#define MAIN_CAR2DOOR2ISOTX_TBC_BOOL                                       receiveData[263] &bit7
#define MAIN_CAR2DOOR3CLOSEDTX_TBC_BOOL                                    receiveData[264] &bit0
#define MAIN_CAR2DOOR3OPENEDTX_TBC_BOOL                                    receiveData[264] &bit1
#define MAIN_CAR2DOOR3EMERGENCYUNLOCKTX_TBC_BOOL                           receiveData[264] &bit2
#define MAIN_CAR2DOOR3ISOTX_TBC_BOOL                                       receiveData[264] &bit3
#define MAIN_CAR2DOOR4CLOSEDTX_TBC_BOOL                                    receiveData[264] &bit4
#define MAIN_CAR2DOOR4OPENEDTX_TBC_BOOL                                    receiveData[264] &bit5
#define MAIN_CAR2DOOR4EMERGENCYUNLOCKTX_TBC_BOOL                           receiveData[264] &bit6
#define MAIN_CAR2DOOR4ISOTX_TBC_BOOL                                       receiveData[264] &bit7
#define MAIN_CAR2DOOR5CLOSEDTX_TBC_BOOL                                    receiveData[269] &bit0
#define MAIN_CAR2DOOR5OPENEDTX_TBC_BOOL                                    receiveData[269] &bit1
#define MAIN_CAR2DOOR5EMERGENCYUNLOCKTX_TBC_BOOL                           receiveData[269] &bit2
#define MAIN_CAR2DOOR5ISOTX_TBC_BOOL                                       receiveData[269] &bit3
#define MAIN_CAR2DOOR6CLOSEDTX_TBC_BOOL                                    receiveData[269] &bit4
#define MAIN_CAR2DOOR6OPENEDTX_TBC_BOOL                                    receiveData[269] &bit5
#define MAIN_CAR2DOOR6EMERGENCYUNLOCKTX_TBC_BOOL                           receiveData[269] &bit6
#define MAIN_CAR2DOOR6ISOTX_TBC_BOOL                                       receiveData[269] &bit7
#define MAIN_CAR2DOOR7CLOSEDTX_TBC_BOOL                                    receiveData[270] &bit0
#define MAIN_CAR2DOOR7OPENEDTX_TBC_BOOL                                    receiveData[270] &bit1
#define MAIN_CAR2DOOR7EMERGENCYUNLOCKTX_TBC_BOOL                           receiveData[270] &bit2
#define MAIN_CAR2DOOR7ISOTX_TBC_BOOL                                       receiveData[270] &bit3
#define MAIN_CAR2DOOR8CLOSEDTX_TBC_BOOL                                    receiveData[270] &bit4
#define MAIN_CAR2DOOR8OPENEDTX_TBC_BOOL                                    receiveData[270] &bit5
#define MAIN_CAR2DOOR8EMERGENCYUNLOCKTX_TBC_BOOL                           receiveData[270] &bit6
#define MAIN_CAR2DOOR8ISOTX_TBC_BOOL                                       receiveData[270] &bit7

//bcu status

#define BCU_HW_BACKUPMODE_BOOL                                              receiveData[48] &bit0
#define BCU_BRAKERELEASED_CAN_BOOL                                          receiveData[48] &bit1
#define BCU_BRAKEAPPLIED_CAN_BOOL                                           receiveData[48] &bit2
#define BCU_HB_ON_CAN_BOOL                                                  receiveData[48] &bit3
#define BCU_WSP_TC_CAN_BOOL                                                 receiveData[48] &bit4
#define BCU_MAJOREVENT_CAN_BOOL                                             receiveData[48] &bit5
#define BCU_MINOREVENT_CAN_BOOL                                             receiveData[48] &bit6
#define BCU_LOAD_BYTE                                                       receiveData[49]
#define BCU_LOAD_SENSOR1_BYTE                                               receiveData[60]
#define BCU_LOAD_SENSOR2_BYTE                                               receiveData[61]
#define BCU_IDIAGNOSISREG1_WORD                                             receiveData[52]+receiveData[53]*256
#define BCU_IDIAGNOSISREG2_WORD                                             receiveData[54]+receiveData[55]*256
#define BCU_IDIAGNOSISREG3_WORD                                             receiveData[56]+receiveData[57]*256
#define BCU_IDIAGNOSISREG4_WORD                                             receiveData[58]+receiveData[59]*256

//2014-4-24 door status
#define DOOR1_ZREOSPEEDTX_BOOL                                               receiveData[62] &bit0
#define DOOR1_CLOSETX_BOOL                                               receiveData[62] &bit1
#define DOOR1_REOPENTX_BOOL                                               receiveData[62] &bit2
#define DOOR1_OPENTX_BOOL                                               receiveData[62] &bit3
#define DOOR1_CLOSEDTX_BOOL                                               receiveData[62] &bit4
#define DOOR1_OPENEDTX_BOOL                                               receiveData[62] &bit5
#define DOOR1_EMERGENCYUNLOCKTX_BOOL                                               receiveData[62] &bit6
#define DOOR1_ISOTX_BOOL                                               receiveData[62] &bit7

#define DOOR1_OBSTRUCTETX_BOOL                                               receiveData[63] &bit0
#define DOOR1_MAINTENANCEPUSHBUTTONTX_BOOL                                               receiveData[63] &bit1
#define DOOR1_SAFELOOPOUTPUTTX_BOOL                                               receiveData[63] &bit2
#define DOOR1_SAFELOOPINPUTTX_BOOL                                               receiveData[63] &bit3

#define DOOR1_DYNAMOERRTX_BOOL                                               receiveData[64] &bit0
#define DOOR1_LOCKSWERRTX_BOOL                                               receiveData[64] &bit1
#define DOOR1_CLOSESWERRTX_BOOL                                               receiveData[64] &bit2
#define DOOR1_UNLOCK3SERRTX_BOOL                                               receiveData[64] &bit3
#define DOOR1_POSITIONSENSERERRTX_BOOL                                               receiveData[64] &bit4
#define DOOR1_CLOSETIMESERRTX_BOOL                                               receiveData[64] &bit5
#define DOOR1_OPENTIMESERRTX_BOOL                                               receiveData[64] &bit6
#define DOOR1_SAFERELAYERRTX_BOOL                                               receiveData[64] &bit7

#define DOOR1_NOOPENCMDERRTX_BOOL                                               receiveData[65] &bit0
#define DOOR1_BELOCKERRTX_BOOL                                               receiveData[65] &bit1
#define DOOR1_SAFELOOPERRTX_BOOL                                               receiveData[65] &bit2
#define DOOR1_O0SHORTERRTX_BOOL                                               receiveData[65] &bit3
#define DOOR1_O1SHORTERRTX_BOOL                                               receiveData[65] &bit4
#define DOOR1_O2SHORTERRTX_BOOL                                               receiveData[65] &bit5
#define DOOR1_O3SHORTERRTX_BOOL                                               receiveData[65] &bit6
//#define DOOR_SAFERELAYERRTX_BOOL                                               receiveData[65] &bit7

//CAR2DOOR
#define DOOR2_ZREOSPEEDTX_BOOL                                               receiveData[68] &bit0
#define DOOR2_CLOSETX_BOOL                                                   receiveData[68] &bit1
#define DOOR2_REOPENTX_BOOL                                                  receiveData[68] &bit2
#define DOOR2_OPENTX_BOOL                                                    receiveData[68] &bit3
#define DOOR2_CLOSEDTX_BOOL                                                  receiveData[68] &bit4
#define DOOR2_OPENEDTX_BOOL                                                  receiveData[68] &bit5
#define DOOR2_EMERGENCYUNLOCKTX_BOOL                                         receiveData[68] &bit6
#define DOOR2_ISOTX_BOOL                                                     receiveData[68] &bit7

#define DOOR2_OBSTRUCTETX_BOOL                                               receiveData[69] &bit0
#define DOOR2_MAINTENANCEPUSHBUTTONTX_BOOL                                   receiveData[69] &bit1
#define DOOR2_SAFELOOPOUTPUTTX_BOOL                                          receiveData[69] &bit2
#define DOOR2_SAFELOOPINPUTTX_BOOL                                           receiveData[69] &bit3

#define DOOR2_DYNAMOERRTX_BOOL                                               receiveData[70] &bit0
#define DOOR2_LOCKSWERRTX_BOOL                                               receiveData[70] &bit1
#define DOOR2_CLOSESWERRTX_BOOL                                              receiveData[70] &bit2
#define DOOR2_UNLOCK3SERRTX_BOOL                                             receiveData[70] &bit3
#define DOOR2_POSITIONSENSERERRTX_BOOL                                       receiveData[70] &bit4
#define DOOR2_CLOSETIMESERRTX_BOOL                                           receiveData[70] &bit5
#define DOOR2_OPENTIMESERRTX_BOOL                                            receiveData[70] &bit6
#define DOOR2_SAFERELAYERRTX_BOOL                                            receiveData[70] &bit7

#define DOOR2_NOOPENCMDERRTX_BOOL                                            receiveData[71] &bit0
#define DOOR2_BELOCKERRTX_BOOL                                               receiveData[71] &bit1
#define DOOR2_SAFELOOPERRTX_BOOL                                             receiveData[71] &bit2
#define DOOR2_O0SHORTERRTX_BOOL                                              receiveData[71] &bit3
#define DOOR2_O1SHORTERRTX_BOOL                                              receiveData[71] &bit4
#define DOOR2_O2SHORTERRTX_BOOL                                              receiveData[71] &bit5
#define DOOR2_O3SHORTERRTX_BOOL                                              receiveData[71] &bit6
//CAR3DOOR
#define DOOR3_ZREOSPEEDTX_BOOL                                               receiveData[74] &bit0
#define DOOR3_CLOSETX_BOOL                                                   receiveData[74] &bit1
#define DOOR3_REOPENTX_BOOL                                                  receiveData[74] &bit2
#define DOOR3_OPENTX_BOOL                                                    receiveData[74] &bit3
#define DOOR3_CLOSEDTX_BOOL                                                  receiveData[74] &bit4
#define DOOR3_OPENEDTX_BOOL                                                  receiveData[74] &bit5
#define DOOR3_EMERGENCYUNLOCKTX_BOOL                                         receiveData[74] &bit6
#define DOOR3_ISOTX_BOOL                                                     receiveData[74] &bit7

#define DOOR3_OBSTRUCTETX_BOOL                                               receiveData[75] &bit0
#define DOOR3_MAINTENANCEPUSHBUTTONTX_BOOL                                   receiveData[75] &bit1
#define DOOR3_SAFELOOPOUTPUTTX_BOOL                                          receiveData[75] &bit2
#define DOOR3_SAFELOOPINPUTTX_BOOL                                           receiveData[75] &bit3

#define DOOR3_DYNAMOERRTX_BOOL                                               receiveData[76] &bit0
#define DOOR3_LOCKSWERRTX_BOOL                                               receiveData[76] &bit1
#define DOOR3_CLOSESWERRTX_BOOL                                              receiveData[76] &bit2
#define DOOR3_UNLOCK3SERRTX_BOOL                                             receiveData[76] &bit3
#define DOOR3_POSITIONSENSERERRTX_BOOL                                       receiveData[76] &bit4
#define DOOR3_CLOSETIMESERRTX_BOOL                                           receiveData[76] &bit5
#define DOOR3_OPENTIMESERRTX_BOOL                                            receiveData[76] &bit6
#define DOOR3_SAFERELAYERRTX_BOOL                                            receiveData[76] &bit7

#define DOOR3_NOOPENCMDERRTX_BOOL                                            receiveData[77] &bit0
#define DOOR3_BELOCKERRTX_BOOL                                               receiveData[77] &bit1
#define DOOR3_SAFELOOPERRTX_BOOL                                             receiveData[77] &bit2
#define DOOR3_O0SHORTERRTX_BOOL                                              receiveData[77] &bit3
#define DOOR3_O1SHORTERRTX_BOOL                                              receiveData[77] &bit4
#define DOOR3_O2SHORTERRTX_BOOL                                              receiveData[77] &bit5
#define DOOR3_O3SHORTERRTX_BOOL                                              receiveData[77] &bit6

//CAR4DOOR
#define DOOR4_ZREOSPEEDTX_BOOL                                               receiveData[80] &bit0
#define DOOR4_CLOSETX_BOOL                                                   receiveData[80] &bit1
#define DOOR4_REOPENTX_BOOL                                                  receiveData[80] &bit2
#define DOOR4_OPENTX_BOOL                                                    receiveData[80] &bit3
#define DOOR4_CLOSEDTX_BOOL                                                  receiveData[80] &bit4
#define DOOR4_OPENEDTX_BOOL                                                  receiveData[80] &bit5
#define DOOR4_EMERGENCYUNLOCKTX_BOOL                                         receiveData[80] &bit6
#define DOOR4_ISOTX_BOOL                                                     receiveData[80] &bit7

#define DOOR4_OBSTRUCTETX_BOOL                                               receiveData[81] &bit0
#define DOOR4_MAINTENANCEPUSHBUTTONTX_BOOL                                   receiveData[81] &bit1
#define DOOR4_SAFELOOPOUTPUTTX_BOOL                                          receiveData[81] &bit2
#define DOOR4_SAFELOOPINPUTTX_BOOL                                           receiveData[81] &bit3

#define DOOR4_DYNAMOERRTX_BOOL                                               receiveData[82] &bit0
#define DOOR4_LOCKSWERRTX_BOOL                                               receiveData[82] &bit1
#define DOOR4_CLOSESWERRTX_BOOL                                              receiveData[82] &bit2
#define DOOR4_UNLOCK3SERRTX_BOOL                                             receiveData[82] &bit3
#define DOOR4_POSITIONSENSERERRTX_BOOL                                       receiveData[82] &bit4
#define DOOR4_CLOSETIMESERRTX_BOOL                                           receiveData[82] &bit5
#define DOOR4_OPENTIMESERRTX_BOOL                                            receiveData[82] &bit6
#define DOOR4_SAFERELAYERRTX_BOOL                                            receiveData[82] &bit7

#define DOOR4_NOOPENCMDERRTX_BOOL                                            receiveData[83] &bit0
#define DOOR4_BELOCKERRTX_BOOL                                               receiveData[83] &bit1
#define DOOR4_SAFELOOPERRTX_BOOL                                             receiveData[83] &bit2
#define DOOR4_O0SHORTERRTX_BOOL                                              receiveData[83] &bit3
#define DOOR4_O1SHORTERRTX_BOOL                                              receiveData[83] &bit4
#define DOOR4_O2SHORTERRTX_BOOL                                              receiveData[83] &bit5
#define DOOR4_O3SHORTERRTX_BOOL                                              receiveData[83] &bit6

//CAR5DOOR
#define DOOR5_ZREOSPEEDTX_BOOL                                               receiveData[86] &bit0
#define DOOR5_CLOSETX_BOOL                                                   receiveData[86] &bit1
#define DOOR5_REOPENTX_BOOL                                                  receiveData[86] &bit2
#define DOOR5_OPENTX_BOOL                                                    receiveData[86] &bit3
#define DOOR5_CLOSEDTX_BOOL                                                  receiveData[86] &bit4
#define DOOR5_OPENEDTX_BOOL                                                  receiveData[86] &bit5
#define DOOR5_EMERGENCYUNLOCKTX_BOOL                                         receiveData[86] &bit6
#define DOOR5_ISOTX_BOOL                                                     receiveData[86] &bit7

#define DOOR5_OBSTRUCTETX_BOOL                                               receiveData[87] &bit0
#define DOOR5_MAINTENANCEPUSHBUTTONTX_BOOL                                   receiveData[87] &bit1
#define DOOR5_SAFELOOPOUTPUTTX_BOOL                                          receiveData[87] &bit2
#define DOOR5_SAFELOOPINPUTTX_BOOL                                           receiveData[87] &bit3

#define DOOR5_DYNAMOERRTX_BOOL                                               receiveData[88] &bit0
#define DOOR5_LOCKSWERRTX_BOOL                                               receiveData[88] &bit1
#define DOOR5_CLOSESWERRTX_BOOL                                              receiveData[88] &bit2
#define DOOR5_UNLOCK3SERRTX_BOOL                                             receiveData[88] &bit3
#define DOOR5_POSITIONSENSERERRTX_BOOL                                       receiveData[88] &bit4
#define DOOR5_CLOSETIMESERRTX_BOOL                                           receiveData[88] &bit5
#define DOOR5_OPENTIMESERRTX_BOOL                                            receiveData[88] &bit6
#define DOOR5_SAFERELAYERRTX_BOOL                                            receiveData[88] &bit7

#define DOOR5_NOOPENCMDERRTX_BOOL                                            receiveData[89] &bit0
#define DOOR5_BELOCKERRTX_BOOL                                               receiveData[89] &bit1
#define DOOR5_SAFELOOPERRTX_BOOL                                             receiveData[89] &bit2
#define DOOR5_O0SHORTERRTX_BOOL                                              receiveData[89] &bit3
#define DOOR5_O1SHORTERRTX_BOOL                                              receiveData[89] &bit4
#define DOOR5_O2SHORTERRTX_BOOL                                              receiveData[89] &bit5
#define DOOR5_O3SHORTERRTX_BOOL                                              receiveData[89] &bit6

//CAR6DOOR
#define DOOR6_ZREOSPEEDTX_BOOL                                               receiveData[92] &bit0
#define DOOR6_CLOSETX_BOOL                                                   receiveData[92] &bit1
#define DOOR6_REOPENTX_BOOL                                                  receiveData[92] &bit2
#define DOOR6_OPENTX_BOOL                                                    receiveData[92] &bit3
#define DOOR6_CLOSEDTX_BOOL                                                  receiveData[92] &bit4
#define DOOR6_OPENEDTX_BOOL                                                  receiveData[92] &bit5
#define DOOR6_EMERGENCYUNLOCKTX_BOOL                                         receiveData[92] &bit6
#define DOOR6_ISOTX_BOOL                                                     receiveData[92] &bit7

#define DOOR6_OBSTRUCTETX_BOOL                                               receiveData[93] &bit0
#define DOOR6_MAINTENANCEPUSHBUTTONTX_BOOL                                   receiveData[93] &bit1
#define DOOR6_SAFELOOPOUTPUTTX_BOOL                                          receiveData[93] &bit2
#define DOOR6_SAFELOOPINPUTTX_BOOL                                           receiveData[93] &bit3

#define DOOR6_DYNAMOERRTX_BOOL                                               receiveData[94] &bit0
#define DOOR6_LOCKSWERRTX_BOOL                                               receiveData[94] &bit1
#define DOOR6_CLOSESWERRTX_BOOL                                              receiveData[94] &bit2
#define DOOR6_UNLOCK3SERRTX_BOOL                                             receiveData[94] &bit3
#define DOOR6_POSITIONSENSERERRTX_BOOL                                       receiveData[94] &bit4
#define DOOR6_CLOSETIMESERRTX_BOOL                                           receiveData[94] &bit5
#define DOOR6_OPENTIMESERRTX_BOOL                                            receiveData[94] &bit6
#define DOOR6_SAFERELAYERRTX_BOOL                                            receiveData[94] &bit7

#define DOOR6_NOOPENCMDERRTX_BOOL                                            receiveData[95] &bit0
#define DOOR6_BELOCKERRTX_BOOL                                               receiveData[95] &bit1
#define DOOR6_SAFELOOPERRTX_BOOL                                             receiveData[95] &bit2
#define DOOR6_O0SHORTERRTX_BOOL                                              receiveData[95] &bit3
#define DOOR6_O1SHORTERRTX_BOOL                                              receiveData[95] &bit4
#define DOOR6_O2SHORTERRTX_BOOL                                              receiveData[95] &bit5
#define DOOR6_O3SHORTERRTX_BOOL                                              receiveData[95] &bit6

//CAR7DOOR
#define DOOR7_ZREOSPEEDTX_BOOL                                               receiveData[98] &bit0
#define DOOR7_CLOSETX_BOOL                                                   receiveData[98] &bit1
#define DOOR7_REOPENTX_BOOL                                                  receiveData[98] &bit2
#define DOOR7_OPENTX_BOOL                                                    receiveData[98] &bit3
#define DOOR7_CLOSEDTX_BOOL                                                  receiveData[98] &bit4
#define DOOR7_OPENEDTX_BOOL                                                  receiveData[98] &bit5
#define DOOR7_EMERGENCYUNLOCKTX_BOOL                                         receiveData[98] &bit6
#define DOOR7_ISOTX_BOOL                                                     receiveData[98] &bit7

#define DOOR7_OBSTRUCTETX_BOOL                                               receiveData[99] &bit0
#define DOOR7_MAINTENANCEPUSHBUTTONTX_BOOL                                   receiveData[99] &bit1
#define DOOR7_SAFELOOPOUTPUTTX_BOOL                                          receiveData[99] &bit2
#define DOOR7_SAFELOOPINPUTTX_BOOL                                           receiveData[99] &bit3

#define DOOR7_DYNAMOERRTX_BOOL                                               receiveData[100] &bit0
#define DOOR7_LOCKSWERRTX_BOOL                                               receiveData[100] &bit1
#define DOOR7_CLOSESWERRTX_BOOL                                              receiveData[100] &bit2
#define DOOR7_UNLOCK3SERRTX_BOOL                                             receiveData[100] &bit3
#define DOOR7_POSITIONSENSERERRTX_BOOL                                       receiveData[100] &bit4
#define DOOR7_CLOSETIMESERRTX_BOOL                                           receiveData[100] &bit5
#define DOOR7_OPENTIMESERRTX_BOOL                                            receiveData[100] &bit6
#define DOOR7_SAFERELAYERRTX_BOOL                                            receiveData[100] &bit7

#define DOOR7_NOOPENCMDERRTX_BOOL                                            receiveData[101] &bit0
#define DOOR7_BELOCKERRTX_BOOL                                               receiveData[101] &bit1
#define DOOR7_SAFELOOPERRTX_BOOL                                             receiveData[101] &bit2
#define DOOR7_O0SHORTERRTX_BOOL                                              receiveData[101] &bit3
#define DOOR7_O1SHORTERRTX_BOOL                                              receiveData[101] &bit4
#define DOOR7_O2SHORTERRTX_BOOL                                              receiveData[101] &bit5
#define DOOR7_O3SHORTERRTX_BOOL                                              receiveData[101] &bit6

//CAR8DOOR
#define DOOR8_ZREOSPEEDTX_BOOL                                               receiveData[104] &bit0
#define DOOR8_CLOSETX_BOOL                                                   receiveData[104] &bit1
#define DOOR8_REOPENTX_BOOL                                                  receiveData[104] &bit2
#define DOOR8_OPENTX_BOOL                                                    receiveData[104] &bit3
#define DOOR8_CLOSEDTX_BOOL                                                  receiveData[104] &bit4
#define DOOR8_OPENEDTX_BOOL                                                  receiveData[104] &bit5
#define DOOR8_EMERGENCYUNLOCKTX_BOOL                                         receiveData[104] &bit6
#define DOOR8_ISOTX_BOOL                                                     receiveData[104] &bit7

#define DOOR8_OBSTRUCTETX_BOOL                                               receiveData[105] &bit0
#define DOOR8_MAINTENANCEPUSHBUTTONTX_BOOL                                   receiveData[105] &bit1
#define DOOR8_SAFELOOPOUTPUTTX_BOOL                                          receiveData[105] &bit2
#define DOOR8_SAFELOOPINPUTTX_BOOL                                           receiveData[105] &bit3

#define DOOR8_DYNAMOERRTX_BOOL                                               receiveData[106] &bit0
#define DOOR8_LOCKSWERRTX_BOOL                                               receiveData[106] &bit1
#define DOOR8_CLOSESWERRTX_BOOL                                              receiveData[106] &bit2
#define DOOR8_UNLOCK3SERRTX_BOOL                                             receiveData[106] &bit3
#define DOOR8_POSITIONSENSERERRTX_BOOL                                       receiveData[106] &bit4
#define DOOR8_CLOSETIMESERRTX_BOOL                                           receiveData[106] &bit5
#define DOOR8_OPENTIMESERRTX_BOOL                                            receiveData[106] &bit6
#define DOOR8_SAFERELAYERRTX_BOOL                                            receiveData[106] &bit7

#define DOOR8_NOOPENCMDERRTX_BOOL                                            receiveData[107] &bit0
#define DOOR8_BELOCKERRTX_BOOL                                               receiveData[107] &bit1
#define DOOR8_SAFELOOPERRTX_BOOL                                             receiveData[107] &bit2
#define DOOR8_O0SHORTERRTX_BOOL                                              receiveData[107] &bit3
#define DOOR8_O1SHORTERRTX_BOOL                                              receiveData[107] &bit4
#define DOOR8_O2SHORTERRTX_BOOL                                              receiveData[107] &bit5
#define DOOR8_O3SHORTERRTX_BOOL                                              receiveData[107] &bit6
//ADD BCC_VCU STATUS
#define MAIN_BCC1_OK_BOOL                                           receiveData[364] &bit0
#define MAIN_BCC2_OK_BOOL                                           receiveData[364] &bit1
#define MAIN_BCC1_STOP_BOOL                                           receiveData[365] &bit0
#define MAIN_BCC2_STOP_BOOL                                           receiveData[365] &bit1
#define MAIN_BCC1_OK_TBC_BOOL                                           receiveData[366] &bit0
#define MAIN_BCC2_OK_TBC_BOOL                                           receiveData[366] &bit1
#define MAIN_BCC1_STOP_TBC_BOOL                                           receiveData[367] &bit0
#define MAIN_BCC2_STOP_TBC_BOOL                                           receiveData[367] &bit1
#define MAIN_PANTO_UP_TBC_BOOL                                           receiveData[369] &bit1
#define MAIN_PANTO_DOWN_TBC_BOOL                                           receiveData[369] &bit2

//add netstate_tbc
///////////////////////////////
#define NET_MC1_RIOMONLINESTATE_BOOL_TBC                   receiveData[384] & bit0
#define NET_MC2_RIOMONLINESTATE_BOOL_TBC                   receiveData[384] & bit1
#define NET_MC1_TCUONLINE_BOOL_TBC                         receiveData[384] & bit2
#define NET_MC2_TCUONLINE_BOOL_TBC                         receiveData[384] & bit3
#define NET_MC1_ACUONLINE_BOOL_TBC                         receiveData[384] & bit4
#define NET_MC2_ACUONLINE_BOOL_TBC                         receiveData[384] & bit5

#define NET_MC1_DOOR1ONLINE_BOOL_TBC                       receiveData[384] & bit6
#define NET_MC1_DOOR2ONLINE_BOOL_TBC                       receiveData[384] & bit7
#define NET_MC1_DOOR3ONLINE_BOOL_TBC                       receiveData[385] & bit0
#define NET_MC1_DOOR4ONLINE_BOOL_TBC                       receiveData[385] & bit1
#define NET_MC2_DOOR5ONLINE_BOOL_TBC                       receiveData[385] & bit2
#define NET_MC2_DOOR6ONLINE_BOOL_TBC                       receiveData[385] & bit3
#define NET_MC2_DOOR7ONLINE_BOOL_TBC                       receiveData[385] & bit4
#define NET_MC2_DOOR8ONLINE_BOOL_TBC                       receiveData[385] & bit5

#define NET_MC1_HVACONLINE_BOOL_TBC                        receiveData[385] & bit6
#define NET_MC2_HVACONLINE_BOOL_TBC                        receiveData[385] & bit7
#define NET_PISONLINE_BOOL_TBC                             receiveData[386] & bit0
#define NET_PISONLINE2_BOOL_TBC                            receiveData[386] & bit1
//#define NET_MC1_DCDCONLINE_BOOL_TBC                        receiveData[386] & bit3
//#define NET_MC2_DCDCONLINE_BOOL_TBC                        receiveData[386] & bit4
#define NET_BCUONLINE_BOOL_TBC                             receiveData[386] & bit2



#define NET_MC1_RIOM1_DI1ONLINE_BOOL_TBC                     receiveData[386] & bit3
#define NET_MC1_RIOM1_DI2ONLINE_BOOL_TBC                       receiveData[386] & bit4
#define NET_MC1_RIOM1_SGNONLINE_BOOL_TBC                       receiveData[386] & bit5
#define NET_MC1_RIOM1_AXONLINE_BOOL_TBC                        receiveData[386] & bit6
#define NET_MC1_RIOM1_DO1ONLINE_BOOL_TBC                      receiveData[386] & bit7

#define NET_MC1_RIOM1_DO2ONLINE_BOOL_TBC                     receiveData[387] & bit0
#define NET_MC2_RIOM2_DI1ONLINE_BOOL_TBC                       receiveData[387] & bit1
#define NET_MC2_RIOM2_DI2ONLINE_BOOL_TBC                       receiveData[387] & bit2
#define NET_MC2_RIOM2_SGNONLINE_BOOL_TBC                       receiveData[387] & bit3
#define NET_MC2_RIOM2_AXONLINE_BOOL_TBC                        receiveData[387] & bit4
#define NET_MC2_RIOM2_DO1ONLINE_BOOL_TBC                      receiveData[387] & bit5
#define NET_MC2_RIOM2_DO2ONLINE_BOOL_TBC                     receiveData[387] & bit6

#define NET_MC1_ATCONLINE_BOOL_TBC                       receiveData[388] & bit3
#define NET_MC2_ATCONLINE_BOOL_TBC                       receiveData[388] & bit4
#define NET_MC1_TicketONLINE_BOOL_TBC                    receiveData[388] & bit5
#define NET_MC2_TicketONLINE_BOOL_TBC                    receiveData[388] & bit6
#define NET_MC1_VCU_BOOL_TBC                    receiveData[388] & bit7
#define NET_MC2_VCU_BOOL_TBC                    receiveData[389] & bit0

#define CAN_OK_MC1_ACU_BOOL_TBC                    receiveData[387] & bit7
#define CAN_OK_MC2_ACU_BOOL_TBC                    receiveData[388] & bit0
#define CAN_OK_MC1_TCU_BOOL_TBC                    receiveData[388] & bit1
#define CAN_OK_MC2_TCU_BOOL_TBC                    receiveData[388] & bit2


#define MAIN_MC1_HMI_BOOL_TBC                              receiveData[389] & bit1
#define MAIN_MC2_HMI_BOOL_TBC                              receiveData[389] & bit2

//2014-4-28
//add hvac state
#define HVAC_MC1_EVAPRAORFANSTATUS_BOOL                    receiveData[110] & bit0
#define HVAC_MC1_CONDENSERFANSTATUS_BOOL                    receiveData[110] & bit1
#define HVAC_MC1_COMPRESSOR1STATUS_BOOL                    receiveData[110] & bit2
#define HVAC_MC1_HEATER1STATUS_BOOL                    receiveData[110] & bit3
#define HVAC_MC1_COMPRESSOR2STATUS_BOOL                    receiveData[110] & bit6
#define HVAC_MC1_HEATER2STATUS_BOOL                    receiveData[110] & bit7
#define HVAC_MC1_AUTOWARMMODE_BOOL                    receiveData[111] & bit0
#define HVAC_MC1_AUTOCOLDMODE_BOOL                    receiveData[111] & bit1
#define HVAC_MC1_VENTILATIONMODE_BOOL                    receiveData[111] & bit2
#define HVAC_MC1_EMERGENCYVENTILATIONMODE_BOOL                    receiveData[111] & bit3
#define HVAC_MC1_STOPMODE_BOOL                    receiveData[111] & bit4
#define HVAC_MC1_REDUCELOADFBMODE_BOOL                    receiveData[111] & bit5
#define HVAC_MC1_PRECOLD_BOOL                    receiveData[111] & bit6
#define HVAC_MC1_PREWARM_BOOL                    receiveData[111] & bit7
#define HVAC_MC1_FRESHAIRDAMPERSTATUS_BOOL                    receiveData[112] & bit0
#define HVAC_MC1_RETURNAIRDAMPERSTATUS_BOOL                    receiveData[112] & bit1
#define HVAC_MC1_HALFCOLDMODE_BOOL                    receiveData[112] & bit4
#define HVAC_MC1_FULLCOLDMODE_BOOL                    receiveData[112] & bit5
#define HVAC_MC1_HALFWARMMODE_BOOL                    receiveData[112] & bit6
#define HVAC_MC1_FULLWARMMODE_BOOL                    receiveData[112] & bit7
#define HVAC_MC1_TEMPOUTSIDE_BYTE                    receiveData[116]
#define HVAC_MC1_TEMPINSIDE_BYTE                     receiveData[117]

#define HVAC_MC2_EVAPRAORFANSTATUS_BOOL                    receiveData[120] & bit0
#define HVAC_MC2_CONDENSERFANSTATUS_BOOL                    receiveData[120] & bit1
#define HVAC_MC2_COMPRESSOR1STATUS_BOOL                    receiveData[120] & bit2
#define HVAC_MC2_HEATER1STATUS_BOOL                    receiveData[120] & bit3
#define HVAC_MC2_COMPRESSOR2STATUS_BOOL                    receiveData[120] & bit6
#define HVAC_MC2_HEATER2STATUS_BOOL                    receiveData[120] & bit7
#define HVAC_MC2_AUTOWARMMODE_BOOL                    receiveData[121] & bit0
#define HVAC_MC2_AUTOCOLDMODE_BOOL                    receiveData[121] & bit1
#define HVAC_MC2_VENTILATIONMODE_BOOL                    receiveData[121] & bit2
#define HVAC_MC2_EMERGENCYVENTILATIONMODE_BOOL                    receiveData[121] & bit3
#define HVAC_MC2_STOPMODE_BOOL                    receiveData[121] & bit4
#define HVAC_MC2_REDUCELOADFBMODE_BOOL                    receiveData[121] & bit5
#define HVAC_MC2_PRECOLD_BOOL                    receiveData[121] & bit6
#define HVAC_MC2_PREWARM_BOOL                    receiveData[121] & bit7
#define HVAC_MC2_FRESHAIRDAMPERSTATUS_BOOL                    receiveData[122] & bit0
#define HVAC_MC2_RETURNAIRDAMPERSTATUS_BOOL                    receiveData[122] & bit1
#define HVAC_MC2_HALFCOLDMODE_BOOL                    receiveData[122] & bit4
#define HVAC_MC2_FULLCOLDMODE_BOOL                    receiveData[122] & bit5
#define HVAC_MC2_HALFWARMMODE_BOOL                    receiveData[122] & bit6
#define HVAC_MC2_FULLWARMMODE_BOOL                    receiveData[122] & bit7
#define HVAC_MC2_TEMPOUTSIDE_BYTE                    receiveData[126]
#define HVAC_MC2_TEMPINSIDE_BYTE                     receiveData[127]

//2014-4-29 vision
//
#define VISION_VCU_UINT                     receiveData[348]+receiveData[349]*256
#define VISION_BCU_UINT                     receiveData[50]+receiveData[51]*256
//#define VISION_HMI_UINT                     receiveData[50]+receiveData[51]*256///UN
#define VISION_MC1_PIS_UINT                     receiveData[136]+receiveData[137]*256
#define VISION_MC2_PIS_UINT                     receiveData[144]+receiveData[145]*256
#define VISION_MC1_ACU_BYTE                     receiveData[151]
#define VISION_MC2_ACU_BYTE                     receiveData[171]
#define VISION_MC1_HVAC_UINT                     receiveData[118]+receiveData[119]*256
#define VISION_MC2_HVAC_UINT                     receiveData[128]+receiveData[129]*256
#define VISION_DOOR1_UINT                     receiveData[66]+receiveData[67]*256
#define VISION_DOOR2_UINT                     receiveData[72]+receiveData[73]*256
#define VISION_DOOR3_UINT                     receiveData[78]+receiveData[79]*256
#define VISION_DOOR4_UINT                     receiveData[84]+receiveData[85]*256
#define VISION_DOOR5_UINT                     receiveData[90]+receiveData[91]*256
#define VISION_DOOR6_UINT                     receiveData[96]+receiveData[97]*256
#define VISION_DOOR7_UINT                     receiveData[102]+receiveData[103]*256
#define VISION_DOOR8_UINT                     receiveData[108]+receiveData[109]*256
#define VISION_MC1_BCC_BYTE                     receiveData[163]
#define VISION_MC2_BCC_BYTE                     receiveData[185]
#define VISION_MC1_MSR1_TCU_BYTE                     receiveData[205]
#define VISION_MC1_MSR2_TCU_BYTE                     receiveData[223]
#define VISION_MC2_MSR1_TCU_BYTE                     receiveData[241]
#define VISION_MC2_MSR2_TCU_BYTE                     receiveData[259]
#define VISION_RIOM1_DIM_BYTE                     receiveData[19]
#define VISION_RIOM1_DOM_BYTE                     receiveData[20]
#define VISION_RIOM1_AIOM_BYTE                     receiveData[21]
#define VISION_RIOM2_DIM_BYTE                     receiveData[43]
#define VISION_RIOM2_DOM_BYTE                     receiveData[44]
#define VISION_RIOM2_AIOM_BYTE                     receiveData[45]

//2014-5-6 ADD COUPLED DATASTREAM
#define ACU_MC1_OUTPUTVOLTAGE_UINT_TBC                  receiveData[282]+receiveData[283]*256
#define ACU_MC1_OUTPUTCURRENT_UINT_TBC                  receiveData[282]+receiveData[283]*256
#define BCC_MC1_OUTPUTVOLTAGE_USINT_TBC                  receiveData[294]
#define BCC_MC1_CHARGINGCURRENT_USINT_TBC               receiveData[295]
#define BCC_MC1_BATTERYTEMP_USINT_TBC                   receiveData[296]

#define ACU_MC2_OUTPUTVOLTAGE_UINT_TBC                  receiveData[288]+receiveData[289]*256
#define ACU_MC2_OUTPUTCURRENT_UINT_TBC                  receiveData[290]+receiveData[291]*256
#define BCC_MC2_OUTPUTVOLTAGE_USINT_TBC                  receiveData[297]
#define BCC_MC2_CHARGINGCURRENT_USINT_TBC               receiveData[298]
#define BCC_MC2_BATTERYTEMP_USINT_TBC                   receiveData[299]

#define ACU_MC1_IFAULTREG_WORD_TBC                  receiveData[286]+receiveData[287]*256
#define ACU_MC2_IFAULTREG_WORD_TBC                  receiveData[292]+receiveData[293]*256
#define BCC_MC1_IFAULTREG1_WORD_TBC                  receiveData[300]+receiveData[301]*256
#define BCC_MC1_IFAULTREG2_WORD_TBC                  receiveData[302]+receiveData[303]*256
#define BCC_MC2_IFAULTREG1_WORD_TBC                  receiveData[304]+receiveData[305]*256
#define BCC_MC2_IFAULTREG2_WORD_TBC                  receiveData[306]+receiveData[307]*256


#define TCU_MC1_MSR1_SAFETYBRAKE_BOOL_TBC               receiveData[312]&bit0
#define TCU_MC1_MSR1_TRACTIONENABLE_BOOL_TBC            receiveData[312]&bit1
#define TCU_MC1_MSR1_ALLFRICTIONBRAKESRELEASED_BOOL_TBC receiveData[312]&bit2
#define TCU_MC1_MSR1_BRAKEOVERTAKE_BOOL_TBC             receiveData[312]&bit6
#define TCU_MC1_MSR1_FORCEDBRAKE_BOOL_TBC               receiveData[312]&bit7
#define TCU_MC1_MSR1_CHARGINGCONTACTORSTATE_BOOL_TBC    receiveData[313]&bit0
#define TCU_MC1_MSR1_MAINCONTACTORSTATE_BOOL_TBC        receiveData[313]&bit1
#define TCU_MC1_MSR1_VVVFSTATE_BOOL_TBC                 receiveData[313]&bit2
#define TCU_MC1_MSR1_DRIVEENABLE_BOOL_TBC               receiveData[313]&bit3
#define TCU_MC1_MSR1_SANDINGRECOMMEND_BOOL_TBC          receiveData[313]&bit5
#define TCU_MC1_MSR1_HARDWAREOVERVOLTAGE_BOOL_TBC       receiveData[313]&bit6
#define TCU_MC1_MSR1_HARDWARELINEOVERCURRENT_BOOL_TBC   receiveData[313]&bit7
#define TCU_MC1_MSR1_SLIPFREQUENCY_USINT_TBC            receiveData[308]
#define TCU_MC1_MSR1_STATORFREQUENCY_USINT_TBC          receiveData[309]
#define TCU_MC1_MSR1_DYNACURRENT_UINT_TBC               receiveData[310]+receiveData[311]*256

#define TCU_MC1_MSR2_SAFETYBRAKE_BOOL_TBC               receiveData[322]&bit0
#define TCU_MC1_MSR2_TRACTIONENABLE_BOOL_TBC            receiveData[322]&bit1
#define TCU_MC1_MSR2_ALLFRICTIONBRAKESRELEASED_BOOL_TBC receiveData[322]&bit2
#define TCU_MC1_MSR2_BRAKEOVERTAKE_BOOL_TBC             receiveData[322]&bit6
#define TCU_MC1_MSR2_FORCEDBRAKE_BOOL_TBC               receiveData[322]&bit7
#define TCU_MC1_MSR2_CHARGINGCONTACTORSTATE_BOOL_TBC    receiveData[323]&bit0
#define TCU_MC1_MSR2_MAINCONTACTORSTATE_BOOL_TBC        receiveData[323]&bit1
#define TCU_MC1_MSR2_VVVFSTATE_BOOL_TBC                 receiveData[323]&bit2
#define TCU_MC1_MSR2_DRIVEENABLE_BOOL_TBC               receiveData[323]&bit3
#define TCU_MC1_MSR2_SANDINGRECOMMEND_BOOL_TBC          receiveData[323]&bit5
#define TCU_MC1_MSR2_HARDWAREOVERVOLTAGE_BOOL_TBC       receiveData[323]&bit6
#define TCU_MC1_MSR2_HARDWARELINEOVERCURRENT_BOOL_TBC   receiveData[323]&bit7
#define TCU_MC1_MSR2_SLIPFREQUENCY_USINT_TBC            receiveData[318]
#define TCU_MC1_MSR2_STATORFREQUENCY_USINT_TBC          receiveData[319]
#define TCU_MC1_MSR2_DYNACURRENT_UINT_TBC               receiveData[320]+receiveData[321]*256

#define TCU_MC2_MSR1_SAFETYBRAKE_BOOL_TBC               receiveData[332]&bit0
#define TCU_MC2_MSR1_TRACTIONENABLE_BOOL_TBC            receiveData[332]&bit1
#define TCU_MC2_MSR1_ALLFRICTIONBRAKESRELEASED_BOOL_TBC receiveData[332]&bit2
#define TCU_MC2_MSR1_BRAKEOVERTAKE_BOOL_TBC             receiveData[332]&bit6
#define TCU_MC2_MSR1_FORCEDBRAKE_BOOL_TBC               receiveData[332]&bit7
#define TCU_MC2_MSR1_CHARGINGCONTACTORSTATE_BOOL_TBC    receiveData[333]&bit0
#define TCU_MC2_MSR1_MAINCONTACTORSTATE_BOOL_TBC        receiveData[333]&bit1
#define TCU_MC2_MSR1_VVVFSTATE_BOOL_TBC                 receiveData[333]&bit2
#define TCU_MC2_MSR1_DRIVEENABLE_BOOL_TBC               receiveData[333]&bit3
#define TCU_MC2_MSR1_SANDINGRECOMMEND_BOOL_TBC          receiveData[333]&bit5
#define TCU_MC2_MSR1_HARDWAREOVERVOLTAGE_BOOL_TBC       receiveData[333]&bit6
#define TCU_MC2_MSR1_HARDWARELINEOVERCURRENT_BOOL_TBC   receiveData[333]&bit7
#define TCU_MC2_MSR1_SLIPFREQUENCY_USINT_TBC            receiveData[328]
#define TCU_MC2_MSR1_STATORFREQUENCY_USINT_TBC          receiveData[329]
#define TCU_MC2_MSR1_DYNACURRENT_UINT_TBC               receiveData[330]+receiveData[331]*256

#define TCU_MC2_MSR2_SAFETYBRAKE_BOOL_TBC               receiveData[342]&bit0
#define TCU_MC2_MSR2_TRACTIONENABLE_BOOL_TBC            receiveData[342]&bit1
#define TCU_MC2_MSR2_ALLFRICTIONBRAKESRELEASED_BOOL_TBC receiveData[342]&bit2
#define TCU_MC2_MSR2_BRAKEOVERTAKE_BOOL_TBC             receiveData[342]&bit6
#define TCU_MC2_MSR2_FORCEDBRAKE_BOOL_TBC               receiveData[342]&bit7
#define TCU_MC2_MSR2_CHARGINGCONTACTORSTATE_BOOL_TBC    receiveData[343]&bit0
#define TCU_MC2_MSR2_MAINCONTACTORSTATE_BOOL_TBC        receiveData[343]&bit1
#define TCU_MC2_MSR2_VVVFSTATE_BOOL_TBC                 receiveData[343]&bit2
#define TCU_MC2_MSR2_DRIVEENABLE_BOOL_TBC               receiveData[343]&bit3
#define TCU_MC2_MSR2_SANDINGRECOMMEND_BOOL_TBC          receiveData[343]&bit5
#define TCU_MC2_MSR2_HARDWAREOVERVOLTAGE_BOOL_TBC       receiveData[343]&bit6
#define TCU_MC2_MSR2_HARDWARELINEOVERCURRENT_BOOL_TBC   receiveData[343]&bit7
#define TCU_MC2_MSR2_SLIPFREQUENCY_USINT_TBC            receiveData[338]
#define TCU_MC2_MSR2_STATORFREQUENCY_USINT_TBC          receiveData[339]
#define TCU_MC2_MSR2_DYNACURRENT_UINT_TBC               receiveData[340]+receiveData[341]*256

#define TCU_MC1_MSR1_IFAULTREG1_WORD_TBC               receiveData[314]+receiveData[315]*256
#define TCU_MC1_MSR1_IFAULTREG2_WORD_TBC               receiveData[316]+receiveData[317]*256
#define TCU_MC1_MSR2_IFAULTREG1_WORD_TBC               receiveData[324]+receiveData[325]*256
#define TCU_MC1_MSR2_IFAULTREG2_WORD_TBC               receiveData[326]+receiveData[327]*256
#define TCU_MC2_MSR1_IFAULTREG1_WORD_TBC               receiveData[334]+receiveData[335]*256
#define TCU_MC2_MSR1_IFAULTREG2_WORD_TBC               receiveData[336]+receiveData[337]*256
#define TCU_MC2_MSR2_IFAULTREG1_WORD_TBC               receiveData[344]+receiveData[345]*256
#define TCU_MC2_MSR2_IFAULTREG2_WORD_TBC               receiveData[346]+receiveData[347]*256

#define BCU_HW_BACKUPMODE_BOOL_TBC                      receiveData[262]&bit0
#define BCU_BRAKERELEASED_CAN_BOOL_TBC                  receiveData[262]&bit1
#define BCU_BRAKEAPPLIED_CAN_BOOL_TBC                   receiveData[262]&bit2
#define BCU_HB_ON_CAN_BOOL_TBC                          receiveData[262]&bit3
#define BCU_WSP_TC_CAN_BOOL_TBC                         receiveData[262]&bit4
#define BCU_MAJOREVENT_CAN_BOOL_TBC                     receiveData[262]&bit5
#define BCU_MINOREVENT_CAN_BOOL_TBC                     receiveData[262]&bit6
#define BCU_MINOREVENT_CAN_BOOL_TBC                     receiveData[262]&bit6


#define HVAC_MC1_EVAPRAORFANSTATUS_BOOL_TBC               receiveData[271] & bit0
#define HVAC_MC1_CONDENSERFANSTATUS_BOOL_TBC              receiveData[271] & bit1
#define HVAC_MC1_COMPRESSOR1STATUS_BOOL_TBC               receiveData[271] & bit2
#define HVAC_MC1_HEATER1STATUS_BOOL_TBC                   receiveData[271] & bit3
#define HVAC_MC1_COMPRESSOR2STATUS_BOOL_TBC               receiveData[271] & bit6
#define HVAC_MC1_HEATER2STATUS_BOOL_TBC                   receiveData[271] & bit7
#define HVAC_MC1_AUTOWARMMODE_BOOL_TBC                    receiveData[272] & bit0
#define HVAC_MC1_AUTOCOLDMODE_BOOL_TBC                    receiveData[272] & bit1
#define HVAC_MC1_VENTILATIONMODE_BOOL_TBC                 receiveData[272] & bit2
#define HVAC_MC1_EMERGENCYVENTILATIONMODE_BOOL_TBC        receiveData[272] & bit3
#define HVAC_MC1_STOPMODE_BOOL_TBC                        receiveData[272] & bit4
#define HVAC_MC1_REDUCELOADFBMODE_BOOL_TBC                receiveData[272] & bit5
#define HVAC_MC1_PRECOLD_BOOL_TBC                         receiveData[272] & bit6
#define HVAC_MC1_PREWARM_BOOL_TBC                         receiveData[272] & bit7
#define HVAC_MC1_FRESHAIRDAMPERSTATUS_BOOL_TBC            receiveData[273] & bit0
#define HVAC_MC1_RETURNAIRDAMPERSTATUS_BOOL_TBC           receiveData[273] & bit1
#define HVAC_MC1_HALFCOLDMODE_BOOL_TBC                    receiveData[273] & bit4
#define HVAC_MC1_FULLCOLDMODE_BOOL_TBC                    receiveData[273] & bit5
#define HVAC_MC1_HALFWARMMODE_BOOL_TBC                    receiveData[273] & bit6
#define HVAC_MC1_FULLWARMMODE_BOOL_TBC                    receiveData[273] & bit7
#define HVAC_MC1_TEMPOUTSIDE_BYTE_TBC                     receiveData[274]
#define HVAC_MC1_TEMPINSIDE_BYTE_TBC                      receiveData[275]

#define HVAC_MC2_EVAPRAORFANSTATUS_BOOL_TBC               receiveData[276] & bit0
#define HVAC_MC2_CONDENSERFANSTATUS_BOOL_TBC              receiveData[276] & bit1
#define HVAC_MC2_COMPRESSOR1STATUS_BOOL_TBC               receiveData[276] & bit2
#define HVAC_MC2_HEATER1STATUS_BOOL_TBC                   receiveData[276] & bit3
#define HVAC_MC2_COMPRESSOR2STATUS_BOOL_TBC               receiveData[276] & bit6
#define HVAC_MC2_HEATER2STATUS_BOOL_TBC                   receiveData[276] & bit7
#define HVAC_MC2_AUTOWARMMODE_BOOL_TBC                    receiveData[277] & bit0
#define HVAC_MC2_AUTOCOLDMODE_BOOL_TBC                    receiveData[277] & bit1
#define HVAC_MC2_VENTILATIONMODE_BOOL_TBC                 receiveData[277] & bit2
#define HVAC_MC2_EMERGENCYVENTILATIONMODE_BOOL_TBC        receiveData[277] & bit3
#define HVAC_MC2_STOPMODE_BOOL_TBC                        receiveData[277] & bit4
#define HVAC_MC2_REDUCELOADFBMODE_BOOL_TBC                receiveData[277] & bit5
#define HVAC_MC2_PRECOLD_BOOL_TBC                         receiveData[277] & bit6
#define HVAC_MC2_PREWARM_BOOL_TBC                         receiveData[277] & bit7
#define HVAC_MC2_FRESHAIRDAMPERSTATUS_BOOL_TBC            receiveData[278] & bit0
#define HVAC_MC2_RETURNAIRDAMPERSTATUS_BOOL_TBC           receiveData[278] & bit1
#define HVAC_MC2_HALFCOLDMODE_BOOL_TBC                    receiveData[278] & bit4
#define HVAC_MC2_FULLCOLDMODE_BOOL_TBC                    receiveData[278] & bit5
#define HVAC_MC2_HALFWARMMODE_BOOL_TBC                    receiveData[278] & bit6
#define HVAC_MC2_FULLWARMMODE_BOOL_TBC                    receiveData[278] & bit7
#define HVAC_MC2_TEMPOUTSIDE_BYTE_TBC                     receiveData[279]
#define HVAC_MC2_TEMPINSIDE_BYTE_TBC                      receiveData[280]
//14-5-12 add atc icon state
#define MAIN_ATC_BOOL                                     receiveData[368] & bit3
//14-5-15 add date updateto the VCU date

#define MAIN_SYNC_YEAR_USINT                                receiveData[370]
#define MAIN_SYNC_MONTH_USINT                               receiveData[371]
#define MAIN_SYNC_DAY_USINT                                 receiveData[372]
#define MAIN_SYNC_HOUR_USINT                                receiveData[373]
#define MAIN_SYNC_MINUTE_USINT                              receiveData[374]
#define MAIN_SYNC_SECOND_USINT                              receiveData[375]
///14-5-16 add time setting flag
#define TEST_TIMESYNC_CMD_BOOL                              receiveData[362]&bit7
//14-5-19 add train coupled master slave flag
#define MAIN_TRAIN_COUPLED_MS_BOOL                          receiveData[362]&bit6
#define MAIN_HSCBSTATE_BOOL_TBC                             receiveData[369]&bit0
//14-5-27 ADD HT CLASH SIGNAL
#define MAIN_HEADTAILCLASH_BOOL                             receiveData[383] &bit2

#endif // RECEIVEDATA_H

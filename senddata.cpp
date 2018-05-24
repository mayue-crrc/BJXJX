#include "senddata.h"

//communication protocol of (idu->vcu)
//Byte0
bool Main_AccumulateKmSettedFlag_Bool = false;          //bit0
bool StationSettedFlag_Bool = false;     //bit1
bool WashingMode_Bool = false;                          //bit2
bool DispatchMode_Bool = false;                         //bit3
bool LightOn_Bool = false;                              //bit4
bool LeftTurnCmd_Bool = false;                          //bit5
bool RightTurnCmd_Bool = false;                         //bit6
bool SandingForbid_Bool = false;                        //bit7

//Byte1
bool Hvac_AutoWarm_Bool = false;                       //bit0
bool Hvac_AutoCold_Bool = false;                       //bit1
bool Hvac_Ventilation_Bool = false;                    //bit2
bool Hvac_EmgcVentilation_Bool = false;                //bit3
bool Hvac_Stop_Bool = false;                           //bit4

//Byte2
char Hvac_TempSet_Char = 0;

//Byte3
bool Hvac_HalfColdTest_Bool = false;                   //bit0
bool Hvac_FullColdTest_Bool = false;                   //bit1
bool Hvac_HalfWarmTest_Bool = false;                   //bit2
bool Hvac_FullWarmTest_Bool = false;                   //bit3
bool CabEB_Bool = false;                               //bit4
bool CarHalfWarm_Bool = false;                         //bit5
bool CarFullWarm_Bool = false;                         //bit6
bool EBGlass_Bool = false;                             //bit7
//Byte4
bool g_ForcePumpFanEn_Bool = false;                    //bit0
bool g_SystemTimeSetEn_Bool = false;                   //bit1
bool forcedBrakeReleaseMc1En_Bool = false;             //bit2
bool forcedBrakeReleaseMc2En_Bool = false;             //bit3
bool PowerOnByHand_Bool = false;                       //bit4
bool g_InLittleNopowerArea_Bool = false;               //bit5
bool g_InLargeNoPowerArea_Bool = false;                //bit6
bool g_Vehicle_CodeSet_enable = false;
//Byte5
char LineNumber_Char = 1;

//Byte6
bool Main_SkipStationInstruction_Bool = false;        //bit0
bool StationSet_UpOrDown_Bool = true;                //bit1 up line
bool StationSet_PisToTCMS_Bool = true;                //bit3
bool InstructionTest25_Bool = false;                  //bit6
bool InstructionTest26_Bool = false;                  //bit7

bool InstructionTest27_Bool = false;                  //bit6
bool InstructionTest28_Bool = false;                  //bit7

bool InstructionTest29_Bool = false;                  //bit6
bool InstructionTest30_Bool = false;                  //bit7
//Byte7
bool InstructionTest1_Bool = false;                   //bit0
bool InstructionTest2_Bool = false;                   //bit1
bool InstructionTest3_Bool = false;                   //bit2
bool InstructionTest4_Bool = false;                   //bit3
bool InstructionTest5_Bool = false;                   //bit4
bool InstructionTest6_Bool = false;                   //bit5
bool InstructionTest7_Bool = false;                   //bit6
bool InstructionTest8_Bool = false;                   //bit7

//Byte8
bool InstructionTest9_Bool = false;                   //bit0
bool InstructionTest10_Bool = false;                  //bit1
bool InstructionTest11_Bool = false;                  //bit2
bool InstructionTest12_Bool = false;                  //bit3
bool InstructionTest13_Bool = false;                  //bit4
bool InstructionTest14_Bool = false;                  //bit5
bool InstructionTest15_Bool = false;                  //bit6
bool InstructionTest16_Bool = false;                  //bit7

//Byte9
bool InstructionTest17_Bool = false;                  //bit0
bool InstructionTest18_Bool = false;                  //bit1
bool InstructionTest19_Bool = false;                  //bit2
bool InstructionTest20_Bool = false;                  //bit3
bool InstructionTest21_Bool = false;                  //bit4
bool InstructionTest22_Bool = false;                  //bit5
bool InstructionTest23_Bool = false;                  //bit6
bool InstructionTest24_Bool = false;                  //bit7

//Byte30
bool g_MAGNETICTRACKBRAKECLOSECMD_MC1_RIOM_BOOL = false;  //bit0
bool g_ZEROSPEEDSINGAL_MC1_RIOM_BOOL = false;             //bit1
bool g_SANDINGSIGNAL_MC1_RIOM_BOOL = false;               //bit2
bool g_STOPPINGBRAKE_MC1_RIOM_BOOL = false;               //bit3
bool g_HOLDINGBRAKE_MC1_RIOM_BOOL = false;                //bit4
bool g_SUBSTEPBRAKE_MC1_RIOM_BOOL = false;                //bit5
bool g_DEADMAN_MC1_RIOM_BOOL = false;                     //bit6
bool g_BEEP_MC1_RIOM_BOOL = false;                        //bit7
//Byte31
bool g_PANTOGRAPHSTATELIGHT_MC1_RIOM_BOOL = false;       //bit0
bool g_NORMALLIGHT_MC1_RIOM_BOOL = false;                //bit1
bool g_FORCEDPUMPFAN_MC1_RIOM_BOOL = false;              //bit2
bool g_DO_1_X1_X_OUT12_MC1_RIOM_BOOL = false;            //bit3
//bool g_DO_1_X1_Y_OUT13_MC1_RIOM_BOOL = false;            //bit4
bool g_DO_1_X1_AA_OPEN14_MC1_RIOM_BOOL = false;          //bit5
bool g_LEFTTURNOUT_MC1_RIOM_BOOL = false;          //bit6
bool g_RIGHTTURNOUT_MC1_RIOM_BOOL = false;          //bit7

//Byte32
bool g_HIGHSPEEDCIRCUITBREAKERSTATE_MC1_RIOM_BOOL = false;           //bit0
bool g_LEFTTURN_MC1_RIOM_BOOL = false;                               //bit1
bool g_RIGHTTURN_MC1_RIOM_BOOL = false;                              //bit2
bool g_ELECTRIC1_MC1_RIOM_BOOL = false;                              //bit3
bool g_ELECTRIC2_MC1_RIOM_BOOL = false;                              //bit4
bool g_CABELECTRIC_MC1_RIOM_BOOL = false;                            //bit5
bool g_BATTERYHEAT_MC1_RIOM_BOOL = false;                            //bit6
bool g_FRONTGLASSHEAT_MC1_RIOM_BOOL = false;                         //bit7
//Byte33
bool g_ZEROSPEEDBYPASS_MC1_RIOM_BOOL = false;                        //bit0
bool g_EMGCINVERTERSTART_MC1_RIOM_BOOL = false;                      //bit1
//bool g_DO_2_X1_U_OUT11_MC1_RIOM_BOOL = false;                        //bit2
//bool g_DO_2_X1_X_OUT12_MC1_RIOM_BOOL = false;                        //bit3
//bool g_DO_2_X1_Y_OUT13_MC1_RIOM_BOOL = false;                        //bit4
bool g_FORCEDROPPANTOGRAPH_MC1_RIOM_BOOL = false;                    //bit5
bool g_DO_2_X1_EE_OPEN15_MC1_RIOM_BOOL = false;                      //bit6
bool g_DO_2_X1_KK_OPEN16_MC1_RIOM_BOOL = false;

bool g_DO_2_X1_N_OUT6_MC1_RIOM_BOOL = false;
bool g_DO_2_X1_S_OUT7_MC1_RIOM_BOOL = false;

bool g_DO_2_X1_T_OUT9_MC1_RIOM_BOOL = false;
bool g_DO_2_X1_W_OUT10_MC1_RIOM_BOOL = false;
bool g_DO_2_X1_U_OUT11_MC1_RIOM_BOOL = false;
bool g_DO_2_X1_X_OUT12_MC1_RIOM_BOOL = false;


bool g_DO_2_X1_BB_OUT14_MC1_RIOM_BOOL = false;
bool g_DO_2_X1_BB_OUT15_MC1_RIOM_BOOL = false;
bool g_DO_2_X1_BB_OUT16_MC1_RIOM_BOOL = false;

//bit7


//Byte34
bool g_MAGNETICTRACKBRAKECLOSECMD_MC2_RIOM_BOOL = false;             //bit0
bool g_ZEROSPEEDSINGAL_MC2_RIOM_BOOL = false;        	//bit1
bool g_SANDINGSIGNAL_MC2_RIOM_BOOL = false;              //bit2
bool g_STOPPINGBRAKE_MC2_RIOM_BOOL = false;              //bit3
bool g_HOLDINGBRAKE_MC2_RIOM_BOOL = false;               //bit4
bool g_SUBSTEPBRAKE_MC2_RIOM_BOOL = false;               //bit5
bool g_DEADMAN_MC2_RIOM_BOOL = false;                	//bit6
bool g_BEEP_MC2_RIOM_BOOL = false;                   	//bit7
//Byte35
bool g_PANTOGRAPHSTATELIGHT_MC2_RIOM_BOOL = false;                   //bit0
bool g_NORMALLIGHT_MC2_RIOM_BOOL = false;                            //bit1
bool g_FORCEDPUMPFAN_MC2_RIOM_BOOL = false;                          //bit2
bool g_DO_1_X1_X_OUT12_MC2_RIOM_BOOL = false;                        //bit3
//bool g_DO_1_X1_Y_OUT13_MC2_RIOM_BOOL = false;                        //bit4
bool g_DO_1_X1_AA_OPEN14_MC2_RIOM_BOOL = false;                      //bit5
bool g_LEFTTURNOUT_MC2_RIOM_BOOL = false;                      //bit6
bool g_RIGHTTURNOUT_MC2_RIOM_BOOL = false;                      //bit7

//Byte36
bool g_HIGHSPEEDCIRCUITBREAKERSTATE_MC2_RIOM_BOOL = false;           //bit0
bool g_LEFTTURN_MC2_RIOM_BOOL = false;                               //bit1
bool g_RIGHTTURN_MC2_RIOM_BOOL = false;                              //bit2
bool g_ELECTRIC1_MC2_RIOM_BOOL = false;                              //bit3
bool g_ELECTRIC2_MC2_RIOM_BOOL = false;                              //bit4
bool g_CABELECTRIC_MC2_RIOM_BOOL = false;                            //bit5
bool g_BATTERYHEAT_MC2_RIOM_BOOL = false;                            //bit6
bool g_FRONTGLASSHEAT_MC2_RIOM_BOOL = false;                         //bit7
//Byte37
bool g_ZEROSPEEDBYPASS_MC2_RIOM_BOOL = false;                        //bit0
bool g_EMGCINVERTERSTART_MC2_RIOM_BOOL = false;                      //bit1
//bool g_DO_2_X1_U_OUT11_MC2_RIOM_BOOL = false;                        //bit2
//bool g_DO_2_X1_X_OUT12_MC2_RIOM_BOOL = false;                        //bit3
//bool g_DO_2_X1_Y_OUT13_MC2_RIOM_BOOL = false;                        //bit4
bool g_FORCEDROPPANTOGRAPH_MC2_RIOM_BOOL = false;                    //bit5
bool g_DO_2_X1_EE_OPEN15_MC2_RIOM_BOOL = false;                      //bit6
bool g_DO_2_X1_KK_OPEN16_MC2_RIOM_BOOL = false;                      //bit7

bool g_DO_2_X1_N_OUT6_MC2_RIOM_BOOL = false;
bool g_DO_2_X1_S_OUT7_MC2_RIOM_BOOL = false;

bool g_DO_2_X1_T_OUT9_MC2_RIOM_BOOL = false;
bool g_DO_2_X1_W_OUT10_MC2_RIOM_BOOL = false;
bool g_DO_2_X1_U_OUT11_MC2_RIOM_BOOL = false;
bool g_DO_2_X1_X_OUT12_MC2_RIOM_BOOL = false;


bool g_DO_2_X1_BB_OUT14_MC2_RIOM_BOOL = false;
bool g_DO_2_X1_BB_OUT15_MC2_RIOM_BOOL = false;
bool g_DO_2_X1_BB_OUT16_MC2_RIOM_BOOL = false;

// byte38
char g_testbyte = 0;

 bool TEST_MTB_BOOL = false;
 bool TEST_Factory_BOOL = false;
 bool TEST_Mc1ACUDisable_BOOL = false;
 bool TEST_Mc2ACUDisable_BOOL = false;
 bool TEST_Mc1BCCDisable_BOOL = false;
 bool TEST_Mc2BCCDisable_BOOL = false;
 bool TEST_Mc1MSR1Disable_BOOL = false;
 bool TEST_Mc1MSR2Disable_BOOL = false;
 bool TEST_Mc2MSR1Disable_BOOL = false;
 bool TEST_Mc2MSR2Disable_BOOL = false;
 bool TEST_Mc1ACUReset_BOOL = false;
 bool TEST_Mc2ACUReset_BOOL = false;
 bool TEST_Mc1TCUReset_BOOL = false;
 bool TEST_Mc2TCUReset_BOOL = false;
 bool TEST_Mc1BCCReset_BOOL = false;
 bool TEST_Mc2BCCReset_BOOL = false;
 bool TEST_Mc1FrictionBrakeRelease_BOOL = false;
 bool TEST_Mc2FrictionBrakeRelease_BOOL = false;

bool TEST_TIMESETTINGFLAG_BOOL = false;

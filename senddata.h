#ifndef SENDDATA_H
#define SENDDATA_H

//communication protocol of (idu->vcu)
//Byte0
extern bool Main_AccumulateKmSettedFlag_Bool;          //bit0
extern bool StationSettedFlag_Bool;                    //bit1
extern bool WashingMode_Bool;                          //bit2
extern bool DispatchMode_Bool;                         //bit3
extern bool LightOn_Bool;                              //bit4
extern bool LeftTurnCmd_Bool;                          //bit5
extern bool RightTurnCmd_Bool;                         //bit6
extern bool SandingForbid_Bool;                        //bit7
//Byte1
extern bool Hvac_AutoWarm_Bool;                       //bit0
extern bool Hvac_AutoCold_Bool;                       //bit1
extern bool Hvac_Ventilation_Bool;                    //bit2
extern bool Hvac_EmgcVentilation_Bool;                //bit3
extern bool Hvac_Stop_Bool;                           //bit4

//Byte2
extern char Hvac_TempSet_Char;

//Byte3
extern bool Hvac_HalfColdTest_Bool;                   //bit0
extern bool Hvac_FullColdTest_Bool;                   //bit1
extern bool Hvac_HalfWarmTest_Bool;                   //bit2
extern bool Hvac_FullWarmTest_Bool;                   //bit3
extern bool CabEB_Bool;                               //bit4
extern bool CarHalfWarm_Bool;                         //bit5
extern bool CarFullWarm_Bool;                         //bit6
extern bool EBGlass_Bool;                             //bit7

//Byte4
extern bool g_ForcePumpFanEn_Bool;                   //bit0
extern bool g_SystemTimeSetEn_Bool;                  //bit1
extern bool forcedBrakeReleaseMc1En_Bool;            //bit2
extern bool forcedBrakeReleaseMc2En_Bool;            //bit3
extern bool PowerOnByHand_Bool;                      //bit4
extern bool g_InLittleNopowerArea_Bool;              //bit5
extern bool g_InLargeNoPowerArea_Bool;               //bit6
extern bool g_Vehicle_CodeSet_enable;
//Byte5
extern char LineNumber_Char;

//Byte6
extern bool Main_SkipStationInstruction_Bool;        //bit0
extern bool StationSet_UpOrDown_Bool;                //bit1
extern bool StationSet_PisToTCMS_Bool;	             //bit3
extern bool InstructionTest25_Bool;                  //bit6
extern bool InstructionTest26_Bool;                  //bit7

extern bool InstructionTest27_Bool;                  //bit6
extern bool InstructionTest28_Bool;                  //bit7

extern bool InstructionTest29_Bool;                  //bit6
extern bool InstructionTest30_Bool;                  //bit7
//Byte7
extern bool InstructionTest1_Bool;	//bit0
extern bool InstructionTest2_Bool;	//bit1
extern bool InstructionTest3_Bool;	//bit2
extern bool InstructionTest4_Bool;	//bit3
extern bool InstructionTest5_Bool;	//bit4
extern bool InstructionTest6_Bool;	//bit5
extern bool InstructionTest7_Bool;	//bit6
extern bool InstructionTest8_Bool;	//bit7
//Byte8
extern bool InstructionTest9_Bool;	//bit8
extern bool InstructionTest10_Bool;	//bit9
extern bool InstructionTest11_Bool;	//bit10
extern bool InstructionTest12_Bool;	//bit11
extern bool InstructionTest13_Bool;	//bit12
extern bool InstructionTest14_Bool;	//bit13
extern bool InstructionTest15_Bool;	//bit14
extern bool InstructionTest16_Bool;	//bit15

//Byte9
extern bool InstructionTest17_Bool;                  //bit0
extern bool InstructionTest18_Bool;                  //bit1
extern bool InstructionTest19_Bool;                  //bit2
extern bool InstructionTest20_Bool;                  //bit3
extern bool InstructionTest21_Bool;                  //bit4
extern bool InstructionTest22_Bool;                  //bit5
extern bool InstructionTest23_Bool;                  //bit6
extern bool InstructionTest24_Bool;                  //bit7

//Byte30
extern bool g_MAGNETICTRACKBRAKECLOSECMD_MC1_RIOM_BOOL; //bit0
extern bool g_ZEROSPEEDSINGAL_MC1_RIOM_BOOL;        	//bit1
extern bool g_SANDINGSIGNAL_MC1_RIOM_BOOL;              //bit2
extern bool g_STOPPINGBRAKE_MC1_RIOM_BOOL;              //bit3
extern bool g_HOLDINGBRAKE_MC1_RIOM_BOOL;               //bit4
extern bool g_SUBSTEPBRAKE_MC1_RIOM_BOOL;               //bit5
extern bool g_DEADMAN_MC1_RIOM_BOOL;                	//bit6
extern bool g_BEEP_MC1_RIOM_BOOL;                   	//bit7
//Byte31
extern bool g_PANTOGRAPHSTATELIGHT_MC1_RIOM_BOOL;       //bit0
extern bool g_NORMALLIGHT_MC1_RIOM_BOOL;                //bit1
extern bool g_FORCEDPUMPFAN_MC1_RIOM_BOOL;              //bit2
extern bool g_DO_1_X1_X_OUT12_MC1_RIOM_BOOL;            //bit3
//extern bool g_DO_1_X1_Y_OUT13_MC1_RIOM_BOOL;            //bit4
extern bool g_DO_1_X1_AA_OPEN14_MC1_RIOM_BOOL;          //bit5
extern bool g_LEFTTURNOUT_MC1_RIOM_BOOL;          //bit6
extern bool g_RIGHTTURNOUT_MC1_RIOM_BOOL;          //bit7

//Byte32
extern bool g_HIGHSPEEDCIRCUITBREAKERSTATE_MC1_RIOM_BOOL;           //bit0
extern bool g_LEFTTURN_MC1_RIOM_BOOL;                               //bit1
extern bool g_RIGHTTURN_MC1_RIOM_BOOL;                              //bit2
extern bool g_ELECTRIC1_MC1_RIOM_BOOL;                              //bit3
extern bool g_ELECTRIC2_MC1_RIOM_BOOL;                              //bit4
extern bool g_CABELECTRIC_MC1_RIOM_BOOL;                            //bit5
extern bool g_BATTERYHEAT_MC1_RIOM_BOOL;                            //bit6
extern bool g_FRONTGLASSHEAT_MC1_RIOM_BOOL;                         //bit7
//Byte33
extern bool g_ZEROSPEEDBYPASS_MC1_RIOM_BOOL;                        //bit0
extern bool g_EMGCINVERTERSTART_MC1_RIOM_BOOL;                      //bit1
//extern bool g_DO_2_X1_U_OUT11_MC1_RIOM_BOOL;                        //bit2
//extern bool g_DO_2_X1_X_OUT12_MC1_RIOM_BOOL;                        //bit3
//extern bool g_DO_2_X1_Y_OUT13_MC1_RIOM_BOOL;                        //bit4
extern bool g_FORCEDROPPANTOGRAPH_MC1_RIOM_BOOL;                    //bit5
extern bool g_DO_2_X1_EE_OPEN15_MC1_RIOM_BOOL;                      //bit6
extern bool g_DO_2_X1_KK_OPEN16_MC1_RIOM_BOOL;                      //bit7

extern bool g_DO_2_X1_N_OUT6_MC1_RIOM_BOOL;
extern bool g_DO_2_X1_S_OUT7_MC1_RIOM_BOOL;

extern bool g_DO_2_X1_T_OUT9_MC1_RIOM_BOOL;
extern bool g_DO_2_X1_W_OUT10_MC1_RIOM_BOOL;
extern bool g_DO_2_X1_U_OUT11_MC1_RIOM_BOOL;
extern bool g_DO_2_X1_X_OUT12_MC1_RIOM_BOOL;


extern bool g_DO_2_X1_BB_OUT14_MC1_RIOM_BOOL;
extern bool g_DO_2_X1_BB_OUT15_MC1_RIOM_BOOL;
extern bool g_DO_2_X1_BB_OUT16_MC1_RIOM_BOOL;

//Byte34
extern bool g_MAGNETICTRACKBRAKECLOSECMD_MC2_RIOM_BOOL; //bit0
extern bool g_ZEROSPEEDSINGAL_MC2_RIOM_BOOL;        	//bit1
extern bool g_SANDINGSIGNAL_MC2_RIOM_BOOL;              //bit2
extern bool g_STOPPINGBRAKE_MC2_RIOM_BOOL;              //bit3
extern bool g_HOLDINGBRAKE_MC2_RIOM_BOOL;               //bit4
extern bool g_SUBSTEPBRAKE_MC2_RIOM_BOOL;               //bit5
extern bool g_DEADMAN_MC2_RIOM_BOOL;                	//bit6
extern bool g_BEEP_MC2_RIOM_BOOL;                   	//bit7
//Byte35
extern bool g_PANTOGRAPHSTATELIGHT_MC2_RIOM_BOOL;                   //bit0
extern bool g_NORMALLIGHT_MC2_RIOM_BOOL;                            //bit1
extern bool g_FORCEDPUMPFAN_MC2_RIOM_BOOL;                          //bit2
extern bool g_DO_1_X1_X_OUT12_MC2_RIOM_BOOL;                        //bit3
//extern bool g_DO_1_X1_Y_OUT13_MC2_RIOM_BOOL;                        //bit4
extern bool g_DO_1_X1_AA_OPEN14_MC2_RIOM_BOOL;                      //bit5
extern bool g_LEFTTURNOUT_MC2_RIOM_BOOL;                      //bit6
extern bool g_RIGHTTURNOUT_MC2_RIOM_BOOL;                      //bit7

//Byte36
extern bool g_HIGHSPEEDCIRCUITBREAKERSTATE_MC2_RIOM_BOOL;           //bit0
extern bool g_LEFTTURN_MC2_RIOM_BOOL;                               //bit1
extern bool g_RIGHTTURN_MC2_RIOM_BOOL;                              //bit2
extern bool g_ELECTRIC1_MC2_RIOM_BOOL;                              //bit3
extern bool g_ELECTRIC2_MC2_RIOM_BOOL;                              //bit4
extern bool g_CABELECTRIC_MC2_RIOM_BOOL;                            //bit5
extern bool g_BATTERYHEAT_MC2_RIOM_BOOL;                            //bit6
extern bool g_FRONTGLASSHEAT_MC2_RIOM_BOOL;                         //bit7
//Byte37
extern bool g_ZEROSPEEDBYPASS_MC2_RIOM_BOOL;                        //bit0
extern bool g_EMGCINVERTERSTART_MC2_RIOM_BOOL;                      //bit1
//extern bool g_DO_2_X1_U_OUT11_MC2_RIOM_BOOL;                        //bit2
//extern bool g_DO_2_X1_X_OUT12_MC2_RIOM_BOOL;                        //bit3
//extern bool g_DO_2_X1_Y_OUT13_MC2_RIOM_BOOL;                        //bit4
extern bool g_FORCEDROPPANTOGRAPH_MC2_RIOM_BOOL;                    //bit5
extern bool g_DO_2_X1_EE_OPEN15_MC2_RIOM_BOOL;                      //bit6
extern bool g_DO_2_X1_KK_OPEN16_MC2_RIOM_BOOL;                      //bit7

extern bool g_DO_2_X1_N_OUT6_MC2_RIOM_BOOL ;
extern bool g_DO_2_X1_S_OUT7_MC2_RIOM_BOOL ;

extern bool g_DO_2_X1_T_OUT9_MC2_RIOM_BOOL ;
extern bool g_DO_2_X1_W_OUT10_MC2_RIOM_BOOL;
extern bool g_DO_2_X1_U_OUT11_MC2_RIOM_BOOL;
extern bool g_DO_2_X1_X_OUT12_MC2_RIOM_BOOL ;


extern bool g_DO_2_X1_BB_OUT14_MC2_RIOM_BOOL ;
extern bool g_DO_2_X1_BB_OUT15_MC2_RIOM_BOOL ;
extern bool g_DO_2_X1_BB_OUT16_MC2_RIOM_BOOL ;

// byte38
extern char g_testbyte;
//14-5-12 add test data
extern bool TEST_MTB_BOOL ;
extern bool TEST_Factory_BOOL ;
extern bool TEST_Mc1ACUDisable_BOOL ;
extern bool TEST_Mc2ACUDisable_BOOL ;
extern bool TEST_Mc1BCCDisable_BOOL ;
extern bool TEST_Mc2BCCDisable_BOOL ;
extern bool TEST_Mc1MSR1Disable_BOOL ;
extern bool TEST_Mc1MSR2Disable_BOOL ;
extern bool TEST_Mc2MSR1Disable_BOOL ;
extern bool TEST_Mc2MSR2Disable_BOOL ;
extern bool TEST_Mc1ACUReset_BOOL ;
extern bool TEST_Mc2ACUReset_BOOL ;
extern bool TEST_Mc1TCUReset_BOOL ;
extern bool TEST_Mc2TCUReset_BOOL ;
extern bool TEST_Mc1BCCReset_BOOL ;
extern bool TEST_Mc2BCCReset_BOOL ;
extern bool TEST_Mc1FrictionBrakeRelease_BOOL ;
extern bool TEST_Mc2FrictionBrakeRelease_BOOL ;
//14-5-16 add time setting enable flag

extern bool TEST_TIMESETTINGFLAG_BOOL ;


#endif // SENDDATA_H

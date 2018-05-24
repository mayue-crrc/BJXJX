#ifndef CTRAINDIAGRAMCTRL_H
#define CTRAINDIAGRAMCTRL_H

#include "ccontrolinterface.h"
#include "rom.h"

typedef enum
{
    PANTOGRAPH_LEFT_UP = 0,
    PANTOGRAPH_LEFT_DOWN,
    PANTOGRAPH_LEFT_MIDDLE,
    PANTOGRAPH_RIGHT_UP,
    PANTOGRAPH_RIGHT_DOWN,
    PANTOGRAPH_RIGHT_MIDDLE
}PANTOGRAPHSTATE;

class CTrainDiagramCtrl : public CControlInterface
{
public:
    CTrainDiagramCtrl();

public:
    void Create(__in QString& ctrl_str,__in QRect& ctrl_rc,__in QColor& ctrl_txtcolor,
                __in QFont& ctrl_font,__in QColor& ctrl_bkcolor,__in QPainter* ctrl_painter,__in int ctrl_ID);

    void SetCtrlText(__in QString btn_str);
    void SetTxtFont(__in QFont txt_font);
    void SetTxtColor(__in QColor txt_color);
    void SetCtrlBKColor(__in QColor btn_bkcolor);
    void SetCtrlRect(__in QRect btn_rect);

    void DrawTrainDiagramCtrl();

    //car1
    void setCar1Door1State( __in int newCar1Door1State );
    void setCar1Door2State( __in int newCar1Door2State );
    void setCar1Door3State( __in int newCar1Door3State );
    void setCar1Door4State( __in int newCar1Door4State );
    void setCar1Door5State( __in int newCar1Door5State );
    void setCar1Door6State( __in int newCar1Door6State );
    void setCar1Door7State( __in int newCar1Door7State );
    void setCar1Door8State( __in int newCar1Door8State );
    void setCar1Door9State( __in int newCar1Door9State );
    void setCar1Door10State( __in int newCar1Door10State );
    void setCar1Door11State( __in int newCar1Door11State );
    void setCar1Door12State( __in int newCar1Door12State );
    void setCar1DoorState( __in int newState[] );
    void setCar1Alarm1State ( __in int newCar1Alarm1State );//MA
    void setCar1Alarm2State ( __in int newCar1Alarm2State );//RA
    void setCar1Alarm3State ( __in int newCar1Alarm3State );//RB
    void setCar1Alarm4State ( __in int newCar1Alarm4State );//MB
    void setCar1TCU1State( __in int newCar1TCU1State );
    void setCar1TCU2State( __in int newCar1TCU2State );
    void setCar1TCU3State( __in int newCar1TCU3State );
    void setCar1TCU4State( __in int newCar1TCU4State );
    void setCar1Brake1State( __in int newCar1Brake1State );
    void setCar1Brake2State( __in int newCar1Brake2State );
    void setCar1Brake3State( __in int newCar1Brake3State );
    void setCar1LargerState( __in int newCar1LargerState );
    void setCar1APS1State( __in int newCar1APS1State );
    void setCar1APS2State( __in int newCar1APS2State );
    void setCar1TWPSState( __in int newCar1TWPSState );

    void setCar1BreakerState( __in bool newCar1BreakerState );
    void setCar1BreakerUpState( __in bool newCar1BreakerUpState );
    void setCar1BreakerDownState( __in bool newCar1BreakerDownState , __in bool newCar1BreakerDownState2 );
    void setCar1CAP1State( __in int newCar1CAP1State );
    void setCar1CAP2State( __in int newCar1CAP2State );
    void setCar1HVAC1State( __in int newCar1HVAC1State );
    void setCar1HVAC2State( __in int newCar1HVAC2State );
    bool getCar1Key1State();
    bool getCar1Key2State();
    void setCar1TrainCode( __in QString newCar1TrainCode );
    void setCar1TP1State( __in PANTOGRAPHSTATE newCar1TP1State );
    void setCar1TP1Isolated( __in bool newCar1TP1Isolated );
    void setCar1TP2AState( __in PANTOGRAPHSTATE newCar1TP2AState );
    void setCar1TP2BState( __in PANTOGRAPHSTATE newCar1TP2BState );
    void setCar1TP2Isolated( __in bool newCar1TP2Isolated );
    void setCar1Key1State( __in bool newCar1Key1State );
    void setCar1Key2State( __in bool newCar1Key2State );


    //car2
    void setCar2Door1State( __in int newCar2Door1State );
    void setCar2Door2State( __in int newCar2Door2State );
    void setCar2Door3State( __in int newCar2Door3State );
    void setCar2Door4State( __in int newCar2Door4State );
    void setCar2Door5State( __in int newCar2Door5State );
    void setCar2Door6State( __in int newCar2Door6State );
    void setCar2Door7State( __in int newCar2Door7State );
    void setCar2Door8State( __in int newCar2Door8State );
    void setCar2Door9State( __in int newCar2Door9State );
    void setCar2Door10State( __in int newCar2Door10State );
    void setCar2Door11State( __in int newCar2Door11State );
    void setCar2Door12State( __in int newCar2Door12State );
    void setCar2DoorState( __in int newState[] );
    void setCar2Alarm1State ( __in int newCar2Alarm1State );//MA
    void setCar2Alarm2State ( __in int newCar2Alarm2State );//RA
    void setCar2Alarm3State ( __in int newCar2Alarm3State );//RB
    void setCar2Alarm4State ( __in int newCar2Alarm4State );//MB
    void setCar2TCU1State( __in int newCar2TCU1State );
    void setCar2TCU2State( __in int newCar2TCU2State );
    void setCar2TCU3State( __in int newCar2TCU3State );
    void setCar2TCU4State( __in int newCar2TCU4State );
    void setCar2Brake1State( __in int newCar2Brake1State );
    void setCar2Brake2State( __in int newCar2Brake2State );
    void setCar2Brake3State( __in int newCar2Brake3State );
    void setCar2LargerState( __in int newCar2LargerState );
    void setCar2APS1State( __in int newCar2APS1State );
    void setCar2APS2State( __in int newCar2APS2State );
    void setCar2TWPSState( __in int newCar2TWPSState );
    void setCar2BreakerState( __in bool newCar2BreakerState );
    void setCar2BreakerUpState( __in bool newCar2BreakerUpState );
    void setCar2BreakerDownState( __in bool newCar2BreakerDownState ,__in bool newCar2BreakerDownState2 );
    void setCar2CAP1State( __in bool newCar2CAP1State );
    void setCar2CAP2State( __in bool newCar2CAP2State );
    void setCar2HVAC1State( __in int newCar2HVAC1State );
    void setCar2HVAC2State( __in int newCar2HVAC2State );
    bool getCar2Key1State();
    bool getCar2Key2State();
    void setCar2TrainCode( __in QString newCar2TrainCode );
    void setCar2TP1State( __in PANTOGRAPHSTATE newCar2TP1State );
    void setCar2TP1Isolated( __in bool newCar2TP1Isolated );
    void setCar2TP2AState( __in PANTOGRAPHSTATE newCar2TP2AState );
    void setCar2TP2BState( __in PANTOGRAPHSTATE newCar2TP2BState );
    void setCar2TP2Isolated( __in bool newCar2TP2Isolated );
    void setCar2Key1State( __in bool newCar2Key1State );
    void setCar2Key2State( __in bool newCar2Key2State );

/*******************************************************


    void setCar1ACU1State( __in int newCar1ACU1State );
    void setCar1ACU2State( __in int newCar1ACU2State );


    void setCar1ERState( __in bool newCar1ERState );
    void setCar1BCC1State( __in int newCar1BCC1State );
    void setCar1BCC2State( __in int newCar1BCC2State );

    void setCar1Mc1BatteryContactorState( __in bool newCar1Mc1BatteryContactorState );
    void setCar1Mc2BatteryContactorState( __in bool newCar1Mc2BatteryContactorState );
    void setCar1CompressorSensor1( __in QString newCompressorSensor );
    void setCar1CompressorSensor2( __in QString newCompressorSensor );

    void setCar1DoorPassbyLight( __in bool newCar1DoorPassbyLight );
    void setCar1TcuReadyLight( __in bool newCar1TcuReadyLight );
    void setCar1EBFaultLight( __in bool newCar1EBFaultLight );

    void setCar1CAP1State( __in int newCar1CAP1State );
    void setCar1CAP2State( __in int newCar1CAP2State );
    void setCar2CAP1State( __in int newCar2CAP1State );
    void setCar2CAP2State( __in int newCar2CAP2State );

    void setCar2McDirection( __in int newCar2McDirection );
    void setCar2Door1State( __in int newCar2Door1State );
    void setCar2Door2State( __in int newCar2Door2State );
    void setCar2Door3State( __in int newCar2Door3State );
    void setCar2Door4State( __in int newCar2Door4State );
    void setCar2Door5State( __in int newCar2Door5State );
    void setCar2Door6State( __in int newCar2Door6State );
    void setCar2Door7State( __in int newCar2Door7State );
    void setCar2Door8State( __in int newCar2Door8State );
    void setCar2Door9State( __in int newCar2Door9State );
    void setCar2Door10State( __in int newCar2Door10State );
    void setCar2Door11State( __in int newCar2Door11State );
    void setCar2Door12State( __in int newCar2Door12State );
    void setCar2DoorState( __in int newState[]);

    void setCar2Brake1State( __in int newCar2Brake1State );
    void setCar2Brake2State( __in int newCar2Brake2State );
    void setCar2Brake3State( __in int newCar2Brake3State );
    void setCar2TCU1State( __in int newCar2TCU1State );
    void setCar2TCU2State( __in int newCar2TCU2State );
    void setCar2ACU1State( __in int newCar2ACU1State );
    void setCar2ACU2State( __in int newCar2ACU2State );
    void setCar2Key1State( __in bool newCar2Key1State );
    void setCar2Key2State( __in bool newCar2Key2State );
    void setCar2TrainCode( __in QString newCar2TrainCode );
    void setCar2TPState( __in PANTOGRAPHSTATE newCar2TPState );
    void setCar2TPIsolated( __in bool newCar2TPIsolated );
    void setCar2ERState( __in bool newCar2ERState );
    void setCar2BreakerState( __in bool newCar2BreakerState );
    void setCar2CompressorSensor1( __in QString newCompressorSensor );
    void setCar2CompressorSensor2( __in QString newCompressorSensor );
    void setCar2BCC1State( __in int newCar2BCC1State );
    void setCar2BCC2State( __in int newCar2BCC2State );
//*************************************************************/

    void setUNCHARGEWORKSTATE_MC1_DCDC( __in bool newState );
    void setCHARGEFINISH_MC1_DCDC( __in bool newState );
    void setPOWERSUPPLYFINISH_MC1_DCDC( __in bool newState );
    void setUNCHARGEWORKSTATE_MC2_DCDC( __in bool newState );
    void setCHARGEFINISH_MC2_DCDC( __in bool newState );
    void setPOWERSUPPLYFINISH_MC2_DCDC( __in bool newState );


    void iconDriverKey( QPainter* painter,
                            qreal posX, qreal posY, qreal width, qreal height );
    void iconDoor( QPainter* painter,
                       qreal posX, qreal posY, qreal width, qreal height,
                       QString doorNum, int doorState, int doorFontSize );
    void iconER( QPainter* painter,
                       qreal posX, qreal posY, qreal width, qreal height,
                       bool state, int fontSize );
    void iconBCC( QPainter* painter,
                       qreal posX, qreal posY, qreal width, qreal height,
                       int state, int fontSize );
    void iconBrake( QPainter* painter,
                       qreal posX, qreal posY, qreal width, qreal height,
                       int brakeState );
    void iconLarger( QPainter* painter,
                       qreal posX, qreal posY, qreal width, qreal height,
                       int largerState );
    void iconTCU( QPainter* painter,
                       qreal posX, qreal posY, qreal width, qreal height,
                       QString const tcuNum,int tcuState );
    void iconAPS( QPainter* painter,
                       qreal posX, qreal posY, qreal width, qreal height,
                       int apsState );
    void iconTWPS( QPainter* painter,
                       qreal posX, qreal posY, qreal width, qreal height,
                       int apsState );
    void iconPantographsLeft( QPainter* painter,
                                  qreal posX, qreal posY, qreal width, qreal height,
                                  PANTOGRAPHSTATE state, bool isolated );
    void iconPantographsDown( QPainter* painter,
                                  qreal posX, qreal posY, qreal width, qreal height,
                                  PANTOGRAPHSTATE state, bool isolated );
    void iconPantographsRight( QPainter* painter,
                                  qreal posX, qreal posY, qreal width, qreal height,
                                  PANTOGRAPHSTATE state, bool isolated );
    void iconBreaker( QPainter* painter,
                      qreal posX, qreal posY, qreal width, qreal height,
                      bool brkState );
    void iconBreakerUp( QPainter* painter,
                      qreal posX, qreal posY, qreal width, qreal height,
                      bool brkState );
    void iconBreakerDown( QPainter* painter,
                      qreal posX, qreal posY, qreal width, qreal height,
                      bool brkState );
    void iconTCUReadyLight( QPainter* painter,
                            qreal posX, qreal posY, qreal width, qreal height,
                            bool state, int fontSize );
    void iconEBFaultLight( QPainter* painter,
                           qreal posX, qreal posY, qreal width, qreal height,
                           bool state, int fontSize );
    void iconCAP( QPainter* painter,
                       qreal posX, qreal posY, qreal width, qreal height,
                       int capState );
    void iconHVAC( QPainter* painter,
                       qreal posX, qreal posY, qreal width, qreal height,
                       int HVACState );

    //////****************
    void iconALARM( QPainter* painter,
                       qreal posX, qreal posY, qreal width, qreal height,
                       int capState );
    void iconPantographsBelow(QPainter* painter,
                          qreal posX, qreal posY, qreal width, qreal height,
                          PANTOGRAPHSTATE state, bool isolated);
    //////**************** add EB icon
    void iconEB( QPainter* painter,
                       qreal posX, qreal posY, qreal width, qreal height,
                       int EBState );


    void getTrainCoupledMode(__in int Mode);
private:



    //car1
    //  1:not closed; 2:fault; 3:not online; 4:communication abnormal; default : door closed;

    int m_TrainCoupledMode;
    bool m_Car1Key1State ; // false->no key,true->key on MA
    bool m_Car1Key2State ; // false->no key,true->key on MB

    QString m_Car1TrainCode ; //no code

    int m_Car1Door1State ;//MA_1
    int m_Car1Door2State ;//MA_2
    int m_Car1Door3State ;//RA_1
    int m_Car1Door4State ;//RA_2
    int m_Car1Door5State ;//RA_3
    int m_Car1Door6State ;//RA_4
    int m_Car1Door7State ;//RB_
    int m_Car1Door8State ;//RB_
    int m_Car1Door9State ;//RB_
    int m_Car1Door10State ;//RB_
    int m_Car1Door11State ;//MB_
    int m_Car1Door12State ;//MB_

    int m_Car1Alarm1State ;//MA
    int m_Car1Alarm2State ;//RA
    int m_Car1Alarm3State ;//RB
    int m_Car1Alarm4State ;//MB


    int m_Car1TCU1State ;//MA_1
    int m_Car1TCU2State ;//MA_2
    int m_Car1TCU3State ;//MB_1
    int m_Car1TCU4State ;//MB_2

    int m_Car1Brake1State ;//MA
    int m_Car1Brake2State ;//P
    int m_Car1Brake3State ;//MB

    int m_Car1LargerState ;//P

    int m_Car1TWPSState ;//P

    int m_Car1APS1State ;//MA
    int m_Car1APS2State ;//MB

    bool m_Car1BreakerState ;
    bool m_Car1BreakerUpState ;
    bool m_Car1BreakerDownState ;
    bool m_Car1BreakerDownState2 ;

    int m_Car1CAP1State ;//RA
    int m_Car1CAP2State ;//RB
    int m_Car1HVAC1State ;//RA
    int m_Car1HVAC2State ;//RB

    PANTOGRAPHSTATE m_Car1TP1State;
    bool m_Car1TP1Isolated ; // fasle->unIsolated, true->Isolated

    PANTOGRAPHSTATE m_Car1TP2AState;
    PANTOGRAPHSTATE m_Car1TP2BState;

    bool m_Car1TP2Isolated ; // fasle->unIsolated, true->Isolated


    //Car2
    bool m_Car2Key1State ; // false->no key,true->key on MA
    bool m_Car2Key2State ; // false->no key,true->key on MB

    QString m_Car2TrainCode ; //no code

    int m_Car2Door1State ;//MA_1
    int m_Car2Door2State ;//MA_2
    int m_Car2Door3State ;//RA_1
    int m_Car2Door4State ;//RA_2
    int m_Car2Door5State ;//RA_3
    int m_Car2Door6State ;//RA_4
    int m_Car2Door7State ;//RB_
    int m_Car2Door8State ;//RB_
    int m_Car2Door9State ;//RB_
    int m_Car2Door10State ;//RB_
    int m_Car2Door11State ;//MB_
    int m_Car2Door12State ;//MB_

    int m_Car2Alarm1State ;//MA
    int m_Car2Alarm2State ;//RA
    int m_Car2Alarm3State ;//RB
    int m_Car2Alarm4State ;//MB


    int m_Car2TCU1State ;//MA_1
    int m_Car2TCU2State ;//MA_2
    int m_Car2TCU3State ;//MB_1
    int m_Car2TCU4State ;//MB_2

    int m_Car2Brake1State ;//MA
    int m_Car2Brake2State ;//P
    int m_Car2Brake3State ;//MB

    int m_Car2LargerState ;//P

    int m_Car2TWPSState ;//P

    int m_Car2APS1State ;//MA
    int m_Car2APS2State ;//MB

    bool m_Car2BreakerState ;
    bool m_Car2BreakerUpState ;
    bool m_Car2BreakerDownState ;
    bool m_Car2BreakerDownState2 ;

    int m_Car2CAP1State ;//RA
    int m_Car2CAP2State ;//RA
    int m_Car2HVAC1State ;//RA
    int m_Car2HVAC2State ;//RB
    //

    PANTOGRAPHSTATE m_Car2TP1State ;
    bool m_Car2TP1Isolated ; // fasle->unIsolated, true->Isolated

    PANTOGRAPHSTATE m_Car2TP2AState ;
    PANTOGRAPHSTATE m_Car2TP2BState ;

    bool m_Car2TP2Isolated ; // fasle->unIsolated, true->Isolated



/*********************************

    int m_Car1Door1State;
    int m_Car1Door2State;
    int m_Car1Door3State;
    int m_Car1Door4State;
    int m_Car1Door5State;
    int m_Car1Door6State;
    int m_Car1Door7State;
    int m_Car1Door8State;
    int m_Car1Door9State;
    int m_Car1Door10State;
    int m_Car1Door11State;
    int m_Car1Door12State;

    //  1:Brake Infliction; 2:not online; 3:fault; default:not work;
    int m_Car1Brake1State;
    int m_Car1Brake2State;
    int m_Car1Brake3State;
    //  1:Not work; 2:not online; 3:fault; default:work;
    int m_Car1TCU1State;
    int m_Car1TCU2State;
    int m_Car1ACU1State;
    int m_Car1ACU2State;

    bool m_Car1Key1State;
    bool m_Car1Key2State;

    QString m_Car1TrainCode;

    PANTOGRAPHSTATE m_Car1TPState,m_Car2TPState;
    bool m_Car1TPIsolated;
    bool m_Car1ERState;
    int m_Car1BCC1State;
    int m_Car1BCC2State;
    bool m_Car1BreakerState;
    bool m_Car1BreakerUpState;
    bool m_Car1BreakerDownState;
    bool m_Car1Mc1BatteryContactorState;
    bool m_Car1Mc2BatteryContactorState;
    QString m_Car1CompressorSensor1,m_Car1CompressorSensor2;

    bool m_Car1DoorPassbyLight;
    bool m_Car1TcuReadyLight;
    bool m_Car1EBFaultLight;
//********************************************
    bool m_UNCHARGEWORKSTATE_MC1_DCDC_BOOL;
    bool m_CHARGEFINISH_MC1_DCDC_BOOL;
    bool m_POWERSUPPLYFINISH_MC1_DCDC_BOOL;
    bool m_UNCHARGEWORKSTATE_MC2_DCDC_BOOL;
    bool m_CHARGEFINISH_MC2_DCDC_BOOL;
    bool m_POWERSUPPLYFINISH_MC2_DCDC_BOOL;

    //car2
    //  1:not closed; 2:fault; 3:not online; 4:communication abnormal; default : door closed;
    //Door1:  MA_1
    //Door2:  MA_2
    //Door3:  RA_
    int m_Car2Door1State;
    int m_Car2Door2State;
    int m_Car2Door3State;
    int m_Car2Door4State;
    int m_Car2Door5State;
    int m_Car2Door6State;
    int m_Car2Door7State;
    int m_Car2Door8State;
    int m_Car2Door9State;
    int m_Car2Door10State;
    int m_Car2Door11State;
    int m_Car2Door12State;

    //  1:Brake Infliction; 2:not online; 3:fault; default:not work;
    int m_Car2Brake1State;
    int m_Car2Brake2State;
    int m_Car2Brake3State;
    //  1:Not work; 2:not online; 3:fault; default:work;
    int m_Car2TCU1State;
    int m_Car2TCU2State;
    int m_Car2ACU1State;
    int m_Car2ACU2State;

    bool m_Car2Key1State;
    bool m_Car2Key2State;

    QString m_Car2TrainCode;

    //int m_Car2TPState;
    bool m_Car2TPIsolated;
    bool m_Car2ERState;
    bool m_Car2BreakerState;
    QString m_Car2CompressorSensor1,m_Car2CompressorSensor2;

    int m_Car2BCC1State;
    int m_Car2BCC2State;
    bool m_Car2Mc1BatteryContactorState;
    bool m_Car2Mc2BatteryContactorState;
    bool m_Car2TcuReadyLight;
    bool m_Car2EBFaultLight;
    bool car2flag,m_Car2McDirection;

    int m_TrainCoupledMode;
    int m_Car1CAP1State;
    int m_Car1CAP2State;
    int m_Car2CAP1State;
    int m_Car2CAP2State;
    //****************************/
};

#endif // CTRAINDIAGRAMCTRL_H

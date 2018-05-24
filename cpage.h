#ifndef CPAGE_H
#define CPAGE_H

#include <qpoint.h>
#include <qpixmap.h>

#include "ui_dialog.h"

#include "rom.h"
#include "receivedata.h"
#include "senddata.h"
#include "ccontrolinterface.h"
#include "qdialog.h"

//common dialog
#include "cconfirmdialog.h"
#include "cwarningdialog.h"
#include "cacuhelpdialog.h"
#include "cbcuhelpdialog.h"
#include "cdcdchelpdialog.h"
#include "chvachelpdialog.h"
#include "cmainhelpdialog.h"
#include "cnethelpdialog.h"
//control head file
#include "cbutton.h"
#include "cbitmapbutton.h"
#include "clabel.h"
#include "cedit.h"
#include "clistbox.h"
#include "ccountdownctrl.h"
#include "cglobal.h"
#include "cspeedctrl.h"
#include "cpantographstatectrl.h"
#include "ctrianglectrl.h"
#include "ccircle.h"
#include "cline.h"
#include "ccheckbox.h"
#include "csliderctrl.h"
#include "cimagectrl.h"
#include "ctraindiagramctrl.h"
#include "ccapacitancectrl.h"
#include "cbar.h"

#define PAGE_ROM_INDEX_SYSLOGIN               0x00
#define PAGE_ROM_INDEX_MAIN                   0x01
#define PAGE_ROM_INDEX_NETSTATE               0x02
#define PAGE_ROM_INDEX_TCUSTATE               0x03
#define PAGE_ROM_INDEX_ACUSTATE               0x04
#define PAGE_ROM_INDEX_BCUSTATE               0x05
#define PAGE_ROM_INDEX_DCDCSTATE              0x06
#define PAGE_ROM_INDEX_PIS                    0x07
#define PAGE_ROM_INDEX_STARTSTATIONSET        0x08
#define PAGE_ROM_INDEX_ENDSTATIONSET          0x09
//#define PAGE_ROM_INDEX_CURRENTSTATIONSET      0x0A
#define PAGE_ROM_INDEX_HVACSTATE              0x0A
#define PAGE_ROM_INDEX_HVACPARAMETERSET       0x0B
#define PAGE_ROM_INDEX_HVACTEST               0x0C
#define PAGE_ROM_INDEX_PARAMETERSET           0x0D
#define PAGE_ROM_INDEX_SYSTIMESET             0x0E
#define PAGE_ROM_INDEX_CARCODESET             0x0F
#define PAGE_ROM_INDEX_WHEELDIAMETERSET       0x10
#define PAGE_ROM_INDEX_LUMINANCESET           0x11
#define PAGE_ROM_INDEX_DRIVERCODEMANAGE       0x12
#define PAGE_ROM_INDEX_DRIVERCODELIST         0x13
#define PAGE_ROM_INDEX_MAINTAINERMANAGE       0x14
#define PAGE_ROM_INDEX_MAINTAINERLIST         0x15
#define PAGE_ROM_INDEX_MODIFYACCUMULATEMILE   0x16
#define PAGE_ROM_INDEX_INSTRUCTIONTEST        0x17
#define PAGE_ROM_INDEX_CURRENTFAULTLIST       0x18
#define PAGE_ROM_INDEX_HISTORYFAULTLIST       0x19
#define PAGE_ROM_INDEX_DEVICESELECT           0x1A
#define PAGE_ROM_INDEX_GRADESELECT            0x1B
#define PAGE_ROM_INDEX_STARTTIMESET           0x1C
#define PAGE_ROM_INDEX_ENDTIMESET             0x1D
#define PAGE_ROM_INDEX_DOOR                   0x1E
#define PAGE_ROM_INDEX_FAULTALARM             0x1F
#define PAGE_ROM_INDEX_SERIALDATA             0x20
#define PAGE_ROM_INDEX_VERSION                0x21
#define PAGE_ROM_INDEX_LOCALIO                0x22
#define PAGE_ROM_INDEX_MAINCONTROLCMD         0x23
#define PAGE_ROM_INDEX_NETSTATECOUPLED        0x24
//

#define PAGE_ROM_INDEX_ACUSTATEPAGECOUPLED    0x25
#define PAGE_ROM_INDEX_TCUSTATEPAGECOUPLED    0x26
#define PAGE_ROM_INDEX_BCUSTATEPAGECOUPLED    0x27
#define PAGE_ROM_INDEX_HVACSTATEPAGECOUPLED    0x28
//#define PAGE_ROM_INDEX_FAULTDOMODELPAGE    0x29
#define PAGE_ROM_INDEX_MYTEST 0x29
#define PAGE_ROM_INDEX_UDPDATAPAGE1   0x2a
#define PAGE_ROM_INDEX_REFRESHTIME    0x2b
#define PAGE_ROM_INDEX_DCDCSTATECOUPLED       0x2c
#define PAGE_ROM_INDEX_DEBUGRIOMDETIALPAGE       0x2d
#define PAGE_PASSWORD_SET                       0x2e
/*

#define PAGE_ROM_INDEX_ACUSTATEPAGECOUPLED    0x26
#define PAGE_ROM_INDEX_TCUSTATEPAGECOUPLED    0x27
#define PAGE_ROM_INDEX_BCUSTATEPAGECOUPLED    0x28
#define PAGE_ROM_INDEX_HVACSTATEPAGECOUPLED    0x29
//#define PAGE_ROM_INDEX_FAULTDOMODELPAGE    0x29
#define PAGE_ROM_INDEX_MYTEST 0x2A

 */



//COMMON MACRO: GetDlgItem
//Example:
//if control is type of CButton which id is ID_XXX,you can get CButton pointer like this:
// 1.((CButton*)(GetDlgItem(ID_XXX)))->SetCtrlText("XXX");
// 2. CButton* pButton = (CButton*)(GetDlgItem(ID_XXX));
//    pButton->SetCtrlText("XXX");

//class cpage declear
class CPage
{
public:
    CPage();
    virtual ~CPage();
    typedef map<int,CControlInterface*> CONTROLMAP;
    typedef pair<int,CControlInterface*> CONTROLPAIR;

    void InitPage(__in int nWidth,__in int nHeight, __in int nPageIndex, __in QDialog* pParent);
    QPixmap* GetPixmap(){return m_pixmap;}
    QPainter* GetPainter(){return &m_painter;}
    QDialog* GetParentDlg(){return m_pDlg;}
    void DrawByRom(ROMINFO pRomInfo);
    int GetPageIndex(){return m_nPageIndex;}

    void Update(){m_pDlg->update();}

    // control interface
    void AddControl(__in QString ctrl_str, __in QRect ctrl_rc,__in QColor ctrl_txtcolor,
                    __in QFont ctrln_font,__in QColor ctrln_bkcolor,__in int ctrl_id,__in int ctrl_type);
    void RemoveControl(__in int ctrl_id);
    bool TestControlExists(__in int ctrl_id);
    CControlInterface* GetDlgItem(__in int ctrl_id, QString str="");
    void ResetButtonState();

    void UpdatePage();
    void UpdateCommonLabel();
    void ChangePage(int nPageIndex);

    virtual void InitMsgList()=0;
    virtual void ConnectEvent(__in int nMsg)=0;
    virtual void ConnectEvent(__in QPoint pt,__in int nMsg)=0;

protected:
    //common 1
    void OnCommonMainButtonDown();
    void OnCommonNETButtonDown();
    void OnCommonTCUButtonDown();
    void OnCommonAPSButtonDown();
    void OnCommonBRAKEButtonDown();
    void OnCommonDCDCButtonDown();
    void OnCommonPISButtonDown();
    void OnCommonHVACButtonDown();
    void OnCommonMAINTAINButtonDown();
    //common 2
    void OnCommonHVACSTATEButtonDown();
    void OnCommonHVACPARAMSETButtonDown();
    void OnCommonHVACTESTButtonDown();
    //common 3
    void OnCommonPARAMSETButtonDown();
    void OnCommonINSTRUCTIONTESTButtonDown();
    void OnCommonCURRENTFAULTLISTButtonDown();
    void OnCommonHISTROYFAULTLISTButtonDown();
    void OnCommonDOORButtonDown();

    void ChangeLay1ButtonState(__in int nID);
    void ChangeLay2_1ButtonState(__in int nID);
    void ChangeLay2_2ButtonState(__in int nID);

    void OnCommonDATEButtonDown();
    void OnCommonTIMEButtonDown();
    void OnCommonHELPButtonDown();
    void OnSerialDialogClk();

    virtual void OnInitPage(){}
    virtual void OnUpdatePage(){}
    virtual void OnShowPage(){}

    QString GetStationName(int stationID);

    QPainter        m_painter;
    QPixmap*        m_pixmap;
    int             m_nWidth;
    int             m_nHeight;
    int             m_nPageIndex;
    CONTROLMAP      m_ctrlmap;
    QDialog*        m_pDlg;
    QString         m_classtypestr;
    static int      m_nPrePageIndex;


    bool m_FaultDlgFlag;
private:
    void  InitCommonLabel(__in int nID);
    void ShowWarningDialog();
    void getStationString();

};

#endif // CPAGE_H

#include <qdatetime.h>
#include <qdebug.h>

#include "cpage.h"
#include "csysloginpage.h"
#include "cmainpage.h"
#include "chistoryfaultlistpage.h"
#include "databuffer.h"
#include "dialog.h"

extern vector<CPage*>  g_PageVec;

int CPage::m_nPrePageIndex = PAGE_ROM_INDEX_SYSLOGIN;
//int CPage::m_nPrePageIndex = PAGE_ROM_INDEX_MAIN; // test use 20120927
CPage::CPage()
{
    m_FaultDlgFlag = false;
}

CPage::~CPage()
{
    m_painter.end();
    for_each(m_ctrlmap.begin(), m_ctrlmap.end(), DELMAPOBJ<CONTROLPAIR>());
    SAFE_DELETE(m_pixmap);
}

void CPage::InitPage(
                      __in int nWidth,     //pixmap width
                      __in int nHeight,    //pixmap height
                      __in int nPageIndex, //page index
                      __in QDialog* pParent//parent pointer
                     )
{
    m_nWidth     = nWidth;
    m_nHeight    = nHeight;
    m_nPageIndex = nPageIndex;
    m_pDlg       = pParent;
    m_pixmap = new QPixmap(nWidth,nHeight);
    m_painter.begin(m_pixmap);
    //set pixmap bk color to black.
    m_painter.setRenderHint(QPainter::SmoothPixmapTransform);
    m_painter.fillRect(0,0,m_nWidth,m_nHeight, Qt::black);
}

void  CPage::InitCommonLabel(
                             __in int nID
                            )
{
    ((CLabel*)GetDlgItem(nID))->SetAlignment(Qt::AlignLeft);
    if(nID == IDLB_COM_DATE)
    {
 //       GetDlgItem(IDLB_COM_DATE)->SetCtrlText(QDate::currentDate().toString("yyyy-MM-dd"));
    }

}





void CPage::DrawByRom(ROMINFO pRomInfo)
{
    int nRomSize = pRomInfo.nRomSize;

    for(int i = 0; i < nRomSize; i++)
    {
        AddControl(pRomInfo.pRom[i]->showStr,
                   pRomInfo.pRom[i]->rc,
                   pRomInfo.pRom[i]->fgColor,
                   pRomInfo.pRom[i]->font,
                   pRomInfo.pRom[i]->bkColor,
                   pRomInfo.pRom[i]->nID,
                   pRomInfo.pRom[i]->nControlType);

        if ((pRomInfo.pRom[i]->nID >= IDLB_COM_NETVOLTAGE)
            && (pRomInfo.pRom[i]->nID <= IDLB_COM_CAP)
            && (CONTROL_LABEL == pRomInfo.pRom[i]->nControlType))
        {
            InitCommonLabel(pRomInfo.pRom[i]->nID);
        }
    }
    OnInitPage();
}

void CPage::AddControl(
                        __in QString ctrl_str,     //ctrl string
                        __in QRect ctrl_rc,        //ctrl rect
                        __in QColor ctrl_txtcolor, //ctrl text color
                        __in QFont ctrl_font,      //ctrl text font
                        __in QColor ctrl_bkcolor,  //ctrl bk color
                        __in int ctrl_id,          //ctrl id
                        __in int ctrl_type         //ctrl type
                       )
{
    QRect actual_ctrl_rc;
    if(SCREEN_W==800)
    {
        actual_ctrl_rc = QRect( int(ctrl_rc.x()*1.25), int(ctrl_rc.y()*1.25), int(ctrl_rc.width()*1.25), int(ctrl_rc.height()*1.25) );
    }
    else
    {
        actual_ctrl_rc = ctrl_rc;
    }
    if(m_ctrlmap[ctrl_id] != NULL)
    {
        SAFE_DELETE(m_ctrlmap[ctrl_id]);
    }

    switch(ctrl_type)
    {
    case CONTROL_BUTTON:
        {
            CButton* pBtn = new CButton();
            pBtn->Create(ctrl_str,
                         actual_ctrl_rc,
                         ctrl_txtcolor,
                         ctrl_font,
                         ctrl_bkcolor,
                         &m_painter,
                         ctrl_id);
            m_ctrlmap[ctrl_id] = dynamic_cast<CControlInterface*>(pBtn);
            break;
        }
    case CONTROL_BMPBUTTON:
        {
            CBitmapButton* pBtn = new CBitmapButton();
            pBtn->Create(ctrl_str,
                         actual_ctrl_rc,
                         ctrl_txtcolor,
                         ctrl_font,
                         ctrl_bkcolor,
                         &m_painter,
                         ctrl_id);
            m_ctrlmap[ctrl_id] = dynamic_cast<CControlInterface*>(pBtn);
            break;
        }
    case CONTROL_EDIT:
        {
            CEdit* pEdit = new CEdit();
            pEdit->Create(ctrl_str,
                          actual_ctrl_rc,
                          ctrl_txtcolor,
                          ctrl_font,
                          ctrl_bkcolor,
                          &m_painter,
                          ctrl_id);
            m_ctrlmap[ctrl_id] = dynamic_cast<CControlInterface*>(pEdit);
            break;
        }
    case CONTROL_LABEL:
        {
            CLabel* pLabel = new CLabel();
            pLabel->Create(ctrl_str,
                           actual_ctrl_rc,
                           ctrl_txtcolor,
                           ctrl_font,
                           ctrl_bkcolor,
                           &m_painter,
                           ctrl_id);
            m_ctrlmap[ctrl_id] = dynamic_cast<CControlInterface*>(pLabel);
            break;
        }
    case CONTROL_LISTBOX:
        {
            CListBox* pListBox = new CListBox();
            pListBox->Create(ctrl_str,
                            actual_ctrl_rc,
                            ctrl_txtcolor,
                            ctrl_font,
                            ctrl_bkcolor,
                            &m_painter,
                            ctrl_id);
            m_ctrlmap[ctrl_id] = dynamic_cast<CControlInterface*>(pListBox);
            break;
        }
    case CONTROL_COUNTDOWN:
        {
            CCountDownCtrl* pCountDownCtrl = new CCountDownCtrl();
            pCountDownCtrl->Create(ctrl_str,
                                   actual_ctrl_rc,
                                   ctrl_txtcolor,
                                   ctrl_font,
                                   ctrl_bkcolor,
                                   &m_painter,
                                   ctrl_id);
            m_ctrlmap[ctrl_id] = dynamic_cast<CControlInterface*>(pCountDownCtrl);
            break;
        }
    case CONTROL_SPEED:
        {
            CSpeedCtrl* pSpeedCtrl = new CSpeedCtrl();
            pSpeedCtrl->Create(ctrl_str,
                               actual_ctrl_rc,
                               ctrl_txtcolor,
                               ctrl_font,
                               ctrl_bkcolor,
                               &m_painter,
                               ctrl_id);
            m_ctrlmap[ctrl_id] = dynamic_cast<CControlInterface*>(pSpeedCtrl);
            break;
        }
    case CONTROL_CAPACITANCE:
        {
            CCapacitanceCtrl* pCapacitanceCtrl = new CCapacitanceCtrl();
            pCapacitanceCtrl->Create(ctrl_str,
                               actual_ctrl_rc,
                               ctrl_txtcolor,
                               ctrl_font,
                               ctrl_bkcolor,
                               &m_painter,
                               ctrl_id);
            m_ctrlmap[ctrl_id] = dynamic_cast<CControlInterface*>(pCapacitanceCtrl);
            break;
        }
    case CONTROL_PANTOGRAPHSTATE:
        {
            CPantographStateCtrl* pPantographStateCtrl = new CPantographStateCtrl();
            pPantographStateCtrl->Create(ctrl_str,
                                         actual_ctrl_rc,
                                         ctrl_txtcolor,
                                         ctrl_font,
                                         ctrl_bkcolor,
                                         &m_painter,
                                         ctrl_id);
            m_ctrlmap[ctrl_id] = dynamic_cast<CControlInterface*>(pPantographStateCtrl);
            break;
        }
    case CONTROL_IMAGE:     
        {
            CImageCtrl* pImageCtrl = new CImageCtrl();
            pImageCtrl->Create(ctrl_str,
                               actual_ctrl_rc,
                               ctrl_txtcolor,
                               ctrl_font,
                               ctrl_bkcolor,
                               &m_painter,
                               ctrl_id);
            m_ctrlmap[ctrl_id] = dynamic_cast<CControlInterface*>(pImageCtrl);
            break;
        }
    case CONTROL_TRIANGLE:
        {
            CTriangleCtrl* pTriangleCtrl = new CTriangleCtrl();
            pTriangleCtrl->Create(ctrl_str,
                                  actual_ctrl_rc,
                                  ctrl_txtcolor,
                                  ctrl_font,
                                  ctrl_bkcolor,
                                  &m_painter,
                                  ctrl_id);
            m_ctrlmap[ctrl_id] = dynamic_cast<CControlInterface*>(pTriangleCtrl);
            break;
        }
    case CONTROL_LINE:
        {
            CLine* pLineCtrl = new CLine();
            pLineCtrl->Create(ctrl_str,
                              actual_ctrl_rc,
                              ctrl_txtcolor,
                              ctrl_font,
                              ctrl_bkcolor,
                              &m_painter,
                              ctrl_id);
            m_ctrlmap[ctrl_id] = dynamic_cast<CControlInterface*>(pLineCtrl);
            break;
        }
    case CONTROL_CIRCLE:
        {
            CCircle* pCircleCtrl = new CCircle();
            pCircleCtrl->Create(ctrl_str,
                                actual_ctrl_rc,
                                ctrl_txtcolor,
                                ctrl_font,
                                ctrl_bkcolor,
                                &m_painter,
                                ctrl_id);
            m_ctrlmap[ctrl_id] = dynamic_cast<CControlInterface*>(pCircleCtrl);
            break;
        }
    case CONTROL_CHECKBOX:
        {
            CCheckBox* pCheckBox = new CCheckBox();
            pCheckBox->Create(ctrl_str,
                              actual_ctrl_rc,
                              ctrl_txtcolor,
                              ctrl_font,
                              ctrl_bkcolor,
                              &m_painter,
                              ctrl_id);
            m_ctrlmap[ctrl_id] = dynamic_cast<CControlInterface*>(pCheckBox);
            break;
        }
    case CONTROL_SLIDER:
        {
            CSliderCtrl* pSliderCtrl = new CSliderCtrl();
            pSliderCtrl->Create(ctrl_str,
                              actual_ctrl_rc,
                              ctrl_txtcolor,
                              ctrl_font,
                              ctrl_bkcolor,
                              &m_painter,
                              ctrl_id);
            m_ctrlmap[ctrl_id] = dynamic_cast<CControlInterface*>(pSliderCtrl);
            break;
        }
    case CONTROL_TRAINDIAGRAM:
        {
            CTrainDiagramCtrl* pTrainDiagramCtrl = new CTrainDiagramCtrl();
            pTrainDiagramCtrl->Create(ctrl_str,
                                      actual_ctrl_rc,
                                      ctrl_txtcolor,
                                      ctrl_font,
                                      ctrl_bkcolor,
                                      &m_painter,
                                      ctrl_id);
             m_ctrlmap[ctrl_id] = dynamic_cast<CControlInterface*>(pTrainDiagramCtrl);
            break;
        }

        //
    case CONTROL_BAR:
        {
            cbar* pcbar = new cbar();
            pcbar->Create(ctrl_str,
                                      actual_ctrl_rc,
                                      ctrl_txtcolor,
                                      ctrl_font,
                                      ctrl_bkcolor,
                                      &m_painter,
                                      ctrl_id);
             m_ctrlmap[ctrl_id] = dynamic_cast<CControlInterface*>(pcbar);
            break;
        }
    default:
        ASSERT(false); //error:unkown control type.
        break;
    }
}

void CPage::RemoveControl(
                           __in int ctrl_id
                          )
{
    if(m_ctrlmap.find(ctrl_id) != m_ctrlmap.end())
    {
        m_painter.setBrush(Qt::black);
        m_painter.setPen(Qt::black);
        m_painter.drawRect(GetDlgItem(ctrl_id)->GetCtrlRect());
        m_ctrlmap.erase(ctrl_id);
    }
}

void CPage::ResetButtonState()
{
    for(CONTROLMAP::iterator it = m_ctrlmap.begin(); it != m_ctrlmap.end(); ++it)
    {
        if(0xFF00 != ((it->second->GetCtrlID()) & 0xFF00))
        {
            if(it->second->IsKindOf("CButton"))
            {
                CButton* pButton = (CButton*)it->second;
                if(pButton->m_bAutoUpState)
                {
                  if(CGlobal::m_nCurPageIndex == PAGE_ROM_INDEX_SYSLOGIN)
                  {
                      if(it->second->GetCtrlID()!= ID_PICLOGIN_BUTTON_DRIVER
                          && it->second->GetCtrlID()!= ID_PICLOGIN_BUTTON_MAINTAINER
                          && it->second->GetCtrlID()!= ID_PICLOGIN_BUTTON_PINNUMBER)
                            pButton->ChangeButtonState(LBUTTON_UP);
                  }
                  else
                  {
                      pButton->ChangeButtonState(LBUTTON_UP);
                  }
               }
            }
            else if(it->second->IsKindOf("CBitmapButton"))
            {
                CBitmapButton* pBMPButton = (CBitmapButton*)it->second;
                if(pBMPButton->GetCtrlText() == "uppress.png")
                {
                   pBMPButton->SetCtrlText("up.png");
                }
                else if(pBMPButton->GetCtrlText() == "downpress.png")
                {
                   pBMPButton->SetCtrlText("down.png");
                }
                pBMPButton->ChangeButtonState(LBUTTON_UP);
            }
            else if (it->second->IsKindOf("CLabel"))
            {
                if(CGlobal::m_nCurPageIndex == PAGE_ROM_INDEX_MAIN)
                {
                    if((it->second->GetCtrlID()== ID_PICMAIN_LABEL_FAULTGRADE)
                      || (it->second->GetCtrlID()== ID_PICMAIN_LABEL_FAULTCODE)
                      || (it->second->GetCtrlID()== ID_PICMAIN_LABEL_FAULTNAME)
                      || (it->second->GetCtrlID()== ID_PICMAIN_LABEL_FAULTDEVICE)
                      || (it->second->GetCtrlID()== ID_PICMAIN_LABEL_FAULTPOSITION))
                    {
                        it->second->SetCtrlBKColor(Qt::black);
                        it->second->SetTxtColor(Qt::yellow);
                    }
                }
            }
        }
    }
}

bool CPage::TestControlExists(
                              __in int ctrl_id
                             )
{
    if(find_if(m_ctrlmap.begin(), m_ctrlmap.end(), bind2nd(FINDKEY<CONTROLPAIR>(),ctrl_id)) == m_ctrlmap.end())
    {
        return false;
    }
    return true;
}

CControlInterface* CPage::GetDlgItem(
                                     __in int ctrl_id, // control id
                                    QString str)
{
    if(!TestControlExists(ctrl_id))
    {
        QMessageBox::warning(NULL,
                             QSTR("错误in") + str,
                             QSTR("页面索引：0x")+QString::number(m_nPageIndex,16) + "\n" + QSTR("控制ID:0x") +
                             QString::number(ctrl_id,16)+ QSTR("没有找到！"),
                             QMessageBox::Ok,QMessageBox::Ok);
        assert(false);  //error: cant find control
    }

    return m_ctrlmap[ctrl_id];
}

void CPage::ChangeLay1ButtonState(
                                  __in int nID // button id
                                 )
{
    int nIDArray[] =
    {
        IDBTN_NAVIBAR_MAIN,
        IDBTN_NAVIBAR_NET,
        IDBTN_NAVIBAR_TCU,
        IDBTN_NAVIBAR_APS,
        IDBTN_NAVIBAR_BRAKE,
        IDBTN_NAVIBAR_PIS,
        IDBTN_NAVIBAR_HVAC,
        IDBTN_NAVIBAR_MAINTAIN
    };
    int IDArraylen = sizeof(nIDArray)/sizeof(int);

    CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
    CButton* pButton = NULL;

    for(int i = 0; i < IDArraylen; i++)
    {
        pButton = (CButton *)(pPage->GetDlgItem(nIDArray[i]));
        if(nIDArray[i] == nID)
        {
            pButton->ChangeButtonState(LBUTTON_DOWN);       
        }
        else
        {
            pButton->ChangeButtonState(LBUTTON_UP);
        }
    }
}

void CPage::ChangeLay2_1ButtonState(
                                    __in int nID
                                   )
{
    const int IDArraylen = 3;
    int nIDArray[IDArraylen] =
    {
        IDBTN_NAVIBAR_HVACSTATE,
        IDBTN_NAVIBAR_HVACPARAMSET,
        IDBTN_NAVIBAR_HVACTEST
    };
    CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
    CButton* pButton = NULL;

    for(int i = 0; i < IDArraylen; i++)
    {
        pButton = (CButton *)(pPage->GetDlgItem(nIDArray[i]));
        if(nIDArray[i] == nID)
        {
            pButton->ChangeButtonState(LBUTTON_DOWN);
        }
        else
        {
            pButton->ChangeButtonState(LBUTTON_UP);
        }
    }
}

void CPage::ChangeLay2_2ButtonState(
                                    __in int nID
                                   )
{
    const int IDArraylen = 5;
    int nIDArray[IDArraylen] =
    {
        IDBTN_NAVIBAR_PARAMSET,
        IDBTN_NAVIBAR_INSTRUCTIONTEST,
        IDBTN_NAVIBAR_CURRENTFAULTLIST,
        IDBTN_NAVIBAR_HISTROYFAULTLIST,
        IDBTN_NAVIBAR_DOOR
    };
    CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
    CButton* pButton = NULL;

    for(int i = 0; i < IDArraylen; i++)
    {
        pButton = (CButton *)(pPage->GetDlgItem(nIDArray[i]));
        if(nIDArray[i] == nID)
        {
            pButton->ChangeButtonState(LBUTTON_DOWN);
        }
        else
        {
            pButton->ChangeButtonState(LBUTTON_UP);
        }
    }
}

//lay 1
void CPage::OnCommonMainButtonDown()
{
    if( CGlobal::m_nCurPageIndex == PAGE_ROM_INDEX_MAIN )
        return;
    ChangePage(PAGE_ROM_INDEX_MAIN);
    ChangeLay1ButtonState(IDBTN_NAVIBAR_MAIN);
}

void CPage::OnCommonNETButtonDown()
{
    if( CGlobal::m_nCurPageIndex == PAGE_ROM_INDEX_NETSTATE )
        return;

//    if(MAIN_TRAINCOUPLED_BOOL&&MAIN_TRAIN_COUPLED_MS_BOOL)
  if(1)
    {
        ChangePage(PAGE_ROM_INDEX_NETSTATECOUPLED);
    }
    else
    {
       ChangePage(PAGE_ROM_INDEX_NETSTATE);

    }
      //ChangePage(PAGE_ROM_INDEX_NETSTATECOUPLED);

    ChangeLay1ButtonState(IDBTN_NAVIBAR_NET);
}

void CPage::OnCommonTCUButtonDown()
{
    if( CGlobal::m_nCurPageIndex == PAGE_ROM_INDEX_TCUSTATE )
        return;
    ChangePage(PAGE_ROM_INDEX_TCUSTATE);
    ChangeLay1ButtonState(IDBTN_NAVIBAR_TCU);
}

void CPage::OnCommonAPSButtonDown()
{
    if( CGlobal::m_nCurPageIndex == PAGE_ROM_INDEX_ACUSTATE )
        return;
    if(MAIN_TRAINCOUPLED_BOOL&&MAIN_TRAIN_COUPLED_MS_BOOL)
    {
        ChangePage(PAGE_ROM_INDEX_ACUSTATEPAGECOUPLED);
    }
    else
    {
       ChangePage(PAGE_ROM_INDEX_ACUSTATE);
       //ChangePage(PAGE_ROM_INDEX_ACUSTATEPAGECOUPLED);

    }
    //ChangePage(PAGE_ROM_INDEX_ACUSTATEPAGECOUPLED);
    //ChangePage(PAGE_ROM_INDEX_ACUSTATEPAGECOUPLED);
    ChangeLay1ButtonState(IDBTN_NAVIBAR_APS);
}

void CPage::OnCommonBRAKEButtonDown()
{
    if( CGlobal::m_nCurPageIndex == PAGE_ROM_INDEX_BCUSTATE )
        return;
    if(MAIN_TRAINCOUPLED_BOOL&&MAIN_TRAIN_COUPLED_MS_BOOL)
    {
        ChangePage(PAGE_ROM_INDEX_BCUSTATEPAGECOUPLED);
    }
    else
    {
       ChangePage(PAGE_ROM_INDEX_BCUSTATE);

    }
    //ChangePage(PAGE_ROM_INDEX_BCUSTATE);
    ChangeLay1ButtonState(IDBTN_NAVIBAR_BRAKE);
}

void CPage::OnCommonDCDCButtonDown()
{

    if( CGlobal::m_nCurPageIndex == PAGE_ROM_INDEX_DCDCSTATE )
        return;
    if(MAIN_TRAINCOUPLED_BOOL&&MAIN_TRAIN_COUPLED_MS_BOOL)
    {
        ChangePage(PAGE_ROM_INDEX_DCDCSTATE);//这里应该是重联页面
    }
    else
    {
       ChangePage(PAGE_ROM_INDEX_DCDCSTATE);

    }
    //ChangePage(PAGE_ROM_INDEX_BCUSTATE);

     ChangeLay1ButtonState(IDBTN_NAVIBAR_PIS);
//    if( CGlobal::m_nCurPageIndex == PAGE_ROM_INDEX_DCDCSTATE )
//        return;
//    ChangePage(PAGE_ROM_INDEX_DCDCSTATE);
//    ChangeLay1ButtonState(IDBTN_NAVIBAR_DCDC);
}

void CPage::OnCommonPISButtonDown()
{
    if( CGlobal::m_nCurPageIndex == PAGE_ROM_INDEX_PIS )
        return;
    ChangePage(PAGE_ROM_INDEX_PIS);
    ChangeLay1ButtonState(IDBTN_NAVIBAR_PIS);
}

void CPage::OnCommonHVACButtonDown()
{
    if(MAIN_TRAINCOUPLED_BOOL&&MAIN_TRAIN_COUPLED_MS_BOOL)
    {
        ChangePage(PAGE_ROM_INDEX_HVACSTATEPAGECOUPLED);
    }
    else
    {
       ChangePage(PAGE_ROM_INDEX_HVACSTATE);

    }
    ChangePage(PAGE_ROM_INDEX_HVACSTATE);
    ChangeLay1ButtonState(IDBTN_NAVIBAR_HVAC);
}

void CPage::OnCommonMAINTAINButtonDown()
{
    ChangePage(PAGE_ROM_INDEX_PARAMETERSET);
    ChangeLay1ButtonState(IDBTN_NAVIBAR_MAINTAIN);
    //ChangeLay2_2ButtonState(IDBTN_NAVIBAR_PARAMSET);
}

//lay 2 hvac statas

void CPage::OnCommonHVACSTATEButtonDown()
{
    if( CGlobal::m_nCurPageIndex == PAGE_ROM_INDEX_HVACSTATE )
        return;
    ChangePage(PAGE_ROM_INDEX_HVACSTATE);
    ChangeLay2_1ButtonState(IDBTN_NAVIBAR_HVACSTATE);
}

void CPage::OnCommonHVACPARAMSETButtonDown()
{
    if( CGlobal::m_nCurPageIndex == PAGE_ROM_INDEX_HVACPARAMETERSET )
        return;
    //ChangePage(PAGE_ROM_INDEX_HVACPARAMETERSET);
    ChangeLay2_1ButtonState(IDBTN_NAVIBAR_HVACPARAMSET);
}
void CPage::OnCommonHVACTESTButtonDown()
{
    if( CGlobal::m_nCurPageIndex == PAGE_ROM_INDEX_HVACTEST )
        return;
    ChangePage(PAGE_ROM_INDEX_HVACTEST);
    ChangeLay2_1ButtonState(IDBTN_NAVIBAR_HVACTEST);
}
void CPage::OnCommonPARAMSETButtonDown()
{
    if( CGlobal::m_nCurPageIndex == PAGE_ROM_INDEX_PARAMETERSET )
        return;
    ChangePage(PAGE_ROM_INDEX_PARAMETERSET);
    ChangeLay2_2ButtonState(IDBTN_NAVIBAR_PARAMSET);
}

void CPage::OnCommonINSTRUCTIONTESTButtonDown()
{
    if (ENUM_LOGIN_TYPE_MAINTAINER != g_login_type)
    {
        ShowWarningDialog();
        return;
    }
    if( CGlobal::m_nCurPageIndex == PAGE_ROM_INDEX_INSTRUCTIONTEST )
        return;
    ChangePage(PAGE_ROM_INDEX_INSTRUCTIONTEST);
    ChangeLay2_2ButtonState(IDBTN_NAVIBAR_INSTRUCTIONTEST);
}

void CPage::OnCommonCURRENTFAULTLISTButtonDown()
{
    if( CGlobal::m_nCurPageIndex == PAGE_ROM_INDEX_CURRENTFAULTLIST )
        return;
    ChangePage(PAGE_ROM_INDEX_CURRENTFAULTLIST);
   // ChangeLay2_2ButtonState(IDBTN_NAVIBAR_CURRENTFAULTLIST);
}

void CPage::OnCommonHISTROYFAULTLISTButtonDown()
{
    if( CGlobal::m_nCurPageIndex == PAGE_ROM_INDEX_HISTORYFAULTLIST )
        return;
    ChangePage(PAGE_ROM_INDEX_HISTORYFAULTLIST);
    ChangeLay2_2ButtonState(IDBTN_NAVIBAR_HISTROYFAULTLIST);
    CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
    if (ENUM_LOGIN_TYPE_MAINTAINER == g_login_type)
    {
        if (!pPage->TestControlExists(ID_PICHFL_BUTTON_DELETE_ALL))
        {
            pPage->AddControl(QSTR("Delete All"), QRect(513, 405, 107, 25), Qt::yellow, D_COMMON_TITLE_FONT, Qt::black, ID_PICHFL_BUTTON_DELETE_ALL, CONTROL_BUTTON);
        }
    }
    else
    {
        if (pPage->TestControlExists(ID_PICHFL_BUTTON_DELETE_ALL))
        {
            pPage->RemoveControl(ID_PICHFL_BUTTON_DELETE_ALL);
        }
    }
}

void CPage::OnCommonDOORButtonDown()
{
    if( CGlobal::m_nCurPageIndex == PAGE_ROM_INDEX_DOOR )
        return;
    ChangePage(PAGE_ROM_INDEX_DOOR);
    ChangeLay2_2ButtonState(IDBTN_NAVIBAR_DOOR);
}

void CPage::OnCommonDATEButtonDown()
{
    //if(g_login_type==ENUM_LOGIN_TYPE_MAINTAINER) // 20120105 add
    {
#ifdef DEBUG_MODE
//        if(CGlobal::m_nCurPageIndex != PAGE_ROM_INDEX_SERIALDATA)
//        {
//            m_nPrePageIndex = CGlobal::m_nCurPageIndex;
//        }
        CGlobal::m_nCurPageIndex = PAGE_ROM_INDEX_MAIN;
#endif
    }

}

void CPage::OnCommonTIMEButtonDown()
{
    if(g_login_type==ENUM_LOGIN_TYPE_MAINTAINER) // 20120105 add
    {
#ifdef DEBUG_MODE
        //if((PAGE_ROM_INDEX_SERIALDATA == CGlobal::m_nCurPageIndex) && (PAGE_ROM_INDEX_SYSLOGIN != m_nPrePageIndex))
        //{
            CGlobal::m_nCurPageIndex = PAGE_ROM_INDEX_UDPDATAPAGE1;
        //}
#endif
    }

}

void CPage::OnCommonHELPButtonDown()
{
    switch(CGlobal::m_nCurPageIndex)
    {
    case PAGE_ROM_INDEX_MAIN:
        {
           CMainHelpDialog dlg;
           dlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-dlg.width())/2),m_pDlg->y()+int((m_pDlg->height()-dlg.height())/2),dlg.width(),dlg.height());
           dlg.exec();
           break;
        }
//    case PAGE_ROM_INDEX_ACUSTATE:
//        {
//           CAcuHelpDialog dlg;
//           dlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-dlg.width())/2),m_pDlg->y()+int((m_pDlg->height()-dlg.height())/2),dlg.width(),dlg.height());
//           dlg.exec();
//           break;
//        }
//    case PAGE_ROM_INDEX_BCUSTATE:
//        {
//           CBcuHelpDialog dlg;
//           dlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-dlg.width())/2),m_pDlg->y()+int((m_pDlg->height()-dlg.height())/2),dlg.width(),dlg.height());
//           dlg.exec();
//           break;
//        }
//    case PAGE_ROM_INDEX_DCDCSTATE:
//        {
//           CDcdcHelpDialog dlg;
//           dlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-dlg.width())/2),m_pDlg->y()+int((m_pDlg->height()-dlg.height())/2),dlg.width(),dlg.height());
//           dlg.exec();
//           break;
//        }
//    case PAGE_ROM_INDEX_HVACSTATE:
//        {
//           CHvacHelpDialog dlg;
//           dlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-dlg.width())/2),m_pDlg->y()+int((m_pDlg->height()-dlg.height())/2),dlg.width(),dlg.height());
//           dlg.exec();
//           break;
//        }
    case PAGE_ROM_INDEX_NETSTATE:
        {
           CNetHelpDialog dlg;
           dlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-dlg.width())/2),m_pDlg->y()+int((m_pDlg->height()-dlg.height())/2),dlg.width(),dlg.height());
           dlg.exec();
           break;
        }
    default:
        {
           CWarningDialog dlg;
           dlg.SetWarningStr(QSTR("No Help Information!"));
           dlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-dlg.width())/2),m_pDlg->y()+int((m_pDlg->height()-dlg.height())/2),dlg.width(),dlg.height());
           dlg.exec();
           break;
        }
    }
}

void CPage::OnSerialDialogClk()
{
    if(((Dialog*)GetParentDlg())->serialDebugDlg.isHidden())
        ((Dialog*)GetParentDlg())->serialDebugDlg.show();
}

void CPage::UpdatePage()
{


    //
    CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
    pPage->OnUpdatePage();
    pPage->UpdateCommonLabel();
    if (pPage->TestControlExists(ID_COM_WARNING))
    {
        if (0 == g_unconfirmed_faults_num)
        {
            ((CImageCtrl *)pPage->GetDlgItem(ID_COM_WARNING))->UpdateImage("warning_icon_invalid.png");
        }
        else
        {
            ((CImageCtrl *)pPage->GetDlgItem(ID_COM_WARNING))->UpdateImage("warning_icon.png");
        }
    }
}

void CPage::UpdateCommonLabel()
{
    //test if control exists
    if (!TestControlExists(IDLB_COM_NETVOLTAGE)
        || !TestControlExists(IDLB_COM_BATTERYVOLTAGE)
        || !TestControlExists(IDLB_COM_CURRENTSTATION)
        || !TestControlExists(IDLB_COM_NEXTSTATION))
    {
        return;
    }

   

    //20130118 modify begin
    //网压取本车的值，即 R2_MVB_3(Port111－>g_dataBuffer_MVB[512])

    if( (((int)R2_MVB_3_LineVolt_U16)>=400)&&((int)R2_MVB_3_LineVolt_U16<=900) )
    {
        GetDlgItem(IDLB_COM_NETVOLTAGE)->SetTxtColor(Qt::green);
        if(LCUCCU_3_P_DI_1_CH22_B1)//KTW
        {
        GetDlgItem(IDLB_COM_NETVOLTAGE)->SetCtrlText( QSTR("网压:") + QString::number(R2_MVB_3_LineVolt_U16) + "V "+QSTR("靴"));
        }
        else
        {
            if(LCUCCU_3_P_DI_1_CH23_B1)//KTP
            {
                 GetDlgItem(IDLB_COM_NETVOLTAGE)->SetCtrlText( QSTR("网压:") + QString::number(R2_MVB_3_LineVolt_U16) + "V "+QSTR("弓"));
            }
            else
            {
                if(LCUCCU_3_P_DI_1_CH21_B1)//KGS
                {
                 GetDlgItem(IDLB_COM_NETVOLTAGE)->SetCtrlText( QSTR("网压:") + QString::number(R2_MVB_3_LineVolt_U16) + "V "+QSTR("库"));
                }
                 else
                {
                     GetDlgItem(IDLB_COM_NETVOLTAGE)->SetCtrlText( QSTR("网压:") + QString::number(R2_MVB_3_LineVolt_U16) + "V "+QSTR("无"));

                }
            }
        }
    }
    else
    {
        GetDlgItem(IDLB_COM_NETVOLTAGE)->SetTxtColor(Qt::yellow);
        if(LCUCCU_3_P_DI_1_CH22_B1)//KTW
        {
        GetDlgItem(IDLB_COM_NETVOLTAGE)->SetCtrlText( QSTR("网压:") + QString::number(R2_MVB_3_LineVolt_U16) + "V "+QSTR("靴"));
        }
        else
        {
             if(LCUCCU_3_P_DI_1_CH23_B1)//KTP
            {
                 GetDlgItem(IDLB_COM_NETVOLTAGE)->SetCtrlText( QSTR("网压:") + QString::number(R2_MVB_3_LineVolt_U16) + "V "+QSTR("弓"));
            }
            else
            {
                 if(LCUCCU_3_P_DI_1_CH21_B1)//KGS
                {
                 GetDlgItem(IDLB_COM_NETVOLTAGE)->SetCtrlText( QSTR("网压:") + QString::number(R2_MVB_3_LineVolt_U16) + "V "+QSTR("弓 库"));
                }
                 else
                {
                     GetDlgItem(IDLB_COM_NETVOLTAGE)->SetCtrlText( QSTR("网压:") + QString::number(R2_MVB_3_LineVolt_U16) + "V "+QSTR("无"));

                }
            }
        }
    }



    //20130118 modify end
//R2_MVB_3_Veh_Status_E4_Master
//    0000 UNDEFINED
//    0001 PARKING                       1           停车
//    0010 Security Brake                2           安全制动
//    0011 EMERGENZY BRAKE               3           紧急制动
//    0100 HELP BRAKE                    4           警惕手柄
//    0101 Service Brake                 5           常用制动
//    0110 COASTING                      6           惰行
//    0111 Extratorque Traction          7           高加速
//    1000 Traction                      8           牵引
//    1001 Initial state DESK_OFF        9
//    1011 Traction Block                11


    //*******************8

    if(R2_MVB_3_St_MtbCntMA_B1||R2_MVB_3_St_MtbCntMB_B1||R2_MVB_3_St_MtbCntP_B1)//Magnetic track brake
    {
        GetDlgItem(IDLB_COM_NETCURRENT2)->SetTxtColor(Qt::red);
      GetDlgItem(IDLB_COM_NETCURRENT2)->SetCtrlText( QSTR("磁轨"));

    }
    else
    {
        GetDlgItem(IDLB_COM_NETCURRENT2)->SetTxtColor(Qt::red);
      GetDlgItem(IDLB_COM_NETCURRENT2)->SetCtrlText( QSTR(""));
    }

    if(R2_MVB_3_Veh_Status_E4==2)
    {
       GetDlgItem(IDLB_COM_NETCURRENT)->SetTxtColor(Qt::red);
       GetDlgItem(IDLB_COM_NETCURRENT)->SetCtrlText( QSTR("安全制动"));
    }else if((R2_MVB_3_Veh_Status_E4==3)||(R2_MVB_3_Veh_Status_E4==4))
    {
       GetDlgItem(IDLB_COM_NETCURRENT)->SetTxtColor(Qt::red);
       GetDlgItem(IDLB_COM_NETCURRENT)->SetCtrlText( QSTR("紧急制动 "));
    }else if(R2_MVB_3_Veh_Status_E4==5)
    {
       GetDlgItem(IDLB_COM_NETCURRENT)->SetTxtColor(Qt::red);
       GetDlgItem(IDLB_COM_NETCURRENT)->SetCtrlText( QSTR("制动"));
    }else if(R2_MVB_3_Veh_Status_E4==8)
    {
       GetDlgItem(IDLB_COM_NETCURRENT)->SetTxtColor(Qt::green);
       GetDlgItem(IDLB_COM_NETCURRENT)->SetCtrlText( QSTR("牵引"));
    }else if(R2_MVB_3_Veh_Status_E4==6)
    {
       GetDlgItem(IDLB_COM_NETCURRENT)->SetTxtColor(Qt::green);
       GetDlgItem(IDLB_COM_NETCURRENT)->SetCtrlText( QSTR("惰行"));
    }else if(R2_MVB_3_Veh_Status_E4==7)
    {
       GetDlgItem(IDLB_COM_NETCURRENT)->SetTxtColor(Qt::green);
       GetDlgItem(IDLB_COM_NETCURRENT)->SetCtrlText( QSTR("高加速"));
    }else if(R2_MVB_3_Veh_Status_E4==1)
    {
       GetDlgItem(IDLB_COM_NETCURRENT)->SetTxtColor(Qt::green);
       GetDlgItem(IDLB_COM_NETCURRENT)->SetCtrlText( QSTR("停车"));
    }else
    {
       GetDlgItem(IDLB_COM_NETCURRENT)->SetCtrlText( QSTR(""));
    }




//****************************





   // if(m_TrainCoupleActive ==2)
    if( m_TestNum == 3)
    {
        //BJXJ_数据流待定
        GetDlgItem(IDLB_COM_BATTERYVOL_MAM)->SetCtrlText( QString::number(TCU1CCU_4_CBvBat_U16*0.1));
        GetDlgItem(IDLB_COM_BATTERYVOL_MBM)->SetCtrlText( QString::number(TCU3CCU_4_CBvBat_U16*0.1) );
        GetDlgItem(IDLB_COM_BATTERYVOL_MAS)->SetCtrlText( QString::number(R2_MVB_2_BcBattVoltMa_U8_Slave2*0.2) );
        GetDlgItem(IDLB_COM_BATTERYVOL_MBS)->SetCtrlText( QString::number(R2_MVB_2_BcBattVoltMb_U8_Slave2*0.2) );

        GetDlgItem(IDLB_COM_CAP_MAM)->SetCtrlText( QString::number(SC1ALL_Capacity_U8 ));
        GetDlgItem(IDLB_COM_CAP_MBM)->SetCtrlText( QString::number(SC2ALL_Capacity_U8 ));
        GetDlgItem(IDLB_COM_CAP_MAS)->SetCtrlText( QString::number(R2_MVB_2_ScuRaCapacity_U8_Slave3 ));
        GetDlgItem(IDLB_COM_CAP_MBS)->SetCtrlText( QString::number(R2_MVB_2_ScuRbCapacity_U8_Slave3 ));
    }
    else if(m_TestNum == 4)
    {
//        GetDlgItem(IDLB_COM_BATTERYVOL_MAM)->SetCtrlText( QString::number(R2_MVB_2_BcBattVoltMa_U8_Master2*0.2) );
//        GetDlgItem(IDLB_COM_BATTERYVOL_MBM)->SetCtrlText( QString::number(R2_MVB_2_BcBattVoltMb_U8_Master2*0.2) );
//        GetDlgItem(IDLB_COM_BATTERYVOL_MAS)->SetCtrlText( QString::number(TCU1CCU_4_CBvBat_U16*0.1) );
//        GetDlgItem(IDLB_COM_BATTERYVOL_MBS)->SetCtrlText( QString::number(TCU3CCU_4_CBvBat_U16*0.1) );

//        GetDlgItem(IDLB_COM_CAP_MAM)->SetCtrlText( QString::number(R2_MVB_2_ScuRaCapacity_U8_Master3 ) );
//        GetDlgItem(IDLB_COM_CAP_MBM)->SetCtrlText( QString::number(R2_MVB_2_ScuRbCapacity_U8_Master3 ) );
//        GetDlgItem(IDLB_COM_CAP_MAS)->SetCtrlText( QString::number(SC1ALL_Capacity_U8 ) );
//        GetDlgItem(IDLB_COM_CAP_MBS)->SetCtrlText( QString::number(SC2ALL_Capacity_U8 ) );

        GetDlgItem(IDLB_COM_BATTERYVOL_MAM)->SetCtrlText( QString::number(23) );
        GetDlgItem(IDLB_COM_BATTERYVOL_MBM)->SetCtrlText( QString::number(24) );
        GetDlgItem(IDLB_COM_BATTERYVOL_MAS)->SetCtrlText( QString::number(22) );
        GetDlgItem(IDLB_COM_BATTERYVOL_MBS)->SetCtrlText( QString::number(263*0.1) );

        GetDlgItem(IDLB_COM_CAP_MAM)->SetCtrlText( QString::number(94 ) );
        GetDlgItem(IDLB_COM_CAP_MBM)->SetCtrlText( QString::number(93 ) );
        GetDlgItem(IDLB_COM_CAP_MAS)->SetCtrlText( QString::number(99 ) );
        GetDlgItem(IDLB_COM_CAP_MBS)->SetCtrlText( QString::number(100 ) );

    }
    else if( m_TestNum == 2)
    {
        GetDlgItem(IDLB_COM_BATTERYVOL_MAM)->SetCtrlText( QString::number(TCU1CCU_4_CBvBat_U16*0.1) );
        GetDlgItem(IDLB_COM_BATTERYVOL_MBM)->SetCtrlText( QString::number(TCU3CCU_4_CBvBat_U16*0.1) );
        GetDlgItem(IDLB_COM_BATTERYVOL_MAS)->SetCtrlText( "--" );
        GetDlgItem(IDLB_COM_BATTERYVOL_MBS)->SetCtrlText( "--" );

        GetDlgItem(IDLB_COM_CAP_MAM)->SetCtrlText( QString::number(SC1ALL_Capacity_U8 ) );
        GetDlgItem(IDLB_COM_CAP_MBM)->SetCtrlText( QString::number(SC2ALL_Capacity_U8 ) );
        GetDlgItem(IDLB_COM_CAP_MAS)->SetCtrlText( "--" );
        GetDlgItem(IDLB_COM_CAP_MBS)->SetCtrlText( "--" );
    }
    else
    {
        GetDlgItem(IDLB_COM_BATTERYVOL_MAM)->SetCtrlText(QSTR("--") );
        GetDlgItem(IDLB_COM_BATTERYVOL_MBM)->SetCtrlText(QSTR("--") );
        GetDlgItem(IDLB_COM_BATTERYVOL_MAS)->SetCtrlText(QSTR("--"));
        GetDlgItem(IDLB_COM_BATTERYVOL_MBS)->SetCtrlText(QSTR("--"));

        GetDlgItem(IDLB_COM_CAP_MAM)->SetCtrlText( QSTR("--"));
        GetDlgItem(IDLB_COM_CAP_MBM)->SetCtrlText( QSTR("--"));
        GetDlgItem(IDLB_COM_CAP_MAS)->SetCtrlText( QSTR("--"));
        GetDlgItem(IDLB_COM_CAP_MBS)->SetCtrlText( QSTR("--"));
    }




    /*int  a; //BJXJ_下一站ID
    int b; //BJXJ_当前站ID

    a= PA1All_NextStationID_U8;
    b= PA1All_ArrivalStationID_U8;
    if((a==0)&&(b!=0))
    {
    GetDlgItem(IDLB_COM_CURRENTSTATION)->SetCtrlText(QSTR("当前站"));
    QString str;
    str = GetStationName(b);
    GetDlgItem(IDLB_COM_NEXTSTATION)->SetCtrlText(str);
    }
    else if((a!=0)&&(b==0))
    {
        GetDlgItem(IDLB_COM_CURRENTSTATION)->SetCtrlText(QSTR("下一站"));
        QString str;
        str = GetStationName(a);
        GetDlgItem(IDLB_COM_NEXTSTATION)->SetCtrlText(str);
    }else
    {
            GetDlgItem(IDLB_COM_NEXTSTATION)->SetCtrlText("Nex"+QString::number(PA1All_NextStationID_U8));
            GetDlgItem(IDLB_COM_CURRENTSTATION)->SetCtrlText("Arr"+QString::number(PA1All_ArrivalStationID_U8));

    }*/

    GetDlgItem(IDLB_COM_CURRENTSTATION)->SetCtrlText(QSTR("当前站:")+GetStationName(PA1All_ArrivalStationID_U8));
    GetDlgItem(IDLB_COM_NEXTSTATION)->SetCtrlText(QSTR("下一站:")+GetStationName(PA1All_NextStationID_U8));


    int stationNum = 0;
    QStringList stationNameList;
    switch(LineNumber_Char)
    {
    case 1:
    case 2:
        stationNum = g_stationNameLine1.size();
        stationNameList = g_stationNameLine1;
        break;
    case 3:
    case 4:
        stationNum = g_stationNameLine2.size();
        stationNameList = g_stationNameLine2;
        break;
    case 5:
    case 6:
        stationNum = g_stationNameLine3.size();
        stationNameList = g_stationNameLine3;
        break;
    case 7:
    case 8:
        stationNum = g_stationNameLine4.size();
        stationNameList = g_stationNameLine4;
        break;
    case 9:
    case 10:
        stationNum = g_stationNameLine5.size();
        stationNameList = g_stationNameLine5;
        break;
    default:
        stationNum = g_stationNameLine1.size();
        stationNameList = g_stationNameLine1;
        break;
    }

    //qDebug() << "CPage::UpdateCommonLabel():" << MAIN_TOP_CURENTSTATION_QUINT8 << stationNum;
//    if( (MAIN_TOP_CURENTSTATION_QUINT8 > 0) && (MAIN_TOP_CURENTSTATION_QUINT8 < (stationNum+1)) )
//    {
//        str = QSTR("当前站：") + stationNameList.at((int)MAIN_TOP_CURENTSTATION_QUINT8 - 1);
//    }
//    else
//    {
//        //str = "CurrentStation: " + g_stationName.at(0);
//        str = QSTR(""); // 请设置当前站！
//    }

//    if( (MAIN_TOP_NEXTSTATION_QUINT8 > 0) && (MAIN_TOP_NEXTSTATION_QUINT8 < (stationNum+1)) )
//    {
//        //qDebug() << "CPage::UpdateCommonLabel():MAIN_TOP_NEXTSTATION_QUINT8:" << MAIN_TOP_NEXTSTATION_QUINT8;
//        str = QSTR("下一站：") + stationNameList.at((int)MAIN_TOP_NEXTSTATION_QUINT8 -1);
//    }
//    else
//    {
//        //str = "NextStation:" + g_stationName.at(1);
//        str = QSTR("下一站：");
//    }
//    str = QSTR("下一站：") + stationNameList.at((int)g_StationSet_TerminalStation_Uchar - 1);
//    GetDlgItem(IDLB_COM_NEXTSTATION)->SetCtrlText(str);

//    if(MAIN_HEADTAILCLASH_BOOL)
//   {
//        if(!(m_FaultDlgFlag))
//        {
//            qDebug()<<"123";
//            ChangePage(PAGE_ROM_INDEX_FAULTDOMODELPAGE);
//            m_FaultDlgFlag = true;
//        }
//   }
//   else
//   {
//      m_FaultDlgFlag = false;
//   }
}


 QString CPage::GetStationName(int stationID)
 {
     QString DestStation = 0 ;
     if ( (stationID > 0) && (stationID < 7) )
     {
         if (stationID == 1)
         {
             DestStation = QObject::trUtf8("香山");
         }
         else if (stationID == 2)
         {
             DestStation = QObject::trUtf8("植物园");
         }
         else if (stationID == 3)
         {
             DestStation = QObject::trUtf8("万安公园");
         }
         else if (stationID == 4)
         {
             DestStation = QObject::trUtf8("玉泉郊野公园");
         }
         else if (stationID == 5)
         {
             DestStation = QObject::trUtf8("颐和园西门");
         }
         else if (stationID == 6)
         {
             DestStation = QObject::trUtf8("巴沟");
         }
         else
         {
             DestStation = QObject::trUtf8("--");
         }

     }else
     {
         DestStation = QObject::trUtf8("--");

     }
    return   DestStation;

 }

void CPage::ChangePage(int nPageIndex)
{
    CGlobal::m_nCurPageIndex = nPageIndex;
    CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
    pPage->ConnectEvent(WM_SHOWPAGE);
    UpdatePage();
}
void CPage::ShowWarningDialog()
{
    CWarningDialog dlg;
    dlg.SetWarningStr(QSTR("Permission Denied!"));
    dlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
    dlg.exec();
}

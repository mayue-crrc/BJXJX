#include "cpantographstatectrl.h"

CPantographStateCtrl::CPantographStateCtrl()
{
    m_pPainter = NULL;
}

void CPantographStateCtrl::Create(__in QString& ctrl_str,
                        __in QRect& ctrl_rc,
                        __in QColor& ctrl_txtcolor,
                        __in QFont& ctrl_font,
                        __in QColor& ctrl_bkcolor,
                        __in QPainter* ctrl_painter,
                        __in int ctrl_ID)
{
    m_txtcolor = ctrl_txtcolor;
    m_font     = ctrl_font;
    m_bkcolor  = ctrl_bkcolor;
    m_rect     = ctrl_rc;
    m_nID      = ctrl_ID;
    m_pPainter = ctrl_painter;
    m_str      = ctrl_str;
    ASSERT(m_pPainter != NULL);

    DrawPantographStateCtrl();
}

void CPantographStateCtrl::SetCtrlText(
                                       __in QString ctrl_str // CPantographStateCtrl text
                                      )
{

}

void CPantographStateCtrl::SetTxtFont(
                                      __in QFont ctrl_font // CPantographStateCtrl font
                                     )
{

}

void CPantographStateCtrl::SetTxtColor(
                                       __in QColor ctrl_color //CPantographStateCtrl text color
                                      )
{

}

void CPantographStateCtrl::SetCtrlBKColor(
                                          __in QColor ctrl_bkcolor //CPantographStateCtrl bk color
                                         )
{

}

void CPantographStateCtrl::SetCtrlRect(
                                       __in QRect ctrl_rect //CPantographStateCtrl rect
                                      )
{

}

void CPantographStateCtrl::DrawPantographStateCtrl()
{

}

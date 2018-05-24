#include <QBitmap>

#include "csliderctrl.h"

CSliderCtrl::CSliderCtrl()
{
    m_typestr = "CSliderCtrl";
    m_pPainter = NULL;
}

void CSliderCtrl::Create(__in QString& ctrl_str,
                        __in QRect& ctrl_rc,
                        __in QColor& ctrl_txtcolor,
                        __in QFont& ctrl_font,
                        __in QColor& ctrl_bkcolor,
                        __in QPainter* ctrl_m_pPainter,
                        __in int ctrl_ID)
{
    m_txtcolor = ctrl_txtcolor;
    m_font     = ctrl_font;
    m_bkcolor  = ctrl_bkcolor;
    m_rect     = ctrl_rc;
    m_nID      = ctrl_ID;
    m_pPainter = ctrl_m_pPainter;
    m_str      = ctrl_str;
    ASSERT(m_pPainter != NULL);
    DrawSliderCtrl(0, m_rect.x());
 }

void CSliderCtrl::SetCtrlText(
                             __in QString ctrl_str // CSpeedCtrl text
                            )
{

}

void CSliderCtrl::SetTxtFont(
                            __in QFont ctrl_font // CSpeedCtrl font
                           )
{

}

void CSliderCtrl::SetTxtColor(
                             __in QColor ctrl_color // CSpeedCtrl text color
                            )
{

}

void CSliderCtrl::SetCtrlBKColor(
                                __in QColor ctrl_bkcolor // CSpeedCtrl bk color
                               )
{

}

void CSliderCtrl::SetCtrlRect(
                             __in QRect ctrl_rect // CSpeedCtrl rect
                            )
{

}

void CSliderCtrl::DrawSliderCtrl(__in int ctrl_type, __in int thumb_pos)
{
    QPixmap sliderBar("resource/image/sliderbar.png");
    QPixmap sliderThumb("resource/image/sliderthumb.png");
    QPixmap sliderThumbActive("resource/image/sliderthumbactive.png");
    QPixmap sliderThumbDisable("resource/image/sliderthumbdisable.png");
    QRect cleanRect(m_rect.x(), m_rect.y() - 10, m_rect.width(), m_rect.height());

    //clean
    m_pPainter->setBrush(QBrush(Qt::black, Qt::SolidPattern));
    m_pPainter->setPen(QPen(Qt::black, 2, Qt::SolidLine, Qt::RoundCap,Qt::MiterJoin));
    m_pPainter->drawRect(cleanRect);


    m_pPainter->drawPixmap(m_rect.x(), m_rect.y(), m_rect.width(), m_rect.height(), sliderBar);
    switch(ctrl_type) {
    case 0://init
        m_pPainter->drawPixmap(thumb_pos + m_rect.width()/2 - 10, m_rect.y() - 10, 20, 20, sliderThumb);
        break;
    case 1://lbuttondown
        m_pPainter->drawPixmap(thumb_pos, m_rect.y() - 10, 20, 20, sliderThumbActive);
        break;
    case 2://lbuttonup
        m_pPainter->drawPixmap(thumb_pos, m_rect.y() - 10, 20, 20, sliderThumb);
        break;
    case 3://mousemove
        m_pPainter->drawPixmap(thumb_pos, m_rect.y() - 10, 20, 20, sliderThumb);
        break;
    default :
        break;
    }
}

void CSliderCtrl::SetThumbInfo(__in int ctrl_type, __in int thumb_pos)
{
    DrawSliderCtrl(ctrl_type, thumb_pos);
}

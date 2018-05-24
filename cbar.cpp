#include "cbar.h"





cbar::cbar()
{
    m_typestr = "CBarCtrl";
    m_pPainter = NULL;
    m_Value = 0;
}

void cbar::Create(__in QString& ctrl_str,
                        __in QRect& ctrl_rc,
                        __in QColor& ctrl_frontcolor,
                        __in QFont& ctrl_font,
                        __in QColor& ctrl_bkcolor,
                        __in QPainter* ctrl_painter,
                        __in int ctrl_ID)
{
    m_txtcolor = ctrl_frontcolor;
    m_font     = ctrl_font;
    m_bkcolor  = ctrl_bkcolor;
    m_rect     = ctrl_rc;
    m_nID      = ctrl_ID;
    m_pPainter = ctrl_painter;
    m_str      = ctrl_str;
    ASSERT(m_pPainter != NULL);

    m_str = "";
    DrawBarCtrl();
}


void cbar::SetCtrlText(
                             __in QString /*ctrl_str*/
                            )
{

}

void  cbar::SetTxtFont(
                         __in QFont /*ctrl_font*/ //  font
                        )
{
}

void cbar::SetTxtColor(
                             __in QColor /*ctrl_txtcolor*/ // text color
                            )
{
}

void cbar::SetCtrlBKColor(
                                __in QColor /*ctrl_bkcolor*/ // bk color
                               )
{
}

void cbar::SetCtrlRect(
                             __in QRect /*ctrl_rect*/ // rect
                            )
{
}

void cbar::DrawBarCtrl()
{

}

void cbar::SetBarValueUP(
                                __in float nValue
                              )
{
     m_Value=nValue;
     m_pPainter->save();
     m_pPainter->setBrush(m_bkcolor);
     m_pPainter->fillRect(m_rect, m_bkcolor);

     m_pPainter->setPen(Qt::black);
     m_pPainter->drawRect(m_rect.x(), m_rect.y()-30, m_rect.width()+50, m_rect.height()+30);
     m_pPainter->setPen( QPen(Qt::yellow, 1, Qt::SolidLine, Qt::RoundCap,Qt::MiterJoin));
     m_pPainter->drawRect(m_rect.x(), m_rect.y(), m_rect.width(), m_rect.height());

     m_pPainter->setFont(m_font);
     for(int i = 0 ; i < 11 ; i++)
     {
         if(i%5==0)
         {
             m_pPainter->drawLine(QPoint(m_rect.x()+m_rect.width(),m_rect.y()+i*m_rect.height()/10),QPoint(m_rect.x()+m_rect.width()+15,m_rect.y()+i*m_rect.height()/10));
             m_pPainter->drawText(QRectF(m_rect.x()+m_rect.width()+15,m_rect.y()+i*m_rect.height()/10-10,m_rect.x()+m_rect.width()+35,m_rect.y()+i*m_rect.height()/10-10),QString::number((10-i)*10));
         }
         else
         {
             m_pPainter->drawLine(QPoint(m_rect.x()+m_rect.width(),m_rect.y()+i*m_rect.height()/10),QPoint(m_rect.x()+m_rect.width()+10,m_rect.y()+i*m_rect.height()/10));

         }
     }
     m_pPainter->setPen( QPen(Qt::yellow, 2, Qt::SolidLine, Qt::RoundCap,Qt::MiterJoin));

     m_pPainter->drawText( QRectF(m_rect.x(), m_rect.y()-30, m_rect.width()+20, 20),QSTR("牵引:"));

     m_pPainter->drawText( QRectF(m_rect.x()+m_rect.width()+5, m_rect.y()-30, m_rect.width()+20, 20),(QString::number(m_Value*100)+"%"));

     m_pPainter->setBrush(m_txtcolor);
     m_pPainter->fillRect( m_rect.x(), m_rect.y()+(1-m_Value)*m_rect.height(), m_rect.width(), m_rect.height()*m_Value, m_txtcolor);
     m_pPainter->restore();
}
void cbar::SetBarValueDOWN(
                                __in float nValue
                              )
{
     m_Value=nValue;
     m_pPainter->save();
     m_pPainter->setBrush(m_bkcolor);
     m_pPainter->fillRect(m_rect, m_bkcolor);

     m_pPainter->setPen(Qt::black);
     m_pPainter->drawRect(m_rect.x(), m_rect.y(), m_rect.width()+50, m_rect.height()+30);
     m_pPainter->setPen( QPen(Qt::yellow, 1, Qt::SolidLine, Qt::RoundCap,Qt::MiterJoin));
     m_pPainter->drawRect(m_rect.x(), m_rect.y(), m_rect.width(), m_rect.height());

     m_pPainter->setFont(m_font);
     for(int i = 0 ; i < 11 ; i++)
     {
         if(i%5==0)
         {
             m_pPainter->drawLine(QPoint(m_rect.x()+m_rect.width(),m_rect.y()+i*m_rect.height()/10),QPoint(m_rect.x()+m_rect.width()+15,m_rect.y()+i*m_rect.height()/10));
             m_pPainter->drawText(QRectF(m_rect.x()+m_rect.width()+15,m_rect.y()+i*m_rect.height()/10-10,m_rect.x()+m_rect.width()+35,m_rect.y()+i*m_rect.height()/10-10),QString::number((i)*10));

         }
         else
         {
             m_pPainter->drawLine(QPoint(m_rect.x()+m_rect.width(),m_rect.y()+i*m_rect.height()/10),QPoint(m_rect.x()+m_rect.width()+10,m_rect.y()+i*m_rect.height()/10));

         }
     }
     m_pPainter->setPen( QPen(Qt::yellow, 2, Qt::SolidLine, Qt::RoundCap,Qt::MiterJoin));

     m_pPainter->drawText( QRectF(m_rect.x(), m_rect.y()+m_rect.height()+10, m_rect.width()+20, 20),QSTR("制动"));
     m_pPainter->drawText( QRectF(m_rect.x()+m_rect.width()+5, m_rect.y()+m_rect.height()+10, m_rect.width()+20, 20),(QString::number(m_Value*100)+"%"));


     m_pPainter->setBrush(m_txtcolor);
     m_pPainter->fillRect( m_rect.x(), m_rect.y(), m_rect.width(), m_rect.height()*m_Value, m_txtcolor);
     m_pPainter->restore();
}



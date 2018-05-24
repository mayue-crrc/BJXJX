#include <qdebug.h>

#include "ccountdownctrl.h"

void timerProc(void *args)
{
     if(CGlobal::m_nCurPageIndex != PAGE_ROM_INDEX_MAIN) return;
     CCountDownCtrl *pCtrl = (CCountDownCtrl*)args;
     pCtrl->blinkBool = !pCtrl->blinkBool;
     QPainter* pPainter = pCtrl->GetPainter();
     QRect rPainter = pCtrl->GetCtrlRect();
     QFont fPainter = pCtrl->GetTxtFont();

     QVariant var;
     var = pCtrl->newCounterNumber;

     pPainter->translate( rPainter.x() + rPainter.width() / 2, rPainter.y() + rPainter.height() / 2 );
     pPainter->scale( rPainter.width() / 200.0, rPainter.height() / 200.0 );
     pPainter->setRenderHint( QPainter::Antialiasing );
     pPainter->setFont(fPainter);
     pPainter->save();

     if (!pCtrl->blinkBool )
     {
         pPainter->setBrush( QBrush( QColor( 209, 238, 238 ), Qt::SolidPattern ) );
         pPainter->drawRoundRect( QRectF( -100, -100, 200, 200 ), 40, 40 );
         pPainter->setPen(QPen(Qt::red, 2, Qt::SolidLine, Qt::RoundCap,Qt::MiterJoin));
         pPainter->setBrush( QBrush( QColor( 30, 144, 255 ), Qt::SolidPattern ) );
         pPainter->drawEllipse( QRectF( -85, -85, 150, 150 ) );
         pPainter->drawText( QRectF( -85, -85, 150, 150 ), Qt::AlignCenter, var.toString() );
     }
     else
     {
         pPainter->setBrush( QBrush( QColor( 30, 144, 255 ), Qt::SolidPattern ) );
         pPainter->drawRoundRect( QRectF( -100, -100, 200, 200 ), 40, 40 );
         pPainter->setPen(QPen(Qt::black, 2, Qt::SolidLine, Qt::RoundCap,Qt::MiterJoin));
         pPainter->setBrush( QBrush( QColor( 209, 238, 238 ), Qt::SolidPattern ) );
         pPainter->drawEllipse( QRectF( -85, -85, 150, 150 ) );
         pPainter->drawText( QRectF( -85, -85, 150, 150 ), Qt::AlignCenter, var.toString() );
     }//end
     pPainter->setPen(QPen(Qt::black, 2, Qt::SolidLine, Qt::RoundCap,Qt::MiterJoin));
     pPainter->drawText( QPoint( 55, 75 ), "S" );

     pPainter->restore();
     pPainter->resetTransform();
    pCtrl = NULL;
    pPainter = NULL;
}

CCountDownCtrl::CCountDownCtrl()
{
    m_typestr = "CCountDownCtrl";
    timerID = -1;
    blinkBool = false;
}

void CCountDownCtrl::Create(
                            __in QString& ctrl_str,
                            __in QRect& ctrl_rc,
                            __in QColor& ctrl_txtcolor,
                            __in QFont& ctrl_font,
                            __in QColor& ctrl_bkcolor,
                            __in QPainter* ctrl_painter,
                            __in int ctrl_ID
                           )
{
    m_txtcolor = ctrl_txtcolor;
    m_font     = ctrl_font;
    m_bkcolor  = ctrl_bkcolor;
    m_rect     = ctrl_rc;
    m_nID      = ctrl_ID;
    m_pPainter = ctrl_painter;
    m_str      = ctrl_str;
    ASSERT(m_pPainter != NULL);

    blinkFlag=false;

    DrawCountDownCtrl();
}


void CCountDownCtrl::SetCtrlText(
                                 __in QString ctrl_str // CCountDownCtrl text
                                )
{
    newCounterNumber=ctrl_str;
    DrawCountDownCtrl();
}

void  CCountDownCtrl::SetTxtFont(
                                 __in QFont ctrl_font // CCountDownCtrl font
                                )
{

}

void CCountDownCtrl::SetTxtColor(
                                 __in QColor ctrl_color //CCountDownCtrl text color
                                )
{

}

void CCountDownCtrl::SetCtrlBKColor(
                                    __in QColor ctrl_bkcolor //CCountDownCtrl bk color
                                   )
{

}

void CCountDownCtrl::SetCtrlRect(
                                 __in QRect ctrl_rect //CCountDownCtrl rect
                                )
{

}


void CCountDownCtrl::DrawCountDownCtrl()
{
    m_pPainter->setFont(m_font);
    QVariant var = newCounterNumber;
    int _CounterNumber = var.toInt();

    m_pPainter->translate( m_rect.x() + m_rect.width() / 2, m_rect.y() + m_rect.height() / 2 );
    m_pPainter->scale( m_rect.width() / 200.0, m_rect.height() / 200.0 );
    m_pPainter->setRenderHint( QPainter::Antialiasing );
    m_pPainter->setPen( QPen( Qt::NoPen ) );
    m_pPainter->save();
    m_pPainter->setFont( D_FONT_BOLD(90) );
    if(_CounterNumber<0)
    {
        m_pPainter->setPen(Qt::black);
        m_pPainter->setBrush( QBrush( Qt::gray, Qt::SolidPattern ) );
        m_pPainter->drawRoundRect( QRectF( -100, -100, 200, 200 ), 40, 40 );
        m_pPainter->setPen(QPen(Qt::red, 2, Qt::SolidLine, Qt::RoundCap,Qt::MiterJoin));
        m_pPainter->setBrush(QBrush(Qt::darkGray,Qt::SolidPattern));
        m_pPainter->drawEllipse( QRectF( -85, -85, 150, 150 ) );
        m_pPainter->drawText( QRectF( -85, -85, 150, 150 ), Qt::AlignCenter, "60" );
    }
    else if(_CounterNumber<6 && _CounterNumber>-1)
    {
        if(blinkFlag==false)
        {
            m_pPainter->setPen(Qt::black);
            m_pPainter->setBrush( QBrush( QColor(  30, 144, 255  ), Qt::SolidPattern ) );
            m_pPainter->drawRoundRect( QRectF( -100, -100, 200, 200 ), 40, 40 );
            m_pPainter->setPen(QPen(Qt::red, 2, Qt::SolidLine, Qt::RoundCap,Qt::MiterJoin));
            m_pPainter->setBrush(QBrush(QColor(209, 238, 238),Qt::SolidPattern));
            m_pPainter->drawEllipse( QRectF( -85, -85, 150, 150 ) );
            m_pPainter->setPen(Qt::red);
            m_pPainter->drawText( QRectF( -85, -85, 150, 150 ), Qt::AlignCenter, var.toString() );
        }else{
            m_pPainter->setPen(Qt::black);
            m_pPainter->setBrush( QBrush( QColor( 209, 238, 238 ), Qt::SolidPattern ) );
            m_pPainter->drawRoundRect( QRectF( -100, -100, 200, 200 ), 40, 40 );
            m_pPainter->setPen(QPen(Qt::red, 2, Qt::SolidLine, Qt::RoundCap,Qt::MiterJoin));
            m_pPainter->setBrush( QBrush( QColor( 30, 144, 255 ), Qt::SolidPattern ) );
            m_pPainter->drawEllipse( QRectF( -85, -85, 150, 150 ) );
            m_pPainter->setPen(Qt::black);
            m_pPainter->drawText( QRectF( -85, -85, 150, 150 ), Qt::AlignCenter, var.toString() );
        }
        blinkFlag=!blinkFlag;
    }else{
        m_pPainter->setPen(Qt::black);
        m_pPainter->setBrush( QBrush( QColor( 209, 238, 238 ), Qt::SolidPattern ) );
        m_pPainter->drawRoundRect( QRectF( -100, -100, 200, 200 ), 40, 40 );
        m_pPainter->setPen(QPen(Qt::black, 2, Qt::SolidLine, Qt::RoundCap,Qt::MiterJoin));
        m_pPainter->setBrush( QBrush( QColor( 30, 144, 255 ), Qt::SolidPattern ) );
        m_pPainter->drawEllipse( QRectF( -85, -85, 150, 150 ) );
        m_pPainter->drawText( QRectF( -85, -85, 150, 150 ), Qt::AlignCenter, var.toString() );
    }


    m_pPainter->setPen(QPen(Qt::blue, 1, Qt::SolidLine, Qt::RoundCap,Qt::MiterJoin));
    m_pPainter->drawText( QPoint( 45, 83 ), "s" );
    m_pPainter->restore();
    m_pPainter->resetTransform();
 }

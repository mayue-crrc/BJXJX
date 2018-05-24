#include "ccapacitancectrl.h"

CCapacitanceCtrl::CCapacitanceCtrl()
{
    m_typestr = "CCapacitanceCtrl";
    m_pPainter = NULL;
    m_bkcolor = Qt::green;
}

void CCapacitanceCtrl::Create(__in QString& ctrl_str,
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

    DrawCapacitanceCtrl(0,0);
    SetValue(0,0);
}

void CCapacitanceCtrl::SetCtrlText(
                             __in QString ctrl_str // CCapacitanceCtrl text
                            )
{

}

void CCapacitanceCtrl::SetTxtFont(
                            __in QFont ctrl_font // CCapacitanceCtrl font
                           )
{

}

void CCapacitanceCtrl::SetTxtColor(
                             __in QColor ctrl_color // CCapacitanceCtrl text color
                            )
{

}

void CCapacitanceCtrl::SetCtrlBKColor(
                                __in QColor ctrl_bkcolor // CCapacitanceCtrl bk color
                               )
{
  m_bkcolor = ctrl_bkcolor;
}

void CCapacitanceCtrl::SetCtrlRect(
                             __in QRect ctrl_rect // CCapacitanceCtrl rect
                            )
{

}

void CCapacitanceCtrl::DrawCapacitanceCtrl(__in int ctrl_value1,__in int ctrl_value2)
{

    m_pPainter->setRenderHint(QPainter::Antialiasing);
    m_pPainter->setFont(m_font);
    m_pPainter->setBrush(QBrush(Qt::yellow, Qt::SolidPattern));
    m_pPainter->setPen(Qt::yellow);

    m_pPainter->translate( m_rect.x() + m_rect.width() / 2, m_rect.y() + m_rect.height() / 2 );
    m_pPainter->scale( m_rect.width() / 200.0, m_rect.height() / 200.0 );
    m_pPainter->save();

    m_pPainter->setBrush(QBrush(Qt::gray));
    QRectF rectBody( -50, -25, 100,125 );
    m_pPainter->drawRect( rectBody );

    QRectF rectHead( -20, -50, 40, 25 );
    m_pPainter->drawRect( rectHead );

    m_pPainter->setBrush(QBrush(m_bkcolor));
    QRectF rectValue;
    if(ctrl_value1>100||ctrl_value1<0) // for error data
        rectValue = QRectF( -50, 100, 100, 0 );
    else
        rectValue = QRectF( -50, 100-ctrl_value1*1.25, 100, ctrl_value1*1.25 );

    m_pPainter->drawRect( rectValue );

    QRectF rectStr1( -60, -120, 100, 40 );
    QRectF rectStr2( -54,  120, 100, 40 );
    QString str="";

    m_pPainter->setFont( D_FONT_BOLD(25) );
    m_pPainter->setBrush(QBrush(Qt::black));
     m_pPainter->setPen(Qt::NoPen);
    m_pPainter->drawRect( rectStr1 );
    m_pPainter->drawRect( rectStr2 );


    m_pPainter->setPen(QPen(Qt::yellow, 5, Qt::SolidLine, Qt::RoundCap,Qt::MiterJoin));

    if(ctrl_value1>100||ctrl_value1<0) // for error data
        str = "Err";
    else
        str = QString::number(ctrl_value1)+"%";
    m_pPainter->drawText( rectStr1, Qt::AlignCenter, str);
    //20130118 modify begin
    if(ctrl_value2<20)
        m_pPainter->drawText( rectStr2, Qt::AlignCenter, QString::number(0)+"V" );
    else
        m_pPainter->drawText( rectStr2, Qt::AlignCenter, QString::number(ctrl_value2)+"V" );
    //20130118 modify end

    m_pPainter->restore();
    // reset transform
    m_pPainter->resetTransform();
}

void CCapacitanceCtrl::SetValue(__in int ctrl_value1,__in int ctrl_value2)
{
    DrawCapacitanceCtrl(ctrl_value1,ctrl_value2);
}

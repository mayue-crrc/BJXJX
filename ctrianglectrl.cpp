#include "ctrianglectrl.h"

CTriangleCtrl::CTriangleCtrl()
{
    m_typestr = "CTriangleCtrl";
    m_pPainter = NULL;
}

void CTriangleCtrl::Create(__in QString& ctrl_str,
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

    DrawTriangleCtrl();
}

void CTriangleCtrl::SetCtrlBKColor(
                                    __in QColor ctrl_bkcolor // CTriangleCtrl bk color
                                   )
{

}

void CTriangleCtrl::SetCtrlRect(
                                __in QRect ctrln_rect // CTriangleCtrl rect
                               )
{

}

void CTriangleCtrl::DrawTriangleCtrl()
{
    QPointF point1,point2,point3;
    if ("LEFT" == m_str) {
        point1 = QPointF(m_rect.x(), m_rect.y() + m_rect.height()/2);
        point2 = QPointF(m_rect.x() + m_rect.width(), m_rect.y());
        point3 = QPointF(m_rect.x() + m_rect.width(), m_rect.y() + m_rect.height());
    } else if ("RIGHT" == m_str) {
        point1 = QPointF(m_rect.x(), m_rect.y());
        point2 = QPointF(m_rect.x() + m_rect.width(), m_rect.y() + m_rect.height()/2);
        point3 = QPointF(m_rect.x(), m_rect.y() + m_rect.height());
    } else {
    }
    QPointF points[3] = {
         point1,
         point2,
         point3
       };
    m_pPainter->setBrush(QBrush(Qt::green, Qt::SolidPattern));
    m_pPainter->setPen(QPen(Qt::green, 2, Qt::SolidLine, Qt::RoundCap,Qt::MiterJoin));
    m_pPainter->drawPolygon(points, 3);

}

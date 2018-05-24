#ifndef CCONTROLINTERFACE_H
#define CCONTROLINTERFACE_H

#include <QPixmap>
#include <QPainter>

#include "cglobal.h"

class CControlInterface
{
public:
    CControlInterface(){}
    virtual ~CControlInterface(){}

    QString GetCtrlText()   {return m_str;     }
    QFont   GetTxtFont()    {return m_font;    }
    QColor  GetTxtColor()   {return m_txtcolor;}
    QColor  GetCtrlBKColor(){return m_bkcolor; }
    QRect   GetCtrlRect()   {return m_rect;    }

    virtual void SetCtrlText(__in QString ctrl_str){ctrl_str="";}
    virtual void SetTxtFont(__in QFont txt_font){txt_font = QFont();}
    virtual void SetTxtColor(__in QColor txt_color){txt_color = QColor();}
    virtual void SetCtrlBKColor(__in QColor ctrl_bkcolor){ctrl_bkcolor=QColor();}
    virtual void SetCtrlRect(__in QRect ctrl_rect){ctrl_rect=QRect();}

    int GetCtrlID(){return m_nID;}
    bool IsKindOf(QString type_str){if(type_str==m_typestr)return true; return false;}
    QPainter* GetPainter(){return m_pPainter;}

protected:
    int       m_nID;
    QString   m_str;
    QColor    m_bkcolor;
    QFont     m_font;
    QColor    m_txtcolor;
    QRect     m_rect;
    QPainter* m_pPainter;
    QString   m_typestr;
};

#endif // CCONTROLINTERFACE_H

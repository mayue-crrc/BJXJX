#ifndef CCOUNTDOWNCTRL_H
#define CCOUNTDOWNCTRL_H

#include <QVariant>
#include <QtGui>
#include <QObject>

#include "ccontrolinterface.h"
//#include "ctimer.h"
#include "cpage.h"

class CCountDownCtrl : public CControlInterface
{
public:
    CCountDownCtrl();

    void Create(__in QString& ctrl_str,__in QRect& ctrl_rc,__in QColor& ctrl_txtcolor,
                __in QFont& ctrl_font,__in QColor& ctrl_bkcolor,__in QPainter* ctrl_painter,__in int ctrl_ID);

    void SetCtrlText(__in QString btn_str);
    void SetTxtFont(__in QFont txt_font);
    void SetTxtColor(__in QColor txt_color);
    void SetCtrlBKColor(__in QColor btn_bkcolor);
    void SetCtrlRect(__in QRect btn_rect);

    void DrawCountDownCtrl();

    bool blinkBool;
    QString newCounterNumber;

private:
    //CTimer m_timer;
    int timerID;
    bool blinkFlag;

};

#endif // CCOUNTDOWNCTRL_H

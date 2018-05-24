#ifndef CIMAGECTRL_H
#define CIMAGECTRL_H

#include  "ccontrolinterface.h"

enum IMAGESTATE
{
    IMAGE_UP,
    IMAGE_DOWN
};

class CImageCtrl : public CControlInterface
{
public:
    CImageCtrl();

public:
    void Create(__in QString& ctrl_str,__in QRect& ctrl_rc,__in QColor& ctrl_txtcolor,
                __in QFont& ctrl_font,__in QColor& ctrl_bkcolor,__in QPainter* ctrl_painter,__in int ctrl_ID);

    void DrawImage(__in int nState);

    void ShowImage();
    void HideImage();
    void UpdateImage(QString str);
    bool IsShow(){return m_bShow;}

private:
    bool m_bShow;
};

#endif // CIMAGECTRL_H

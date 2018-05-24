#ifndef CHVACPARAMETERSETPAGE_H
#define CHVACPARAMETERSETPAGE_H

#include "cpage.h"
#include "cwarningdialog.h"

#define ID_PWPAGE_BUTTON_NUMBER1    0xA101
#define ID_PWPAGE_BUTTON_NUMBER2    0xA102
#define ID_PWPAGE_BUTTON_NUMBER3    0xA103
#define ID_PWPAGE_BUTTON_NUMBER4    0xA104
#define ID_PWPAGE_BUTTON_NUMBER5    0xA105
#define ID_PWPAGE_BUTTON_NUMBER6    0xA106
#define ID_PWPAGE_BUTTON_NUMBER7    0xA107
#define ID_PWPAGE_BUTTON_NUMBER8    0xA108
#define ID_PWPAGE_BUTTON_NUMBER9    0xA109
#define ID_PWPAGE_BUTTON_NUMBER0    0xA10A
#define ID_PWPAGE_BUTTON_CLEAR      0xA10B
#define ID_PWPAGE_EDIT_PASSWORD     0xA110
#define ID_PWPAGE_LABEL_NOTICE      0xA111
#define ID_PWPAGE_BUTTON_COMFIRM    0xA112
#define ID_PWPAGE_BUTTON_RETURN     0xA113
#define PASSWORDLENGTH_4            4
#define PASSWORDLENGTH_6            6
#define ID_PWPAGE_LABEL_SHOW        0xA114



class CHvacParameterSetPage : public CPage
{
    DECLEAR_MESSAGE_MAP(CHvacParameterSetPage)
public:
    CHvacParameterSetPage();

private:
    //TODO:declear call back function
    void OnUpdatePage();
    void OnCommonQuitButtonDown();
    void OnInitPage();
    void OnSetButton1DOWN();
    void OnSetButton2DOWN();
    void OnSetButton3DOWN();
    void OnSetButton4DOWN();
    void OnSetButton5DOWN();
    void OnSetButton6DOWN();
    void OnSetButton7DOWN();
    void OnSetButton8DOWN();
    void OnSetButton9DOWN();
    void OnSetButton0DOWN();
    void OnSetButtonClearDOWN();
    void OnSetButtonComfirmDOWN();
    void OnSetButtonReturnDOWN();
    void OnSetButton1UP();
    void OnSetButton2UP();
    void OnSetButton3UP();
    void OnSetButton4UP();
    void OnSetButton5UP();
    void OnSetButton6UP();
    void OnSetButton7UP();
    void OnSetButton8UP();
    void OnSetButton9UP();
    void OnSetButton0UP();
    void OnSetButtonClearUP();
    void OnSetButtonComfirmUP();
    void OnSetButtonReturnUP();
    void AddSelectedEditBox(QString str);
    bool IsEditSelected(int EditId);
    void AddEditStr(int EditId, QString str);
    void SetEditSelected(int EditId, bool flg);
    void SetSelectedEditBox(QString str);
    void SetEditStr(int EditId, QString str);
    void SetBtnUp(int btnId);
    void SetBtnDown(int btnId);

};

#endif // CHVACPARAMETERSETPAGE_H

#ifndef CPAGEPASSWORDSET_H
#define CPAGEPASSWORDSET_H
#include "cpage.h"
#include "databuffer.h"

#define ID_PWSETPAGE_BUTTON_NUMBER1    0xA101
#define ID_PWSETPAGE_BUTTON_NUMBER2    0xA102
#define ID_PWSETPAGE_BUTTON_NUMBER3    0xA103
#define ID_PWSETPAGE_BUTTON_NUMBER4    0xA104
#define ID_PWSETPAGE_BUTTON_NUMBER5    0xA105
#define ID_PWSETPAGE_BUTTON_NUMBER6    0xA106
#define ID_PWSETPAGE_BUTTON_NUMBER7    0xA107
#define ID_PWSETPAGE_BUTTON_NUMBER8    0xA108
#define ID_PWSETPAGE_BUTTON_NUMBER9    0xA109
#define ID_PWSETPAGE_BUTTON_NUMBER0    0xA10A
#define ID_PWSETPAGE_BUTTON_CLEAR      0xA10B
#define ID_PWSETPAGE_EDIT_PASSWORD     0xA110
#define ID_PWSETPAGE_LABEL_NOTICE      0xA111
#define ID_PWSETPAGE_BUTTON_COMFIRM    0xA112
#define ID_PWSETPAGE_BUTTON_RETURN     0xA113
#define ID_PWSETPAGE_EDIT_OLDPASSWORD 0xA114
#define ID_PWSETPAGE_EDIT_NEWPASSWORD 0xA115
#define ID_PWSETPAGE_EDIT_NEWPASSWORDCOMFIRM 0xA116
class CPagePasswordset : public CPage
{
    DECLEAR_MESSAGE_MAP(CPagePasswordset)
public:
    CPagePasswordset();

protected:
    //TODO:declear call back function
    void OnUpdatePage();
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
    void SetBtnUp(int btnId);
    void SetBtnDown(int btnId);
    QString m_passwordinputstr;
    QString m_oldpasswordstr;
    QString m_newpasswordstr;
    QString m_newpasswordcomfirmstr;
    void OnoldpasswordEdit();
    void OnnewpasswordEdit();
    void OnnewpasswordconfirmEdit();
    void AddSelectedEditBox(QString str);
    bool IsEditSelected(int EditId);
    void AddEditStr(int EditId, QString str);
    void SetEditSelected(int EditId, bool flg);
    void SetSelectedEditBox(QString str);
    void SetEditStr(int EditId, QString str);
};


#endif // CPAGEPASSWORDSET_H

#ifndef CFAULTDLG_H
#define CFAULTDLG_H

#include <QDialog>

namespace Ui {
    class CFaultDlg;
}

class CFaultDlg : public QDialog
{
    Q_OBJECT

public:
    explicit CFaultDlg(QWidget *parent = 0);
    ~CFaultDlg();
    void SetWarningStr( QString warningStr );
    void SetWarningLabel();
    void SetComBreakFlag( bool flag );

    ///void SetFaultText(QString faulttext);
    bool GetComBreakFlag();
protected:
    void changeEvent(QEvent *e);

private:
    Ui::CFaultDlg *ui;
        bool comBreakFlag;
};

#endif // CFAULTDLG_H




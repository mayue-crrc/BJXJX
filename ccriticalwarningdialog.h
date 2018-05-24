#ifndef CCRITICALWARNINGDIALOG_H
#define CCRITICALWARNINGDIALOG_H

#include <QDialog>

namespace Ui {
    class CCriticalWarningDialog;
}

class CCriticalWarningDialog : public QDialog {
    Q_OBJECT
public:
    CCriticalWarningDialog(QWidget *parent = 0);
    ~CCriticalWarningDialog();

    void SetWarningStr( QString warningStr );
    void SetWarningLabel();
    void SetComBreakFlag( bool flag );

    ///void SetFaultText(QString faulttext);
    bool GetComBreakFlag();
protected:
    void changeEvent(QEvent *e);

private:
    Ui::CCriticalWarningDialog *ui;
    bool comBreakFlag;
};

#endif // CCRITICALWARNINGDIALOG_H

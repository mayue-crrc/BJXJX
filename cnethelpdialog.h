#ifndef CNETHELPDIALOG_H
#define CNETHELPDIALOG_H

#include <QDialog>

namespace Ui {
    class CNetHelpDialog;
}

class CNetHelpDialog : public QDialog {
    Q_OBJECT
public:
    CNetHelpDialog(QWidget *parent = 0);
    ~CNetHelpDialog();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::CNetHelpDialog *ui;

private slots:
    void on_quitPushButton_clicked();
};

#endif // CNETHELPDIALOG_H

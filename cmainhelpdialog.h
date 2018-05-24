#ifndef CMAINHELPDIALOG_H
#define CMAINHELPDIALOG_H

#include <QDialog>

#include "cmainhelpdialog2.h"

namespace Ui {
    class CMainHelpDialog;
}

class CMainHelpDialog : public QDialog {
    Q_OBJECT
public:
    CMainHelpDialog(QWidget *parent = 0);
    ~CMainHelpDialog();

private:
    void changeEvent(QEvent *e);
    void paintEvent(QPaintEvent* e);

    Ui::CMainHelpDialog *ui;
    CMainHelpDialog2 *cMainHelpDialog2;
private slots:
    void on_quitPushButton_clicked();
    void on_downToolButton_clicked();
    void closeMainHelpDialogSlot();
};

#endif // CMAINHELPDIALOG_H

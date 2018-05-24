#ifndef CDEBUGDIALOG_H
#define CDEBUGDIALOG_H

#include <QDialog>

#include "ui_cdebugdialog.h"

namespace Ui {
    class CDebugDialog;
}

class CDebugDialog : public QDialog {
    Q_OBJECT
public:
    CDebugDialog(QWidget *parent = 0);
    ~CDebugDialog();

protected:
    void changeEvent(QEvent *e);

private slots:
    void on_okButton_clicked();

private:
    Ui::CDebugDialog *ui;
};

#endif // CDEBUGDIALOG_H

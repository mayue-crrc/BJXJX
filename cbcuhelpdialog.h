#ifndef CBCUHELPDIALOG_H
#define CBCUHELPDIALOG_H

#include <QDialog>

namespace Ui {
    class CBcuHelpDialog;
}

class CBcuHelpDialog : public QDialog {
    Q_OBJECT
public:
    CBcuHelpDialog(QWidget *parent = 0);
    ~CBcuHelpDialog();

private:
    void changeEvent(QEvent *e);

    Ui::CBcuHelpDialog *ui;

private slots:
    void on_quitPushButton_clicked();
};

#endif // CBCUHELPDIALOG_H

#ifndef CHVACHELPDIALOG_H
#define CHVACHELPDIALOG_H

#include <QDialog>

namespace Ui {
    class CHvacHelpDialog;
}

class CHvacHelpDialog : public QDialog {
    Q_OBJECT
public:
    CHvacHelpDialog(QWidget *parent = 0);
    ~CHvacHelpDialog();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::CHvacHelpDialog *ui;

private slots:
    void on_quitPushButton_clicked();
};

#endif // CHVACHELPDIALOG_H

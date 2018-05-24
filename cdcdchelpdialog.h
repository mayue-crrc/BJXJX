#ifndef CDCDCHELPDIALOG_H
#define CDCDCHELPDIALOG_H

#include <QDialog>

namespace Ui {
    class CDcdcHelpDialog;
}

class CDcdcHelpDialog : public QDialog {
    Q_OBJECT
public:
    CDcdcHelpDialog(QWidget *parent = 0);
    ~CDcdcHelpDialog();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::CDcdcHelpDialog *ui;

private slots:
    void on_quitPushButton_clicked();
};

#endif // CDCDCHELPDIALOG_H

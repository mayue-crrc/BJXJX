#ifndef CACUHELPDIALOG_H
#define CACUHELPDIALOG_H

#include <QDialog>

namespace Ui {
    class CAcuHelpDialog;
}

class CAcuHelpDialog : public QDialog 
{
    Q_OBJECT
public:
    CAcuHelpDialog(QWidget *parent = 0);
    ~CAcuHelpDialog();

private:
    void changeEvent(QEvent *e);

    Ui::CAcuHelpDialog *ui;

private slots:
    void on_quitPushButton_clicked();
};

#endif // CACUHELPDIALOG_H

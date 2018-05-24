#ifndef TESTBYTEDIALOG_H
#define TESTBYTEDIALOG_H

#include <QDialog>
#include "senddata.h"

namespace Ui {
    class TestByteDialog;
}

class TestByteDialog : public QDialog
{
    Q_OBJECT
public:
    TestByteDialog(QWidget *parent = 0);
    ~TestByteDialog();

private:
    void changeEvent(QEvent *e);

    Ui::TestByteDialog *ui;
private slots:
    void on_pushButtonOk_clicked();

    void on_pushButton1_clicked();
    void on_pushButton2_clicked();
    void on_pushButton3_clicked();
    void on_pushButton4_clicked();
    void on_pushButton5_clicked();
    void on_pushButton6_clicked();
    void on_pushButton7_clicked();
    void on_pushButton8_clicked();
    void on_pushButton9_clicked();
    void on_pushButton0_clicked();
    void on_pushButtonClear_clicked();
};

#endif // TESTBYTEDIALOG_H

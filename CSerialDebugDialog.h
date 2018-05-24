#ifndef CSERIALDEBUGDIALOG_H
#define CSERIALDEBUGDIALOG_H

#include <QDialog>
#include <qtimer.h>


namespace Ui {
    class CSerialDebugDialog;
}

struct SERIALSETSTRU
{
    bool bSetRevData;//true:set rev data false:set send data
    int nArrayIndex;
    int nOperation;//0:|= 1:&= 2:^= 3:=
    int nNum;
};

class CSerialDebugDialog : public QDialog {
    Q_OBJECT
public:
    CSerialDebugDialog(QWidget *parent = 0);
    ~CSerialDebugDialog();

public:
    QList<SERIALSETSTRU> serialSetList;

private:
    bool bSetRevData;
    bool bBinaryVar;
    int nOperation;
    QTimer timer_1s;
    void SetSoftKeyBoardState();

protected:
    void changeEvent(QEvent *e);
    void closeEvent(QCloseEvent *);

private:
    Ui::CSerialDebugDialog *ui;

private slots:
    void on_radioButton_decVar_clicked();
    void on_radioButton_binVar_clicked();
    void on_radioButton_sendData_clicked();
    void on_radioButton_revData_clicked();
    void on_lineEdit_var_selectionChanged();
    void on_lineEdit_arrayindex_selectionChanged();
    void on_pushButton_reset_clicked();
    void on_pushButton_set_clicked();
    void on_pushButton_clear_clicked();
    void on_pushButton_num0_clicked();
    void on_pushButton_num9_clicked();
    void on_pushButton_num8_clicked();
    void on_pushButton_num7_clicked();
    void on_pushButton_num6_clicked();
    void on_pushButton_num5_clicked();
    void on_pushButton_num4_clicked();
    void on_pushButton_num3_clicked();
    void on_pushButton_num2_clicked();
    void on_pushButton_num1_clicked();
    void OnTimer_1s();
};

#endif // CSERIALDEBUGDIALOG_H

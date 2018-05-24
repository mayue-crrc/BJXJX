#ifndef CREALTIMEFAULTSWARNNINGDIALOG_H
#define CREALTIMEFAULTSWARNNINGDIALOG_H

#include <QDialog>
#include <QPalette>
#include <qtimer.h>

namespace Ui {
    class CRealTimeFaultsWarnningDialog;
}

class CRealTimeFaultsWarnningDialog : public QDialog {
    Q_OBJECT
public:
    CRealTimeFaultsWarnningDialog(QWidget *parent = 0);
    ~CRealTimeFaultsWarnningDialog();

    void SetRomIdx(int rom_idx);
    QString GetCarriageString(char position);
    int m_romidx;
    QTimer timer3s;

protected:
    void changeEvent(QEvent *e);
    void paintEvent(QPaintEvent* e);



private:
    Ui::CRealTimeFaultsWarnningDialog *ui;
    QString GetFaultText(char device);

private slots:
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();
};

#endif // CREALTIMEFAULTSWARNNINGDIALOG_H

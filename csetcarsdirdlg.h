#ifndef CSETCARSDIRDLG_H
#define CSETCARSDIRDLG_H

#include <QDialog>

namespace Ui {
    class CSetCarsDirDlg;
}

class CSetCarsDirDlg : public QDialog {
    Q_OBJECT
public:
    CSetCarsDirDlg(QWidget *parent = 0);
    ~CSetCarsDirDlg();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::CSetCarsDirDlg *ui;

private slots:
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();
};

#endif // CSETCARSDIRDLG_H

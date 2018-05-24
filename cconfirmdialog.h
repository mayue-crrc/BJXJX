#ifndef CCONFIRMDIALOG_H
#define CCONFIRMDIALOG_H

#include <QDialog>

namespace Ui {
    class CConfirmDialog;
}

class CConfirmDialog : public QDialog {
    Q_OBJECT
public:
    CConfirmDialog(QWidget *parent = 0);
    ~CConfirmDialog();

   void SetConfirmStr(QString str);
   bool GetContinue();
   bool m_bContinue;

protected:
    void changeEvent(QEvent *e);
    void paintEvent(QPaintEvent *);
private:
    Ui::CConfirmDialog *ui;

private slots:
    void on_pushButton_no_clicked();
    void on_pushButton_yes_clicked();
};

#endif // CCONFIRMDIALOG_H

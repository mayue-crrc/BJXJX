#ifndef CFAULTDETAILDIALOG_H
#define CFAULTDETAILDIALOG_H

#include <QDialog>

#include "faultcommonprocess.h"

namespace Ui {
    class CFaultDetailDialog;
}

class CFaultDetailDialog : public QDialog {
    Q_OBJECT
public:
    CFaultDetailDialog(QWidget *parent = 0);
    ~CFaultDetailDialog();

protected:
    void changeEvent(QEvent *e);
    void paintEvent(QPaintEvent* e);

private:
    QString m_strCode;
    QString m_strGrade;
    QString m_strDateTime;
    QString m_strName;
    QString m_strAdvice;
    QString m_strPos;
    QString m_strDev;

    Ui::CFaultDetailDialog *ui;

private slots:
    void on_quitPushButton_clicked();

};

#endif // CFAULTDETAILDIALOG_H

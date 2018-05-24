#ifndef CWARNINGDIALOG_H
#define CWARNINGDIALOG_H

#include <QDialog>
#include <QPainter>
#include <QEvent>

#include "cglobal.h"

namespace Ui {
    class CWarningDialog;
}

class CWarningDialog : public QDialog {
    Q_OBJECT
public:
    CWarningDialog(QWidget *parent = 0);
    ~CWarningDialog();

    void SetWarningStr(__in QString warningStr);
    void SetButtonVisible(__in bool isvisible);
protected:
    void paintEvent(QPaintEvent *);
    void changeEvent(QEvent *e);

private:
    Ui::CWarningDialog *ui;

private slots:
    void on_pushButton_clicked();
};

#endif // CWARNINGDIALOG_H

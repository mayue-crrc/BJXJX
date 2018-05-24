#ifndef CMAINHELPDIALOG2_H
#define CMAINHELPDIALOG2_H

#include <QDialog>
#include "cmainhelpdialog3.h"
namespace Ui {
    class CMainHelpDialog2;
}

class CMainHelpDialog2 : public QDialog {
    Q_OBJECT
public:
    CMainHelpDialog2(QWidget *parent = 0);
    ~CMainHelpDialog2();
signals:
    void closeMainHelpDialogSignal();
private:
    void changeEvent(QEvent *e);
    void paintEvent(QPaintEvent* e);


    Ui::CMainHelpDialog2 *ui;
    CMainHelpdialog3 *MainHelpDialog3;

private slots:
    void on_downToolButton_clicked();
    void on_quitPushButton_clicked();
    void on_upToolButton_clicked();
    void closeMainHelpDialog2Slot();

};

#endif // CMAINHELPDIALOG2_H

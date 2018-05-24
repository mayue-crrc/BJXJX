#ifndef CMAINHELPDIALOG3_H
#define CMAINHELPDIALOG3_H

#include <QDialog>

namespace Ui {
    class CMainHelpdialog3;
}

class CMainHelpdialog3 : public QDialog
{
    Q_OBJECT

public:
    explicit CMainHelpdialog3(QWidget *parent = 0);
    ~CMainHelpdialog3();

private:
    Ui::CMainHelpdialog3 *ui;
signals:
    void closeMainHelpDialogSignal();
    void closeMainHelpDialog2Signal();
private slots:
    void on_quitPushButton_clicked();
    void on_upToolButton_clicked();
};

#endif // CMAINHELPDIALOG3_H

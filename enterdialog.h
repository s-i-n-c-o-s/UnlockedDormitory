#ifndef ENTERDIALOG_H
#define ENTERDIALOG_H

#include <QDialog>
#include "chatdialog.h"

namespace Ui {
class EnterDialog;
}

class EnterDialog : public QDialog
{
    Q_OBJECT

public:
    void pushButton_clicked();
    void pushButton_2_clicked();
    explicit EnterDialog(QWidget *parent = nullptr);
    ~EnterDialog();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::EnterDialog *ui;
};

#endif // ENTERDIALOG_H

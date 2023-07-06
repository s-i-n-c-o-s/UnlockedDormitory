
#ifndef WECHAT_H
#define WECHAT_H

#include <QDialog>
#include "enterdialog.h"
QT_BEGIN_NAMESPACE
namespace Ui { class wechat; }
QT_END_NAMESPACE

class wechat : public QDialog

{
    Q_OBJECT

public:
    wechat(QWidget *parent = nullptr);
    ~wechat();
    EnterDialog* enter_group;

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::wechat *ui;
};

#endif // WECHAT_H

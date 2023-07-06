#ifndef CHATDIALOG_H
#define CHATDIALOG_H

#include <QDialog>
#include<volleyballgame.h>
namespace Ui {
class ChatDialog;
}

class ChatDialog : public QDialog
{
    Q_OBJECT

public:
    void pushButton_clicked();
    void pushButton_2_clicked();
    void pushButton_3_clicked();
    explicit ChatDialog(QWidget *parent = nullptr);
    ~ChatDialog();

private:
    Ui::ChatDialog *ui;
    volleyballgame* game;
};

#endif // CHATDIALOG_H

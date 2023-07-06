#ifndef CRITICISM_H
#define CRITICISM_H

#include <QDialog>
#include "dialog.h"

namespace Ui {
class Criticism;
}

class Criticism : public QDialog
{
    Q_OBJECT

public:
    explicit Criticism(int clothnum, int shoenum, int hatnum, int facenum,int hairnum, QWidget *parent = nullptr);
    ~Criticism();
    friend class Dialog;
    int clonum;
    int fanum;
    int hanum;
    void change(int fanum);

private slots:
    void on_comment_clicked();

private:
    Ui::Criticism *ui;
};

#endif // CRITICISM_H

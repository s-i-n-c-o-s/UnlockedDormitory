#ifndef COSMETIC_H
#define COSMETIC_H

#include <QDialog>
#include <dialog.h>
namespace Ui {
class cosmetic;
}

class cosmetic : public QDialog
{
    Q_OBJECT

public:
    explicit cosmetic(QWidget *parent = nullptr);
    ~cosmetic();
    int facenum;
    int eyenum;
    int brownum;
    int mouthnum;
    int hairnum;

private slots:
    void on_finished_clicked();

    void on_eyeblue_clicked();

    void on_eyepurple_clicked();

    void on_eyebrown_clicked();

    void on_browpurple_clicked();

    void on_browgreen_clicked();

    void on_browblack_clicked();

    void on_mouthred_clicked();

    void on_mouthpink_clicked();

    void on_mouthorange_clicked();

    void on_hairorange_clicked();

    void on_hairred_clicked();

    void on_hairblonde_clicked();

    void change(int fanum);

private:
    Ui::cosmetic *ui;
};

#endif // COSMETIC_H

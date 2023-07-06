#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <criticism.h>
#include <cosmetic.h>
QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(int fanum,int hanum, QWidget *parent = nullptr);
    ~Dialog();
    int clothnum;
    int hatnum;
    int shoenum;
    int facenum;
    int hairnum;
    void change(int fanum);

private slots:
    void on_bluedress_clicked();

    void on_kunkun_clicked();

    void on_bikini_clicked();

    void on_OKbuttion_clicked();

    void on_sali_clicked();

    void on_shoeblue_clicked();

    void on_shoebrown_clicked();

    void on_shoered_clicked();

    void on_hat_clicked();

    void on_crown_clicked();

    void on_diploma_clicked();

    void on_safety_clicked();

    void on_remake_clicked();

private:
    Ui::Dialog *ui;
};
#endif // DIALOG_H

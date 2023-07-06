#include "dialog.h"
#include "ui_dialog.h"
#include <QApplication>

Dialog::Dialog(int fanum,int hanum, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog){
    ui->setupUi(this);
     ui->OKbuttion->setFont(QFont("楷体", 8));
    clothnum=0;
    shoenum=0;
    hatnum=0;
    facenum = fanum;
    hairnum = hanum;
    change(facenum);
    if(hairnum==0){
    ui->hair->setStyleSheet("image: url(:/new/prefix1/clothes/hair0.png);");
    }
    else if(hairnum==1){
    ui->hair->setStyleSheet("image: url(:/new/prefix1/clothes/hair1.png);");
    }
    else if(hairnum==2){
    ui->hair->setStyleSheet("image: url(:/new/prefix1/clothes/hair2.png);");
    }
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::change(int fanum){
    switch(fanum){
    case 0:
        ui->head->setStyleSheet("image: url(:/new/prefix1/clothes/face0.png);");
        break;
    case 1:
        ui->head->setStyleSheet("image: url(:/new/prefix1/clothes/face1.png);");
        break;
    case 2:
        ui->head->setStyleSheet("image: url(:/new/prefix1/clothes/face2.png);");
        break;
    case 3:
        ui->head->setStyleSheet("image: url(:/new/prefix1/clothes/face3.png);");
        break;
    case 4:
        ui->head->setStyleSheet("image: url(:/new/prefix1/clothes/face4.png);");
        break;
    case 5:
        ui->head->setStyleSheet("image: url(:/new/prefix1/clothes/face5.png);");
        break;
    case 6:
        ui->head->setStyleSheet("image: url(:/new/prefix1/clothes/face6.png);");
        break;
    case 7:
        ui->head->setStyleSheet("image: url(:/new/prefix1/clothes/face7.png);");
        break;
    case 8:
        ui->head->setStyleSheet("image: url(:/new/prefix1/clothes/face8.png);");
        break;
    case 9:
        ui->head->setStyleSheet("image: url(:/new/prefix1/clothes/face9.png);");
        break;
    case 10:
        ui->head->setStyleSheet("image: url(:/new/prefix1/clothes/face10.png);");
        break;
    case 11:
        ui->head->setStyleSheet("image: url(:/new/prefix1/clothes/face11.png);");
        break;
    case 12:
        ui->head->setStyleSheet("image: url(:/new/prefix1/clothes/face12.png);");
        break;
    case 13:
        ui->head->setStyleSheet("image: url(:/new/prefix1/clothes/face13.png);");
        break;
    case 14:
        ui->head->setStyleSheet("image: url(:/new/prefix1/clothes/face14.png);");
        break;
    case 15:
        ui->head->setStyleSheet("image: url(:/new/prefix1/clothes/face15.png);");
        break;
    case 16:
        ui->head->setStyleSheet("image: url(:/new/prefix1/clothes/face16.png);");
        break;
    case 17:
        ui->head->setStyleSheet("image: url(:/new/prefix1/clothes/face17.png);");
        break;
    case 18:
        ui->head->setStyleSheet("image: url(:/new/prefix1/clothes/face18.png);");
        break;
    case 19:
        ui->head->setStyleSheet("image: url(:/new/prefix1/clothes/face19.png);");
        break;
    case 20:
        ui->head->setStyleSheet("image: url(:/new/prefix1/clothes/face20.png);");
        break;
    case 21:
        ui->head->setStyleSheet("image: url(:/new/prefix1/clothes/face21.png);");
        break;
    case 22:
        ui->head->setStyleSheet("image: url(:/new/prefix1/clothes/face22.png);");
        break;
    case 23:
        ui->head->setStyleSheet("image: url(:/new/prefix1/clothes/face23.png);");
        break;
    case 24:
        ui->head->setStyleSheet("image: url(:/new/prefix1/clothes/face24.png);");
        break;
    case 25:
        ui->head->setStyleSheet("image: url(:/new/prefix1/clothes/face25.png);");
        break;
    case 26:
        ui->head->setStyleSheet("image: url(:/new/prefix1/clothes/face26.png);");
        break;


    }
}


void Dialog::on_bluedress_clicked()
{
    clothnum=1;
    ui->bodyy->setStyleSheet("image: url(:/new/prefix1/clothes/bodydress.png);");
}


void Dialog::on_kunkun_clicked()
{
    clothnum=2;
    ui->bodyy->setStyleSheet("image: url(:/new/prefix1/clothes/bodykunkun.png);");
}


void Dialog::on_bikini_clicked()
{
    clothnum=3;
    ui->bodyy->setStyleSheet("image: url(:/new/prefix1/clothes/bodybikini.png);");
}

void Dialog::on_sali_clicked()
{
    clothnum=4;
    ui->bodyy->setStyleSheet("image: url(:/new/prefix1/clothes/bodyshali.png);");
}

void Dialog::on_OKbuttion_clicked()
{
    this->close();
    Criticism *cri = new Criticism(clothnum, shoenum, hatnum, facenum, hairnum);
    cri->show();
}



void Dialog::on_shoeblue_clicked()
{
    shoenum = 1;
    ui->feet->setStyleSheet("image: url(:/new/prefix1/clothes/feetblue.png);");
}


void Dialog::on_shoebrown_clicked()
{
    shoenum = 2;
    ui->feet->setStyleSheet("image: url(:/new/prefix1/clothes/feetbrown.png);");
}


void Dialog::on_shoered_clicked()
{
    shoenum = 3;
    ui->feet->setStyleSheet("image: url(:/new/prefix1/clothes/feetred.png);");
}


void Dialog::on_hat_clicked()
{
    hatnum = 1;
    ui->hatt->setStyleSheet("image: url(:/new/prefix1/clothes/hat.png);");
}


void Dialog::on_crown_clicked()
{
    hatnum = 2;
    ui->hatt->setStyleSheet("image: url(:/new/prefix1/clothes/crown.png);");
}


void Dialog::on_diploma_clicked()
{
    hatnum = 3;
    ui->hatt->setStyleSheet("image: url(:/new/prefix1/clothes/diploma.png);");
}


void Dialog::on_safety_clicked()
{
    hatnum = 4;
    ui->hatt->setStyleSheet("image: url(:/new/prefix1/clothes/safe.png);");
}


void Dialog::on_remake_clicked()
{
    clothnum=0;
    ui->bodyy->setStyleSheet("image: url(:/new/prefix1/clothes/body.png);");
    hatnum = 0;
    ui->hatt->setStyleSheet("");
    shoenum = 0;
    ui->feet->setStyleSheet("image: url(:/new/prefix1/clothes/feet.png);");
}


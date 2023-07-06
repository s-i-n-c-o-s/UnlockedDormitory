#include "cosmetic.h"
#include "ui_cosmetic.h"

cosmetic::cosmetic(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cosmetic)
{
    ui->setupUi(this);
     ui->finished->setFont(QFont("楷体", 10));
    facenum=0;
    eyenum=0;
    brownum=0;
    mouthnum=0;
    hairnum=0;
}

cosmetic::~cosmetic()
{
    delete ui;
}

void cosmetic::on_finished_clicked()
{
    this->close();
    Dialog *cri = new Dialog(facenum, hairnum);
    cri->show();
}

void cosmetic::change(int fanum){
    switch(fanum){
    case 0:
        ui->mirror->setStyleSheet("image: url(:/new/prefix1/clothes/face0.png);");
        break;
    case 1:
        ui->mirror->setStyleSheet("image: url(:/new/prefix1/clothes/face1.png);");
        break;
    case 2:
        ui->mirror->setStyleSheet("image: url(:/new/prefix1/clothes/face2.png);");
        break;
    case 3:
        ui->mirror->setStyleSheet("image: url(:/new/prefix1/clothes/face3.png);");
        break;
    case 4:
        ui->mirror->setStyleSheet("image: url(:/new/prefix1/clothes/face4.png);");
        break;
    case 5:
        ui->mirror->setStyleSheet("image: url(:/new/prefix1/clothes/face5.png);");
        break;
    case 6:
        ui->mirror->setStyleSheet("image: url(:/new/prefix1/clothes/face6.png);");
        break;
    case 7:
        ui->mirror->setStyleSheet("image: url(:/new/prefix1/clothes/face7.png);");
        break;
    case 8:
        ui->mirror->setStyleSheet("image: url(:/new/prefix1/clothes/face8.png);");
        break;
    case 9:
        ui->mirror->setStyleSheet("image: url(:/new/prefix1/clothes/face9.png);");
        break;
    case 10:
        ui->mirror->setStyleSheet("image: url(:/new/prefix1/clothes/face10.png);");
        break;
    case 11:
        ui->mirror->setStyleSheet("image: url(:/new/prefix1/clothes/face11.png);");
        break;
    case 12:
        ui->mirror->setStyleSheet("image: url(:/new/prefix1/clothes/face12.png);");
        break;
    case 13:
        ui->mirror->setStyleSheet("image: url(:/new/prefix1/clothes/face13.png);");
        break;
    case 14:
        ui->mirror->setStyleSheet("image: url(:/new/prefix1/clothes/face14.png);");
        break;
    case 15:
        ui->mirror->setStyleSheet("image: url(:/new/prefix1/clothes/face15.png);");
        break;
    case 16:
        ui->mirror->setStyleSheet("image: url(:/new/prefix1/clothes/face16.png);");
        break;
    case 17:
        ui->mirror->setStyleSheet("image: url(:/new/prefix1/clothes/face17.png);");
        break;
    case 18:
        ui->mirror->setStyleSheet("image: url(:/new/prefix1/clothes/face18.png);");
        break;
    case 19:
        ui->mirror->setStyleSheet("image: url(:/new/prefix1/clothes/face19.png);");
        break;
    case 20:
        ui->mirror->setStyleSheet("image: url(:/new/prefix1/clothes/face20.png);");
        break;
    case 21:
        ui->mirror->setStyleSheet("image: url(:/new/prefix1/clothes/face21.png);");
        break;
    case 22:
        ui->mirror->setStyleSheet("image: url(:/new/prefix1/clothes/face22.png);");
        break;
    case 23:
        ui->mirror->setStyleSheet("image: url(:/new/prefix1/clothes/face23.png);");
        break;
    case 24:
        ui->mirror->setStyleSheet("image: url(:/new/prefix1/clothes/face24.png);");
        break;
    case 25:
        ui->mirror->setStyleSheet("image: url(:/new/prefix1/clothes/face25.png);");
        break;
    case 26:
        ui->mirror->setStyleSheet("image: url(:/new/prefix1/clothes/face26.png);");
        break;


    }
}

void cosmetic::on_eyeblue_clicked()
{
    facenum -= eyenum;
    eyenum = 1;
    facenum += eyenum;
    change(facenum);
}


void cosmetic::on_eyepurple_clicked()
{
    facenum -= eyenum;
    eyenum = 2;
    facenum += eyenum;
    change(facenum);
}


void cosmetic::on_eyebrown_clicked()
{
    facenum -= eyenum;
    eyenum = 0;
    facenum += eyenum;
    change(facenum);
}


void cosmetic::on_browpurple_clicked()
{
    facenum -= brownum*3;
    brownum = 1;
    facenum += brownum*3;
    change(facenum);
}


void cosmetic::on_browgreen_clicked()
{
    facenum -= brownum*3;
    brownum = 2;
    facenum += brownum*3;
    change(facenum);
}


void cosmetic::on_browblack_clicked()
{
    facenum -= brownum*3;
    brownum = 0;
    facenum += brownum*3;
    change(facenum);
}


void cosmetic::on_mouthred_clicked()
{
    facenum -= mouthnum*9;
    mouthnum = 0;
    facenum += mouthnum*9;
    change(facenum);
}


void cosmetic::on_mouthpink_clicked()
{
    facenum -= mouthnum*9;
    mouthnum = 1;
    facenum += mouthnum*9;
    change(facenum);
}


void cosmetic::on_mouthorange_clicked()
{
    facenum -= mouthnum*9;
    mouthnum = 2;
    facenum += mouthnum*9;
    change(facenum);
}


void cosmetic::on_hairorange_clicked()
{
    hairnum = 0;
    ui->hair->setStyleSheet("image: url(:/new/prefix1/clothes/hair0.png);");
}


void cosmetic::on_hairred_clicked()
{
    hairnum = 1;
    ui->hair->setStyleSheet("image: url(:/new/prefix1/clothes/hair1.png);");
}


void cosmetic::on_hairblonde_clicked()
{
    hairnum = 2;
    ui->hair->setStyleSheet("image: url(:/new/prefix1/clothes/hair2.png);");
}


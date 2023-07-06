#include "criticism.h"
#include "ui_criticism.h"

Criticism::Criticism(int clothnum, int shoenum, int hatnum,int facenum, int hairnum,  QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Criticism)
{
    ui->setupUi(this);



        ui->comment->setFont(QFont("楷体", 12));
    clonum=clothnum;
    fanum=facenum;
    hanum = hairnum;
    QString com;
    change(fanum);
    if(hairnum==0){
        ui->hair->setStyleSheet("image: url(:/new/prefix1/clothes/hair0.png);");
    }
    else if(hairnum==1){
        ui->hair->setStyleSheet("image: url(:/new/prefix1/clothes/hair1.png);");
    }
    else if(hairnum==2){
        ui->hair->setStyleSheet("image: url(:/new/prefix1/clothes/hair2.png);");
    }
    if(clothnum==0){
        //多么淳朴的打扮
        ui->bodyy->setStyleSheet("image: url(:/new/prefix1/clothes/body.png);");
        com += "多么淳朴自然清新脱俗的打扮！\n";
        //ui->comment->setText("多么淳朴自然清新脱俗的打扮！");
    }
    else if(clothnum==1){
        //多么美丽的小裙子
        ui->bodyy->setStyleSheet("image: url(:/new/prefix1/clothes/bodydress.png);");
        com += "多么美丽优雅的小裙子！\n";
        //ui->comment->setText("多么美丽优雅的小裙子！");
    }
    else if(clothnum==2){
        //一看就是一个有趣的女孩呢
        ui->bodyy->setStyleSheet("image: url(:/new/prefix1/clothes/bodykunkun.png);");
        com += "一看就是一个有趣的女孩呢！\n";
        //ui->comment->setText("一看就是一个有趣的女孩呢！");
    }
    else if(clothnum==3){
        //穿成这样真的合适吗？
        ui->bodyy->setStyleSheet("image: url(:/new/prefix1/clothes/bodybikini.png);");
        com += "穿成这样真的合适吗？\n";
        //ui->comment->setText("穿成这样真的合适吗？");
    }
    else if(clothnum==4){
        //真是富有异域风情呢
        ui->bodyy->setStyleSheet("image: url(:/new/prefix1/clothes/bodyshali.png);");
        com += "真是富有异域风情呢！\n";
        //ui->comment->setText("真是富有异域风情呢！");
    }

    if(shoenum==0){
        ui->feet->setStyleSheet("image: url(:/new/prefix1/clothes/feet.png);");
        com += "穿着这双鞋子跳舞也会很舒服吧！\n";
        //ui->comment->setText("多么淳朴自然清新脱俗的打扮！");
    }
    else if(shoenum==1){
        //多么美丽的小裙子
        ui->feet->setStyleSheet("image: url(:/new/prefix1/clothes/feetblue.png);");
        com += "蓝色的鞋子真可爱！\n";
    }
    else if(shoenum==2){
        //一看就是一个有趣的女孩呢
        ui->feet->setStyleSheet("image: url(:/new/prefix1/clothes/feetbrown.png);");
        com += "穿着这双鞋子跳舞也会很舒服吧！\n";
    }
    else if(shoenum==3){
        //穿成这样真的合适吗？
        ui->feet->setStyleSheet("image: url(:/new/prefix1/clothes/feetred.png);");
        com += "多么漂亮的红色高跟鞋！\n";
        //ui->comment->setText("穿成这样真的合适吗？");
    }

    if(hatnum==0){
        //多么淳朴的打扮
        //ui->bodyy->setStyleSheet("image: url(:/new/prefix1/clothes/head.png);");
        //ui->comment->setText("多么淳朴自然清新脱俗的打扮！");
    }
    else if(hatnum==1){
        //多么美丽的小裙子
        ui->hatt->setStyleSheet("image: url(:/new/prefix1/clothes/hat.png);");
        com += "还有一顶优雅的草帽！";
        //ui->comment->setText("多么美丽优雅的小裙子！");
    }
    else if(hatnum==2){
        //一看就是一个有趣的女孩呢
        ui->hatt->setStyleSheet("image: url(:/new/prefix1/clothes/crown.png);");
        com += "多么高贵的王冠！你一定是舞会上最靓的仔！";
        //ui->comment->setText("一看就是一个有趣的女孩呢！");
    }
    else if(hatnum==3){
        //穿成这样真的合适吗？
        ui->hatt->setStyleSheet("image: url(:/new/prefix1/clothes/diploma.png);");
        com += "而且看起来很有文化的样子呢！";
        //ui->comment->setText("穿成这样真的合适吗？");
    }
    else if(hatnum==4){
        //真是富有异域风情呢
        ui->hatt->setStyleSheet("image: url(:/new/prefix1/clothes/safe.png);");
        com += "这样去参加舞会也有满满的安全感哦！";
        //ui->comment->setText("真是富有异域风情呢！");
    }
    ui->comment->setText(com);
}

Criticism::~Criticism()
{
    delete ui;
}

void Criticism::change(int fanum){
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


void Criticism::on_comment_clicked()
{
    if(clonum==3){
        this->close();
        Dialog *w = new Dialog(fanum, hanum);
        w->show();
    }
    this->close();
}

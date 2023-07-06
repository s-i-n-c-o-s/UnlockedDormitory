#include "volleyballgame.h"
#include "qtimer.h"
#include "ui_volleyballgame.h"
#include<QKeyEvent>
#include<QPushButton>
#include<QString>
#include<QRandomGenerator>
volleyballgame::volleyballgame(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::volleyballgame)
{

    //新建排球定时器
    ballmove = new QTimer(this);
    connect(ballmove, &QTimer::timeout, this, &volleyballgame::slotTimeOut1);

    //美观输入框
    ui->setupUi(this);
    ui->line1->setStyleSheet("border-radius:10px");
    ui->line2->setStyleSheet("border-radius:10px");
    ui->line3->setStyleSheet("border-radius:10px");

    ui->line1->setVisible(false);
    ui->line2->setVisible(false);
    ui->line3->setVisible(false);
    ui->yes->setVisible(false);

    //显示分数
    QString s=QString::number(score);
    ui->score->setText(s1+s);
    ui->score->setFont(QFont("楷体", 18));

    //显示说明
    ui->push->setParent(this);
    ui->push->setFont(QFont("楷体", 30));
    ui->push->setText(x);
    ui->push->setStyleSheet("border-image: url(:/new/prefix1/art/true.jpg);border-radius:10px; ");

    //新建键盘定时器
    keyRespondTimer = new QTimer(this);
    connect(keyRespondTimer, &QTimer::timeout, this, &volleyballgame::slotTimeOut);
    connect(ui->push,&QPushButton::clicked,this,&volleyballgame::pushbutton_clicked);

}

volleyballgame::~volleyballgame()
{
    delete ui;
}

//点击确定
void volleyballgame::yes_clicked(){


    //判断输入内容进行赋值
    if(ui->line1->text()==""){
g=1;
}
    else if(ui->line1->text()=="random"){
        rd1=1;
    }
    else  g=ui->line1->text().toInt();
    if(ui->line2->text()==""){

        horizontal_v=10;
}
    else if(ui->line2->text()=="random"){
        rd2=1;
    }
    else  horizontal_v=ui->line2->text().toInt();
    if(ui->line3->text()==""){

        vertical_v=-20;
}
    else if(ui->line3->text()=="random"){
        rd3=1;
    }
    else  vertical_v=ui->line3->text().toInt();



    if(rd1)g=QRandomGenerator::global()->bounded(1,5);
    ui->line1->setVisible(false);
    ui->line2->setVisible(false);
     ui->line3->setVisible(false);
    ui->push->setFlat(true);
ui->push->setVisible(false);
ui->push->setDisabled(true);
ui->yes->setFlat(true);
ui->yes->setVisible(false);
ui->yes->setDisabled(true);

//开始游戏，重置信息
score=0;
QString s=QString::number(score);
ui->score->setText(s1+s);
ui->score->setFont(QFont("楷体", 18));
ui->push->setFlat(true);
   ui->push->setVisible(false);
    ui->push->setDisabled(true);
    ui->ball->move(220, 20);
    vx=0;
    vy=0;
keyRespondTimer->start(4);
ballmove->start(100);

}


//进入游戏或重新开始
void volleyballgame::pushbutton_clicked(){
QString s=QString::number(score);
    if(ui->push->text()==x)
   {
 ui->push->setFont(QFont("楷体", 20));
        ui->push->setText("\n请输入基础设置(正负均可(反物理模式))：\n若不输入为默认值\n输入random每次打击任意变化,趣味性更强\n重力加速度：(默认数值为1)\n\n打击后水平速度：(默认数值为10)\n\n打击后竖直速度：(默认数值为-20)\n\n");
        ui->line1->setVisible(true);
        ui->line2->setVisible(true);
         ui->line3->setVisible(true);
  ui->yes->setVisible(true);
connect(ui->yes,&QPushButton::clicked,this,&volleyballgame::yes_clicked);

}
    else if(ui->push->text()==(s2+s+s3)){
        score=0;
        QString s=QString::number(score);
        ui->score->setText(s1+s);
        ui->score->setFont(QFont("楷体", 18));
        ui->push->setFont(QFont("楷体", 20));
        ui->push->setText("\n请输入基础设置(正负均可(反物理模式))：\n若不输入为默认值\n输入random每次打击任意变化,趣味性更强\n重力加速度：(默认数值为1)\n\n打击后水平速度：(默认数值为10)\n\n打击后竖直速度：(默认数值为-20)\n\n");
        ui->line1->setVisible(true);
               ui->line2->setVisible(true);
                ui->line3->setVisible(true);
                ui->yes->setFlat(false);
                ui->yes->setVisible(true);
                ui->yes->setDisabled(false);
                ui->ball->move(220, 20);
                ballmove->stop();

    }
}

//键盘按下
void volleyballgame::keyPressEvent(QKeyEvent *event){
    if(!event->isAutoRepeat())  //鍒ゆ柇濡傛灉涓嶆槸闀挎寜鏃惰嚜鍔ㄨЕ鍙戠殑鎸変笅,灏卞皢key鍊煎姞鍏ュ鍣?
        keys.append(event->key());
    if(!keyRespondTimer->isActive()) //濡傛灉瀹氭椂鍣ㄤ笉鍦ㄨ繍琛岋紝灏卞惎鍔ㄤ竴涓?
        keyRespondTimer->start(4);
}

//键盘抬起
void volleyballgame::keyReleaseEvent(QKeyEvent *event){
    if(!event->isAutoRepeat())  //鍒ゆ柇濡傛灉涓嶆槸闀挎寜鏃惰嚜鍔ㄨЕ鍙戠殑閲婃斁,灏卞皢key鍊间粠瀹瑰櫒涓垹闄?
        keys.removeAll(event->key());
    if(keys.isEmpty()) //瀹瑰櫒绌轰簡锛屽叧闂畾鏃跺櫒
        keyRespondTimer->stop();
}

//从list中取出按键控制小人移动
void volleyballgame::slotTimeOut(){
    foreach (int key, keys) {
           switch (key) {
           case Qt::Key_W:
               ui->player1->move(ui->player1->x(), ui->player1->y() - 1);
               break;
           case Qt::Key_A:
               ui->player1->move(ui->player1->x() - 1, ui->player1->y());
               break;
           case Qt::Key_S:
               ui->player1->move(ui->player1->x(), ui->player1->y() + 1);
               break;
           case Qt::Key_D:
               ui->player1->move(ui->player1->x() + 1, ui->player1->y());
               break;
           case Qt::Key_Up:
               ui->player2->move(ui->player2->x(), ui->player2->y() - 1);
               break;
           case Qt::Key_Left:
               ui->player2->move(ui->player2->x() - 1, ui->player2->y());
               break;
           case Qt::Key_Down:
               ui->player2->move(ui->player2->x(), ui->player2->y() + 1);
               break;
           case Qt::Key_Right:
               ui->player2->move(ui->player2->x() + 1, ui->player2->y());
               break;
           default:
               break;
           }
       }

}

//控制排球轨迹
void volleyballgame::slotTimeOut1(){

    int x1=ui->player1->x()+50;
    int y1=ui->player1->y()+75;
    int x2=ui->player2->x()+50;
    int y2=ui->player2->y()+75;

    int x=ui->ball->x();
    int y=ui->ball->y();

    //如果接到球
    if(x1>=x&&x1<=(x+50)&&y1>=y&&y1<=y+50){
        if(rd2)horizontal_v=QRandomGenerator::global()->bounded(5,20);
        if(rd3)vertical_v=QRandomGenerator::global()->bounded(-30,-10);
        vy=vertical_v;
        vx=horizontal_v;
        score++;
        QString s=QString::number(score);
        ui->score->setText(s1+s);
        ui->score->setFont(QFont("楷体", 18));


    }
    if(x2>=x&&x2<=(x+50)&&y2>=y&&y2<=y+50){

        if(rd2)horizontal_v=QRandomGenerator::global()->bounded(5,20);
           if(rd3)vertical_v=QRandomGenerator::global()->bounded(-30,-10);
        vy=vertical_v;
        vx=-horizontal_v;
        score++;
        QString s=QString::number(score);
        ui->score->setText(s1+s);
        ui->score->setFont(QFont("楷体", 18));
    }

    //如果未接到球
    if(x<=0||x>=700||y>=432){
        ui->push->setFlat(false);
        ui->push->setVisible(true);
        ui->push->setDisabled(false);

        QString s=QString::number(score);
        ui->push->setText(s2+s+s3);
        ui->push->setFont(QFont("楷体", 30));
        ballmove->stop();
        keyRespondTimer->stop();
    }

if(rd1)g=QRandomGenerator::global()->bounded(1,5);
vy+=g;
    ui->ball->move(x+vx, y+vy);
    if(!ballmove->isActive())
        ballmove->start(100);

}

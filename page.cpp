#include "page.h"
#include "ui_page.h"
#include"QPushButton"
#include"QTimer"
#include"cosmetic.h"
#include <QVBoxLayout>
#include <QDebug>
#include<QRandomGenerator>
#include<treehole.h>
#include"wechat.h"
page::page(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page)
{


    ui->setupUi(this);

    //设置页面标题
    this->setWindowTitle("first");
    ui->sign->setFont(QFont("楷体", 8));
    ui->sign->setText("点我\n我是提示");
    //创建对话框
    btn1=new QPushButton;
    btn1->setParent(this);
    btn1->setFont(QFont("楷体", 12));
    btn1->setStyleSheet("border-image: url(:/new/prefix1/art/d.png);");
    btn1->setText("一个无课的午后，我在宿舍中醒来");
    btn1->resize(522,90);
    btn1->move(0,342);
    connect(btn1,&QPushButton::clicked,this,&page::btn1_clicked);


    //创建桌面按钮
    table=new QPushButton;
    table->setParent(this);
    table->resize(250,150);
    table->move(230,260);
    table->setFlat(true);
    table->setVisible(false);
    table->setDisabled(true);
    connect(table,&QPushButton::clicked,this,&page::table_clicked);


    //创建衣柜按钮
    shelf=new QPushButton;
    shelf->setParent(this);
    shelf->resize(100,432);
    shelf->move(60,0);
    shelf->setFlat(true);
    shelf->setVisible(false);
    shelf->setDisabled(true);
    connect(shelf,&QPushButton::clicked,this,&page::shelf_clicked);


    //创建手机按钮
    mobile=new QPushButton;
    mobile->setParent(this);
    mobile->resize(70,130);
    mobile->move(120,290);
    mobile->setFlat(true);
    mobile->setVisible(false);
    mobile->setDisabled(true);
 connect(mobile,&QPushButton::clicked,this,&page::mobile_clicked);
    //创建书籍按钮
    book=new QPushButton;
    book->setParent(this);
    book->resize(100,150);
    book->move(220,280);
    book->setFlat(true);
    book->setVisible(false);
    book->setDisabled(true);


    //创建电脑按钮
    computer=new QPushButton;
    computer->setParent(this);
    computer->resize(200,250);
    computer->move(170,0);
    computer->setFlat(true);
    computer->setVisible(false);
    computer->setDisabled(true);

    connect(computer,&QPushButton::clicked,this,&page::computer_clicked);


    ui->sign->setVisible(false);
    ui->sign->setDisabled(true);


    //设置定时器
    Timer_= new QTimer();
    Timer_->setInterval(6000);	//6s
    connect(Timer_, SIGNAL(timeout()), this, SLOT(Timer_func()));
    //公式符号

    ui->sign->setAttribute(Qt::WA_Hover, true); //开启悬停事件
    ui->sign->installEventFilter(this); //安装事件过滤器


}

page::~page()
{

    delete ui;
}

//进入衣柜
void page::shelf_clicked(){

    if_shelf_clicked=1;
    btn1->setVisible(true);
    btn1->setDisabled(false);
    btn1->setText("哦，想起来了，今晚有舞会");


    table->setVisible(false);
     table->setDisabled(true);
    shelf->setVisible(false);
   shelf->setDisabled(true);




}

//进入手机
void page::mobile_clicked(){
wechat* mw=new wechat;
mw->show();
    if_mobile_clicked=1;
    mobile->setVisible(false);
    mobile->setDisabled(true);

    if(!if_book_clicked){
        book->setVisible(true);
        book->setDisabled(false);
    }

    else if(if_mobile_clicked&&if_book_clicked){
        this->setStyleSheet("page{border-image: url(:/new/prefix1/art/first.jpg);}");

        if(if_shelf_clicked){
        btn1->setVisible(true);
        btn1->setDisabled(false);
        btn1->setText("不知不觉舞会就要开始了");}
                else{

            shelf->setVisible(true);
            shelf->setDisabled(false);

        }


        }

}

//进入桌面
void page::table_clicked(){

if_table_clicked=1;
    shelf->setVisible(false);
    shelf->setDisabled(true);
    table->setDisabled(true);
    this->setStyleSheet("page{border-image: url(:/new/prefix1/art/second.jpg);}");


    btn1->setText("哦对了，高数作业还没写。诶，手机也响了");
    btn1->setVisible(true);
    btn1->setDisabled(false);


}


//进入做题界面
void page::book_clicked() {
    if_book_clicked=1;

    shelf->setVisible(false);
    shelf->setDisabled(true);
    book->setVisible(false);
    book->setDisabled(true);
    computer->setVisible(false);
    computer->setDisabled(true);
    mobile->setVisible(false);
    mobile->setDisabled(true);
    this->setStyleSheet("page{border-image: url(:/new/prefix1/art/question.jpg);}");


    //显示公式符号
    ui->sign->setVisible(true);
    ui->sign->setDisabled(false);
    ui->sign->installEventFilter(this);



    //初始化定时器
    Timer_->start();
}


//对话框交互函数
void page::btn1_clicked()
{

    if(btn1->text() == "一个无课的午后，我在宿舍中醒来")
    {
       btn1->setText("好像有很多重要的事情等待着我去做，\n又好像什么事情都并不重要");
    }
    else if(btn1->text()=="好像有很多重要的事情等待着我去做，\n又好像什么事情都并不重要")
    {
       btn1->setText("我随意地翻找着东西，\n在这个未上锁的宿舍里，在一个无课的午后");
    }
    else if(btn1->text()=="我随意地翻找着东西，\n在这个未上锁的宿舍里，在一个无课的午后")
    {
        btn1->hide();
        shelf->setVisible(true);
        shelf->setDisabled(false);
        table->setVisible(true);
        table->setDisabled(false);
    }
    else if(btn1->text()=="高数学习一直不得其法，唉，寻求帮助吧")
    {

        btn1->setVisible(false);
        btn1->setDisabled(true);

        computer->setVisible(true);
        computer->setDisabled(false);
    }
    else if(btn1->text()=="哦对了，高数作业还没写。诶，手机也响了")
    {
        btn1->setVisible(false);
        btn1->setDisabled(true);
        book->setVisible(true);
        book->setDisabled(false);
        connect(book,&QPushButton::clicked,this,&page::book_clicked);
        mobile->setVisible(true);
        mobile->setDisabled(false);
    }
    else if(btn1->text()=="哦，想起来了，今晚有舞会"){



        btn1->setText("好的，让我看看都有什么衣服……");


    }
    else if(btn1->text()=="好的，让我看看都有什么衣服……"){
        btn1->setVisible(false);
        btn1->setDisabled(true);

        cosmetic* s1=new cosmetic;
        s1->show();



       if(!if_table_clicked){
          table->setVisible(true);
           table->setDisabled(false);}
        else{
           this->setStyleSheet("page{border-image: url(:/new/prefix1/art/first.jpg);}");

           btn1->setVisible(true);
           btn1->setDisabled(false);
           btn1->setText("不知不觉舞会就要开始了");


       }
    }
    else if(btn1->text()=="不知不觉舞会就要开始了"){
        this->setStyleSheet("page{border-image: url(:/new/prefix1/art/e1.jpg);}");

        btn1->setText("复习了高数，解决了社团问题的琨琨一扫清晨的烦躁不安");


    }
    else if(btn1->text()=="复习了高数，解决了社团问题的琨琨一扫清晨的烦躁不安"){
        this->setStyleSheet("page{border-image: url(:/new/prefix1/art/e2.jpg);}");

        btn1->setText("走出了这间未上锁的寝室");


    }
    else if(btn1->text()=="走出了这间未上锁的寝室")
{
        btn1->setText("也走出了解封的心房");
         this->setStyleSheet("page{border-image: url(:/new/prefix1/art/e3.jpg);}");
    }
}


//鼠标悬停按钮移动
bool page::eventFilter(QObject *watched, QEvent *event)
{
    if(watched == (ui->sign))
    {
        if(event->type() == QEvent::Enter)
                {
            QPushButton *b = qobject_cast<QPushButton*>(watched);
            int x=QRandomGenerator::global()->bounded(10,500);
            int y=QRandomGenerator::global()->bounded(10,400);
                 b->move(x,y);
                    return true;
                }


    }
    return QWidget::eventFilter(watched, event);
}


//做题游戏结束
void page::Timer_func(){

     ui->sign->setFlat(true);
    ui->sign->setVisible(false);
    ui->sign->setDisabled(true);

    Timer_->stop();
    this->setStyleSheet("page{border-image: url(:/new/prefix1/art/second.jpg);}");
    btn1->setText("高数学习一直不得其法，唉，寻求帮助吧");
    btn1->setVisible(true);
    btn1->setDisabled(false);
    btn1->show();

}

//进入树洞界面
void page::computer_clicked(){
    treehole* t1=new treehole;
    t1->show();

    if(!if_mobile_clicked){
        mobile->setVisible(true);
        mobile->setDisabled(false);}
     else if(if_mobile_clicked&&if_book_clicked){
        this->setStyleSheet("page{border-image: url(:/new/prefix1/art/first.jpg);}");

        if(if_shelf_clicked){
        btn1->setVisible(true);
        btn1->setDisabled(false);
        btn1->setText("不知不觉舞会就要开始了");
        }
        else{

            shelf->setVisible(true);
            shelf->setDisabled(false);

        }

    }


    computer->setVisible(false);
    computer->setDisabled(true);
}

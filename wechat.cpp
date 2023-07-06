
#include "wechat.h"
#include "ui_wechat.h"
#include<QLabel>
#include<QScrollArea>

wechat::wechat(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::wechat)
{
    //QLabel *imageLabel = new QLabel(this);
    //imageLabel->setPixmap(QPixmap(":/Images/head"));


    //QScrollArea *scrollArea = new QScrollArea(this);
    //scrollArea->setBackgroundRole(QPalette::Dark);  // 背景色
    //scrollArea->setWidget(imageLabel);
    ui->setupUi(this);
ui->pushButton->setFont(QFont("楷体", 12));
ui->pushButton_2->setFont(QFont("楷体", 6));
ui->pushButton_3->setFont(QFont("楷体", 12));
ui->pushButton_3->setStyleSheet("border-image: url(:/new/prefix1/art/d.png);");
    ui->pushButton_3->setText("啊，原来是排球队\n又有新消息了，\n打开看看吧……");
}

wechat::~wechat()
{
    delete ui;
}

/*QLabel *imageLabel = new QLabel(this);
imageLabel->setPixmap(QPixmap(":/Images/head"));

QScrollArea *scrollArea = new QScrollArea(this);
scrollArea->setBackgroundRole(QPalette::Dark);  // 背景色
scrollArea->setWidget(imageLabel);


QLabel *imageLabel = new QLabel(this);
QPixmap pixmap(":/Images/head");
pixmap = pixmap.scaled(200, 200);
imageLabel->setPixmap(pixmap);
imageLabel->setStyleSheet("background: white;");  // 用于“部件调整大小”处效果对比

QScrollArea *scrollArea = new QScrollArea(this);
scrollArea->setBackgroundRole(QPalette::Dark);  // 背景色
scrollArea->setWidget(imageLabel);
scrollArea->setAlignment(Qt::AlignCenter);  // 居中对齐
*/

void wechat::on_pushButton_2_clicked()
{
    enter_group = new EnterDialog;
    enter_group->show();
    this->close();
}

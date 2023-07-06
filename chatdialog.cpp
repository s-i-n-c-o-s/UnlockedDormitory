#include "chatdialog.h"
#include "ui_chatdialog.h"
#include"volleyballgame.h"
ChatDialog::ChatDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChatDialog)
{
    ui->setupUi(this);

    QString content = ui->pushButton->text();
    qDebug() << content.toUtf8().data(); // QString 类型转 char* 类型，解决打印中文乱码问题

    ui->pushButton->setFont(QFont("楷体", 8));
    ui->pushButton_2->setFont(QFont("楷体", 8));
    ui->pushButton_3->setFont(QFont("楷体", 8));

   ui->pushButton->setStyleSheet("border-image: url(:/new/prefix1/art/d.png);");
    ui->pushButton->setText("是社长找我啊！\n我好像加社这么久也没有在社内进行交流，\n像个透明人……");
    ui->pushButton->setDisabled(true);
    //点击切换文本内容
    connect(ui->pushButton,&QPushButton::clicked,this,&ChatDialog::pushButton_clicked);
    connect(ui->pushButton_2,&QPushButton::clicked,this,&ChatDialog::pushButton_2_clicked);
    connect(ui->pushButton_3,&QPushButton::clicked,this,&ChatDialog::pushButton_3_clicked);
}

ChatDialog::~ChatDialog()
{
    delete ui;
}


void ChatDialog::pushButton_clicked(){
    QString content = ui->pushButton->text();
    qDebug() << content.toUtf8().data(); // QString 类型转 char* 类型，解决打印中文乱码问题
    if(ui->pushButton->text() == "是社长找我啊！\n我好像加社这么久也没有在社内进行交流，\n像个透明人……"){
        ui->pushButton->setText("可是我从来都没打过排球……\n刚开学加入社团只是一时兴起……");
        ui->pushButton_2->setStyleSheet("border-image: url(:/resource/siliao2.jpg);");
    }
    else if(ui->pushButton->text() == "可是我从来都没打过排球……\n刚开学加入社团只是一时兴起……"){
        ui->pushButton->setText("社长都这么盛情邀请了，要不……\n我还是去试试吧？");
        ui->pushButton_2->setStyleSheet("border-image: url(:/resource/siliao4.jpg);");
    }
    else if(ui->pushButton->text() == "社长都这么盛情邀请了，要不……\n我还是去试试吧？"){

        game=new volleyballgame();
        game->show();
        this->close();
    }
}

void ChatDialog::pushButton_2_clicked(){
    if(ui->pushButton->text() == "可是我从来都没打过排球……刚开学加入社团只是一时兴起……"){
        ui->pushButton_2->setStyleSheet("border-image: url(:/resource/siliao3.jpg);");
    }
}

void ChatDialog::pushButton_3_clicked(){
     ui->pushButton->setDisabled(false);
    ui->pushButton_2->setStyleSheet("border-image: url(:/resource/siliao1.jpg);");
    ui->pushButton_3->setVisible(false);
    ui->pushButton_3->setDisabled(true);
}

#include "treehole.h"
#include "ui_treehole.h"
treehole::treehole(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::treehole)
{
    ui->setupUi(this);
    this->setStyleSheet("treehole{border-image: url(:/new/prefix1/art/2023-05-31.png);}");
    ui->b2->setFlat(true);
     ui->b2->setVisible(false);
      ui->b2->setDisabled(true);
       connect(ui->b2,&QPushButton::clicked,this,&treehole::b2_clicked);
    //创建对话框
    btn2=new QPushButton;
    btn2->setParent(this);
   btn2->setStyleSheet(" border-image: url(:/new/prefix1/art/d.png)");
    btn2->setText("Bingo!鼠鼠我啊，因为社恐只能问树洞了捏");

    btn2->setFont(QFont("楷体", 12));
    btn2->resize(800,90);
    btn2->move(0,342);
    connect(btn2,&QPushButton::clicked,this,&treehole::btn2_clicked);


    ui->b1->setText("");
    ui->b1->setFlat(true);

    ui->plainTextEdit->setVisible(false);
    ui->plainTextEdit->setDisabled(true);
    connect(ui->b1,&QPushButton::clicked,this,&treehole::b1_clicked);

}

treehole::~treehole()
{
    delete ui;
}

//对话框交互函数
void treehole::btn2_clicked(){
    if(btn2->text() == "Bingo!鼠鼠我啊，因为社恐只能问树洞了捏")
    {
       btn2->setText("那就搜索高数应该怎么学习吧！");
    }
    else if(btn2->text()=="那就搜索高数应该怎么学习吧！")
    {
        btn2->setVisible(false);
        btn2->setDisabled(true);

        ui->b1->setVisible(true);
        ui->b1->setDisabled(false);
        ui->plainTextEdit->setVisible(true);
        ui->plainTextEdit->setDisabled(false);
    }
     else if(btn2->text()=="啊！是上学期结课后老师发在教学网的话……或许所有课程的学习都是这样吧"){
        this->close();
    }
}




//发送树洞
void treehole::b1_clicked(){
    QString input(ui->plainTextEdit->toPlainText());
    if(input.contains("学",Qt::CaseInsensitive)&&input.contains("高数",Qt::CaseInsensitive)){



     ui->plainTextEdit->setVisible(false);
     ui->plainTextEdit->setDisabled(true);
     ui->plainTextEdit->setVisible(false);
     ui->plainTextEdit->setDisabled(true);
     this->setStyleSheet("treehole{border-image: url(:/new/prefix1/art/result.png);}");
     ui->b2->setVisible(true);
      ui->b2->setDisabled(false);

    }
}

void treehole::b2_clicked(){
    ui->b1->setVisible(false);
     ui->b1->setDisabled(true);
    ui->b2->setVisible(false);
     ui->b2->setDisabled(true);
    this->setStyleSheet("treehole{image: url(:/new/prefix1/art/word.png);}");
     btn2->setText("啊！是上学期结课后老师发在教学网的话……或许所有课程的学习都是这样吧");

    btn2->setVisible(true);
    btn2->setDisabled(false);

}

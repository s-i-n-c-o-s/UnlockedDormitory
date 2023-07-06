#include "enterdialog.h"
#include "ui_enterdialog.h"
#include<QLabel>
#include<QScrollArea>
EnterDialog::EnterDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EnterDialog)
{
    //滚动图片的代码
    QLabel *imageLabel = new QLabel(this);
    QPixmap pixmap(":/resource/liaotianjilu.jpg");
    pixmap = pixmap.scaled(350, 1400, Qt::KeepAspectRatio);  // 图片缩放
    imageLabel->setPixmap(pixmap);
    imageLabel->setStyleSheet("background: white;");  // 标签白色背景
    //imageLabel->setAlignment(Qt::AlignCenter);  // 图片居中

    QScrollArea *scrollArea = new QScrollArea(this);
    scrollArea->setBackgroundRole(QPalette::Dark);  // 背景色
    scrollArea->setWidget(imageLabel);
   // scrollArea->setAlignment(Qt::AlignCenter);  // 居中对齐
    scrollArea->widget()->resize(350, 1400);   // 手动调整大小
    scrollArea->setGeometry(0,0,500,500);//从屏幕上（0，0）位置开始（即为最左上角的点），显示一个300*200的界面（宽300，高200）

    ui->setupUi(this);
    //ui->pushButton->setStyleSheet("border-image: url(:/resource/liaotianjilu1.jpg);");

    //connect(ui->pushButton,&QPushButton::clicked,this,&EnterDialog::pushButton_clicked);
ui->pushButton_2->setStyleSheet("border-image: url(:/new/prefix1/art/d.png);");
    ui->pushButton_2->setFont(QFont("楷体", 12));
    // 设置按钮上的文本信息
    QString content = ui->pushButton_2->text();
    qDebug() << content.toUtf8().data(); // QString 类型转 char* 类型，解决打印中文乱码问题
    ui->pushButton_2->setText("原来是通知周六训练啊，\n大家都在接龙,\n我有点想去又不太敢……");

    //点击切换文本内容
    connect(ui->pushButton_2,&QPushButton::clicked,this,&EnterDialog::pushButton_2_clicked);

}

EnterDialog::~EnterDialog()
{
    delete ui;
}

//修改背景图片
//void EnterDialog::pushButton_clicked(){
    // ui->pushButton->setStyleSheet("border-image: url(:/resource/liaotianjilu2.jpg);");
//}

//修改按钮文字
void EnterDialog::pushButton_2_clicked(){
     QString content = ui->pushButton_2->text();
     qDebug() << content.toUtf8().data(); // QString 类型转 char* 类型，解决打印中文乱码问题
     ui->pushButton_2->setText("哎？又有新消息了，\n看看是谁发的吧？");
}

//点击按钮2退出群聊打开私聊界面
void EnterDialog::on_pushButton_2_clicked()
{
     if(ui->pushButton_2->text() == "哎？又有新消息了，\n看看是谁发的吧？"){
         ChatDialog *enter_chat = new ChatDialog;
         enter_chat -> show();
         this ->close();
     }
}


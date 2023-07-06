#include "mainwindow.h"
#include "page.h"
#include "ui_mainwindow.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

 ui->pushButton->setFont(QFont("楷体", 32));

 //   QSoundEffect * startSound = new QSoundEffect(this);//创建对象
 //  startSound->setSource(QUrl(":/new/prefix1/moonlight.mp3"));//添加资源
 //  startSound->setLoopCount(QSoundEffect::Infinite);//设置循环次数int；  QSoundEffect::Infinite 枚举值 无限循环
 // startSound->play();//软件启动自动播放

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    page *p1=new page();
    this->close();
    p1->show();
}


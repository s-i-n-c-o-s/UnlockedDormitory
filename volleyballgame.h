#ifndef VOLLEYBALLGAME_H
#define VOLLEYBALLGAME_H

#include <QWidget>
#include<QKeyEvent>
#include<QTimer>
#include<QPushButton>
namespace Ui {
class volleyballgame;
}

class volleyballgame : public QWidget
{
    Q_OBJECT

public:
    explicit volleyballgame(QWidget *parent = nullptr);
    ~volleyballgame();
    void pushbutton_clicked();
    void yes_clicked();
    int vx=0;
    int vy=0;
    bool rd1=0;
    bool rd2=0;
    bool rd3=0;
    int horizontal_v=10;
    int vertical_v=-20;
    int score=0;
    int g=1;    QString x="双人排球：\n通过WASD控制左侧小人\n通过↑↓←→控制右侧小人\n以总垫球个数计分\n点击对话框开始";
    QString s1="当前分数:";
     QString s2="游戏结束\n得分为:";
          QString s3="\n重新开始请点击此处";

private:
    Ui::volleyballgame *ui;
    void keyPressEvent(QKeyEvent *event);
    void keyReleaseEvent(QKeyEvent *event);
    QList<int>keys;
    QTimer* keyRespondTimer;
    QTimer* ballmove;
    void slotTimeOut();
    void slotTimeOut1();
};

#endif // VOLLEYBALLGAME_H

/********************************************************************************
** Form generated from reading UI file 'volleyballgame.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VOLLEYBALLGAME_H
#define UI_VOLLEYBALLGAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_volleyballgame
{
public:
    QLabel *player1;
    QLabel *player2;
    QLabel *ball;
    QLabel *label;
    QPushButton *push;
    QLabel *score;
    QLineEdit *line1;
    QLineEdit *line2;
    QPushButton *yes;
    QLineEdit *line3;

    void setupUi(QWidget *volleyballgame)
    {
        if (volleyballgame->objectName().isEmpty())
            volleyballgame->setObjectName("volleyballgame");
        volleyballgame->resize(700, 432);
        volleyballgame->setMaximumSize(QSize(700, 432));
        volleyballgame->setStyleSheet(QString::fromUtf8(""));
        player1 = new QLabel(volleyballgame);
        player1->setObjectName("player1");
        player1->setGeometry(QRect(130, 140, 100, 150));
        player1->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/art/player.png);"));
        player2 = new QLabel(volleyballgame);
        player2->setObjectName("player2");
        player2->setGeometry(QRect(470, 130, 100, 150));
        player2->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/art/playerright.png);"));
        ball = new QLabel(volleyballgame);
        ball->setObjectName("ball");
        ball->setGeometry(QRect(220, 20, 50, 50));
        ball->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/art/volleyball.png);"));
        label = new QLabel(volleyballgame);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 700, 432));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/art/ground.jpg);"));
        push = new QPushButton(volleyballgame);
        push->setObjectName("push");
        push->setGeometry(QRect(80, 50, 531, 321));
        score = new QLabel(volleyballgame);
        score->setObjectName("score");
        score->setGeometry(QRect(10, 10, 191, 41));
        line1 = new QLineEdit(volleyballgame);
        line1->setObjectName("line1");
        line1->setGeometry(QRect(280, 190, 131, 31));
        line2 = new QLineEdit(volleyballgame);
        line2->setObjectName("line2");
        line2->setGeometry(QRect(280, 260, 131, 31));
        yes = new QPushButton(volleyballgame);
        yes->setObjectName("yes");
        yes->setGeometry(QRect(540, 90, 61, 31));
        line3 = new QLineEdit(volleyballgame);
        line3->setObjectName("line3");
        line3->setGeometry(QRect(280, 330, 131, 31));
        label->raise();
        player1->raise();
        player2->raise();
        ball->raise();
        push->raise();
        score->raise();
        line1->raise();
        line2->raise();
        yes->raise();
        line3->raise();

        retranslateUi(volleyballgame);

        QMetaObject::connectSlotsByName(volleyballgame);
    } // setupUi

    void retranslateUi(QWidget *volleyballgame)
    {
        volleyballgame->setWindowTitle(QCoreApplication::translate("volleyballgame", "Form", nullptr));
        player1->setText(QString());
        player2->setText(QString());
        ball->setText(QString());
        label->setText(QString());
        push->setText(QString());
        score->setText(QCoreApplication::translate("volleyballgame", "\345\275\223\345\211\215\345\210\206\346\225\260\357\274\2320", nullptr));
        yes->setText(QCoreApplication::translate("volleyballgame", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class volleyballgame: public Ui_volleyballgame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VOLLEYBALLGAME_H

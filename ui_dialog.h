/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QToolButton *bluedress;
    QToolButton *sali;
    QToolButton *kunkun;
    QToolButton *bikini;
    QToolButton *hat;
    QToolButton *crown;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QWidget *mirror;
    QWidget *head;
    QWidget *bodyy;
    QWidget *feet;
    QWidget *hatt;
    QWidget *hair;
    QPushButton *OKbuttion;
    QGridLayout *gridLayout_2;
    QToolButton *shoered;
    QToolButton *shoeblue;
    QToolButton *shoebrown;
    QToolButton *diploma;
    QToolButton *safety;
    QToolButton *remake;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(392, 432);
        Dialog->setMaximumSize(QSize(392, 432));
        Dialog->setStyleSheet(QString::fromUtf8("#Dialog{border-image: url(:/new/prefix1/clothes/dre.jpg);}"));
        horizontalLayoutWidget = new QWidget(Dialog);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(40, 90, 331, 281));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        bluedress = new QToolButton(horizontalLayoutWidget);
        bluedress->setObjectName("bluedress");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/clothes/dress.png"), QSize(), QIcon::Normal, QIcon::Off);
        bluedress->setIcon(icon);
        bluedress->setIconSize(QSize(50, 50));

        gridLayout->addWidget(bluedress, 1, 0, 1, 1);

        sali = new QToolButton(horizontalLayoutWidget);
        sali->setObjectName("sali");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/clothes/shali.png"), QSize(), QIcon::Normal, QIcon::Off);
        sali->setIcon(icon1);
        sali->setIconSize(QSize(50, 50));

        gridLayout->addWidget(sali, 2, 1, 1, 1);

        kunkun = new QToolButton(horizontalLayoutWidget);
        kunkun->setObjectName("kunkun");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/prefix1/clothes/beidaiku.png"), QSize(), QIcon::Normal, QIcon::Off);
        kunkun->setIcon(icon2);
        kunkun->setIconSize(QSize(50, 50));

        gridLayout->addWidget(kunkun, 2, 0, 1, 1);

        bikini = new QToolButton(horizontalLayoutWidget);
        bikini->setObjectName("bikini");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/prefix1/clothes/bikini.png"), QSize(), QIcon::Normal, QIcon::Off);
        bikini->setIcon(icon3);
        bikini->setIconSize(QSize(50, 50));

        gridLayout->addWidget(bikini, 1, 1, 1, 1);

        hat = new QToolButton(horizontalLayoutWidget);
        hat->setObjectName("hat");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/prefix1/clothes/hat.png"), QSize(), QIcon::Normal, QIcon::Off);
        hat->setIcon(icon4);
        hat->setIconSize(QSize(50, 50));

        gridLayout->addWidget(hat, 0, 0, 1, 1);

        crown = new QToolButton(horizontalLayoutWidget);
        crown->setObjectName("crown");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/new/prefix1/clothes/crown.png"), QSize(), QIcon::Normal, QIcon::Off);
        crown->setIcon(icon5);
        crown->setIconSize(QSize(50, 50));

        gridLayout->addWidget(crown, 0, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        mirror = new QWidget(horizontalLayoutWidget);
        mirror->setObjectName("mirror");
        mirror->setStyleSheet(QString::fromUtf8(""));
        head = new QWidget(mirror);
        head->setObjectName("head");
        head->setGeometry(QRect(12, 47, 55, 35));
        head->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/clothes/face0.png);"));
        bodyy = new QWidget(mirror);
        bodyy->setObjectName("bodyy");
        bodyy->setGeometry(QRect(0, 80, 81, 101));
        bodyy->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/clothes/body.png);"));
        feet = new QWidget(mirror);
        feet->setObjectName("feet");
        feet->setGeometry(QRect(0, 170, 81, 31));
        feet->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/clothes/feet.png);"));
        hatt = new QWidget(mirror);
        hatt->setObjectName("hatt");
        hatt->setGeometry(QRect(19, 33, 41, 31));
        hair = new QWidget(mirror);
        hair->setObjectName("hair");
        hair->setGeometry(QRect(12, 47, 55, 35));
        hair->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/clothes/hair0.png);"));
        head->raise();
        hair->raise();
        hatt->raise();
        bodyy->raise();
        feet->raise();

        verticalLayout_2->addWidget(mirror);


        verticalLayout->addLayout(verticalLayout_2);

        OKbuttion = new QPushButton(horizontalLayoutWidget);
        OKbuttion->setObjectName("OKbuttion");
        OKbuttion->setMaximumSize(QSize(81, 21));

        verticalLayout->addWidget(OKbuttion);


        horizontalLayout->addLayout(verticalLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        shoered = new QToolButton(horizontalLayoutWidget);
        shoered->setObjectName("shoered");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/new/prefix1/clothes/shoered.png"), QSize(), QIcon::Normal, QIcon::Off);
        shoered->setIcon(icon6);
        shoered->setIconSize(QSize(50, 50));

        gridLayout_2->addWidget(shoered, 2, 0, 1, 1);

        shoeblue = new QToolButton(horizontalLayoutWidget);
        shoeblue->setObjectName("shoeblue");
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/new/prefix1/clothes/shoeblue.png"), QSize(), QIcon::Normal, QIcon::Off);
        shoeblue->setIcon(icon7);
        shoeblue->setIconSize(QSize(50, 50));

        gridLayout_2->addWidget(shoeblue, 1, 0, 1, 1);

        shoebrown = new QToolButton(horizontalLayoutWidget);
        shoebrown->setObjectName("shoebrown");
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/new/prefix1/clothes/shoebrown.png"), QSize(), QIcon::Normal, QIcon::Off);
        shoebrown->setIcon(icon8);
        shoebrown->setIconSize(QSize(50, 50));

        gridLayout_2->addWidget(shoebrown, 1, 1, 1, 1);

        diploma = new QToolButton(horizontalLayoutWidget);
        diploma->setObjectName("diploma");
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/new/prefix1/clothes/diploma.png"), QSize(), QIcon::Normal, QIcon::Off);
        diploma->setIcon(icon9);
        diploma->setIconSize(QSize(50, 50));

        gridLayout_2->addWidget(diploma, 0, 0, 1, 1);

        safety = new QToolButton(horizontalLayoutWidget);
        safety->setObjectName("safety");
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/new/prefix1/clothes/safety.png"), QSize(), QIcon::Normal, QIcon::Off);
        safety->setIcon(icon10);
        safety->setIconSize(QSize(50, 50));

        gridLayout_2->addWidget(safety, 0, 1, 1, 1);

        remake = new QToolButton(horizontalLayoutWidget);
        remake->setObjectName("remake");
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/new/prefix1/clothes/remake.png"), QSize(), QIcon::Normal, QIcon::Off);
        remake->setIcon(icon11);
        remake->setIconSize(QSize(50, 50));

        gridLayout_2->addWidget(remake, 2, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout_2);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        bluedress->setText(QCoreApplication::translate("Dialog", "...", nullptr));
        sali->setText(QCoreApplication::translate("Dialog", "...", nullptr));
        kunkun->setText(QCoreApplication::translate("Dialog", "...", nullptr));
        bikini->setText(QCoreApplication::translate("Dialog", "...", nullptr));
        hat->setText(QCoreApplication::translate("Dialog", "...", nullptr));
        crown->setText(QCoreApplication::translate("Dialog", "...", nullptr));
        OKbuttion->setText(QCoreApplication::translate("Dialog", "\346\215\242\350\243\205\345\256\214\346\210\220\357\274\201", nullptr));
        shoered->setText(QCoreApplication::translate("Dialog", "...", nullptr));
        shoeblue->setText(QCoreApplication::translate("Dialog", "...", nullptr));
        shoebrown->setText(QCoreApplication::translate("Dialog", "...", nullptr));
        diploma->setText(QCoreApplication::translate("Dialog", "...", nullptr));
        safety->setText(QCoreApplication::translate("Dialog", "...", nullptr));
        remake->setText(QCoreApplication::translate("Dialog", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H

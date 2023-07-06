/********************************************************************************
** Form generated from reading UI file 'cosmetic.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COSMETIC_H
#define UI_COSMETIC_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cosmetic
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout_2;
    QToolButton *browgreen;
    QToolButton *eyeblue;
    QToolButton *eyepurple;
    QToolButton *browpurple;
    QToolButton *eyebrown;
    QToolButton *browblack;
    QWidget *widget;
    QPushButton *finished;
    QWidget *mirror;
    QWidget *hair;
    QGridLayout *gridLayout;
    QToolButton *hairorange;
    QToolButton *mouthred;
    QToolButton *mouthpink;
    QToolButton *hairred;
    QToolButton *mouthorange;
    QToolButton *hairblonde;

    void setupUi(QDialog *cosmetic)
    {
        if (cosmetic->objectName().isEmpty())
            cosmetic->setObjectName("cosmetic");
        cosmetic->resize(432, 432);
        cosmetic->setMaximumSize(QSize(432, 432));
        cosmetic->setStyleSheet(QString::fromUtf8("#cosmetic{border-image: url(:/new/prefix1/clothes/cos.jpg);}"));
        horizontalLayoutWidget = new QWidget(cosmetic);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(30, 50, 381, 351));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        browgreen = new QToolButton(horizontalLayoutWidget);
        browgreen->setObjectName("browgreen");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/clothes/browgreen.png"), QSize(), QIcon::Normal, QIcon::Off);
        browgreen->setIcon(icon);
        browgreen->setIconSize(QSize(40, 40));

        gridLayout_2->addWidget(browgreen, 1, 1, 1, 1);

        eyeblue = new QToolButton(horizontalLayoutWidget);
        eyeblue->setObjectName("eyeblue");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/clothes/eyeblue.png"), QSize(), QIcon::Normal, QIcon::Off);
        eyeblue->setIcon(icon1);
        eyeblue->setIconSize(QSize(40, 40));

        gridLayout_2->addWidget(eyeblue, 0, 0, 1, 1);

        eyepurple = new QToolButton(horizontalLayoutWidget);
        eyepurple->setObjectName("eyepurple");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/prefix1/clothes/eyepurple.png"), QSize(), QIcon::Normal, QIcon::Off);
        eyepurple->setIcon(icon2);
        eyepurple->setIconSize(QSize(40, 40));

        gridLayout_2->addWidget(eyepurple, 1, 0, 1, 1);

        browpurple = new QToolButton(horizontalLayoutWidget);
        browpurple->setObjectName("browpurple");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/prefix1/clothes/browpurple.png"), QSize(), QIcon::Normal, QIcon::Off);
        browpurple->setIcon(icon3);
        browpurple->setIconSize(QSize(40, 40));

        gridLayout_2->addWidget(browpurple, 0, 1, 1, 1);

        eyebrown = new QToolButton(horizontalLayoutWidget);
        eyebrown->setObjectName("eyebrown");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/prefix1/clothes/eyebrown.png"), QSize(), QIcon::Normal, QIcon::Off);
        eyebrown->setIcon(icon4);
        eyebrown->setIconSize(QSize(40, 40));

        gridLayout_2->addWidget(eyebrown, 2, 0, 1, 1);

        browblack = new QToolButton(horizontalLayoutWidget);
        browblack->setObjectName("browblack");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/new/prefix1/clothes/browblack.png"), QSize(), QIcon::Normal, QIcon::Off);
        browblack->setIcon(icon5);
        browblack->setIconSize(QSize(40, 40));

        gridLayout_2->addWidget(browblack, 2, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout_2);

        widget = new QWidget(horizontalLayoutWidget);
        widget->setObjectName("widget");
        finished = new QPushButton(widget);
        finished->setObjectName("finished");
        finished->setGeometry(QRect(20, 230, 111, 20));
        finished->setMaximumSize(QSize(111, 20));
        mirror = new QWidget(widget);
        mirror->setObjectName("mirror");
        mirror->setGeometry(QRect(20, 30, 111, 185));
        mirror->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/clothes/face0.png);"));
        hair = new QWidget(mirror);
        hair->setObjectName("hair");
        hair->setGeometry(QRect(0, 0, 111, 185));
        hair->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/clothes/hair0.png);"));

        horizontalLayout->addWidget(widget);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        hairorange = new QToolButton(horizontalLayoutWidget);
        hairorange->setObjectName("hairorange");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/new/prefix1/clothes/hair0.png"), QSize(), QIcon::Normal, QIcon::Off);
        hairorange->setIcon(icon6);
        hairorange->setIconSize(QSize(40, 40));

        gridLayout->addWidget(hairorange, 0, 1, 1, 1);

        mouthred = new QToolButton(horizontalLayoutWidget);
        mouthred->setObjectName("mouthred");
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/new/prefix1/clothes/mouthred.png"), QSize(), QIcon::Normal, QIcon::Off);
        mouthred->setIcon(icon7);
        mouthred->setIconSize(QSize(40, 40));

        gridLayout->addWidget(mouthred, 0, 0, 1, 1);

        mouthpink = new QToolButton(horizontalLayoutWidget);
        mouthpink->setObjectName("mouthpink");
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/new/prefix1/clothes/mouthpink.png"), QSize(), QIcon::Normal, QIcon::Off);
        mouthpink->setIcon(icon8);
        mouthpink->setIconSize(QSize(40, 40));

        gridLayout->addWidget(mouthpink, 1, 0, 1, 1);

        hairred = new QToolButton(horizontalLayoutWidget);
        hairred->setObjectName("hairred");
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/new/prefix1/clothes/hair1.png"), QSize(), QIcon::Normal, QIcon::Off);
        hairred->setIcon(icon9);
        hairred->setIconSize(QSize(40, 40));

        gridLayout->addWidget(hairred, 1, 1, 1, 1);

        mouthorange = new QToolButton(horizontalLayoutWidget);
        mouthorange->setObjectName("mouthorange");
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/new/prefix1/clothes/mouthorange.png"), QSize(), QIcon::Normal, QIcon::Off);
        mouthorange->setIcon(icon10);
        mouthorange->setIconSize(QSize(40, 40));

        gridLayout->addWidget(mouthorange, 2, 0, 1, 1);

        hairblonde = new QToolButton(horizontalLayoutWidget);
        hairblonde->setObjectName("hairblonde");
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/new/prefix1/clothes/hair2.png"), QSize(), QIcon::Normal, QIcon::Off);
        hairblonde->setIcon(icon11);
        hairblonde->setIconSize(QSize(40, 40));

        gridLayout->addWidget(hairblonde, 2, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout);


        retranslateUi(cosmetic);

        QMetaObject::connectSlotsByName(cosmetic);
    } // setupUi

    void retranslateUi(QDialog *cosmetic)
    {
        cosmetic->setWindowTitle(QCoreApplication::translate("cosmetic", "Dialog", nullptr));
        browgreen->setText(QCoreApplication::translate("cosmetic", "...", nullptr));
        eyeblue->setText(QCoreApplication::translate("cosmetic", "...", nullptr));
        eyepurple->setText(QCoreApplication::translate("cosmetic", "...", nullptr));
        browpurple->setText(QCoreApplication::translate("cosmetic", "...", nullptr));
        eyebrown->setText(QCoreApplication::translate("cosmetic", "...", nullptr));
        browblack->setText(QCoreApplication::translate("cosmetic", "...", nullptr));
        finished->setText(QCoreApplication::translate("cosmetic", "\345\256\214\346\210\220\345\214\226\345\246\206\357\274\201", nullptr));
        hairorange->setText(QCoreApplication::translate("cosmetic", "...", nullptr));
        mouthred->setText(QCoreApplication::translate("cosmetic", "...", nullptr));
        mouthpink->setText(QCoreApplication::translate("cosmetic", "...", nullptr));
        hairred->setText(QCoreApplication::translate("cosmetic", "...", nullptr));
        mouthorange->setText(QCoreApplication::translate("cosmetic", "...", nullptr));
        hairblonde->setText(QCoreApplication::translate("cosmetic", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cosmetic: public Ui_cosmetic {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COSMETIC_H

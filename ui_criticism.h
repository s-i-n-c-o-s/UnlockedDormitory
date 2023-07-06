/********************************************************************************
** Form generated from reading UI file 'criticism.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CRITICISM_H
#define UI_CRITICISM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Criticism
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QWidget *showtime;
    QWidget *bodyy;
    QWidget *head;
    QWidget *feet;
    QWidget *hatt;
    QWidget *hair;
    QPushButton *comment;

    void setupUi(QDialog *Criticism)
    {
        if (Criticism->objectName().isEmpty())
            Criticism->setObjectName("Criticism");
        Criticism->resize(358, 432);
        Criticism->setMaximumSize(QSize(358, 432));
        Criticism->setStyleSheet(QString::fromUtf8("#Criticism{border-image: url(:/new/prefix1/clothes/cri.jpg);}"));
        verticalLayoutWidget = new QWidget(Criticism);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(10, 90, 341, 251));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        showtime = new QWidget(verticalLayoutWidget);
        showtime->setObjectName("showtime");
        bodyy = new QWidget(showtime);
        bodyy->setObjectName("bodyy");
        bodyy->setGeometry(QRect(130, 80, 81, 101));
        bodyy->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/clothes/body.png);"));
        head = new QWidget(showtime);
        head->setObjectName("head");
        head->setGeometry(QRect(142, 47, 55, 35));
        head->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/clothes/face0.png);"));
        feet = new QWidget(showtime);
        feet->setObjectName("feet");
        feet->setGeometry(QRect(130, 170, 81, 31));
        feet->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/clothes/feet.png);"));
        hatt = new QWidget(showtime);
        hatt->setObjectName("hatt");
        hatt->setGeometry(QRect(150, 33, 41, 31));
        hair = new QWidget(showtime);
        hair->setObjectName("hair");
        hair->setGeometry(QRect(142, 47, 55, 35));
        hair->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/clothes/hair0.png);"));
        head->raise();
        hair->raise();
        hatt->raise();
        bodyy->raise();
        feet->raise();

        verticalLayout->addWidget(showtime);

        comment = new QPushButton(verticalLayoutWidget);
        comment->setObjectName("comment");

        verticalLayout->addWidget(comment);


        retranslateUi(Criticism);

        QMetaObject::connectSlotsByName(Criticism);
    } // setupUi

    void retranslateUi(QDialog *Criticism)
    {
        Criticism->setWindowTitle(QCoreApplication::translate("Criticism", "Dialog", nullptr));
        comment->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Criticism: public Ui_Criticism {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CRITICISM_H

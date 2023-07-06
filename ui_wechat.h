/********************************************************************************
** Form generated from reading UI file 'wechat.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WECHAT_H
#define UI_WECHAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_wechat
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QDialog *wechat)
    {
        if (wechat->objectName().isEmpty())
            wechat->setObjectName("wechat");
        wechat->resize(220, 431);
        centralwidget = new QWidget(wechat);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setGeometry(QRect(0, 0, 339, 432));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(0, 0, 221, 432));
        pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/resource/weixin1.jpg);"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(140, 60, 71, 21));
        pushButton_2->setMaximumSize(QSize(71, 31));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(0, 350, 221, 81));
        menubar = new QMenuBar(wechat);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 336, 19));
        statusbar = new QStatusBar(wechat);
        statusbar->setObjectName("statusbar");
        statusbar->setGeometry(QRect(0, 0, 3, 22));

        retranslateUi(wechat);

        QMetaObject::connectSlotsByName(wechat);
    } // setupUi

    void retranslateUi(QDialog *wechat)
    {
        wechat->setWindowTitle(QCoreApplication::translate("wechat", "MainWindow", nullptr));
        pushButton_2->setText(QCoreApplication::translate("wechat", "\347\202\271\345\207\273\346\237\245\347\234\213\346\226\260\346\266\210\346\201\257", nullptr));
        pushButton_3->setText(QCoreApplication::translate("wechat", "\345\225\212\357\274\214\345\216\237\346\235\245\346\230\257\346\216\222\347\220\203\351\230\237\345\217\210\346\234\211\346\226\260\346\266\210\346\201\257\344\272\206\357\274\214\346\211\223\345\274\200\347\234\213\347\234\213\345\220\247\342\200\246\342\200\246", nullptr));
    } // retranslateUi

};

namespace Ui {
    class wechat: public Ui_wechat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WECHAT_H

/********************************************************************************
** Form generated from reading UI file 'chatdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATDIALOG_H
#define UI_CHATDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ChatDialog
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *ChatDialog)
    {
        if (ChatDialog->objectName().isEmpty())
            ChatDialog->setObjectName("ChatDialog");
        ChatDialog->resize(221, 432);
        ChatDialog->setMaximumSize(QSize(221, 432));
        pushButton = new QPushButton(ChatDialog);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(0, 380, 221, 51));
        pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/art/d.png);"));
        pushButton_2 = new QPushButton(ChatDialog);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(0, -20, 221, 400));
        pushButton_2->setStyleSheet(QString::fromUtf8("border-image: url(:/resource/weixin2.jpg);"));
        pushButton_3 = new QPushButton(ChatDialog);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(160, 70, 51, 21));

        retranslateUi(ChatDialog);

        QMetaObject::connectSlotsByName(ChatDialog);
    } // setupUi

    void retranslateUi(QDialog *ChatDialog)
    {
        ChatDialog->setWindowTitle(QCoreApplication::translate("ChatDialog", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("ChatDialog", "\346\230\257\347\244\276\351\225\277\346\211\276\346\210\221\345\225\212\357\274\201\345\245\275\345\203\217\345\212\240\347\244\276\350\277\231\344\271\210\344\271\205\344\271\237\346\262\241\346\234\211\345\222\214\347\244\276\345\206\205\350\277\233\350\241\214\344\272\244\346\265\201\345\203\217\351\200\217\346\230\216\344\272\272\342\200\246\342\200\246", nullptr));
        pushButton_2->setText(QString());
        pushButton_3->setText(QCoreApplication::translate("ChatDialog", "\347\202\271\345\207\273\346\237\245\347\234\213\346\226\260\346\266\210\346\201\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChatDialog: public Ui_ChatDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATDIALOG_H

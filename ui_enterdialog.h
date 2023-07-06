/********************************************************************************
** Form generated from reading UI file 'enterdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENTERDIALOG_H
#define UI_ENTERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_EnterDialog
{
public:
    QPushButton *pushButton_2;

    void setupUi(QDialog *EnterDialog)
    {
        if (EnterDialog->objectName().isEmpty())
            EnterDialog->setObjectName("EnterDialog");
        EnterDialog->resize(221, 432);
        EnterDialog->setMaximumSize(QSize(221, 432));
        pushButton_2 = new QPushButton(EnterDialog);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(0, 340, 221, 91));

        retranslateUi(EnterDialog);

        QMetaObject::connectSlotsByName(EnterDialog);
    } // setupUi

    void retranslateUi(QDialog *EnterDialog)
    {
        EnterDialog->setWindowTitle(QCoreApplication::translate("EnterDialog", "Dialog", nullptr));
        pushButton_2->setText(QCoreApplication::translate("EnterDialog", "\345\216\237\346\235\245\346\230\257\351\200\232\347\237\245\345\221\250\345\205\255\350\256\255\347\273\203\345\225\212\357\274\214\345\244\247\345\256\266\351\203\275\345\234\250\346\216\245\351\276\231\342\200\246\342\200\246\346\234\211\347\202\271\346\203\263\345\216\273\345\217\210\344\270\215\346\225\242\342\200\246\342\200\246", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EnterDialog: public Ui_EnterDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENTERDIALOG_H

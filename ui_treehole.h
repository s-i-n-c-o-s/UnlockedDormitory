/********************************************************************************
** Form generated from reading UI file 'treehole.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TREEHOLE_H
#define UI_TREEHOLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_treehole
{
public:
    QPushButton *b1;
    QPlainTextEdit *plainTextEdit;
    QPushButton *b2;

    void setupUi(QDialog *treehole)
    {
        if (treehole->objectName().isEmpty())
            treehole->setObjectName("treehole");
        treehole->resize(800, 432);
        treehole->setMaximumSize(QSize(800, 432));
        treehole->setAutoFillBackground(false);
        treehole->setStyleSheet(QString::fromUtf8("#treehole{border-image: url(:/new/prefix1/art/2023-05-31.png);}"));
        b1 = new QPushButton(treehole);
        b1->setObjectName("b1");
        b1->setGeometry(QRect(670, 60, 31, 16));
        plainTextEdit = new QPlainTextEdit(treehole);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setGeometry(QRect(90, 56, 201, 16));
        plainTextEdit->setStyleSheet(QString::fromUtf8(""));
        b2 = new QPushButton(treehole);
        b2->setObjectName("b2");
        b2->setGeometry(QRect(30, 260, 351, 161));

        retranslateUi(treehole);

        QMetaObject::connectSlotsByName(treehole);
    } // setupUi

    void retranslateUi(QDialog *treehole)
    {
        treehole->setWindowTitle(QCoreApplication::translate("treehole", "Dialog", nullptr));
        b1->setText(QCoreApplication::translate("treehole", "PushButton", nullptr));
        b2->setText(QCoreApplication::translate("treehole", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class treehole: public Ui_treehole {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TREEHOLE_H

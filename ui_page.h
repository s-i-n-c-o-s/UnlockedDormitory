/********************************************************************************
** Form generated from reading UI file 'page.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGE_H
#define UI_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_page
{
public:
    QPushButton *sign;

    void setupUi(QDialog *page)
    {
        if (page->objectName().isEmpty())
            page->setObjectName("page");
        page->resize(522, 432);
        page->setMaximumSize(QSize(522, 432));
        page->setMouseTracking(false);
        page->setStyleSheet(QString::fromUtf8("#page{border-image: url(:/new/prefix1/art/first.jpg);}"));
        sign = new QPushButton(page);
        sign->setObjectName("sign");
        sign->setGeometry(QRect(60, 90, 101, 71));
        sign->setMouseTracking(true);
        sign->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/art/f.png);"));

        retranslateUi(page);

        QMetaObject::connectSlotsByName(page);
    } // setupUi

    void retranslateUi(QDialog *page)
    {
        page->setWindowTitle(QCoreApplication::translate("page", "Dialog", nullptr));
        sign->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class page: public Ui_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGE_H

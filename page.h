#ifndef PAGE_H
#define PAGE_H
#include"cosmetic.h"
#include <QPushButton>
#include <QDialog>
#include <QPushButton>
#include <QTimer>
#include<QLabel>
#include<QStatusBar>
#include<QMouseEvent>
#include <QEvent>
#include<treehole.h>
namespace Ui {
class page;
}

class page : public QDialog
{
    Q_OBJECT

public:

    bool if_book_clicked=0;
    bool if_mobile_clicked=0;
    bool if_shelf_clicked=0;
    bool if_table_clicked=0;
    QTimer* Timer_;
    bool eventFilter(QObject *watched, QEvent *event);
    explicit page(QWidget *parent = nullptr);
    ~page();


private slots:

    void Timer_func();
    void btn1_clicked();
    void table_clicked();
     void shelf_clicked();
    void mobile_clicked();
    void book_clicked();
    void computer_clicked();

private:

    Ui::page *ui;
    QPushButton *btn1;
    QPushButton *shelf;
    QPushButton *table;
    QPushButton *mobile;
    QPushButton* book;
    QPushButton* computer;
};

#endif // PAGE_H

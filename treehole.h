#ifndef TREEHOLE_H
#define TREEHOLE_H

#include <QDialog>
namespace Ui {
class treehole;
}

class treehole : public QDialog
{
    Q_OBJECT

public:
    void b1_clicked();
    void b2_clicked();
     QPushButton *btn2;
     void btn2_clicked();
    explicit treehole(QWidget *parent = nullptr);
    ~treehole();


private:
    Ui::treehole *ui;

};

#endif // TREEHOLE_H

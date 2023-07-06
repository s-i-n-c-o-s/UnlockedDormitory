#ifndef BUTTON_H
#define BUTTON_H

#include <QDialog>

namespace Ui {
class button;
}

class button : public QDialog
{
    Q_OBJECT

public:
    explicit button(QWidget *parent = nullptr);
    ~button();

private:
    Ui::button *ui;
};

#endif // BUTTON_H

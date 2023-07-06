#include "button.h"
#include "ui_button.h"

button::button(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::button)
{
    ui->setupUi(this);
}

button::~button()
{
    delete ui;
}

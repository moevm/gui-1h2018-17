#include "confirm_del.h"
#include "ui_confirm_del.h"

confirm_del::confirm_del(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::confirm_del)
{
    ui->setupUi(this);
}

confirm_del::~confirm_del()
{
    delete ui;
}

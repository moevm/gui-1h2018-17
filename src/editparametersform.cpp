#include "editparametersform.h"
#include "ui_editparametersform.h"

EditParametersForm::EditParametersForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditParametersForm)
{
    ui->setupUi(this);
    this->saveChanges = false;
}

EditParametersForm::~EditParametersForm()
{
    delete ui;
}

void EditParametersForm::on_buttonBox_accepted()
{
    this->saveChanges = true;
    this->close();
}

void EditParametersForm::on_buttonBox_rejected()
{
    this->saveChanges = false;
    this->close();
}

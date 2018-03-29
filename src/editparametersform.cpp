#include "editparametersform.h"
#include "ui_editparametersform.h"

#include <QLabel>
#include <QLineEdit>

EditParametersForm::EditParametersForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditParametersForm)
{
    ui->setupUi(this);
    this->saveChanges = false;
}

EditParametersForm::EditParametersForm(QList<QPair<QString, QString> > *parameters) : EditParametersForm() {
    QWidget *label;
    QWidget *edit;
    int ctr = 0;
    for (auto parameter: *parameters) {
        label = new QLabel(ui->scrollArea);
        edit = new QLineEdit(ui->scrollArea);

        label->setGeometry(15, 17 + 30*ctr, 100, 15);
        ((QLabel*)label)->setText(parameter.first);

        edit->setGeometry(120, 15 + 30*ctr, 80, 20);
        ((QLineEdit*)edit)->setText(parameter.second);

        ++ctr;
    }

    delete parameters;
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

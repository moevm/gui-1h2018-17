#include "editeffectsform.h"
#include "ui_editeffectsform.h"

EditEffectsForm::EditEffectsForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditEffectsForm)
{
    ui->setupUi(this);
}

EditEffectsForm::EditEffectsForm(QList<QString> *effects) : EditEffectsForm() {
    for (auto effect: *effects) {
        ui->listWidget->addItem(effect);
    }
}

EditEffectsForm::~EditEffectsForm()
{
    delete ui;
}

void EditEffectsForm::on_buttonSave_clicked()
{
    this->close();
}

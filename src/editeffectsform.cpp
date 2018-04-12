#include "editeffectsform.h"
#include "ui_editeffectsform.h"

EditEffectsForm::EditEffectsForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditEffectsForm)
{
    ui->setupUi(this);
    this->isChanged = false;
}

EditEffectsForm::EditEffectsForm(QList<QString> *effects) : EditEffectsForm() {
    this->effects = effects;

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
    this->isChanged = true;
    this->close();
}

void EditEffectsForm::on_buttonAdd_clicked()
{
    if (ui->comboBox->currentText().length() > 1) {
        this->effects->append(ui->comboBox->currentText());
        ui->listWidget->addItem(ui->comboBox->currentText());
    }
}

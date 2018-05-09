#include "combatform.h"
#include "ui_combatform.h"

#include "combatbeginform.h"

CombatForm::CombatForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CombatForm)
{
    ui->setupUi(this);
}

CombatForm::CombatForm(QList<QString> participants, Model *model) : CombatForm() {
    for (auto participant: participants) {
        ui->listWidget->addItem(participant);
    }

    this->model = model;
    connect(model, Model::updated, this, CombatForm::formUpdate);

    current = 0;
    ui->listWidget->setCurrentRow(0);
    this->refresh();
}

CombatForm::~CombatForm()
{
    delete ui;
}

void CombatForm::on_buttonEnd_clicked()
{
    this->close();
}

void CombatForm::formUpdate()
{
    this->refresh();
}

void CombatForm::refresh() {
    ui->listWidget->setCurrentRow(this->current);

    QString text = "";
    QString charName = ui->listWidget->currentItem()->text();

    text += charName;
    text += "\nПараметры: ";

    auto paramlist = this->model->getParameters(charName);
    for (auto param : *paramlist) {
        text += "\n - " + param.first + ": " + param.second;
    }

    text += "\n\nОписание: ";
    text += this->model->getCharacterDescription(charName);
    text += "\n\nДействующие эффекты: ";

    auto effectlist = this->model->getEffects(charName);
    if (effectlist == nullptr) return;

    for (auto effect = effectlist->begin(); effect != effectlist->end(); ) {
        text += *effect;
        if (++effect != effectlist->end()) text += ", ";
    }

    ui->plainTextEdit->document()->setPlainText(text);
}

void CombatForm::on_pushButton_clicked()
{
    this->current++;

    if (this->current == ui->listWidget->count()) {
        this->current = 0;

        if (this->model->dynamicInitiative) {
            CombatBeginForm *cbform = new CombatBeginForm(this->model->getCharacters());
            cbform->exec();

            if (cbform->startCombat && !cbform->participants.empty()) {
                ui->listWidget->clear();
                for (auto participant: cbform->participants) {
                    ui->listWidget->addItem(participant);
                }
            }

            delete cbform;
        }
    }

    this->refresh();
}

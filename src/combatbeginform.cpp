#include "combatbeginform.h"
#include "ui_combatbeginform.h"

CombatBeginForm::CombatBeginForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CombatBeginForm)
{
    ui->setupUi(this);
    this->startCombat = false;
}

CombatBeginForm::~CombatBeginForm()
{
    delete ui;
}

void CombatBeginForm::on_buttonBox_accepted()
{
    this->startCombat = true;
    this->close();
}

void CombatBeginForm::on_buttonBox_rejected()
{
    this->startCombat = false;
    this->close();
}

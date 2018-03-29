#include "combatform.h"
#include "ui_combatform.h"

CombatForm::CombatForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CombatForm)
{
    ui->setupUi(this);
}

CombatForm::~CombatForm()
{
    delete ui;
}

void CombatForm::on_buttonEnd_clicked()
{
    this->close();
}

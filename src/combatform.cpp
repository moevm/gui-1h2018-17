#include "combatform.h"
#include "ui_combatform.h"

CombatForm::CombatForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CombatForm)
{
    ui->setupUi(this);
}

CombatForm::CombatForm(QList<QString> participants) : CombatForm() {
    for (auto participant: participants) {
        ui->listWidget->addItem(participant);
    }

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

void CombatForm::refresh() {
    QString text;

    text = ui->listWidget->currentItem()->text();

    ui->plainTextEdit->document()->setPlainText(text);
}

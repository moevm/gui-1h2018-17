#include "editparametersform.h"
#include "ui_editparametersform.h"

EditParametersForm::EditParametersForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditParametersForm)
{
    ui->setupUi(this);
    this->saveChanges = false;
}

EditParametersForm::EditParametersForm(QList<QPair<QString, QString> > *parameters) : EditParametersForm() {
    QLabel *label;
    QLineEdit *edit;
    int ctr = 0;

    this->parameters = parameters;

    for (auto parameter: *parameters) {
        label = new QLabel(ui->scrollArea);
        edit = new QLineEdit(ui->scrollArea);

        label->setGeometry(15, 17 + 30*ctr, 100, 15);
        label->setText(parameter.first);

        edit->setGeometry(120, 15 + 30*ctr, 80, 20);
        edit->setText(parameter.second);

        connect(edit, &QLineEdit::textChanged, this, &EditParametersForm::updateParameters);

        ++ctr;

        this->parEdits.append(QPair<QLabel *, QLineEdit *>(label, edit));
    }

}

EditParametersForm::~EditParametersForm()
{
    delete parameters;
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

void EditParametersForm::updateParameters()
{
    this->parameters->clear();

    for (auto pair : this->parEdits) {
        this->parameters->append(QPair<QString,QString>(pair.first->text(), pair.second->text()));
    }
}

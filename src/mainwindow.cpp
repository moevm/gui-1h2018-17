#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "confirm_del.h"
#include "editparametersform.h"
#include "editeffectsform.h"
#include "combatbeginform.h"
#include "combatform.h"

#include "param_list.h"
#include "person.h"
#include "parameter.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->effect_work_box->setGeometry(330,10,401,411);
    ui->init_config_box->setGeometry(330,10,401,411);
    ui->effect_work_box->setVisible(false);
    ui->param_work_box->setVisible(false);
    ui->init_config_box->setVisible(false);

    this->model = new Model();
    connect(this->model, &Model::updated, this, &MainWindow::update);

    this->model->addCharacter(new Person("Редиска", "нехороший человек"));

    //for debug-проверяю,что параметры прикреплятся к персонажу корректно. вызов- в model
    Person* a = this->model->getCharacters_debug().first();
    Parameter* p= new Parameter(0,600);
    a->parameters.append(p);
    p = new Parameter(1,900);
    a->parameters.append(p);


    this->model->addCharacter(new Person("Олень","большие рога"));
    this->model->addCharacter(new Person("Гудвин", "волшебник"));

    this->model->addScene(new Scene("У дуба", "Описание"));
    this->model->addScene(new Scene("В избушке","Opisaniye"));
    this->model->addScene(new Scene("Сражение", "Битва"));

    ui->characters_list->clear();
    for (auto chr: *(this->model->getCharacters())) {
        ui->characters_list->addItem(chr);
    }
    ui->character_text->clear();

    ui->scenes_list->clear();
    for (auto scene: *(this->model->getScenes())) {
        ui->scenes_list->addItem(scene);
    }
    ui->scene_text->clear();

    ui->button_editchar->setEnabled(false);
    ui->button_editeffects->setEnabled(false);

}

MainWindow::~MainWindow()
{
    delete this->model;
    delete ui;
}

void MainWindow::on_param_work_clicked()
{
    ui->effect_work_box->setVisible(false);
    ui->init_config_box->setVisible(false);
    ui->param_work_box->setVisible(true);
}

void MainWindow::on_effects_work_clicked()
{
    ui->param_work_box->setVisible(false);
    ui->init_config_box->setVisible(false);
    ui->effect_work_box->setVisible(true);
}

void MainWindow::on_init_config_clicked()
{
    ui->param_work_box->setVisible(false);
    ui->effect_work_box->setVisible(false);
    ui->init_config_box->setVisible(true);
}

void MainWindow::on_dynamic_init_radio_clicked()
{
    ui->label_4->setEnabled(true);
    ui->param_list_init->setEnabled(true);
    ui->ok_init_config->setEnabled(true);
    ui->cancel_init_config->setEnabled(true);
}

void MainWindow::on_static_init_radio_clicked()
{
    ui->label_4->setEnabled(false);
    ui->param_list_init->setEnabled(false);
    ui->ok_init_config->setEnabled(false);
    ui->cancel_init_config->setEnabled(false);
}

void MainWindow::on_delete_param_clicked()
{
    confirm_del *wdg = new confirm_del();
    wdg->show();
}

void MainWindow::on_delete_effect_clicked()
{
    confirm_del *wdg = new confirm_del();
    wdg->show();
}

void MainWindow::on_button_editchar_clicked()
{
    EditParametersForm *editparm = new EditParametersForm(this->model->getParameters(ui->characters_list->currentItem()->text()));
    editparm->exec();

    if (editparm->saveChanges) {
        this->model->editParameters(ui->characters_list->currentItem()->text(), editparm->parameters);
        this->model->updated();
    }

    delete editparm;
}

void MainWindow::on_button_fight_clicked()
{
    CombatBeginForm *cbegin = new CombatBeginForm(this->model->getCharacters());
    cbegin->exec();

    if (cbegin->startCombat) {
        CombatForm *cmb = new CombatForm();
        cmb->show();
    }

    delete cbegin;
}

void MainWindow::on_characters_list_itemSelectionChanged()
{
    QString text = "";
    QString charName = ui->characters_list->currentItem()->text();
    text += ui->characters_list->currentItem()->text();
    text += "\n\nОписание: ";
    text += this->model->getCharacterDescription(charName);
    text += "\n\nДействующие эффекты: ";

    auto effectlist = this->model->getEffects(charName);
    if (effectlist == nullptr) return;

    for (auto effect = effectlist->begin(); effect != effectlist->end(); ) {
        text += *effect;
        if (++effect != effectlist->end()) text += ", ";
    }

    ui->character_text->document()->setPlainText(text);

    ui->button_editchar->setEnabled(true);
    ui->button_editeffects->setEnabled(true);
}

void MainWindow::on_scenes_list_itemSelectionChanged()
{
    QString text = "";
    text += ui->scenes_list->currentItem()->text();
    text += "\n\nОписание: ";
    text += this->model->getSceneDescription(ui->scenes_list->currentItem()->text());

    ui->scene_text->document()->setPlainText(text);
}

void MainWindow::on_button_editeffects_clicked()
{
    QString charName = ui->characters_list->currentItem()->text();

    EditEffectsForm *efform = new EditEffectsForm(this->model->getEffects(charName));
    efform->exec();

    if (efform->isChanged) {
        this->model->editEffects(charName, efform->effects);
        this->model->updated();
    }

    delete efform;
}

void MainWindow::update()
{
    this->on_characters_list_itemSelectionChanged();
}

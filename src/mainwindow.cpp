#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "confirm_del.h"
#include "editparametersform.h"
#include "combatbeginform.h"
#include "combatform.h"

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
    EditParametersForm *editparm = new EditParametersForm();
    editparm->exec();

    if (editparm->saveChanges) {
        //модифицировать модель
    }

    delete editparm;
}

void MainWindow::on_button_fight_clicked()
{
    CombatBeginForm *cbegin = new CombatBeginForm();
    cbegin->exec();

    if (cbegin->startCombat) {
        CombatForm *cmb = new CombatForm();
        cmb->show();
    }

    delete cbegin;
}

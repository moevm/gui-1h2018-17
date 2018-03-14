#include "mainwindow.h"
#include "ui_mainwindow.h"

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
}

MainWindow::~MainWindow()
{
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

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "model.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

private:
    Model *model;

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_param_work_clicked();

    void on_effects_work_clicked();

    void on_init_config_clicked();

    void on_dynamic_init_radio_clicked();

    void on_static_init_radio_clicked();

    void on_delete_param_clicked();

    void on_delete_effect_clicked();

    void on_button_editchar_clicked();

    void on_button_fight_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

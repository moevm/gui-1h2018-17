#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_param_work_clicked();

    void on_effects_work_clicked();

    void on_init_config_clicked();

    void on_dynamic_init_radio_clicked();

    void on_static_init_radio_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

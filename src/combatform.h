#ifndef COMBATFORM_H
#define COMBATFORM_H

#include "model.h"

#include <QDialog>
#include <QList>

namespace Ui {
class CombatForm;
}

class CombatForm : public QDialog
{
    Q_OBJECT

public:
    explicit CombatForm(QWidget *parent = 0);
    CombatForm(QList<QString>, Model *);
    ~CombatForm();

private slots:
    void on_buttonEnd_clicked();
    void formUpdate();

    void on_pushButton_clicked();

private:
    Ui::CombatForm *ui;

    int current;
    Model *model;

    void refresh();
};

#endif // COMBATFORM_H

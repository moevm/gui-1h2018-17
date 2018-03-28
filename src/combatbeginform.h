#ifndef COMBATBEGINFORM_H
#define COMBATBEGINFORM_H

#include <QDialog>

namespace Ui {
class CombatBeginForm;
}

class CombatBeginForm : public QDialog
{
    Q_OBJECT

public:
    bool startCombat;

    explicit CombatBeginForm(QWidget *parent = 0);
    ~CombatBeginForm();

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::CombatBeginForm *ui;
};

#endif // COMBATBEGINFORM_H

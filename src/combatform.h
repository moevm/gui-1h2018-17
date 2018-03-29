#ifndef COMBATFORM_H
#define COMBATFORM_H

#include <QDialog>

namespace Ui {
class CombatForm;
}

class CombatForm : public QDialog
{
    Q_OBJECT

public:
    explicit CombatForm(QWidget *parent = 0);
    ~CombatForm();

private slots:
    void on_buttonEnd_clicked();

private:
    Ui::CombatForm *ui;
};

#endif // COMBATFORM_H

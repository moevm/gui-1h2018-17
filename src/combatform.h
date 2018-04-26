#ifndef COMBATFORM_H
#define COMBATFORM_H

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
    CombatForm(QList<QString>);
    ~CombatForm();

private slots:
    void on_buttonEnd_clicked();

private:
    Ui::CombatForm *ui;

    void refresh();
};

#endif // COMBATFORM_H

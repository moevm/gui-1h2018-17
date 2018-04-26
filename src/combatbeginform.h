#ifndef COMBATBEGINFORM_H
#define COMBATBEGINFORM_H

#include <QDialog>
#include <QList>

namespace Ui {
class CombatBeginForm;
}

class CombatBeginForm : public QDialog
{
    Q_OBJECT

public:
    bool startCombat;
    QList<QString> participants;

    CombatBeginForm(QList<QString> *characters);

    explicit CombatBeginForm(QWidget *parent = 0);
    ~CombatBeginForm();

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

    void on_pushButton_4_clicked();

private:
    Ui::CombatBeginForm *ui;
};

#endif // COMBATBEGINFORM_H

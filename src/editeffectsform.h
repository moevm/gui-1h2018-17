#ifndef EDITEFFECTSFORM_H
#define EDITEFFECTSFORM_H

#include <QDialog>
#include <QList>

namespace Ui {
class EditEffectsForm;
}

class EditEffectsForm : public QDialog
{
    Q_OBJECT

public:
    EditEffectsForm(QList<QString> *effects);

    explicit EditEffectsForm(QWidget *parent = 0);
    ~EditEffectsForm();

private slots:
    void on_buttonSave_clicked();

private:
    Ui::EditEffectsForm *ui;
};

#endif // EDITEFFECTSFORM_H

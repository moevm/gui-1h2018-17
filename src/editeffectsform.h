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
    bool isChanged;
    QList<QString> *effects;

    EditEffectsForm(QList<QString> *effects);

    explicit EditEffectsForm(QWidget *parent = 0);
    ~EditEffectsForm();

private slots:
    void on_buttonSave_clicked();

    void on_buttonAdd_clicked();

private:
    Ui::EditEffectsForm *ui;
};

#endif // EDITEFFECTSFORM_H

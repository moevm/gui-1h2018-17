#ifndef EDITPARAMETERSFORM_H
#define EDITPARAMETERSFORM_H

#include <QDialog>
#include <QList>
#include <QPair>

namespace Ui {
class EditParametersForm;
}

class EditParametersForm : public QDialog
{
    Q_OBJECT

public:
    bool saveChanges;

    EditParametersForm(QList< QPair<QString, QString> > *parameters);

    explicit EditParametersForm(QWidget *parent = 0);
    ~EditParametersForm();

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::EditParametersForm *ui;
};

#endif // EDITPARAMETERSFORM_H

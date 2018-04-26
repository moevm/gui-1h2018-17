#ifndef EDITPARAMETERSFORM_H
#define EDITPARAMETERSFORM_H

#include <QDialog>
#include <QList>
#include <QPair>

#include <QLabel>
#include <QLineEdit>

namespace Ui {
class EditParametersForm;
}

class EditParametersForm : public QDialog
{
    Q_OBJECT

public:
    bool saveChanges;
    QList<QPair<QString, QString> > *parameters;
    QList<QPair<QLabel *, QLineEdit *> > parEdits;

    EditParametersForm(QList< QPair<QString, QString> > *parameters);

    explicit EditParametersForm(QWidget *parent = 0);
    ~EditParametersForm();

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();
    void updateParameters();

private:
    Ui::EditParametersForm *ui;
};

#endif // EDITPARAMETERSFORM_H

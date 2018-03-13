#ifndef CONFIRM_DEL_H
#define CONFIRM_DEL_H

#include <QDialog>

namespace Ui {
class confirm_del;
}

class confirm_del : public QDialog
{
    Q_OBJECT

public:
    explicit confirm_del(QWidget *parent = 0);
    ~confirm_del();

private:
    Ui::confirm_del *ui;
};

#endif // CONFIRM_DEL_H

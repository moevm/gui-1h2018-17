/********************************************************************************
** Form generated from reading UI file 'confirm_del.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIRM_DEL_H
#define UI_CONFIRM_DEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_confirm_del
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;

    void setupUi(QDialog *confirm_del)
    {
        if (confirm_del->objectName().isEmpty())
            confirm_del->setObjectName(QStringLiteral("confirm_del"));
        confirm_del->resize(348, 106);
        buttonBox = new QDialogButtonBox(confirm_del);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(-80, 60, 341, 31));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(confirm_del);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 30, 191, 20));

        retranslateUi(confirm_del);
        QObject::connect(buttonBox, SIGNAL(accepted()), confirm_del, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), confirm_del, SLOT(reject()));

        QMetaObject::connectSlotsByName(confirm_del);
    } // setupUi

    void retranslateUi(QDialog *confirm_del)
    {
        confirm_del->setWindowTitle(QApplication::translate("confirm_del", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("confirm_del", "\320\222\321\213 \320\264\320\265\320\271\321\201\321\202\320\262\320\270\321\202\320\265\320\273\321\214\320\275\320\276 \321\205\320\276\321\202\320\270\321\202\320\265 \321\203\320\264\320\260\320\273\320\270\321\202\321\214?", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class confirm_del: public Ui_confirm_del {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIRM_DEL_H

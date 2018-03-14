/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;
    QGroupBox *config_buttons;
    QPushButton *param_work;
    QPushButton *init_config;
    QPushButton *effects_work;
    QGroupBox *param_work_box;
    QLabel *label;
    QListWidget *param_list;
    QPushButton *edit_param;
    QPushButton *delete_param;
    QPushButton *create_param;
    QGroupBox *init_config_box;
    QRadioButton *static_init_radio;
    QRadioButton *dynamic_init_radio;
    QLabel *label_3;
    QLabel *label_4;
    QListWidget *param_list_init;
    QPushButton *ok_init_config;
    QPushButton *cancel_init_config;
    QGroupBox *effect_work_box;
    QLabel *label_2;
    QListWidget *effect_list;
    QPushButton *edit_effect;
    QPushButton *delete_effect;
    QPushButton *create_effect;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(737, 487);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 741, 451));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        config_buttons = new QGroupBox(tab_2);
        config_buttons->setObjectName(QStringLiteral("config_buttons"));
        config_buttons->setGeometry(QRect(10, 10, 291, 411));
        param_work = new QPushButton(config_buttons);
        param_work->setObjectName(QStringLiteral("param_work"));
        param_work->setGeometry(QRect(40, 40, 201, 41));
        init_config = new QPushButton(config_buttons);
        init_config->setObjectName(QStringLiteral("init_config"));
        init_config->setGeometry(QRect(40, 130, 201, 41));
        effects_work = new QPushButton(config_buttons);
        effects_work->setObjectName(QStringLiteral("effects_work"));
        effects_work->setGeometry(QRect(40, 210, 201, 41));
        param_work_box = new QGroupBox(tab_2);
        param_work_box->setObjectName(QStringLiteral("param_work_box"));
        param_work_box->setEnabled(true);
        param_work_box->setGeometry(QRect(330, 10, 401, 411));
        label = new QLabel(param_work_box);
        label->setObjectName(QStringLiteral("label"));
        label->setEnabled(true);
        label->setGeometry(QRect(70, 30, 121, 21));
        param_list = new QListWidget(param_work_box);
        new QListWidgetItem(param_list);
        new QListWidgetItem(param_list);
        new QListWidgetItem(param_list);
        new QListWidgetItem(param_list);
        new QListWidgetItem(param_list);
        new QListWidgetItem(param_list);
        new QListWidgetItem(param_list);
        param_list->setObjectName(QStringLiteral("param_list"));
        param_list->setEnabled(true);
        param_list->setGeometry(QRect(70, 50, 256, 121));
        edit_param = new QPushButton(param_work_box);
        edit_param->setObjectName(QStringLiteral("edit_param"));
        edit_param->setEnabled(true);
        edit_param->setGeometry(QRect(70, 210, 101, 31));
        delete_param = new QPushButton(param_work_box);
        delete_param->setObjectName(QStringLiteral("delete_param"));
        delete_param->setEnabled(true);
        delete_param->setGeometry(QRect(230, 210, 101, 31));
        create_param = new QPushButton(param_work_box);
        create_param->setObjectName(QStringLiteral("create_param"));
        create_param->setEnabled(true);
        create_param->setGeometry(QRect(120, 260, 161, 31));
        init_config_box = new QGroupBox(tab_2);
        init_config_box->setObjectName(QStringLiteral("init_config_box"));
        init_config_box->setGeometry(QRect(130, 320, 221, 91));
        static_init_radio = new QRadioButton(init_config_box);
        static_init_radio->setObjectName(QStringLiteral("static_init_radio"));
        static_init_radio->setGeometry(QRect(60, 50, 101, 21));
        static_init_radio->setChecked(true);
        dynamic_init_radio = new QRadioButton(init_config_box);
        dynamic_init_radio->setObjectName(QStringLiteral("dynamic_init_radio"));
        dynamic_init_radio->setGeometry(QRect(60, 90, 101, 21));
        label_3 = new QLabel(init_config_box);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(60, 10, 101, 16));
        label_4 = new QLabel(init_config_box);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setEnabled(false);
        label_4->setGeometry(QRect(60, 150, 251, 21));
        param_list_init = new QListWidget(init_config_box);
        new QListWidgetItem(param_list_init);
        new QListWidgetItem(param_list_init);
        new QListWidgetItem(param_list_init);
        new QListWidgetItem(param_list_init);
        new QListWidgetItem(param_list_init);
        param_list_init->setObjectName(QStringLiteral("param_list_init"));
        param_list_init->setEnabled(false);
        param_list_init->setGeometry(QRect(70, 180, 256, 131));
        ok_init_config = new QPushButton(init_config_box);
        ok_init_config->setObjectName(QStringLiteral("ok_init_config"));
        ok_init_config->setEnabled(false);
        ok_init_config->setGeometry(QRect(90, 330, 81, 31));
        cancel_init_config = new QPushButton(init_config_box);
        cancel_init_config->setObjectName(QStringLiteral("cancel_init_config"));
        cancel_init_config->setEnabled(false);
        cancel_init_config->setGeometry(QRect(220, 330, 81, 31));
        effect_work_box = new QGroupBox(tab_2);
        effect_work_box->setObjectName(QStringLiteral("effect_work_box"));
        effect_work_box->setEnabled(true);
        effect_work_box->setGeometry(QRect(160, 0, 201, 61));
        label_2 = new QLabel(effect_work_box);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 20, 111, 31));
        effect_list = new QListWidget(effect_work_box);
        new QListWidgetItem(effect_list);
        new QListWidgetItem(effect_list);
        new QListWidgetItem(effect_list);
        new QListWidgetItem(effect_list);
        new QListWidgetItem(effect_list);
        new QListWidgetItem(effect_list);
        new QListWidgetItem(effect_list);
        effect_list->setObjectName(QStringLiteral("effect_list"));
        effect_list->setGeometry(QRect(70, 50, 256, 121));
        edit_effect = new QPushButton(effect_work_box);
        edit_effect->setObjectName(QStringLiteral("edit_effect"));
        edit_effect->setGeometry(QRect(70, 210, 101, 31));
        delete_effect = new QPushButton(effect_work_box);
        delete_effect->setObjectName(QStringLiteral("delete_effect"));
        delete_effect->setGeometry(QRect(230, 210, 101, 31));
        create_effect = new QPushButton(effect_work_box);
        create_effect->setObjectName(QStringLiteral("create_effect"));
        create_effect->setGeometry(QRect(120, 260, 161, 31));
        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 737, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\320\237\320\276\320\274\320\276\321\211\320\275\320\270\320\272 \320\274\320\260\321\201\321\202\320\265\321\200\320\260 \320\275\320\260\321\201\321\202\320\276\320\273\321\214\320\275\320\276\320\271 \321\200\320\276\320\273\320\265\320\262\320\276\320\271 \320\270\320\263\321\200\321\213", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Tab 1", Q_NULLPTR));
        config_buttons->setTitle(QString());
        param_work->setText(QApplication::translate("MainWindow", "\320\240\320\260\320\261\320\276\321\202\320\260 \321\201 \320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200\320\260\320\274\320\270 \320\277\320\265\321\200\321\201\320\276\320\275\320\260\320\266\320\265\320\271", Q_NULLPTR));
        init_config->setText(QApplication::translate("MainWindow", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\260 \320\270\320\275\320\270\321\206\320\270\320\260\321\202\320\270\320\262\321\213", Q_NULLPTR));
        effects_work->setText(QApplication::translate("MainWindow", "\320\240\320\260\320\261\320\276\321\202\320\260 \321\201 \320\276\321\201\320\275\320\276\320\262\320\275\321\213\320\274\320\270 \321\215\321\204\321\204\320\265\320\272\321\202\320\260\320\274\320\270", Q_NULLPTR));
        param_work_box->setTitle(QString());
        label->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200", Q_NULLPTR));

        const bool __sortingEnabled = param_list->isSortingEnabled();
        param_list->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = param_list->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("MainWindow", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200 1", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem1 = param_list->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("MainWindow", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200 2", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem2 = param_list->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("MainWindow", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200 3", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem3 = param_list->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("MainWindow", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200 4", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem4 = param_list->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("MainWindow", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200 5", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem5 = param_list->item(5);
        ___qlistwidgetitem5->setText(QApplication::translate("MainWindow", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200 6", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem6 = param_list->item(6);
        ___qlistwidgetitem6->setText(QApplication::translate("MainWindow", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200 7", Q_NULLPTR));
        param_list->setSortingEnabled(__sortingEnabled);

        edit_param->setText(QApplication::translate("MainWindow", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", Q_NULLPTR));
        delete_param->setText(QApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", Q_NULLPTR));
        create_param->setText(QApplication::translate("MainWindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200", Q_NULLPTR));
        init_config_box->setTitle(QString());
        static_init_radio->setText(QApplication::translate("MainWindow", "\320\241\321\202\320\260\321\202\320\270\321\207\320\265\321\201\320\272\320\260\321\217", Q_NULLPTR));
        dynamic_init_radio->setText(QApplication::translate("MainWindow", "\320\224\320\270\320\275\320\260\320\274\320\270\321\207\320\265\321\201\320\272\320\260\321\217", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "\320\230\320\275\320\270\321\206\320\270\320\260\321\202\320\270\320\262\320\260:", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\262\320\273\321\217\320\270\321\216\321\211\320\270\320\271 \320\275\320\260 \320\270\320\275\320\270\321\206\320\270\320\260\321\202\320\270\320\262\321\203 \320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200:", Q_NULLPTR));

        const bool __sortingEnabled1 = param_list_init->isSortingEnabled();
        param_list_init->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem7 = param_list_init->item(0);
        ___qlistwidgetitem7->setText(QApplication::translate("MainWindow", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200 1", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem8 = param_list_init->item(1);
        ___qlistwidgetitem8->setText(QApplication::translate("MainWindow", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200 2", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem9 = param_list_init->item(2);
        ___qlistwidgetitem9->setText(QApplication::translate("MainWindow", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200 3", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem10 = param_list_init->item(3);
        ___qlistwidgetitem10->setText(QApplication::translate("MainWindow", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200 4", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem11 = param_list_init->item(4);
        ___qlistwidgetitem11->setText(QApplication::translate("MainWindow", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200 5", Q_NULLPTR));
        param_list_init->setSortingEnabled(__sortingEnabled1);

        ok_init_config->setText(QApplication::translate("MainWindow", "OK", Q_NULLPTR));
        cancel_init_config->setText(QApplication::translate("MainWindow", "\320\236\321\202\320\274\320\265\320\275\320\260", Q_NULLPTR));
        effect_work_box->setTitle(QString());
        label_2->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \321\215\321\204\321\204\320\265\320\272\321\202", Q_NULLPTR));

        const bool __sortingEnabled2 = effect_list->isSortingEnabled();
        effect_list->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem12 = effect_list->item(0);
        ___qlistwidgetitem12->setText(QApplication::translate("MainWindow", "\320\255\321\204\321\204\320\265\320\272\321\202 1", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem13 = effect_list->item(1);
        ___qlistwidgetitem13->setText(QApplication::translate("MainWindow", "\320\255\321\204\321\204\320\265\320\272\321\202 2", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem14 = effect_list->item(2);
        ___qlistwidgetitem14->setText(QApplication::translate("MainWindow", "\320\255\321\204\321\204\320\265\320\272\321\202 3", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem15 = effect_list->item(3);
        ___qlistwidgetitem15->setText(QApplication::translate("MainWindow", "\320\255\321\204\321\204\320\265\320\272\321\202 4", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem16 = effect_list->item(4);
        ___qlistwidgetitem16->setText(QApplication::translate("MainWindow", "\320\255\321\204\321\204\320\265\320\272\321\202 5", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem17 = effect_list->item(5);
        ___qlistwidgetitem17->setText(QApplication::translate("MainWindow", "\320\255\321\204\321\204\320\265\320\272\321\202 6", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem18 = effect_list->item(6);
        ___qlistwidgetitem18->setText(QApplication::translate("MainWindow", "\320\255\321\204\321\204\320\265\320\272\321\202 7", Q_NULLPTR));
        effect_list->setSortingEnabled(__sortingEnabled2);

        edit_effect->setText(QApplication::translate("MainWindow", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", Q_NULLPTR));
        delete_effect->setText(QApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", Q_NULLPTR));
        create_effect->setText(QApplication::translate("MainWindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \321\215\321\204\321\204\320\265\320\272\321\202", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\260", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

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
        param_work_box->setGeometry(QRect(330, 10, 401, 411));
        label = new QLabel(param_work_box);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 30, 121, 21));
        param_list = new QListWidget(param_work_box);
        new QListWidgetItem(param_list);
        new QListWidgetItem(param_list);
        new QListWidgetItem(param_list);
        new QListWidgetItem(param_list);
        new QListWidgetItem(param_list);
        new QListWidgetItem(param_list);
        new QListWidgetItem(param_list);
        param_list->setObjectName(QStringLiteral("param_list"));
        param_list->setGeometry(QRect(40, 50, 256, 121));
        edit_param = new QPushButton(param_work_box);
        edit_param->setObjectName(QStringLiteral("edit_param"));
        edit_param->setGeometry(QRect(40, 210, 101, 31));
        delete_param = new QPushButton(param_work_box);
        delete_param->setObjectName(QStringLiteral("delete_param"));
        delete_param->setGeometry(QRect(200, 210, 101, 31));
        create_param = new QPushButton(param_work_box);
        create_param->setObjectName(QStringLiteral("create_param"));
        create_param->setGeometry(QRect(90, 260, 161, 31));
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
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\260", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

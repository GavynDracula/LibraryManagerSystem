/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionConnectDB;
    QAction *actionSaveDB;
    QAction *actionAbout_Program;
    QAction *actionAbout_Me;
    QAction *actionNewDB;
    QAction *actionInput;
    QAction *actionModify;
    QAction *actionDelete;
    QAction *actionSelect_All;
    QAction *actionSelect_Ones;
    QAction *actionRevert;
    QWidget *centralWidget;
    QTableView *tableView;
    QMenuBar *menuBar;
    QMenu *menuDataBase;
    QMenu *menuInquire;
    QMenu *menuHelp;
    QMenu *menuData;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(920, 542);
        actionConnectDB = new QAction(MainWindow);
        actionConnectDB->setObjectName(QStringLiteral("actionConnectDB"));
        actionSaveDB = new QAction(MainWindow);
        actionSaveDB->setObjectName(QStringLiteral("actionSaveDB"));
        actionAbout_Program = new QAction(MainWindow);
        actionAbout_Program->setObjectName(QStringLiteral("actionAbout_Program"));
        actionAbout_Me = new QAction(MainWindow);
        actionAbout_Me->setObjectName(QStringLiteral("actionAbout_Me"));
        actionNewDB = new QAction(MainWindow);
        actionNewDB->setObjectName(QStringLiteral("actionNewDB"));
        actionInput = new QAction(MainWindow);
        actionInput->setObjectName(QStringLiteral("actionInput"));
        actionModify = new QAction(MainWindow);
        actionModify->setObjectName(QStringLiteral("actionModify"));
        actionDelete = new QAction(MainWindow);
        actionDelete->setObjectName(QStringLiteral("actionDelete"));
        actionSelect_All = new QAction(MainWindow);
        actionSelect_All->setObjectName(QStringLiteral("actionSelect_All"));
        actionSelect_Ones = new QAction(MainWindow);
        actionSelect_Ones->setObjectName(QStringLiteral("actionSelect_Ones"));
        actionRevert = new QAction(MainWindow);
        actionRevert->setObjectName(QStringLiteral("actionRevert"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 0, 902, 491));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 920, 36));
        QFont font;
        font.setPointSize(16);
        menuBar->setFont(font);
        menuDataBase = new QMenu(menuBar);
        menuDataBase->setObjectName(QStringLiteral("menuDataBase"));
        menuDataBase->setFont(font);
        menuInquire = new QMenu(menuBar);
        menuInquire->setObjectName(QStringLiteral("menuInquire"));
        menuInquire->setFont(font);
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        menuHelp->setFont(font);
        menuData = new QMenu(menuBar);
        menuData->setObjectName(QStringLiteral("menuData"));
        menuData->setFont(font);
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuDataBase->menuAction());
        menuBar->addAction(menuData->menuAction());
        menuBar->addAction(menuInquire->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuDataBase->addSeparator();
        menuDataBase->addAction(actionConnectDB);
        menuDataBase->addSeparator();
        menuDataBase->addAction(actionSaveDB);
        menuDataBase->addSeparator();
        menuDataBase->addSeparator();
        menuInquire->addAction(actionSelect_All);
        menuInquire->addSeparator();
        menuInquire->addAction(actionSelect_Ones);
        menuHelp->addAction(actionAbout_Program);
        menuHelp->addSeparator();
        menuHelp->addAction(actionAbout_Me);
        menuData->addAction(actionInput);
        menuData->addSeparator();
        menuData->addAction(actionModify);
        menuData->addSeparator();
        menuData->addAction(actionDelete);
        menuData->addSeparator();
        menuData->addAction(actionRevert);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionConnectDB->setText(QApplication::translate("MainWindow", "Connect DB", 0));
        actionSaveDB->setText(QApplication::translate("MainWindow", "Save to DB", 0));
        actionAbout_Program->setText(QApplication::translate("MainWindow", "About Program", 0));
        actionAbout_Me->setText(QApplication::translate("MainWindow", "About Me", 0));
        actionNewDB->setText(QApplication::translate("MainWindow", "New DB", 0));
        actionInput->setText(QApplication::translate("MainWindow", "Input", 0));
        actionModify->setText(QApplication::translate("MainWindow", "Modify", 0));
        actionDelete->setText(QApplication::translate("MainWindow", "Delete", 0));
        actionSelect_All->setText(QApplication::translate("MainWindow", "Select All", 0));
        actionSelect_Ones->setText(QApplication::translate("MainWindow", "Select Ones", 0));
        actionRevert->setText(QApplication::translate("MainWindow", "Revert", 0));
        menuDataBase->setTitle(QApplication::translate("MainWindow", "DataBase", 0));
        menuInquire->setTitle(QApplication::translate("MainWindow", "Inquire", 0));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0));
        menuData->setTitle(QApplication::translate("MainWindow", "Data", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

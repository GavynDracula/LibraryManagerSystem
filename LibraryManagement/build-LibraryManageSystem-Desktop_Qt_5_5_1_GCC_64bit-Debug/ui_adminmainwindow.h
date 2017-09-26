/********************************************************************************
** Form generated from reading UI file 'adminmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINMAINWINDOW_H
#define UI_ADMINMAINWINDOW_H

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

class Ui_AdminMainWindow
{
public:
    QAction *actionBorrow;
    QAction *actionReturn;
    QAction *actionRegister;
    QAction *actionNullify;
    QAction *actionModify;
    QAction *actionReaderInquire;
    QAction *actionShelve;
    QAction *actionUnShelve;
    QAction *actionBookInquire;
    QAction *actionPay_Fines;
    QAction *actionAbout_Program;
    QAction *actionAbout_Me;
    QAction *actionEnter_New;
    QAction *actionRemove;
    QWidget *centralwidget;
    QTableView *tableView;
    QMenuBar *menubar;
    QMenu *menuBook;
    QMenu *menuReader;
    QMenu *menuBorrow_Return;
    QMenu *menuHelp;

    void setupUi(QMainWindow *AdminMainWindow)
    {
        if (AdminMainWindow->objectName().isEmpty())
            AdminMainWindow->setObjectName(QStringLiteral("AdminMainWindow"));
        AdminMainWindow->resize(882, 600);
        actionBorrow = new QAction(AdminMainWindow);
        actionBorrow->setObjectName(QStringLiteral("actionBorrow"));
        actionReturn = new QAction(AdminMainWindow);
        actionReturn->setObjectName(QStringLiteral("actionReturn"));
        actionRegister = new QAction(AdminMainWindow);
        actionRegister->setObjectName(QStringLiteral("actionRegister"));
        actionNullify = new QAction(AdminMainWindow);
        actionNullify->setObjectName(QStringLiteral("actionNullify"));
        actionModify = new QAction(AdminMainWindow);
        actionModify->setObjectName(QStringLiteral("actionModify"));
        actionReaderInquire = new QAction(AdminMainWindow);
        actionReaderInquire->setObjectName(QStringLiteral("actionReaderInquire"));
        actionShelve = new QAction(AdminMainWindow);
        actionShelve->setObjectName(QStringLiteral("actionShelve"));
        actionUnShelve = new QAction(AdminMainWindow);
        actionUnShelve->setObjectName(QStringLiteral("actionUnShelve"));
        actionBookInquire = new QAction(AdminMainWindow);
        actionBookInquire->setObjectName(QStringLiteral("actionBookInquire"));
        actionPay_Fines = new QAction(AdminMainWindow);
        actionPay_Fines->setObjectName(QStringLiteral("actionPay_Fines"));
        actionAbout_Program = new QAction(AdminMainWindow);
        actionAbout_Program->setObjectName(QStringLiteral("actionAbout_Program"));
        actionAbout_Me = new QAction(AdminMainWindow);
        actionAbout_Me->setObjectName(QStringLiteral("actionAbout_Me"));
        actionEnter_New = new QAction(AdminMainWindow);
        actionEnter_New->setObjectName(QStringLiteral("actionEnter_New"));
        actionRemove = new QAction(AdminMainWindow);
        actionRemove->setObjectName(QStringLiteral("actionRemove"));
        centralwidget = new QWidget(AdminMainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(0, 0, 880, 581));
        AdminMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AdminMainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 882, 33));
        QFont font;
        font.setPointSize(16);
        menubar->setFont(font);
        menuBook = new QMenu(menubar);
        menuBook->setObjectName(QStringLiteral("menuBook"));
        menuBook->setFont(font);
        menuReader = new QMenu(menubar);
        menuReader->setObjectName(QStringLiteral("menuReader"));
        menuReader->setFont(font);
        menuBorrow_Return = new QMenu(menubar);
        menuBorrow_Return->setObjectName(QStringLiteral("menuBorrow_Return"));
        menuBorrow_Return->setFont(font);
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        menuHelp->setFont(font);
        AdminMainWindow->setMenuBar(menubar);

        menubar->addAction(menuBook->menuAction());
        menubar->addAction(menuReader->menuAction());
        menubar->addAction(menuBorrow_Return->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuBook->addAction(actionEnter_New);
        menuBook->addSeparator();
        menuBook->addAction(actionRemove);
        menuBook->addSeparator();
        menuBook->addAction(actionShelve);
        menuBook->addSeparator();
        menuBook->addAction(actionUnShelve);
        menuBook->addSeparator();
        menuBook->addAction(actionBookInquire);
        menuReader->addAction(actionRegister);
        menuReader->addSeparator();
        menuReader->addAction(actionNullify);
        menuReader->addSeparator();
        menuReader->addAction(actionModify);
        menuReader->addSeparator();
        menuReader->addAction(actionReaderInquire);
        menuBorrow_Return->addAction(actionBorrow);
        menuBorrow_Return->addSeparator();
        menuBorrow_Return->addAction(actionReturn);
        menuBorrow_Return->addSeparator();
        menuBorrow_Return->addAction(actionPay_Fines);
        menuHelp->addAction(actionAbout_Program);
        menuHelp->addSeparator();
        menuHelp->addAction(actionAbout_Me);

        retranslateUi(AdminMainWindow);

        QMetaObject::connectSlotsByName(AdminMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *AdminMainWindow)
    {
        AdminMainWindow->setWindowTitle(QApplication::translate("AdminMainWindow", "MainWindow", 0));
        actionBorrow->setText(QApplication::translate("AdminMainWindow", "Borrow Book", 0));
        actionReturn->setText(QApplication::translate("AdminMainWindow", "Return Book", 0));
        actionRegister->setText(QApplication::translate("AdminMainWindow", "Register", 0));
        actionNullify->setText(QApplication::translate("AdminMainWindow", "Nullify", 0));
        actionModify->setText(QApplication::translate("AdminMainWindow", "Modify", 0));
        actionReaderInquire->setText(QApplication::translate("AdminMainWindow", "Inquire", 0));
        actionShelve->setText(QApplication::translate("AdminMainWindow", "Shelve", 0));
        actionUnShelve->setText(QApplication::translate("AdminMainWindow", "UnShelve", 0));
        actionBookInquire->setText(QApplication::translate("AdminMainWindow", "Inquire", 0));
        actionPay_Fines->setText(QApplication::translate("AdminMainWindow", "Pay Fines", 0));
        actionAbout_Program->setText(QApplication::translate("AdminMainWindow", "About Program", 0));
        actionAbout_Me->setText(QApplication::translate("AdminMainWindow", "About Me", 0));
        actionEnter_New->setText(QApplication::translate("AdminMainWindow", "Enter New", 0));
        actionRemove->setText(QApplication::translate("AdminMainWindow", "Remove", 0));
        menuBook->setTitle(QApplication::translate("AdminMainWindow", "Book", 0));
        menuReader->setTitle(QApplication::translate("AdminMainWindow", "Reader", 0));
        menuBorrow_Return->setTitle(QApplication::translate("AdminMainWindow", "Borrow/Return", 0));
        menuHelp->setTitle(QApplication::translate("AdminMainWindow", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class AdminMainWindow: public Ui_AdminMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINMAINWINDOW_H

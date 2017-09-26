/********************************************************************************
** Form generated from reading UI file 'readermainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_READERMAINWINDOW_H
#define UI_READERMAINWINDOW_H

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

class Ui_ReaderMainWindow
{
public:
    QAction *actionPersonal_Info;
    QAction *actionBooksWant;
    QAction *actionBorrowed_Books;
    QAction *actionAbout_Program;
    QAction *actionAbout_Me;
    QAction *actionRenew_One;
    QAction *actionRenew_All;
    QWidget *centralwidget;
    QTableView *tableView;
    QMenuBar *menubar;
    QMenu *menuInquire;
    QMenu *menuHelp;
    QMenu *menuRenew;

    void setupUi(QMainWindow *ReaderMainWindow)
    {
        if (ReaderMainWindow->objectName().isEmpty())
            ReaderMainWindow->setObjectName(QStringLiteral("ReaderMainWindow"));
        ReaderMainWindow->resize(882, 600);
        actionPersonal_Info = new QAction(ReaderMainWindow);
        actionPersonal_Info->setObjectName(QStringLiteral("actionPersonal_Info"));
        actionBooksWant = new QAction(ReaderMainWindow);
        actionBooksWant->setObjectName(QStringLiteral("actionBooksWant"));
        actionBorrowed_Books = new QAction(ReaderMainWindow);
        actionBorrowed_Books->setObjectName(QStringLiteral("actionBorrowed_Books"));
        actionAbout_Program = new QAction(ReaderMainWindow);
        actionAbout_Program->setObjectName(QStringLiteral("actionAbout_Program"));
        actionAbout_Me = new QAction(ReaderMainWindow);
        actionAbout_Me->setObjectName(QStringLiteral("actionAbout_Me"));
        actionRenew_One = new QAction(ReaderMainWindow);
        actionRenew_One->setObjectName(QStringLiteral("actionRenew_One"));
        actionRenew_All = new QAction(ReaderMainWindow);
        actionRenew_All->setObjectName(QStringLiteral("actionRenew_All"));
        centralwidget = new QWidget(ReaderMainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(0, 0, 880, 581));
        ReaderMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ReaderMainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 882, 33));
        QFont font;
        font.setPointSize(16);
        menubar->setFont(font);
        menuInquire = new QMenu(menubar);
        menuInquire->setObjectName(QStringLiteral("menuInquire"));
        QFont font1;
        font1.setPointSize(16);
        font1.setKerning(true);
        menuInquire->setFont(font1);
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        menuHelp->setFont(font);
        menuRenew = new QMenu(menubar);
        menuRenew->setObjectName(QStringLiteral("menuRenew"));
        menuRenew->setFont(font);
        ReaderMainWindow->setMenuBar(menubar);

        menubar->addAction(menuInquire->menuAction());
        menubar->addAction(menuRenew->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuInquire->addAction(actionPersonal_Info);
        menuInquire->addSeparator();
        menuInquire->addAction(actionBorrowed_Books);
        menuInquire->addSeparator();
        menuInquire->addAction(actionBooksWant);
        menuHelp->addAction(actionAbout_Program);
        menuHelp->addSeparator();
        menuHelp->addAction(actionAbout_Me);
        menuRenew->addAction(actionRenew_One);

        retranslateUi(ReaderMainWindow);

        QMetaObject::connectSlotsByName(ReaderMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ReaderMainWindow)
    {
        ReaderMainWindow->setWindowTitle(QApplication::translate("ReaderMainWindow", "MainWindow", 0));
        actionPersonal_Info->setText(QApplication::translate("ReaderMainWindow", "Personal Info", 0));
        actionBooksWant->setText(QApplication::translate("ReaderMainWindow", "Books You Want", 0));
        actionBorrowed_Books->setText(QApplication::translate("ReaderMainWindow", "Borrowed Books", 0));
        actionAbout_Program->setText(QApplication::translate("ReaderMainWindow", "About Program", 0));
        actionAbout_Me->setText(QApplication::translate("ReaderMainWindow", "About Me", 0));
        actionRenew_One->setText(QApplication::translate("ReaderMainWindow", "Renew One", 0));
        actionRenew_All->setText(QApplication::translate("ReaderMainWindow", "Renew All", 0));
        menuInquire->setTitle(QApplication::translate("ReaderMainWindow", "Inquire", 0));
        menuHelp->setTitle(QApplication::translate("ReaderMainWindow", "Help", 0));
        menuRenew->setTitle(QApplication::translate("ReaderMainWindow", "Renew", 0));
    } // retranslateUi

};

namespace Ui {
    class ReaderMainWindow: public Ui_ReaderMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_READERMAINWINDOW_H

#ifndef ADMINMAINWINDOW_H
#define ADMINMAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QtSql>

#include "admininquiredialog.h"
#include "adminregisterdialog.h"
#include "adminnullifydialog.h"
#include "adminmodifydialog.h"
#include "adminreaderinquiredialog.h"
#include "adminborrowdialog.h"
#include "adminreturndialog.h"
#include "adminpayfinedialog.h"
#include "adminbookdetaildialog.h"
#include "adminenternewdialog.h"
#include "adminremovedialog.h"
#include "adminshelvedialog.h"
#include "adminunshelvedialog.h"
#include "adminreaderdetaildialog.h"

namespace Ui {
class AdminMainWindow;
}

class AdminMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit AdminMainWindow(QWidget *parent = 0);
    void SetDB(QSqlDatabase *db) { this->db = db; }
    void SetAdminID(QString adminID) { this->adminID = adminID; }
    ~AdminMainWindow();

private slots:
    // Book Menu
    void PublicationEnter();
    void PublicationRemove();
    void BookShelve();
    void BookUnShelve();
    void BookInquire();
    // Reader Menu
    void ReaderRegister();
    void ReaderNullify();
    void ReaderModify();
    void ReaderInquire();
    // Borrow/Return Menu
    void BorrowBook();
    void ReturnBook();
    void PayFine();
    // Help Menu
    void AboutProgram();
    void AboutMe();

    void TVDoubleClick(QModelIndex); //Table View DoubleClick

private:
    Ui::AdminMainWindow *ui;
    QSqlDatabase *db;
    QString adminID;
    QSqlQueryModel *model;
    QMessageBox* msgBox;
};

#endif // ADMINMAINWINDOW_H

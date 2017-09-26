#ifndef READERMAINWINDOW_H
#define READERMAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QtSql>

#include "readerselfinfodialog.h"
#include "readerinquiredialog.h"
#include "readerbookdetaildialog.h"
#include "readerrenewdialog.h"

namespace Ui {
class ReaderMainWindow;
}

class ReaderMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ReaderMainWindow(QWidget *parent = 0);
    void SetDB(QSqlDatabase *db) { this->db = db; }
    void SetReaderID(QString readerID) { this->readerID = readerID; }
    ~ReaderMainWindow();

private slots:
    void SelfInfo();
    void BorrowedBooks();
    void ReaderInquire();
    void RenewOne();
    // void RenewAll();
    void AboutProgram();
    void AboutMe();

    void TVDoubleClick(QModelIndex); //Table View DoubleClick

private:
    Ui::ReaderMainWindow *ui;
    QSqlDatabase *db;
    QString readerID;
    QSqlQueryModel *model;
    QMessageBox* msgBox;
};

#endif // READERMAINWINDOW_H

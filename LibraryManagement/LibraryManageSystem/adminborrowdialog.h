#ifndef ADMINBORROWDIALOG_H
#define ADMINBORROWDIALOG_H

#include <QDialog>
#include <QMessageBox>
#include <QtSql>

namespace Ui {
class AdminBorrowDialog;
}

class AdminBorrowDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AdminBorrowDialog(QWidget *parent = 0);
    void SetDB(QSqlDatabase *db) { this->db = db; }
    void SetReaderID(QString rid);
    void OutReaderIDVerify();
    ~AdminBorrowDialog();

private slots:
    void ReaderIDVerify();
    void BookIDVerify();
    void BorrowConfirm();

private:
    Ui::AdminBorrowDialog *ui;
    QSqlDatabase *db;
    QMessageBox* msgBox;
};

#endif // ADMINBORROWDIALOG_H

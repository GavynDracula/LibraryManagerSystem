#ifndef ADMINPAYFINEDIALOG_H
#define ADMINPAYFINEDIALOG_H

#include <QDialog>
#include <QMessageBox>
#include <QtSql>

namespace Ui {
class AdminPayFineDialog;
}

class AdminPayFineDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AdminPayFineDialog(QWidget *parent = 0);
    void SetDB(QSqlDatabase *db) { this->db = db; }
    void SetReaderID(QString rid);
    void OutReaderIDVerify();
    ~AdminPayFineDialog();

private slots:
    void ReaderIDVerify();
    void PayConfirm();
    void PaidFineChanged(double);

private:
    Ui::AdminPayFineDialog *ui;
    QSqlDatabase *db;
    QMessageBox* msgBox;
};

#endif // ADMINPAYFINEDIALOG_H

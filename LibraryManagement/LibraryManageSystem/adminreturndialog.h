#ifndef ADMINRETURNDIALOG_H
#define ADMINRETURNDIALOG_H

#include <QDialog>
#include <QMessageBox>
#include <QtSql>

namespace Ui {
class AdminReturnDialog;
}

class AdminReturnDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AdminReturnDialog(QWidget *parent = 0);
    void SetDB(QSqlDatabase *db) { this->db = db; }
    void SetReaderID(QString rid);
    void OutReaderIDVerify();
    ~AdminReturnDialog();

private slots:
    void ReaderIDVerify();
    void BookIDVerify();
    void BookIntact();
    void BookDamage();
    void ReturnConfirm();

private:
    Ui::AdminReturnDialog *ui;
    QSqlDatabase *db;
    QMessageBox* msgBox;
    int dmfine;
};

#endif // ADMINRETURNDIALOG_H

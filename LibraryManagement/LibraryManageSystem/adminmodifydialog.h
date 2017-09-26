#ifndef ADMINMODIFYDIALOG_H
#define ADMINMODIFYDIALOG_H

#include <QDialog>
#include <QMessageBox>
#include <QtSql>

namespace Ui {
class AdminModifyDialog;
}

class AdminModifyDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AdminModifyDialog(QWidget *parent = 0);
    void SetDB(QSqlDatabase *db) { this->db = db; }
    void SetReaderID(QString rid);
    void OutReaderIDVerify();
    ~AdminModifyDialog();

private slots:
    void ReaderIDVerify();
    void TypeChanged(int idx);
    void ModifyConfirm();

private:
    Ui::AdminModifyDialog *ui;
    QSqlDatabase *db;
    QMessageBox* msgBox;
};

#endif // ADMINMODIFYDIALOG_H

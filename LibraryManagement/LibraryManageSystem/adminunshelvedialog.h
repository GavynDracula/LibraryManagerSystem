#ifndef ADMINUNSHELVEDIALOG_H
#define ADMINUNSHELVEDIALOG_H

#include <QDialog>
#include <QtSql>
#include <QMessageBox>

namespace Ui {
class AdminUnShelveDialog;
}

class AdminUnShelveDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AdminUnShelveDialog(QWidget *parent = 0);
    void SetDB(QSqlDatabase *db) { this->db = db; }
    ~AdminUnShelveDialog();

private slots:
    void BookIDVerify();
    void UnShelveConfirm();

private:
    Ui::AdminUnShelveDialog *ui;
    QSqlDatabase *db;
    QMessageBox* msgBox;
};

#endif // ADMINUNSHELVEDIALOG_H

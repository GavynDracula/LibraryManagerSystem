#ifndef ADMINSHELVEDIALOG_H
#define ADMINSHELVEDIALOG_H

#include <QDialog>
#include <QtSql>
#include <QMessageBox>

namespace Ui {
class AdminShelveDialog;
}

class AdminShelveDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AdminShelveDialog(QWidget *parent = 0);
    void SetDB(QSqlDatabase *db) { this->db = db; }
    void SetISBN(QString isbn);
    void OutISBNVerify();
    ~AdminShelveDialog();

private slots:
    void ISBNVerify();
    void ShelveConfirm();

private:
    Ui::AdminShelveDialog *ui;
    QSqlDatabase *db;
    QMessageBox* msgBox;
};

#endif // ADMINSHELVEDIALOG_H

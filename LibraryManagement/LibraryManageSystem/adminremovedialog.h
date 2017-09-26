#ifndef ADMINREMOVEDIALOG_H
#define ADMINREMOVEDIALOG_H

#include <QDialog>
#include <QtSql>
#include <QMessageBox>

namespace Ui {
class AdminRemoveDialog;
}

class AdminRemoveDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AdminRemoveDialog(QWidget *parent = 0);
    void SetDB(QSqlDatabase *db) { this->db = db; }
    void SetISBN(QString isbn);
    void OutISBNVerify();
    ~AdminRemoveDialog();

private slots:
    void ISBNVerify();
    void RemoveConfirm();

private:
    Ui::AdminRemoveDialog *ui;
    QSqlDatabase *db;
    QMessageBox* msgBox;
};

#endif // ADMINREMOVEDIALOG_H

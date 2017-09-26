#ifndef ADMINNULLIFYDIALOG_H
#define ADMINNULLIFYDIALOG_H

#include <QDialog>
#include <QMessageBox>
#include <QtSql>

namespace Ui {
class AdminNullifyDialog;
}

class AdminNullifyDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AdminNullifyDialog(QWidget *parent = 0);
    void SetDB(QSqlDatabase *db) { this->db = db; }
    void SetReaderID(QString rid);
    void OutReaderIDVerify();
    ~AdminNullifyDialog();

private slots:
    void ReaderIDVerify();
    void NullifyConfirm();

private:
    Ui::AdminNullifyDialog *ui;
    QSqlDatabase *db;
    QMessageBox* msgBox;
};

#endif // ADMINNULLIFYDIALOG_H

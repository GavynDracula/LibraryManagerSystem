#ifndef ADMINBOOKDETAILDIALOG_H
#define ADMINBOOKDETAILDIALOG_H

#include <QDialog>
#include <QDate>
#include <QtSql>

namespace Ui {
class AdminBookDetailDialog;
}

class AdminBookDetailDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AdminBookDetailDialog(QWidget *parent = 0);
    void SetDisplay(QSqlDatabase *db, QString isbn);
    ~AdminBookDetailDialog();

private:
    Ui::AdminBookDetailDialog *ui;
    QSqlQueryModel *model;
};

#endif // ADMINBOOKDETAILDIALOG_H

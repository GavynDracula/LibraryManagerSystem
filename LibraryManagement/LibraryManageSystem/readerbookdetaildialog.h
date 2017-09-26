#ifndef READERBOOKDETAILDIALOG_H
#define READERBOOKDETAILDIALOG_H

#include <QDialog>
#include <QDate>
#include <QtSql>

namespace Ui {
class ReaderBookDetailDialog;
}

class ReaderBookDetailDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ReaderBookDetailDialog(QWidget *parent = 0);
    void SetDisplay(QSqlDatabase *db, QString isbn);
    ~ReaderBookDetailDialog();

private:
    Ui::ReaderBookDetailDialog *ui;
    QSqlQueryModel *model;
};

#endif // READERBOOKDETAILDIALOG_H

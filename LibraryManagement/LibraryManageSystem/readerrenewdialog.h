#ifndef READERRENEWDIALOG_H
#define READERRENEWDIALOG_H

#include <QDialog>
#include <QDate>
#include <QtSql>

namespace Ui {
class ReaderRenewDialog;
}

class ReaderRenewDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ReaderRenewDialog(QWidget *parent = 0);
    void SetDisplay(QSqlDatabase *db, QString bid);
    QDateTime GetNewDueTime() { return newdue; }
    int GetNewRenewTimes() { return newrenew; }
    ~ReaderRenewDialog();

private:
    Ui::ReaderRenewDialog *ui;
    QDateTime newdue;
    int newrenew;
};

#endif // READERRENEWDIALOG_H

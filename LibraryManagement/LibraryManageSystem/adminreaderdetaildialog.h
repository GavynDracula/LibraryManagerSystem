#ifndef ADMINREADERDETAILDIALOG_H
#define ADMINREADERDETAILDIALOG_H

#include <QDialog>
#include <QDate>
#include <QtSql>

namespace Ui {
class AdminReaderDetailDialog;
}

class AdminReaderDetailDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AdminReaderDetailDialog(QWidget *parent = 0);
    void SetDisplay(QSqlDatabase *db, QString rid);
    ~AdminReaderDetailDialog();

private:
    Ui::AdminReaderDetailDialog *ui;
    QSqlQueryModel *model;
};

#endif // ADMINREADERDETAILDIALOG_H

#ifndef ADMINREADERINQUIREDIALOG_H
#define ADMINREADERINQUIREDIALOG_H

#include <QDialog>
#include <QtSql>

namespace Ui {
class AdminReaderInquireDialog;
}

class AdminReaderInquireDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AdminReaderInquireDialog(QWidget *parent = 0);
    int myExec(QSqlQuery* query);
    int SetSelectQuery();
    ~AdminReaderInquireDialog();

private slots:
    void AddCondition();
    void PlusCondition();
    void BorrowedCondition(int);
    void FinesCondition(int);
    void TypeCondition(int);

private:
    Ui::AdminReaderInquireDialog *ui;
    int ConditionNum;
    QSqlQuery* query;
    void ShowConditionSet(int conditionNum);
    void HideConditionSet(int conditionNum);
};

#endif // ADMINREADERINQUIREDIALOG_H

#ifndef ADMININQUIREDIALOG_H
#define ADMININQUIREDIALOG_H

#include <QDialog>
#include <QtSql>

namespace Ui {
class AdminInquireDialog;
}

class AdminInquireDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AdminInquireDialog(QWidget *parent = 0);
    int myExec(QSqlQuery* query);
    int SetSelectQuery();
    ~AdminInquireDialog();

private slots:
    void AddCondition();
    void PlusCondition();
    void PubdateCondition(int);
    void PagesCondition(int);

private:
    Ui::AdminInquireDialog *ui;
    int ConditionNum;
    QSqlQuery* query;
    void ShowConditionSet(int conditionNum);
    void HideConditionSet(int conditionNum);
};

#endif // ADMININQUIREDIALOG_H

#ifndef INQUIREDIALOG_H
#define INQUIREDIALOG_H

#include <QDialog>
#include <QDate>
#include <QtSql>

namespace Ui {
class InquireDialog;
}

class InquireDialog : public QDialog
{
    Q_OBJECT

public:
    explicit InquireDialog(QWidget *parent = 0);
    int myExec(QSqlQuery* query);
    int SetSelectQuery();
    ~InquireDialog();

private slots:
    void AddCondition();
    void PlusCondition();
    void PubdateCondition(int);
    void PagesCondition(int);

private:
    Ui::InquireDialog *ui;
    int ConditionNum;
    QSqlQuery* query;
    void ShowConditionSet(int conditionNum);
    void HideConditionSet(int conditionNum);
};

#endif // INQUIREDIALOG_H

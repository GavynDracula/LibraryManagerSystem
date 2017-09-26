#ifndef READERINQUIREDIALOG_H
#define READERINQUIREDIALOG_H

#include <QDialog>
#include <QtSql>

namespace Ui {
class ReaderInquireDialog;
}

class ReaderInquireDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ReaderInquireDialog(QWidget *parent = 0);
    int myExec(QSqlQuery* query);
    int SetSelectQuery();
    ~ReaderInquireDialog();

private slots:
    void AddCondition();
    void PlusCondition();
    void PubdateCondition(int);
    void PagesCondition(int);

private:
    Ui::ReaderInquireDialog *ui;
    int ConditionNum;
    QSqlQuery* query;
    void ShowConditionSet(int conditionNum);
    void HideConditionSet(int conditionNum);
};

#endif // READERINQUIREDIALOG_H

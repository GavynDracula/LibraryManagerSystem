#ifndef READERSELFINFODIALOG_H
#define READERSELFINFODIALOG_H

#include <QDialog>

namespace Ui {
class ReaderSelfInfoDialog;
}

class ReaderSelfInfoDialog : public QDialog
{
    Q_OBJECT

public:
    struct ReaderData
    {
        QString rid;
        QString name;
        QString type;
        QString phone;
        QString email;
        int borrowed;
        int maxborrow;
        double fine;
    };

public:
    explicit ReaderSelfInfoDialog(QWidget *parent = 0);
    void SetReaderData(ReaderData data);
    ~ReaderSelfInfoDialog();

private:
    Ui::ReaderSelfInfoDialog *ui;
};

#endif // READERSELFINFODIALOG_H

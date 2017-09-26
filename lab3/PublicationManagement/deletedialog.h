#ifndef DELETEDIALOG_H
#define DELETEDIALOG_H

#include <QDialog>
#include <QDate>

namespace Ui {
class DeleteDialog;
}

class DeleteDialog : public QDialog
{
    Q_OBJECT

public:
    struct DeleteData
    {
        QString title;
        QString author;
        QDate pubdate;
        QString publisher;
        QString pubcity;
        int pages;
        QString barcode;
    };

public:
    explicit DeleteDialog(QWidget *parent = 0);
    ~DeleteDialog();
    void SetDeleteData(DeleteData);

private:
    Ui::DeleteDialog *ui;
};

#endif // DELETEDIALOG_H

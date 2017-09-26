#ifndef ADMINENTERNEWDIALOG_H
#define ADMINENTERNEWDIALOG_H

#include <QDialog>
#include <QMessageBox>
#include <QDate>

namespace Ui {
class AdminEnterNewDialog;
}

class AdminEnterNewDialog : public QDialog
{
    Q_OBJECT

public:
    struct PublicationData
    {
        QString isbn;
        QString title;
        QString author;
        QDate pubdate;
        QString publisher;
        QString pubcity;
        int pages;
        QString type;
        double price;
        QString intro;
        int curnum;
    };

public:
    explicit AdminEnterNewDialog(QWidget *parent = 0);
    void GetPublicationData(PublicationData &data);
    ~AdminEnterNewDialog();

private slots:
    void EnterNewConfirm();

private:
    Ui::AdminEnterNewDialog *ui;
    QMessageBox* msgBox;
};

#endif // ADMINENTERNEWDIALOG_H

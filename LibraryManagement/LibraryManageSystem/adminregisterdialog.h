#ifndef ADMINREGISTERDIALOG_H
#define ADMINREGISTERDIALOG_H

#include <QDialog>
#include <QMessageBox>

namespace Ui {
class AdminRegisterDialog;
}

class AdminRegisterDialog : public QDialog
{
    Q_OBJECT

public:
    struct ReaderData
    {
        QString rid;
        QString pwd;
        QString name;
        QString type;
        QString phone;
        QString email;
        int borrowed;
        int maxborrow;
        double fine;
    };

public:
    explicit AdminRegisterDialog(QWidget *parent = 0);
    void GetReaderData(ReaderData &data);
    ~AdminRegisterDialog();

private slots:
    void TypeChanged(int idx);
    void RegisterConfirm();

private:
    Ui::AdminRegisterDialog *ui;
    QMessageBox* msgBox;
};

#endif // ADMINREGISTERDIALOG_H

#ifndef INPUTDIALOG_H
#define INPUTDIALOG_H

#include <QDialog>
#include <QDate>

namespace Ui {
class InputDialog;
}

class InputDialog : public QDialog
{
    Q_OBJECT

public:
    struct InputData
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
    explicit InputDialog(QWidget *parent = 0);
    ~InputDialog();
    InputData GetInput();

private:
    Ui::InputDialog *ui;
};

#endif // INPUTDIALOG_H

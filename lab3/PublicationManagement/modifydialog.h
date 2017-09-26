#ifndef MODIFYDIALOG_H
#define MODIFYDIALOG_H

#include <QDialog>
#include <QDate>

namespace Ui {
class ModifyDialog;
}

class ModifyDialog : public QDialog
{
    Q_OBJECT

public:
    struct ModifyData
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
    explicit ModifyDialog(QWidget *parent = 0);
    ~ModifyDialog();
    ModifyData GetModify();
    void SetOriginData(ModifyData);

private:
    Ui::ModifyDialog *ui;
};

#endif // MODIFYDIALOG_H

#include "modifydialog.h"
#include "ui_modifydialog.h"

ModifyDialog::ModifyDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ModifyDialog)
{
    ui->setupUi(this);

    this->setWindowTitle("Publication Data Modify");

    connect(ui->pushButtonConfirm, SIGNAL(released()), this, SLOT(accept()));
    connect(ui->pushButtonCancel, SIGNAL(released()), this, SLOT(reject()));
}

void ModifyDialog::SetOriginData(ModifyDialog::ModifyData data)
{
    ui->lineEditBarcode->setText(data.barcode);
    ui->lineEditTitle->setText(data.title);
    ui->lineEditAuthor->setText(data.author);
    ui->dateEdit->setDate(data.pubdate);
    ui->lineEditPublisher->setText(data.publisher);
    ui->lineEditPubcity->setText(data.pubcity);
    ui->spinBox->setValue(data.pages);
}

ModifyDialog::ModifyData ModifyDialog::GetModify()
{
    ModifyData data;
    data.title = ui->lineEditTitle->text();
    data.author = ui->lineEditAuthor->text();
    data.pubdate = ui->dateEdit->date();
    data.publisher = ui->lineEditPublisher->text();
    data.pubcity = ui->lineEditPubcity->text();
    data.pages = ui->spinBox->value();
    data.barcode = ui->lineEditBarcode->text();
    return data;
}

ModifyDialog::~ModifyDialog()
{
    delete ui;
}

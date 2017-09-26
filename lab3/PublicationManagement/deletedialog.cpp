#include "deletedialog.h"
#include "ui_deletedialog.h"

DeleteDialog::DeleteDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DeleteDialog)
{
    ui->setupUi(this);

    this->setWindowTitle("Publication Data Delete");

    connect(ui->pushButtonConfirm, SIGNAL(released()), this, SLOT(accept()));
    connect(ui->pushButtonCancel, SIGNAL(released()), this, SLOT(reject()));
}

void DeleteDialog::SetDeleteData(DeleteDialog::DeleteData data)
{
    ui->lineEditBarcode->setText(data.barcode);
    ui->lineEditTitle->setText(data.title);
    ui->lineEditAuthor->setText(data.author);
    ui->dateEdit->setDate(data.pubdate);
    ui->lineEditPublisher->setText(data.publisher);
    ui->lineEditPubcity->setText(data.pubcity);
    ui->spinBox->setValue(data.pages);
}

DeleteDialog::~DeleteDialog()
{
    delete ui;
}

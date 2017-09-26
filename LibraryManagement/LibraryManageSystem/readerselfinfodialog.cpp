#include "readerselfinfodialog.h"
#include "ui_readerselfinfodialog.h"

ReaderSelfInfoDialog::ReaderSelfInfoDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ReaderSelfInfoDialog)
{
    ui->setupUi(this);
    setWindowTitle("Personal Information Inquiry");
}

void ReaderSelfInfoDialog::SetReaderData(ReaderData data)
{
    ui->lineEditRID->setText(data.rid);
    ui->lineEditName->setText(data.name);
    ui->lineEditType->setText(data.type);
    ui->lineEditPhone->setText(data.phone);
    ui->lineEditEmail->setText(data.email);
    ui->spinBoxBorrowed->setValue(data.borrowed);
    ui->spinBoxMaxBorrow->setValue(data.maxborrow);
    ui->doubleSpinBoxFine->setValue(data.fine);
}

ReaderSelfInfoDialog::~ReaderSelfInfoDialog()
{
    delete ui;
}

#include "inputdialog.h"
#include "ui_inputdialog.h"

InputDialog::InputDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InputDialog)
{
    ui->setupUi(this);
    this->setWindowTitle("Publication Data Input");

    connect(ui->buttonConfirm, SIGNAL(released()), this, SLOT(accept()));
    connect(ui->buttonCancel, SIGNAL(released()), this, SLOT(reject()));
}

InputDialog::~InputDialog()
{
    delete ui;
}

InputDialog::InputData InputDialog::GetInput()
{
    InputData data;
    data.title = ui->lineEditTitle->text();
    data.author = ui->lineEditAuthor->text();
    data.pubdate = ui->dateEdit->date();
    data.publisher = ui->lineEditPublisher->text();
    data.pubcity = ui->lineEditCity->text();
    data.pages = ui->spinBox->value();
    data.barcode = ui->lineEditBarcode->text();
    return data;
}

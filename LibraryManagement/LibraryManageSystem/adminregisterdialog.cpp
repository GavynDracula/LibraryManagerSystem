#include "adminregisterdialog.h"
#include "ui_adminregisterdialog.h"

AdminRegisterDialog::AdminRegisterDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminRegisterDialog)
{
    ui->setupUi(this);
    this->setWindowTitle("Register an account for the reader");

    connect(ui->comboBox, SIGNAL(currentIndexChanged(int)), this, SLOT(TypeChanged(int)));
    connect(ui->pushButtonConfirm, SIGNAL(released()), this, SLOT(RegisterConfirm()));
    connect(ui->pushButtonCancel, SIGNAL(released()), this, SLOT(reject()));
}

AdminRegisterDialog::~AdminRegisterDialog()
{
    delete ui;
}

void AdminRegisterDialog::TypeChanged(int idx)
{
    switch (idx) {
    case 0:
        ui->spinBoxMaxBorrow->setValue(2);
        break;
    case 1:
        ui->spinBoxMaxBorrow->setValue(3);
        break;
    default:
        break;
    }
}

void AdminRegisterDialog::RegisterConfirm()
{

    if (ui->lineEditRID->text().isEmpty())
    {
        QFont font;
        font.setPointSize(18);
        msgBox = new QMessageBox();
        msgBox->setWindowTitle("Wrong");
        msgBox->setFont(font);
        msgBox->setText(QString("The Reader ID inputbox can't be empty!"));
        msgBox->exec();
    }
    else if (ui->lineEditPwd->text().isEmpty())
    {
        QFont font;
        font.setPointSize(18);
        msgBox = new QMessageBox();
        msgBox->setWindowTitle("Wrong");
        msgBox->setFont(font);
        msgBox->setText(QString("The Password inputbox can't be empty!"));
        msgBox->exec();
    }
    else if (ui->lineEditName->text().isEmpty())
    {
        QFont font;
        font.setPointSize(18);
        msgBox = new QMessageBox();
        msgBox->setWindowTitle("Wrong");
        msgBox->setFont(font);
        msgBox->setText(QString("The Name inputbox can't be empty!"));
        msgBox->exec();
    }
    else
        return accept();
}

void AdminRegisterDialog::GetReaderData(ReaderData &data)
{
    data.rid = ui->lineEditRID->text();
    data.pwd = ui->lineEditPwd->text();
    data.name = ui->lineEditName->text();
    data.phone = ui->lineEditPhone->text();
    data.email = ui->lineEditEmail->text();
    data.type = ui->comboBox->currentText();
    data.maxborrow = ui->spinBoxMaxBorrow->value();
    data.borrowed = ui->spinBoxBorrowed->value();
    data.fine = ui->doubleSpinBoxFine->value();
}

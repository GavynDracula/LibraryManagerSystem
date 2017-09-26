#include "adminpayfinedialog.h"
#include "ui_adminpayfinedialog.h"

AdminPayFineDialog::AdminPayFineDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminPayFineDialog)
{
    ui->setupUi(this);
    this->setWindowTitle("Pay the fines for the reader");

    connect(ui->pushButtonRIDVerify, SIGNAL(released()), this, SLOT(ReaderIDVerify()));
    connect(ui->pushButtonConfirm, SIGNAL(released()), this, SLOT(PayConfirm()));
    connect(ui->pushButtonCancel, SIGNAL(released()), this, SLOT(reject()));
    connect(ui->doubleSpinBoxPaidFine, SIGNAL(valueChanged(double)), this, SLOT(PaidFineChanged(double)));
}

AdminPayFineDialog::~AdminPayFineDialog()
{
    delete ui;
}

void AdminPayFineDialog::SetReaderID(QString rid)
{
    ui->lineEditRID->setText(rid);
}

void AdminPayFineDialog::OutReaderIDVerify()
{
    QSqlQuery query(*db);
    QString rid = ui->lineEditRID->text();
    query.exec(QString("select name,type,fine from Reader where rid='%1'").arg(rid));
    if (query.next())
    {
        ui->lineEditName->setEnabled(true);
        ui->lineEditType->setEnabled(true);
        ui->doubleSpinBoxFine->setEnabled(true);
        ui->doubleSpinBoxLeftFine->setEnabled(true);
        ui->lineEditName->setStyleSheet("background-color:rgb(226,226,226)");
        ui->lineEditType->setStyleSheet("background-color:rgb(226,226,226)");
        ui->doubleSpinBoxFine->setStyleSheet("background-color:rgb(226,226,226)");
        ui->doubleSpinBoxLeftFine->setStyleSheet("background-color:rgb(226,226,226)");
        ui->lineEditName->setText(query.value(0).toString());
        ui->lineEditType->setText(query.value(1).toString());
        ui->doubleSpinBoxFine->setValue(query.value(2).toDouble());
        if (ui->doubleSpinBoxPaidFine->value() >= ui->doubleSpinBoxFine->value())
            ui->doubleSpinBoxLeftFine->setValue(0.0);
        else
            ui->doubleSpinBoxLeftFine->setValue(ui->doubleSpinBoxFine->value() - ui->doubleSpinBoxPaidFine->value());
        ui->lineEditRID->setEnabled(false);
    }
    else
    {
        QFont font;
        msgBox = new QMessageBox();
        msgBox->setWindowTitle("Warning");
        msgBox->setText(QString("No such reader ID or wrong reader ID!"));
        font.setPointSize(18);
        msgBox->setFont(font);
        msgBox->exec();
    }
}

void AdminPayFineDialog::ReaderIDVerify()
{
    QSqlQuery query(*db);
    QString rid = ui->lineEditRID->text();
    query.exec(QString("select name,type,fine from Reader where rid='%1'").arg(rid));
    if (query.next())
    {
        ui->lineEditName->setEnabled(true);
        ui->lineEditType->setEnabled(true);
        ui->doubleSpinBoxFine->setEnabled(true);
        ui->doubleSpinBoxLeftFine->setEnabled(true);
        ui->lineEditName->setStyleSheet("background-color:rgb(226,226,226)");
        ui->lineEditType->setStyleSheet("background-color:rgb(226,226,226)");
        ui->doubleSpinBoxFine->setStyleSheet("background-color:rgb(226,226,226)");
        ui->doubleSpinBoxLeftFine->setStyleSheet("background-color:rgb(226,226,226)");
        ui->lineEditName->setText(query.value(0).toString());
        ui->lineEditType->setText(query.value(1).toString());
        ui->doubleSpinBoxFine->setValue(query.value(2).toDouble());
        if (ui->doubleSpinBoxPaidFine->value() >= ui->doubleSpinBoxFine->value())
            ui->doubleSpinBoxLeftFine->setValue(0.0);
        else
            ui->doubleSpinBoxLeftFine->setValue(ui->doubleSpinBoxFine->value() - ui->doubleSpinBoxPaidFine->value());
        ui->lineEditRID->setEnabled(false);
    }
    else
    {
        QFont font;
        msgBox = new QMessageBox();
        msgBox->setWindowTitle("Warning");
        msgBox->setText(QString("No such reader ID or wrong reader ID!"));
        font.setPointSize(18);
        msgBox->setFont(font);
        msgBox->exec();
    }
}

void AdminPayFineDialog::PayConfirm()
{
    if (ui->lineEditRID->isEnabled())
    {
        QFont font;
        msgBox = new QMessageBox();
        msgBox->setWindowTitle("Wrong");
        msgBox->setText(QString("Please verify reader ID first!"));
        font.setPointSize(18);
        msgBox->setFont(font);
        msgBox->exec();
    }
    else if (ui->doubleSpinBoxPaidFine->value() > ui->doubleSpinBoxFine->value())
    {
        QFont font;
        msgBox = new QMessageBox();
        msgBox->setWindowTitle("Wrong");
        msgBox->setText(QString("Reader %1 paid excessive fines!").arg(ui->lineEditRID->text()));
        font.setPointSize(18);
        msgBox->setFont(font);
        msgBox->exec();
    }
    else
    {
        QSqlQuery query(*db);
        QFont font;
        query.prepare("update Reader set fine=:newfine where rid=:rid");
        query.bindValue(":newfine", ui->doubleSpinBoxLeftFine->value());
        query.bindValue(":rid", ui->lineEditRID->text());
        query.exec();
        this->reject();
        msgBox = new QMessageBox();
        msgBox->setWindowTitle("Success");
        msgBox->setText(QString("Reader %1 paid %2 RMB fines successfully!").arg(ui->lineEditRID->text()).arg(ui->doubleSpinBoxPaidFine->value()));
        font.setPointSize(18);
        msgBox->setFont(font);
        msgBox->exec();
    }
}

void AdminPayFineDialog::PaidFineChanged(double newfine)
{
    if (newfine >= ui->doubleSpinBoxFine->value())
        ui->doubleSpinBoxLeftFine->setValue(0.0);
    else
        ui->doubleSpinBoxLeftFine->setValue(ui->doubleSpinBoxFine->value() - newfine);
}

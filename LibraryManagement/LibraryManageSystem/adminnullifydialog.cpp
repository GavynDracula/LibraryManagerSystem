#include "adminnullifydialog.h"
#include "ui_adminnullifydialog.h"

AdminNullifyDialog::AdminNullifyDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminNullifyDialog)
{
    ui->setupUi(this);
    this->setWindowTitle("Nullify the account for the reader");

    connect(ui->pushButtonRIDVerify, SIGNAL(released()), this, SLOT(ReaderIDVerify()));
    connect(ui->pushButtonConfirm, SIGNAL(released()), this, SLOT(NullifyConfirm()));
    connect(ui->pushButtonCancel, SIGNAL(released()), this, SLOT(reject()));
}

AdminNullifyDialog::~AdminNullifyDialog()
{
    delete ui;
}

void AdminNullifyDialog::SetReaderID(QString rid)
{
    ui->lineEditRID->setText(rid);
}

void AdminNullifyDialog::OutReaderIDVerify()
{
    QSqlQuery query(*db);
    QString rid = ui->lineEditRID->text();
    query.exec(QString("select name,phone,email,type,borrowed,maxborrow,fine from Reader where rid='%1'").arg(rid));
    if (query.next())
    {
        ui->lineEditName->setEnabled(true);
        ui->lineEditPhone->setEnabled(true);
        ui->lineEditEmail->setEnabled(true);
        ui->lineEditType->setEnabled(true);
        ui->spinBoxBorrowed->setEnabled(true);
        ui->spinBoxMaxBorrow->setEnabled(true);
        ui->doubleSpinBoxFine->setEnabled(true);
        ui->lineEditName->setText(query.value(0).toString());
        ui->lineEditPhone->setText(query.value(1).toString());
        ui->lineEditEmail->setText(query.value(2).toString());
        ui->lineEditType->setText(query.value(3).toString());
        ui->spinBoxBorrowed->setValue(query.value(4).toInt());
        ui->spinBoxMaxBorrow->setValue(query.value(5).toInt());
        ui->doubleSpinBoxFine->setValue(query.value(6).toDouble());
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

void AdminNullifyDialog::ReaderIDVerify()
{
    QSqlQuery query(*db);
    QString rid = ui->lineEditRID->text();
    query.exec(QString("select name,phone,email,type,borrowed,maxborrow,fine from Reader where rid='%1'").arg(rid));
    if (query.next())
    {
        ui->lineEditName->setEnabled(true);
        ui->lineEditPhone->setEnabled(true);
        ui->lineEditEmail->setEnabled(true);
        ui->lineEditType->setEnabled(true);
        ui->spinBoxBorrowed->setEnabled(true);
        ui->spinBoxMaxBorrow->setEnabled(true);
        ui->doubleSpinBoxFine->setEnabled(true);
        ui->lineEditName->setText(query.value(0).toString());
        ui->lineEditPhone->setText(query.value(1).toString());
        ui->lineEditEmail->setText(query.value(2).toString());
        ui->lineEditType->setText(query.value(3).toString());
        ui->spinBoxBorrowed->setValue(query.value(4).toInt());
        ui->spinBoxMaxBorrow->setValue(query.value(5).toInt());
        ui->doubleSpinBoxFine->setValue(query.value(6).toDouble());
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

void AdminNullifyDialog::NullifyConfirm()
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
        return;
    }
    else if (ui->spinBoxBorrowed->value() > 0)
    {
        QFont font;
        msgBox = new QMessageBox();
        msgBox->setWindowTitle("Wrong");
        msgBox->setText(QString("Reader %1 is borrowing one more book.\n"
                                "Please return book(s) borrowed first!").arg(ui->lineEditRID->text()));
        font.setPointSize(18);
        msgBox->setFont(font);
        msgBox->exec();
        return;
    }
    else if (ui->doubleSpinBoxFine->value() > 0.0)
    {
        QFont font;
        msgBox = new QMessageBox();
        msgBox->setWindowTitle("Notice");
        msgBox->setText(QString("Reader %1 has overdue fines not paid.\n"
                                "Do you still want to nullify?").arg(ui->lineEditRID->text()));
        font.setPointSize(18);
        msgBox->setFont(font);
        msgBox->setStandardButtons(QMessageBox::Yes| QMessageBox::No);
        msgBox->setDefaultButton(QMessageBox::No);
        int ret = msgBox->exec();
        if (ret != QMessageBox::Yes)
            return;
    }
    QSqlQuery query(*db);
    QFont font;
    font.setPointSize(18);
    query.prepare("delete from Reader where rid=:rid");
    query.bindValue(":rid", ui->lineEditRID->text());
    query.exec();
    query.exec(QString("delete from mysql.user where user='%1'").arg(ui->lineEditRID->text()));
    query.exec("flush privileges");
    this->reject();
    msgBox = new QMessageBox();
    msgBox->setWindowTitle("Success");
    msgBox->setText(QString("Reader %1 is nullified successfully!").arg(ui->lineEditRID->text()));
    msgBox->setFont(font);
    msgBox->exec();
}

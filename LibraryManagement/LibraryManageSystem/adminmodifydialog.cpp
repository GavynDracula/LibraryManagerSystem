#include "adminmodifydialog.h"
#include "ui_adminmodifydialog.h"

AdminModifyDialog::AdminModifyDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminModifyDialog)
{
    ui->setupUi(this);
    this->setWindowTitle("Modify the account for the reader");

    connect(ui->pushButtonRIDVerify, SIGNAL(released()), this, SLOT(ReaderIDVerify()));
    connect(ui->comboBoxType, SIGNAL(currentIndexChanged(int)), this, SLOT(TypeChanged(int)));
    connect(ui->pushButtonConfirm, SIGNAL(released()), this, SLOT(ModifyConfirm()));
    connect(ui->pushButtonCancel, SIGNAL(released()), this, SLOT(reject()));
}

AdminModifyDialog::~AdminModifyDialog()
{
    delete ui;
}

void AdminModifyDialog::SetReaderID(QString rid)
{
    ui->lineEditRID->setText(rid);
}

void AdminModifyDialog::OutReaderIDVerify()
{
    QSqlQuery query(*db);
    QString rid = ui->lineEditRID->text();
    query.exec(QString("select pwd,name,phone,email,type,borrowed,maxborrow,fine from Reader where rid='%1'").arg(rid));
    if (query.next())
    {
        ui->lineEditPwd->setEnabled(true);
        ui->lineEditName->setEnabled(true);
        ui->lineEditPhone->setEnabled(true);
        ui->lineEditEmail->setEnabled(true);
        ui->comboBoxType->setEnabled(true);
        ui->spinBoxBorrowed->setEnabled(true);
        ui->spinBoxMaxBorrow->setEnabled(true);
        ui->doubleSpinBoxFine->setEnabled(true);
        ui->lineEditPwd->setText(query.value(0).toString());
        ui->lineEditName->setText(query.value(1).toString());
        ui->lineEditPhone->setText(query.value(2).toString());
        ui->lineEditEmail->setText(query.value(3).toString());
        ui->comboBoxType->setCurrentText(query.value(4).toString());
        ui->spinBoxBorrowed->setValue(query.value(5).toInt());
        ui->spinBoxMaxBorrow->setValue(query.value(6).toInt());
        ui->doubleSpinBoxFine->setValue(query.value(7).toDouble());
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

void AdminModifyDialog::ReaderIDVerify()
{
    QSqlQuery query(*db);
    QString rid = ui->lineEditRID->text();
    query.exec(QString("select pwd,name,phone,email,type,borrowed,maxborrow,fine from Reader where rid='%1'").arg(rid));
    if (query.next())
    {
        ui->lineEditPwd->setEnabled(true);
        ui->lineEditName->setEnabled(true);
        ui->lineEditPhone->setEnabled(true);
        ui->lineEditEmail->setEnabled(true);
        ui->comboBoxType->setEnabled(true);
        ui->spinBoxBorrowed->setEnabled(true);
        ui->spinBoxMaxBorrow->setEnabled(true);
        ui->doubleSpinBoxFine->setEnabled(true);
        ui->lineEditPwd->setText(query.value(0).toString());
        ui->lineEditName->setText(query.value(1).toString());
        ui->lineEditPhone->setText(query.value(2).toString());
        ui->lineEditEmail->setText(query.value(3).toString());
        ui->comboBoxType->setCurrentText(query.value(4).toString());
        ui->spinBoxBorrowed->setValue(query.value(5).toInt());
        ui->spinBoxMaxBorrow->setValue(query.value(6).toInt());
        ui->doubleSpinBoxFine->setValue(query.value(7).toDouble());
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

void AdminModifyDialog::TypeChanged(int idx)
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

void AdminModifyDialog::ModifyConfirm()
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
    {
        QSqlQuery query(*db);
        QFont font;
        QString rid = ui->lineEditRID->text();
        QString pwd = ui->lineEditPwd->text();
        query.prepare("update Reader set pwd=:pwd,name=:name,type=:type,phone=:phone,email=:email,maxborrow=:maxborrow where rid=:rid");
        query.bindValue(":pwd", ui->lineEditPwd->text());
        query.bindValue(":name", ui->lineEditName->text());
        query.bindValue(":type", ui->comboBoxType->currentText());
        query.bindValue(":phone", ui->lineEditPhone->text());
        query.bindValue(":email", ui->lineEditEmail->text());
        query.bindValue(":maxborrow", ui->spinBoxMaxBorrow->value());
        query.bindValue(":rid", ui->lineEditRID->text());
        query.exec();
        query.exec(QString("grant select on Library.Reader to '%1'@'%' identified by '%2'").arg(rid).arg(pwd));
        query.exec(QString("grant select on Library.Publication to '%1'@'%' identified by '%2'").arg(rid).arg(pwd));
        query.exec(QString("grant select on Library.Book to '%1'@'%' identified by '%2'").arg(rid).arg(pwd));
        query.exec(QString("grant select,update on Library.Borrow to '%1'@'%' identified by '%2'").arg(rid).arg(pwd));
        this->reject();
        msgBox = new QMessageBox();
        msgBox->setWindowTitle("Success");
        msgBox->setText(QString("Reader %1's information is modified successfully!").arg(ui->lineEditRID->text()));
        font.setPointSize(18);
        msgBox->setFont(font);
        msgBox->exec();
    }
}

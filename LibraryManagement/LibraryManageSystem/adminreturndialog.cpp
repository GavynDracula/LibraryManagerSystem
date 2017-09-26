#include "adminreturndialog.h"
#include "ui_adminreturndialog.h"

AdminReturnDialog::AdminReturnDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminReturnDialog)
{
    ui->setupUi(this);
    this->setWindowTitle("Return the book for the reader");

    dmfine = 0; // Label denoting whether damage fine is added to "Fines to be paid"

    connect(ui->pushButtonRIDVerify, SIGNAL(released()), this, SLOT(ReaderIDVerify()));
    connect(ui->pushButtonBIDVerify, SIGNAL(released()), this, SLOT(BookIDVerify()));
    connect(ui->radioButtonIntact, SIGNAL(clicked(bool)), this, SLOT(BookIntact()));
    connect(ui->radioButtonDamage, SIGNAL(clicked(bool)), this, SLOT(BookDamage()));
    connect(ui->pushButtonConfirm, SIGNAL(released()), this, SLOT(ReturnConfirm()));
    connect(ui->pushButtonCancel, SIGNAL(released()), this, SLOT(reject()));
}

AdminReturnDialog::~AdminReturnDialog()
{
    delete ui;
}

void AdminReturnDialog::SetReaderID(QString rid)
{
    ui->lineEditRID->setText(rid);
}

void AdminReturnDialog::OutReaderIDVerify()
{
    QSqlQuery query(*db);
    QString rid = ui->lineEditRID->text();
    query.exec(QString("select name,type,fine from Reader where rid='%1'").arg(rid));
    if (query.next())
    {
        ui->lineEditName->setEnabled(true);
        ui->lineEditType->setEnabled(true);
        ui->doubleSpinBoxFine->setEnabled(true);
        ui->lineEditName->setText(query.value(0).toString());
        ui->lineEditType->setText(query.value(1).toString());
        ui->doubleSpinBoxFine->setValue(query.value(2).toDouble());
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


void AdminReturnDialog::ReaderIDVerify()
{
    QSqlQuery query(*db);
    QString rid = ui->lineEditRID->text();
    query.exec(QString("select name,type,fine from Reader where rid='%1'").arg(rid));
    if (query.next())
    {
        ui->lineEditName->setEnabled(true);
        ui->lineEditType->setEnabled(true);
        ui->doubleSpinBoxFine->setEnabled(true);
        ui->lineEditName->setText(query.value(0).toString());
        ui->lineEditType->setText(query.value(1).toString());
        ui->doubleSpinBoxFine->setValue(query.value(2).toDouble());
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

void AdminReturnDialog::BookIDVerify()
{
    QSqlQuery query(*db);
    QString bid = ui->lineEditBID->text();
    query.exec(QString("select replace(replace(state,'0','Borrowed'),'1','On Shelf'),isbn from Book where bid='%1'").arg(bid));
    if (query.next())
    {
        int spanhour;
        ui->lineEditState->setEnabled(true);
        ui->lineEditISBN->setEnabled(true);
        ui->lineEditTitle->setEnabled(true);
        ui->doubleSpinBoxPrice->setEnabled(true);
        ui->spinBoxDay->setEnabled(true);
        ui->spinBoxHour->setEnabled(true);
        ui->radioButtonIntact->setEnabled(true);
        ui->radioButtonDamage->setEnabled(true);
        ui->lineEditState->setText(query.value(0).toString());
        ui->lineEditISBN->setText(query.value(1).toString());
        query.exec(QString("select title,price from Publication where isbn='%1'").arg(ui->lineEditISBN->text()));
        query.next();
        ui->lineEditTitle->setText(query.value(0).toString());
        ui->doubleSpinBoxPrice->setValue(query.value(1).toDouble());
        query.exec(QString("select timestampdiff(hour, now(), duetime) from Borrow where bid='%1'").arg(bid));
        query.next();
        spanhour = - query.value(0).toInt();
        ui->spinBoxDay->setValue(spanhour / 24);
        ui->spinBoxHour->setValue(spanhour % 24);
        if (ui->spinBoxDay->value() || ui->spinBoxHour)
            ui->doubleSpinBoxNewFine->setValue(ui->doubleSpinBoxNewFine->value() + (spanhour/24+1)*0.2);
        ui->lineEditBID->setEnabled(false);
    }
    else
    {
        QFont font;
        msgBox = new QMessageBox();
        msgBox->setWindowTitle("Warning");
        msgBox->setText(QString("No such book ID or wrong book ID!"));
        font.setPointSize(18);
        msgBox->setFont(font);
        msgBox->exec();
    }
}

void AdminReturnDialog::BookIntact()
{
    if (dmfine)
    {
        ui->doubleSpinBoxNewFine->setValue(ui->doubleSpinBoxNewFine->value() - ui->doubleSpinBoxPrice->value());
        dmfine = 0;
    }
}

void AdminReturnDialog::BookDamage()
{
    if (dmfine == 0)
    {
        ui->doubleSpinBoxNewFine->setValue(ui->doubleSpinBoxNewFine->value() + ui->doubleSpinBoxPrice->value());
        dmfine = 1;
    }
}

void AdminReturnDialog::ReturnConfirm()
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
    else if (ui->lineEditBID->isEnabled())
    {
        QFont font;
        msgBox = new QMessageBox();
        msgBox->setWindowTitle("Wrong");
        msgBox->setText(QString("Please verify book ID first!"));
        font.setPointSize(18);
        msgBox->setFont(font);
        msgBox->exec();
    }
    else if (!ui->radioButtonIntact->isChecked() && !ui->radioButtonDamage->isChecked())
    {
        QFont font;
        msgBox = new QMessageBox();
        msgBox->setWindowTitle("Wrong");
        msgBox->setText(QString("Please choose whether the book is damaged first!"));
        font.setPointSize(18);
        msgBox->setFont(font);
        msgBox->exec();
    }
    else if (ui->lineEditState->text() != "Borrowed")
    {
        QFont font;
        msgBox = new QMessageBox();
        msgBox->setWindowTitle("Wrong");
        msgBox->setText(QString("The book %1 has not been borrowed!").arg(ui->lineEditBID->text()));
        font.setPointSize(18);
        msgBox->setFont(font);
        msgBox->exec();
        this->reject();
    }
    else
    {
        QSqlQuery query(*db);
        query.exec(QString("select * from Borrow where rid='%1' and bid='%2'").arg(ui->lineEditRID->text()).arg(ui->lineEditBID->text()));
        if (query.next())
        {
            QFont font;
            msgBox = new QMessageBox();
            QString msg = QString("Reader %1 returned the book %2 successfully!").arg(ui->lineEditRID->text()).arg(ui->lineEditBID->text());
            query.prepare("delete from Borrow where rid=:rid and bid=:bid");
            query.bindValue(":rid", ui->lineEditRID->text());
            query.bindValue(":bid", ui->lineEditBID->text());
            query.exec();
            if (ui->radioButtonDamage->isChecked())
            {
                query.prepare("delete from Book where bid=:bid");
                query.bindValue(":bid", ui->lineEditBID->text());
                query.exec();
                msg += QString("\nBecaouse the book is damaged, so its record has also been removed");
            }
            else
            {
                query.prepare("update Book set state='1' where bid=:bid");
                query.bindValue(":bid", ui->lineEditBID->text());
                query.exec();
                query.prepare("update Publication set curnum=curnum+1 where isbn=:isbn");
                query.bindValue(":isbn", ui->lineEditISBN->text());
                query.exec();
            }
            query.prepare("update Reader set borrowed=borrowed-1,fine=fine+:newfine where rid=:rid");
            query.bindValue(":rid", ui->lineEditRID->text());
            query.bindValue(":newfine", ui->doubleSpinBoxNewFine->value());
            query.exec();
            this->reject();
            msgBox->setWindowTitle("Success");
            msgBox->setText(msg);
            font.setPointSize(18);
            msgBox->setFont(font);
            msgBox->exec();
        }
        else
        {
            QFont font;
            msgBox = new QMessageBox();
            msgBox->setWindowTitle("Wrong");
            msgBox->setText(QString("Reader %1 hasn't borrow the book %2!").arg(ui->lineEditRID->text()).arg(ui->lineEditBID->text()));
            font.setPointSize(18);
            msgBox->setFont(font);
            msgBox->exec();
            this->reject();
        }
    }
}

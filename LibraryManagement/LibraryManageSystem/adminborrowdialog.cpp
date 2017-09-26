#include "adminborrowdialog.h"
#include "ui_adminborrowdialog.h"

AdminBorrowDialog::AdminBorrowDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminBorrowDialog)
{
    ui->setupUi(this);
    this->setWindowTitle("Borrow the book for the reader");

    connect(ui->pushButtonRIDVerify, SIGNAL(released()), this, SLOT(ReaderIDVerify()));
    connect(ui->pushButtonBIDVerify, SIGNAL(released()), this, SLOT(BookIDVerify()));
    connect(ui->pushButtonConfirm, SIGNAL(released()), this, SLOT(BorrowConfirm()));
    connect(ui->pushButtonCancel, SIGNAL(released()), this, SLOT(reject()));
}

AdminBorrowDialog::~AdminBorrowDialog()
{
    delete ui;
}

void AdminBorrowDialog::SetReaderID(QString rid)
{
    ui->lineEditRID->setText(rid);
}

void AdminBorrowDialog::OutReaderIDVerify()
{
    QSqlQuery query(*db);
    QString rid = ui->lineEditRID->text();
    query.exec(QString("select name,type,borrowed,maxborrow,fine from Reader where rid='%1'").arg(rid));
    if (query.next())
    {
        int duecount = 0;
        ui->lineEditName->setEnabled(true);
        ui->lineEditType->setEnabled(true);
        ui->spinBoxBorrowed->setEnabled(true);
        ui->spinBoxMaxBorrow->setEnabled(true);
        ui->doubleSpinBoxFine->setEnabled(true);
        ui->spinBoxCount->setEnabled(true);
        ui->lineEditName->setText(query.value(0).toString());
        ui->lineEditType->setText(query.value(1).toString());
        ui->spinBoxBorrowed->setValue(query.value(2).toInt());
        ui->spinBoxMaxBorrow->setValue(query.value(3).toInt());
        ui->doubleSpinBoxFine->setValue(query.value(4).toDouble());
        query.exec(QString("select * from Borrow where rid='%1' and duetime<now()").arg(rid));
        while (query.next())
            duecount += 1;
        ui->spinBoxCount->setValue(duecount);
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


void AdminBorrowDialog::ReaderIDVerify()
{
    QSqlQuery query(*db);
    QString rid = ui->lineEditRID->text();
    query.exec(QString("select name,type,borrowed,maxborrow,fine from Reader where rid='%1'").arg(rid));
    if (query.next())
    {
        int duecount = 0;
        ui->lineEditName->setEnabled(true);
        ui->lineEditType->setEnabled(true);
        ui->spinBoxBorrowed->setEnabled(true);
        ui->spinBoxMaxBorrow->setEnabled(true);
        ui->doubleSpinBoxFine->setEnabled(true);
        ui->spinBoxCount->setEnabled(true);
        ui->lineEditName->setText(query.value(0).toString());
        ui->lineEditType->setText(query.value(1).toString());
        ui->spinBoxBorrowed->setValue(query.value(2).toInt());
        ui->spinBoxMaxBorrow->setValue(query.value(3).toInt());
        ui->doubleSpinBoxFine->setValue(query.value(4).toDouble());
        query.exec(QString("select * from Borrow where rid='%1' and duetime<now()").arg(rid));
        while (query.next())
            duecount += 1;
        ui->spinBoxCount->setValue(duecount);
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

void AdminBorrowDialog::BookIDVerify()
{
    QSqlQuery query(*db);
    QString bid = ui->lineEditBID->text();
    query.exec(QString("select replace(replace(state,'0','Borrowed'),'1','On Shelf'),isbn from Book where bid='%1'").arg(bid));
    if (query.next())
    {
        ui->lineEditState->setEnabled(true);
        ui->lineEditISBN->setEnabled(true);
        ui->lineEditTitle->setEnabled(true);
        ui->lineEditState->setText(query.value(0).toString());
        ui->lineEditISBN->setText(query.value(1).toString());
        query.exec(QString("select title from Publication where isbn='%1'").arg(ui->lineEditISBN->text()));
        query.next();
        ui->lineEditTitle->setText(query.value(0).toString());
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

void AdminBorrowDialog::BorrowConfirm()
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
    else if (ui->lineEditState->text() == "Borrowed")
    {
        QFont font;
        msgBox = new QMessageBox();
        msgBox->setWindowTitle("Wrong");
        msgBox->setText(QString("The book %1 has been borrowed by others, not on shelf now!").arg(ui->lineEditBID->text()));
        font.setPointSize(18);
        msgBox->setFont(font);
        msgBox->exec();
        this->reject();
    }
    else if (ui->spinBoxBorrowed->value() >= ui->spinBoxMaxBorrow->value())
    {
        QFont font;
        msgBox = new QMessageBox();
        msgBox->setWindowTitle("Wrong");
        msgBox->setText(QString("Reader %1 can't borrow any book more, because he/she has reached the maximum number of books to borrow").arg(ui->lineEditRID->text()));
        font.setPointSize(18);
        msgBox->setFont(font);
        msgBox->exec();
        this->reject();
    }
    else if (ui->spinBoxCount->value() > 0)
    {
        QFont font;
        msgBox = new QMessageBox();
        msgBox->setWindowTitle("Wrong");
        msgBox->setText(QString("Reader %1 can't borrow any book more, because he/she has one more book overdue and not returned").arg(ui->lineEditRID->text()));
        font.setPointSize(18);
        msgBox->setFont(font);
        msgBox->exec();
        this->reject();
    }
    else if (ui->doubleSpinBoxFine->value() > 0.0)
    {
        QFont font;
        msgBox = new QMessageBox();
        msgBox->setWindowTitle("Wrong");
        msgBox->setText(QString("Reader %1 can't borrow any book more, because he/she has fines not paid").arg(ui->lineEditRID->text()));
        font.setPointSize(18);
        msgBox->setFont(font);
        msgBox->exec();
        this->reject();
    }
    else
    {
        QSqlQuery query(*db);
        query.prepare("insert into Borrow values(:rid,:bid,now(),adddate(now(),interval 1 month),1)");
        query.bindValue(":rid", ui->lineEditRID->text());
        query.bindValue(":bid", ui->lineEditBID->text());
        query.exec();
        query.prepare("update Book set state='0' where bid=:bid");
        query.bindValue(":bid", ui->lineEditBID->text());
        query.exec();
        query.prepare("update Reader set borrowed=borrowed+1 where rid=:rid");
        query.bindValue(":rid", ui->lineEditRID->text());
        query.exec();
        query.prepare("update Publication set curnum=curnum-1 where isbn=:isbn");
        query.bindValue(":isbn", ui->lineEditISBN->text());
        query.exec();
        this->reject();
        QFont font;
        msgBox = new QMessageBox();
        msgBox->setWindowTitle("Success");
        msgBox->setText(QString("Reader %1 borrowed the book %2 successfully!").arg(ui->lineEditRID->text()).arg(ui->lineEditBID->text()));
        font.setPointSize(18);
        msgBox->setFont(font);
        msgBox->exec();
    }
}

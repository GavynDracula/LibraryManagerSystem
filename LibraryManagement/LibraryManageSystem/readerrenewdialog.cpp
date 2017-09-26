#include "readerrenewdialog.h"
#include "ui_readerrenewdialog.h"

ReaderRenewDialog::ReaderRenewDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ReaderRenewDialog)
{
    ui->setupUi(this);
    setWindowTitle("Renew the book you select");

    connect(ui->buttonConfirm, SIGNAL(released()), this, SLOT(accept()));
    connect(ui->buttonCancel, SIGNAL(released()), this, SLOT(reject()));
}

void ReaderRenewDialog::SetDisplay(QSqlDatabase *db, QString bid)
{
    QSqlQuery query(*db);
    QString isbn;
    query.exec(QString("select borrowtime,duetime,renewtimes from Borrow where bid='%1'").arg(bid));
    query.next();
    ui->lineEditBID->setText(bid);
//    ui->dateTimeEditBorrow->setDate(QDate::fromString(query.value(0).toString(), "yyyy-MM-dd hh:mm:ss"));
    ui->dateTimeEditBorrow->setDateTime(query.value(0).toDateTime());
//    ui->dateTimeEditDue->setDate(QDate::fromString(query.value(1).toString(), "yyyy-MM-dd hh:mm:ss"));
    ui->dateTimeEditDue->setDateTime(query.value(1).toDateTime());
    ui->spinBoxRenew->setValue(query.value(2).toInt());
//    ui->dateTimeEditDueAfter->setDate(ui->dateTimeEditDue->date().addMonths(1));
    ui->dateTimeEditDueAfter->setDateTime(ui->dateTimeEditDue->dateTime().addMonths(1));
    newdue = ui->dateTimeEditDueAfter->dateTime();
    ui->spinBoxRenewAfter->setValue(ui->spinBoxRenew->value() - 1);
    newrenew = ui->spinBoxRenewAfter->value();
    query.exec(QString("select isbn from Book where bid='%1'").arg(bid));
    query.next();
    isbn = query.value(0).toString();
    query.exec(QString("select title,author,publisher from Publication where isbn='%1'").arg(isbn));
    query.next();
    ui->lineEditTitle->setText(query.value(0).toString());
    ui->lineEditAuthor->setText(query.value(1).toString());
    ui->lineEditPublisher->setText(query.value(2).toString());
}

ReaderRenewDialog::~ReaderRenewDialog()
{
    delete ui;
}

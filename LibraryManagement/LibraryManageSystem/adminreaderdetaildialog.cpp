#include "adminreaderdetaildialog.h"
#include "ui_adminreaderdetaildialog.h"

AdminReaderDetailDialog::AdminReaderDetailDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminReaderDetailDialog)
{
    ui->setupUi(this);
    this->setWindowTitle("Reader's detail information");
    model = new QSqlQueryModel;
}

AdminReaderDetailDialog::~AdminReaderDetailDialog()
{
    delete ui;
}

void AdminReaderDetailDialog::SetDisplay(QSqlDatabase *db, QString rid)
{
    QSqlQuery query(*db);
    query.exec(QString("select * from Reader where rid='%1'").arg(rid));
    query.next();
    ui->lineEditRID->setText(rid);
    ui->lineEditPwd->setText(query.value(1).toString());
    ui->lineEditName->setText(query.value(2).toString());
    ui->lineEditType->setText(query.value(3).toString());
    ui->lineEditPhone->setText(query.value(4).toString());
    ui->lineEditEmail->setText(query.value(5).toString());
    ui->spinBoxBorrowed->setValue(query.value(6).toInt());
    ui->spinBoxMaxBorrow->setValue(query.value(7).toInt());
    ui->doubleSpinBoxFine->setValue(query.value(8).toDouble());
    query.exec(QString("select Borrow.bid,title,date_format(duetime,'%Y-%m-%d %H:%i'),renewtimes from Borrow,Book,Publication where Borrow.bid=Book.bid and Book.isbn=Publication.isbn and Borrow.rid='%1'").arg(rid));
    model->setQuery(query);
    // Set Header of table
    model->setHeaderData(0, Qt::Horizontal, tr("Book ID"));
    model->setHeaderData(1, Qt::Horizontal, tr("Book Title"));
    model->setHeaderData(2, Qt::Horizontal, tr("Due Time"));
    model->setHeaderData(3, Qt::Horizontal, tr("Renewable"));
    // Set the table
    ui->tableView->setModel(model);
    ui->tableView->verticalHeader()->setFixedWidth(20);
    ui->tableView->setColumnWidth(0, 100);
    ui->tableView->setColumnWidth(1, 120);
    ui->tableView->setColumnWidth(2, 140);
    ui->tableView->setColumnWidth(3, 80);
}

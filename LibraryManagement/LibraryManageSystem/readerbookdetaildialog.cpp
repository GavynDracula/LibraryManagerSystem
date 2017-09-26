#include "readerbookdetaildialog.h"
#include "ui_readerbookdetaildialog.h"

ReaderBookDetailDialog::ReaderBookDetailDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ReaderBookDetailDialog)
{
    ui->setupUi(this);
    setWindowTitle("Book's detail information");
    model = new QSqlQueryModel;
}

void ReaderBookDetailDialog::SetDisplay(QSqlDatabase *db, QString isbn)
{
    QSqlQuery query(*db);
    query.exec(QString("select * from Publication where isbn='%1'").arg(isbn));
    query.next();
    ui->lineEditISBN->setText(isbn);
    ui->lineEditTitle->setText(query.value(1).toString());
    ui->lineEditAuthor->setText(query.value(2).toString());
    ui->dateEdit->setDate(QDate::fromString(query.value(3).toString(), "yyyy-MM-dd"));
    ui->lineEditPublisher->setText(query.value(4).toString());
    ui->lineEditCity->setText(query.value(5).toString());
    ui->spinBoxPages->setValue(query.value(6).toInt());
    ui->lineEditType->setText(query.value(7).toString());
    ui->doubleSpinBox->setValue(query.value(8).toDouble());
    ui->textBrowser->setText(query.value(9).toString());
    ui->spinBoxCurNum->setValue(query.value(10).toInt());
    query.exec(QString("select bid,'%1' as title,position,replace(replace(state,'0','Borrowed'),'1','On Shelf') as state from Book where isbn='%2'").arg(ui->lineEditTitle->text()).arg(isbn));
    model->setQuery(query);
    // Set Header of table
    model->setHeaderData(0, Qt::Horizontal, tr("Book ID"));
    model->setHeaderData(1, Qt::Horizontal, tr("Book Title"));
    model->setHeaderData(2, Qt::Horizontal, tr("Position"));
    model->setHeaderData(3, Qt::Horizontal, tr("State"));
    ui->tableView->setModel(model);
    ui->tableView->verticalHeader()->setFixedWidth(30);
    ui->tableView->setColumnWidth(0, 100);
    ui->tableView->setColumnWidth(1, 150);
    ui->tableView->setColumnWidth(2, 80);
    ui->tableView->setColumnWidth(3, 80);
}

ReaderBookDetailDialog::~ReaderBookDetailDialog()
{
    delete ui;
}

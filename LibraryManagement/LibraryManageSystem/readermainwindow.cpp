#include "readermainwindow.h"
#include "ui_readermainwindow.h"

ReaderMainWindow::ReaderMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ReaderMainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Library Manage System For Reader");
    model = new QSqlQueryModel;
    // Bind action(item in the menu bar)'s sigal to corresponding function
    // Inquire Menu
    connect(ui->actionPersonal_Info, SIGNAL(triggered(bool)), this, SLOT(SelfInfo()));
    connect(ui->actionBorrowed_Books, SIGNAL(triggered(bool)), this, SLOT(BorrowedBooks()));
    connect(ui->actionBooksWant, SIGNAL(triggered(bool)), this, SLOT(ReaderInquire()));
    // Renew Menu
    connect(ui->actionRenew_One, SIGNAL(triggered(bool)), this, SLOT(RenewOne()));
    // connect(ui->actionRenew_All, SIGNAL(triggered(bool)), this, SLOT(RenewAll()));
    // Help Menu
    connect(ui->actionAbout_Program, SIGNAL(triggered(bool)), this, SLOT(AboutProgram()));
    connect(ui->actionAbout_Me, SIGNAL(triggered(bool)), this, SLOT(AboutMe()));
    // TableView double clicked
    connect(ui->tableView, SIGNAL(doubleClicked(QModelIndex)), this, SLOT(TVDoubleClick(QModelIndex)));
}

ReaderMainWindow::~ReaderMainWindow()
{
    delete ui;
}

void ReaderMainWindow::SelfInfo()
{
    ReaderSelfInfoDialog dialog;
    QSqlQuery query(*db);
    ReaderSelfInfoDialog::ReaderData data;
    query.exec(QString("select * from Reader where rid='%1'").arg(readerID));
//    qDebug()<<QString("select from Reader where rid='%1'").arg(readerID);
    query.next();
    data.rid = query.value(0).toString();
    data.name = query.value(2).toString();
    data.type = query.value(3).toString();
    data.phone = query.value(4).toString();
    data.email = query.value(5).toString();
    data.borrowed = query.value(6).toInt();
    data.maxborrow = query.value(7).toInt();
    data.fine = query.value(8).toDouble();
    dialog.SetReaderData(data);
    dialog.exec();
}

void ReaderMainWindow::BorrowedBooks()
{
    QSqlQuery query(*db);
    query.exec(QString("select Borrow.bid,title,author,publisher,date_format(borrowtime,'%Y-%m-%d %H:%i'),date_format(duetime,'%Y-%m-%d %H:%i'),renewtimes from Borrow,Book,Publication where Borrow.bid=Book.bid and Book.isbn=Publication.isbn and Borrow.rid='%1'").arg(readerID));
    model->setQuery(query);
//    qDebug()<<QString("select Borrow.bid,title,author,publisher,borrowtime,duetime,renewtimes from Borrow,Book,Publication where Borrow.bid=Book.bid and Book.isbn=Publication.isbn and Borrow.rid='%1'").arg(readerID);
    // Set Header of table
    model->setHeaderData(0, Qt::Horizontal, tr("Book ID"));
    model->setHeaderData(1, Qt::Horizontal, tr("Book Title"));
    model->setHeaderData(2, Qt::Horizontal, tr("Author"));
    model->setHeaderData(3, Qt::Horizontal, tr("Publisher"));
    model->setHeaderData(4, Qt::Horizontal, tr("Borrow Time"));
    model->setHeaderData(5, Qt::Horizontal, tr("Due Time"));
    model->setHeaderData(6, Qt::Horizontal, tr("Renewable"));
    // Set the table
    ui->tableView->setModel(model);
    ui->tableView->verticalHeader()->setFixedWidth(30);
    ui->tableView->setColumnWidth(0, 100);
    ui->tableView->setColumnWidth(1, 120);
    ui->tableView->setColumnWidth(2, 120);
    ui->tableView->setColumnWidth(3, 150);
    ui->tableView->setColumnWidth(4, 140);
    ui->tableView->setColumnWidth(5, 140);
    ui->tableView->setColumnWidth(6, 80);
    ui->tableView->show();
}

void ReaderMainWindow::ReaderInquire()
{
    ReaderInquireDialog dialog;
    QSqlQuery query(*db);
    if (dialog.myExec(&query) == ReaderInquireDialog::Accepted)
    {
        if (dialog.SetSelectQuery())
        {
            query.exec();
            model->setQuery(query);
            // Set Header of table
            model->setHeaderData(0, Qt::Horizontal, tr("ISBN"));
            model->setHeaderData(1, Qt::Horizontal, tr("Book Title"));
            model->setHeaderData(2, Qt::Horizontal, tr("Author"));
            model->setHeaderData(3, Qt::Horizontal, tr("Publication Date"));
            model->setHeaderData(4, Qt::Horizontal, tr("Publisher"));
            model->setHeaderData(5, Qt::Horizontal, tr("Pages"));
            model->setHeaderData(6, Qt::Horizontal, tr("Quantity On Shelf"));
            // Set the table
            ui->tableView->setModel(model);
            ui->tableView->verticalHeader()->setFixedWidth(30);
            ui->tableView->setColumnWidth(0, 130);
            ui->tableView->setColumnWidth(1, 150);
            ui->tableView->setColumnWidth(2, 120);
            ui->tableView->setColumnWidth(3, 120);
            ui->tableView->setColumnWidth(4, 150);
            ui->tableView->setColumnWidth(5, 50);
            ui->tableView->setColumnWidth(6, 130);
            ui->tableView->show();
        }
    }
}

void ReaderMainWindow::RenewOne()
{
    if (model->headerData(0, Qt::Horizontal).toString() != QString("Book ID"))
    {
        QFont font;
        BorrowedBooks();
        msgBox = new QMessageBox();
        msgBox->setWindowTitle("Notice");
        msgBox->setText(QString("Please chose the book which you have borrowed and you want to renew first!\n(by clicking book's any item in the table)"));
        font.setPointSize(18);
        msgBox->setFont(font);
        msgBox->exec();
    }
    else
    {
        QSqlRecord record;
        record = model->record(ui->tableView->currentIndex().row());
        if (record.value(6).toInt() > 0)
        {
            ReaderRenewDialog dialog;
            QString bid = record.value(0).toString();
            dialog.SetDisplay(db, bid);
            if (dialog.exec() == ReaderRenewDialog::Accepted)
            {
                QSqlQuery query(*db);
                query.prepare("update Borrow set duetime=:newdue,renewtimes=:newrenew where bid=:bid");
                query.bindValue(":newdue", dialog.GetNewDueTime());
                query.bindValue(":newrenew", dialog.GetNewRenewTimes());
                query.bindValue(":bid", bid);
                query.exec();
                BorrowedBooks();
            }
        }
        else
        {
            QFont font;
            msgBox = new QMessageBox();
            msgBox->setWindowTitle("Warning");
            msgBox->setText(QString("You can't renew this book because you have zero renewal times"));
            font.setPointSize(18);
            msgBox->setFont(font);
            msgBox->exec();
        }
    }
}

void ReaderMainWindow::AboutProgram()
{
    msgBox = new QMessageBox();
    msgBox->setWindowTitle("About Program");
    msgBox->setText(QString("    The program is for my DataBase curriculum experiment.\n"
                            "    It's an application of Qt and MySQL, which is a model of client/server.\n"
                            "    This one which is named as Library Management System is used to manage books.\n"
                            "    It's really easy to oprerate it just by click the option in the menu bar.\n"
                            "    There may be still some errors herer, and it won't be used in any commercial purpose!"));
    QFont font;
    font.setPointSize(18);
    msgBox->setFont(font);
    msgBox->exec();
}

void ReaderMainWindow::AboutMe()
{
    msgBox = new QMessageBox();
    msgBox->setWindowTitle("About Me");
    msgBox->setText(QString("    Author:  Guanyu Li\n"
                            "     Email :  guanyuli@hustunique.com\n"
                            "    Phone :  15827463286\n"
                            "     Addr  : HUST, Wuhan, Hubei Province\n"
                            "    Github:  https://github.com/Dracula-36"));
    QFont font;
    font.setPointSize(18);
    msgBox->setFont(font);
    msgBox->exec();
}

void ReaderMainWindow::TVDoubleClick(QModelIndex clickindex)
{
    if (model->headerData(0, Qt::Horizontal).toString() == QString("ISBN"))
    {
        ReaderBookDetailDialog dialog;
        dialog.SetDisplay(db, model->record(clickindex.row()).value(0).toString());
        dialog.exec();
    }
    else if (model->headerData(0, Qt::Horizontal).toString() == QString("Book ID"))
    {
        QSqlQuery query(*db);
        query.exec(QString("select isbn from Book where bid='%1'").arg(model->record(clickindex.row()).value(0).toString()));
        ReaderBookDetailDialog dialog;
        query.next();
        dialog.SetDisplay(db, query.value(0).toString());
        dialog.exec();
    }
}

#include "adminmainwindow.h"
#include "ui_adminmainwindow.h"

AdminMainWindow::AdminMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AdminMainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Library Manage System For Administrator");
    model = new QSqlQueryModel;
    // Bind action(item in the menu bar)'s sigal to corresponding function
    // Book Menu
    connect(ui->actionEnter_New, SIGNAL(triggered(bool)), this, SLOT(PublicationEnter()));
    connect(ui->actionRemove, SIGNAL(triggered(bool)), this, SLOT(PublicationRemove()));
    connect(ui->actionShelve, SIGNAL(triggered(bool)), this, SLOT(BookShelve()));
    connect(ui->actionUnShelve, SIGNAL(triggered(bool)), this, SLOT(BookUnShelve()));
    connect(ui->actionBookInquire, SIGNAL(triggered(bool)), this, SLOT(BookInquire()));
    // Reader Menu
    connect(ui->actionRegister, SIGNAL(triggered(bool)), this, SLOT(ReaderRegister()));
    connect(ui->actionNullify, SIGNAL(triggered(bool)), this, SLOT(ReaderNullify()));
    connect(ui->actionModify, SIGNAL(triggered(bool)), this, SLOT(ReaderModify()));
    connect(ui->actionReaderInquire, SIGNAL(triggered(bool)), this, SLOT(ReaderInquire()));
    // Borrow/Return Menu
    connect(ui->actionBorrow, SIGNAL(triggered(bool)), this, SLOT(BorrowBook()));
    connect(ui->actionReturn, SIGNAL(triggered(bool)), this, SLOT(ReturnBook()));
    connect(ui->actionPay_Fines, SIGNAL(triggered(bool)), this, SLOT(PayFine()));
    // Help Menu
    connect(ui->actionAbout_Program, SIGNAL(triggered(bool)), this, SLOT(AboutProgram()));
    connect(ui->actionAbout_Me, SIGNAL(triggered(bool)), this, SLOT(AboutMe()));
    // TableView double clicked
    connect(ui->tableView, SIGNAL(doubleClicked(QModelIndex)), this, SLOT(TVDoubleClick(QModelIndex)));
}

AdminMainWindow::~AdminMainWindow()
{
    delete ui;
}

void AdminMainWindow::PublicationEnter()
{
    AdminEnterNewDialog dialog;
    if (dialog.exec() == AdminEnterNewDialog::Accepted)
    {
        QSqlQuery query(*db);
        AdminEnterNewDialog::PublicationData data;
        dialog.GetPublicationData(data);
        query.exec(QString("select * from Publication where isbn='%1'").arg(data.isbn));
        if (query.next())
        {
            QFont font;
            font.setPointSize(18);
            msgBox = new QMessageBox();
            msgBox->setWindowTitle("Wrong");
            msgBox->setFont(font);
            msgBox->setText(QString("The publication with ISBN %1 has been entered!").arg(data.isbn));
            msgBox->exec();
        }
        else
        {
            QFont font;
            query.prepare("insert into Publication values(:isbn,:title,:author,:pubdate,:publisher,:pubcity,:pages,:type,:price,:intro,:curnum)");
            query.bindValue(":isbn", data.isbn);
            query.bindValue(":title", data.title);
            query.bindValue(":author", data.author);
            query.bindValue(":pubdate", data.pubdate);
            query.bindValue(":publisher", data.publisher);
            query.bindValue(":pubcity", data.pubcity);
            query.bindValue(":pages", data.pages);
            query.bindValue(":type", data.type);
            query.bindValue(":price", data.price);
            query.bindValue(":intro", data.intro);
            query.bindValue(":curnum", data.curnum);
            query.exec();
            font.setPointSize(18);
            msgBox = new QMessageBox();
            msgBox->setWindowTitle("Success");
            msgBox->setFont(font);
            msgBox->setText(QString("The publication with ISBN: %1 is entered successfully!").arg(data.isbn));
            msgBox->exec();
        }
    }
}

void AdminMainWindow::PublicationRemove()
{
    AdminRemoveDialog dialog;
    dialog.SetDB(db);
    if (model->headerData(0, Qt::Horizontal).toString() == QString("ISBN") && model->rowCount()>0)
    {
        dialog.SetISBN(model->record(ui->tableView->currentIndex().row()).value(0).toString());
        dialog.OutISBNVerify();
    }
    dialog.exec();
}

void AdminMainWindow::BookShelve()
{
    AdminShelveDialog dialog;
    dialog.SetDB(db);
    if (model->headerData(0, Qt::Horizontal).toString() == QString("ISBN") && model->rowCount()>0)
    {
        dialog.SetISBN(model->record(ui->tableView->currentIndex().row()).value(0).toString());
        dialog.OutISBNVerify();
    }
    dialog.exec();
}

void AdminMainWindow::BookUnShelve()
{
    AdminUnShelveDialog dialog;
    dialog.SetDB(db);
    dialog.exec();
}

void AdminMainWindow::BookInquire()
{
    AdminInquireDialog dialog;
    QSqlQuery query(*db);
    if (dialog.myExec(&query) == AdminInquireDialog::Accepted)
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

void AdminMainWindow::ReaderRegister()
{
    AdminRegisterDialog dialog;
    if (dialog.exec() == AdminRegisterDialog::Accepted)
    {
        QSqlQuery query(*db);
        AdminRegisterDialog::ReaderData data;
        dialog.GetReaderData(data);
        query.exec(QString("select * from Reader where rid='%1'").arg(data.rid));
        if (query.next())
        {
            QFont font;
            font.setPointSize(18);
            msgBox = new QMessageBox();
            msgBox->setWindowTitle("Wrong");
            msgBox->setFont(font);
            msgBox->setText(QString("The Reader ID %1 has been registered!").arg(data.rid));
            msgBox->exec();
        }
        else
        {
            QFont font;
            query.prepare("insert into Reader values(:rid,:pwd,:name,:type,:phone,:email,:borrowed,:maxborrow,:fine)");
            query.bindValue(":rid", data.rid);
            query.bindValue(":pwd", data.pwd);
            query.bindValue(":name", data.name);
            query.bindValue(":type", data.type);
            query.bindValue(":phone", data.phone);
            query.bindValue(":email", data.email);
            query.bindValue(":borrowed", data.borrowed);
            query.bindValue(":maxborrow", data.maxborrow);
            query.bindValue(":fine", data.fine);
            query.exec();
            query.exec(QString("grant select on Library.Reader to '%1'@'%' identified by '%2'").arg(data.rid).arg(data.pwd));
            query.exec(QString("grant select on Library.Publication to '%1'@'%' identified by '%2'").arg(data.rid).arg(data.pwd));
            query.exec(QString("grant select on Library.Book to '%1'@'%' identified by '%2'").arg(data.rid).arg(data.pwd));
            query.exec(QString("grant select,update on Library.Borrow to '%1'@'%' identified by '%2'").arg(data.rid).arg(data.pwd));
            font.setPointSize(18);
            msgBox = new QMessageBox();
            msgBox->setWindowTitle("Success");
            msgBox->setFont(font);
            msgBox->setText(QString("The reader with ID: %1 and password: %2 is registered successfully!").arg(data.rid).arg(data.pwd));
            msgBox->exec();
        }
    }
}

void AdminMainWindow::ReaderNullify()
{
    AdminNullifyDialog dialog;
    dialog.SetDB(db);
    if (model->headerData(0, Qt::Horizontal).toString() == QString("Reader ID") && model->rowCount()>0)
    {
        dialog.SetReaderID(model->record(ui->tableView->currentIndex().row()).value(0).toString());
        dialog.OutReaderIDVerify();
    }
    dialog.exec();
}

void AdminMainWindow::ReaderModify()
{
    AdminModifyDialog dialog;
    dialog.SetDB(db);
    if (model->headerData(0, Qt::Horizontal).toString() == QString("Reader ID") && model->rowCount()>0)
    {
        dialog.SetReaderID(model->record(ui->tableView->currentIndex().row()).value(0).toString());
        dialog.OutReaderIDVerify();
    }
    dialog.exec();
}

void AdminMainWindow::ReaderInquire()
{
    AdminReaderInquireDialog dialog;
    QSqlQuery query(*db);
    if (dialog.myExec(&query) == AdminReaderInquireDialog::Accepted)
    {
        if (dialog.SetSelectQuery())
        {
            query.exec();
            model->setQuery(query);
            // Set Header of table
            model->setHeaderData(0, Qt::Horizontal, tr("Reader ID"));
            model->setHeaderData(1, Qt::Horizontal, tr("Name"));
            model->setHeaderData(2, Qt::Horizontal, tr("Type"));
            model->setHeaderData(3, Qt::Horizontal, tr("Borrowed"));
            model->setHeaderData(4, Qt::Horizontal, tr("Max Borrow"));
            model->setHeaderData(5, Qt::Horizontal, tr("Fine"));
            // Set the table
            ui->tableView->setModel(model);
            ui->tableView->verticalHeader()->setFixedWidth(30);
            ui->tableView->setColumnWidth(0, 130);
            ui->tableView->setColumnWidth(1, 150);
            ui->tableView->setColumnWidth(2, 120);
            ui->tableView->setColumnWidth(3, 120);
            ui->tableView->setColumnWidth(4, 200);
            ui->tableView->setColumnWidth(5, 130);
            ui->tableView->show();
        }
    }
}

void AdminMainWindow::BorrowBook()
{
    AdminBorrowDialog dialog;
    dialog.SetDB(db);
    if (model->headerData(0, Qt::Horizontal).toString() == QString("Reader ID") && model->rowCount()>0)
    {
        dialog.SetReaderID(model->record(ui->tableView->currentIndex().row()).value(0).toString());
        dialog.OutReaderIDVerify();
    }
    dialog.exec();
}

void AdminMainWindow::ReturnBook()
{
    AdminReturnDialog dialog;
    dialog.SetDB(db);
    if (model->headerData(0, Qt::Horizontal).toString() == QString("Reader ID") && model->rowCount()>0)
    {
        dialog.SetReaderID(model->record(ui->tableView->currentIndex().row()).value(0).toString());
        dialog.OutReaderIDVerify();
    }
    dialog.exec();
}

void AdminMainWindow::PayFine()
{
    AdminPayFineDialog dialog;
    dialog.SetDB(db);
    if (model->headerData(0, Qt::Horizontal).toString() == QString("Reader ID") && model->rowCount()>0)
    {
        dialog.SetReaderID(model->record(ui->tableView->currentIndex().row()).value(0).toString());
        dialog.OutReaderIDVerify();
    }
    dialog.exec();
}

void AdminMainWindow::AboutProgram()
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

void AdminMainWindow::AboutMe()
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

void AdminMainWindow::TVDoubleClick(QModelIndex clickindex)
{
    if (model->headerData(0, Qt::Horizontal).toString() == QString("ISBN"))
    {
        AdminBookDetailDialog dialog;
        dialog.SetDisplay(db, model->record(clickindex.row()).value(0).toString());
        dialog.exec();
    }
    else if (model->headerData(0, Qt::Horizontal).toString() == QString("Book ID"))
    {
        QSqlQuery query(*db);
        query.exec(QString("select isbn from Book where bid='%1'").arg(model->record(clickindex.row()).value(0).toString()));
        AdminBookDetailDialog dialog;
        query.next();
        dialog.SetDisplay(db, query.value(0).toString());
        dialog.exec();
    }
    else if (model->headerData(0, Qt::Horizontal).toString() == QString("Reader ID"))
    {
        AdminReaderDetailDialog dialog;
        dialog.SetDisplay(db, model->record(clickindex.row()).value(0).toString());
        dialog.exec();
    }
}

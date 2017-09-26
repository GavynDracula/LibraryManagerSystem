#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Publications Management System");
    // Bind action(item in the menu bar)'s sigal to corresponding function
    // DataBase Menu
    connect(ui->actionConnectDB, SIGNAL(triggered()), this, SLOT(ConnectDB()));
    connect(ui->actionSaveDB, SIGNAL(triggered()), this, SLOT(SaveDB()));
    // Data Menu
    connect(ui->actionInput, SIGNAL(triggered()), this, SLOT(Input()));
    connect(ui->actionModify, SIGNAL(triggered()), this, SLOT(Modify()));
    connect(ui->actionDelete, SIGNAL(triggered()), this, SLOT(DeleteData()));
    connect(ui->actionRevert, SIGNAL(triggered()), this, SLOT(Revert()));
    // Inquire Menu
    connect(ui->actionSelect_All, SIGNAL(triggered()), this, SLOT(SelectAll()));
    connect(ui->actionSelect_Ones, SIGNAL(triggered()), this, SLOT(SelectOnes()));
    // Help Menu
    connect(ui->actionAbout_Program, SIGNAL(triggered()), this, SLOT(AboutProgram()));
    connect(ui->actionAbout_Me, SIGNAL(triggered()), this, SLOT(AboutMe()));
    // Before connect to database, forbid some operations
    ui->menuData->setEnabled(false);
    ui->menuInquire->setEnabled(false);
    ui->actionSaveDB->setEnabled(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::ConnectDB()
{
    // Connect to database
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setDatabaseName("publications");
    db.setUserName("root");
    db.setPassword("lgy19960326");
    // Pop out a message box
    msgBox = new QMessageBox();
    if(!db.open())
    {
        // Connect database failed
        msgBox->setWindowTitle("Error");
        msgBox->setText("Open MySQL Database failed! Details is is debugger!");
        qDebug()<<db.lastError().text();
        return;
    }
    else
    {
        db.transaction();
        // Connect datase successfully
        model = new QSqlQueryModel;
        // Display contens in database
        SelectAll();
        // Enable operations forbiden at the beginning
        ui->menuData->setEnabled(true);
        ui->menuInquire->setEnabled(true);
        ui->actionSaveDB->setEnabled(true);
        ui->actionConnectDB->setEnabled(false);
        // Set message of the message box
        msgBox->setWindowTitle("Success");
        msgBox->setText("Open MySQL Database successfully!");
    }
    QFont font;
    font.setPointSize(18);
    msgBox->setFont(font);
    msgBox->exec();
}

void MainWindow::SaveDB()
{
    QFont font;
    db.commit();
    db.transaction();
    msgBox = new QMessageBox();
    msgBox->setWindowTitle("Success");
    msgBox->setText("Save changes to Database successfully!");
    font.setPointSize(18);
    msgBox->setFont(font);
    msgBox->exec();
}

void MainWindow::Input()
{
    InputDialog dialog;
    if (dialog.exec() == InputDialog::Accepted)
    {
        InputDialog::InputData data = dialog.GetInput();
        QSqlQuery query(db);
        query.prepare("insert into Books values(:barcode, :title, :author, :pubdate, :publisher, :pubcity, :pages)");
        query.bindValue(":barcode", data.barcode);
        query.bindValue(":title", data.title);
        query.bindValue(":author", data.author);
        query.bindValue(":pubdate", data.pubdate);
        query.bindValue(":publisher", data.publisher);
        query.bindValue(":pubcity", data.pubcity);
        query.bindValue(":pages", data.pages);
        query.exec();
        SelectAll();
    }

}

void MainWindow::Modify()
{
    ModifyDialog dialog;
    ModifyDialog::ModifyData data;
    QSqlRecord record;
    record = model->record(ui->tableView->currentIndex().row());
    data.title = record.value(0).toString();
    data.author = record.value(1).toString();
    data.pubdate = QDate::fromString(record.value(2).toString(), "yyyy-MM-dd");
    data.publisher = record.value(3).toString();
    data.pubcity = record.value(4).toString();
    data.pages = record.value(5).toInt();
    data.barcode = record.value(6).toString();
    dialog.SetOriginData(data);
    if (dialog.exec() == ModifyDialog::Accepted)
    {
        ModifyDialog::ModifyData data = dialog.GetModify();
        QSqlQuery query(db);
        query.prepare("update Books set title=:title, author=:author, pubdate=:pubdate, publisher=:publisher, pubcity=:pubcity, pages=:pages where id=:barcode");
        query.bindValue(":title", data.title);
        query.bindValue(":author", data.author);
        query.bindValue(":pubdate", data.pubdate);
        query.bindValue(":publisher", data.publisher);
        query.bindValue(":pubcity", data.pubcity);
        query.bindValue(":pages", data.pages);
        query.bindValue(":barcode", data.barcode);
        query.exec();
        SelectAll();
    }
}

void MainWindow::DeleteData()
{
    DeleteDialog dialog;
    DeleteDialog::DeleteData data;
    QSqlRecord record;
    record = model->record(ui->tableView->currentIndex().row());
    data.title = record.value(0).toString();
    data.author = record.value(1).toString();
    data.pubdate = QDate::fromString(record.value(2).toString(), "yyyy-MM-dd");
    data.publisher = record.value(3).toString();
    data.pubcity = record.value(4).toString();
    data.pages = record.value(5).toInt();
    data.barcode = record.value(6).toString();
    dialog.SetDeleteData(data);
    if (dialog.exec() == DeleteDialog::Accepted)
    {
        QSqlQuery query(db);
        query.prepare("delete from Books where id=:barcode");
        query.bindValue(":barcode", data.barcode);
        query.exec();
        SelectAll();
    }
}

void MainWindow::Revert()
{
    db.rollback();
    db.transaction();
    SelectAll();
}

void MainWindow::SelectOnes()
{
    InquireDialog dialog;
    QSqlQuery query(db);
    if (dialog.myExec(&query) == DeleteDialog::Accepted)
    {
        if (dialog.SetSelectQuery())
        {
            query.exec();
            model->setQuery(query);
        }
        else
            return;
    }
}

void MainWindow::SelectAll()
{
    model->setQuery("select title, author, date_format(pubdate, '%Y-%m-%d'), publisher, pubcity, pages, id from Books");
    // Set Header of table
    model->setHeaderData(0, Qt::Horizontal, tr("Book Title"));
    model->setHeaderData(1, Qt::Horizontal, tr("Author"));
    model->setHeaderData(2, Qt::Horizontal, tr("Publication Date"));
    model->setHeaderData(3, Qt::Horizontal, tr("Publisher"));
    model->setHeaderData(4, Qt::Horizontal, tr("Publisher City"));
    model->setHeaderData(5, Qt::Horizontal, tr("Pages"));
    model->setHeaderData(6, Qt::Horizontal, tr("Barcode"));
    // Set the table
    ui->tableView->setModel(model);
    ui->tableView->setColumnWidth(0, 150);
    ui->tableView->setColumnWidth(1, 120);
    ui->tableView->setColumnWidth(2, 120);
    ui->tableView->setColumnWidth(3, 150);
    ui->tableView->setColumnWidth(4, 110);
    ui->tableView->setColumnWidth(5, 50);
    ui->tableView->setColumnWidth(6, 150);
    ui->tableView->verticalHeader()->setFixedWidth(50);
    ui->tableView->show();
}

void MainWindow::AboutProgram()
{
    msgBox = new QMessageBox();
    msgBox->setWindowTitle("About Program");
    msgBox->setText(QString("    The program is for my DataBase curriculum experiment.\n"
                            "    It's an application of Qt and MySQL, which is a model of client/server.\n"
                            "    This one which is named as Publication Management System is used to manage books.\n"
                            "    It's really easy to oprerate it just by click the option in the menu bar.\n"
                            "    There may be still some errors herer, and it won't be used in any commercial purpose!"));
    QFont font;
    font.setPointSize(18);
    msgBox->setFont(font);
    msgBox->exec();
}

void MainWindow::AboutMe()
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

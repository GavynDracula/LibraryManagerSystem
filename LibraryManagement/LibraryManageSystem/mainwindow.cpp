#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Login To Library Manage System");
    ui->lineEditPwd->setEchoMode(QLineEdit::Password);

    connect(ui->pushButtonLogin, SIGNAL(released()), this, SLOT(Login()));
    connect(ui->pushButtonCancel, SIGNAL(released()), this, SLOT(close()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::Login()
{
    // Connect to the DataBase with the user and password input
    if(QSqlDatabase::contains("qt_sql_default_connection"))
        db = QSqlDatabase::database("qt_sql_default_connection");
    else
        db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("192.168.58.101");
    db.setDatabaseName("Library");
    db.setUserName(ui->lineEditUser->text());
    db.setPassword(ui->lineEditPwd->text());
    if (db.open())
    {
        // If connect successfully, judge if the user is loginning in correct role
        QSqlQuery query(db);
        if (ui->radioButtonReader->isChecked())
        {
            // User is loginning in "Reader"
            query.exec(QString("select * from Reader where rid='%1'").arg(ui->lineEditUser->text()));
            if (!query.next())
            {
                QFont font;
                msgBox = new QMessageBox();
                query.clear();
                db.close();
                msgBox->setWindowTitle("Error");
                msgBox->setText(ui->lineEditUser->text() + QString(" is not a reader!"));
                font.setPointSize(18);
                msgBox->setFont(font);
                msgBox->exec();
            }
            else
            {
                // Reader logins successfully, pop up the Reader's window
                readerWindow = new ReaderMainWindow();
                this->hide();
                // Copy the datebase connection to new window
                readerWindow->SetDB(&db);
                readerWindow->SetReaderID(ui->lineEditUser->text());
                readerWindow->move(this->x()+this->width()/2-readerWindow->width()/2, this->y()+this->height()/2-readerWindow->height()/2);
                readerWindow->show();
            }
        }
        else if (ui->radioButtonAdmin->isChecked())
        {
            // User is loginning in "Administrator"
            query.exec(QString("select * from Admin where aid='%1'").arg(ui->lineEditUser->text()));
            if (!query.next())
            {
                QFont font;
                msgBox = new QMessageBox();
                query.clear();
                db.close();
                msgBox->setWindowTitle("Error");
                msgBox->setText(ui->lineEditUser->text() + QString(" is not a administrator!"));
                font.setPointSize(18);
                msgBox->setFont(font);
                msgBox->exec();
            }
            else
            {
                // Administrator logins successfully, pop up the Administrator's window
                adminWindow = new AdminMainWindow();
                this->hide();
                // Copy the datebase connection to new window
                adminWindow->SetDB(&db);
                adminWindow->SetAdminID(ui->lineEditUser->text());
                adminWindow->move(this->x()+this->width()/2-adminWindow->width()/2, this->y()+this->height()/2-adminWindow->height()/2);
                adminWindow->show();
            }
        }
    }
    else
    {
        // If connect failed, judge the reason that connecting failed.
        QString errmsg = db.lastError().text();
        qDebug()<<errmsg;
        msgBox = new QMessageBox();
        msgBox->setWindowTitle("Error");
        if (errmsg.startsWith(QString("Access denied for user")))
            msgBox->setText("No such user or wrong password!");
        else
            msgBox->setText("Please check the network or remote server!");
        QFont font;
        font.setPointSize(18);
        msgBox->setFont(font);
        msgBox->exec();
    }
}

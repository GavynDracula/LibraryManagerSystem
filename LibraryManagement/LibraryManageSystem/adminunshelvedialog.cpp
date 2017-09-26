#include "adminunshelvedialog.h"
#include "ui_adminunshelvedialog.h"

AdminUnShelveDialog::AdminUnShelveDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminUnShelveDialog)
{
    ui->setupUi(this);
    this->setWindowTitle("UnShelve a book in the library");

    connect(ui->pushButtonBIDVerify, SIGNAL(released()), this, SLOT(BookIDVerify()));
    connect(ui->pushButtonConfirm, SIGNAL(released()), this, SLOT(UnShelveConfirm()));
    connect(ui->pushButtonCancel, SIGNAL(released()), this, SLOT(reject()));
}

AdminUnShelveDialog::~AdminUnShelveDialog()
{
    delete ui;
}

void AdminUnShelveDialog::BookIDVerify()
{
    QSqlQuery query(*db);
    QString bid = ui->lineEditBID->text();
    query.exec(QString("select replace(replace(state,'0','Borrowed'),'1','On Shelf'),isbn,position from Book where bid='%1'").arg(bid));
    if (query.next())
    {
        ui->lineEditState->setEnabled(true);
        ui->lineEditISBN->setEnabled(true);
        ui->lineEditPosition->setEnabled(true);
        ui->lineEditTitle->setEnabled(true);
        ui->lineEditAuthor->setEnabled(true);
        ui->lineEditPublisher->setEnabled(true);
        ui->lineEditState->setText(query.value(0).toString());
        ui->lineEditISBN->setText(query.value(1).toString());
        ui->lineEditPosition->setText(query.value(2).toString());
        query.exec(QString("select title,author,publisher from Publication where isbn='%1'").arg(ui->lineEditISBN->text()));
        query.next();
        ui->lineEditTitle->setText(query.value(0).toString());
        ui->lineEditAuthor->setText(query.value(1).toString());
        ui->lineEditPublisher->setText(query.value(2).toString());
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

void AdminUnShelveDialog::UnShelveConfirm()
{
    if (ui->lineEditBID->isEnabled())
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
        msgBox->setText(QString("The book %1 has been borrowed, not on shelf now!\n"
                                "Please return the book first!").arg(ui->lineEditBID->text()));
        font.setPointSize(18);
        msgBox->setFont(font);
        msgBox->exec();
        this->reject();
    }
    else
    {
        QFont font;
        QSqlQuery query(*db);
        query.prepare("delete from Book where bid=:bid");
        query.bindValue(":bid", ui->lineEditBID->text());
        query.exec();
        query.prepare("update Publication set curnum=curnum-1 where isbn=:isbn");
        query.bindValue(":isbn", ui->lineEditISBN->text());
        query.exec();
        this->reject();
        font.setPointSize(18);
        msgBox = new QMessageBox();
        msgBox->setWindowTitle("Success");
        msgBox->setFont(font);
        msgBox->setText(QString("The book with ID: %1 and ISBN: %2 is unshelved successfully!").arg(ui->lineEditBID->text()).arg(ui->lineEditISBN->text()));
        msgBox->exec();
    }
}

#include "adminremovedialog.h"
#include "ui_adminremovedialog.h"

AdminRemoveDialog::AdminRemoveDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminRemoveDialog)
{
    ui->setupUi(this);
    this->setWindowTitle("Do you want to remove this publication really?");

    connect(ui->pushButtonISBNVerify, SIGNAL(released()), this, SLOT(ISBNVerify()));
    connect(ui->pushButtonConfirm, SIGNAL(released()), this, SLOT(RemoveConfirm()));
    connect(ui->pushButtonCancel, SIGNAL(released()), this, SLOT(reject()));
}

AdminRemoveDialog::~AdminRemoveDialog()
{
    delete ui;
}

void AdminRemoveDialog::SetISBN(QString isbn)
{
    ui->lineEditISBN->setText(isbn);
}

void AdminRemoveDialog::OutISBNVerify()
{
    QSqlQuery query(*db);
    QString isbn = ui->lineEditISBN->text();
    query.exec(QString("select title,author,pubdate,publisher,type,intro,curnum from Publication where isbn='%1'").arg(isbn));
    if (query.next())
    {
        ui->lineEditTitle->setEnabled(true);
        ui->lineEditAuthor->setEnabled(true);
        ui->dateEdit->setEnabled(true);
        ui->lineEditPublisher->setEnabled(true);
        ui->lineEditType->setEnabled(true);
        ui->textEdit->setEnabled(true);
        ui->spinBoxCurNum->setEnabled(true);
        ui->lineEditTitle->setText(query.value(0).toString());
        ui->lineEditAuthor->setText(query.value(1).toString());
        ui->dateEdit->setDate(QDate::fromString(query.value(2).toString(), "yyyy-MM-dd"));
        ui->lineEditPublisher->setText(query.value(3).toString());
        ui->lineEditType->setText(query.value(4).toString());
        ui->textEdit->setText(query.value(5).toString());
        ui->spinBoxCurNum->setValue(query.value(6).toInt());
        ui->lineEditISBN->setEnabled(false);
    }
    else
    {
        QFont font;
        msgBox = new QMessageBox();
        msgBox->setWindowTitle("Warning");
        msgBox->setText(QString("No such publication ISBN or wrong publication ISBN!"));
        font.setPointSize(18);
        msgBox->setFont(font);
        msgBox->exec();
    }
}

void AdminRemoveDialog::ISBNVerify()
{
    QSqlQuery query(*db);
    QString isbn = ui->lineEditISBN->text();
    query.exec(QString("select title,author,pubdate,publisher,type,intro,curnum from Publication where isbn='%1'").arg(isbn));
    if (query.next())
    {
        ui->lineEditTitle->setEnabled(true);
        ui->lineEditAuthor->setEnabled(true);
        ui->dateEdit->setEnabled(true);
        ui->lineEditPublisher->setEnabled(true);
        ui->lineEditType->setEnabled(true);
        ui->textEdit->setEnabled(true);
        ui->spinBoxCurNum->setEnabled(true);
        ui->lineEditTitle->setText(query.value(0).toString());
        ui->lineEditAuthor->setText(query.value(1).toString());
        ui->dateEdit->setDate(QDate::fromString(query.value(2).toString(), "yyyy-MM-dd"));
        ui->lineEditPublisher->setText(query.value(3).toString());
        ui->lineEditType->setText(query.value(4).toString());
        ui->textEdit->setText(query.value(5).toString());
        ui->spinBoxCurNum->setValue(query.value(6).toInt());
        ui->lineEditISBN->setEnabled(false);
    }
    else
    {
        QFont font;
        msgBox = new QMessageBox();
        msgBox->setWindowTitle("Warning");
        msgBox->setText(QString("No such publication ISBN or wrong publication ISBN!"));
        font.setPointSize(18);
        msgBox->setFont(font);
        msgBox->exec();
    }
}

void AdminRemoveDialog::RemoveConfirm()
{
    if (ui->lineEditISBN->isEnabled())
    {
        QFont font;
        msgBox = new QMessageBox();
        msgBox->setWindowTitle("Wrong");
        msgBox->setText(QString("Please verify ISBN first!"));
        font.setPointSize(18);
        msgBox->setFont(font);
        msgBox->exec();
    }
    else
    {
        QSqlQuery query(*db);
        query.exec(QString("select * from Book where isbn='%1'").arg(ui->lineEditISBN->text()));
        if (query.next())
        {
            QFont font;
            font.setPointSize(18);
            msgBox = new QMessageBox();
            msgBox->setWindowTitle("Wrong");
            msgBox->setText(QString("There are still one more books of this publication with ISBN: %1 in library(borrowed or on shelf).\n"
                                    "Please unshelve these books first!").arg(ui->lineEditISBN->text()));
            msgBox->setFont(font);
            msgBox->exec();
        }
        else
        {
            query.prepare("delete from Publication where isbn=:isbn");
            query.bindValue(":isbn", ui->lineEditISBN->text());
            query.exec();
            this->reject();
            QFont font;
            font.setPointSize(18);
            msgBox = new QMessageBox();
            msgBox->setWindowTitle("Success");
            msgBox->setText(QString("The publication with ISBN: %1 is removed successfullly!").arg(ui->lineEditISBN->text()));
            msgBox->setFont(font);
            msgBox->exec();
        }
    }
}

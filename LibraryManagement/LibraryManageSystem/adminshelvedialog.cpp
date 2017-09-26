#include "adminshelvedialog.h"
#include "ui_adminshelvedialog.h"

AdminShelveDialog::AdminShelveDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminShelveDialog)
{
    ui->setupUi(this);
    this->setWindowTitle("Shelve a book of an entered publication");

    connect(ui->pushButtonISBNVerify, SIGNAL(released()), this, SLOT(ISBNVerify()));
    connect(ui->pushButtonConfirm, SIGNAL(released()), this, SLOT(ShelveConfirm()));
    connect(ui->pushButtonCancel, SIGNAL(released()), this, SLOT(reject()));
}

AdminShelveDialog::~AdminShelveDialog()
{
    delete ui;
}

void AdminShelveDialog::SetISBN(QString isbn)
{
    ui->lineEditISBN->setText(isbn);
}

void AdminShelveDialog::OutISBNVerify()
{
    QSqlQuery query(*db);
    QString isbn = ui->lineEditISBN->text();
    query.exec(QString("select title,author,pubdate,publisher,type,curnum from Publication where isbn='%1'").arg(isbn));
    if (query.next())
    {
        ui->lineEditTitle->setEnabled(true);
        ui->lineEditAuthor->setEnabled(true);
        ui->dateEdit->setEnabled(true);
        ui->lineEditPublisher->setEnabled(true);
        ui->lineEditType->setEnabled(true);
        ui->spinBoxCurNum->setEnabled(true);
        ui->lineEditTitle->setText(query.value(0).toString());
        ui->lineEditAuthor->setText(query.value(1).toString());
        ui->dateEdit->setDate(QDate::fromString(query.value(2).toString(), "yyyy-MM-dd"));
        ui->lineEditPublisher->setText(query.value(3).toString());
        ui->lineEditType->setText(query.value(4).toString());
        ui->spinBoxCurNum->setValue(query.value(5).toInt());
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

void AdminShelveDialog::ISBNVerify()
{
    QSqlQuery query(*db);
    QString isbn = ui->lineEditISBN->text();
    query.exec(QString("select title,author,pubdate,publisher,type,curnum from Publication where isbn='%1'").arg(isbn));
    if (query.next())
    {
        ui->lineEditTitle->setEnabled(true);
        ui->lineEditAuthor->setEnabled(true);
        ui->dateEdit->setEnabled(true);
        ui->lineEditPublisher->setEnabled(true);
        ui->lineEditType->setEnabled(true);
        ui->spinBoxCurNum->setEnabled(true);
        ui->lineEditTitle->setText(query.value(0).toString());
        ui->lineEditAuthor->setText(query.value(1).toString());
        ui->dateEdit->setDate(QDate::fromString(query.value(2).toString(), "yyyy-MM-dd"));
        ui->lineEditPublisher->setText(query.value(3).toString());
        ui->lineEditType->setText(query.value(4).toString());
        ui->spinBoxCurNum->setValue(query.value(5).toInt());
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

void AdminShelveDialog::ShelveConfirm()
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
    else if (ui->lineEditBID->text().isEmpty())
    {
        QFont font;
        msgBox = new QMessageBox();
        msgBox->setWindowTitle("Wrong");
        msgBox->setText(QString("The Book ID inputbox can't be empty!"));
        font.setPointSize(18);
        msgBox->setFont(font);
        msgBox->exec();
    }
    else if (ui->lineEditPostion->text().isEmpty())
    {
        QFont font;
        font.setPointSize(18);
        msgBox = new QMessageBox();
        msgBox->setWindowTitle("Wrong");
        msgBox->setFont(font);
        msgBox->setText(QString("The Shelf Position inputbox can't be empty!"));
        msgBox->exec();
    }
    else
    {
        QSqlQuery query(*db);
        query.exec(QString("select * from Book where bid='%1'").arg(ui->lineEditBID->text()));
        if (query.next())
        {
            QFont font;
            font.setPointSize(18);
            msgBox = new QMessageBox();
            msgBox->setWindowTitle("Wrong");
            msgBox->setFont(font);
            msgBox->setText(QString("The book with ID %1 has been shelved!").arg(ui->lineEditBID->text()));
            msgBox->exec();
        }
        else
        {
            QFont font;
            query.prepare("insert into Book values(:bid,:isbn,:position,'1')");
            query.bindValue(":bid", ui->lineEditBID->text());
            query.bindValue(":isbn", ui->lineEditISBN->text());
            query.bindValue(":position", ui->lineEditPostion->text());
            query.exec();
            query.prepare("update Publication set curnum=curnum+1 where isbn=:isbn");
            query.bindValue(":isbn", ui->lineEditISBN->text());
            query.exec();
            this->reject();
            font.setPointSize(18);
            msgBox = new QMessageBox();
            msgBox->setWindowTitle("Success");
            msgBox->setFont(font);
            msgBox->setText(QString("The book with ID: %1 and ISBN: %2 is shelved successfully!").arg(ui->lineEditBID->text()).arg(ui->lineEditISBN->text()));
            msgBox->exec();
        }
    }
}

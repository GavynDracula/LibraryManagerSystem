#include "adminenternewdialog.h"
#include "ui_adminenternewdialog.h"

AdminEnterNewDialog::AdminEnterNewDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminEnterNewDialog)
{
    ui->setupUi(this);
    this->setWindowTitle("Enter a new publication's information");

    connect(ui->pushButtonConfirm, SIGNAL(released()), this, SLOT(EnterNewConfirm()));
    connect(ui->pushButtonCancel, SIGNAL(released()), this, SLOT(reject()));
}

AdminEnterNewDialog::~AdminEnterNewDialog()
{
    delete ui;
}

void AdminEnterNewDialog::EnterNewConfirm()
{
    if (ui->lineEditISBN->text().isEmpty())
    {
        QFont font;
        font.setPointSize(18);
        msgBox = new QMessageBox();
        msgBox->setWindowTitle("Wrong");
        msgBox->setFont(font);
        msgBox->setText(QString("The ISBN inputbox can't be empty!"));
        msgBox->exec();
    }
    else if (ui->lineEditTitle->text().isEmpty())
    {
        QFont font;
        font.setPointSize(18);
        msgBox = new QMessageBox();
        msgBox->setWindowTitle("Wrong");
        msgBox->setFont(font);
        msgBox->setText(QString("The Title inputbox can't be empty!"));
        msgBox->exec();
    }
    else
        return accept();
}

void AdminEnterNewDialog::GetPublicationData(PublicationData &data)
{
    data.isbn = ui->lineEditISBN->text();
    data.title = ui->lineEditTitle->text();
    data.author = ui->lineEditAuthor->text();
    data.pubdate = ui->dateEdit->date();
    data.publisher = ui->lineEditPublisher->text();
    data.pubcity = ui->lineEditCity->text();
    data.pages = ui->spinBoxPages->value();
    data.type = ui->lineEditType->text();
    data.price = ui->doubleSpinBox->value();
    data.intro = ui->textEdit->toPlainText();
    data.curnum = 0;
}

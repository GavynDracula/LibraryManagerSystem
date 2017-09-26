#include "adminreaderinquiredialog.h"
#include "ui_adminreaderinquiredialog.h"

AdminReaderInquireDialog::AdminReaderInquireDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminReaderInquireDialog)
{
    int i;
    ui->setupUi(this);
    this->setWindowTitle("Inquire the reader you want to find");

    connect(ui->pushButtonConfirm, SIGNAL(released()), this, SLOT(accept()));
    connect(ui->pushButtonCancel, SIGNAL(released()), this, SLOT(reject()));
    connect(ui->pushButtonAdd, SIGNAL(released()), this, SLOT(AddCondition()));
    connect(ui->pushButtonPlus, SIGNAL(released()), this, SLOT(PlusCondition()));
    connect(ui->checkBoxBorrowed, SIGNAL(stateChanged(int)), this, SLOT(BorrowedCondition(int)));
    connect(ui->checkBoxFines, SIGNAL(stateChanged(int)), this, SLOT(FinesCondition(int)));
    connect(ui->checkBoxType, SIGNAL(stateChanged(int)), this, SLOT(TypeCondition(int)));

    ConditionNum = 0;
    for (i = 1; i <= 4; i++)
        HideConditionSet(i);
}

AdminReaderInquireDialog::~AdminReaderInquireDialog()
{
    delete ui;
}

int AdminReaderInquireDialog::myExec(QSqlQuery *query)
{
    this->query = query;
    return exec();
}

int AdminReaderInquireDialog::SetSelectQuery()
{
    int i;
    QString items[4] = {QString("rid"), QString("name"), QString("phone"), QString("email")};
    QString command("select rid,name,type,borrowed,maxborrow,fine from Reader where");
    if (ui->checkBoxBorrowed->checkState() == Qt::Checked)
        command += (command.endsWith("where")?"":" and") + QString(" (borrowed between :borrowedless and :borrowedmore)");
    if (ui->checkBoxFines->checkState() == Qt::Checked)
        command += (command.endsWith("where")?"":" and") + QString(" (fine between :fineless and :finemore)");
    if (ui->checkBoxType->checkState() == Qt::Checked)
        command += (command.endsWith("where")?"":" and") + QString(" (type = :type)");
    for (i = 1; i <= ConditionNum; i++)
    {
        switch (i) {
        case 1:
            command += command.endsWith("where") ? "" : (ui->comboBoxItemAON_1->currentText()=="And" ? QString(" and (") : QString(" or ("));
            if (ui->comboBoxAcc_1->currentText() == "Precise")
                command += QString("%1 = '%2')").arg(items[ui->comboBoxItem_1->currentIndex()]).arg(ui->lineEditKey1_1->text());
            else if (ui->comboBoxAcc_1->currentText() == "Fuzzy")
                command += QString("%1 like '%2%3%4')").arg(items[ui->comboBoxItem_1->currentIndex()]).arg("%").arg(ui->lineEditKey1_1->text()).arg("%");
            break;
        case 2:
            command += command.endsWith("where") ? "" : (ui->comboBoxItemAON_2->currentText() == "And" ? QString(" and (") : QString(" or ("));
            if (ui->comboBoxAcc_2->currentText() == "Precise")
                command += QString("%1 = '%2')").arg(items[ui->comboBoxItem_2->currentIndex()]).arg(ui->lineEditKey1_2->text());
            else if (ui->comboBoxAcc_2->currentText() == "Fuzzy")
                command += QString("%1 like '%2%3%4')").arg(items[ui->comboBoxItem_2->currentIndex()]).arg("%").arg(ui->lineEditKey1_2->text()).arg("%");
            break;
        case 3:
            command += command.endsWith("where") ? "" : (ui->comboBoxItemAON_3->currentText() == "And" ? QString(" and (") : QString(" or ("));
            if (ui->comboBoxAcc_3->currentText() == "Precise")
                command += QString("%1 = '%2')").arg(items[ui->comboBoxItem_3->currentIndex()]).arg(ui->lineEditKey1_3->text());
            else if (ui->comboBoxAcc_3->currentText() == "Fuzzy")
                command += QString("%1 like '%2%3%4')").arg(items[ui->comboBoxItem_3->currentIndex()]).arg("%").arg(ui->lineEditKey1_3->text()).arg("%");
            break;
        case 4:
            command += command.endsWith("where") ? "" : (ui->comboBoxItemAON_4->currentText() == "And" ? QString(" and (") : QString(" or ("));
            if (ui->comboBoxAcc_4->currentText() == "Precise")
                command += QString("%1 = '%2')").arg(items[ui->comboBoxItem_4->currentIndex()]).arg(ui->lineEditKey1_4->text());
            else if (ui->comboBoxAcc_4->currentText() == "Fuzzy")
                command += QString("%1 like '%2%3%4')").arg(items[ui->comboBoxItem_4->currentIndex()]).arg("%").arg(ui->lineEditKey1_4->text()).arg("%");
            break;
        default:
            break;
        }
    }
    if (command.endsWith("where"))
        command.remove(" where");
    query->prepare(command);
    if (ui->checkBoxBorrowed->checkState() == Qt::Checked)
    {
        query->bindValue(":borrowedless", ui->spinBoxLess->value());
        query->bindValue(":borrowedmore", ui->spinBoxMore->value());
    }
    if (ui->checkBoxFines->checkState() == Qt::Checked)
    {
        query->bindValue(":finemore", ui->doubleSpinBoxLess->value());
        query->bindValue(":fineless", ui->doubleSpinBoxMore->value());
    }
    if (ui->checkBoxType->checkState() == Qt::Checked)
        query->bindValue(":type", ui->comboBoxType->currentText());
    return 1;
}

void AdminReaderInquireDialog::AddCondition()
{
    if (ConditionNum < 4)
    {
        ConditionNum += 1;
        ShowConditionSet(ConditionNum);
    }
}

void AdminReaderInquireDialog::PlusCondition()
{
    if (ConditionNum > 0)
    {
        HideConditionSet(ConditionNum);
        ConditionNum -= 1;
    }
}

void AdminReaderInquireDialog::BorrowedCondition(int state)
{
    if (state == Qt::Checked)
    {
        ui->spinBoxLess->setEnabled(true);
        ui->spinBoxMore->setEnabled(true);
    }
    else if (state == Qt::Unchecked)
    {
        ui->spinBoxLess->setEnabled(false);
        ui->spinBoxMore->setEnabled(false);
    }
}

void AdminReaderInquireDialog::FinesCondition(int state)
{
    if (state == Qt::Checked)
    {
        ui->doubleSpinBoxLess->setEnabled(true);
        ui->doubleSpinBoxMore->setEnabled(true);
    }
    else if (state == Qt::Unchecked)
    {
        ui->doubleSpinBoxLess->setEnabled(false);
        ui->doubleSpinBoxMore->setEnabled(false);
    }
}

void AdminReaderInquireDialog::TypeCondition(int state)
{
    if (state == Qt::Checked)
        ui->comboBoxType->setEnabled(true);
    else if (state == Qt::Unchecked)
        ui->comboBoxType->setEnabled(false);
}

void AdminReaderInquireDialog::ShowConditionSet(int conditionNum)
{
    switch (conditionNum)
    {
        case 1:
            ui->comboBoxItemAON_1->setVisible(true);
            ui->comboBoxItem_1->setVisible(true);
            ui->lineEditKey1_1->setVisible(true);
            ui->comboBoxAcc_1->setVisible(true);
            break;
        case 2:
            ui->comboBoxItemAON_2->setVisible(true);
            ui->comboBoxItem_2->setVisible(true);
            ui->lineEditKey1_2->setVisible(true);
            ui->comboBoxAcc_2->setVisible(true);
            break;
        case 3:
            ui->comboBoxItemAON_3->setVisible(true);
            ui->comboBoxItem_3->setVisible(true);
            ui->lineEditKey1_3->setVisible(true);
            ui->comboBoxAcc_3->setVisible(true);
            break;
        case 4:
            ui->comboBoxItemAON_4->setVisible(true);
            ui->comboBoxItem_4->setVisible(true);
            ui->lineEditKey1_4->setVisible(true);
            ui->comboBoxAcc_4->setVisible(true);
            break;
    }
}

void AdminReaderInquireDialog::HideConditionSet(int conditionNum)
{
    switch (conditionNum)
    {
        case 1:
            ui->comboBoxItemAON_1->setVisible(false);
            ui->comboBoxItem_1->setVisible(false);
            ui->lineEditKey1_1->setVisible(false);
            ui->comboBoxAcc_1->setVisible(false);
            break;
        case 2:
            ui->comboBoxItemAON_2->setVisible(false);
            ui->comboBoxItem_2->setVisible(false);
            ui->lineEditKey1_2->setVisible(false);
            ui->comboBoxAcc_2->setVisible(false);
            break;
        case 3:
            ui->comboBoxItemAON_3->setVisible(false);
            ui->comboBoxItem_3->setVisible(false);
            ui->lineEditKey1_3->setVisible(false);
            ui->comboBoxAcc_3->setVisible(false);
            break;
        case 4:
            ui->comboBoxItemAON_4->setVisible(false);
            ui->comboBoxItem_4->setVisible(false);
            ui->lineEditKey1_4->setVisible(false);
            ui->comboBoxAcc_4->setVisible(false);
            break;
    }
}

#include "readerinquiredialog.h"
#include "ui_readerinquiredialog.h"

ReaderInquireDialog::ReaderInquireDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ReaderInquireDialog)
{
    int i;
    ui->setupUi(this);

    setWindowTitle("Inquire the books you want to borrow");

    connect(ui->pushButtonConfirm, SIGNAL(released()), this, SLOT(accept()));
    connect(ui->pushButtonCancel, SIGNAL(released()), this, SLOT(reject()));
    connect(ui->pushButtonAdd, SIGNAL(released()), this, SLOT(AddCondition()));
    connect(ui->pushButtonPlus, SIGNAL(released()), this, SLOT(PlusCondition()));
    connect(ui->checkBoxPubdate, SIGNAL(stateChanged(int)), this, SLOT(PubdateCondition(int)));
    connect(ui->checkBoxPages, SIGNAL(stateChanged(int)), this, SLOT(PagesCondition(int)));

    ConditionNum = 0;
    for (i = 1; i <= 7; i++)
        HideConditionSet(i);
}

int ReaderInquireDialog::myExec(QSqlQuery *query)
{
    this->query = query;
    return exec();
}

int ReaderInquireDialog::SetSelectQuery()
{
    int i;
    QString key1;
    QString key2;
    QString items[7] = {QString("title"), QString("author"), QString("publisher"), QString("pubcity"), QString("isbn"), QString("type"), QString("intro")};
    QString command("select isbn, title, author, date_format(pubdate, '%Y-%m-%d'), publisher, pages, curnum from Publication where");
    if (ui->checkBoxPubdate->checkState() == Qt::Checked)
        command += (command.endsWith("where")?"":" and") + QString(" (pubdate between :datefrom and :dateto)");
    if (ui->checkBoxPages->checkState() == Qt::Checked)
        command += (command.endsWith("where")?"":" and") + QString(" (pages between :pagesless and :pagesmore)");
    if (ui->checkBoxHasCopy->checkState() == Qt::Checked)
        command += (command.endsWith("where")?"":" and") + QString(" (curnum > 0)");
    for (i = 1; i <= ConditionNum; i++)
    {
        switch (i) {
        case 1:
            command += command.endsWith("where") ? "" : (ui->comboBoxItemAON_1->currentText()=="And" ? QString(" and (") : QString(" or ("));
            if (ui->comboBoxAcc_1->currentText() == "Precise")
            {
                key1 = QString("%1 = '%2'").arg(items[ui->comboBoxItem_1->currentIndex()]).arg(ui->lineEditKey1_1->text());
                key2 = QString(" %1 = '%2'").arg(items[ui->comboBoxItem_1->currentIndex()]).arg(ui->lineEditKey2_1->text());
            }
            else if (ui->comboBoxAcc_1->currentText() == "Fuzzy")
            {
                key1 = QString("%1 like '%2%3%4'").arg(items[ui->comboBoxItem_1->currentIndex()]).arg("%").arg(ui->lineEditKey1_1->text()).arg("%");
                key2 = QString(" %1 like '%2%3%4'").arg(items[ui->comboBoxItem_1->currentIndex()]).arg("%").arg(ui->lineEditKey2_1->text()).arg("%");
            }
            if (ui->comboBoxAON_1->currentText() == "And")
                command += key1 + QString(" and") + key2;
            else if (ui->comboBoxAON_1->currentText() == "Or")
                command += key1 + QString(" or") + key2;
            else if (ui->comboBoxAON_1->currentText() == "Not")
                command += key1 + QString(" and not") + key2;
            command += QString(")");
            break;
        case 2:
            command += command.endsWith("where") ? "" : (ui->comboBoxItemAON_2->currentText() == "And" ? QString(" and (") : QString(" or ("));
            if (ui->comboBoxAcc_2->currentText() == "Precise")
            {
                key1 = QString("%1 = '%2'").arg(items[ui->comboBoxItem_2->currentIndex()]).arg(ui->lineEditKey1_2->text());
                key2 = QString(" %1 = '%2'").arg(items[ui->comboBoxItem_2->currentIndex()]).arg(ui->lineEditKey2_2->text());
            }
            else if (ui->comboBoxAcc_2->currentText() == "Fuzzy")
            {
                key1 = QString("%1 like '%2%3%4'").arg(items[ui->comboBoxItem_2->currentIndex()]).arg("%").arg(ui->lineEditKey1_2->text()).arg("%");
                key2 = QString(" %1 like '%2%3%4'").arg(items[ui->comboBoxItem_2->currentIndex()]).arg("%").arg(ui->lineEditKey2_2->text()).arg("%");
            }
            if (ui->comboBoxAON_2->currentText() == "And")
                command += key1 + QString(" and") + key2;
            else if (ui->comboBoxAON_2->currentText() == "Or")
                command += key1 + QString(" or") + key2;
            else if (ui->comboBoxAON_2->currentText() == "Not")
                command += key1 + QString(" and not") + key2;
            command += QString(")");
            break;
        case 3:
            command += command.endsWith("where") ? "" : (ui->comboBoxItemAON_3->currentText() == "And" ? QString(" and (") : QString(" or ("));
            if (ui->comboBoxAcc_3->currentText() == "Precise")
            {
                key1 = QString("%1 = '%2'").arg(items[ui->comboBoxItem_3->currentIndex()]).arg(ui->lineEditKey1_3->text());
                key2 = QString(" %1 = '%2'").arg(items[ui->comboBoxItem_3->currentIndex()]).arg(ui->lineEditKey2_3->text());
            }
            else if (ui->comboBoxAcc_3->currentText() == "Fuzzy")
            {
                key1 = QString("%1 like '%2%3%4'").arg(items[ui->comboBoxItem_3->currentIndex()]).arg("%").arg(ui->lineEditKey1_3->text()).arg("%");
                key2 = QString(" %1 like '%2%3%4'").arg(items[ui->comboBoxItem_3->currentIndex()]).arg("%").arg(ui->lineEditKey2_3->text()).arg("%");
            }
            if (ui->comboBoxAON_3->currentText() == "And")
                command += key1 + QString(" and") + key2;
            else if (ui->comboBoxAON_3->currentText() == "Or")
                command += key1 + QString(" or") + key2;
            else if (ui->comboBoxAON_3->currentText() == "Not")
                command += key1 + QString(" and not") + key2;
            command += QString(")");
            break;
        case 4:
            command += command.endsWith("where") ? "" : (ui->comboBoxItemAON_4->currentText() == "And" ? QString(" and (") : QString(" or ("));
            if (ui->comboBoxAcc_4->currentText() == "Precise")
            {
                key1 = QString("%1 = '%2'").arg(items[ui->comboBoxItem_4->currentIndex()]).arg(ui->lineEditKey1_4->text());
                key2 = QString(" %1 = '%2'").arg(items[ui->comboBoxItem_4->currentIndex()]).arg(ui->lineEditKey2_4->text());
            }
            else if (ui->comboBoxAcc_4->currentText() == "Fuzzy")
            {
                key1 = QString("%1 like '%2%3%4'").arg(items[ui->comboBoxItem_4->currentIndex()]).arg("%").arg(ui->lineEditKey1_4->text()).arg("%");
                key2 = QString(" %1 like '%2%3%4'").arg(items[ui->comboBoxItem_4->currentIndex()]).arg("%").arg(ui->lineEditKey2_4->text()).arg("%");
            }
            if (ui->comboBoxAON_4->currentText() == "And")
                command += key1 + QString(" and") + key2;
            else if (ui->comboBoxAON_4->currentText() == "Or")
                command += key1 + QString(" or") + key2;
            else if (ui->comboBoxAON_4->currentText() == "Not")
                command += key1 + QString(" and not") + key2;
            command += QString(")");
            break;
        case 5:
            command += command.endsWith("where") ? "" : (ui->comboBoxItemAON_5->currentText() == "And" ? QString(" and (") : QString(" or ("));
            if (ui->comboBoxAcc_5->currentText() == "Precise")
            {
                key1 = QString("%1 = '%2'").arg(items[ui->comboBoxItem_5->currentIndex()]).arg(ui->lineEditKey1_5->text());
                key2 = QString(" %1 = '%2'").arg(items[ui->comboBoxItem_5->currentIndex()]).arg(ui->lineEditKey2_5->text());
            }
            else if (ui->comboBoxAcc_5->currentText() == "Fuzzy")
            {
                key1 = QString("%1 like '%2%3%4'").arg(items[ui->comboBoxItem_5->currentIndex()]).arg("%").arg(ui->lineEditKey1_5->text()).arg("%");
                key2 = QString(" %1 like '%2%3%4'").arg(items[ui->comboBoxItem_5->currentIndex()]).arg("%").arg(ui->lineEditKey2_5->text()).arg("%");
            }
            if (ui->comboBoxAON_5->currentText() == "And")
                command += key1 + QString(" and") + key2;
            else if (ui->comboBoxAON_5->currentText() == "Or")
                command += key1 + QString(" or") + key2;
            else if (ui->comboBoxAON_5->currentText() == "Not")
                command += key1 + QString(" and not") + key2;
            command += QString(")");
            break;
        case 6:
            command += command.endsWith("where") ? "" : (ui->comboBoxItemAON_6->currentText() == "And" ? QString(" and (") : QString(" or ("));
            if (ui->comboBoxAcc_6->currentText() == "Precise")
            {
                key1 = QString("%1 = '%2'").arg(items[ui->comboBoxItem_6->currentIndex()]).arg(ui->lineEditKey1_6->text());
                key2 = QString(" %1 = '%2'").arg(items[ui->comboBoxItem_6->currentIndex()]).arg(ui->lineEditKey2_6->text());
            }
            else if (ui->comboBoxAcc_6->currentText() == "Fuzzy")
            {
                key1 = QString("%1 like '%2%3%4'").arg(items[ui->comboBoxItem_6->currentIndex()]).arg("%").arg(ui->lineEditKey1_6->text()).arg("%");
                key2 = QString(" %1 like '%2%3%4'").arg(items[ui->comboBoxItem_6->currentIndex()]).arg("%").arg(ui->lineEditKey2_6->text()).arg("%");
            }
            if (ui->comboBoxAON_6->currentText() == "And")
                command += key1 + QString(" and") + key2;
            else if (ui->comboBoxAON_6->currentText() == "Or")
                command += key1 + QString(" or") + key2;
            else if (ui->comboBoxAON_6->currentText() == "Not")
                command += key1 + QString(" and not") + key2;
            command += QString(")");
            break;
        case 7:
            command += command.endsWith("where") ? "" : (ui->comboBoxItemAON_7->currentText() == "And" ? QString(" and (") : QString(" or ("));
            if (ui->comboBoxAcc_7->currentText() == "Precise")
            {
                key1 = QString("%1 = '%2'").arg(items[ui->comboBoxItem_7->currentIndex()]).arg(ui->lineEditKey1_7->text());
                key2 = QString(" %1 = '%2'").arg(items[ui->comboBoxItem_7->currentIndex()]).arg(ui->lineEditKey2_7->text());
            }
            else if (ui->comboBoxAcc_7->currentText() == "Fuzzy")
            {
                key1 = QString("%1 like '%2%3%4'").arg(items[ui->comboBoxItem_7->currentIndex()]).arg("%").arg(ui->lineEditKey1_7->text()).arg("%");
                key2 = QString(" %1 like '%2%3%4'").arg(items[ui->comboBoxItem_7->currentIndex()]).arg("%").arg(ui->lineEditKey2_7->text()).arg("%");
            }
            if (ui->comboBoxAON_7->currentText() == "And")
                command += key1 + QString(" and") + key2;
            else if (ui->comboBoxAON_7->currentText() == "Or")
                command += key1 + QString(" or") + key2;
            else if (ui->comboBoxAON_7->currentText() == "Not")
                command += key1 + QString(" and not") + key2;
            command += QString(")");
            break;
        default:
            break;
        }
    }
    if (command.endsWith("where"))
        command.remove(" where");
    query->prepare(command);
    if (ui->checkBoxPubdate->checkState() == Qt::Checked)
    {
        query->bindValue(":datefrom", ui->dateEditFrom->date());
        query->bindValue(":dateto", ui->dateEditTo->date());
    }
    if (ui->checkBoxPages->checkState() == Qt::Checked)
    {
        query->bindValue(":pagesless", ui->spinBoxLess->value());
        query->bindValue(":pagesmore", ui->spinBoxMore->value());
    }
    return 1;
}

void ReaderInquireDialog::AddCondition()
{
    if (ConditionNum < 7)
    {
        ConditionNum += 1;
        ShowConditionSet(ConditionNum);
    }
}

void ReaderInquireDialog::PlusCondition()
{
    if (ConditionNum > 0)
    {
        HideConditionSet(ConditionNum);
        ConditionNum -= 1;
    }
}

void ReaderInquireDialog::PubdateCondition(int state)
{
    if (state == Qt::Checked)
    {
        ui->dateEditFrom->setEnabled(true);
        ui->dateEditTo->setEnabled(true);
    }
    else if (state == Qt::Unchecked)
    {
        ui->dateEditFrom->setEnabled(false);
        ui->dateEditTo->setEnabled(false);
    }
}

void ReaderInquireDialog::PagesCondition(int state)
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

void ReaderInquireDialog::ShowConditionSet(int conditionNum)
{
    switch (conditionNum)
    {
        case 1:
            ui->comboBoxItemAON_1->setVisible(true);
            ui->comboBoxItem_1->setVisible(true);
            ui->lineEditKey1_1->setVisible(true);
            ui->comboBoxAON_1->setVisible(true);
            ui->lineEditKey2_1->setVisible(true);
            ui->comboBoxAcc_1->setVisible(true);
            break;
        case 2:
            ui->comboBoxItemAON_2->setVisible(true);
            ui->comboBoxItem_2->setVisible(true);
            ui->lineEditKey1_2->setVisible(true);
            ui->comboBoxAON_2->setVisible(true);
            ui->lineEditKey2_2->setVisible(true);
            ui->comboBoxAcc_2->setVisible(true);
            break;
        case 3:
            ui->comboBoxItemAON_3->setVisible(true);
            ui->comboBoxItem_3->setVisible(true);
            ui->lineEditKey1_3->setVisible(true);
            ui->comboBoxAON_3->setVisible(true);
            ui->lineEditKey2_3->setVisible(true);
            ui->comboBoxAcc_3->setVisible(true);
            break;
        case 4:
            ui->comboBoxItemAON_4->setVisible(true);
            ui->comboBoxItem_4->setVisible(true);
            ui->lineEditKey1_4->setVisible(true);
            ui->comboBoxAON_4->setVisible(true);
            ui->lineEditKey2_4->setVisible(true);
            ui->comboBoxAcc_4->setVisible(true);
            break;
        case 5:
            ui->comboBoxItemAON_5->setVisible(true);
            ui->comboBoxItem_5->setVisible(true);
            ui->lineEditKey1_5->setVisible(true);
            ui->comboBoxAON_5->setVisible(true);
            ui->lineEditKey2_5->setVisible(true);
            ui->comboBoxAcc_5->setVisible(true);
            break;
        case 6:
            ui->comboBoxItemAON_6->setVisible(true);
            ui->comboBoxItem_6->setVisible(true);
            ui->lineEditKey1_6->setVisible(true);
            ui->comboBoxAON_6->setVisible(true);
            ui->lineEditKey2_6->setVisible(true);
            ui->comboBoxAcc_6->setVisible(true);
            break;
        case 7:
            ui->comboBoxItemAON_7->setVisible(true);
            ui->comboBoxItem_7->setVisible(true);
            ui->lineEditKey1_7->setVisible(true);
            ui->comboBoxAON_7->setVisible(true);
            ui->lineEditKey2_7->setVisible(true);
            ui->comboBoxAcc_7->setVisible(true);
            break;
    }
}

void ReaderInquireDialog::HideConditionSet(int conditionNum)
{
    switch (conditionNum)
    {
        case 1:
            ui->comboBoxItemAON_1->setVisible(false);
            ui->comboBoxItem_1->setVisible(false);
            ui->lineEditKey1_1->setVisible(false);
            ui->comboBoxAON_1->setVisible(false);
            ui->lineEditKey2_1->setVisible(false);
            ui->comboBoxAcc_1->setVisible(false);
            break;
        case 2:
            ui->comboBoxItemAON_2->setVisible(false);
            ui->comboBoxItem_2->setVisible(false);
            ui->lineEditKey1_2->setVisible(false);
            ui->comboBoxAON_2->setVisible(false);
            ui->lineEditKey2_2->setVisible(false);
            ui->comboBoxAcc_2->setVisible(false);
            break;
        case 3:
            ui->comboBoxItemAON_3->setVisible(false);
            ui->comboBoxItem_3->setVisible(false);
            ui->lineEditKey1_3->setVisible(false);
            ui->comboBoxAON_3->setVisible(false);
            ui->lineEditKey2_3->setVisible(false);
            ui->comboBoxAcc_3->setVisible(false);
            break;
        case 4:
            ui->comboBoxItemAON_4->setVisible(false);
            ui->comboBoxItem_4->setVisible(false);
            ui->lineEditKey1_4->setVisible(false);
            ui->comboBoxAON_4->setVisible(false);
            ui->lineEditKey2_4->setVisible(false);
            ui->comboBoxAcc_4->setVisible(false);
            break;
        case 5:
            ui->comboBoxItemAON_5->setVisible(false);
            ui->comboBoxItem_5->setVisible(false);
            ui->lineEditKey1_5->setVisible(false);
            ui->comboBoxAON_5->setVisible(false);
            ui->lineEditKey2_5->setVisible(false);
            ui->comboBoxAcc_5->setVisible(false);
            break;
        case 6:
            ui->comboBoxItemAON_6->setVisible(false);
            ui->comboBoxItem_6->setVisible(false);
            ui->lineEditKey1_6->setVisible(false);
            ui->comboBoxAON_6->setVisible(false);
            ui->lineEditKey2_6->setVisible(false);
            ui->comboBoxAcc_6->setVisible(false);
            break;
        case 7:
            ui->comboBoxItemAON_7->setVisible(false);
            ui->comboBoxItem_7->setVisible(false);
            ui->lineEditKey1_7->setVisible(false);
            ui->comboBoxAON_7->setVisible(false);
            ui->lineEditKey2_7->setVisible(false);
            ui->comboBoxAcc_7->setVisible(false);
            break;
    }
}

ReaderInquireDialog::~ReaderInquireDialog()
{
    delete ui;
}

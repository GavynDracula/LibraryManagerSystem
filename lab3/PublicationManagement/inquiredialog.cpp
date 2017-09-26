#include "inquiredialog.h"
#include "ui_inquiredialog.h"

InquireDialog::InquireDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InquireDialog)
{
    ui->setupUi(this);

    this->setWindowTitle("Publication Data Inquire");

    connect(ui->pushButtonConfirm, SIGNAL(released()), this, SLOT(accept()));
    connect(ui->pushButtonCancel, SIGNAL(released()), this, SLOT(reject()));
    connect(ui->pushButtonAdd, SIGNAL(released()), this, SLOT(AddCondition()));
    connect(ui->pushButtonPlus, SIGNAL(released()), this, SLOT(PlusCondition()));
    connect(ui->checkBoxPubdate, SIGNAL(stateChanged(int)), this, SLOT(PubdateCondition(int)));
    connect(ui->checkBoxPages, SIGNAL(stateChanged(int)), this, SLOT(PagesCondition(int)));

    ConditionNum = 0;
    HideConditionSet(1);
    HideConditionSet(2);
    HideConditionSet(3);
    HideConditionSet(4);
    HideConditionSet(5);
}

int InquireDialog::myExec(QSqlQuery* query)
{
    this->query = query;
    return exec();
}

int InquireDialog::SetSelectQuery()
{
    int i;
    QString key1;
    QString key2;
    QString items[5] = {QString("title"), QString("author"), QString("publisher"), QString("pubcity"), QString("id")};
    QString command("select title, author, date_format(pubdate, '%Y-%m-%d'), publisher, pubcity, pages, id from Books where (pages >= 0)");
    if (ui->checkBoxPubdate->checkState() == Qt::Checked)
        command += QString(" and (pubdate between :datefrom and :dateto)");
    if (ui->checkBoxPages->checkState() == Qt::Checked)
        command += QString(" and (pages between :pagesless and :pagesmore)");
    for (i = 1; i <= ConditionNum; i++)
    {
        switch (i)
        {
            case 1:
                command += ui->comboBoxItemAON_1->currentText() == "And" ? QString(" and (") : QString(" or (");
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
                command += ui->comboBoxItemAON_2->currentText() == "And" ? QString(" and (") : QString(" or (");
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
                command += ui->comboBoxItemAON_3->currentText() == "And" ? QString(" and (") : QString(" or (");
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
                command += ui->comboBoxItemAON_4->currentText() == "And" ? QString(" and (") : QString(" or (");
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
                command += ui->comboBoxItemAON_5->currentText() == "And" ? QString(" and (") : QString(" or (");
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
        }
    }
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
//    qDebug()<<query->lastQuery();
    return 1;
}

void InquireDialog::AddCondition()
{
    if (ConditionNum < 5)
    {
        ConditionNum += 1;
        ShowConditionSet(ConditionNum);
    }
    return;
}

void InquireDialog::PlusCondition()
{
    if (ConditionNum > 0)
    {
        HideConditionSet(ConditionNum);
        ConditionNum -= 1;
    }
    return;
}

void InquireDialog::PubdateCondition(int state)
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
    return;
}

void InquireDialog::PagesCondition(int state)
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
    return;
}

void InquireDialog::ShowConditionSet(int conditionNum)
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
    }
    return;
}

void InquireDialog::HideConditionSet(int conditionNum)
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
    }
    return;
}

InquireDialog::~InquireDialog()
{
    delete ui;
}

/********************************************************************************
** Form generated from reading UI file 'readerinquiredialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_READERINQUIREDIALOG_H
#define UI_READERINQUIREDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_ReaderInquireDialog
{
public:
    QLineEdit *lineEditKey2_1;
    QPushButton *pushButtonPlus;
    QLabel *label_5;
    QComboBox *comboBoxAcc_4;
    QComboBox *comboBoxAcc_2;
    QLineEdit *lineEditKey2_3;
    QComboBox *comboBoxItem_3;
    QPushButton *pushButtonCancel;
    QLineEdit *lineEditKey1_5;
    QSpinBox *spinBoxMore;
    QLabel *label_10;
    QComboBox *comboBoxAcc_1;
    QLineEdit *lineEditKey2_5;
    QComboBox *comboBoxItemAON_2;
    QComboBox *comboBoxAON_5;
    QLineEdit *lineEditKey1_2;
    QComboBox *comboBoxAON_4;
    QPushButton *pushButtonAdd;
    QLabel *label_2;
    QComboBox *comboBoxAcc_5;
    QLineEdit *lineEditKey1_3;
    QSpinBox *spinBoxLess;
    QLineEdit *lineEditKey2_4;
    QComboBox *comboBoxItemAON_1;
    QComboBox *comboBoxItem_1;
    QComboBox *comboBoxItem_5;
    QLabel *label_12;
    QPushButton *pushButtonConfirm;
    QComboBox *comboBoxAON_1;
    QDateEdit *dateEditFrom;
    QDateEdit *dateEditTo;
    QCheckBox *checkBoxPubdate;
    QLineEdit *lineEditKey1_1;
    QLabel *label_11;
    QLineEdit *lineEditKey1_4;
    QCheckBox *checkBoxPages;
    QComboBox *comboBoxAcc_3;
    QComboBox *comboBoxItem_4;
    QComboBox *comboBoxAON_3;
    QComboBox *comboBoxAON_2;
    QLabel *label_3;
    QComboBox *comboBoxItemAON_5;
    QLabel *label_6;
    QLineEdit *lineEditKey2_2;
    QLabel *label_4;
    QComboBox *comboBoxItemAON_3;
    QComboBox *comboBoxItem_2;
    QComboBox *comboBoxItemAON_4;
    QLabel *label;
    QComboBox *comboBoxAcc_6;
    QComboBox *comboBoxItemAON_6;
    QLineEdit *lineEditKey2_6;
    QLineEdit *lineEditKey1_6;
    QComboBox *comboBoxItem_6;
    QComboBox *comboBoxAON_6;
    QLineEdit *lineEditKey2_7;
    QComboBox *comboBoxAON_7;
    QComboBox *comboBoxAcc_7;
    QComboBox *comboBoxItemAON_7;
    QLineEdit *lineEditKey1_7;
    QComboBox *comboBoxItem_7;
    QCheckBox *checkBoxHasCopy;
    QLabel *label_7;

    void setupUi(QDialog *ReaderInquireDialog)
    {
        if (ReaderInquireDialog->objectName().isEmpty())
            ReaderInquireDialog->setObjectName(QStringLiteral("ReaderInquireDialog"));
        ReaderInquireDialog->resize(745, 559);
        lineEditKey2_1 = new QLineEdit(ReaderInquireDialog);
        lineEditKey2_1->setObjectName(QStringLiteral("lineEditKey2_1"));
        lineEditKey2_1->setGeometry(QRect(473, 190, 136, 30));
        pushButtonPlus = new QPushButton(ReaderInquireDialog);
        pushButtonPlus->setObjectName(QStringLiteral("pushButtonPlus"));
        pushButtonPlus->setGeometry(QRect(450, 150, 30, 30));
        QFont font;
        font.setPointSize(12);
        pushButtonPlus->setFont(font);
        label_5 = new QLabel(ReaderInquireDialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(230, 70, 62, 30));
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignCenter);
        comboBoxAcc_4 = new QComboBox(ReaderInquireDialog);
        comboBoxAcc_4->setObjectName(QStringLiteral("comboBoxAcc_4"));
        comboBoxAcc_4->setGeometry(QRect(623, 310, 79, 30));
        comboBoxAcc_4->setFont(font);
        comboBoxAcc_2 = new QComboBox(ReaderInquireDialog);
        comboBoxAcc_2->setObjectName(QStringLiteral("comboBoxAcc_2"));
        comboBoxAcc_2->setGeometry(QRect(623, 230, 79, 30));
        comboBoxAcc_2->setFont(font);
        lineEditKey2_3 = new QLineEdit(ReaderInquireDialog);
        lineEditKey2_3->setObjectName(QStringLiteral("lineEditKey2_3"));
        lineEditKey2_3->setGeometry(QRect(473, 270, 136, 30));
        comboBoxItem_3 = new QComboBox(ReaderInquireDialog);
        comboBoxItem_3->setObjectName(QStringLiteral("comboBoxItem_3"));
        comboBoxItem_3->setGeometry(QRect(110, 270, 125, 30));
        comboBoxItem_3->setFont(font);
        pushButtonCancel = new QPushButton(ReaderInquireDialog);
        pushButtonCancel->setObjectName(QStringLiteral("pushButtonCancel"));
        pushButtonCancel->setGeometry(QRect(470, 490, 131, 41));
        pushButtonCancel->setFont(font);
        lineEditKey1_5 = new QLineEdit(ReaderInquireDialog);
        lineEditKey1_5->setObjectName(QStringLiteral("lineEditKey1_5"));
        lineEditKey1_5->setGeometry(QRect(253, 350, 136, 30));
        spinBoxMore = new QSpinBox(ReaderInquireDialog);
        spinBoxMore->setObjectName(QStringLiteral("spinBoxMore"));
        spinBoxMore->setEnabled(false);
        spinBoxMore->setGeometry(QRect(522, 70, 136, 30));
        spinBoxMore->setFont(font);
        spinBoxMore->setAlignment(Qt::AlignCenter);
        spinBoxMore->setMaximum(9999);
        label_10 = new QLabel(ReaderInquireDialog);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(80, 150, 122, 30));
        label_10->setFont(font);
        label_10->setAlignment(Qt::AlignCenter);
        comboBoxAcc_1 = new QComboBox(ReaderInquireDialog);
        comboBoxAcc_1->setObjectName(QStringLiteral("comboBoxAcc_1"));
        comboBoxAcc_1->setGeometry(QRect(623, 190, 79, 30));
        comboBoxAcc_1->setFont(font);
        lineEditKey2_5 = new QLineEdit(ReaderInquireDialog);
        lineEditKey2_5->setObjectName(QStringLiteral("lineEditKey2_5"));
        lineEditKey2_5->setGeometry(QRect(473, 350, 136, 30));
        comboBoxItemAON_2 = new QComboBox(ReaderInquireDialog);
        comboBoxItemAON_2->setObjectName(QStringLiteral("comboBoxItemAON_2"));
        comboBoxItemAON_2->setGeometry(QRect(43, 230, 56, 30));
        comboBoxItemAON_2->setFont(font);
        comboBoxAON_5 = new QComboBox(ReaderInquireDialog);
        comboBoxAON_5->setObjectName(QStringLiteral("comboBoxAON_5"));
        comboBoxAON_5->setGeometry(QRect(403, 350, 56, 30));
        comboBoxAON_5->setFont(font);
        lineEditKey1_2 = new QLineEdit(ReaderInquireDialog);
        lineEditKey1_2->setObjectName(QStringLiteral("lineEditKey1_2"));
        lineEditKey1_2->setGeometry(QRect(253, 230, 136, 30));
        comboBoxAON_4 = new QComboBox(ReaderInquireDialog);
        comboBoxAON_4->setObjectName(QStringLiteral("comboBoxAON_4"));
        comboBoxAON_4->setGeometry(QRect(403, 310, 56, 30));
        comboBoxAON_4->setFont(font);
        pushButtonAdd = new QPushButton(ReaderInquireDialog);
        pushButtonAdd->setObjectName(QStringLiteral("pushButtonAdd"));
        pushButtonAdd->setGeometry(QRect(230, 150, 30, 30));
        pushButtonAdd->setFont(font);
        label_2 = new QLabel(ReaderInquireDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(230, 30, 61, 30));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);
        comboBoxAcc_5 = new QComboBox(ReaderInquireDialog);
        comboBoxAcc_5->setObjectName(QStringLiteral("comboBoxAcc_5"));
        comboBoxAcc_5->setGeometry(QRect(623, 350, 79, 30));
        comboBoxAcc_5->setFont(font);
        lineEditKey1_3 = new QLineEdit(ReaderInquireDialog);
        lineEditKey1_3->setObjectName(QStringLiteral("lineEditKey1_3"));
        lineEditKey1_3->setGeometry(QRect(253, 270, 136, 30));
        spinBoxLess = new QSpinBox(ReaderInquireDialog);
        spinBoxLess->setObjectName(QStringLiteral("spinBoxLess"));
        spinBoxLess->setEnabled(false);
        spinBoxLess->setGeometry(QRect(320, 70, 136, 30));
        spinBoxLess->setFont(font);
        spinBoxLess->setAlignment(Qt::AlignCenter);
        spinBoxLess->setMaximum(9999);
        lineEditKey2_4 = new QLineEdit(ReaderInquireDialog);
        lineEditKey2_4->setObjectName(QStringLiteral("lineEditKey2_4"));
        lineEditKey2_4->setGeometry(QRect(473, 310, 136, 30));
        comboBoxItemAON_1 = new QComboBox(ReaderInquireDialog);
        comboBoxItemAON_1->setObjectName(QStringLiteral("comboBoxItemAON_1"));
        comboBoxItemAON_1->setGeometry(QRect(43, 190, 56, 30));
        comboBoxItemAON_1->setFont(font);
        comboBoxItem_1 = new QComboBox(ReaderInquireDialog);
        comboBoxItem_1->setObjectName(QStringLiteral("comboBoxItem_1"));
        comboBoxItem_1->setGeometry(QRect(110, 190, 125, 30));
        comboBoxItem_1->setFont(font);
        comboBoxItem_5 = new QComboBox(ReaderInquireDialog);
        comboBoxItem_5->setObjectName(QStringLiteral("comboBoxItem_5"));
        comboBoxItem_5->setGeometry(QRect(110, 350, 125, 30));
        comboBoxItem_5->setFont(font);
        label_12 = new QLabel(ReaderInquireDialog);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(500, 150, 161, 30));
        label_12->setFont(font);
        label_12->setAlignment(Qt::AlignCenter);
        pushButtonConfirm = new QPushButton(ReaderInquireDialog);
        pushButtonConfirm->setObjectName(QStringLiteral("pushButtonConfirm"));
        pushButtonConfirm->setGeometry(QRect(150, 490, 131, 41));
        pushButtonConfirm->setFont(font);
        comboBoxAON_1 = new QComboBox(ReaderInquireDialog);
        comboBoxAON_1->setObjectName(QStringLiteral("comboBoxAON_1"));
        comboBoxAON_1->setGeometry(QRect(403, 190, 56, 30));
        comboBoxAON_1->setFont(font);
        dateEditFrom = new QDateEdit(ReaderInquireDialog);
        dateEditFrom->setObjectName(QStringLiteral("dateEditFrom"));
        dateEditFrom->setEnabled(false);
        dateEditFrom->setGeometry(QRect(320, 30, 136, 30));
        dateEditFrom->setFont(font);
        dateEditFrom->setAlignment(Qt::AlignCenter);
        dateEditFrom->setCalendarPopup(true);
        dateEditTo = new QDateEdit(ReaderInquireDialog);
        dateEditTo->setObjectName(QStringLiteral("dateEditTo"));
        dateEditTo->setEnabled(false);
        dateEditTo->setGeometry(QRect(522, 30, 136, 30));
        dateEditTo->setFont(font);
        dateEditTo->setAlignment(Qt::AlignCenter);
        dateEditTo->setCalendarPopup(true);
        checkBoxPubdate = new QCheckBox(ReaderInquireDialog);
        checkBoxPubdate->setObjectName(QStringLiteral("checkBoxPubdate"));
        checkBoxPubdate->setGeometry(QRect(50, 30, 21, 32));
        lineEditKey1_1 = new QLineEdit(ReaderInquireDialog);
        lineEditKey1_1->setObjectName(QStringLiteral("lineEditKey1_1"));
        lineEditKey1_1->setGeometry(QRect(253, 190, 136, 30));
        label_11 = new QLabel(ReaderInquireDialog);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(276, 150, 161, 30));
        label_11->setFont(font);
        label_11->setAlignment(Qt::AlignCenter);
        lineEditKey1_4 = new QLineEdit(ReaderInquireDialog);
        lineEditKey1_4->setObjectName(QStringLiteral("lineEditKey1_4"));
        lineEditKey1_4->setGeometry(QRect(253, 310, 136, 30));
        checkBoxPages = new QCheckBox(ReaderInquireDialog);
        checkBoxPages->setObjectName(QStringLiteral("checkBoxPages"));
        checkBoxPages->setGeometry(QRect(50, 70, 21, 32));
        comboBoxAcc_3 = new QComboBox(ReaderInquireDialog);
        comboBoxAcc_3->setObjectName(QStringLiteral("comboBoxAcc_3"));
        comboBoxAcc_3->setGeometry(QRect(623, 270, 79, 30));
        comboBoxAcc_3->setFont(font);
        comboBoxItem_4 = new QComboBox(ReaderInquireDialog);
        comboBoxItem_4->setObjectName(QStringLiteral("comboBoxItem_4"));
        comboBoxItem_4->setGeometry(QRect(110, 310, 125, 30));
        comboBoxItem_4->setFont(font);
        comboBoxAON_3 = new QComboBox(ReaderInquireDialog);
        comboBoxAON_3->setObjectName(QStringLiteral("comboBoxAON_3"));
        comboBoxAON_3->setGeometry(QRect(403, 270, 56, 30));
        comboBoxAON_3->setFont(font);
        comboBoxAON_2 = new QComboBox(ReaderInquireDialog);
        comboBoxAON_2->setObjectName(QStringLiteral("comboBoxAON_2"));
        comboBoxAON_2->setGeometry(QRect(403, 230, 56, 30));
        comboBoxAON_2->setFont(font);
        label_3 = new QLabel(ReaderInquireDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(475, 30, 31, 30));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);
        comboBoxItemAON_5 = new QComboBox(ReaderInquireDialog);
        comboBoxItemAON_5->setObjectName(QStringLiteral("comboBoxItemAON_5"));
        comboBoxItemAON_5->setGeometry(QRect(43, 350, 56, 30));
        comboBoxItemAON_5->setFont(font);
        label_6 = new QLabel(ReaderInquireDialog);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(475, 70, 31, 30));
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignCenter);
        lineEditKey2_2 = new QLineEdit(ReaderInquireDialog);
        lineEditKey2_2->setObjectName(QStringLiteral("lineEditKey2_2"));
        lineEditKey2_2->setGeometry(QRect(473, 230, 136, 30));
        label_4 = new QLabel(ReaderInquireDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(80, 70, 122, 30));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);
        comboBoxItemAON_3 = new QComboBox(ReaderInquireDialog);
        comboBoxItemAON_3->setObjectName(QStringLiteral("comboBoxItemAON_3"));
        comboBoxItemAON_3->setGeometry(QRect(43, 270, 56, 30));
        comboBoxItemAON_3->setFont(font);
        comboBoxItem_2 = new QComboBox(ReaderInquireDialog);
        comboBoxItem_2->setObjectName(QStringLiteral("comboBoxItem_2"));
        comboBoxItem_2->setGeometry(QRect(110, 230, 125, 30));
        comboBoxItem_2->setFont(font);
        comboBoxItemAON_4 = new QComboBox(ReaderInquireDialog);
        comboBoxItemAON_4->setObjectName(QStringLiteral("comboBoxItemAON_4"));
        comboBoxItemAON_4->setGeometry(QRect(43, 310, 56, 30));
        comboBoxItemAON_4->setFont(font);
        label = new QLabel(ReaderInquireDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 30, 122, 30));
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        comboBoxAcc_6 = new QComboBox(ReaderInquireDialog);
        comboBoxAcc_6->setObjectName(QStringLiteral("comboBoxAcc_6"));
        comboBoxAcc_6->setGeometry(QRect(623, 390, 79, 30));
        comboBoxAcc_6->setFont(font);
        comboBoxItemAON_6 = new QComboBox(ReaderInquireDialog);
        comboBoxItemAON_6->setObjectName(QStringLiteral("comboBoxItemAON_6"));
        comboBoxItemAON_6->setGeometry(QRect(43, 390, 56, 30));
        comboBoxItemAON_6->setFont(font);
        lineEditKey2_6 = new QLineEdit(ReaderInquireDialog);
        lineEditKey2_6->setObjectName(QStringLiteral("lineEditKey2_6"));
        lineEditKey2_6->setGeometry(QRect(473, 390, 136, 30));
        lineEditKey1_6 = new QLineEdit(ReaderInquireDialog);
        lineEditKey1_6->setObjectName(QStringLiteral("lineEditKey1_6"));
        lineEditKey1_6->setGeometry(QRect(253, 390, 136, 30));
        comboBoxItem_6 = new QComboBox(ReaderInquireDialog);
        comboBoxItem_6->setObjectName(QStringLiteral("comboBoxItem_6"));
        comboBoxItem_6->setGeometry(QRect(110, 390, 125, 30));
        comboBoxItem_6->setFont(font);
        comboBoxAON_6 = new QComboBox(ReaderInquireDialog);
        comboBoxAON_6->setObjectName(QStringLiteral("comboBoxAON_6"));
        comboBoxAON_6->setGeometry(QRect(403, 390, 56, 30));
        comboBoxAON_6->setFont(font);
        lineEditKey2_7 = new QLineEdit(ReaderInquireDialog);
        lineEditKey2_7->setObjectName(QStringLiteral("lineEditKey2_7"));
        lineEditKey2_7->setGeometry(QRect(473, 430, 136, 30));
        comboBoxAON_7 = new QComboBox(ReaderInquireDialog);
        comboBoxAON_7->setObjectName(QStringLiteral("comboBoxAON_7"));
        comboBoxAON_7->setGeometry(QRect(403, 430, 56, 30));
        comboBoxAON_7->setFont(font);
        comboBoxAcc_7 = new QComboBox(ReaderInquireDialog);
        comboBoxAcc_7->setObjectName(QStringLiteral("comboBoxAcc_7"));
        comboBoxAcc_7->setGeometry(QRect(623, 430, 79, 30));
        comboBoxAcc_7->setFont(font);
        comboBoxItemAON_7 = new QComboBox(ReaderInquireDialog);
        comboBoxItemAON_7->setObjectName(QStringLiteral("comboBoxItemAON_7"));
        comboBoxItemAON_7->setGeometry(QRect(43, 430, 56, 30));
        comboBoxItemAON_7->setFont(font);
        lineEditKey1_7 = new QLineEdit(ReaderInquireDialog);
        lineEditKey1_7->setObjectName(QStringLiteral("lineEditKey1_7"));
        lineEditKey1_7->setGeometry(QRect(253, 430, 136, 30));
        comboBoxItem_7 = new QComboBox(ReaderInquireDialog);
        comboBoxItem_7->setObjectName(QStringLiteral("comboBoxItem_7"));
        comboBoxItem_7->setGeometry(QRect(110, 430, 125, 30));
        comboBoxItem_7->setFont(font);
        checkBoxHasCopy = new QCheckBox(ReaderInquireDialog);
        checkBoxHasCopy->setObjectName(QStringLiteral("checkBoxHasCopy"));
        checkBoxHasCopy->setGeometry(QRect(50, 110, 21, 32));
        label_7 = new QLabel(ReaderInquireDialog);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(80, 110, 601, 30));
        label_7->setFont(font);
        label_7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        retranslateUi(ReaderInquireDialog);

        QMetaObject::connectSlotsByName(ReaderInquireDialog);
    } // setupUi

    void retranslateUi(QDialog *ReaderInquireDialog)
    {
        ReaderInquireDialog->setWindowTitle(QApplication::translate("ReaderInquireDialog", "Dialog", 0));
        pushButtonPlus->setText(QApplication::translate("ReaderInquireDialog", "-", 0));
        label_5->setText(QApplication::translate("ReaderInquireDialog", "Between", 0));
        comboBoxAcc_4->clear();
        comboBoxAcc_4->insertItems(0, QStringList()
         << QApplication::translate("ReaderInquireDialog", "Precise", 0)
         << QApplication::translate("ReaderInquireDialog", "Fuzzy", 0)
        );
        comboBoxAcc_2->clear();
        comboBoxAcc_2->insertItems(0, QStringList()
         << QApplication::translate("ReaderInquireDialog", "Precise", 0)
         << QApplication::translate("ReaderInquireDialog", "Fuzzy", 0)
        );
        comboBoxItem_3->clear();
        comboBoxItem_3->insertItems(0, QStringList()
         << QApplication::translate("ReaderInquireDialog", "Book Title", 0)
         << QApplication::translate("ReaderInquireDialog", "Author", 0)
         << QApplication::translate("ReaderInquireDialog", "Publisher", 0)
         << QApplication::translate("ReaderInquireDialog", "Publisher City", 0)
         << QApplication::translate("ReaderInquireDialog", "ISBN", 0)
         << QApplication::translate("ReaderInquireDialog", "Type", 0)
         << QApplication::translate("ReaderInquireDialog", "Introduction", 0)
        );
        comboBoxItem_3->setCurrentText(QApplication::translate("ReaderInquireDialog", "Book Title", 0));
        pushButtonCancel->setText(QApplication::translate("ReaderInquireDialog", "Cancel", 0));
        label_10->setText(QApplication::translate("ReaderInquireDialog", "Other Options :", 0));
        comboBoxAcc_1->clear();
        comboBoxAcc_1->insertItems(0, QStringList()
         << QApplication::translate("ReaderInquireDialog", "Precise", 0)
         << QApplication::translate("ReaderInquireDialog", "Fuzzy", 0)
        );
        comboBoxItemAON_2->clear();
        comboBoxItemAON_2->insertItems(0, QStringList()
         << QApplication::translate("ReaderInquireDialog", "And", 0)
         << QApplication::translate("ReaderInquireDialog", "Or", 0)
         << QApplication::translate("ReaderInquireDialog", "Not", 0)
        );
        comboBoxAON_5->clear();
        comboBoxAON_5->insertItems(0, QStringList()
         << QApplication::translate("ReaderInquireDialog", "And", 0)
         << QApplication::translate("ReaderInquireDialog", "Or", 0)
         << QApplication::translate("ReaderInquireDialog", "Not", 0)
        );
        comboBoxAON_4->clear();
        comboBoxAON_4->insertItems(0, QStringList()
         << QApplication::translate("ReaderInquireDialog", "And", 0)
         << QApplication::translate("ReaderInquireDialog", "Or", 0)
         << QApplication::translate("ReaderInquireDialog", "Not", 0)
        );
        pushButtonAdd->setText(QApplication::translate("ReaderInquireDialog", "+", 0));
        label_2->setText(QApplication::translate("ReaderInquireDialog", "From", 0));
        comboBoxAcc_5->clear();
        comboBoxAcc_5->insertItems(0, QStringList()
         << QApplication::translate("ReaderInquireDialog", "Precise", 0)
         << QApplication::translate("ReaderInquireDialog", "Fuzzy", 0)
        );
        comboBoxItemAON_1->clear();
        comboBoxItemAON_1->insertItems(0, QStringList()
         << QApplication::translate("ReaderInquireDialog", "And", 0)
         << QApplication::translate("ReaderInquireDialog", "Or", 0)
         << QApplication::translate("ReaderInquireDialog", "Not", 0)
        );
        comboBoxItem_1->clear();
        comboBoxItem_1->insertItems(0, QStringList()
         << QApplication::translate("ReaderInquireDialog", "Book Title", 0)
         << QApplication::translate("ReaderInquireDialog", "Author", 0)
         << QApplication::translate("ReaderInquireDialog", "Publisher", 0)
         << QApplication::translate("ReaderInquireDialog", "Publisher City", 0)
         << QApplication::translate("ReaderInquireDialog", "ISBN", 0)
         << QApplication::translate("ReaderInquireDialog", "Type", 0)
         << QApplication::translate("ReaderInquireDialog", "Introduction", 0)
        );
        comboBoxItem_1->setCurrentText(QApplication::translate("ReaderInquireDialog", "Book Title", 0));
        comboBoxItem_5->clear();
        comboBoxItem_5->insertItems(0, QStringList()
         << QApplication::translate("ReaderInquireDialog", "Book Title", 0)
         << QApplication::translate("ReaderInquireDialog", "Author", 0)
         << QApplication::translate("ReaderInquireDialog", "Publisher", 0)
         << QApplication::translate("ReaderInquireDialog", "Publisher City", 0)
         << QApplication::translate("ReaderInquireDialog", "ISBN", 0)
         << QApplication::translate("ReaderInquireDialog", "Type", 0)
         << QApplication::translate("ReaderInquireDialog", "Introduction", 0)
        );
        comboBoxItem_5->setCurrentText(QApplication::translate("ReaderInquireDialog", "Book Title", 0));
        label_12->setText(QApplication::translate("ReaderInquireDialog", "Plus Query Conditon", 0));
        pushButtonConfirm->setText(QApplication::translate("ReaderInquireDialog", "Inquire", 0));
        comboBoxAON_1->clear();
        comboBoxAON_1->insertItems(0, QStringList()
         << QApplication::translate("ReaderInquireDialog", "And", 0)
         << QApplication::translate("ReaderInquireDialog", "Or", 0)
         << QApplication::translate("ReaderInquireDialog", "Not", 0)
        );
        dateEditFrom->setDisplayFormat(QApplication::translate("ReaderInquireDialog", "yyyy-MM-dd", 0));
        dateEditTo->setDisplayFormat(QApplication::translate("ReaderInquireDialog", "yyyy-MM-dd", 0));
        checkBoxPubdate->setText(QString());
        label_11->setText(QApplication::translate("ReaderInquireDialog", "Add Query Conditon", 0));
        checkBoxPages->setText(QString());
        comboBoxAcc_3->clear();
        comboBoxAcc_3->insertItems(0, QStringList()
         << QApplication::translate("ReaderInquireDialog", "Precise", 0)
         << QApplication::translate("ReaderInquireDialog", "Fuzzy", 0)
        );
        comboBoxItem_4->clear();
        comboBoxItem_4->insertItems(0, QStringList()
         << QApplication::translate("ReaderInquireDialog", "Book Title", 0)
         << QApplication::translate("ReaderInquireDialog", "Author", 0)
         << QApplication::translate("ReaderInquireDialog", "Publisher", 0)
         << QApplication::translate("ReaderInquireDialog", "Publisher City", 0)
         << QApplication::translate("ReaderInquireDialog", "ISBN", 0)
         << QApplication::translate("ReaderInquireDialog", "Type", 0)
         << QApplication::translate("ReaderInquireDialog", "Introduction", 0)
        );
        comboBoxItem_4->setCurrentText(QApplication::translate("ReaderInquireDialog", "Book Title", 0));
        comboBoxAON_3->clear();
        comboBoxAON_3->insertItems(0, QStringList()
         << QApplication::translate("ReaderInquireDialog", "And", 0)
         << QApplication::translate("ReaderInquireDialog", "Or", 0)
         << QApplication::translate("ReaderInquireDialog", "Not", 0)
        );
        comboBoxAON_2->clear();
        comboBoxAON_2->insertItems(0, QStringList()
         << QApplication::translate("ReaderInquireDialog", "And", 0)
         << QApplication::translate("ReaderInquireDialog", "Or", 0)
         << QApplication::translate("ReaderInquireDialog", "Not", 0)
        );
        label_3->setText(QApplication::translate("ReaderInquireDialog", "To", 0));
        comboBoxItemAON_5->clear();
        comboBoxItemAON_5->insertItems(0, QStringList()
         << QApplication::translate("ReaderInquireDialog", "And", 0)
         << QApplication::translate("ReaderInquireDialog", "Or", 0)
         << QApplication::translate("ReaderInquireDialog", "Not", 0)
        );
        label_6->setText(QApplication::translate("ReaderInquireDialog", "And", 0));
        label_4->setText(QApplication::translate("ReaderInquireDialog", "Pages :", 0));
        comboBoxItemAON_3->clear();
        comboBoxItemAON_3->insertItems(0, QStringList()
         << QApplication::translate("ReaderInquireDialog", "And", 0)
         << QApplication::translate("ReaderInquireDialog", "Or", 0)
         << QApplication::translate("ReaderInquireDialog", "Not", 0)
        );
        comboBoxItem_2->clear();
        comboBoxItem_2->insertItems(0, QStringList()
         << QApplication::translate("ReaderInquireDialog", "Book Title", 0)
         << QApplication::translate("ReaderInquireDialog", "Author", 0)
         << QApplication::translate("ReaderInquireDialog", "Publisher", 0)
         << QApplication::translate("ReaderInquireDialog", "Publisher City", 0)
         << QApplication::translate("ReaderInquireDialog", "ISBN", 0)
         << QApplication::translate("ReaderInquireDialog", "Type", 0)
         << QApplication::translate("ReaderInquireDialog", "Introduction", 0)
        );
        comboBoxItem_2->setCurrentText(QApplication::translate("ReaderInquireDialog", "Book Title", 0));
        comboBoxItemAON_4->clear();
        comboBoxItemAON_4->insertItems(0, QStringList()
         << QApplication::translate("ReaderInquireDialog", "And", 0)
         << QApplication::translate("ReaderInquireDialog", "Or", 0)
         << QApplication::translate("ReaderInquireDialog", "Not", 0)
        );
        label->setText(QApplication::translate("ReaderInquireDialog", "Publication Date :", 0));
        comboBoxAcc_6->clear();
        comboBoxAcc_6->insertItems(0, QStringList()
         << QApplication::translate("ReaderInquireDialog", "Precise", 0)
         << QApplication::translate("ReaderInquireDialog", "Fuzzy", 0)
        );
        comboBoxItemAON_6->clear();
        comboBoxItemAON_6->insertItems(0, QStringList()
         << QApplication::translate("ReaderInquireDialog", "And", 0)
         << QApplication::translate("ReaderInquireDialog", "Or", 0)
         << QApplication::translate("ReaderInquireDialog", "Not", 0)
        );
        comboBoxItem_6->clear();
        comboBoxItem_6->insertItems(0, QStringList()
         << QApplication::translate("ReaderInquireDialog", "Book Title", 0)
         << QApplication::translate("ReaderInquireDialog", "Author", 0)
         << QApplication::translate("ReaderInquireDialog", "Publisher", 0)
         << QApplication::translate("ReaderInquireDialog", "Publisher City", 0)
         << QApplication::translate("ReaderInquireDialog", "ISBN", 0)
         << QApplication::translate("ReaderInquireDialog", "Type", 0)
         << QApplication::translate("ReaderInquireDialog", "Introduction", 0)
        );
        comboBoxItem_6->setCurrentText(QApplication::translate("ReaderInquireDialog", "Book Title", 0));
        comboBoxAON_6->clear();
        comboBoxAON_6->insertItems(0, QStringList()
         << QApplication::translate("ReaderInquireDialog", "And", 0)
         << QApplication::translate("ReaderInquireDialog", "Or", 0)
         << QApplication::translate("ReaderInquireDialog", "Not", 0)
        );
        comboBoxAON_7->clear();
        comboBoxAON_7->insertItems(0, QStringList()
         << QApplication::translate("ReaderInquireDialog", "And", 0)
         << QApplication::translate("ReaderInquireDialog", "Or", 0)
         << QApplication::translate("ReaderInquireDialog", "Not", 0)
        );
        comboBoxAcc_7->clear();
        comboBoxAcc_7->insertItems(0, QStringList()
         << QApplication::translate("ReaderInquireDialog", "Precise", 0)
         << QApplication::translate("ReaderInquireDialog", "Fuzzy", 0)
        );
        comboBoxItemAON_7->clear();
        comboBoxItemAON_7->insertItems(0, QStringList()
         << QApplication::translate("ReaderInquireDialog", "And", 0)
         << QApplication::translate("ReaderInquireDialog", "Or", 0)
         << QApplication::translate("ReaderInquireDialog", "Not", 0)
        );
        comboBoxItem_7->clear();
        comboBoxItem_7->insertItems(0, QStringList()
         << QApplication::translate("ReaderInquireDialog", "Book Title", 0)
         << QApplication::translate("ReaderInquireDialog", "Author", 0)
         << QApplication::translate("ReaderInquireDialog", "Publisher", 0)
         << QApplication::translate("ReaderInquireDialog", "Publisher City", 0)
         << QApplication::translate("ReaderInquireDialog", "ISBN", 0)
         << QApplication::translate("ReaderInquireDialog", "Type", 0)
         << QApplication::translate("ReaderInquireDialog", "Introduction", 0)
        );
        comboBoxItem_7->setCurrentText(QApplication::translate("ReaderInquireDialog", "Book Title", 0));
        checkBoxHasCopy->setText(QString());
        label_7->setText(QApplication::translate("ReaderInquireDialog", "This book has a copy in library now. You can borrow it immediately without waiting.", 0));
    } // retranslateUi

};

namespace Ui {
    class ReaderInquireDialog: public Ui_ReaderInquireDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_READERINQUIREDIALOG_H

/********************************************************************************
** Form generated from reading UI file 'inquiredialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INQUIREDIALOG_H
#define UI_INQUIREDIALOG_H

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

class Ui_InquireDialog
{
public:
    QComboBox *comboBoxItem_1;
    QLineEdit *lineEditKey1_1;
    QLineEdit *lineEditKey2_1;
    QComboBox *comboBoxAON_1;
    QComboBox *comboBoxAcc_1;
    QLabel *label;
    QDateEdit *dateEditFrom;
    QLabel *label_2;
    QLabel *label_3;
    QDateEdit *dateEditTo;
    QLabel *label_4;
    QLabel *label_5;
    QSpinBox *spinBoxLess;
    QLabel *label_6;
    QSpinBox *spinBoxMore;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QComboBox *comboBoxItem_2;
    QComboBox *comboBoxAON_2;
    QLineEdit *lineEditKey1_2;
    QComboBox *comboBoxAcc_2;
    QLineEdit *lineEditKey2_2;
    QLineEdit *lineEditKey1_3;
    QComboBox *comboBoxAcc_3;
    QComboBox *comboBoxItem_3;
    QComboBox *comboBoxAON_3;
    QLineEdit *lineEditKey2_3;
    QLineEdit *lineEditKey1_4;
    QComboBox *comboBoxAcc_4;
    QComboBox *comboBoxAON_4;
    QLineEdit *lineEditKey2_4;
    QComboBox *comboBoxItem_4;
    QLineEdit *lineEditKey1_5;
    QComboBox *comboBoxAcc_5;
    QComboBox *comboBoxAON_5;
    QLineEdit *lineEditKey2_5;
    QComboBox *comboBoxItem_5;
    QComboBox *comboBoxItemAON_2;
    QComboBox *comboBoxItemAON_3;
    QComboBox *comboBoxItemAON_4;
    QComboBox *comboBoxItemAON_5;
    QPushButton *pushButtonConfirm;
    QPushButton *pushButtonCancel;
    QPushButton *pushButtonAdd;
    QPushButton *pushButtonPlus;
    QCheckBox *checkBoxPubdate;
    QCheckBox *checkBoxPages;
    QComboBox *comboBoxItemAON_1;

    void setupUi(QDialog *InquireDialog)
    {
        if (InquireDialog->objectName().isEmpty())
            InquireDialog->setObjectName(QStringLiteral("InquireDialog"));
        InquireDialog->resize(745, 446);
        comboBoxItem_1 = new QComboBox(InquireDialog);
        comboBoxItem_1->setObjectName(QStringLiteral("comboBoxItem_1"));
        comboBoxItem_1->setGeometry(QRect(100, 160, 125, 32));
        QFont font;
        font.setPointSize(12);
        comboBoxItem_1->setFont(font);
        lineEditKey1_1 = new QLineEdit(InquireDialog);
        lineEditKey1_1->setObjectName(QStringLiteral("lineEditKey1_1"));
        lineEditKey1_1->setGeometry(QRect(243, 160, 136, 32));
        lineEditKey2_1 = new QLineEdit(InquireDialog);
        lineEditKey2_1->setObjectName(QStringLiteral("lineEditKey2_1"));
        lineEditKey2_1->setGeometry(QRect(463, 160, 136, 32));
        comboBoxAON_1 = new QComboBox(InquireDialog);
        comboBoxAON_1->setObjectName(QStringLiteral("comboBoxAON_1"));
        comboBoxAON_1->setGeometry(QRect(393, 160, 56, 32));
        comboBoxAON_1->setFont(font);
        comboBoxAcc_1 = new QComboBox(InquireDialog);
        comboBoxAcc_1->setObjectName(QStringLiteral("comboBoxAcc_1"));
        comboBoxAcc_1->setGeometry(QRect(613, 160, 79, 32));
        comboBoxAcc_1->setFont(font);
        label = new QLabel(InquireDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 40, 122, 32));
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        dateEditFrom = new QDateEdit(InquireDialog);
        dateEditFrom->setObjectName(QStringLiteral("dateEditFrom"));
        dateEditFrom->setEnabled(false);
        dateEditFrom->setGeometry(QRect(310, 40, 136, 32));
        dateEditFrom->setFont(font);
        dateEditFrom->setAlignment(Qt::AlignCenter);
        dateEditFrom->setCalendarPopup(true);
        label_2 = new QLabel(InquireDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(220, 40, 61, 32));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(InquireDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(465, 40, 31, 32));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);
        dateEditTo = new QDateEdit(InquireDialog);
        dateEditTo->setObjectName(QStringLiteral("dateEditTo"));
        dateEditTo->setEnabled(false);
        dateEditTo->setGeometry(QRect(512, 40, 136, 32));
        dateEditTo->setFont(font);
        dateEditTo->setAlignment(Qt::AlignCenter);
        dateEditTo->setCalendarPopup(true);
        label_4 = new QLabel(InquireDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(70, 80, 122, 32));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(InquireDialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(220, 80, 62, 32));
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignCenter);
        spinBoxLess = new QSpinBox(InquireDialog);
        spinBoxLess->setObjectName(QStringLiteral("spinBoxLess"));
        spinBoxLess->setEnabled(false);
        spinBoxLess->setGeometry(QRect(310, 80, 136, 32));
        spinBoxLess->setFont(font);
        spinBoxLess->setAlignment(Qt::AlignCenter);
        spinBoxLess->setMaximum(9999);
        label_6 = new QLabel(InquireDialog);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(465, 80, 31, 32));
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignCenter);
        spinBoxMore = new QSpinBox(InquireDialog);
        spinBoxMore->setObjectName(QStringLiteral("spinBoxMore"));
        spinBoxMore->setEnabled(false);
        spinBoxMore->setGeometry(QRect(512, 80, 136, 32));
        spinBoxMore->setFont(font);
        spinBoxMore->setAlignment(Qt::AlignCenter);
        spinBoxMore->setMaximum(9999);
        label_10 = new QLabel(InquireDialog);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(70, 120, 122, 32));
        label_10->setFont(font);
        label_10->setAlignment(Qt::AlignCenter);
        label_11 = new QLabel(InquireDialog);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(266, 120, 161, 32));
        label_11->setFont(font);
        label_11->setAlignment(Qt::AlignCenter);
        label_12 = new QLabel(InquireDialog);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(490, 120, 161, 32));
        label_12->setFont(font);
        label_12->setAlignment(Qt::AlignCenter);
        comboBoxItem_2 = new QComboBox(InquireDialog);
        comboBoxItem_2->setObjectName(QStringLiteral("comboBoxItem_2"));
        comboBoxItem_2->setGeometry(QRect(100, 200, 125, 32));
        comboBoxItem_2->setFont(font);
        comboBoxAON_2 = new QComboBox(InquireDialog);
        comboBoxAON_2->setObjectName(QStringLiteral("comboBoxAON_2"));
        comboBoxAON_2->setGeometry(QRect(393, 200, 56, 32));
        comboBoxAON_2->setFont(font);
        lineEditKey1_2 = new QLineEdit(InquireDialog);
        lineEditKey1_2->setObjectName(QStringLiteral("lineEditKey1_2"));
        lineEditKey1_2->setGeometry(QRect(243, 200, 136, 32));
        comboBoxAcc_2 = new QComboBox(InquireDialog);
        comboBoxAcc_2->setObjectName(QStringLiteral("comboBoxAcc_2"));
        comboBoxAcc_2->setGeometry(QRect(613, 200, 79, 32));
        comboBoxAcc_2->setFont(font);
        lineEditKey2_2 = new QLineEdit(InquireDialog);
        lineEditKey2_2->setObjectName(QStringLiteral("lineEditKey2_2"));
        lineEditKey2_2->setGeometry(QRect(463, 200, 136, 32));
        lineEditKey1_3 = new QLineEdit(InquireDialog);
        lineEditKey1_3->setObjectName(QStringLiteral("lineEditKey1_3"));
        lineEditKey1_3->setGeometry(QRect(243, 240, 136, 32));
        comboBoxAcc_3 = new QComboBox(InquireDialog);
        comboBoxAcc_3->setObjectName(QStringLiteral("comboBoxAcc_3"));
        comboBoxAcc_3->setGeometry(QRect(613, 240, 79, 32));
        comboBoxAcc_3->setFont(font);
        comboBoxItem_3 = new QComboBox(InquireDialog);
        comboBoxItem_3->setObjectName(QStringLiteral("comboBoxItem_3"));
        comboBoxItem_3->setGeometry(QRect(100, 240, 125, 32));
        comboBoxItem_3->setFont(font);
        comboBoxAON_3 = new QComboBox(InquireDialog);
        comboBoxAON_3->setObjectName(QStringLiteral("comboBoxAON_3"));
        comboBoxAON_3->setGeometry(QRect(393, 240, 56, 32));
        comboBoxAON_3->setFont(font);
        lineEditKey2_3 = new QLineEdit(InquireDialog);
        lineEditKey2_3->setObjectName(QStringLiteral("lineEditKey2_3"));
        lineEditKey2_3->setGeometry(QRect(463, 240, 136, 32));
        lineEditKey1_4 = new QLineEdit(InquireDialog);
        lineEditKey1_4->setObjectName(QStringLiteral("lineEditKey1_4"));
        lineEditKey1_4->setGeometry(QRect(243, 280, 136, 32));
        comboBoxAcc_4 = new QComboBox(InquireDialog);
        comboBoxAcc_4->setObjectName(QStringLiteral("comboBoxAcc_4"));
        comboBoxAcc_4->setGeometry(QRect(613, 280, 79, 32));
        comboBoxAcc_4->setFont(font);
        comboBoxAON_4 = new QComboBox(InquireDialog);
        comboBoxAON_4->setObjectName(QStringLiteral("comboBoxAON_4"));
        comboBoxAON_4->setGeometry(QRect(393, 280, 56, 32));
        comboBoxAON_4->setFont(font);
        lineEditKey2_4 = new QLineEdit(InquireDialog);
        lineEditKey2_4->setObjectName(QStringLiteral("lineEditKey2_4"));
        lineEditKey2_4->setGeometry(QRect(463, 280, 136, 32));
        comboBoxItem_4 = new QComboBox(InquireDialog);
        comboBoxItem_4->setObjectName(QStringLiteral("comboBoxItem_4"));
        comboBoxItem_4->setGeometry(QRect(100, 280, 125, 32));
        comboBoxItem_4->setFont(font);
        lineEditKey1_5 = new QLineEdit(InquireDialog);
        lineEditKey1_5->setObjectName(QStringLiteral("lineEditKey1_5"));
        lineEditKey1_5->setGeometry(QRect(243, 320, 136, 32));
        comboBoxAcc_5 = new QComboBox(InquireDialog);
        comboBoxAcc_5->setObjectName(QStringLiteral("comboBoxAcc_5"));
        comboBoxAcc_5->setGeometry(QRect(613, 320, 79, 32));
        comboBoxAcc_5->setFont(font);
        comboBoxAON_5 = new QComboBox(InquireDialog);
        comboBoxAON_5->setObjectName(QStringLiteral("comboBoxAON_5"));
        comboBoxAON_5->setGeometry(QRect(393, 320, 56, 32));
        comboBoxAON_5->setFont(font);
        lineEditKey2_5 = new QLineEdit(InquireDialog);
        lineEditKey2_5->setObjectName(QStringLiteral("lineEditKey2_5"));
        lineEditKey2_5->setGeometry(QRect(463, 320, 136, 32));
        comboBoxItem_5 = new QComboBox(InquireDialog);
        comboBoxItem_5->setObjectName(QStringLiteral("comboBoxItem_5"));
        comboBoxItem_5->setGeometry(QRect(100, 320, 125, 32));
        comboBoxItem_5->setFont(font);
        comboBoxItemAON_2 = new QComboBox(InquireDialog);
        comboBoxItemAON_2->setObjectName(QStringLiteral("comboBoxItemAON_2"));
        comboBoxItemAON_2->setGeometry(QRect(33, 200, 56, 32));
        comboBoxItemAON_2->setFont(font);
        comboBoxItemAON_3 = new QComboBox(InquireDialog);
        comboBoxItemAON_3->setObjectName(QStringLiteral("comboBoxItemAON_3"));
        comboBoxItemAON_3->setGeometry(QRect(33, 240, 56, 32));
        comboBoxItemAON_3->setFont(font);
        comboBoxItemAON_4 = new QComboBox(InquireDialog);
        comboBoxItemAON_4->setObjectName(QStringLiteral("comboBoxItemAON_4"));
        comboBoxItemAON_4->setGeometry(QRect(33, 280, 56, 32));
        comboBoxItemAON_4->setFont(font);
        comboBoxItemAON_5 = new QComboBox(InquireDialog);
        comboBoxItemAON_5->setObjectName(QStringLiteral("comboBoxItemAON_5"));
        comboBoxItemAON_5->setGeometry(QRect(33, 320, 56, 32));
        comboBoxItemAON_5->setFont(font);
        pushButtonConfirm = new QPushButton(InquireDialog);
        pushButtonConfirm->setObjectName(QStringLiteral("pushButtonConfirm"));
        pushButtonConfirm->setGeometry(QRect(130, 380, 131, 41));
        pushButtonConfirm->setFont(font);
        pushButtonCancel = new QPushButton(InquireDialog);
        pushButtonCancel->setObjectName(QStringLiteral("pushButtonCancel"));
        pushButtonCancel->setGeometry(QRect(450, 380, 131, 41));
        pushButtonCancel->setFont(font);
        pushButtonAdd = new QPushButton(InquireDialog);
        pushButtonAdd->setObjectName(QStringLiteral("pushButtonAdd"));
        pushButtonAdd->setGeometry(QRect(220, 120, 32, 32));
        pushButtonAdd->setFont(font);
        pushButtonPlus = new QPushButton(InquireDialog);
        pushButtonPlus->setObjectName(QStringLiteral("pushButtonPlus"));
        pushButtonPlus->setGeometry(QRect(440, 120, 32, 32));
        pushButtonPlus->setFont(font);
        checkBoxPubdate = new QCheckBox(InquireDialog);
        checkBoxPubdate->setObjectName(QStringLiteral("checkBoxPubdate"));
        checkBoxPubdate->setGeometry(QRect(40, 40, 21, 32));
        checkBoxPages = new QCheckBox(InquireDialog);
        checkBoxPages->setObjectName(QStringLiteral("checkBoxPages"));
        checkBoxPages->setGeometry(QRect(40, 80, 21, 32));
        comboBoxItemAON_1 = new QComboBox(InquireDialog);
        comboBoxItemAON_1->setObjectName(QStringLiteral("comboBoxItemAON_1"));
        comboBoxItemAON_1->setGeometry(QRect(33, 160, 56, 32));
        comboBoxItemAON_1->setFont(font);

        retranslateUi(InquireDialog);

        QMetaObject::connectSlotsByName(InquireDialog);
    } // setupUi

    void retranslateUi(QDialog *InquireDialog)
    {
        InquireDialog->setWindowTitle(QApplication::translate("InquireDialog", "Dialog", 0));
        comboBoxItem_1->clear();
        comboBoxItem_1->insertItems(0, QStringList()
         << QApplication::translate("InquireDialog", "Book Title", 0)
         << QApplication::translate("InquireDialog", "Author", 0)
         << QApplication::translate("InquireDialog", "Publisher", 0)
         << QApplication::translate("InquireDialog", "Publisher City", 0)
         << QApplication::translate("InquireDialog", "Barcode", 0)
        );
        comboBoxItem_1->setCurrentText(QApplication::translate("InquireDialog", "Book Title", 0));
        comboBoxAON_1->clear();
        comboBoxAON_1->insertItems(0, QStringList()
         << QApplication::translate("InquireDialog", "And", 0)
         << QApplication::translate("InquireDialog", "Or", 0)
         << QApplication::translate("InquireDialog", "Not", 0)
        );
        comboBoxAcc_1->clear();
        comboBoxAcc_1->insertItems(0, QStringList()
         << QApplication::translate("InquireDialog", "Precise", 0)
         << QApplication::translate("InquireDialog", "Fuzzy", 0)
        );
        label->setText(QApplication::translate("InquireDialog", "Publication Date :", 0));
        dateEditFrom->setDisplayFormat(QApplication::translate("InquireDialog", "yyyy-MM-dd", 0));
        label_2->setText(QApplication::translate("InquireDialog", "From", 0));
        label_3->setText(QApplication::translate("InquireDialog", "To", 0));
        dateEditTo->setDisplayFormat(QApplication::translate("InquireDialog", "yyyy-MM-dd", 0));
        label_4->setText(QApplication::translate("InquireDialog", "Pages :", 0));
        label_5->setText(QApplication::translate("InquireDialog", "Between", 0));
        label_6->setText(QApplication::translate("InquireDialog", "And", 0));
        label_10->setText(QApplication::translate("InquireDialog", "Other Options :", 0));
        label_11->setText(QApplication::translate("InquireDialog", "Add Query Conditon", 0));
        label_12->setText(QApplication::translate("InquireDialog", "Plus Query Conditon", 0));
        comboBoxItem_2->clear();
        comboBoxItem_2->insertItems(0, QStringList()
         << QApplication::translate("InquireDialog", "Book Title", 0)
         << QApplication::translate("InquireDialog", "Author", 0)
         << QApplication::translate("InquireDialog", "Publisher", 0)
         << QApplication::translate("InquireDialog", "Publisher City", 0)
         << QApplication::translate("InquireDialog", "Barcode", 0)
        );
        comboBoxItem_2->setCurrentText(QApplication::translate("InquireDialog", "Book Title", 0));
        comboBoxAON_2->clear();
        comboBoxAON_2->insertItems(0, QStringList()
         << QApplication::translate("InquireDialog", "And", 0)
         << QApplication::translate("InquireDialog", "Or", 0)
         << QApplication::translate("InquireDialog", "Not", 0)
        );
        comboBoxAcc_2->clear();
        comboBoxAcc_2->insertItems(0, QStringList()
         << QApplication::translate("InquireDialog", "Precise", 0)
         << QApplication::translate("InquireDialog", "Fuzzy", 0)
        );
        comboBoxAcc_3->clear();
        comboBoxAcc_3->insertItems(0, QStringList()
         << QApplication::translate("InquireDialog", "Precise", 0)
         << QApplication::translate("InquireDialog", "Fuzzy", 0)
        );
        comboBoxItem_3->clear();
        comboBoxItem_3->insertItems(0, QStringList()
         << QApplication::translate("InquireDialog", "Book Title", 0)
         << QApplication::translate("InquireDialog", "Author", 0)
         << QApplication::translate("InquireDialog", "Publisher", 0)
         << QApplication::translate("InquireDialog", "Publisher City", 0)
         << QApplication::translate("InquireDialog", "Barcode", 0)
        );
        comboBoxItem_3->setCurrentText(QApplication::translate("InquireDialog", "Book Title", 0));
        comboBoxAON_3->clear();
        comboBoxAON_3->insertItems(0, QStringList()
         << QApplication::translate("InquireDialog", "And", 0)
         << QApplication::translate("InquireDialog", "Or", 0)
         << QApplication::translate("InquireDialog", "Not", 0)
        );
        comboBoxAcc_4->clear();
        comboBoxAcc_4->insertItems(0, QStringList()
         << QApplication::translate("InquireDialog", "Precise", 0)
         << QApplication::translate("InquireDialog", "Fuzzy", 0)
        );
        comboBoxAON_4->clear();
        comboBoxAON_4->insertItems(0, QStringList()
         << QApplication::translate("InquireDialog", "And", 0)
         << QApplication::translate("InquireDialog", "Or", 0)
         << QApplication::translate("InquireDialog", "Not", 0)
        );
        comboBoxItem_4->clear();
        comboBoxItem_4->insertItems(0, QStringList()
         << QApplication::translate("InquireDialog", "Book Title", 0)
         << QApplication::translate("InquireDialog", "Author", 0)
         << QApplication::translate("InquireDialog", "Publisher", 0)
         << QApplication::translate("InquireDialog", "Publisher City", 0)
         << QApplication::translate("InquireDialog", "Barcode", 0)
        );
        comboBoxItem_4->setCurrentText(QApplication::translate("InquireDialog", "Book Title", 0));
        comboBoxAcc_5->clear();
        comboBoxAcc_5->insertItems(0, QStringList()
         << QApplication::translate("InquireDialog", "Precise", 0)
         << QApplication::translate("InquireDialog", "Fuzzy", 0)
        );
        comboBoxAON_5->clear();
        comboBoxAON_5->insertItems(0, QStringList()
         << QApplication::translate("InquireDialog", "And", 0)
         << QApplication::translate("InquireDialog", "Or", 0)
         << QApplication::translate("InquireDialog", "Not", 0)
        );
        comboBoxItem_5->clear();
        comboBoxItem_5->insertItems(0, QStringList()
         << QApplication::translate("InquireDialog", "Book Title", 0)
         << QApplication::translate("InquireDialog", "Author", 0)
         << QApplication::translate("InquireDialog", "Publisher", 0)
         << QApplication::translate("InquireDialog", "Publisher City", 0)
         << QApplication::translate("InquireDialog", "Barcode", 0)
        );
        comboBoxItem_5->setCurrentText(QApplication::translate("InquireDialog", "Book Title", 0));
        comboBoxItemAON_2->clear();
        comboBoxItemAON_2->insertItems(0, QStringList()
         << QApplication::translate("InquireDialog", "And", 0)
         << QApplication::translate("InquireDialog", "Or", 0)
         << QApplication::translate("InquireDialog", "Not", 0)
        );
        comboBoxItemAON_3->clear();
        comboBoxItemAON_3->insertItems(0, QStringList()
         << QApplication::translate("InquireDialog", "And", 0)
         << QApplication::translate("InquireDialog", "Or", 0)
         << QApplication::translate("InquireDialog", "Not", 0)
        );
        comboBoxItemAON_4->clear();
        comboBoxItemAON_4->insertItems(0, QStringList()
         << QApplication::translate("InquireDialog", "And", 0)
         << QApplication::translate("InquireDialog", "Or", 0)
         << QApplication::translate("InquireDialog", "Not", 0)
        );
        comboBoxItemAON_5->clear();
        comboBoxItemAON_5->insertItems(0, QStringList()
         << QApplication::translate("InquireDialog", "And", 0)
         << QApplication::translate("InquireDialog", "Or", 0)
         << QApplication::translate("InquireDialog", "Not", 0)
        );
        pushButtonConfirm->setText(QApplication::translate("InquireDialog", "Inquire", 0));
        pushButtonCancel->setText(QApplication::translate("InquireDialog", "Cancel", 0));
        pushButtonAdd->setText(QApplication::translate("InquireDialog", "+", 0));
        pushButtonPlus->setText(QApplication::translate("InquireDialog", "-", 0));
        checkBoxPubdate->setText(QString());
        checkBoxPages->setText(QString());
        comboBoxItemAON_1->clear();
        comboBoxItemAON_1->insertItems(0, QStringList()
         << QApplication::translate("InquireDialog", "And", 0)
         << QApplication::translate("InquireDialog", "Or", 0)
         << QApplication::translate("InquireDialog", "Not", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class InquireDialog: public Ui_InquireDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INQUIREDIALOG_H

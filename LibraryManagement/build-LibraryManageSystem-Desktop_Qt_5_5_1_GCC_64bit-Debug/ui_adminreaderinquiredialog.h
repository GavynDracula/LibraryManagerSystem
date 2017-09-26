/********************************************************************************
** Form generated from reading UI file 'adminreaderinquiredialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINREADERINQUIREDIALOG_H
#define UI_ADMINREADERINQUIREDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_AdminReaderInquireDialog
{
public:
    QLabel *label_6;
    QLabel *label_7;
    QComboBox *comboBoxItemAON_4;
    QLabel *label_11;
    QSpinBox *spinBoxLess;
    QLabel *label_10;
    QComboBox *comboBoxItemAON_2;
    QLabel *label_12;
    QLineEdit *lineEditKey1_2;
    QLineEdit *lineEditKey1_1;
    QLineEdit *lineEditKey1_3;
    QSpinBox *spinBoxMore;
    QPushButton *pushButtonConfirm;
    QPushButton *pushButtonAdd;
    QLineEdit *lineEditKey1_4;
    QCheckBox *checkBoxType;
    QPushButton *pushButtonCancel;
    QLabel *label_4;
    QComboBox *comboBoxItem_1;
    QCheckBox *checkBoxBorrowed;
    QComboBox *comboBoxItemAON_3;
    QComboBox *comboBoxItemAON_1;
    QPushButton *pushButtonPlus;
    QLabel *label_5;
    QLabel *label_8;
    QCheckBox *checkBoxFines;
    QLabel *label_9;
    QDoubleSpinBox *doubleSpinBoxLess;
    QDoubleSpinBox *doubleSpinBoxMore;
    QLabel *label_13;
    QComboBox *comboBoxType;
    QComboBox *comboBoxItem_2;
    QComboBox *comboBoxItem_3;
    QComboBox *comboBoxItem_4;
    QComboBox *comboBoxAcc_4;
    QComboBox *comboBoxAcc_3;
    QComboBox *comboBoxAcc_2;
    QComboBox *comboBoxAcc_1;

    void setupUi(QDialog *AdminReaderInquireDialog)
    {
        if (AdminReaderInquireDialog->objectName().isEmpty())
            AdminReaderInquireDialog->setObjectName(QStringLiteral("AdminReaderInquireDialog"));
        AdminReaderInquireDialog->resize(583, 443);
        label_6 = new QLabel(AdminReaderInquireDialog);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(380, 30, 31, 30));
        QFont font;
        font.setPointSize(12);
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(AdminReaderInquireDialog);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(110, 100, 111, 30));
        label_7->setFont(font);
        label_7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        comboBoxItemAON_4 = new QComboBox(AdminReaderInquireDialog);
        comboBoxItemAON_4->setObjectName(QStringLiteral("comboBoxItemAON_4"));
        comboBoxItemAON_4->setGeometry(QRect(50, 310, 56, 30));
        comboBoxItemAON_4->setFont(font);
        label_11 = new QLabel(AdminReaderInquireDialog);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(180, 150, 161, 30));
        label_11->setFont(font);
        label_11->setAlignment(Qt::AlignCenter);
        spinBoxLess = new QSpinBox(AdminReaderInquireDialog);
        spinBoxLess->setObjectName(QStringLiteral("spinBoxLess"));
        spinBoxLess->setEnabled(false);
        spinBoxLess->setGeometry(QRect(287, 30, 80, 30));
        spinBoxLess->setFont(font);
        spinBoxLess->setAlignment(Qt::AlignCenter);
        spinBoxLess->setMaximum(9999);
        label_10 = new QLabel(AdminReaderInquireDialog);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(20, 150, 122, 30));
        label_10->setFont(font);
        label_10->setAlignment(Qt::AlignCenter);
        comboBoxItemAON_2 = new QComboBox(AdminReaderInquireDialog);
        comboBoxItemAON_2->setObjectName(QStringLiteral("comboBoxItemAON_2"));
        comboBoxItemAON_2->setGeometry(QRect(50, 230, 56, 30));
        comboBoxItemAON_2->setFont(font);
        label_12 = new QLabel(AdminReaderInquireDialog);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(390, 150, 161, 30));
        label_12->setFont(font);
        label_12->setAlignment(Qt::AlignCenter);
        lineEditKey1_2 = new QLineEdit(AdminReaderInquireDialog);
        lineEditKey1_2->setObjectName(QStringLiteral("lineEditKey1_2"));
        lineEditKey1_2->setGeometry(QRect(280, 230, 160, 30));
        lineEditKey1_1 = new QLineEdit(AdminReaderInquireDialog);
        lineEditKey1_1->setObjectName(QStringLiteral("lineEditKey1_1"));
        lineEditKey1_1->setGeometry(QRect(280, 190, 160, 30));
        lineEditKey1_3 = new QLineEdit(AdminReaderInquireDialog);
        lineEditKey1_3->setObjectName(QStringLiteral("lineEditKey1_3"));
        lineEditKey1_3->setGeometry(QRect(280, 270, 160, 30));
        spinBoxMore = new QSpinBox(AdminReaderInquireDialog);
        spinBoxMore->setObjectName(QStringLiteral("spinBoxMore"));
        spinBoxMore->setEnabled(false);
        spinBoxMore->setGeometry(QRect(429, 30, 80, 30));
        spinBoxMore->setFont(font);
        spinBoxMore->setAlignment(Qt::AlignCenter);
        spinBoxMore->setMaximum(9999);
        pushButtonConfirm = new QPushButton(AdminReaderInquireDialog);
        pushButtonConfirm->setObjectName(QStringLiteral("pushButtonConfirm"));
        pushButtonConfirm->setGeometry(QRect(80, 370, 131, 41));
        pushButtonConfirm->setFont(font);
        pushButtonAdd = new QPushButton(AdminReaderInquireDialog);
        pushButtonAdd->setObjectName(QStringLiteral("pushButtonAdd"));
        pushButtonAdd->setGeometry(QRect(150, 150, 30, 30));
        pushButtonAdd->setFont(font);
        lineEditKey1_4 = new QLineEdit(AdminReaderInquireDialog);
        lineEditKey1_4->setObjectName(QStringLiteral("lineEditKey1_4"));
        lineEditKey1_4->setGeometry(QRect(280, 310, 160, 30));
        checkBoxType = new QCheckBox(AdminReaderInquireDialog);
        checkBoxType->setObjectName(QStringLiteral("checkBoxType"));
        checkBoxType->setGeometry(QRect(47, 100, 21, 32));
        pushButtonCancel = new QPushButton(AdminReaderInquireDialog);
        pushButtonCancel->setObjectName(QStringLiteral("pushButtonCancel"));
        pushButtonCancel->setGeometry(QRect(360, 370, 131, 41));
        pushButtonCancel->setFont(font);
        label_4 = new QLabel(AdminReaderInquireDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(67, 30, 141, 30));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);
        comboBoxItem_1 = new QComboBox(AdminReaderInquireDialog);
        comboBoxItem_1->setObjectName(QStringLiteral("comboBoxItem_1"));
        comboBoxItem_1->setGeometry(QRect(130, 190, 125, 30));
        comboBoxItem_1->setFont(font);
        checkBoxBorrowed = new QCheckBox(AdminReaderInquireDialog);
        checkBoxBorrowed->setObjectName(QStringLiteral("checkBoxBorrowed"));
        checkBoxBorrowed->setGeometry(QRect(47, 30, 21, 32));
        comboBoxItemAON_3 = new QComboBox(AdminReaderInquireDialog);
        comboBoxItemAON_3->setObjectName(QStringLiteral("comboBoxItemAON_3"));
        comboBoxItemAON_3->setGeometry(QRect(50, 270, 56, 30));
        comboBoxItemAON_3->setFont(font);
        comboBoxItemAON_1 = new QComboBox(AdminReaderInquireDialog);
        comboBoxItemAON_1->setObjectName(QStringLiteral("comboBoxItemAON_1"));
        comboBoxItemAON_1->setGeometry(QRect(50, 190, 56, 30));
        comboBoxItemAON_1->setFont(font);
        pushButtonPlus = new QPushButton(AdminReaderInquireDialog);
        pushButtonPlus->setObjectName(QStringLiteral("pushButtonPlus"));
        pushButtonPlus->setGeometry(QRect(360, 150, 30, 30));
        pushButtonPlus->setFont(font);
        label_5 = new QLabel(AdminReaderInquireDialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(210, 30, 62, 30));
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignCenter);
        label_8 = new QLabel(AdminReaderInquireDialog);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(80, 67, 122, 30));
        label_8->setFont(font);
        label_8->setAlignment(Qt::AlignCenter);
        checkBoxFines = new QCheckBox(AdminReaderInquireDialog);
        checkBoxFines->setObjectName(QStringLiteral("checkBoxFines"));
        checkBoxFines->setGeometry(QRect(47, 66, 21, 32));
        label_9 = new QLabel(AdminReaderInquireDialog);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(210, 67, 62, 30));
        label_9->setFont(font);
        label_9->setAlignment(Qt::AlignCenter);
        doubleSpinBoxLess = new QDoubleSpinBox(AdminReaderInquireDialog);
        doubleSpinBoxLess->setObjectName(QStringLiteral("doubleSpinBoxLess"));
        doubleSpinBoxLess->setEnabled(false);
        doubleSpinBoxLess->setGeometry(QRect(287, 67, 80, 30));
        doubleSpinBoxLess->setFont(font);
        doubleSpinBoxLess->setAlignment(Qt::AlignCenter);
        doubleSpinBoxLess->setMaximum(9999.99);
        doubleSpinBoxMore = new QDoubleSpinBox(AdminReaderInquireDialog);
        doubleSpinBoxMore->setObjectName(QStringLiteral("doubleSpinBoxMore"));
        doubleSpinBoxMore->setEnabled(false);
        doubleSpinBoxMore->setGeometry(QRect(429, 67, 80, 30));
        doubleSpinBoxMore->setFont(font);
        doubleSpinBoxMore->setAlignment(Qt::AlignCenter);
        doubleSpinBoxMore->setMaximum(9999.99);
        label_13 = new QLabel(AdminReaderInquireDialog);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(380, 67, 31, 30));
        label_13->setFont(font);
        label_13->setAlignment(Qt::AlignCenter);
        comboBoxType = new QComboBox(AdminReaderInquireDialog);
        comboBoxType->setObjectName(QStringLiteral("comboBoxType"));
        comboBoxType->setEnabled(false);
        comboBoxType->setGeometry(QRect(240, 101, 131, 30));
        comboBoxType->setFont(font);
        comboBoxItem_2 = new QComboBox(AdminReaderInquireDialog);
        comboBoxItem_2->setObjectName(QStringLiteral("comboBoxItem_2"));
        comboBoxItem_2->setGeometry(QRect(130, 230, 125, 30));
        comboBoxItem_2->setFont(font);
        comboBoxItem_3 = new QComboBox(AdminReaderInquireDialog);
        comboBoxItem_3->setObjectName(QStringLiteral("comboBoxItem_3"));
        comboBoxItem_3->setGeometry(QRect(130, 270, 125, 30));
        comboBoxItem_3->setFont(font);
        comboBoxItem_4 = new QComboBox(AdminReaderInquireDialog);
        comboBoxItem_4->setObjectName(QStringLiteral("comboBoxItem_4"));
        comboBoxItem_4->setGeometry(QRect(130, 310, 125, 30));
        comboBoxItem_4->setFont(font);
        comboBoxAcc_4 = new QComboBox(AdminReaderInquireDialog);
        comboBoxAcc_4->setObjectName(QStringLiteral("comboBoxAcc_4"));
        comboBoxAcc_4->setGeometry(QRect(460, 310, 79, 30));
        comboBoxAcc_4->setFont(font);
        comboBoxAcc_3 = new QComboBox(AdminReaderInquireDialog);
        comboBoxAcc_3->setObjectName(QStringLiteral("comboBoxAcc_3"));
        comboBoxAcc_3->setGeometry(QRect(460, 270, 79, 30));
        comboBoxAcc_3->setFont(font);
        comboBoxAcc_2 = new QComboBox(AdminReaderInquireDialog);
        comboBoxAcc_2->setObjectName(QStringLiteral("comboBoxAcc_2"));
        comboBoxAcc_2->setGeometry(QRect(460, 230, 79, 30));
        comboBoxAcc_2->setFont(font);
        comboBoxAcc_1 = new QComboBox(AdminReaderInquireDialog);
        comboBoxAcc_1->setObjectName(QStringLiteral("comboBoxAcc_1"));
        comboBoxAcc_1->setGeometry(QRect(460, 190, 79, 30));
        comboBoxAcc_1->setFont(font);

        retranslateUi(AdminReaderInquireDialog);

        QMetaObject::connectSlotsByName(AdminReaderInquireDialog);
    } // setupUi

    void retranslateUi(QDialog *AdminReaderInquireDialog)
    {
        AdminReaderInquireDialog->setWindowTitle(QApplication::translate("AdminReaderInquireDialog", "Dialog", 0));
        label_6->setText(QApplication::translate("AdminReaderInquireDialog", "And", 0));
        label_7->setText(QApplication::translate("AdminReaderInquireDialog", "Reader Type :", 0));
        comboBoxItemAON_4->clear();
        comboBoxItemAON_4->insertItems(0, QStringList()
         << QApplication::translate("AdminReaderInquireDialog", "And", 0)
         << QApplication::translate("AdminReaderInquireDialog", "Or", 0)
         << QApplication::translate("AdminReaderInquireDialog", "Not", 0)
        );
        label_11->setText(QApplication::translate("AdminReaderInquireDialog", "Add Query Conditon", 0));
        label_10->setText(QApplication::translate("AdminReaderInquireDialog", "Other Options :", 0));
        comboBoxItemAON_2->clear();
        comboBoxItemAON_2->insertItems(0, QStringList()
         << QApplication::translate("AdminReaderInquireDialog", "And", 0)
         << QApplication::translate("AdminReaderInquireDialog", "Or", 0)
         << QApplication::translate("AdminReaderInquireDialog", "Not", 0)
        );
        label_12->setText(QApplication::translate("AdminReaderInquireDialog", "Plus Query Conditon", 0));
        pushButtonConfirm->setText(QApplication::translate("AdminReaderInquireDialog", "Inquire", 0));
        pushButtonAdd->setText(QApplication::translate("AdminReaderInquireDialog", "+", 0));
        checkBoxType->setText(QString());
        pushButtonCancel->setText(QApplication::translate("AdminReaderInquireDialog", "Cancel", 0));
        label_4->setText(QApplication::translate("AdminReaderInquireDialog", "Borrowed  Books :", 0));
        comboBoxItem_1->clear();
        comboBoxItem_1->insertItems(0, QStringList()
         << QApplication::translate("AdminReaderInquireDialog", "Reader ID", 0)
         << QApplication::translate("AdminReaderInquireDialog", "Name", 0)
         << QApplication::translate("AdminReaderInquireDialog", "Phone", 0)
         << QApplication::translate("AdminReaderInquireDialog", "Email", 0)
        );
        comboBoxItem_1->setCurrentText(QApplication::translate("AdminReaderInquireDialog", "Reader ID", 0));
        checkBoxBorrowed->setText(QString());
        comboBoxItemAON_3->clear();
        comboBoxItemAON_3->insertItems(0, QStringList()
         << QApplication::translate("AdminReaderInquireDialog", "And", 0)
         << QApplication::translate("AdminReaderInquireDialog", "Or", 0)
         << QApplication::translate("AdminReaderInquireDialog", "Not", 0)
        );
        comboBoxItemAON_1->clear();
        comboBoxItemAON_1->insertItems(0, QStringList()
         << QApplication::translate("AdminReaderInquireDialog", "And", 0)
         << QApplication::translate("AdminReaderInquireDialog", "Or", 0)
         << QApplication::translate("AdminReaderInquireDialog", "Not", 0)
        );
        pushButtonPlus->setText(QApplication::translate("AdminReaderInquireDialog", "-", 0));
        label_5->setText(QApplication::translate("AdminReaderInquireDialog", "Between", 0));
        label_8->setText(QApplication::translate("AdminReaderInquireDialog", "Current Fines :", 0));
        checkBoxFines->setText(QString());
        label_9->setText(QApplication::translate("AdminReaderInquireDialog", "Between", 0));
        label_13->setText(QApplication::translate("AdminReaderInquireDialog", "And", 0));
        comboBoxType->clear();
        comboBoxType->insertItems(0, QStringList()
         << QApplication::translate("AdminReaderInquireDialog", "Student", 0)
         << QApplication::translate("AdminReaderInquireDialog", "Teacher", 0)
        );
        comboBoxType->setCurrentText(QApplication::translate("AdminReaderInquireDialog", "Student", 0));
        comboBoxItem_2->clear();
        comboBoxItem_2->insertItems(0, QStringList()
         << QApplication::translate("AdminReaderInquireDialog", "Reader ID", 0)
         << QApplication::translate("AdminReaderInquireDialog", "Name", 0)
         << QApplication::translate("AdminReaderInquireDialog", "Phone", 0)
         << QApplication::translate("AdminReaderInquireDialog", "Email", 0)
        );
        comboBoxItem_2->setCurrentText(QApplication::translate("AdminReaderInquireDialog", "Reader ID", 0));
        comboBoxItem_3->clear();
        comboBoxItem_3->insertItems(0, QStringList()
         << QApplication::translate("AdminReaderInquireDialog", "Reader ID", 0)
         << QApplication::translate("AdminReaderInquireDialog", "Name", 0)
         << QApplication::translate("AdminReaderInquireDialog", "Phone", 0)
         << QApplication::translate("AdminReaderInquireDialog", "Email", 0)
        );
        comboBoxItem_3->setCurrentText(QApplication::translate("AdminReaderInquireDialog", "Reader ID", 0));
        comboBoxItem_4->clear();
        comboBoxItem_4->insertItems(0, QStringList()
         << QApplication::translate("AdminReaderInquireDialog", "Reader ID", 0)
         << QApplication::translate("AdminReaderInquireDialog", "Name", 0)
         << QApplication::translate("AdminReaderInquireDialog", "Phone", 0)
         << QApplication::translate("AdminReaderInquireDialog", "Email", 0)
        );
        comboBoxItem_4->setCurrentText(QApplication::translate("AdminReaderInquireDialog", "Reader ID", 0));
        comboBoxAcc_4->clear();
        comboBoxAcc_4->insertItems(0, QStringList()
         << QApplication::translate("AdminReaderInquireDialog", "Precise", 0)
         << QApplication::translate("AdminReaderInquireDialog", "Fuzzy", 0)
        );
        comboBoxAcc_3->clear();
        comboBoxAcc_3->insertItems(0, QStringList()
         << QApplication::translate("AdminReaderInquireDialog", "Precise", 0)
         << QApplication::translate("AdminReaderInquireDialog", "Fuzzy", 0)
        );
        comboBoxAcc_2->clear();
        comboBoxAcc_2->insertItems(0, QStringList()
         << QApplication::translate("AdminReaderInquireDialog", "Precise", 0)
         << QApplication::translate("AdminReaderInquireDialog", "Fuzzy", 0)
        );
        comboBoxAcc_1->clear();
        comboBoxAcc_1->insertItems(0, QStringList()
         << QApplication::translate("AdminReaderInquireDialog", "Precise", 0)
         << QApplication::translate("AdminReaderInquireDialog", "Fuzzy", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class AdminReaderInquireDialog: public Ui_AdminReaderInquireDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINREADERINQUIREDIALOG_H

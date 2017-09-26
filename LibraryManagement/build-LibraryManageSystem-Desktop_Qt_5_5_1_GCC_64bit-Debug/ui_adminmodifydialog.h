/********************************************************************************
** Form generated from reading UI file 'adminmodifydialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINMODIFYDIALOG_H
#define UI_ADMINMODIFYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_AdminModifyDialog
{
public:
    QLabel *label_4;
    QDoubleSpinBox *doubleSpinBoxFine;
    QLabel *label_6;
    QSpinBox *spinBoxMaxBorrow;
    QPushButton *pushButtonRIDVerify;
    QPushButton *pushButtonConfirm;
    QLabel *label_9;
    QLineEdit *lineEditName;
    QLineEdit *lineEditEmail;
    QLabel *label_5;
    QPushButton *pushButtonCancel;
    QLineEdit *lineEditPhone;
    QSpinBox *spinBoxBorrowed;
    QLabel *label;
    QLineEdit *lineEditRID;
    QLabel *label_10;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label_7;
    QLineEdit *lineEditPwd;
    QComboBox *comboBoxType;

    void setupUi(QDialog *AdminModifyDialog)
    {
        if (AdminModifyDialog->objectName().isEmpty())
            AdminModifyDialog->setObjectName(QStringLiteral("AdminModifyDialog"));
        AdminModifyDialog->resize(419, 467);
        label_4 = new QLabel(AdminModifyDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(72, 140, 100, 30));
        QFont font;
        font.setPointSize(16);
        label_4->setFont(font);
        doubleSpinBoxFine = new QDoubleSpinBox(AdminModifyDialog);
        doubleSpinBoxFine->setObjectName(QStringLiteral("doubleSpinBoxFine"));
        doubleSpinBoxFine->setEnabled(false);
        doubleSpinBoxFine->setGeometry(QRect(263, 340, 120, 30));
        QFont font1;
        font1.setPointSize(14);
        doubleSpinBoxFine->setFont(font1);
        doubleSpinBoxFine->setFocusPolicy(Qt::WheelFocus);
        doubleSpinBoxFine->setAlignment(Qt::AlignCenter);
        doubleSpinBoxFine->setReadOnly(true);
        doubleSpinBoxFine->setMaximum(9999.99);
        label_6 = new QLabel(AdminModifyDialog);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(23, 300, 211, 30));
        label_6->setFont(font);
        spinBoxMaxBorrow = new QSpinBox(AdminModifyDialog);
        spinBoxMaxBorrow->setObjectName(QStringLiteral("spinBoxMaxBorrow"));
        spinBoxMaxBorrow->setEnabled(false);
        spinBoxMaxBorrow->setGeometry(QRect(263, 260, 120, 30));
        spinBoxMaxBorrow->setFont(font1);
        spinBoxMaxBorrow->setFocusPolicy(Qt::WheelFocus);
        spinBoxMaxBorrow->setAlignment(Qt::AlignCenter);
        spinBoxMaxBorrow->setReadOnly(true);
        pushButtonRIDVerify = new QPushButton(AdminModifyDialog);
        pushButtonRIDVerify->setObjectName(QStringLiteral("pushButtonRIDVerify"));
        pushButtonRIDVerify->setGeometry(QRect(340, 20, 45, 30));
        pushButtonConfirm = new QPushButton(AdminModifyDialog);
        pushButtonConfirm->setObjectName(QStringLiteral("pushButtonConfirm"));
        pushButtonConfirm->setGeometry(QRect(50, 390, 111, 51));
        QFont font2;
        font2.setPointSize(12);
        pushButtonConfirm->setFont(font2);
        label_9 = new QLabel(AdminModifyDialog);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(32, 260, 211, 30));
        label_9->setFont(font);
        lineEditName = new QLineEdit(AdminModifyDialog);
        lineEditName->setObjectName(QStringLiteral("lineEditName"));
        lineEditName->setEnabled(false);
        lineEditName->setGeometry(QRect(210, 100, 175, 30));
        lineEditName->setFont(font1);
        lineEditName->setFocusPolicy(Qt::StrongFocus);
        lineEditName->setAlignment(Qt::AlignCenter);
        lineEditName->setReadOnly(false);
        lineEditEmail = new QLineEdit(AdminModifyDialog);
        lineEditEmail->setObjectName(QStringLiteral("lineEditEmail"));
        lineEditEmail->setEnabled(false);
        lineEditEmail->setGeometry(QRect(210, 180, 175, 30));
        QFont font3;
        font3.setPointSize(15);
        lineEditEmail->setFont(font3);
        lineEditEmail->setFocusPolicy(Qt::StrongFocus);
        lineEditEmail->setAlignment(Qt::AlignCenter);
        lineEditEmail->setReadOnly(false);
        label_5 = new QLabel(AdminModifyDialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(73, 180, 100, 30));
        label_5->setFont(font);
        pushButtonCancel = new QPushButton(AdminModifyDialog);
        pushButtonCancel->setObjectName(QStringLiteral("pushButtonCancel"));
        pushButtonCancel->setGeometry(QRect(260, 390, 111, 51));
        pushButtonCancel->setFont(font2);
        lineEditPhone = new QLineEdit(AdminModifyDialog);
        lineEditPhone->setObjectName(QStringLiteral("lineEditPhone"));
        lineEditPhone->setEnabled(false);
        lineEditPhone->setGeometry(QRect(210, 140, 175, 30));
        lineEditPhone->setFont(font3);
        lineEditPhone->setFocusPolicy(Qt::StrongFocus);
        lineEditPhone->setAlignment(Qt::AlignCenter);
        lineEditPhone->setReadOnly(false);
        spinBoxBorrowed = new QSpinBox(AdminModifyDialog);
        spinBoxBorrowed->setObjectName(QStringLiteral("spinBoxBorrowed"));
        spinBoxBorrowed->setEnabled(false);
        spinBoxBorrowed->setGeometry(QRect(263, 300, 120, 30));
        spinBoxBorrowed->setFont(font1);
        spinBoxBorrowed->setFocusPolicy(Qt::WheelFocus);
        spinBoxBorrowed->setAlignment(Qt::AlignCenter);
        spinBoxBorrowed->setReadOnly(true);
        label = new QLabel(AdminModifyDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 20, 100, 30));
        label->setFont(font);
        lineEditRID = new QLineEdit(AdminModifyDialog);
        lineEditRID->setObjectName(QStringLiteral("lineEditRID"));
        lineEditRID->setEnabled(true);
        lineEditRID->setGeometry(QRect(210, 20, 120, 30));
        lineEditRID->setFont(font1);
        lineEditRID->setFocusPolicy(Qt::StrongFocus);
        lineEditRID->setAlignment(Qt::AlignCenter);
        lineEditRID->setReadOnly(false);
        label_10 = new QLabel(AdminModifyDialog);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(20, 340, 211, 30));
        label_10->setFont(font);
        label_3 = new QLabel(AdminModifyDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(70, 220, 100, 30));
        label_3->setFont(font);
        label_2 = new QLabel(AdminModifyDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 100, 100, 30));
        label_2->setFont(font);
        label_7 = new QLabel(AdminModifyDialog);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(70, 60, 100, 30));
        label_7->setFont(font);
        lineEditPwd = new QLineEdit(AdminModifyDialog);
        lineEditPwd->setObjectName(QStringLiteral("lineEditPwd"));
        lineEditPwd->setEnabled(false);
        lineEditPwd->setGeometry(QRect(210, 60, 175, 30));
        lineEditPwd->setFont(font1);
        lineEditPwd->setFocusPolicy(Qt::StrongFocus);
        lineEditPwd->setAlignment(Qt::AlignCenter);
        lineEditPwd->setReadOnly(false);
        comboBoxType = new QComboBox(AdminModifyDialog);
        comboBoxType->setObjectName(QStringLiteral("comboBoxType"));
        comboBoxType->setEnabled(false);
        comboBoxType->setGeometry(QRect(210, 220, 175, 30));
        comboBoxType->setFont(font3);

        retranslateUi(AdminModifyDialog);

        comboBoxType->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(AdminModifyDialog);
    } // setupUi

    void retranslateUi(QDialog *AdminModifyDialog)
    {
        AdminModifyDialog->setWindowTitle(QApplication::translate("AdminModifyDialog", "Dialog", 0));
        label_4->setText(QApplication::translate("AdminModifyDialog", "   Phone   :", 0));
        doubleSpinBoxFine->setPrefix(QString());
        doubleSpinBoxFine->setSuffix(QApplication::translate("AdminModifyDialog", "  RMB", 0));
        label_6->setText(QApplication::translate("AdminModifyDialog", "     Books Borrowed    :", 0));
        pushButtonRIDVerify->setText(QApplication::translate("AdminModifyDialog", "Verify", 0));
        pushButtonConfirm->setText(QApplication::translate("AdminModifyDialog", "Modify", 0));
        label_9->setText(QApplication::translate("AdminModifyDialog", "   Max Borrow Num   :", 0));
        label_5->setText(QApplication::translate("AdminModifyDialog", "    Email   :", 0));
        pushButtonCancel->setText(QApplication::translate("AdminModifyDialog", "Cancel", 0));
        label->setText(QApplication::translate("AdminModifyDialog", "Reader ID :", 0));
        label_10->setText(QApplication::translate("AdminModifyDialog", "Current Overdue Fines:", 0));
        label_3->setText(QApplication::translate("AdminModifyDialog", "User Type:", 0));
        label_2->setText(QApplication::translate("AdminModifyDialog", "    Name   :", 0));
        label_7->setText(QApplication::translate("AdminModifyDialog", "Password :", 0));
        comboBoxType->clear();
        comboBoxType->insertItems(0, QStringList()
         << QApplication::translate("AdminModifyDialog", "Student", 0)
         << QApplication::translate("AdminModifyDialog", "Teacher", 0)
        );
        comboBoxType->setCurrentText(QString());
    } // retranslateUi

};

namespace Ui {
    class AdminModifyDialog: public Ui_AdminModifyDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINMODIFYDIALOG_H

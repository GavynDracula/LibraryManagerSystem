/********************************************************************************
** Form generated from reading UI file 'adminregisterdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINREGISTERDIALOG_H
#define UI_ADMINREGISTERDIALOG_H

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

class Ui_AdminRegisterDialog
{
public:
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label_5;
    QLineEdit *lineEditRID;
    QLineEdit *lineEditPwd;
    QLabel *label_4;
    QLineEdit *lineEditName;
    QLineEdit *lineEditPhone;
    QLabel *label;
    QLineEdit *lineEditEmail;
    QLabel *label_6;
    QComboBox *comboBox;
    QSpinBox *spinBoxBorrowed;
    QLabel *label_10;
    QLabel *label_9;
    QLabel *label_7;
    QDoubleSpinBox *doubleSpinBoxFine;
    QSpinBox *spinBoxMaxBorrow;
    QLabel *label_8;
    QLabel *label_11;
    QPushButton *pushButtonCancel;
    QPushButton *pushButtonConfirm;

    void setupUi(QDialog *AdminRegisterDialog)
    {
        if (AdminRegisterDialog->objectName().isEmpty())
            AdminRegisterDialog->setObjectName(QStringLiteral("AdminRegisterDialog"));
        AdminRegisterDialog->resize(435, 589);
        label_3 = new QLabel(AdminRegisterDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(70, 270, 100, 30));
        QFont font;
        font.setPointSize(16);
        label_3->setFont(font);
        label_2 = new QLabel(AdminRegisterDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 150, 100, 30));
        label_2->setFont(font);
        label_5 = new QLabel(AdminRegisterDialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(73, 230, 100, 30));
        label_5->setFont(font);
        lineEditRID = new QLineEdit(AdminRegisterDialog);
        lineEditRID->setObjectName(QStringLiteral("lineEditRID"));
        lineEditRID->setEnabled(true);
        lineEditRID->setGeometry(QRect(210, 70, 160, 30));
        QFont font1;
        font1.setPointSize(15);
        lineEditRID->setFont(font1);
        lineEditRID->setFocusPolicy(Qt::StrongFocus);
        lineEditRID->setAlignment(Qt::AlignCenter);
        lineEditRID->setReadOnly(false);
        lineEditPwd = new QLineEdit(AdminRegisterDialog);
        lineEditPwd->setObjectName(QStringLiteral("lineEditPwd"));
        lineEditPwd->setEnabled(true);
        lineEditPwd->setGeometry(QRect(210, 110, 160, 30));
        lineEditPwd->setFont(font1);
        lineEditPwd->setFocusPolicy(Qt::StrongFocus);
        lineEditPwd->setAlignment(Qt::AlignCenter);
        lineEditPwd->setReadOnly(false);
        label_4 = new QLabel(AdminRegisterDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(72, 190, 100, 30));
        label_4->setFont(font);
        lineEditName = new QLineEdit(AdminRegisterDialog);
        lineEditName->setObjectName(QStringLiteral("lineEditName"));
        lineEditName->setEnabled(true);
        lineEditName->setGeometry(QRect(210, 150, 160, 30));
        lineEditName->setFont(font1);
        lineEditName->setFocusPolicy(Qt::StrongFocus);
        lineEditName->setAlignment(Qt::AlignCenter);
        lineEditName->setReadOnly(false);
        lineEditPhone = new QLineEdit(AdminRegisterDialog);
        lineEditPhone->setObjectName(QStringLiteral("lineEditPhone"));
        lineEditPhone->setEnabled(true);
        lineEditPhone->setGeometry(QRect(210, 190, 160, 30));
        lineEditPhone->setFont(font1);
        lineEditPhone->setFocusPolicy(Qt::StrongFocus);
        lineEditPhone->setAlignment(Qt::AlignCenter);
        lineEditPhone->setReadOnly(false);
        label = new QLabel(AdminRegisterDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 70, 100, 30));
        label->setFont(font);
        lineEditEmail = new QLineEdit(AdminRegisterDialog);
        lineEditEmail->setObjectName(QStringLiteral("lineEditEmail"));
        lineEditEmail->setEnabled(true);
        lineEditEmail->setGeometry(QRect(210, 230, 160, 30));
        lineEditEmail->setFont(font1);
        lineEditEmail->setFocusPolicy(Qt::StrongFocus);
        lineEditEmail->setAlignment(Qt::AlignCenter);
        lineEditEmail->setReadOnly(false);
        label_6 = new QLabel(AdminRegisterDialog);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(70, 110, 100, 30));
        label_6->setFont(font);
        comboBox = new QComboBox(AdminRegisterDialog);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(210, 270, 160, 30));
        comboBox->setFont(font1);
        spinBoxBorrowed = new QSpinBox(AdminRegisterDialog);
        spinBoxBorrowed->setObjectName(QStringLiteral("spinBoxBorrowed"));
        spinBoxBorrowed->setEnabled(true);
        spinBoxBorrowed->setGeometry(QRect(270, 410, 120, 30));
        spinBoxBorrowed->setFont(font1);
        spinBoxBorrowed->setFocusPolicy(Qt::NoFocus);
        spinBoxBorrowed->setAlignment(Qt::AlignCenter);
        spinBoxBorrowed->setReadOnly(true);
        label_10 = new QLabel(AdminRegisterDialog);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(30, 450, 211, 30));
        label_10->setFont(font);
        label_9 = new QLabel(AdminRegisterDialog);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(40, 370, 211, 30));
        label_9->setFont(font);
        label_7 = new QLabel(AdminRegisterDialog);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(33, 410, 211, 30));
        label_7->setFont(font);
        doubleSpinBoxFine = new QDoubleSpinBox(AdminRegisterDialog);
        doubleSpinBoxFine->setObjectName(QStringLiteral("doubleSpinBoxFine"));
        doubleSpinBoxFine->setEnabled(true);
        doubleSpinBoxFine->setGeometry(QRect(270, 450, 120, 30));
        doubleSpinBoxFine->setFont(font1);
        doubleSpinBoxFine->setFocusPolicy(Qt::NoFocus);
        doubleSpinBoxFine->setAlignment(Qt::AlignCenter);
        doubleSpinBoxFine->setReadOnly(true);
        doubleSpinBoxFine->setMaximum(9999.99);
        spinBoxMaxBorrow = new QSpinBox(AdminRegisterDialog);
        spinBoxMaxBorrow->setObjectName(QStringLiteral("spinBoxMaxBorrow"));
        spinBoxMaxBorrow->setEnabled(true);
        spinBoxMaxBorrow->setGeometry(QRect(270, 370, 120, 30));
        spinBoxMaxBorrow->setFont(font1);
        spinBoxMaxBorrow->setFocusPolicy(Qt::NoFocus);
        spinBoxMaxBorrow->setAlignment(Qt::AlignCenter);
        spinBoxMaxBorrow->setReadOnly(true);
        spinBoxMaxBorrow->setValue(2);
        label_8 = new QLabel(AdminRegisterDialog);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(80, 320, 311, 31));
        QFont font2;
        font2.setPointSize(23);
        label_8->setFont(font2);
        label_11 = new QLabel(AdminRegisterDialog);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(100, 20, 271, 31));
        label_11->setFont(font2);
        pushButtonCancel = new QPushButton(AdminRegisterDialog);
        pushButtonCancel->setObjectName(QStringLiteral("pushButtonCancel"));
        pushButtonCancel->setGeometry(QRect(270, 510, 111, 51));
        QFont font3;
        font3.setPointSize(12);
        pushButtonCancel->setFont(font3);
        pushButtonConfirm = new QPushButton(AdminRegisterDialog);
        pushButtonConfirm->setObjectName(QStringLiteral("pushButtonConfirm"));
        pushButtonConfirm->setGeometry(QRect(60, 510, 111, 51));
        pushButtonConfirm->setFont(font3);

        retranslateUi(AdminRegisterDialog);

        QMetaObject::connectSlotsByName(AdminRegisterDialog);
    } // setupUi

    void retranslateUi(QDialog *AdminRegisterDialog)
    {
        AdminRegisterDialog->setWindowTitle(QApplication::translate("AdminRegisterDialog", "Dialog", 0));
        label_3->setText(QApplication::translate("AdminRegisterDialog", "User Type:", 0));
        label_2->setText(QApplication::translate("AdminRegisterDialog", "    Name   :", 0));
        label_5->setText(QApplication::translate("AdminRegisterDialog", "    Email   :", 0));
        label_4->setText(QApplication::translate("AdminRegisterDialog", "   Phone   :", 0));
        label->setText(QApplication::translate("AdminRegisterDialog", "Reader ID :", 0));
        label_6->setText(QApplication::translate("AdminRegisterDialog", "Password :", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("AdminRegisterDialog", "Student", 0)
         << QApplication::translate("AdminRegisterDialog", "Teacher", 0)
        );
        label_10->setText(QApplication::translate("AdminRegisterDialog", "        Current Fines       :", 0));
        label_9->setText(QApplication::translate("AdminRegisterDialog", "   Max Borrow Num   :", 0));
        label_7->setText(QApplication::translate("AdminRegisterDialog", "     Books Borrowed    :", 0));
        doubleSpinBoxFine->setPrefix(QString());
        doubleSpinBoxFine->setSuffix(QApplication::translate("AdminRegisterDialog", "  RMB", 0));
        label_8->setText(QApplication::translate("AdminRegisterDialog", "Borrow Information", 0));
        label_11->setText(QApplication::translate("AdminRegisterDialog", "Basic Information", 0));
        pushButtonCancel->setText(QApplication::translate("AdminRegisterDialog", "Cancel", 0));
        pushButtonConfirm->setText(QApplication::translate("AdminRegisterDialog", "Register", 0));
    } // retranslateUi

};

namespace Ui {
    class AdminRegisterDialog: public Ui_AdminRegisterDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINREGISTERDIALOG_H

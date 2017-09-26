/********************************************************************************
** Form generated from reading UI file 'adminnullifydialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINNULLIFYDIALOG_H
#define UI_ADMINNULLIFYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_AdminNullifyDialog
{
public:
    QSpinBox *spinBoxBorrowed;
    QLineEdit *lineEditType;
    QLineEdit *lineEditName;
    QLabel *label_9;
    QSpinBox *spinBoxMaxBorrow;
    QLineEdit *lineEditRID;
    QLabel *label_2;
    QDoubleSpinBox *doubleSpinBoxFine;
    QLabel *label_3;
    QLabel *label_10;
    QPushButton *pushButtonRIDVerify;
    QLabel *label_6;
    QLabel *label;
    QLineEdit *lineEditEmail;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEditPhone;
    QPushButton *pushButtonConfirm;
    QPushButton *pushButtonCancel;

    void setupUi(QDialog *AdminNullifyDialog)
    {
        if (AdminNullifyDialog->objectName().isEmpty())
            AdminNullifyDialog->setObjectName(QStringLiteral("AdminNullifyDialog"));
        AdminNullifyDialog->resize(429, 451);
        spinBoxBorrowed = new QSpinBox(AdminNullifyDialog);
        spinBoxBorrowed->setObjectName(QStringLiteral("spinBoxBorrowed"));
        spinBoxBorrowed->setEnabled(false);
        spinBoxBorrowed->setGeometry(QRect(273, 230, 120, 30));
        QFont font;
        font.setPointSize(14);
        spinBoxBorrowed->setFont(font);
        spinBoxBorrowed->setFocusPolicy(Qt::NoFocus);
        spinBoxBorrowed->setAlignment(Qt::AlignCenter);
        spinBoxBorrowed->setReadOnly(true);
        lineEditType = new QLineEdit(AdminNullifyDialog);
        lineEditType->setObjectName(QStringLiteral("lineEditType"));
        lineEditType->setEnabled(false);
        lineEditType->setGeometry(QRect(220, 190, 175, 30));
        lineEditType->setFont(font);
        lineEditType->setFocusPolicy(Qt::NoFocus);
        lineEditType->setAlignment(Qt::AlignCenter);
        lineEditType->setReadOnly(true);
        lineEditName = new QLineEdit(AdminNullifyDialog);
        lineEditName->setObjectName(QStringLiteral("lineEditName"));
        lineEditName->setEnabled(false);
        lineEditName->setGeometry(QRect(220, 70, 175, 30));
        lineEditName->setFont(font);
        lineEditName->setFocusPolicy(Qt::NoFocus);
        lineEditName->setAlignment(Qt::AlignCenter);
        lineEditName->setReadOnly(true);
        label_9 = new QLabel(AdminNullifyDialog);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(40, 270, 211, 30));
        QFont font1;
        font1.setPointSize(16);
        label_9->setFont(font1);
        spinBoxMaxBorrow = new QSpinBox(AdminNullifyDialog);
        spinBoxMaxBorrow->setObjectName(QStringLiteral("spinBoxMaxBorrow"));
        spinBoxMaxBorrow->setEnabled(false);
        spinBoxMaxBorrow->setGeometry(QRect(273, 270, 120, 30));
        spinBoxMaxBorrow->setFont(font);
        spinBoxMaxBorrow->setFocusPolicy(Qt::NoFocus);
        spinBoxMaxBorrow->setAlignment(Qt::AlignCenter);
        spinBoxMaxBorrow->setReadOnly(true);
        lineEditRID = new QLineEdit(AdminNullifyDialog);
        lineEditRID->setObjectName(QStringLiteral("lineEditRID"));
        lineEditRID->setEnabled(true);
        lineEditRID->setGeometry(QRect(220, 30, 120, 30));
        lineEditRID->setFont(font);
        lineEditRID->setFocusPolicy(Qt::StrongFocus);
        lineEditRID->setAlignment(Qt::AlignCenter);
        lineEditRID->setReadOnly(false);
        label_2 = new QLabel(AdminNullifyDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(80, 70, 100, 30));
        label_2->setFont(font1);
        doubleSpinBoxFine = new QDoubleSpinBox(AdminNullifyDialog);
        doubleSpinBoxFine->setObjectName(QStringLiteral("doubleSpinBoxFine"));
        doubleSpinBoxFine->setEnabled(false);
        doubleSpinBoxFine->setGeometry(QRect(273, 310, 120, 30));
        doubleSpinBoxFine->setFont(font);
        doubleSpinBoxFine->setFocusPolicy(Qt::NoFocus);
        doubleSpinBoxFine->setAlignment(Qt::AlignCenter);
        doubleSpinBoxFine->setReadOnly(true);
        doubleSpinBoxFine->setMaximum(9999.99);
        label_3 = new QLabel(AdminNullifyDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(80, 190, 100, 30));
        label_3->setFont(font1);
        label_10 = new QLabel(AdminNullifyDialog);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(32, 310, 211, 30));
        label_10->setFont(font1);
        pushButtonRIDVerify = new QPushButton(AdminNullifyDialog);
        pushButtonRIDVerify->setObjectName(QStringLiteral("pushButtonRIDVerify"));
        pushButtonRIDVerify->setGeometry(QRect(350, 30, 45, 30));
        label_6 = new QLabel(AdminNullifyDialog);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(33, 230, 211, 30));
        label_6->setFont(font1);
        label = new QLabel(AdminNullifyDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 30, 100, 30));
        label->setFont(font1);
        lineEditEmail = new QLineEdit(AdminNullifyDialog);
        lineEditEmail->setObjectName(QStringLiteral("lineEditEmail"));
        lineEditEmail->setEnabled(false);
        lineEditEmail->setGeometry(QRect(220, 150, 175, 30));
        QFont font2;
        font2.setPointSize(15);
        lineEditEmail->setFont(font2);
        lineEditEmail->setFocusPolicy(Qt::NoFocus);
        lineEditEmail->setAlignment(Qt::AlignCenter);
        lineEditEmail->setReadOnly(true);
        label_4 = new QLabel(AdminNullifyDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(82, 110, 100, 30));
        label_4->setFont(font1);
        label_5 = new QLabel(AdminNullifyDialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(83, 150, 100, 30));
        label_5->setFont(font1);
        lineEditPhone = new QLineEdit(AdminNullifyDialog);
        lineEditPhone->setObjectName(QStringLiteral("lineEditPhone"));
        lineEditPhone->setEnabled(false);
        lineEditPhone->setGeometry(QRect(220, 110, 175, 30));
        lineEditPhone->setFont(font2);
        lineEditPhone->setFocusPolicy(Qt::NoFocus);
        lineEditPhone->setAlignment(Qt::AlignCenter);
        lineEditPhone->setReadOnly(true);
        pushButtonConfirm = new QPushButton(AdminNullifyDialog);
        pushButtonConfirm->setObjectName(QStringLiteral("pushButtonConfirm"));
        pushButtonConfirm->setGeometry(QRect(60, 370, 111, 51));
        QFont font3;
        font3.setPointSize(12);
        pushButtonConfirm->setFont(font3);
        pushButtonCancel = new QPushButton(AdminNullifyDialog);
        pushButtonCancel->setObjectName(QStringLiteral("pushButtonCancel"));
        pushButtonCancel->setGeometry(QRect(260, 370, 111, 51));
        pushButtonCancel->setFont(font3);

        retranslateUi(AdminNullifyDialog);

        QMetaObject::connectSlotsByName(AdminNullifyDialog);
    } // setupUi

    void retranslateUi(QDialog *AdminNullifyDialog)
    {
        AdminNullifyDialog->setWindowTitle(QApplication::translate("AdminNullifyDialog", "Dialog", 0));
        label_9->setText(QApplication::translate("AdminNullifyDialog", "   Max Borrow Num   :", 0));
        label_2->setText(QApplication::translate("AdminNullifyDialog", "    Name   :", 0));
        doubleSpinBoxFine->setPrefix(QString());
        doubleSpinBoxFine->setSuffix(QApplication::translate("AdminNullifyDialog", "  RMB", 0));
        label_3->setText(QApplication::translate("AdminNullifyDialog", "User Type:", 0));
        label_10->setText(QApplication::translate("AdminNullifyDialog", "        Current Fines      : ", 0));
        pushButtonRIDVerify->setText(QApplication::translate("AdminNullifyDialog", "Verify", 0));
        label_6->setText(QApplication::translate("AdminNullifyDialog", "     Books Borrowed    :", 0));
        label->setText(QApplication::translate("AdminNullifyDialog", "Reader ID :", 0));
        label_4->setText(QApplication::translate("AdminNullifyDialog", "   Phone   :", 0));
        label_5->setText(QApplication::translate("AdminNullifyDialog", "    Email   :", 0));
        pushButtonConfirm->setText(QApplication::translate("AdminNullifyDialog", "Nullify", 0));
        pushButtonCancel->setText(QApplication::translate("AdminNullifyDialog", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class AdminNullifyDialog: public Ui_AdminNullifyDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINNULLIFYDIALOG_H

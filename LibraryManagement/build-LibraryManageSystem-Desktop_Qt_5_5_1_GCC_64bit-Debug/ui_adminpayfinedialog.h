/********************************************************************************
** Form generated from reading UI file 'adminpayfinedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINPAYFINEDIALOG_H
#define UI_ADMINPAYFINEDIALOG_H

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

QT_BEGIN_NAMESPACE

class Ui_AdminPayFineDialog
{
public:
    QLabel *label;
    QDoubleSpinBox *doubleSpinBoxFine;
    QLabel *label_2;
    QLabel *label_10;
    QLineEdit *lineEditType;
    QLineEdit *lineEditName;
    QLabel *label_3;
    QLineEdit *lineEditRID;
    QPushButton *pushButtonRIDVerify;
    QLabel *label_11;
    QLabel *label_12;
    QDoubleSpinBox *doubleSpinBoxPaidFine;
    QDoubleSpinBox *doubleSpinBoxLeftFine;
    QPushButton *pushButtonConfirm;
    QPushButton *pushButtonCancel;

    void setupUi(QDialog *AdminPayFineDialog)
    {
        if (AdminPayFineDialog->objectName().isEmpty())
            AdminPayFineDialog->setObjectName(QStringLiteral("AdminPayFineDialog"));
        AdminPayFineDialog->resize(428, 388);
        label = new QLabel(AdminPayFineDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 30, 100, 30));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
        doubleSpinBoxFine = new QDoubleSpinBox(AdminPayFineDialog);
        doubleSpinBoxFine->setObjectName(QStringLiteral("doubleSpinBoxFine"));
        doubleSpinBoxFine->setEnabled(false);
        doubleSpinBoxFine->setGeometry(QRect(212, 150, 171, 30));
        QFont font1;
        font1.setPointSize(14);
        doubleSpinBoxFine->setFont(font1);
        doubleSpinBoxFine->setFocusPolicy(Qt::NoFocus);
        doubleSpinBoxFine->setAlignment(Qt::AlignCenter);
        doubleSpinBoxFine->setReadOnly(true);
        doubleSpinBoxFine->setMaximum(9999.99);
        label_2 = new QLabel(AdminPayFineDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 70, 100, 30));
        label_2->setFont(font);
        label_10 = new QLabel(AdminPayFineDialog);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(40, 150, 161, 30));
        label_10->setFont(font);
        lineEditType = new QLineEdit(AdminPayFineDialog);
        lineEditType->setObjectName(QStringLiteral("lineEditType"));
        lineEditType->setEnabled(false);
        lineEditType->setGeometry(QRect(210, 110, 175, 30));
        lineEditType->setFont(font1);
        lineEditType->setFocusPolicy(Qt::NoFocus);
        lineEditType->setAlignment(Qt::AlignCenter);
        lineEditType->setReadOnly(true);
        lineEditName = new QLineEdit(AdminPayFineDialog);
        lineEditName->setObjectName(QStringLiteral("lineEditName"));
        lineEditName->setEnabled(false);
        lineEditName->setGeometry(QRect(210, 70, 175, 30));
        lineEditName->setFont(font1);
        lineEditName->setFocusPolicy(Qt::NoFocus);
        lineEditName->setAutoFillBackground(false);
        lineEditName->setAlignment(Qt::AlignCenter);
        lineEditName->setReadOnly(true);
        label_3 = new QLabel(AdminPayFineDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(70, 110, 100, 30));
        label_3->setFont(font);
        lineEditRID = new QLineEdit(AdminPayFineDialog);
        lineEditRID->setObjectName(QStringLiteral("lineEditRID"));
        lineEditRID->setEnabled(true);
        lineEditRID->setGeometry(QRect(210, 30, 120, 30));
        lineEditRID->setFont(font1);
        lineEditRID->setFocusPolicy(Qt::StrongFocus);
        lineEditRID->setAlignment(Qt::AlignCenter);
        lineEditRID->setReadOnly(false);
        pushButtonRIDVerify = new QPushButton(AdminPayFineDialog);
        pushButtonRIDVerify->setObjectName(QStringLiteral("pushButtonRIDVerify"));
        pushButtonRIDVerify->setGeometry(QRect(340, 30, 45, 30));
        label_11 = new QLabel(AdminPayFineDialog);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(60, 200, 121, 30));
        label_11->setFont(font);
        label_12 = new QLabel(AdminPayFineDialog);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(62, 240, 121, 30));
        label_12->setFont(font);
        doubleSpinBoxPaidFine = new QDoubleSpinBox(AdminPayFineDialog);
        doubleSpinBoxPaidFine->setObjectName(QStringLiteral("doubleSpinBoxPaidFine"));
        doubleSpinBoxPaidFine->setEnabled(true);
        doubleSpinBoxPaidFine->setGeometry(QRect(210, 200, 171, 30));
        doubleSpinBoxPaidFine->setFont(font1);
        doubleSpinBoxPaidFine->setFocusPolicy(Qt::WheelFocus);
        doubleSpinBoxPaidFine->setAlignment(Qt::AlignCenter);
        doubleSpinBoxPaidFine->setReadOnly(false);
        doubleSpinBoxPaidFine->setMaximum(9999.99);
        doubleSpinBoxLeftFine = new QDoubleSpinBox(AdminPayFineDialog);
        doubleSpinBoxLeftFine->setObjectName(QStringLiteral("doubleSpinBoxLeftFine"));
        doubleSpinBoxLeftFine->setEnabled(false);
        doubleSpinBoxLeftFine->setGeometry(QRect(210, 240, 171, 30));
        doubleSpinBoxLeftFine->setFont(font1);
        doubleSpinBoxLeftFine->setFocusPolicy(Qt::NoFocus);
        doubleSpinBoxLeftFine->setAlignment(Qt::AlignCenter);
        doubleSpinBoxLeftFine->setReadOnly(true);
        doubleSpinBoxLeftFine->setMaximum(9999.99);
        pushButtonConfirm = new QPushButton(AdminPayFineDialog);
        pushButtonConfirm->setObjectName(QStringLiteral("pushButtonConfirm"));
        pushButtonConfirm->setGeometry(QRect(60, 310, 111, 51));
        QFont font2;
        font2.setPointSize(12);
        pushButtonConfirm->setFont(font2);
        pushButtonCancel = new QPushButton(AdminPayFineDialog);
        pushButtonCancel->setObjectName(QStringLiteral("pushButtonCancel"));
        pushButtonCancel->setGeometry(QRect(260, 310, 111, 51));
        pushButtonCancel->setFont(font2);

        retranslateUi(AdminPayFineDialog);

        QMetaObject::connectSlotsByName(AdminPayFineDialog);
    } // setupUi

    void retranslateUi(QDialog *AdminPayFineDialog)
    {
        AdminPayFineDialog->setWindowTitle(QApplication::translate("AdminPayFineDialog", "Dialog", 0));
        label->setText(QApplication::translate("AdminPayFineDialog", "Reader ID :", 0));
        doubleSpinBoxFine->setPrefix(QString());
        doubleSpinBoxFine->setSuffix(QApplication::translate("AdminPayFineDialog", "  RMB", 0));
        label_2->setText(QApplication::translate("AdminPayFineDialog", "    Name   :", 0));
        label_10->setText(QApplication::translate("AdminPayFineDialog", "  Current Fines  :", 0));
        label_3->setText(QApplication::translate("AdminPayFineDialog", "User Type:", 0));
        pushButtonRIDVerify->setText(QApplication::translate("AdminPayFineDialog", "Verify", 0));
        label_11->setText(QApplication::translate("AdminPayFineDialog", "  Paid Fines  :", 0));
        label_12->setText(QApplication::translate("AdminPayFineDialog", "  Left Fines  :", 0));
        doubleSpinBoxPaidFine->setPrefix(QString());
        doubleSpinBoxPaidFine->setSuffix(QApplication::translate("AdminPayFineDialog", "  RMB", 0));
        doubleSpinBoxLeftFine->setPrefix(QString());
        doubleSpinBoxLeftFine->setSuffix(QApplication::translate("AdminPayFineDialog", "  RMB", 0));
        pushButtonConfirm->setText(QApplication::translate("AdminPayFineDialog", "Pay Fines", 0));
        pushButtonCancel->setText(QApplication::translate("AdminPayFineDialog", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class AdminPayFineDialog: public Ui_AdminPayFineDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINPAYFINEDIALOG_H

/********************************************************************************
** Form generated from reading UI file 'adminreturndialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINRETURNDIALOG_H
#define UI_ADMINRETURNDIALOG_H

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
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_AdminReturnDialog
{
public:
    QLineEdit *lineEditType;
    QLineEdit *lineEditName;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label;
    QLineEdit *lineEditRID;
    QPushButton *pushButtonRIDVerify;
    QLabel *label_10;
    QDoubleSpinBox *doubleSpinBoxFine;
    QPushButton *pushButtonBIDVerify;
    QLineEdit *lineEditISBN;
    QLabel *label_8;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEditBID;
    QLabel *label_7;
    QLineEdit *lineEditState;
    QLineEdit *lineEditTitle;
    QLabel *label_6;
    QSpinBox *spinBoxDay;
    QLabel *label_9;
    QLabel *label_11;
    QSpinBox *spinBoxHour;
    QLabel *label_12;
    QRadioButton *radioButtonDamage;
    QRadioButton *radioButtonIntact;
    QDoubleSpinBox *doubleSpinBoxNewFine;
    QLabel *label_13;
    QPushButton *pushButtonConfirm;
    QPushButton *pushButtonCancel;
    QLabel *label_14;
    QDoubleSpinBox *doubleSpinBoxPrice;

    void setupUi(QDialog *AdminReturnDialog)
    {
        if (AdminReturnDialog->objectName().isEmpty())
            AdminReturnDialog->setObjectName(QStringLiteral("AdminReturnDialog"));
        AdminReturnDialog->resize(423, 641);
        lineEditType = new QLineEdit(AdminReturnDialog);
        lineEditType->setObjectName(QStringLiteral("lineEditType"));
        lineEditType->setEnabled(false);
        lineEditType->setGeometry(QRect(210, 100, 175, 30));
        QFont font;
        font.setPointSize(14);
        lineEditType->setFont(font);
        lineEditType->setFocusPolicy(Qt::NoFocus);
        lineEditType->setAlignment(Qt::AlignCenter);
        lineEditType->setReadOnly(true);
        lineEditName = new QLineEdit(AdminReturnDialog);
        lineEditName->setObjectName(QStringLiteral("lineEditName"));
        lineEditName->setEnabled(false);
        lineEditName->setGeometry(QRect(210, 60, 175, 30));
        lineEditName->setFont(font);
        lineEditName->setFocusPolicy(Qt::NoFocus);
        lineEditName->setAlignment(Qt::AlignCenter);
        lineEditName->setReadOnly(true);
        label_2 = new QLabel(AdminReturnDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 60, 100, 30));
        QFont font1;
        font1.setPointSize(16);
        label_2->setFont(font1);
        label_3 = new QLabel(AdminReturnDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(70, 100, 100, 30));
        label_3->setFont(font1);
        label = new QLabel(AdminReturnDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 20, 100, 30));
        label->setFont(font1);
        lineEditRID = new QLineEdit(AdminReturnDialog);
        lineEditRID->setObjectName(QStringLiteral("lineEditRID"));
        lineEditRID->setEnabled(true);
        lineEditRID->setGeometry(QRect(210, 20, 120, 30));
        lineEditRID->setFont(font);
        lineEditRID->setFocusPolicy(Qt::StrongFocus);
        lineEditRID->setAlignment(Qt::AlignCenter);
        lineEditRID->setReadOnly(false);
        pushButtonRIDVerify = new QPushButton(AdminReturnDialog);
        pushButtonRIDVerify->setObjectName(QStringLiteral("pushButtonRIDVerify"));
        pushButtonRIDVerify->setGeometry(QRect(340, 20, 45, 30));
        label_10 = new QLabel(AdminReturnDialog);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(27, 140, 211, 30));
        label_10->setFont(font1);
        doubleSpinBoxFine = new QDoubleSpinBox(AdminReturnDialog);
        doubleSpinBoxFine->setObjectName(QStringLiteral("doubleSpinBoxFine"));
        doubleSpinBoxFine->setEnabled(false);
        doubleSpinBoxFine->setGeometry(QRect(212, 140, 171, 30));
        doubleSpinBoxFine->setFont(font);
        doubleSpinBoxFine->setFocusPolicy(Qt::NoFocus);
        doubleSpinBoxFine->setAlignment(Qt::AlignCenter);
        doubleSpinBoxFine->setReadOnly(true);
        doubleSpinBoxFine->setMaximum(9999.99);
        pushButtonBIDVerify = new QPushButton(AdminReturnDialog);
        pushButtonBIDVerify->setObjectName(QStringLiteral("pushButtonBIDVerify"));
        pushButtonBIDVerify->setGeometry(QRect(339, 190, 45, 30));
        lineEditISBN = new QLineEdit(AdminReturnDialog);
        lineEditISBN->setObjectName(QStringLiteral("lineEditISBN"));
        lineEditISBN->setEnabled(false);
        lineEditISBN->setGeometry(QRect(208, 270, 175, 30));
        lineEditISBN->setFont(font);
        lineEditISBN->setFocusPolicy(Qt::NoFocus);
        lineEditISBN->setAlignment(Qt::AlignCenter);
        lineEditISBN->setReadOnly(true);
        label_8 = new QLabel(AdminReturnDialog);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(59, 270, 121, 30));
        label_8->setFont(font1);
        label_4 = new QLabel(AdminReturnDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(59, 190, 121, 30));
        label_4->setFont(font1);
        label_5 = new QLabel(AdminReturnDialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(59, 360, 121, 30));
        label_5->setFont(font1);
        lineEditBID = new QLineEdit(AdminReturnDialog);
        lineEditBID->setObjectName(QStringLiteral("lineEditBID"));
        lineEditBID->setEnabled(true);
        lineEditBID->setGeometry(QRect(209, 190, 120, 30));
        lineEditBID->setFont(font);
        lineEditBID->setFocusPolicy(Qt::StrongFocus);
        lineEditBID->setAlignment(Qt::AlignCenter);
        lineEditBID->setReadOnly(false);
        label_7 = new QLabel(AdminReturnDialog);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(60, 230, 121, 30));
        label_7->setFont(font1);
        lineEditState = new QLineEdit(AdminReturnDialog);
        lineEditState->setObjectName(QStringLiteral("lineEditState"));
        lineEditState->setEnabled(false);
        lineEditState->setGeometry(QRect(209, 360, 175, 30));
        lineEditState->setFont(font);
        lineEditState->setFocusPolicy(Qt::NoFocus);
        lineEditState->setAlignment(Qt::AlignCenter);
        lineEditState->setReadOnly(true);
        lineEditTitle = new QLineEdit(AdminReturnDialog);
        lineEditTitle->setObjectName(QStringLiteral("lineEditTitle"));
        lineEditTitle->setEnabled(false);
        lineEditTitle->setGeometry(QRect(209, 230, 175, 30));
        lineEditTitle->setFont(font);
        lineEditTitle->setFocusPolicy(Qt::NoFocus);
        lineEditTitle->setAlignment(Qt::AlignCenter);
        lineEditTitle->setReadOnly(true);
        label_6 = new QLabel(AdminReturnDialog);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(36, 400, 141, 30));
        label_6->setFont(font1);
        spinBoxDay = new QSpinBox(AdminReturnDialog);
        spinBoxDay->setObjectName(QStringLiteral("spinBoxDay"));
        spinBoxDay->setEnabled(false);
        spinBoxDay->setGeometry(QRect(210, 400, 51, 30));
        spinBoxDay->setFont(font);
        spinBoxDay->setFocusPolicy(Qt::NoFocus);
        spinBoxDay->setReadOnly(true);
        spinBoxDay->setMaximum(1000);
        label_9 = new QLabel(AdminReturnDialog);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(261, 400, 41, 31));
        label_9->setFont(font);
        label_11 = new QLabel(AdminReturnDialog);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(347, 400, 51, 31));
        label_11->setFont(font);
        spinBoxHour = new QSpinBox(AdminReturnDialog);
        spinBoxHour->setObjectName(QStringLiteral("spinBoxHour"));
        spinBoxHour->setEnabled(false);
        spinBoxHour->setGeometry(QRect(294, 400, 51, 30));
        spinBoxHour->setFont(font);
        spinBoxHour->setFocusPolicy(Qt::NoFocus);
        spinBoxHour->setReadOnly(true);
        spinBoxHour->setMaximum(24);
        label_12 = new QLabel(AdminReturnDialog);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(24, 450, 161, 30));
        label_12->setFont(font1);
        radioButtonDamage = new QRadioButton(AdminReturnDialog);
        radioButtonDamage->setObjectName(QStringLiteral("radioButtonDamage"));
        radioButtonDamage->setEnabled(false);
        radioButtonDamage->setGeometry(QRect(290, 450, 106, 30));
        radioButtonDamage->setFont(font);
        radioButtonIntact = new QRadioButton(AdminReturnDialog);
        radioButtonIntact->setObjectName(QStringLiteral("radioButtonIntact"));
        radioButtonIntact->setEnabled(false);
        radioButtonIntact->setGeometry(QRect(210, 450, 71, 30));
        radioButtonIntact->setFont(font);
        doubleSpinBoxNewFine = new QDoubleSpinBox(AdminReturnDialog);
        doubleSpinBoxNewFine->setObjectName(QStringLiteral("doubleSpinBoxNewFine"));
        doubleSpinBoxNewFine->setEnabled(true);
        doubleSpinBoxNewFine->setGeometry(QRect(210, 490, 175, 30));
        doubleSpinBoxNewFine->setFont(font);
        doubleSpinBoxNewFine->setFocusPolicy(Qt::NoFocus);
        doubleSpinBoxNewFine->setAlignment(Qt::AlignCenter);
        doubleSpinBoxNewFine->setReadOnly(true);
        doubleSpinBoxNewFine->setMaximum(9999.99);
        label_13 = new QLabel(AdminReturnDialog);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(30, 490, 151, 30));
        label_13->setFont(font1);
        pushButtonConfirm = new QPushButton(AdminReturnDialog);
        pushButtonConfirm->setObjectName(QStringLiteral("pushButtonConfirm"));
        pushButtonConfirm->setGeometry(QRect(60, 540, 111, 51));
        QFont font2;
        font2.setPointSize(12);
        pushButtonConfirm->setFont(font2);
        pushButtonCancel = new QPushButton(AdminReturnDialog);
        pushButtonCancel->setObjectName(QStringLiteral("pushButtonCancel"));
        pushButtonCancel->setGeometry(QRect(250, 540, 111, 51));
        pushButtonCancel->setFont(font2);
        label_14 = new QLabel(AdminReturnDialog);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(50, 310, 121, 30));
        label_14->setFont(font1);
        doubleSpinBoxPrice = new QDoubleSpinBox(AdminReturnDialog);
        doubleSpinBoxPrice->setObjectName(QStringLiteral("doubleSpinBoxPrice"));
        doubleSpinBoxPrice->setEnabled(false);
        doubleSpinBoxPrice->setGeometry(QRect(210, 310, 175, 30));
        doubleSpinBoxPrice->setFont(font);
        doubleSpinBoxPrice->setFocusPolicy(Qt::NoFocus);
        doubleSpinBoxPrice->setAlignment(Qt::AlignCenter);
        doubleSpinBoxPrice->setReadOnly(true);

        retranslateUi(AdminReturnDialog);

        QMetaObject::connectSlotsByName(AdminReturnDialog);
    } // setupUi

    void retranslateUi(QDialog *AdminReturnDialog)
    {
        AdminReturnDialog->setWindowTitle(QApplication::translate("AdminReturnDialog", "Dialog", 0));
        label_2->setText(QApplication::translate("AdminReturnDialog", "    Name   :", 0));
        label_3->setText(QApplication::translate("AdminReturnDialog", "User Type:", 0));
        label->setText(QApplication::translate("AdminReturnDialog", "Reader ID :", 0));
        pushButtonRIDVerify->setText(QApplication::translate("AdminReturnDialog", "Verify", 0));
        label_10->setText(QApplication::translate("AdminReturnDialog", "    Current Fines   :", 0));
        doubleSpinBoxFine->setPrefix(QString());
        doubleSpinBoxFine->setSuffix(QApplication::translate("AdminReturnDialog", "  RMB", 0));
        pushButtonBIDVerify->setText(QApplication::translate("AdminReturnDialog", "Verify", 0));
        label_8->setText(QApplication::translate("AdminReturnDialog", "Book ISBN :", 0));
        label_4->setText(QApplication::translate("AdminReturnDialog", "   Book ID   :", 0));
        label_5->setText(QApplication::translate("AdminReturnDialog", "Book State :", 0));
        label_7->setText(QApplication::translate("AdminReturnDialog", " Book Title :", 0));
        label_6->setText(QApplication::translate("AdminReturnDialog", "Overdue Span:", 0));
        label_9->setText(QApplication::translate("AdminReturnDialog", "Day", 0));
        label_11->setText(QApplication::translate("AdminReturnDialog", "Hour", 0));
        label_12->setText(QApplication::translate("AdminReturnDialog", "  Book Damage  :", 0));
        radioButtonDamage->setText(QApplication::translate("AdminReturnDialog", "Damaged", 0));
        radioButtonIntact->setText(QApplication::translate("AdminReturnDialog", "Intact", 0));
        doubleSpinBoxNewFine->setPrefix(QString());
        doubleSpinBoxNewFine->setSuffix(QApplication::translate("AdminReturnDialog", "  RMB", 0));
        label_13->setText(QApplication::translate("AdminReturnDialog", "Fines to be paid:", 0));
        pushButtonConfirm->setText(QApplication::translate("AdminReturnDialog", "Return", 0));
        pushButtonCancel->setText(QApplication::translate("AdminReturnDialog", "Cancel", 0));
        label_14->setText(QApplication::translate("AdminReturnDialog", "  Book Price :", 0));
        doubleSpinBoxPrice->setPrefix(QString());
        doubleSpinBoxPrice->setSuffix(QApplication::translate("AdminReturnDialog", "  RMB", 0));
    } // retranslateUi

};

namespace Ui {
    class AdminReturnDialog: public Ui_AdminReturnDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINRETURNDIALOG_H

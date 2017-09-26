/********************************************************************************
** Form generated from reading UI file 'adminborrowdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINBORROWDIALOG_H
#define UI_ADMINBORROWDIALOG_H

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

class Ui_AdminBorrowDialog
{
public:
    QLineEdit *lineEditRID;
    QLineEdit *lineEditName;
    QLabel *label;
    QLabel *label_3;
    QLineEdit *lineEditType;
    QLabel *label_9;
    QLabel *label_6;
    QLabel *label_2;
    QSpinBox *spinBoxBorrowed;
    QDoubleSpinBox *doubleSpinBoxFine;
    QSpinBox *spinBoxMaxBorrow;
    QLabel *label_10;
    QPushButton *pushButtonRIDVerify;
    QLabel *label_11;
    QSpinBox *spinBoxCount;
    QLabel *label_4;
    QLineEdit *lineEditBID;
    QPushButton *pushButtonBIDVerify;
    QLabel *label_5;
    QLineEdit *lineEditState;
    QPushButton *pushButtonCancel;
    QPushButton *pushButtonConfirm;
    QLabel *label_7;
    QLineEdit *lineEditTitle;
    QLineEdit *lineEditISBN;
    QLabel *label_8;

    void setupUi(QDialog *AdminBorrowDialog)
    {
        if (AdminBorrowDialog->objectName().isEmpty())
            AdminBorrowDialog->setObjectName(QStringLiteral("AdminBorrowDialog"));
        AdminBorrowDialog->resize(453, 566);
        lineEditRID = new QLineEdit(AdminBorrowDialog);
        lineEditRID->setObjectName(QStringLiteral("lineEditRID"));
        lineEditRID->setEnabled(true);
        lineEditRID->setGeometry(QRect(230, 30, 120, 30));
        QFont font;
        font.setPointSize(14);
        lineEditRID->setFont(font);
        lineEditRID->setFocusPolicy(Qt::StrongFocus);
        lineEditRID->setAlignment(Qt::AlignCenter);
        lineEditRID->setReadOnly(false);
        lineEditName = new QLineEdit(AdminBorrowDialog);
        lineEditName->setObjectName(QStringLiteral("lineEditName"));
        lineEditName->setEnabled(false);
        lineEditName->setGeometry(QRect(230, 70, 175, 30));
        lineEditName->setFont(font);
        lineEditName->setFocusPolicy(Qt::NoFocus);
        lineEditName->setAlignment(Qt::AlignCenter);
        lineEditName->setReadOnly(true);
        label = new QLabel(AdminBorrowDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 30, 100, 30));
        QFont font1;
        font1.setPointSize(16);
        label->setFont(font1);
        label_3 = new QLabel(AdminBorrowDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(90, 110, 100, 30));
        label_3->setFont(font1);
        lineEditType = new QLineEdit(AdminBorrowDialog);
        lineEditType->setObjectName(QStringLiteral("lineEditType"));
        lineEditType->setEnabled(false);
        lineEditType->setGeometry(QRect(230, 110, 175, 30));
        lineEditType->setFont(font);
        lineEditType->setFocusPolicy(Qt::NoFocus);
        lineEditType->setAlignment(Qt::AlignCenter);
        lineEditType->setReadOnly(true);
        label_9 = new QLabel(AdminBorrowDialog);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(50, 190, 211, 30));
        label_9->setFont(font1);
        label_6 = new QLabel(AdminBorrowDialog);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(43, 150, 211, 30));
        label_6->setFont(font1);
        label_2 = new QLabel(AdminBorrowDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(90, 70, 100, 30));
        label_2->setFont(font1);
        spinBoxBorrowed = new QSpinBox(AdminBorrowDialog);
        spinBoxBorrowed->setObjectName(QStringLiteral("spinBoxBorrowed"));
        spinBoxBorrowed->setEnabled(false);
        spinBoxBorrowed->setGeometry(QRect(283, 150, 120, 30));
        spinBoxBorrowed->setFont(font);
        spinBoxBorrowed->setFocusPolicy(Qt::NoFocus);
        spinBoxBorrowed->setAlignment(Qt::AlignCenter);
        spinBoxBorrowed->setReadOnly(true);
        doubleSpinBoxFine = new QDoubleSpinBox(AdminBorrowDialog);
        doubleSpinBoxFine->setObjectName(QStringLiteral("doubleSpinBoxFine"));
        doubleSpinBoxFine->setEnabled(false);
        doubleSpinBoxFine->setGeometry(QRect(283, 230, 120, 30));
        doubleSpinBoxFine->setFont(font);
        doubleSpinBoxFine->setFocusPolicy(Qt::NoFocus);
        doubleSpinBoxFine->setAlignment(Qt::AlignCenter);
        doubleSpinBoxFine->setReadOnly(true);
        doubleSpinBoxFine->setMaximum(9999.99);
        spinBoxMaxBorrow = new QSpinBox(AdminBorrowDialog);
        spinBoxMaxBorrow->setObjectName(QStringLiteral("spinBoxMaxBorrow"));
        spinBoxMaxBorrow->setEnabled(false);
        spinBoxMaxBorrow->setGeometry(QRect(283, 190, 120, 30));
        spinBoxMaxBorrow->setFont(font);
        spinBoxMaxBorrow->setFocusPolicy(Qt::NoFocus);
        spinBoxMaxBorrow->setAlignment(Qt::AlignCenter);
        spinBoxMaxBorrow->setReadOnly(true);
        label_10 = new QLabel(AdminBorrowDialog);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(42, 230, 221, 30));
        label_10->setFont(font1);
        pushButtonRIDVerify = new QPushButton(AdminBorrowDialog);
        pushButtonRIDVerify->setObjectName(QStringLiteral("pushButtonRIDVerify"));
        pushButtonRIDVerify->setGeometry(QRect(360, 30, 45, 30));
        label_11 = new QLabel(AdminBorrowDialog);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(40, 270, 221, 30));
        label_11->setFont(font1);
        spinBoxCount = new QSpinBox(AdminBorrowDialog);
        spinBoxCount->setObjectName(QStringLiteral("spinBoxCount"));
        spinBoxCount->setEnabled(false);
        spinBoxCount->setGeometry(QRect(283, 270, 120, 30));
        spinBoxCount->setFont(font);
        spinBoxCount->setFocusPolicy(Qt::NoFocus);
        spinBoxCount->setAlignment(Qt::AlignCenter);
        spinBoxCount->setReadOnly(true);
        label_4 = new QLabel(AdminBorrowDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(80, 320, 121, 30));
        label_4->setFont(font1);
        lineEditBID = new QLineEdit(AdminBorrowDialog);
        lineEditBID->setObjectName(QStringLiteral("lineEditBID"));
        lineEditBID->setEnabled(true);
        lineEditBID->setGeometry(QRect(230, 320, 120, 30));
        lineEditBID->setFont(font);
        lineEditBID->setFocusPolicy(Qt::StrongFocus);
        lineEditBID->setAlignment(Qt::AlignCenter);
        lineEditBID->setReadOnly(false);
        pushButtonBIDVerify = new QPushButton(AdminBorrowDialog);
        pushButtonBIDVerify->setObjectName(QStringLiteral("pushButtonBIDVerify"));
        pushButtonBIDVerify->setGeometry(QRect(360, 320, 45, 30));
        label_5 = new QLabel(AdminBorrowDialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(80, 440, 121, 30));
        label_5->setFont(font1);
        lineEditState = new QLineEdit(AdminBorrowDialog);
        lineEditState->setObjectName(QStringLiteral("lineEditState"));
        lineEditState->setEnabled(false);
        lineEditState->setGeometry(QRect(230, 440, 175, 30));
        lineEditState->setFont(font);
        lineEditState->setFocusPolicy(Qt::NoFocus);
        lineEditState->setAlignment(Qt::AlignCenter);
        lineEditState->setReadOnly(true);
        pushButtonCancel = new QPushButton(AdminBorrowDialog);
        pushButtonCancel->setObjectName(QStringLiteral("pushButtonCancel"));
        pushButtonCancel->setGeometry(QRect(280, 490, 111, 51));
        QFont font2;
        font2.setPointSize(12);
        pushButtonCancel->setFont(font2);
        pushButtonConfirm = new QPushButton(AdminBorrowDialog);
        pushButtonConfirm->setObjectName(QStringLiteral("pushButtonConfirm"));
        pushButtonConfirm->setGeometry(QRect(70, 490, 111, 51));
        pushButtonConfirm->setFont(font2);
        label_7 = new QLabel(AdminBorrowDialog);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(81, 360, 121, 30));
        label_7->setFont(font1);
        lineEditTitle = new QLineEdit(AdminBorrowDialog);
        lineEditTitle->setObjectName(QStringLiteral("lineEditTitle"));
        lineEditTitle->setEnabled(false);
        lineEditTitle->setGeometry(QRect(230, 360, 175, 30));
        lineEditTitle->setFont(font);
        lineEditTitle->setFocusPolicy(Qt::NoFocus);
        lineEditTitle->setAlignment(Qt::AlignCenter);
        lineEditTitle->setReadOnly(true);
        lineEditISBN = new QLineEdit(AdminBorrowDialog);
        lineEditISBN->setObjectName(QStringLiteral("lineEditISBN"));
        lineEditISBN->setEnabled(false);
        lineEditISBN->setGeometry(QRect(229, 400, 175, 30));
        lineEditISBN->setFont(font);
        lineEditISBN->setFocusPolicy(Qt::NoFocus);
        lineEditISBN->setAlignment(Qt::AlignCenter);
        lineEditISBN->setReadOnly(true);
        label_8 = new QLabel(AdminBorrowDialog);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(80, 400, 121, 30));
        label_8->setFont(font1);

        retranslateUi(AdminBorrowDialog);

        QMetaObject::connectSlotsByName(AdminBorrowDialog);
    } // setupUi

    void retranslateUi(QDialog *AdminBorrowDialog)
    {
        AdminBorrowDialog->setWindowTitle(QApplication::translate("AdminBorrowDialog", "Dialog", 0));
        label->setText(QApplication::translate("AdminBorrowDialog", "Reader ID :", 0));
        label_3->setText(QApplication::translate("AdminBorrowDialog", "User Type:", 0));
        label_9->setText(QApplication::translate("AdminBorrowDialog", "   Max Borrow Num   :", 0));
        label_6->setText(QApplication::translate("AdminBorrowDialog", "     Books Borrowed    :", 0));
        label_2->setText(QApplication::translate("AdminBorrowDialog", "    Name   :", 0));
        doubleSpinBoxFine->setPrefix(QString());
        doubleSpinBoxFine->setSuffix(QApplication::translate("AdminBorrowDialog", "  RMB", 0));
        label_10->setText(QApplication::translate("AdminBorrowDialog", "        Current Fines      :", 0));
        pushButtonRIDVerify->setText(QApplication::translate("AdminBorrowDialog", "Verify", 0));
        label_11->setText(QApplication::translate("AdminBorrowDialog", " Overdue Books Count:", 0));
        label_4->setText(QApplication::translate("AdminBorrowDialog", "   Book ID   :", 0));
        pushButtonBIDVerify->setText(QApplication::translate("AdminBorrowDialog", "Verify", 0));
        label_5->setText(QApplication::translate("AdminBorrowDialog", "Book State :", 0));
        pushButtonCancel->setText(QApplication::translate("AdminBorrowDialog", "Cancel", 0));
        pushButtonConfirm->setText(QApplication::translate("AdminBorrowDialog", "Borrow", 0));
        label_7->setText(QApplication::translate("AdminBorrowDialog", " Book Title :", 0));
        label_8->setText(QApplication::translate("AdminBorrowDialog", "Book ISBN :", 0));
    } // retranslateUi

};

namespace Ui {
    class AdminBorrowDialog: public Ui_AdminBorrowDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINBORROWDIALOG_H

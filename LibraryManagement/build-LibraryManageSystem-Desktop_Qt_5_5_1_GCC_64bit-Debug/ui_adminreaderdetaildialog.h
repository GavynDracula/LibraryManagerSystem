/********************************************************************************
** Form generated from reading UI file 'adminreaderdetaildialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINREADERDETAILDIALOG_H
#define UI_ADMINREADERDETAILDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_AdminReaderDetailDialog
{
public:
    QLabel *label_11;
    QLineEdit *lineEditName;
    QDoubleSpinBox *doubleSpinBoxFine;
    QLabel *label;
    QLabel *label_9;
    QLabel *label_4;
    QLabel *label_10;
    QLabel *label_8;
    QSpinBox *spinBoxBorrowed;
    QLabel *label_5;
    QLabel *label_3;
    QLineEdit *lineEditPhone;
    QLabel *label_7;
    QLabel *label_2;
    QLineEdit *lineEditEmail;
    QLineEdit *lineEditRID;
    QLabel *label_6;
    QLineEdit *lineEditPwd;
    QSpinBox *spinBoxMaxBorrow;
    QLineEdit *lineEditType;
    QTableView *tableView;
    QLabel *label_12;

    void setupUi(QDialog *AdminReaderDetailDialog)
    {
        if (AdminReaderDetailDialog->objectName().isEmpty())
            AdminReaderDetailDialog->setObjectName(QStringLiteral("AdminReaderDetailDialog"));
        AdminReaderDetailDialog->resize(485, 652);
        label_11 = new QLabel(AdminReaderDetailDialog);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(120, 20, 271, 31));
        QFont font;
        font.setPointSize(23);
        label_11->setFont(font);
        lineEditName = new QLineEdit(AdminReaderDetailDialog);
        lineEditName->setObjectName(QStringLiteral("lineEditName"));
        lineEditName->setEnabled(true);
        lineEditName->setGeometry(QRect(230, 150, 160, 30));
        QFont font1;
        font1.setPointSize(15);
        lineEditName->setFont(font1);
        lineEditName->setFocusPolicy(Qt::NoFocus);
        lineEditName->setAlignment(Qt::AlignCenter);
        lineEditName->setReadOnly(true);
        doubleSpinBoxFine = new QDoubleSpinBox(AdminReaderDetailDialog);
        doubleSpinBoxFine->setObjectName(QStringLiteral("doubleSpinBoxFine"));
        doubleSpinBoxFine->setEnabled(true);
        doubleSpinBoxFine->setGeometry(QRect(290, 450, 120, 30));
        doubleSpinBoxFine->setFont(font1);
        doubleSpinBoxFine->setFocusPolicy(Qt::NoFocus);
        doubleSpinBoxFine->setAlignment(Qt::AlignCenter);
        doubleSpinBoxFine->setReadOnly(true);
        doubleSpinBoxFine->setMaximum(9999.99);
        label = new QLabel(AdminReaderDetailDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 70, 100, 30));
        QFont font2;
        font2.setPointSize(16);
        label->setFont(font2);
        label_9 = new QLabel(AdminReaderDetailDialog);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(60, 370, 211, 30));
        label_9->setFont(font2);
        label_4 = new QLabel(AdminReaderDetailDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(92, 190, 100, 30));
        label_4->setFont(font2);
        label_10 = new QLabel(AdminReaderDetailDialog);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(50, 450, 211, 30));
        label_10->setFont(font2);
        label_8 = new QLabel(AdminReaderDetailDialog);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(100, 320, 311, 31));
        label_8->setFont(font);
        spinBoxBorrowed = new QSpinBox(AdminReaderDetailDialog);
        spinBoxBorrowed->setObjectName(QStringLiteral("spinBoxBorrowed"));
        spinBoxBorrowed->setEnabled(true);
        spinBoxBorrowed->setGeometry(QRect(290, 410, 120, 30));
        spinBoxBorrowed->setFont(font1);
        spinBoxBorrowed->setFocusPolicy(Qt::NoFocus);
        spinBoxBorrowed->setAlignment(Qt::AlignCenter);
        spinBoxBorrowed->setReadOnly(true);
        label_5 = new QLabel(AdminReaderDetailDialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(93, 230, 100, 30));
        label_5->setFont(font2);
        label_3 = new QLabel(AdminReaderDetailDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(90, 270, 100, 30));
        label_3->setFont(font2);
        lineEditPhone = new QLineEdit(AdminReaderDetailDialog);
        lineEditPhone->setObjectName(QStringLiteral("lineEditPhone"));
        lineEditPhone->setEnabled(true);
        lineEditPhone->setGeometry(QRect(230, 190, 160, 30));
        lineEditPhone->setFont(font1);
        lineEditPhone->setFocusPolicy(Qt::NoFocus);
        lineEditPhone->setAlignment(Qt::AlignCenter);
        lineEditPhone->setReadOnly(true);
        label_7 = new QLabel(AdminReaderDetailDialog);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(53, 410, 211, 30));
        label_7->setFont(font2);
        label_2 = new QLabel(AdminReaderDetailDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(90, 150, 100, 30));
        label_2->setFont(font2);
        lineEditEmail = new QLineEdit(AdminReaderDetailDialog);
        lineEditEmail->setObjectName(QStringLiteral("lineEditEmail"));
        lineEditEmail->setEnabled(true);
        lineEditEmail->setGeometry(QRect(230, 230, 160, 30));
        lineEditEmail->setFont(font1);
        lineEditEmail->setFocusPolicy(Qt::NoFocus);
        lineEditEmail->setAlignment(Qt::AlignCenter);
        lineEditEmail->setReadOnly(true);
        lineEditRID = new QLineEdit(AdminReaderDetailDialog);
        lineEditRID->setObjectName(QStringLiteral("lineEditRID"));
        lineEditRID->setEnabled(true);
        lineEditRID->setGeometry(QRect(230, 70, 160, 30));
        lineEditRID->setFont(font1);
        lineEditRID->setFocusPolicy(Qt::NoFocus);
        lineEditRID->setAlignment(Qt::AlignCenter);
        lineEditRID->setReadOnly(true);
        label_6 = new QLabel(AdminReaderDetailDialog);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(90, 110, 100, 30));
        label_6->setFont(font2);
        lineEditPwd = new QLineEdit(AdminReaderDetailDialog);
        lineEditPwd->setObjectName(QStringLiteral("lineEditPwd"));
        lineEditPwd->setEnabled(true);
        lineEditPwd->setGeometry(QRect(230, 110, 160, 30));
        lineEditPwd->setFont(font1);
        lineEditPwd->setFocusPolicy(Qt::NoFocus);
        lineEditPwd->setAlignment(Qt::AlignCenter);
        lineEditPwd->setReadOnly(true);
        spinBoxMaxBorrow = new QSpinBox(AdminReaderDetailDialog);
        spinBoxMaxBorrow->setObjectName(QStringLiteral("spinBoxMaxBorrow"));
        spinBoxMaxBorrow->setEnabled(true);
        spinBoxMaxBorrow->setGeometry(QRect(290, 370, 120, 30));
        spinBoxMaxBorrow->setFont(font1);
        spinBoxMaxBorrow->setFocusPolicy(Qt::NoFocus);
        spinBoxMaxBorrow->setAlignment(Qt::AlignCenter);
        spinBoxMaxBorrow->setReadOnly(true);
        spinBoxMaxBorrow->setValue(2);
        lineEditType = new QLineEdit(AdminReaderDetailDialog);
        lineEditType->setObjectName(QStringLiteral("lineEditType"));
        lineEditType->setEnabled(true);
        lineEditType->setGeometry(QRect(230, 270, 160, 30));
        lineEditType->setFont(font1);
        lineEditType->setFocusPolicy(Qt::NoFocus);
        lineEditType->setAlignment(Qt::AlignCenter);
        lineEditType->setReadOnly(true);
        tableView = new QTableView(AdminReaderDetailDialog);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(11, 540, 462, 91));
        label_12 = new QLabel(AdminReaderDetailDialog);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(120, 500, 241, 31));
        label_12->setFont(font);

        retranslateUi(AdminReaderDetailDialog);

        QMetaObject::connectSlotsByName(AdminReaderDetailDialog);
    } // setupUi

    void retranslateUi(QDialog *AdminReaderDetailDialog)
    {
        AdminReaderDetailDialog->setWindowTitle(QApplication::translate("AdminReaderDetailDialog", "Dialog", 0));
        label_11->setText(QApplication::translate("AdminReaderDetailDialog", "Basic Information", 0));
        doubleSpinBoxFine->setPrefix(QString());
        doubleSpinBoxFine->setSuffix(QApplication::translate("AdminReaderDetailDialog", "  RMB", 0));
        label->setText(QApplication::translate("AdminReaderDetailDialog", "Reader ID :", 0));
        label_9->setText(QApplication::translate("AdminReaderDetailDialog", "   Max Borrow Num   :", 0));
        label_4->setText(QApplication::translate("AdminReaderDetailDialog", "   Phone   :", 0));
        label_10->setText(QApplication::translate("AdminReaderDetailDialog", "        Current Fines       :", 0));
        label_8->setText(QApplication::translate("AdminReaderDetailDialog", "Borrow Information", 0));
        label_5->setText(QApplication::translate("AdminReaderDetailDialog", "    Email   :", 0));
        label_3->setText(QApplication::translate("AdminReaderDetailDialog", "User Type:", 0));
        label_7->setText(QApplication::translate("AdminReaderDetailDialog", "     Books Borrowed    :", 0));
        label_2->setText(QApplication::translate("AdminReaderDetailDialog", "    Name   :", 0));
        label_6->setText(QApplication::translate("AdminReaderDetailDialog", "Password :", 0));
        label_12->setText(QApplication::translate("AdminReaderDetailDialog", "Borrowed Books", 0));
    } // retranslateUi

};

namespace Ui {
    class AdminReaderDetailDialog: public Ui_AdminReaderDetailDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINREADERDETAILDIALOG_H

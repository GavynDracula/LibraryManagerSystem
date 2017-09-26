/********************************************************************************
** Form generated from reading UI file 'readerselfinfodialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_READERSELFINFODIALOG_H
#define UI_READERSELFINFODIALOG_H

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

QT_BEGIN_NAMESPACE

class Ui_ReaderSelfInfoDialog
{
public:
    QLabel *label;
    QLineEdit *lineEditRID;
    QLabel *label_2;
    QLineEdit *lineEditName;
    QLabel *label_3;
    QLineEdit *lineEditType;
    QLabel *label_4;
    QLineEdit *lineEditPhone;
    QLabel *label_5;
    QLineEdit *lineEditEmail;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QSpinBox *spinBoxBorrowed;
    QLabel *label_9;
    QSpinBox *spinBoxMaxBorrow;
    QDoubleSpinBox *doubleSpinBoxFine;
    QLabel *label_10;

    void setupUi(QDialog *ReaderSelfInfoDialog)
    {
        if (ReaderSelfInfoDialog->objectName().isEmpty())
            ReaderSelfInfoDialog->setObjectName(QStringLiteral("ReaderSelfInfoDialog"));
        ReaderSelfInfoDialog->resize(460, 496);
        label = new QLabel(ReaderSelfInfoDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 70, 100, 30));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
        lineEditRID = new QLineEdit(ReaderSelfInfoDialog);
        lineEditRID->setObjectName(QStringLiteral("lineEditRID"));
        lineEditRID->setEnabled(true);
        lineEditRID->setGeometry(QRect(220, 70, 160, 30));
        QFont font1;
        font1.setPointSize(15);
        lineEditRID->setFont(font1);
        lineEditRID->setFocusPolicy(Qt::NoFocus);
        lineEditRID->setAlignment(Qt::AlignCenter);
        lineEditRID->setReadOnly(true);
        label_2 = new QLabel(ReaderSelfInfoDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(80, 110, 100, 30));
        label_2->setFont(font);
        lineEditName = new QLineEdit(ReaderSelfInfoDialog);
        lineEditName->setObjectName(QStringLiteral("lineEditName"));
        lineEditName->setEnabled(true);
        lineEditName->setGeometry(QRect(220, 110, 160, 30));
        lineEditName->setFont(font1);
        lineEditName->setFocusPolicy(Qt::NoFocus);
        lineEditName->setAlignment(Qt::AlignCenter);
        lineEditName->setReadOnly(true);
        label_3 = new QLabel(ReaderSelfInfoDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(80, 150, 100, 30));
        label_3->setFont(font);
        lineEditType = new QLineEdit(ReaderSelfInfoDialog);
        lineEditType->setObjectName(QStringLiteral("lineEditType"));
        lineEditType->setEnabled(true);
        lineEditType->setGeometry(QRect(220, 150, 160, 30));
        lineEditType->setFont(font1);
        lineEditType->setFocusPolicy(Qt::NoFocus);
        lineEditType->setAlignment(Qt::AlignCenter);
        lineEditType->setReadOnly(true);
        label_4 = new QLabel(ReaderSelfInfoDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(80, 190, 100, 30));
        label_4->setFont(font);
        lineEditPhone = new QLineEdit(ReaderSelfInfoDialog);
        lineEditPhone->setObjectName(QStringLiteral("lineEditPhone"));
        lineEditPhone->setEnabled(true);
        lineEditPhone->setGeometry(QRect(220, 190, 160, 30));
        lineEditPhone->setFont(font1);
        lineEditPhone->setFocusPolicy(Qt::NoFocus);
        lineEditPhone->setAlignment(Qt::AlignCenter);
        lineEditPhone->setReadOnly(true);
        label_5 = new QLabel(ReaderSelfInfoDialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(80, 230, 100, 30));
        label_5->setFont(font);
        lineEditEmail = new QLineEdit(ReaderSelfInfoDialog);
        lineEditEmail->setObjectName(QStringLiteral("lineEditEmail"));
        lineEditEmail->setEnabled(true);
        lineEditEmail->setGeometry(QRect(220, 230, 160, 30));
        lineEditEmail->setFont(font1);
        lineEditEmail->setFocusPolicy(Qt::NoFocus);
        lineEditEmail->setAlignment(Qt::AlignCenter);
        lineEditEmail->setReadOnly(true);
        label_6 = new QLabel(ReaderSelfInfoDialog);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(53, 340, 211, 30));
        label_6->setFont(font);
        label_7 = new QLabel(ReaderSelfInfoDialog);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(110, 20, 271, 31));
        QFont font2;
        font2.setPointSize(23);
        label_7->setFont(font2);
        label_8 = new QLabel(ReaderSelfInfoDialog);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(100, 290, 311, 31));
        label_8->setFont(font2);
        spinBoxBorrowed = new QSpinBox(ReaderSelfInfoDialog);
        spinBoxBorrowed->setObjectName(QStringLiteral("spinBoxBorrowed"));
        spinBoxBorrowed->setEnabled(true);
        spinBoxBorrowed->setGeometry(QRect(290, 340, 120, 30));
        spinBoxBorrowed->setFont(font1);
        spinBoxBorrowed->setFocusPolicy(Qt::NoFocus);
        spinBoxBorrowed->setAlignment(Qt::AlignCenter);
        spinBoxBorrowed->setReadOnly(true);
        label_9 = new QLabel(ReaderSelfInfoDialog);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(60, 380, 211, 30));
        label_9->setFont(font);
        spinBoxMaxBorrow = new QSpinBox(ReaderSelfInfoDialog);
        spinBoxMaxBorrow->setObjectName(QStringLiteral("spinBoxMaxBorrow"));
        spinBoxMaxBorrow->setEnabled(true);
        spinBoxMaxBorrow->setGeometry(QRect(290, 380, 120, 30));
        spinBoxMaxBorrow->setFont(font1);
        spinBoxMaxBorrow->setFocusPolicy(Qt::NoFocus);
        spinBoxMaxBorrow->setAlignment(Qt::AlignCenter);
        spinBoxMaxBorrow->setReadOnly(true);
        doubleSpinBoxFine = new QDoubleSpinBox(ReaderSelfInfoDialog);
        doubleSpinBoxFine->setObjectName(QStringLiteral("doubleSpinBoxFine"));
        doubleSpinBoxFine->setEnabled(true);
        doubleSpinBoxFine->setGeometry(QRect(290, 420, 120, 30));
        doubleSpinBoxFine->setFont(font1);
        doubleSpinBoxFine->setFocusPolicy(Qt::NoFocus);
        doubleSpinBoxFine->setAlignment(Qt::AlignCenter);
        doubleSpinBoxFine->setReadOnly(true);
        doubleSpinBoxFine->setMaximum(9999.99);
        label_10 = new QLabel(ReaderSelfInfoDialog);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(52, 420, 211, 30));
        label_10->setFont(font);

        retranslateUi(ReaderSelfInfoDialog);

        QMetaObject::connectSlotsByName(ReaderSelfInfoDialog);
    } // setupUi

    void retranslateUi(QDialog *ReaderSelfInfoDialog)
    {
        ReaderSelfInfoDialog->setWindowTitle(QApplication::translate("ReaderSelfInfoDialog", "Dialog", 0));
        label->setText(QApplication::translate("ReaderSelfInfoDialog", "Reader ID :", 0));
        label_2->setText(QApplication::translate("ReaderSelfInfoDialog", "    Name   :", 0));
        label_3->setText(QApplication::translate("ReaderSelfInfoDialog", "User Type:", 0));
        label_4->setText(QApplication::translate("ReaderSelfInfoDialog", "   Phone   :", 0));
        label_5->setText(QApplication::translate("ReaderSelfInfoDialog", "    Email   :", 0));
        label_6->setText(QApplication::translate("ReaderSelfInfoDialog", "     Books Borrowed    :", 0));
        label_7->setText(QApplication::translate("ReaderSelfInfoDialog", "Basic Information", 0));
        label_8->setText(QApplication::translate("ReaderSelfInfoDialog", "Borrow Information", 0));
        label_9->setText(QApplication::translate("ReaderSelfInfoDialog", "   Max Borrow Num   :", 0));
        doubleSpinBoxFine->setPrefix(QString());
        doubleSpinBoxFine->setSuffix(QApplication::translate("ReaderSelfInfoDialog", "  RMB", 0));
        label_10->setText(QApplication::translate("ReaderSelfInfoDialog", "        Current Fines      :", 0));
    } // retranslateUi

};

namespace Ui {
    class ReaderSelfInfoDialog: public Ui_ReaderSelfInfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_READERSELFINFODIALOG_H

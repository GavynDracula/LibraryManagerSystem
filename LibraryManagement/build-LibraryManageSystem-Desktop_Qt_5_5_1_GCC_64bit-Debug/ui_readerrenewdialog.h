/********************************************************************************
** Form generated from reading UI file 'readerrenewdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_READERRENEWDIALOG_H
#define UI_READERRENEWDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_ReaderRenewDialog
{
public:
    QLineEdit *lineEditPublisher;
    QLineEdit *lineEditBID;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEditAuthor;
    QLabel *label_2;
    QLineEdit *lineEditTitle;
    QLabel *label_3;
    QLabel *label_6;
    QLabel *label_7;
    QDateTimeEdit *dateTimeEditBorrow;
    QDateTimeEdit *dateTimeEditDue;
    QLabel *label_8;
    QLabel *label_9;
    QDateTimeEdit *dateTimeEditDueAfter;
    QLabel *label_10;
    QPushButton *buttonCancel;
    QPushButton *buttonConfirm;
    QSpinBox *spinBoxRenew;
    QSpinBox *spinBoxRenewAfter;

    void setupUi(QDialog *ReaderRenewDialog)
    {
        if (ReaderRenewDialog->objectName().isEmpty())
            ReaderRenewDialog->setObjectName(QStringLiteral("ReaderRenewDialog"));
        ReaderRenewDialog->resize(423, 548);
        lineEditPublisher = new QLineEdit(ReaderRenewDialog);
        lineEditPublisher->setObjectName(QStringLiteral("lineEditPublisher"));
        lineEditPublisher->setEnabled(true);
        lineEditPublisher->setGeometry(QRect(210, 150, 160, 30));
        QFont font;
        font.setPointSize(12);
        lineEditPublisher->setFont(font);
        lineEditPublisher->setFocusPolicy(Qt::NoFocus);
        lineEditPublisher->setAlignment(Qt::AlignCenter);
        lineEditPublisher->setReadOnly(true);
        lineEditBID = new QLineEdit(ReaderRenewDialog);
        lineEditBID->setObjectName(QStringLiteral("lineEditBID"));
        lineEditBID->setEnabled(true);
        lineEditBID->setGeometry(QRect(210, 30, 160, 30));
        lineEditBID->setFont(font);
        lineEditBID->setFocusPolicy(Qt::NoFocus);
        lineEditBID->setAlignment(Qt::AlignCenter);
        lineEditBID->setReadOnly(true);
        label = new QLabel(ReaderRenewDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 30, 121, 30));
        QFont font1;
        font1.setPointSize(16);
        label->setFont(font1);
        label_4 = new QLabel(ReaderRenewDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(60, 150, 121, 30));
        label_4->setFont(font1);
        label_5 = new QLabel(ReaderRenewDialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(60, 270, 121, 30));
        label_5->setFont(font1);
        lineEditAuthor = new QLineEdit(ReaderRenewDialog);
        lineEditAuthor->setObjectName(QStringLiteral("lineEditAuthor"));
        lineEditAuthor->setEnabled(true);
        lineEditAuthor->setGeometry(QRect(210, 110, 160, 30));
        lineEditAuthor->setFont(font);
        lineEditAuthor->setFocusPolicy(Qt::NoFocus);
        lineEditAuthor->setAlignment(Qt::AlignCenter);
        lineEditAuthor->setReadOnly(true);
        label_2 = new QLabel(ReaderRenewDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 70, 121, 30));
        label_2->setFont(font1);
        lineEditTitle = new QLineEdit(ReaderRenewDialog);
        lineEditTitle->setObjectName(QStringLiteral("lineEditTitle"));
        lineEditTitle->setEnabled(true);
        lineEditTitle->setGeometry(QRect(210, 70, 160, 30));
        lineEditTitle->setFont(font);
        lineEditTitle->setFocusPolicy(Qt::NoFocus);
        lineEditTitle->setAlignment(Qt::AlignCenter);
        lineEditTitle->setReadOnly(true);
        label_3 = new QLabel(ReaderRenewDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(60, 110, 121, 30));
        label_3->setFont(font1);
        label_6 = new QLabel(ReaderRenewDialog);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(60, 190, 121, 30));
        label_6->setFont(font1);
        label_7 = new QLabel(ReaderRenewDialog);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(60, 230, 121, 30));
        label_7->setFont(font1);
        dateTimeEditBorrow = new QDateTimeEdit(ReaderRenewDialog);
        dateTimeEditBorrow->setObjectName(QStringLiteral("dateTimeEditBorrow"));
        dateTimeEditBorrow->setGeometry(QRect(210, 190, 160, 30));
        dateTimeEditBorrow->setFont(font);
        dateTimeEditBorrow->setFocusPolicy(Qt::NoFocus);
        dateTimeEditBorrow->setReadOnly(true);
        dateTimeEditDue = new QDateTimeEdit(ReaderRenewDialog);
        dateTimeEditDue->setObjectName(QStringLiteral("dateTimeEditDue"));
        dateTimeEditDue->setGeometry(QRect(210, 230, 160, 30));
        dateTimeEditDue->setFont(font);
        dateTimeEditDue->setFocusPolicy(Qt::NoFocus);
        dateTimeEditDue->setReadOnly(true);
        label_8 = new QLabel(ReaderRenewDialog);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(90, 320, 251, 31));
        QFont font2;
        font2.setPointSize(20);
        label_8->setFont(font2);
        label_9 = new QLabel(ReaderRenewDialog);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(60, 400, 121, 30));
        label_9->setFont(font1);
        dateTimeEditDueAfter = new QDateTimeEdit(ReaderRenewDialog);
        dateTimeEditDueAfter->setObjectName(QStringLiteral("dateTimeEditDueAfter"));
        dateTimeEditDueAfter->setGeometry(QRect(210, 360, 160, 30));
        dateTimeEditDueAfter->setFont(font);
        dateTimeEditDueAfter->setFocusPolicy(Qt::NoFocus);
        dateTimeEditDueAfter->setReadOnly(true);
        label_10 = new QLabel(ReaderRenewDialog);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(60, 360, 121, 30));
        label_10->setFont(font1);
        buttonCancel = new QPushButton(ReaderRenewDialog);
        buttonCancel->setObjectName(QStringLiteral("buttonCancel"));
        buttonCancel->setGeometry(QRect(250, 470, 111, 51));
        buttonCancel->setFont(font);
        buttonConfirm = new QPushButton(ReaderRenewDialog);
        buttonConfirm->setObjectName(QStringLiteral("buttonConfirm"));
        buttonConfirm->setGeometry(QRect(60, 470, 111, 51));
        buttonConfirm->setFont(font);
        spinBoxRenew = new QSpinBox(ReaderRenewDialog);
        spinBoxRenew->setObjectName(QStringLiteral("spinBoxRenew"));
        spinBoxRenew->setEnabled(true);
        spinBoxRenew->setGeometry(QRect(210, 270, 160, 30));
        spinBoxRenew->setFont(font);
        spinBoxRenew->setFocusPolicy(Qt::NoFocus);
        spinBoxRenew->setAlignment(Qt::AlignCenter);
        spinBoxRenew->setReadOnly(true);
        spinBoxRenew->setMaximum(9999);
        spinBoxRenewAfter = new QSpinBox(ReaderRenewDialog);
        spinBoxRenewAfter->setObjectName(QStringLiteral("spinBoxRenewAfter"));
        spinBoxRenewAfter->setEnabled(true);
        spinBoxRenewAfter->setGeometry(QRect(210, 400, 160, 30));
        spinBoxRenewAfter->setFont(font);
        spinBoxRenewAfter->setFocusPolicy(Qt::NoFocus);
        spinBoxRenewAfter->setAlignment(Qt::AlignCenter);
        spinBoxRenewAfter->setReadOnly(true);
        spinBoxRenewAfter->setMaximum(9999);

        retranslateUi(ReaderRenewDialog);

        QMetaObject::connectSlotsByName(ReaderRenewDialog);
    } // setupUi

    void retranslateUi(QDialog *ReaderRenewDialog)
    {
        ReaderRenewDialog->setWindowTitle(QApplication::translate("ReaderRenewDialog", "Dialog", 0));
        label->setText(QApplication::translate("ReaderRenewDialog", "    Book ID   :", 0));
        label_4->setText(QApplication::translate("ReaderRenewDialog", "   Publisher  :", 0));
        label_5->setText(QApplication::translate("ReaderRenewDialog", "Renewable  :", 0));
        label_2->setText(QApplication::translate("ReaderRenewDialog", "       Title      :", 0));
        label_3->setText(QApplication::translate("ReaderRenewDialog", "     Author    :", 0));
        label_6->setText(QApplication::translate("ReaderRenewDialog", " Borrow At  :", 0));
        label_7->setText(QApplication::translate("ReaderRenewDialog", "Overdue At :", 0));
        dateTimeEditBorrow->setDisplayFormat(QApplication::translate("ReaderRenewDialog", "yyyy-MM-dd hh:mm", 0));
        dateTimeEditDue->setDisplayFormat(QApplication::translate("ReaderRenewDialog", "yyyy-MM-dd hh:mm", 0));
        label_8->setText(QApplication::translate("ReaderRenewDialog", "After you renew it ...", 0));
        label_9->setText(QApplication::translate("ReaderRenewDialog", "Renewable  :", 0));
        dateTimeEditDueAfter->setDisplayFormat(QApplication::translate("ReaderRenewDialog", "yyyy-MM-dd hh:mm", 0));
        label_10->setText(QApplication::translate("ReaderRenewDialog", "Overdue At :", 0));
        buttonCancel->setText(QApplication::translate("ReaderRenewDialog", "Cancel", 0));
        buttonConfirm->setText(QApplication::translate("ReaderRenewDialog", "Renew", 0));
    } // retranslateUi

};

namespace Ui {
    class ReaderRenewDialog: public Ui_ReaderRenewDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_READERRENEWDIALOG_H

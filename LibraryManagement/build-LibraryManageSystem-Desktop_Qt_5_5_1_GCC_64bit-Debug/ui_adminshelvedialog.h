/********************************************************************************
** Form generated from reading UI file 'adminshelvedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINSHELVEDIALOG_H
#define UI_ADMINSHELVEDIALOG_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_AdminShelveDialog
{
public:
    QSpinBox *spinBoxCurNum;
    QLabel *labelPages_2;
    QLineEdit *lineEditPublisher;
    QLineEdit *lineEditAuthor;
    QPushButton *pushButtonISBNVerify;
    QLabel *labelPublisher;
    QDateEdit *dateEdit;
    QLabel *labelDate;
    QLabel *labelAuthor;
    QLineEdit *lineEditType;
    QLabel *labelPages_3;
    QLabel *labelPages_6;
    QLabel *labelPages_8;
    QLineEdit *lineEditISBN;
    QLineEdit *lineEditTitle;
    QLabel *labelPages_4;
    QLineEdit *lineEditBID;
    QLabel *labelPages_5;
    QLineEdit *lineEditPostion;
    QLineEdit *lineEditState;
    QLabel *labelPages_7;
    QPushButton *pushButtonConfirm;
    QPushButton *pushButtonCancel;

    void setupUi(QDialog *AdminShelveDialog)
    {
        if (AdminShelveDialog->objectName().isEmpty())
            AdminShelveDialog->setObjectName(QStringLiteral("AdminShelveDialog"));
        AdminShelveDialog->resize(435, 508);
        spinBoxCurNum = new QSpinBox(AdminShelveDialog);
        spinBoxCurNum->setObjectName(QStringLiteral("spinBoxCurNum"));
        spinBoxCurNum->setEnabled(false);
        spinBoxCurNum->setGeometry(QRect(220, 260, 185, 30));
        QFont font;
        font.setPointSize(12);
        spinBoxCurNum->setFont(font);
        spinBoxCurNum->setFocusPolicy(Qt::NoFocus);
        spinBoxCurNum->setAlignment(Qt::AlignCenter);
        spinBoxCurNum->setReadOnly(true);
        spinBoxCurNum->setMaximum(9999);
        labelPages_2 = new QLabel(AdminShelveDialog);
        labelPages_2->setObjectName(QStringLiteral("labelPages_2"));
        labelPages_2->setGeometry(QRect(20, 20, 151, 30));
        QFont font1;
        font1.setPointSize(15);
        labelPages_2->setFont(font1);
        labelPages_2->setAlignment(Qt::AlignCenter);
        lineEditPublisher = new QLineEdit(AdminShelveDialog);
        lineEditPublisher->setObjectName(QStringLiteral("lineEditPublisher"));
        lineEditPublisher->setEnabled(false);
        lineEditPublisher->setGeometry(QRect(220, 181, 185, 30));
        lineEditPublisher->setFont(font);
        lineEditPublisher->setFocusPolicy(Qt::NoFocus);
        lineEditPublisher->setAlignment(Qt::AlignCenter);
        lineEditPublisher->setReadOnly(true);
        lineEditAuthor = new QLineEdit(AdminShelveDialog);
        lineEditAuthor->setObjectName(QStringLiteral("lineEditAuthor"));
        lineEditAuthor->setEnabled(false);
        lineEditAuthor->setGeometry(QRect(220, 101, 185, 30));
        lineEditAuthor->setFont(font);
        lineEditAuthor->setFocusPolicy(Qt::NoFocus);
        lineEditAuthor->setAlignment(Qt::AlignCenter);
        lineEditAuthor->setReadOnly(true);
        pushButtonISBNVerify = new QPushButton(AdminShelveDialog);
        pushButtonISBNVerify->setObjectName(QStringLiteral("pushButtonISBNVerify"));
        pushButtonISBNVerify->setGeometry(QRect(360, 20, 45, 30));
        labelPublisher = new QLabel(AdminShelveDialog);
        labelPublisher->setObjectName(QStringLiteral("labelPublisher"));
        labelPublisher->setGeometry(QRect(20, 180, 146, 30));
        labelPublisher->setFont(font1);
        labelPublisher->setAlignment(Qt::AlignCenter);
        dateEdit = new QDateEdit(AdminShelveDialog);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setEnabled(false);
        dateEdit->setGeometry(QRect(220, 140, 185, 30));
        dateEdit->setFont(font);
        dateEdit->setFocusPolicy(Qt::NoFocus);
        dateEdit->setAlignment(Qt::AlignCenter);
        dateEdit->setReadOnly(true);
        dateEdit->setCalendarPopup(true);
        dateEdit->setDate(QDate(2000, 1, 1));
        labelDate = new QLabel(AdminShelveDialog);
        labelDate->setObjectName(QStringLiteral("labelDate"));
        labelDate->setGeometry(QRect(20, 139, 148, 30));
        labelDate->setFont(font1);
        labelDate->setAlignment(Qt::AlignCenter);
        labelAuthor = new QLabel(AdminShelveDialog);
        labelAuthor->setObjectName(QStringLiteral("labelAuthor"));
        labelAuthor->setGeometry(QRect(20, 100, 151, 30));
        labelAuthor->setFont(font1);
        labelAuthor->setAlignment(Qt::AlignCenter);
        lineEditType = new QLineEdit(AdminShelveDialog);
        lineEditType->setObjectName(QStringLiteral("lineEditType"));
        lineEditType->setEnabled(false);
        lineEditType->setGeometry(QRect(220, 220, 185, 30));
        lineEditType->setFont(font);
        lineEditType->setFocusPolicy(Qt::NoFocus);
        lineEditType->setAlignment(Qt::AlignCenter);
        lineEditType->setReadOnly(true);
        labelPages_3 = new QLabel(AdminShelveDialog);
        labelPages_3->setObjectName(QStringLiteral("labelPages_3"));
        labelPages_3->setGeometry(QRect(20, 220, 151, 30));
        labelPages_3->setFont(font1);
        labelPages_3->setAlignment(Qt::AlignCenter);
        labelPages_6 = new QLabel(AdminShelveDialog);
        labelPages_6->setObjectName(QStringLiteral("labelPages_6"));
        labelPages_6->setGeometry(QRect(20, 260, 151, 30));
        labelPages_6->setFont(font1);
        labelPages_6->setAlignment(Qt::AlignCenter);
        labelPages_8 = new QLabel(AdminShelveDialog);
        labelPages_8->setObjectName(QStringLiteral("labelPages_8"));
        labelPages_8->setGeometry(QRect(20, 60, 151, 30));
        labelPages_8->setFont(font1);
        labelPages_8->setAlignment(Qt::AlignCenter);
        lineEditISBN = new QLineEdit(AdminShelveDialog);
        lineEditISBN->setObjectName(QStringLiteral("lineEditISBN"));
        lineEditISBN->setEnabled(true);
        lineEditISBN->setGeometry(QRect(220, 20, 136, 30));
        lineEditISBN->setFont(font);
        lineEditISBN->setFocusPolicy(Qt::StrongFocus);
        lineEditISBN->setAlignment(Qt::AlignCenter);
        lineEditISBN->setReadOnly(false);
        lineEditTitle = new QLineEdit(AdminShelveDialog);
        lineEditTitle->setObjectName(QStringLiteral("lineEditTitle"));
        lineEditTitle->setEnabled(false);
        lineEditTitle->setGeometry(QRect(220, 60, 185, 30));
        lineEditTitle->setFont(font);
        lineEditTitle->setFocusPolicy(Qt::NoFocus);
        lineEditTitle->setAlignment(Qt::AlignCenter);
        lineEditTitle->setReadOnly(true);
        labelPages_4 = new QLabel(AdminShelveDialog);
        labelPages_4->setObjectName(QStringLiteral("labelPages_4"));
        labelPages_4->setGeometry(QRect(20, 300, 151, 30));
        labelPages_4->setFont(font1);
        labelPages_4->setAlignment(Qt::AlignCenter);
        lineEditBID = new QLineEdit(AdminShelveDialog);
        lineEditBID->setObjectName(QStringLiteral("lineEditBID"));
        lineEditBID->setEnabled(true);
        lineEditBID->setGeometry(QRect(220, 300, 185, 30));
        lineEditBID->setFont(font);
        lineEditBID->setFocusPolicy(Qt::StrongFocus);
        lineEditBID->setAlignment(Qt::AlignCenter);
        lineEditBID->setReadOnly(false);
        labelPages_5 = new QLabel(AdminShelveDialog);
        labelPages_5->setObjectName(QStringLiteral("labelPages_5"));
        labelPages_5->setGeometry(QRect(20, 340, 151, 30));
        labelPages_5->setFont(font1);
        labelPages_5->setAlignment(Qt::AlignCenter);
        lineEditPostion = new QLineEdit(AdminShelveDialog);
        lineEditPostion->setObjectName(QStringLiteral("lineEditPostion"));
        lineEditPostion->setEnabled(true);
        lineEditPostion->setGeometry(QRect(220, 340, 185, 30));
        lineEditPostion->setFont(font);
        lineEditPostion->setFocusPolicy(Qt::StrongFocus);
        lineEditPostion->setAlignment(Qt::AlignCenter);
        lineEditPostion->setReadOnly(false);
        lineEditState = new QLineEdit(AdminShelveDialog);
        lineEditState->setObjectName(QStringLiteral("lineEditState"));
        lineEditState->setEnabled(true);
        lineEditState->setGeometry(QRect(220, 380, 185, 30));
        lineEditState->setFont(font);
        lineEditState->setFocusPolicy(Qt::StrongFocus);
        lineEditState->setAlignment(Qt::AlignCenter);
        lineEditState->setReadOnly(true);
        labelPages_7 = new QLabel(AdminShelveDialog);
        labelPages_7->setObjectName(QStringLiteral("labelPages_7"));
        labelPages_7->setGeometry(QRect(20, 380, 151, 30));
        labelPages_7->setFont(font1);
        labelPages_7->setAlignment(Qt::AlignCenter);
        pushButtonConfirm = new QPushButton(AdminShelveDialog);
        pushButtonConfirm->setObjectName(QStringLiteral("pushButtonConfirm"));
        pushButtonConfirm->setGeometry(QRect(60, 430, 111, 51));
        pushButtonConfirm->setFont(font);
        pushButtonCancel = new QPushButton(AdminShelveDialog);
        pushButtonCancel->setObjectName(QStringLiteral("pushButtonCancel"));
        pushButtonCancel->setGeometry(QRect(270, 430, 111, 51));
        pushButtonCancel->setFont(font);

        retranslateUi(AdminShelveDialog);

        QMetaObject::connectSlotsByName(AdminShelveDialog);
    } // setupUi

    void retranslateUi(QDialog *AdminShelveDialog)
    {
        AdminShelveDialog->setWindowTitle(QApplication::translate("AdminShelveDialog", "Dialog", 0));
        labelPages_2->setText(QApplication::translate("AdminShelveDialog", "          ISBN        :", 0));
        pushButtonISBNVerify->setText(QApplication::translate("AdminShelveDialog", "Verify", 0));
        labelPublisher->setText(QApplication::translate("AdminShelveDialog", "       Publisher     :", 0));
        dateEdit->setDisplayFormat(QApplication::translate("AdminShelveDialog", "yyyy-MM-dd", 0));
        labelDate->setText(QApplication::translate("AdminShelveDialog", "Publication Date:", 0));
        labelAuthor->setText(QApplication::translate("AdminShelveDialog", "        Author       :", 0));
        labelPages_3->setText(QApplication::translate("AdminShelveDialog", "          Type        :", 0));
        labelPages_6->setText(QApplication::translate("AdminShelveDialog", "Quantity In Shelf:", 0));
        labelPages_8->setText(QApplication::translate("AdminShelveDialog", "           Title        :", 0));
        labelPages_4->setText(QApplication::translate("AdminShelveDialog", "        Book ID      :", 0));
        labelPages_5->setText(QApplication::translate("AdminShelveDialog", "  Shelf Position   :", 0));
        lineEditState->setText(QApplication::translate("AdminShelveDialog", "On Shelf", 0));
        labelPages_7->setText(QApplication::translate("AdminShelveDialog", "     Book State    :", 0));
        pushButtonConfirm->setText(QApplication::translate("AdminShelveDialog", "Shelve", 0));
        pushButtonCancel->setText(QApplication::translate("AdminShelveDialog", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class AdminShelveDialog: public Ui_AdminShelveDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINSHELVEDIALOG_H

/********************************************************************************
** Form generated from reading UI file 'adminremovedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINREMOVEDIALOG_H
#define UI_ADMINREMOVEDIALOG_H

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
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_AdminRemoveDialog
{
public:
    QPushButton *pushButtonConfirm;
    QDateEdit *dateEdit;
    QLabel *labelDate;
    QLabel *labelPublisher;
    QLabel *labelPages_3;
    QTextEdit *textEdit;
    QLineEdit *lineEditPublisher;
    QLineEdit *lineEditTitle;
    QLabel *labelAuthor;
    QLabel *labelPages_5;
    QLabel *labelPages_8;
    QLineEdit *lineEditAuthor;
    QSpinBox *spinBoxCurNum;
    QPushButton *pushButtonCancel;
    QLabel *labelPages_6;
    QLineEdit *lineEditType;
    QLabel *labelPages_2;
    QLineEdit *lineEditISBN;
    QPushButton *pushButtonISBNVerify;

    void setupUi(QDialog *AdminRemoveDialog)
    {
        if (AdminRemoveDialog->objectName().isEmpty())
            AdminRemoveDialog->setObjectName(QStringLiteral("AdminRemoveDialog"));
        AdminRemoveDialog->resize(450, 522);
        pushButtonConfirm = new QPushButton(AdminRemoveDialog);
        pushButtonConfirm->setObjectName(QStringLiteral("pushButtonConfirm"));
        pushButtonConfirm->setGeometry(QRect(60, 440, 111, 51));
        QFont font;
        font.setPointSize(12);
        pushButtonConfirm->setFont(font);
        dateEdit = new QDateEdit(AdminRemoveDialog);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setEnabled(false);
        dateEdit->setGeometry(QRect(230, 140, 185, 30));
        dateEdit->setFont(font);
        dateEdit->setFocusPolicy(Qt::NoFocus);
        dateEdit->setAlignment(Qt::AlignCenter);
        dateEdit->setReadOnly(true);
        dateEdit->setCalendarPopup(true);
        dateEdit->setDate(QDate(2000, 1, 1));
        labelDate = new QLabel(AdminRemoveDialog);
        labelDate->setObjectName(QStringLiteral("labelDate"));
        labelDate->setGeometry(QRect(30, 139, 148, 30));
        QFont font1;
        font1.setPointSize(15);
        labelDate->setFont(font1);
        labelDate->setAlignment(Qt::AlignCenter);
        labelPublisher = new QLabel(AdminRemoveDialog);
        labelPublisher->setObjectName(QStringLiteral("labelPublisher"));
        labelPublisher->setGeometry(QRect(30, 180, 146, 30));
        labelPublisher->setFont(font1);
        labelPublisher->setAlignment(Qt::AlignCenter);
        labelPages_3 = new QLabel(AdminRemoveDialog);
        labelPages_3->setObjectName(QStringLiteral("labelPages_3"));
        labelPages_3->setGeometry(QRect(30, 220, 151, 30));
        labelPages_3->setFont(font1);
        labelPages_3->setAlignment(Qt::AlignCenter);
        textEdit = new QTextEdit(AdminRemoveDialog);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setEnabled(false);
        textEdit->setGeometry(QRect(230, 260, 185, 121));
        textEdit->setFocusPolicy(Qt::NoFocus);
        lineEditPublisher = new QLineEdit(AdminRemoveDialog);
        lineEditPublisher->setObjectName(QStringLiteral("lineEditPublisher"));
        lineEditPublisher->setEnabled(false);
        lineEditPublisher->setGeometry(QRect(230, 181, 185, 30));
        lineEditPublisher->setFont(font);
        lineEditPublisher->setFocusPolicy(Qt::NoFocus);
        lineEditPublisher->setAlignment(Qt::AlignCenter);
        lineEditPublisher->setReadOnly(true);
        lineEditTitle = new QLineEdit(AdminRemoveDialog);
        lineEditTitle->setObjectName(QStringLiteral("lineEditTitle"));
        lineEditTitle->setEnabled(false);
        lineEditTitle->setGeometry(QRect(230, 60, 185, 30));
        lineEditTitle->setFont(font);
        lineEditTitle->setFocusPolicy(Qt::NoFocus);
        lineEditTitle->setAlignment(Qt::AlignCenter);
        lineEditTitle->setReadOnly(true);
        labelAuthor = new QLabel(AdminRemoveDialog);
        labelAuthor->setObjectName(QStringLiteral("labelAuthor"));
        labelAuthor->setGeometry(QRect(30, 100, 151, 30));
        labelAuthor->setFont(font1);
        labelAuthor->setAlignment(Qt::AlignCenter);
        labelPages_5 = new QLabel(AdminRemoveDialog);
        labelPages_5->setObjectName(QStringLiteral("labelPages_5"));
        labelPages_5->setGeometry(QRect(30, 260, 151, 30));
        labelPages_5->setFont(font1);
        labelPages_5->setAlignment(Qt::AlignCenter);
        labelPages_8 = new QLabel(AdminRemoveDialog);
        labelPages_8->setObjectName(QStringLiteral("labelPages_8"));
        labelPages_8->setGeometry(QRect(30, 60, 151, 30));
        labelPages_8->setFont(font1);
        labelPages_8->setAlignment(Qt::AlignCenter);
        lineEditAuthor = new QLineEdit(AdminRemoveDialog);
        lineEditAuthor->setObjectName(QStringLiteral("lineEditAuthor"));
        lineEditAuthor->setEnabled(false);
        lineEditAuthor->setGeometry(QRect(230, 101, 185, 30));
        lineEditAuthor->setFont(font);
        lineEditAuthor->setFocusPolicy(Qt::NoFocus);
        lineEditAuthor->setAlignment(Qt::AlignCenter);
        lineEditAuthor->setReadOnly(true);
        spinBoxCurNum = new QSpinBox(AdminRemoveDialog);
        spinBoxCurNum->setObjectName(QStringLiteral("spinBoxCurNum"));
        spinBoxCurNum->setEnabled(false);
        spinBoxCurNum->setGeometry(QRect(230, 390, 185, 30));
        spinBoxCurNum->setFont(font);
        spinBoxCurNum->setFocusPolicy(Qt::NoFocus);
        spinBoxCurNum->setAlignment(Qt::AlignCenter);
        spinBoxCurNum->setReadOnly(true);
        spinBoxCurNum->setMaximum(9999);
        pushButtonCancel = new QPushButton(AdminRemoveDialog);
        pushButtonCancel->setObjectName(QStringLiteral("pushButtonCancel"));
        pushButtonCancel->setGeometry(QRect(280, 440, 111, 51));
        pushButtonCancel->setFont(font);
        labelPages_6 = new QLabel(AdminRemoveDialog);
        labelPages_6->setObjectName(QStringLiteral("labelPages_6"));
        labelPages_6->setGeometry(QRect(30, 390, 151, 30));
        labelPages_6->setFont(font1);
        labelPages_6->setAlignment(Qt::AlignCenter);
        lineEditType = new QLineEdit(AdminRemoveDialog);
        lineEditType->setObjectName(QStringLiteral("lineEditType"));
        lineEditType->setEnabled(false);
        lineEditType->setGeometry(QRect(230, 220, 185, 30));
        lineEditType->setFont(font);
        lineEditType->setFocusPolicy(Qt::NoFocus);
        lineEditType->setAlignment(Qt::AlignCenter);
        lineEditType->setReadOnly(true);
        labelPages_2 = new QLabel(AdminRemoveDialog);
        labelPages_2->setObjectName(QStringLiteral("labelPages_2"));
        labelPages_2->setGeometry(QRect(30, 20, 151, 30));
        labelPages_2->setFont(font1);
        labelPages_2->setAlignment(Qt::AlignCenter);
        lineEditISBN = new QLineEdit(AdminRemoveDialog);
        lineEditISBN->setObjectName(QStringLiteral("lineEditISBN"));
        lineEditISBN->setEnabled(true);
        lineEditISBN->setGeometry(QRect(230, 20, 136, 30));
        lineEditISBN->setFont(font);
        lineEditISBN->setFocusPolicy(Qt::StrongFocus);
        lineEditISBN->setAlignment(Qt::AlignCenter);
        lineEditISBN->setReadOnly(false);
        pushButtonISBNVerify = new QPushButton(AdminRemoveDialog);
        pushButtonISBNVerify->setObjectName(QStringLiteral("pushButtonISBNVerify"));
        pushButtonISBNVerify->setGeometry(QRect(370, 20, 45, 30));

        retranslateUi(AdminRemoveDialog);

        QMetaObject::connectSlotsByName(AdminRemoveDialog);
    } // setupUi

    void retranslateUi(QDialog *AdminRemoveDialog)
    {
        AdminRemoveDialog->setWindowTitle(QApplication::translate("AdminRemoveDialog", "Dialog", 0));
        pushButtonConfirm->setText(QApplication::translate("AdminRemoveDialog", "Remove", 0));
        dateEdit->setDisplayFormat(QApplication::translate("AdminRemoveDialog", "yyyy-MM-dd", 0));
        labelDate->setText(QApplication::translate("AdminRemoveDialog", "Publication Date:", 0));
        labelPublisher->setText(QApplication::translate("AdminRemoveDialog", "       Publisher     :", 0));
        labelPages_3->setText(QApplication::translate("AdminRemoveDialog", "          Type        :", 0));
        labelAuthor->setText(QApplication::translate("AdminRemoveDialog", "        Author       :", 0));
        labelPages_5->setText(QApplication::translate("AdminRemoveDialog", "   Introduction   :", 0));
        labelPages_8->setText(QApplication::translate("AdminRemoveDialog", "           Title        :", 0));
        pushButtonCancel->setText(QApplication::translate("AdminRemoveDialog", "Cancel", 0));
        labelPages_6->setText(QApplication::translate("AdminRemoveDialog", "Quantity In Shelf:", 0));
        labelPages_2->setText(QApplication::translate("AdminRemoveDialog", "          ISBN        :", 0));
        pushButtonISBNVerify->setText(QApplication::translate("AdminRemoveDialog", "Verify", 0));
    } // retranslateUi

};

namespace Ui {
    class AdminRemoveDialog: public Ui_AdminRemoveDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINREMOVEDIALOG_H

/********************************************************************************
** Form generated from reading UI file 'adminbookdetaildialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINBOOKDETAILDIALOG_H
#define UI_ADMINBOOKDETAILDIALOG_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_AdminBookDetailDialog
{
public:
    QDateEdit *dateEdit;
    QLabel *labelPages_4;
    QLabel *labelPages_3;
    QSpinBox *spinBoxCurNum;
    QDoubleSpinBox *doubleSpinBox;
    QTableView *tableView;
    QLabel *labelPages;
    QLineEdit *lineEditISBN;
    QLabel *labelAuthor;
    QSpinBox *spinBoxPages;
    QLabel *labelCity;
    QLabel *labelPages_2;
    QLabel *labelPages_8;
    QLineEdit *lineEditCity;
    QLabel *labelPages_7;
    QLineEdit *lineEditTitle;
    QLabel *labelDate;
    QTextBrowser *textBrowser;
    QLineEdit *lineEditPublisher;
    QLineEdit *lineEditType;
    QLineEdit *lineEditAuthor;
    QLabel *labelPublisher;
    QLabel *labelPages_6;
    QLabel *labelPages_5;

    void setupUi(QDialog *AdminBookDetailDialog)
    {
        if (AdminBookDetailDialog->objectName().isEmpty())
            AdminBookDetailDialog->setObjectName(QStringLiteral("AdminBookDetailDialog"));
        AdminBookDetailDialog->resize(493, 706);
        dateEdit = new QDateEdit(AdminBookDetailDialog);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setEnabled(true);
        dateEdit->setGeometry(QRect(250, 140, 136, 30));
        QFont font;
        font.setPointSize(12);
        dateEdit->setFont(font);
        dateEdit->setFocusPolicy(Qt::NoFocus);
        dateEdit->setAlignment(Qt::AlignCenter);
        dateEdit->setReadOnly(true);
        dateEdit->setCalendarPopup(true);
        dateEdit->setDate(QDate(2000, 1, 1));
        labelPages_4 = new QLabel(AdminBookDetailDialog);
        labelPages_4->setObjectName(QStringLiteral("labelPages_4"));
        labelPages_4->setGeometry(QRect(40, 340, 151, 30));
        QFont font1;
        font1.setPointSize(15);
        labelPages_4->setFont(font1);
        labelPages_4->setAlignment(Qt::AlignCenter);
        labelPages_3 = new QLabel(AdminBookDetailDialog);
        labelPages_3->setObjectName(QStringLiteral("labelPages_3"));
        labelPages_3->setGeometry(QRect(40, 300, 151, 30));
        labelPages_3->setFont(font1);
        labelPages_3->setAlignment(Qt::AlignCenter);
        spinBoxCurNum = new QSpinBox(AdminBookDetailDialog);
        spinBoxCurNum->setObjectName(QStringLiteral("spinBoxCurNum"));
        spinBoxCurNum->setEnabled(true);
        spinBoxCurNum->setGeometry(QRect(250, 510, 136, 30));
        spinBoxCurNum->setFont(font);
        spinBoxCurNum->setFocusPolicy(Qt::NoFocus);
        spinBoxCurNum->setAlignment(Qt::AlignCenter);
        spinBoxCurNum->setReadOnly(true);
        spinBoxCurNum->setMaximum(9999);
        doubleSpinBox = new QDoubleSpinBox(AdminBookDetailDialog);
        doubleSpinBox->setObjectName(QStringLiteral("doubleSpinBox"));
        doubleSpinBox->setGeometry(QRect(250, 340, 136, 30));
        doubleSpinBox->setFont(font);
        doubleSpinBox->setFocusPolicy(Qt::NoFocus);
        doubleSpinBox->setAlignment(Qt::AlignCenter);
        doubleSpinBox->setReadOnly(true);
        doubleSpinBox->setMaximum(9999.99);
        tableView = new QTableView(AdminBookDetailDialog);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(30, 590, 443, 91));
        labelPages = new QLabel(AdminBookDetailDialog);
        labelPages->setObjectName(QStringLiteral("labelPages"));
        labelPages->setGeometry(QRect(40, 260, 146, 30));
        labelPages->setFont(font1);
        labelPages->setAlignment(Qt::AlignCenter);
        lineEditISBN = new QLineEdit(AdminBookDetailDialog);
        lineEditISBN->setObjectName(QStringLiteral("lineEditISBN"));
        lineEditISBN->setEnabled(true);
        lineEditISBN->setGeometry(QRect(250, 20, 136, 30));
        lineEditISBN->setFont(font);
        lineEditISBN->setFocusPolicy(Qt::NoFocus);
        lineEditISBN->setAlignment(Qt::AlignCenter);
        lineEditISBN->setReadOnly(true);
        labelAuthor = new QLabel(AdminBookDetailDialog);
        labelAuthor->setObjectName(QStringLiteral("labelAuthor"));
        labelAuthor->setGeometry(QRect(40, 100, 151, 30));
        labelAuthor->setFont(font1);
        labelAuthor->setAlignment(Qt::AlignCenter);
        spinBoxPages = new QSpinBox(AdminBookDetailDialog);
        spinBoxPages->setObjectName(QStringLiteral("spinBoxPages"));
        spinBoxPages->setEnabled(true);
        spinBoxPages->setGeometry(QRect(250, 260, 136, 30));
        spinBoxPages->setFont(font);
        spinBoxPages->setFocusPolicy(Qt::NoFocus);
        spinBoxPages->setAlignment(Qt::AlignCenter);
        spinBoxPages->setReadOnly(true);
        spinBoxPages->setMaximum(9999);
        labelCity = new QLabel(AdminBookDetailDialog);
        labelCity->setObjectName(QStringLiteral("labelCity"));
        labelCity->setGeometry(QRect(40, 219, 151, 30));
        labelCity->setFont(font1);
        labelCity->setAlignment(Qt::AlignCenter);
        labelPages_2 = new QLabel(AdminBookDetailDialog);
        labelPages_2->setObjectName(QStringLiteral("labelPages_2"));
        labelPages_2->setGeometry(QRect(40, 20, 151, 30));
        labelPages_2->setFont(font1);
        labelPages_2->setAlignment(Qt::AlignCenter);
        labelPages_8 = new QLabel(AdminBookDetailDialog);
        labelPages_8->setObjectName(QStringLiteral("labelPages_8"));
        labelPages_8->setGeometry(QRect(40, 60, 151, 30));
        labelPages_8->setFont(font1);
        labelPages_8->setAlignment(Qt::AlignCenter);
        lineEditCity = new QLineEdit(AdminBookDetailDialog);
        lineEditCity->setObjectName(QStringLiteral("lineEditCity"));
        lineEditCity->setEnabled(true);
        lineEditCity->setGeometry(QRect(250, 220, 136, 30));
        lineEditCity->setFont(font);
        lineEditCity->setFocusPolicy(Qt::NoFocus);
        lineEditCity->setAlignment(Qt::AlignCenter);
        lineEditCity->setReadOnly(true);
        labelPages_7 = new QLabel(AdminBookDetailDialog);
        labelPages_7->setObjectName(QStringLiteral("labelPages_7"));
        labelPages_7->setGeometry(QRect(30, 550, 291, 30));
        labelPages_7->setFont(font1);
        labelPages_7->setAlignment(Qt::AlignCenter);
        lineEditTitle = new QLineEdit(AdminBookDetailDialog);
        lineEditTitle->setObjectName(QStringLiteral("lineEditTitle"));
        lineEditTitle->setEnabled(true);
        lineEditTitle->setGeometry(QRect(250, 60, 136, 30));
        lineEditTitle->setFont(font);
        lineEditTitle->setFocusPolicy(Qt::NoFocus);
        lineEditTitle->setAlignment(Qt::AlignCenter);
        lineEditTitle->setReadOnly(true);
        labelDate = new QLabel(AdminBookDetailDialog);
        labelDate->setObjectName(QStringLiteral("labelDate"));
        labelDate->setGeometry(QRect(40, 139, 148, 30));
        labelDate->setFont(font1);
        labelDate->setAlignment(Qt::AlignCenter);
        textBrowser = new QTextBrowser(AdminBookDetailDialog);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(250, 380, 191, 121));
        textBrowser->setFont(font);
        textBrowser->setFocusPolicy(Qt::NoFocus);
        lineEditPublisher = new QLineEdit(AdminBookDetailDialog);
        lineEditPublisher->setObjectName(QStringLiteral("lineEditPublisher"));
        lineEditPublisher->setEnabled(true);
        lineEditPublisher->setGeometry(QRect(250, 181, 136, 30));
        lineEditPublisher->setFont(font);
        lineEditPublisher->setFocusPolicy(Qt::NoFocus);
        lineEditPublisher->setAlignment(Qt::AlignCenter);
        lineEditPublisher->setReadOnly(true);
        lineEditType = new QLineEdit(AdminBookDetailDialog);
        lineEditType->setObjectName(QStringLiteral("lineEditType"));
        lineEditType->setEnabled(true);
        lineEditType->setGeometry(QRect(250, 300, 136, 30));
        lineEditType->setFont(font);
        lineEditType->setFocusPolicy(Qt::NoFocus);
        lineEditType->setAlignment(Qt::AlignCenter);
        lineEditType->setReadOnly(true);
        lineEditAuthor = new QLineEdit(AdminBookDetailDialog);
        lineEditAuthor->setObjectName(QStringLiteral("lineEditAuthor"));
        lineEditAuthor->setEnabled(true);
        lineEditAuthor->setGeometry(QRect(250, 101, 136, 30));
        lineEditAuthor->setFont(font);
        lineEditAuthor->setFocusPolicy(Qt::NoFocus);
        lineEditAuthor->setAlignment(Qt::AlignCenter);
        lineEditAuthor->setReadOnly(true);
        labelPublisher = new QLabel(AdminBookDetailDialog);
        labelPublisher->setObjectName(QStringLiteral("labelPublisher"));
        labelPublisher->setGeometry(QRect(40, 180, 146, 30));
        labelPublisher->setFont(font1);
        labelPublisher->setAlignment(Qt::AlignCenter);
        labelPages_6 = new QLabel(AdminBookDetailDialog);
        labelPages_6->setObjectName(QStringLiteral("labelPages_6"));
        labelPages_6->setGeometry(QRect(40, 510, 151, 30));
        labelPages_6->setFont(font1);
        labelPages_6->setAlignment(Qt::AlignCenter);
        labelPages_5 = new QLabel(AdminBookDetailDialog);
        labelPages_5->setObjectName(QStringLiteral("labelPages_5"));
        labelPages_5->setGeometry(QRect(40, 380, 151, 30));
        labelPages_5->setFont(font1);
        labelPages_5->setAlignment(Qt::AlignCenter);

        retranslateUi(AdminBookDetailDialog);

        QMetaObject::connectSlotsByName(AdminBookDetailDialog);
    } // setupUi

    void retranslateUi(QDialog *AdminBookDetailDialog)
    {
        AdminBookDetailDialog->setWindowTitle(QApplication::translate("AdminBookDetailDialog", "Dialog", 0));
        dateEdit->setDisplayFormat(QApplication::translate("AdminBookDetailDialog", "yyyy-MM-dd", 0));
        labelPages_4->setText(QApplication::translate("AdminBookDetailDialog", "          Price        :", 0));
        labelPages_3->setText(QApplication::translate("AdminBookDetailDialog", "          Type        :", 0));
        doubleSpinBox->setSuffix(QApplication::translate("AdminBookDetailDialog", " RMB", 0));
        labelPages->setText(QApplication::translate("AdminBookDetailDialog", "         Pages        :", 0));
        labelAuthor->setText(QApplication::translate("AdminBookDetailDialog", "        Author       :", 0));
        labelCity->setText(QApplication::translate("AdminBookDetailDialog", "  Publisher City  :", 0));
        labelPages_2->setText(QApplication::translate("AdminBookDetailDialog", "          ISBN        :", 0));
        labelPages_8->setText(QApplication::translate("AdminBookDetailDialog", "           Title        :", 0));
        labelPages_7->setText(QApplication::translate("AdminBookDetailDialog", "All Entity of this book in library :", 0));
        labelDate->setText(QApplication::translate("AdminBookDetailDialog", "Publication Date:", 0));
        labelPublisher->setText(QApplication::translate("AdminBookDetailDialog", "       Publisher     :", 0));
        labelPages_6->setText(QApplication::translate("AdminBookDetailDialog", "Quantity In Shelf:", 0));
        labelPages_5->setText(QApplication::translate("AdminBookDetailDialog", "   Introduction   :", 0));
    } // retranslateUi

};

namespace Ui {
    class AdminBookDetailDialog: public Ui_AdminBookDetailDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINBOOKDETAILDIALOG_H

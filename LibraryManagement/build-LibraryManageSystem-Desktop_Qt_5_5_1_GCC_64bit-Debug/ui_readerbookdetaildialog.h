/********************************************************************************
** Form generated from reading UI file 'readerbookdetaildialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_READERBOOKDETAILDIALOG_H
#define UI_READERBOOKDETAILDIALOG_H

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

class Ui_ReaderBookDetailDialog
{
public:
    QLabel *labelCity;
    QLineEdit *lineEditCity;
    QLineEdit *lineEditTitle;
    QLineEdit *lineEditPublisher;
    QLabel *labelDate;
    QLabel *labelPublisher;
    QLineEdit *lineEditAuthor;
    QLabel *labelAuthor;
    QDateEdit *dateEdit;
    QLabel *labelPages;
    QSpinBox *spinBoxPages;
    QLineEdit *lineEditISBN;
    QLabel *labelPages_2;
    QLabel *labelPages_3;
    QLineEdit *lineEditType;
    QLabel *labelPages_4;
    QDoubleSpinBox *doubleSpinBox;
    QLabel *labelPages_5;
    QTextBrowser *textBrowser;
    QLabel *labelPages_6;
    QTableView *tableView;
    QSpinBox *spinBoxCurNum;
    QLabel *labelPages_7;
    QLabel *labelPages_8;

    void setupUi(QDialog *ReaderBookDetailDialog)
    {
        if (ReaderBookDetailDialog->objectName().isEmpty())
            ReaderBookDetailDialog->setObjectName(QStringLiteral("ReaderBookDetailDialog"));
        ReaderBookDetailDialog->resize(493, 706);
        labelCity = new QLabel(ReaderBookDetailDialog);
        labelCity->setObjectName(QStringLiteral("labelCity"));
        labelCity->setGeometry(QRect(40, 219, 151, 30));
        QFont font;
        font.setPointSize(15);
        labelCity->setFont(font);
        labelCity->setAlignment(Qt::AlignCenter);
        lineEditCity = new QLineEdit(ReaderBookDetailDialog);
        lineEditCity->setObjectName(QStringLiteral("lineEditCity"));
        lineEditCity->setEnabled(true);
        lineEditCity->setGeometry(QRect(250, 220, 136, 30));
        QFont font1;
        font1.setPointSize(12);
        lineEditCity->setFont(font1);
        lineEditCity->setFocusPolicy(Qt::NoFocus);
        lineEditCity->setAlignment(Qt::AlignCenter);
        lineEditCity->setReadOnly(true);
        lineEditTitle = new QLineEdit(ReaderBookDetailDialog);
        lineEditTitle->setObjectName(QStringLiteral("lineEditTitle"));
        lineEditTitle->setEnabled(true);
        lineEditTitle->setGeometry(QRect(250, 60, 136, 30));
        lineEditTitle->setFont(font1);
        lineEditTitle->setFocusPolicy(Qt::NoFocus);
        lineEditTitle->setAlignment(Qt::AlignCenter);
        lineEditTitle->setReadOnly(true);
        lineEditPublisher = new QLineEdit(ReaderBookDetailDialog);
        lineEditPublisher->setObjectName(QStringLiteral("lineEditPublisher"));
        lineEditPublisher->setEnabled(true);
        lineEditPublisher->setGeometry(QRect(250, 181, 136, 30));
        lineEditPublisher->setFont(font1);
        lineEditPublisher->setFocusPolicy(Qt::NoFocus);
        lineEditPublisher->setAlignment(Qt::AlignCenter);
        lineEditPublisher->setReadOnly(true);
        labelDate = new QLabel(ReaderBookDetailDialog);
        labelDate->setObjectName(QStringLiteral("labelDate"));
        labelDate->setGeometry(QRect(40, 139, 148, 30));
        labelDate->setFont(font);
        labelDate->setAlignment(Qt::AlignCenter);
        labelPublisher = new QLabel(ReaderBookDetailDialog);
        labelPublisher->setObjectName(QStringLiteral("labelPublisher"));
        labelPublisher->setGeometry(QRect(40, 180, 146, 30));
        labelPublisher->setFont(font);
        labelPublisher->setAlignment(Qt::AlignCenter);
        lineEditAuthor = new QLineEdit(ReaderBookDetailDialog);
        lineEditAuthor->setObjectName(QStringLiteral("lineEditAuthor"));
        lineEditAuthor->setEnabled(true);
        lineEditAuthor->setGeometry(QRect(250, 101, 136, 30));
        lineEditAuthor->setFont(font1);
        lineEditAuthor->setFocusPolicy(Qt::NoFocus);
        lineEditAuthor->setAlignment(Qt::AlignCenter);
        lineEditAuthor->setReadOnly(true);
        labelAuthor = new QLabel(ReaderBookDetailDialog);
        labelAuthor->setObjectName(QStringLiteral("labelAuthor"));
        labelAuthor->setGeometry(QRect(40, 100, 151, 30));
        labelAuthor->setFont(font);
        labelAuthor->setAlignment(Qt::AlignCenter);
        dateEdit = new QDateEdit(ReaderBookDetailDialog);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setEnabled(true);
        dateEdit->setGeometry(QRect(250, 140, 136, 30));
        dateEdit->setFont(font1);
        dateEdit->setFocusPolicy(Qt::NoFocus);
        dateEdit->setAlignment(Qt::AlignCenter);
        dateEdit->setReadOnly(true);
        dateEdit->setCalendarPopup(true);
        dateEdit->setDate(QDate(2000, 1, 1));
        labelPages = new QLabel(ReaderBookDetailDialog);
        labelPages->setObjectName(QStringLiteral("labelPages"));
        labelPages->setGeometry(QRect(40, 260, 146, 30));
        labelPages->setFont(font);
        labelPages->setAlignment(Qt::AlignCenter);
        spinBoxPages = new QSpinBox(ReaderBookDetailDialog);
        spinBoxPages->setObjectName(QStringLiteral("spinBoxPages"));
        spinBoxPages->setEnabled(true);
        spinBoxPages->setGeometry(QRect(250, 260, 136, 30));
        spinBoxPages->setFont(font1);
        spinBoxPages->setFocusPolicy(Qt::NoFocus);
        spinBoxPages->setAlignment(Qt::AlignCenter);
        spinBoxPages->setReadOnly(true);
        spinBoxPages->setMaximum(9999);
        lineEditISBN = new QLineEdit(ReaderBookDetailDialog);
        lineEditISBN->setObjectName(QStringLiteral("lineEditISBN"));
        lineEditISBN->setEnabled(true);
        lineEditISBN->setGeometry(QRect(250, 20, 136, 30));
        lineEditISBN->setFont(font1);
        lineEditISBN->setFocusPolicy(Qt::NoFocus);
        lineEditISBN->setAlignment(Qt::AlignCenter);
        lineEditISBN->setReadOnly(true);
        labelPages_2 = new QLabel(ReaderBookDetailDialog);
        labelPages_2->setObjectName(QStringLiteral("labelPages_2"));
        labelPages_2->setGeometry(QRect(40, 20, 151, 30));
        labelPages_2->setFont(font);
        labelPages_2->setAlignment(Qt::AlignCenter);
        labelPages_3 = new QLabel(ReaderBookDetailDialog);
        labelPages_3->setObjectName(QStringLiteral("labelPages_3"));
        labelPages_3->setGeometry(QRect(40, 300, 151, 30));
        labelPages_3->setFont(font);
        labelPages_3->setAlignment(Qt::AlignCenter);
        lineEditType = new QLineEdit(ReaderBookDetailDialog);
        lineEditType->setObjectName(QStringLiteral("lineEditType"));
        lineEditType->setEnabled(true);
        lineEditType->setGeometry(QRect(250, 300, 136, 30));
        lineEditType->setFont(font1);
        lineEditType->setFocusPolicy(Qt::NoFocus);
        lineEditType->setAlignment(Qt::AlignCenter);
        lineEditType->setReadOnly(true);
        labelPages_4 = new QLabel(ReaderBookDetailDialog);
        labelPages_4->setObjectName(QStringLiteral("labelPages_4"));
        labelPages_4->setGeometry(QRect(40, 340, 151, 30));
        labelPages_4->setFont(font);
        labelPages_4->setAlignment(Qt::AlignCenter);
        doubleSpinBox = new QDoubleSpinBox(ReaderBookDetailDialog);
        doubleSpinBox->setObjectName(QStringLiteral("doubleSpinBox"));
        doubleSpinBox->setGeometry(QRect(250, 340, 136, 30));
        doubleSpinBox->setFont(font1);
        doubleSpinBox->setFocusPolicy(Qt::NoFocus);
        doubleSpinBox->setAlignment(Qt::AlignCenter);
        doubleSpinBox->setReadOnly(true);
        doubleSpinBox->setMaximum(9999.99);
        labelPages_5 = new QLabel(ReaderBookDetailDialog);
        labelPages_5->setObjectName(QStringLiteral("labelPages_5"));
        labelPages_5->setGeometry(QRect(40, 380, 151, 30));
        labelPages_5->setFont(font);
        labelPages_5->setAlignment(Qt::AlignCenter);
        textBrowser = new QTextBrowser(ReaderBookDetailDialog);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(250, 380, 191, 121));
        textBrowser->setFont(font1);
        textBrowser->setFocusPolicy(Qt::NoFocus);
        labelPages_6 = new QLabel(ReaderBookDetailDialog);
        labelPages_6->setObjectName(QStringLiteral("labelPages_6"));
        labelPages_6->setGeometry(QRect(40, 510, 151, 30));
        labelPages_6->setFont(font);
        labelPages_6->setAlignment(Qt::AlignCenter);
        tableView = new QTableView(ReaderBookDetailDialog);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(30, 590, 443, 91));
        spinBoxCurNum = new QSpinBox(ReaderBookDetailDialog);
        spinBoxCurNum->setObjectName(QStringLiteral("spinBoxCurNum"));
        spinBoxCurNum->setEnabled(true);
        spinBoxCurNum->setGeometry(QRect(250, 510, 136, 30));
        spinBoxCurNum->setFont(font1);
        spinBoxCurNum->setFocusPolicy(Qt::NoFocus);
        spinBoxCurNum->setAlignment(Qt::AlignCenter);
        spinBoxCurNum->setReadOnly(true);
        spinBoxCurNum->setMaximum(9999);
        labelPages_7 = new QLabel(ReaderBookDetailDialog);
        labelPages_7->setObjectName(QStringLiteral("labelPages_7"));
        labelPages_7->setGeometry(QRect(30, 550, 291, 30));
        labelPages_7->setFont(font);
        labelPages_7->setAlignment(Qt::AlignCenter);
        labelPages_8 = new QLabel(ReaderBookDetailDialog);
        labelPages_8->setObjectName(QStringLiteral("labelPages_8"));
        labelPages_8->setGeometry(QRect(40, 60, 151, 30));
        labelPages_8->setFont(font);
        labelPages_8->setAlignment(Qt::AlignCenter);

        retranslateUi(ReaderBookDetailDialog);

        QMetaObject::connectSlotsByName(ReaderBookDetailDialog);
    } // setupUi

    void retranslateUi(QDialog *ReaderBookDetailDialog)
    {
        ReaderBookDetailDialog->setWindowTitle(QApplication::translate("ReaderBookDetailDialog", "Dialog", 0));
        labelCity->setText(QApplication::translate("ReaderBookDetailDialog", "  Publisher City  :", 0));
        labelDate->setText(QApplication::translate("ReaderBookDetailDialog", "Publication Date:", 0));
        labelPublisher->setText(QApplication::translate("ReaderBookDetailDialog", "       Publisher     :", 0));
        labelAuthor->setText(QApplication::translate("ReaderBookDetailDialog", "        Author       :", 0));
        dateEdit->setDisplayFormat(QApplication::translate("ReaderBookDetailDialog", "yyyy-MM-dd", 0));
        labelPages->setText(QApplication::translate("ReaderBookDetailDialog", "         Pages        :", 0));
        labelPages_2->setText(QApplication::translate("ReaderBookDetailDialog", "          ISBN        :", 0));
        labelPages_3->setText(QApplication::translate("ReaderBookDetailDialog", "          Type        :", 0));
        labelPages_4->setText(QApplication::translate("ReaderBookDetailDialog", "          Price        :", 0));
        doubleSpinBox->setSuffix(QApplication::translate("ReaderBookDetailDialog", " RMB", 0));
        labelPages_5->setText(QApplication::translate("ReaderBookDetailDialog", "   Introduction   :", 0));
        labelPages_6->setText(QApplication::translate("ReaderBookDetailDialog", "Quantity In Shelf:", 0));
        labelPages_7->setText(QApplication::translate("ReaderBookDetailDialog", "All Entity of this book in library :", 0));
        labelPages_8->setText(QApplication::translate("ReaderBookDetailDialog", "           Title        :", 0));
    } // retranslateUi

};

namespace Ui {
    class ReaderBookDetailDialog: public Ui_ReaderBookDetailDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_READERBOOKDETAILDIALOG_H

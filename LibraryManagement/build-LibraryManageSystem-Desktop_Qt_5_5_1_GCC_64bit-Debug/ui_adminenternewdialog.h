/********************************************************************************
** Form generated from reading UI file 'adminenternewdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINENTERNEWDIALOG_H
#define UI_ADMINENTERNEWDIALOG_H

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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_AdminEnterNewDialog
{
public:
    QSpinBox *spinBoxPages;
    QLabel *labelPages_2;
    QLabel *labelPages_4;
    QLineEdit *lineEditISBN;
    QLineEdit *lineEditPublisher;
    QLabel *labelPages_6;
    QLineEdit *lineEditTitle;
    QSpinBox *spinBoxCurNum;
    QLabel *labelPublisher;
    QLabel *labelCity;
    QLabel *labelPages_3;
    QLabel *labelPages;
    QLabel *labelAuthor;
    QLineEdit *lineEditAuthor;
    QDateEdit *dateEdit;
    QLineEdit *lineEditCity;
    QDoubleSpinBox *doubleSpinBox;
    QLabel *labelDate;
    QLabel *labelPages_8;
    QLineEdit *lineEditType;
    QLabel *labelPages_5;
    QPushButton *pushButtonCancel;
    QPushButton *pushButtonConfirm;
    QTextEdit *textEdit;

    void setupUi(QDialog *AdminEnterNewDialog)
    {
        if (AdminEnterNewDialog->objectName().isEmpty())
            AdminEnterNewDialog->setObjectName(QStringLiteral("AdminEnterNewDialog"));
        AdminEnterNewDialog->resize(472, 643);
        spinBoxPages = new QSpinBox(AdminEnterNewDialog);
        spinBoxPages->setObjectName(QStringLiteral("spinBoxPages"));
        spinBoxPages->setEnabled(true);
        spinBoxPages->setGeometry(QRect(240, 260, 136, 30));
        QFont font;
        font.setPointSize(12);
        spinBoxPages->setFont(font);
        spinBoxPages->setFocusPolicy(Qt::WheelFocus);
        spinBoxPages->setAlignment(Qt::AlignCenter);
        spinBoxPages->setReadOnly(false);
        spinBoxPages->setMaximum(9999);
        labelPages_2 = new QLabel(AdminEnterNewDialog);
        labelPages_2->setObjectName(QStringLiteral("labelPages_2"));
        labelPages_2->setGeometry(QRect(40, 20, 151, 30));
        QFont font1;
        font1.setPointSize(15);
        labelPages_2->setFont(font1);
        labelPages_2->setAlignment(Qt::AlignCenter);
        labelPages_4 = new QLabel(AdminEnterNewDialog);
        labelPages_4->setObjectName(QStringLiteral("labelPages_4"));
        labelPages_4->setGeometry(QRect(40, 340, 151, 30));
        labelPages_4->setFont(font1);
        labelPages_4->setAlignment(Qt::AlignCenter);
        lineEditISBN = new QLineEdit(AdminEnterNewDialog);
        lineEditISBN->setObjectName(QStringLiteral("lineEditISBN"));
        lineEditISBN->setEnabled(true);
        lineEditISBN->setGeometry(QRect(240, 20, 136, 30));
        lineEditISBN->setFont(font);
        lineEditISBN->setFocusPolicy(Qt::StrongFocus);
        lineEditISBN->setAlignment(Qt::AlignCenter);
        lineEditISBN->setReadOnly(false);
        lineEditPublisher = new QLineEdit(AdminEnterNewDialog);
        lineEditPublisher->setObjectName(QStringLiteral("lineEditPublisher"));
        lineEditPublisher->setEnabled(true);
        lineEditPublisher->setGeometry(QRect(240, 181, 136, 30));
        lineEditPublisher->setFont(font);
        lineEditPublisher->setFocusPolicy(Qt::StrongFocus);
        lineEditPublisher->setAlignment(Qt::AlignCenter);
        lineEditPublisher->setReadOnly(false);
        labelPages_6 = new QLabel(AdminEnterNewDialog);
        labelPages_6->setObjectName(QStringLiteral("labelPages_6"));
        labelPages_6->setGeometry(QRect(40, 510, 151, 30));
        labelPages_6->setFont(font1);
        labelPages_6->setAlignment(Qt::AlignCenter);
        lineEditTitle = new QLineEdit(AdminEnterNewDialog);
        lineEditTitle->setObjectName(QStringLiteral("lineEditTitle"));
        lineEditTitle->setEnabled(true);
        lineEditTitle->setGeometry(QRect(240, 60, 136, 30));
        lineEditTitle->setFont(font);
        lineEditTitle->setFocusPolicy(Qt::StrongFocus);
        lineEditTitle->setAlignment(Qt::AlignCenter);
        lineEditTitle->setReadOnly(false);
        spinBoxCurNum = new QSpinBox(AdminEnterNewDialog);
        spinBoxCurNum->setObjectName(QStringLiteral("spinBoxCurNum"));
        spinBoxCurNum->setEnabled(true);
        spinBoxCurNum->setGeometry(QRect(240, 510, 136, 30));
        spinBoxCurNum->setFont(font);
        spinBoxCurNum->setFocusPolicy(Qt::NoFocus);
        spinBoxCurNum->setAlignment(Qt::AlignCenter);
        spinBoxCurNum->setReadOnly(true);
        spinBoxCurNum->setMaximum(9999);
        labelPublisher = new QLabel(AdminEnterNewDialog);
        labelPublisher->setObjectName(QStringLiteral("labelPublisher"));
        labelPublisher->setGeometry(QRect(40, 180, 146, 30));
        labelPublisher->setFont(font1);
        labelPublisher->setAlignment(Qt::AlignCenter);
        labelCity = new QLabel(AdminEnterNewDialog);
        labelCity->setObjectName(QStringLiteral("labelCity"));
        labelCity->setGeometry(QRect(40, 219, 151, 30));
        labelCity->setFont(font1);
        labelCity->setAlignment(Qt::AlignCenter);
        labelPages_3 = new QLabel(AdminEnterNewDialog);
        labelPages_3->setObjectName(QStringLiteral("labelPages_3"));
        labelPages_3->setGeometry(QRect(40, 300, 151, 30));
        labelPages_3->setFont(font1);
        labelPages_3->setAlignment(Qt::AlignCenter);
        labelPages = new QLabel(AdminEnterNewDialog);
        labelPages->setObjectName(QStringLiteral("labelPages"));
        labelPages->setGeometry(QRect(40, 260, 146, 30));
        labelPages->setFont(font1);
        labelPages->setAlignment(Qt::AlignCenter);
        labelAuthor = new QLabel(AdminEnterNewDialog);
        labelAuthor->setObjectName(QStringLiteral("labelAuthor"));
        labelAuthor->setGeometry(QRect(40, 100, 151, 30));
        labelAuthor->setFont(font1);
        labelAuthor->setAlignment(Qt::AlignCenter);
        lineEditAuthor = new QLineEdit(AdminEnterNewDialog);
        lineEditAuthor->setObjectName(QStringLiteral("lineEditAuthor"));
        lineEditAuthor->setEnabled(true);
        lineEditAuthor->setGeometry(QRect(240, 101, 136, 30));
        lineEditAuthor->setFont(font);
        lineEditAuthor->setFocusPolicy(Qt::StrongFocus);
        lineEditAuthor->setAlignment(Qt::AlignCenter);
        lineEditAuthor->setReadOnly(false);
        dateEdit = new QDateEdit(AdminEnterNewDialog);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setEnabled(true);
        dateEdit->setGeometry(QRect(240, 140, 136, 30));
        dateEdit->setFont(font);
        dateEdit->setFocusPolicy(Qt::WheelFocus);
        dateEdit->setAlignment(Qt::AlignCenter);
        dateEdit->setReadOnly(false);
        dateEdit->setCalendarPopup(true);
        dateEdit->setDate(QDate(2000, 1, 1));
        lineEditCity = new QLineEdit(AdminEnterNewDialog);
        lineEditCity->setObjectName(QStringLiteral("lineEditCity"));
        lineEditCity->setEnabled(true);
        lineEditCity->setGeometry(QRect(240, 220, 136, 30));
        lineEditCity->setFont(font);
        lineEditCity->setFocusPolicy(Qt::StrongFocus);
        lineEditCity->setAlignment(Qt::AlignCenter);
        lineEditCity->setReadOnly(false);
        doubleSpinBox = new QDoubleSpinBox(AdminEnterNewDialog);
        doubleSpinBox->setObjectName(QStringLiteral("doubleSpinBox"));
        doubleSpinBox->setGeometry(QRect(240, 340, 136, 30));
        doubleSpinBox->setFont(font);
        doubleSpinBox->setFocusPolicy(Qt::WheelFocus);
        doubleSpinBox->setAlignment(Qt::AlignCenter);
        doubleSpinBox->setReadOnly(false);
        doubleSpinBox->setMaximum(9999.99);
        labelDate = new QLabel(AdminEnterNewDialog);
        labelDate->setObjectName(QStringLiteral("labelDate"));
        labelDate->setGeometry(QRect(40, 139, 148, 30));
        labelDate->setFont(font1);
        labelDate->setAlignment(Qt::AlignCenter);
        labelPages_8 = new QLabel(AdminEnterNewDialog);
        labelPages_8->setObjectName(QStringLiteral("labelPages_8"));
        labelPages_8->setGeometry(QRect(40, 60, 151, 30));
        labelPages_8->setFont(font1);
        labelPages_8->setAlignment(Qt::AlignCenter);
        lineEditType = new QLineEdit(AdminEnterNewDialog);
        lineEditType->setObjectName(QStringLiteral("lineEditType"));
        lineEditType->setEnabled(true);
        lineEditType->setGeometry(QRect(240, 300, 136, 30));
        lineEditType->setFont(font);
        lineEditType->setFocusPolicy(Qt::StrongFocus);
        lineEditType->setAlignment(Qt::AlignCenter);
        lineEditType->setReadOnly(false);
        labelPages_5 = new QLabel(AdminEnterNewDialog);
        labelPages_5->setObjectName(QStringLiteral("labelPages_5"));
        labelPages_5->setGeometry(QRect(40, 380, 151, 30));
        labelPages_5->setFont(font1);
        labelPages_5->setAlignment(Qt::AlignCenter);
        pushButtonCancel = new QPushButton(AdminEnterNewDialog);
        pushButtonCancel->setObjectName(QStringLiteral("pushButtonCancel"));
        pushButtonCancel->setGeometry(QRect(290, 570, 111, 51));
        pushButtonCancel->setFont(font);
        pushButtonConfirm = new QPushButton(AdminEnterNewDialog);
        pushButtonConfirm->setObjectName(QStringLiteral("pushButtonConfirm"));
        pushButtonConfirm->setGeometry(QRect(70, 570, 111, 51));
        pushButtonConfirm->setFont(font);
        textEdit = new QTextEdit(AdminEnterNewDialog);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(240, 380, 191, 121));

        retranslateUi(AdminEnterNewDialog);

        QMetaObject::connectSlotsByName(AdminEnterNewDialog);
    } // setupUi

    void retranslateUi(QDialog *AdminEnterNewDialog)
    {
        AdminEnterNewDialog->setWindowTitle(QApplication::translate("AdminEnterNewDialog", "Dialog", 0));
        labelPages_2->setText(QApplication::translate("AdminEnterNewDialog", "          ISBN        :", 0));
        labelPages_4->setText(QApplication::translate("AdminEnterNewDialog", "          Price        :", 0));
        labelPages_6->setText(QApplication::translate("AdminEnterNewDialog", "Quantity In Shelf:", 0));
        labelPublisher->setText(QApplication::translate("AdminEnterNewDialog", "       Publisher     :", 0));
        labelCity->setText(QApplication::translate("AdminEnterNewDialog", "  Publisher City  :", 0));
        labelPages_3->setText(QApplication::translate("AdminEnterNewDialog", "          Type        :", 0));
        labelPages->setText(QApplication::translate("AdminEnterNewDialog", "         Pages        :", 0));
        labelAuthor->setText(QApplication::translate("AdminEnterNewDialog", "        Author       :", 0));
        dateEdit->setDisplayFormat(QApplication::translate("AdminEnterNewDialog", "yyyy-MM-dd", 0));
        doubleSpinBox->setSuffix(QApplication::translate("AdminEnterNewDialog", " RMB", 0));
        labelDate->setText(QApplication::translate("AdminEnterNewDialog", "Publication Date:", 0));
        labelPages_8->setText(QApplication::translate("AdminEnterNewDialog", "           Title        :", 0));
        labelPages_5->setText(QApplication::translate("AdminEnterNewDialog", "   Introduction   :", 0));
        pushButtonCancel->setText(QApplication::translate("AdminEnterNewDialog", "Cancel", 0));
        pushButtonConfirm->setText(QApplication::translate("AdminEnterNewDialog", "Enter New", 0));
    } // retranslateUi

};

namespace Ui {
    class AdminEnterNewDialog: public Ui_AdminEnterNewDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINENTERNEWDIALOG_H

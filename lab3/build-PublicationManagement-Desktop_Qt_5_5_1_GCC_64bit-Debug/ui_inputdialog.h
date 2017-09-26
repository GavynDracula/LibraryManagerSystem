/********************************************************************************
** Form generated from reading UI file 'inputdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INPUTDIALOG_H
#define UI_INPUTDIALOG_H

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

class Ui_InputDialog
{
public:
    QLabel *labelTitle;
    QLabel *labelAuthor;
    QLabel *labelDate;
    QLabel *labelPublisher;
    QLabel *labelCity;
    QLabel *labelPages;
    QLabel *labelBarcode;
    QLineEdit *lineEditTitle;
    QLineEdit *lineEditAuthor;
    QLineEdit *lineEditPublisher;
    QLineEdit *lineEditCity;
    QLineEdit *lineEditBarcode;
    QDateEdit *dateEdit;
    QSpinBox *spinBox;
    QPushButton *buttonConfirm;
    QPushButton *buttonCancel;

    void setupUi(QDialog *InputDialog)
    {
        if (InputDialog->objectName().isEmpty())
            InputDialog->setObjectName(QStringLiteral("InputDialog"));
        InputDialog->resize(478, 465);
        labelTitle = new QLabel(InputDialog);
        labelTitle->setObjectName(QStringLiteral("labelTitle"));
        labelTitle->setGeometry(QRect(50, 37, 146, 28));
        QFont font;
        font.setPointSize(16);
        labelTitle->setFont(font);
        labelTitle->setAlignment(Qt::AlignCenter);
        labelAuthor = new QLabel(InputDialog);
        labelAuthor->setObjectName(QStringLiteral("labelAuthor"));
        labelAuthor->setGeometry(QRect(50, 83, 146, 28));
        labelAuthor->setFont(font);
        labelAuthor->setAlignment(Qt::AlignCenter);
        labelDate = new QLabel(InputDialog);
        labelDate->setObjectName(QStringLiteral("labelDate"));
        labelDate->setGeometry(QRect(50, 130, 148, 28));
        labelDate->setFont(font);
        labelDate->setAlignment(Qt::AlignCenter);
        labelPublisher = new QLabel(InputDialog);
        labelPublisher->setObjectName(QStringLiteral("labelPublisher"));
        labelPublisher->setGeometry(QRect(50, 176, 146, 28));
        labelPublisher->setFont(font);
        labelPublisher->setAlignment(Qt::AlignCenter);
        labelCity = new QLabel(InputDialog);
        labelCity->setObjectName(QStringLiteral("labelCity"));
        labelCity->setGeometry(QRect(50, 223, 146, 28));
        labelCity->setFont(font);
        labelCity->setAlignment(Qt::AlignCenter);
        labelPages = new QLabel(InputDialog);
        labelPages->setObjectName(QStringLiteral("labelPages"));
        labelPages->setGeometry(QRect(50, 269, 146, 28));
        labelPages->setFont(font);
        labelPages->setAlignment(Qt::AlignCenter);
        labelBarcode = new QLabel(InputDialog);
        labelBarcode->setObjectName(QStringLiteral("labelBarcode"));
        labelBarcode->setGeometry(QRect(50, 316, 146, 28));
        labelBarcode->setFont(font);
        labelBarcode->setAlignment(Qt::AlignCenter);
        lineEditTitle = new QLineEdit(InputDialog);
        lineEditTitle->setObjectName(QStringLiteral("lineEditTitle"));
        lineEditTitle->setGeometry(QRect(260, 38, 136, 32));
        lineEditTitle->setAlignment(Qt::AlignCenter);
        lineEditAuthor = new QLineEdit(InputDialog);
        lineEditAuthor->setObjectName(QStringLiteral("lineEditAuthor"));
        lineEditAuthor->setGeometry(QRect(260, 84, 136, 32));
        lineEditAuthor->setAlignment(Qt::AlignCenter);
        lineEditPublisher = new QLineEdit(InputDialog);
        lineEditPublisher->setObjectName(QStringLiteral("lineEditPublisher"));
        lineEditPublisher->setGeometry(QRect(260, 177, 136, 32));
        lineEditPublisher->setAlignment(Qt::AlignCenter);
        lineEditCity = new QLineEdit(InputDialog);
        lineEditCity->setObjectName(QStringLiteral("lineEditCity"));
        lineEditCity->setGeometry(QRect(260, 224, 136, 32));
        lineEditCity->setAlignment(Qt::AlignCenter);
        lineEditBarcode = new QLineEdit(InputDialog);
        lineEditBarcode->setObjectName(QStringLiteral("lineEditBarcode"));
        lineEditBarcode->setGeometry(QRect(260, 317, 136, 32));
        lineEditBarcode->setAlignment(Qt::AlignCenter);
        dateEdit = new QDateEdit(InputDialog);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(260, 131, 136, 32));
        dateEdit->setAlignment(Qt::AlignCenter);
        dateEdit->setCalendarPopup(true);
        dateEdit->setDate(QDate(2000, 1, 1));
        spinBox = new QSpinBox(InputDialog);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(260, 270, 136, 32));
        spinBox->setAlignment(Qt::AlignCenter);
        spinBox->setMaximum(9999);
        buttonConfirm = new QPushButton(InputDialog);
        buttonConfirm->setObjectName(QStringLiteral("buttonConfirm"));
        buttonConfirm->setGeometry(QRect(70, 380, 111, 51));
        buttonCancel = new QPushButton(InputDialog);
        buttonCancel->setObjectName(QStringLiteral("buttonCancel"));
        buttonCancel->setGeometry(QRect(300, 380, 111, 51));

        retranslateUi(InputDialog);

        QMetaObject::connectSlotsByName(InputDialog);
    } // setupUi

    void retranslateUi(QDialog *InputDialog)
    {
        InputDialog->setWindowTitle(QApplication::translate("InputDialog", "Dialog", 0));
        labelTitle->setText(QApplication::translate("InputDialog", "Book Title", 0));
        labelAuthor->setText(QApplication::translate("InputDialog", "Author", 0));
        labelDate->setText(QApplication::translate("InputDialog", "Publication Date", 0));
        labelPublisher->setText(QApplication::translate("InputDialog", "Publisher", 0));
        labelCity->setText(QApplication::translate("InputDialog", "Publisher City", 0));
        labelPages->setText(QApplication::translate("InputDialog", "Pages", 0));
        labelBarcode->setText(QApplication::translate("InputDialog", "Barcode", 0));
        dateEdit->setDisplayFormat(QApplication::translate("InputDialog", "yyyy-MM-dd", 0));
        buttonConfirm->setText(QApplication::translate("InputDialog", "Confirm", 0));
        buttonCancel->setText(QApplication::translate("InputDialog", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class InputDialog: public Ui_InputDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INPUTDIALOG_H

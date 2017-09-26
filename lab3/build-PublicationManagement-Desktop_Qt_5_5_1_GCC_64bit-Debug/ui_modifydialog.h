/********************************************************************************
** Form generated from reading UI file 'modifydialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYDIALOG_H
#define UI_MODIFYDIALOG_H

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

class Ui_ModifyDialog
{
public:
    QLabel *labelBarcode;
    QLabel *labelTitle;
    QLabel *labelAuthor;
    QLabel *labelPubdate;
    QLabel *labelPublisher;
    QLabel *labelPubcity;
    QLabel *labelPages;
    QLineEdit *lineEditBarcode;
    QLineEdit *lineEditTitle;
    QLineEdit *lineEditAuthor;
    QLineEdit *lineEditPublisher;
    QLineEdit *lineEditPubcity;
    QDateEdit *dateEdit;
    QSpinBox *spinBox;
    QPushButton *pushButtonConfirm;
    QPushButton *pushButtonCancel;

    void setupUi(QDialog *ModifyDialog)
    {
        if (ModifyDialog->objectName().isEmpty())
            ModifyDialog->setObjectName(QStringLiteral("ModifyDialog"));
        ModifyDialog->resize(478, 465);
        labelBarcode = new QLabel(ModifyDialog);
        labelBarcode->setObjectName(QStringLiteral("labelBarcode"));
        labelBarcode->setGeometry(QRect(50, 38, 146, 28));
        QFont font;
        font.setPointSize(16);
        labelBarcode->setFont(font);
        labelBarcode->setAlignment(Qt::AlignCenter);
        labelTitle = new QLabel(ModifyDialog);
        labelTitle->setObjectName(QStringLiteral("labelTitle"));
        labelTitle->setGeometry(QRect(50, 84, 146, 28));
        labelTitle->setFont(font);
        labelTitle->setAlignment(Qt::AlignCenter);
        labelAuthor = new QLabel(ModifyDialog);
        labelAuthor->setObjectName(QStringLiteral("labelAuthor"));
        labelAuthor->setGeometry(QRect(50, 131, 146, 28));
        labelAuthor->setFont(font);
        labelAuthor->setAlignment(Qt::AlignCenter);
        labelPubdate = new QLabel(ModifyDialog);
        labelPubdate->setObjectName(QStringLiteral("labelPubdate"));
        labelPubdate->setGeometry(QRect(50, 177, 148, 28));
        labelPubdate->setFont(font);
        labelPubdate->setAlignment(Qt::AlignCenter);
        labelPublisher = new QLabel(ModifyDialog);
        labelPublisher->setObjectName(QStringLiteral("labelPublisher"));
        labelPublisher->setGeometry(QRect(50, 224, 146, 28));
        labelPublisher->setFont(font);
        labelPublisher->setAlignment(Qt::AlignCenter);
        labelPubcity = new QLabel(ModifyDialog);
        labelPubcity->setObjectName(QStringLiteral("labelPubcity"));
        labelPubcity->setGeometry(QRect(50, 270, 146, 28));
        labelPubcity->setFont(font);
        labelPubcity->setAlignment(Qt::AlignCenter);
        labelPages = new QLabel(ModifyDialog);
        labelPages->setObjectName(QStringLiteral("labelPages"));
        labelPages->setGeometry(QRect(50, 317, 146, 28));
        labelPages->setFont(font);
        labelPages->setAlignment(Qt::AlignCenter);
        lineEditBarcode = new QLineEdit(ModifyDialog);
        lineEditBarcode->setObjectName(QStringLiteral("lineEditBarcode"));
        lineEditBarcode->setEnabled(false);
        lineEditBarcode->setGeometry(QRect(268, 38, 136, 32));
        lineEditBarcode->setAlignment(Qt::AlignCenter);
        lineEditTitle = new QLineEdit(ModifyDialog);
        lineEditTitle->setObjectName(QStringLiteral("lineEditTitle"));
        lineEditTitle->setEnabled(true);
        lineEditTitle->setGeometry(QRect(268, 84, 136, 32));
        lineEditTitle->setAlignment(Qt::AlignCenter);
        lineEditAuthor = new QLineEdit(ModifyDialog);
        lineEditAuthor->setObjectName(QStringLiteral("lineEditAuthor"));
        lineEditAuthor->setGeometry(QRect(268, 131, 136, 32));
        lineEditAuthor->setAlignment(Qt::AlignCenter);
        lineEditPublisher = new QLineEdit(ModifyDialog);
        lineEditPublisher->setObjectName(QStringLiteral("lineEditPublisher"));
        lineEditPublisher->setGeometry(QRect(268, 224, 136, 32));
        lineEditPublisher->setAlignment(Qt::AlignCenter);
        lineEditPubcity = new QLineEdit(ModifyDialog);
        lineEditPubcity->setObjectName(QStringLiteral("lineEditPubcity"));
        lineEditPubcity->setGeometry(QRect(268, 270, 136, 32));
        lineEditPubcity->setAlignment(Qt::AlignCenter);
        dateEdit = new QDateEdit(ModifyDialog);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(268, 177, 136, 32));
        dateEdit->setAlignment(Qt::AlignCenter);
        dateEdit->setCurrentSection(QDateTimeEdit::YearSection);
        dateEdit->setCalendarPopup(true);
        spinBox = new QSpinBox(ModifyDialog);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(268, 317, 136, 32));
        spinBox->setAlignment(Qt::AlignCenter);
        spinBox->setMaximum(9999);
        pushButtonConfirm = new QPushButton(ModifyDialog);
        pushButtonConfirm->setObjectName(QStringLiteral("pushButtonConfirm"));
        pushButtonConfirm->setGeometry(QRect(80, 380, 111, 51));
        pushButtonCancel = new QPushButton(ModifyDialog);
        pushButtonCancel->setObjectName(QStringLiteral("pushButtonCancel"));
        pushButtonCancel->setGeometry(QRect(290, 380, 111, 51));

        retranslateUi(ModifyDialog);

        QMetaObject::connectSlotsByName(ModifyDialog);
    } // setupUi

    void retranslateUi(QDialog *ModifyDialog)
    {
        ModifyDialog->setWindowTitle(QApplication::translate("ModifyDialog", "Dialog", 0));
        labelBarcode->setText(QApplication::translate("ModifyDialog", "Barcode", 0));
        labelTitle->setText(QApplication::translate("ModifyDialog", "Book Title", 0));
        labelAuthor->setText(QApplication::translate("ModifyDialog", "Author", 0));
        labelPubdate->setText(QApplication::translate("ModifyDialog", "Publication Date", 0));
        labelPublisher->setText(QApplication::translate("ModifyDialog", "Publisher", 0));
        labelPubcity->setText(QApplication::translate("ModifyDialog", "Publisher City", 0));
        labelPages->setText(QApplication::translate("ModifyDialog", "Pages", 0));
        dateEdit->setDisplayFormat(QApplication::translate("ModifyDialog", "yyyy-MM-dd", 0));
        pushButtonConfirm->setText(QApplication::translate("ModifyDialog", "Confirm", 0));
        pushButtonCancel->setText(QApplication::translate("ModifyDialog", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyDialog: public Ui_ModifyDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYDIALOG_H

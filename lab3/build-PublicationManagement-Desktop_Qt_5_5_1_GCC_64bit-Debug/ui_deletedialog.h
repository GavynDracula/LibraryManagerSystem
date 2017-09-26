/********************************************************************************
** Form generated from reading UI file 'deletedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEDIALOG_H
#define UI_DELETEDIALOG_H

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

class Ui_DeleteDialog
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *lineEditTitle;
    QLineEdit *lineEditAuthor;
    QLineEdit *lineEditPublisher;
    QLineEdit *lineEditPubcity;
    QLineEdit *lineEditBarcode;
    QDateEdit *dateEdit;
    QSpinBox *spinBox;
    QPushButton *pushButtonConfirm;
    QPushButton *pushButtonCancel;

    void setupUi(QDialog *DeleteDialog)
    {
        if (DeleteDialog->objectName().isEmpty())
            DeleteDialog->setObjectName(QStringLiteral("DeleteDialog"));
        DeleteDialog->resize(478, 465);
        label = new QLabel(DeleteDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(61, 131, 136, 25));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(DeleteDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 30, 371, 81));
        QFont font1;
        font1.setPointSize(18);
        label_2->setFont(font1);
        label_3 = new QLabel(DeleteDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(61, 162, 136, 25));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(DeleteDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(61, 193, 136, 25));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(DeleteDialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(61, 224, 136, 25));
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(DeleteDialog);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(61, 255, 136, 25));
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(DeleteDialog);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(61, 286, 136, 25));
        label_7->setFont(font);
        label_7->setAlignment(Qt::AlignCenter);
        label_8 = new QLabel(DeleteDialog);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(61, 317, 136, 25));
        label_8->setFont(font);
        label_8->setAlignment(Qt::AlignCenter);
        lineEditTitle = new QLineEdit(DeleteDialog);
        lineEditTitle->setObjectName(QStringLiteral("lineEditTitle"));
        lineEditTitle->setEnabled(false);
        lineEditTitle->setGeometry(QRect(230, 131, 136, 30));
        lineEditTitle->setAlignment(Qt::AlignCenter);
        lineEditAuthor = new QLineEdit(DeleteDialog);
        lineEditAuthor->setObjectName(QStringLiteral("lineEditAuthor"));
        lineEditAuthor->setEnabled(false);
        lineEditAuthor->setGeometry(QRect(230, 162, 136, 30));
        lineEditAuthor->setAlignment(Qt::AlignCenter);
        lineEditPublisher = new QLineEdit(DeleteDialog);
        lineEditPublisher->setObjectName(QStringLiteral("lineEditPublisher"));
        lineEditPublisher->setEnabled(false);
        lineEditPublisher->setGeometry(QRect(230, 224, 136, 30));
        lineEditPublisher->setAlignment(Qt::AlignCenter);
        lineEditPubcity = new QLineEdit(DeleteDialog);
        lineEditPubcity->setObjectName(QStringLiteral("lineEditPubcity"));
        lineEditPubcity->setEnabled(false);
        lineEditPubcity->setGeometry(QRect(230, 255, 136, 30));
        lineEditPubcity->setAlignment(Qt::AlignCenter);
        lineEditBarcode = new QLineEdit(DeleteDialog);
        lineEditBarcode->setObjectName(QStringLiteral("lineEditBarcode"));
        lineEditBarcode->setEnabled(false);
        lineEditBarcode->setGeometry(QRect(230, 317, 136, 30));
        lineEditBarcode->setAlignment(Qt::AlignCenter);
        dateEdit = new QDateEdit(DeleteDialog);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setEnabled(false);
        dateEdit->setGeometry(QRect(230, 193, 136, 30));
        dateEdit->setAlignment(Qt::AlignCenter);
        spinBox = new QSpinBox(DeleteDialog);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setEnabled(false);
        spinBox->setGeometry(QRect(230, 286, 136, 30));
        spinBox->setAlignment(Qt::AlignCenter);
        spinBox->setMaximum(9999);
        pushButtonConfirm = new QPushButton(DeleteDialog);
        pushButtonConfirm->setObjectName(QStringLiteral("pushButtonConfirm"));
        pushButtonConfirm->setGeometry(QRect(50, 380, 151, 51));
        QFont font2;
        font2.setPointSize(16);
        pushButtonConfirm->setFont(font2);
        pushButtonCancel = new QPushButton(DeleteDialog);
        pushButtonCancel->setObjectName(QStringLiteral("pushButtonCancel"));
        pushButtonCancel->setGeometry(QRect(270, 380, 151, 51));
        pushButtonCancel->setFont(font2);

        retranslateUi(DeleteDialog);

        QMetaObject::connectSlotsByName(DeleteDialog);
    } // setupUi

    void retranslateUi(QDialog *DeleteDialog)
    {
        DeleteDialog->setWindowTitle(QApplication::translate("DeleteDialog", "Dialog", 0));
        label->setText(QApplication::translate("DeleteDialog", "Book Title", 0));
        label_2->setText(QApplication::translate("DeleteDialog", "Are you sure to delete the chosen\n"
"item as follow?", 0));
        label_3->setText(QApplication::translate("DeleteDialog", "Author", 0));
        label_4->setText(QApplication::translate("DeleteDialog", "Publication Date", 0));
        label_5->setText(QApplication::translate("DeleteDialog", "Publisher", 0));
        label_6->setText(QApplication::translate("DeleteDialog", "Publisher City", 0));
        label_7->setText(QApplication::translate("DeleteDialog", "Pages", 0));
        label_8->setText(QApplication::translate("DeleteDialog", "Barcode", 0));
        dateEdit->setDisplayFormat(QApplication::translate("DeleteDialog", "yyyy-MM-dd", 0));
        pushButtonConfirm->setText(QApplication::translate("DeleteDialog", "Sure to Delete", 0));
        pushButtonCancel->setText(QApplication::translate("DeleteDialog", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class DeleteDialog: public Ui_DeleteDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEDIALOG_H

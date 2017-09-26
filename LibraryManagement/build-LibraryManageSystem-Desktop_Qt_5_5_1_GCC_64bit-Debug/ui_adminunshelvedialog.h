/********************************************************************************
** Form generated from reading UI file 'adminunshelvedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINUNSHELVEDIALOG_H
#define UI_ADMINUNSHELVEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AdminUnShelveDialog
{
public:
    QLineEdit *lineEditTitle;
    QLineEdit *lineEditISBN;
    QLineEdit *lineEditState;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *lineEditBID;
    QPushButton *pushButtonBIDVerify;
    QLabel *label_5;
    QLabel *label_4;
    QLineEdit *lineEditPosition;
    QLabel *labelPages_5;
    QLabel *labelPublisher;
    QLabel *labelAuthor;
    QLineEdit *lineEditPublisher;
    QLineEdit *lineEditAuthor;
    QPushButton *pushButtonCancel;
    QPushButton *pushButtonConfirm;

    void setupUi(QDialog *AdminUnShelveDialog)
    {
        if (AdminUnShelveDialog->objectName().isEmpty())
            AdminUnShelveDialog->setObjectName(QStringLiteral("AdminUnShelveDialog"));
        AdminUnShelveDialog->resize(400, 390);
        lineEditTitle = new QLineEdit(AdminUnShelveDialog);
        lineEditTitle->setObjectName(QStringLiteral("lineEditTitle"));
        lineEditTitle->setEnabled(false);
        lineEditTitle->setGeometry(QRect(190, 110, 175, 30));
        QFont font;
        font.setPointSize(14);
        lineEditTitle->setFont(font);
        lineEditTitle->setFocusPolicy(Qt::NoFocus);
        lineEditTitle->setAlignment(Qt::AlignCenter);
        lineEditTitle->setReadOnly(true);
        lineEditISBN = new QLineEdit(AdminUnShelveDialog);
        lineEditISBN->setObjectName(QStringLiteral("lineEditISBN"));
        lineEditISBN->setEnabled(false);
        lineEditISBN->setGeometry(QRect(189, 70, 175, 30));
        lineEditISBN->setFont(font);
        lineEditISBN->setFocusPolicy(Qt::NoFocus);
        lineEditISBN->setAlignment(Qt::AlignCenter);
        lineEditISBN->setReadOnly(true);
        lineEditState = new QLineEdit(AdminUnShelveDialog);
        lineEditState->setObjectName(QStringLiteral("lineEditState"));
        lineEditState->setEnabled(false);
        lineEditState->setGeometry(QRect(190, 270, 175, 30));
        lineEditState->setFont(font);
        lineEditState->setFocusPolicy(Qt::NoFocus);
        lineEditState->setAlignment(Qt::AlignCenter);
        lineEditState->setReadOnly(true);
        label_7 = new QLabel(AdminUnShelveDialog);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(41, 110, 121, 30));
        QFont font1;
        font1.setPointSize(16);
        label_7->setFont(font1);
        label_8 = new QLabel(AdminUnShelveDialog);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(40, 70, 121, 30));
        label_8->setFont(font1);
        lineEditBID = new QLineEdit(AdminUnShelveDialog);
        lineEditBID->setObjectName(QStringLiteral("lineEditBID"));
        lineEditBID->setEnabled(true);
        lineEditBID->setGeometry(QRect(190, 30, 120, 30));
        lineEditBID->setFont(font);
        lineEditBID->setFocusPolicy(Qt::StrongFocus);
        lineEditBID->setAlignment(Qt::AlignCenter);
        lineEditBID->setReadOnly(false);
        pushButtonBIDVerify = new QPushButton(AdminUnShelveDialog);
        pushButtonBIDVerify->setObjectName(QStringLiteral("pushButtonBIDVerify"));
        pushButtonBIDVerify->setGeometry(QRect(320, 30, 45, 30));
        label_5 = new QLabel(AdminUnShelveDialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(37, 270, 121, 30));
        label_5->setFont(font1);
        label_4 = new QLabel(AdminUnShelveDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(40, 30, 121, 30));
        label_4->setFont(font1);
        lineEditPosition = new QLineEdit(AdminUnShelveDialog);
        lineEditPosition->setObjectName(QStringLiteral("lineEditPosition"));
        lineEditPosition->setEnabled(false);
        lineEditPosition->setGeometry(QRect(190, 230, 175, 30));
        QFont font2;
        font2.setPointSize(12);
        lineEditPosition->setFont(font2);
        lineEditPosition->setFocusPolicy(Qt::NoFocus);
        lineEditPosition->setAlignment(Qt::AlignCenter);
        lineEditPosition->setReadOnly(true);
        labelPages_5 = new QLabel(AdminUnShelveDialog);
        labelPages_5->setObjectName(QStringLiteral("labelPages_5"));
        labelPages_5->setGeometry(QRect(12, 230, 151, 30));
        QFont font3;
        font3.setPointSize(15);
        labelPages_5->setFont(font3);
        labelPages_5->setAlignment(Qt::AlignCenter);
        labelPublisher = new QLabel(AdminUnShelveDialog);
        labelPublisher->setObjectName(QStringLiteral("labelPublisher"));
        labelPublisher->setGeometry(QRect(10, 190, 146, 30));
        labelPublisher->setFont(font3);
        labelPublisher->setAlignment(Qt::AlignCenter);
        labelAuthor = new QLabel(AdminUnShelveDialog);
        labelAuthor->setObjectName(QStringLiteral("labelAuthor"));
        labelAuthor->setGeometry(QRect(19, 150, 151, 30));
        labelAuthor->setFont(font3);
        labelAuthor->setAlignment(Qt::AlignCenter);
        lineEditPublisher = new QLineEdit(AdminUnShelveDialog);
        lineEditPublisher->setObjectName(QStringLiteral("lineEditPublisher"));
        lineEditPublisher->setEnabled(false);
        lineEditPublisher->setGeometry(QRect(190, 190, 175, 30));
        lineEditPublisher->setFont(font2);
        lineEditPublisher->setFocusPolicy(Qt::NoFocus);
        lineEditPublisher->setAlignment(Qt::AlignCenter);
        lineEditPublisher->setReadOnly(true);
        lineEditAuthor = new QLineEdit(AdminUnShelveDialog);
        lineEditAuthor->setObjectName(QStringLiteral("lineEditAuthor"));
        lineEditAuthor->setEnabled(false);
        lineEditAuthor->setGeometry(QRect(190, 150, 175, 30));
        lineEditAuthor->setFont(font2);
        lineEditAuthor->setFocusPolicy(Qt::NoFocus);
        lineEditAuthor->setAlignment(Qt::AlignCenter);
        lineEditAuthor->setReadOnly(true);
        pushButtonCancel = new QPushButton(AdminUnShelveDialog);
        pushButtonCancel->setObjectName(QStringLiteral("pushButtonCancel"));
        pushButtonCancel->setGeometry(QRect(250, 320, 111, 51));
        pushButtonCancel->setFont(font2);
        pushButtonConfirm = new QPushButton(AdminUnShelveDialog);
        pushButtonConfirm->setObjectName(QStringLiteral("pushButtonConfirm"));
        pushButtonConfirm->setGeometry(QRect(40, 320, 111, 51));
        pushButtonConfirm->setFont(font2);

        retranslateUi(AdminUnShelveDialog);

        QMetaObject::connectSlotsByName(AdminUnShelveDialog);
    } // setupUi

    void retranslateUi(QDialog *AdminUnShelveDialog)
    {
        AdminUnShelveDialog->setWindowTitle(QApplication::translate("AdminUnShelveDialog", "Dialog", 0));
        label_7->setText(QApplication::translate("AdminUnShelveDialog", " Book Title :", 0));
        label_8->setText(QApplication::translate("AdminUnShelveDialog", "Book ISBN :", 0));
        pushButtonBIDVerify->setText(QApplication::translate("AdminUnShelveDialog", "Verify", 0));
        label_5->setText(QApplication::translate("AdminUnShelveDialog", "Book State :", 0));
        label_4->setText(QApplication::translate("AdminUnShelveDialog", "   Book ID   :", 0));
        lineEditPosition->setText(QString());
        labelPages_5->setText(QApplication::translate("AdminUnShelveDialog", "Shelf Position:", 0));
        labelPublisher->setText(QApplication::translate("AdminUnShelveDialog", "     Publisher    :", 0));
        labelAuthor->setText(QApplication::translate("AdminUnShelveDialog", "Book Author:", 0));
        pushButtonCancel->setText(QApplication::translate("AdminUnShelveDialog", "Cancel", 0));
        pushButtonConfirm->setText(QApplication::translate("AdminUnShelveDialog", "UnShelve", 0));
    } // retranslateUi

};

namespace Ui {
    class AdminUnShelveDialog: public Ui_AdminUnShelveDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINUNSHELVEDIALOG_H

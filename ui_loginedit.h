/********************************************************************************
** Form generated from reading UI file 'loginedit.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINEDIT_H
#define UI_LOGINEDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LoginEdit
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *loginLineEdit;
    QPushButton *cancelButton;
    QPushButton *okButton;

    void setupUi(QDialog *LoginEdit)
    {
        if (LoginEdit->objectName().isEmpty())
            LoginEdit->setObjectName(QString::fromUtf8("LoginEdit"));
        LoginEdit->resize(320, 124);
        LoginEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(51, 51, 51);\n"
"color: rgb(255, 255, 255);"));
        gridLayout = new QGridLayout(LoginEdit);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(LoginEdit);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(10);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        loginLineEdit = new QLineEdit(LoginEdit);
        loginLineEdit->setObjectName(QString::fromUtf8("loginLineEdit"));

        gridLayout->addWidget(loginLineEdit, 0, 1, 1, 2);

        cancelButton = new QPushButton(LoginEdit);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        gridLayout->addWidget(cancelButton, 1, 1, 1, 1);

        okButton = new QPushButton(LoginEdit);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        gridLayout->addWidget(okButton, 1, 2, 1, 1);


        retranslateUi(LoginEdit);

        QMetaObject::connectSlotsByName(LoginEdit);
    } // setupUi

    void retranslateUi(QDialog *LoginEdit)
    {
        LoginEdit->setWindowTitle(QCoreApplication::translate("LoginEdit", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("LoginEdit", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\275\320\276\320\262\321\213\320\271 \320\273\320\276\320\263\320\270\320\275", nullptr));
        cancelButton->setText(QCoreApplication::translate("LoginEdit", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        okButton->setText(QCoreApplication::translate("LoginEdit", "\320\236\320\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginEdit: public Ui_LoginEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINEDIT_H

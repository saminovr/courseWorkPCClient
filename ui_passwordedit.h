/********************************************************************************
** Form generated from reading UI file 'passwordedit.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PASSWORDEDIT_H
#define UI_PASSWORDEDIT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_PasswordEdit
{
public:
    QGridLayout *gridLayout;
    QPushButton *cancelButton;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *confirmedPasswordLineEdit;
    QPushButton *okButton;
    QLineEdit *passwordLineEdit;
    QPushButton *viewPassword;
    QPushButton *viewPassword_2;

    void setupUi(QDialog *PasswordEdit)
    {
        if (PasswordEdit->objectName().isEmpty())
            PasswordEdit->setObjectName(QString::fromUtf8("PasswordEdit"));
        PasswordEdit->resize(361, 171);
        PasswordEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(51, 51, 51);\n"
"color: rgb(255, 255, 255);"));
        gridLayout = new QGridLayout(PasswordEdit);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        cancelButton = new QPushButton(PasswordEdit);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        gridLayout->addWidget(cancelButton, 2, 1, 1, 1);

        label_2 = new QLabel(PasswordEdit);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(10);
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(PasswordEdit);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        confirmedPasswordLineEdit = new QLineEdit(PasswordEdit);
        confirmedPasswordLineEdit->setObjectName(QString::fromUtf8("confirmedPasswordLineEdit"));
        confirmedPasswordLineEdit->setFont(font);
        confirmedPasswordLineEdit->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(confirmedPasswordLineEdit, 1, 1, 1, 2);

        okButton = new QPushButton(PasswordEdit);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        gridLayout->addWidget(okButton, 2, 2, 1, 1);

        passwordLineEdit = new QLineEdit(PasswordEdit);
        passwordLineEdit->setObjectName(QString::fromUtf8("passwordLineEdit"));
        passwordLineEdit->setFont(font);
        passwordLineEdit->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(passwordLineEdit, 0, 1, 1, 2);

        viewPassword = new QPushButton(PasswordEdit);
        viewPassword->setObjectName(QString::fromUtf8("viewPassword"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/eyeIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewPassword->setIcon(icon);
        viewPassword->setAutoDefault(false);
        viewPassword->setFlat(true);

        gridLayout->addWidget(viewPassword, 0, 3, 1, 1);

        viewPassword_2 = new QPushButton(PasswordEdit);
        viewPassword_2->setObjectName(QString::fromUtf8("viewPassword_2"));
        viewPassword_2->setIcon(icon);
        viewPassword_2->setIconSize(QSize(16, 16));
        viewPassword_2->setAutoDefault(false);
        viewPassword_2->setFlat(true);

        gridLayout->addWidget(viewPassword_2, 1, 3, 1, 1);


        retranslateUi(PasswordEdit);

        QMetaObject::connectSlotsByName(PasswordEdit);
    } // setupUi

    void retranslateUi(QDialog *PasswordEdit)
    {
        PasswordEdit->setWindowTitle(QCoreApplication::translate("PasswordEdit", "Dialog", nullptr));
        cancelButton->setText(QCoreApplication::translate("PasswordEdit", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        label_2->setText(QCoreApplication::translate("PasswordEdit", "\320\237\320\276\320\262\321\202\320\276\321\200\320\270\321\202\320\265 \320\277\320\260\321\200\320\276\320\273\321\214", nullptr));
        label->setText(QCoreApplication::translate("PasswordEdit", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\275\320\276\320\262\321\213\320\271 \320\277\320\260\321\200\320\276\320\273\321\214", nullptr));
        okButton->setText(QCoreApplication::translate("PasswordEdit", "\320\236\320\232", nullptr));
        viewPassword->setText(QString());
        viewPassword_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class PasswordEdit: public Ui_PasswordEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PASSWORDEDIT_H

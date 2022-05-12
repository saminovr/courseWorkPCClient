/********************************************************************************
** Form generated from reading UI file 'authorization.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTHORIZATION_H
#define UI_AUTHORIZATION_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Authorization
{
public:
    QStackedWidget *stackedWidget;
    QWidget *regPage;
    QFrame *frame;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_9;
    QGridLayout *gridLayout;
    QLineEdit *passwordLineEdit_2;
    QLabel *label_3;
    QLabel *label_5;
    QComboBox *choosePostComboBox;
    QLineEdit *nameLineEdit;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *viewPasswordButton_2;
    QLineEdit *confirmPasswordLineEdit;
    QLineEdit *surnameLineEdit;
    QLabel *label_4;
    QLabel *label_2;
    QLineEdit *loginLineEdit_2;
    QPushButton *viewPasswordButton_3;
    QLineEdit *pinLineEdit;
    QLabel *pinLabel;
    QLabel *label_10;
    QGridLayout *gridLayout_2;
    QPushButton *registerButton;
    QPushButton *backButton;
    QWidget *logPage;
    QWidget *widget_3;
    QWidget *widget;
    QWidget *widget_2;
    QPushButton *exitButton;
    QLabel *label_11;
    QComboBox *postComboBox;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QPushButton *registrationButton;
    QPushButton *logInButton;
    QLabel *label_15;
    QPushButton *viewPasswordButton;
    QLineEdit *passwordLineEdit;
    QLineEdit *loginLineEdit;
    QLabel *label_16;

    void setupUi(QWidget *Authorization)
    {
        if (Authorization->objectName().isEmpty())
            Authorization->setObjectName(QString::fromUtf8("Authorization"));
        Authorization->resize(800, 600);
        stackedWidget = new QStackedWidget(Authorization);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 800, 600));
        stackedWidget->setMaximumSize(QSize(800, 600));
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(51, 51, 51);\n"
""));
        stackedWidget->setLineWidth(1);
        regPage = new QWidget();
        regPage->setObjectName(QString::fromUtf8("regPage"));
        regPage->setStyleSheet(QString::fromUtf8(""));
        frame = new QFrame(regPage);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(150, 50, 500, 500));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame->setFrameShape(QFrame::Box);
        verticalLayoutWidget = new QWidget(frame);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(40, 30, 421, 436));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(40);
        font.setBold(false);
        font.setItalic(false);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("font: 40pt \"Bauhaus 93\";\n"
""));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        label_9 = new QLabel(verticalLayoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFrameShape(QFrame::HLine);

        verticalLayout->addWidget(label_9);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(15);
        passwordLineEdit_2 = new QLineEdit(verticalLayoutWidget);
        passwordLineEdit_2->setObjectName(QString::fromUtf8("passwordLineEdit_2"));
        QFont font1;
        font1.setPointSize(12);
        passwordLineEdit_2->setFont(font1);
        passwordLineEdit_2->setFocusPolicy(Qt::ClickFocus);
        passwordLineEdit_2->setMaxLength(30);
        passwordLineEdit_2->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(passwordLineEdit_2, 4, 1, 1, 1);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font2;
        font2.setPointSize(18);
        font2.setBold(false);
        font2.setItalic(false);
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("font: 18pt \"Bauhaus 93\";"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font2);
        label_5->setStyleSheet(QString::fromUtf8("font: 18pt \"Bauhaus 93\";"));

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        choosePostComboBox = new QComboBox(verticalLayoutWidget);
        choosePostComboBox->setObjectName(QString::fromUtf8("choosePostComboBox"));
        choosePostComboBox->setFont(font1);
        choosePostComboBox->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(choosePostComboBox, 6, 1, 1, 1);

        nameLineEdit = new QLineEdit(verticalLayoutWidget);
        nameLineEdit->setObjectName(QString::fromUtf8("nameLineEdit"));
        nameLineEdit->setFont(font1);
        nameLineEdit->setFocusPolicy(Qt::ClickFocus);
        nameLineEdit->setMaxLength(30);

        gridLayout->addWidget(nameLineEdit, 1, 1, 1, 1);

        label_6 = new QLabel(verticalLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font2);
        label_6->setStyleSheet(QString::fromUtf8("font: 18pt \"Bauhaus 93\";"));

        gridLayout->addWidget(label_6, 4, 0, 1, 1);

        label_7 = new QLabel(verticalLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font2);
        label_7->setStyleSheet(QString::fromUtf8("font: 18pt \"Bauhaus 93\";"));

        gridLayout->addWidget(label_7, 5, 0, 1, 1);

        viewPasswordButton_2 = new QPushButton(verticalLayoutWidget);
        viewPasswordButton_2->setObjectName(QString::fromUtf8("viewPasswordButton_2"));
        viewPasswordButton_2->setFocusPolicy(Qt::ClickFocus);
        viewPasswordButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/passwordCheck.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewPasswordButton_2->setIcon(icon);
        viewPasswordButton_2->setCheckable(false);
        viewPasswordButton_2->setChecked(false);
        viewPasswordButton_2->setFlat(true);

        gridLayout->addWidget(viewPasswordButton_2, 4, 2, 1, 1);

        confirmPasswordLineEdit = new QLineEdit(verticalLayoutWidget);
        confirmPasswordLineEdit->setObjectName(QString::fromUtf8("confirmPasswordLineEdit"));
        confirmPasswordLineEdit->setFont(font1);
        confirmPasswordLineEdit->setFocusPolicy(Qt::ClickFocus);
        confirmPasswordLineEdit->setMaxLength(30);
        confirmPasswordLineEdit->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(confirmPasswordLineEdit, 5, 1, 1, 1);

        surnameLineEdit = new QLineEdit(verticalLayoutWidget);
        surnameLineEdit->setObjectName(QString::fromUtf8("surnameLineEdit"));
        surnameLineEdit->setFont(font1);
        surnameLineEdit->setFocusPolicy(Qt::ClickFocus);
        surnameLineEdit->setMaxLength(30);

        gridLayout->addWidget(surnameLineEdit, 2, 1, 1, 1);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font2);
        label_4->setStyleSheet(QString::fromUtf8("font: 18pt \"Bauhaus 93\";"));

        gridLayout->addWidget(label_4, 6, 0, 1, 1);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("font: 18pt \"Bauhaus 93\";"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        loginLineEdit_2 = new QLineEdit(verticalLayoutWidget);
        loginLineEdit_2->setObjectName(QString::fromUtf8("loginLineEdit_2"));
        loginLineEdit_2->setFont(font1);
        loginLineEdit_2->setFocusPolicy(Qt::ClickFocus);
        loginLineEdit_2->setMaxLength(30);

        gridLayout->addWidget(loginLineEdit_2, 3, 1, 1, 1);

        viewPasswordButton_3 = new QPushButton(verticalLayoutWidget);
        viewPasswordButton_3->setObjectName(QString::fromUtf8("viewPasswordButton_3"));
        viewPasswordButton_3->setFocusPolicy(Qt::ClickFocus);
        viewPasswordButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        viewPasswordButton_3->setIcon(icon);
        viewPasswordButton_3->setCheckable(false);
        viewPasswordButton_3->setChecked(false);
        viewPasswordButton_3->setFlat(true);

        gridLayout->addWidget(viewPasswordButton_3, 5, 2, 1, 1);

        pinLineEdit = new QLineEdit(verticalLayoutWidget);
        pinLineEdit->setObjectName(QString::fromUtf8("pinLineEdit"));
        pinLineEdit->setFont(font1);
        pinLineEdit->setFocusPolicy(Qt::ClickFocus);
        pinLineEdit->setMaxLength(4);
        pinLineEdit->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(pinLineEdit, 7, 1, 1, 1);

        pinLabel = new QLabel(verticalLayoutWidget);
        pinLabel->setObjectName(QString::fromUtf8("pinLabel"));
        pinLabel->setFont(font2);
        pinLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);\n"
"font: 18pt \"Bauhaus 93\";"));

        gridLayout->addWidget(pinLabel, 7, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        label_10 = new QLabel(verticalLayoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFrameShape(QFrame::HLine);

        verticalLayout->addWidget(label_10);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(30);
        registerButton = new QPushButton(verticalLayoutWidget);
        registerButton->setObjectName(QString::fromUtf8("registerButton"));
        QFont font3;
        font3.setPointSize(22);
        font3.setBold(false);
        font3.setItalic(false);
        registerButton->setFont(font3);
        registerButton->setFocusPolicy(Qt::ClickFocus);
        registerButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 127);\n"
"font: 22pt \"Bauhaus 93\";"));

        gridLayout_2->addWidget(registerButton, 0, 1, 1, 1);

        backButton = new QPushButton(verticalLayoutWidget);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setFont(font3);
        backButton->setFocusPolicy(Qt::ClickFocus);
        backButton->setStyleSheet(QString::fromUtf8("background-color: rgb(167, 5, 5);\n"
"font: 22pt \"Bauhaus 93\";\n"
""));

        gridLayout_2->addWidget(backButton, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        stackedWidget->addWidget(regPage);
        logPage = new QWidget();
        logPage->setObjectName(QString::fromUtf8("logPage"));
        logPage->setStyleSheet(QString::fromUtf8("background-color: rgb(51, 51, 51);"));
        widget_3 = new QWidget(logPage);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(203, 40, 401, 481));
        widget_3->setStyleSheet(QString::fromUtf8("background-image: url(:/logPHO.png);"));
        widget = new QWidget(widget_3);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(136, 18, 128, 128));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(0, 0, 127, 127));
        widget_2->setStyleSheet(QString::fromUtf8("background-image: url(:/authorization.png);"));
        exitButton = new QPushButton(logPage);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        exitButton->setGeometry(QRect(740, 540, 52, 52));
        exitButton->setStyleSheet(QString::fromUtf8("background-image: url(:/exitIcon.png);"));
        exitButton->setFlat(true);
        label_11 = new QLabel(logPage);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(234, 188, 341, 61));
        label_11->setFont(font);
        label_11->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 40pt \"Bauhaus 93\";"));
        label_11->setAlignment(Qt::AlignCenter);
        postComboBox = new QComboBox(logPage);
        postComboBox->setObjectName(QString::fromUtf8("postComboBox"));
        postComboBox->setGeometry(QRect(364, 271, 181, 26));
        postComboBox->setFont(font1);
        postComboBox->setFocusPolicy(Qt::ClickFocus);
        postComboBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_12 = new QLabel(logPage);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(244, 268, 97, 31));
        label_12->setFont(font2);
        label_12->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 18pt \"Bauhaus 93\";"));
        label_13 = new QLabel(logPage);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(244, 318, 97, 32));
        label_13->setFont(font2);
        label_13->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 18pt \"Bauhaus 93\";"));
        label_14 = new QLabel(logPage);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(244, 368, 97, 32));
        label_14->setFont(font2);
        label_14->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 18pt \"Bauhaus 93\";"));
        registrationButton = new QPushButton(logPage);
        registrationButton->setObjectName(QString::fromUtf8("registrationButton"));
        registrationButton->setGeometry(QRect(234, 448, 166, 40));
        registrationButton->setFont(font3);
        registrationButton->setFocusPolicy(Qt::ClickFocus);
        registrationButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 127);\n"
"font: 22pt \"Bauhaus 93\";"));
        logInButton = new QPushButton(logPage);
        logInButton->setObjectName(QString::fromUtf8("logInButton"));
        logInButton->setGeometry(QRect(414, 448, 161, 40));
        logInButton->setFont(font3);
        logInButton->setFocusPolicy(Qt::ClickFocus);
        logInButton->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 130, 19);\n"
"font: 22pt \"Bauhaus 93\";"));
        label_15 = new QLabel(logPage);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(234, 408, 339, 36));
        label_15->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_15->setFrameShape(QFrame::HLine);
        label_15->setLineWidth(2);
        viewPasswordButton = new QPushButton(logPage);
        viewPasswordButton->setObjectName(QString::fromUtf8("viewPasswordButton"));
        viewPasswordButton->setGeometry(QRect(550, 370, 28, 24));
        viewPasswordButton->setFocusPolicy(Qt::ClickFocus);
        viewPasswordButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        viewPasswordButton->setIcon(icon);
        viewPasswordButton->setCheckable(false);
        viewPasswordButton->setChecked(false);
        viewPasswordButton->setFlat(true);
        passwordLineEdit = new QLineEdit(logPage);
        passwordLineEdit->setObjectName(QString::fromUtf8("passwordLineEdit"));
        passwordLineEdit->setGeometry(QRect(364, 368, 181, 29));
        passwordLineEdit->setFont(font1);
        passwordLineEdit->setFocusPolicy(Qt::ClickFocus);
        passwordLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        passwordLineEdit->setMaxLength(30);
        passwordLineEdit->setEchoMode(QLineEdit::Password);
        passwordLineEdit->setClearButtonEnabled(true);
        loginLineEdit = new QLineEdit(logPage);
        loginLineEdit->setObjectName(QString::fromUtf8("loginLineEdit"));
        loginLineEdit->setGeometry(QRect(364, 318, 181, 29));
        loginLineEdit->setFont(font1);
        loginLineEdit->setFocusPolicy(Qt::ClickFocus);
        loginLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        loginLineEdit->setMaxLength(30);
        loginLineEdit->setClearButtonEnabled(true);
        label_16 = new QLabel(logPage);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(234, 240, 339, 21));
        label_16->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_16->setFrameShape(QFrame::HLine);
        label_16->setLineWidth(2);
        stackedWidget->addWidget(logPage);

        retranslateUi(Authorization);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Authorization);
    } // setupUi

    void retranslateUi(QWidget *Authorization)
    {
        Authorization->setWindowTitle(QCoreApplication::translate("Authorization", "Form", nullptr));
        label->setText(QCoreApplication::translate("Authorization", "Registration", nullptr));
        label_9->setText(QString());
#if QT_CONFIG(tooltip)
        passwordLineEdit_2->setToolTip(QCoreApplication::translate("Authorization", "\320\227\320\260\320\263\320\273\320\260\320\262\320\275\321\213\320\265 \320\270 \321\201\321\202\321\200\320\276\321\207\320\275\321\213\320\265 \320\273\320\260\321\202\320\270\320\275\321\201\320\272\320\270\320\265 \320\261\321\203\320\272\320\262\321\213 \320\270 \321\206\320\270\321\204\321\200\321\213", nullptr));
#endif // QT_CONFIG(tooltip)
        label_3->setText(QCoreApplication::translate("Authorization", "Surname", nullptr));
        label_5->setText(QCoreApplication::translate("Authorization", "Login", nullptr));
#if QT_CONFIG(tooltip)
        choosePostComboBox->setToolTip(QCoreApplication::translate("Authorization", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\264\320\276\320\273\320\266\320\275\320\276\321\201\321\202\321\214", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        nameLineEdit->setToolTip(QCoreApplication::translate("Authorization", "\320\227\320\260\320\263\320\273\320\260\320\262\320\275\320\260\321\217 \320\270 \321\201\321\202\321\200\320\276\321\207\320\275\321\213\320\265 \320\261\321\203\320\272\320\262\321\213", nullptr));
#endif // QT_CONFIG(tooltip)
        label_6->setText(QCoreApplication::translate("Authorization", "Password", nullptr));
        label_7->setText(QCoreApplication::translate("Authorization", "Confirm password", nullptr));
#if QT_CONFIG(tooltip)
        viewPasswordButton_2->setToolTip(QCoreApplication::translate("Authorization", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214 \320\277\320\260\321\200\320\276\320\273\321\214", nullptr));
#endif // QT_CONFIG(tooltip)
        viewPasswordButton_2->setText(QString());
#if QT_CONFIG(tooltip)
        confirmPasswordLineEdit->setToolTip(QCoreApplication::translate("Authorization", "\320\227\320\260\320\263\320\273\320\260\320\262\320\275\321\213\320\265 \320\270 \321\201\321\202\321\200\320\276\321\207\320\275\321\213\320\265 \320\273\320\260\321\202\320\270\320\275\321\201\320\272\320\270\320\265 \320\261\321\203\320\272\320\262\321\213 \320\270 \321\206\320\270\321\204\321\200\321\213", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        surnameLineEdit->setToolTip(QCoreApplication::translate("Authorization", "\320\227\320\260\320\263\320\273\320\260\320\262\320\275\320\260\321\217 \320\270 \321\201\321\202\321\200\320\276\321\207\320\275\321\213\320\265 \320\261\321\203\320\272\320\262\321\213", nullptr));
#endif // QT_CONFIG(tooltip)
        label_4->setText(QCoreApplication::translate("Authorization", "Who you are?", nullptr));
        label_2->setText(QCoreApplication::translate("Authorization", "Name", nullptr));
#if QT_CONFIG(tooltip)
        loginLineEdit_2->setToolTip(QCoreApplication::translate("Authorization", "\320\227\320\260\320\263\320\273\320\260\320\262\320\275\321\213\320\265 \320\270 \321\201\321\202\321\200\320\276\321\207\320\275\321\213\320\265 \320\273\320\260\321\202\320\270\320\275\321\201\320\272\320\270\320\265 \320\261\321\203\320\272\320\262\321\213 \320\270 \321\206\320\270\321\204\321\200\321\213", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        viewPasswordButton_3->setToolTip(QCoreApplication::translate("Authorization", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214 \320\277\320\260\321\200\320\276\320\273\321\214", nullptr));
#endif // QT_CONFIG(tooltip)
        viewPasswordButton_3->setText(QString());
#if QT_CONFIG(tooltip)
        pinLineEdit->setToolTip(QCoreApplication::translate("Authorization", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\277\320\270\320\275-\320\272\320\276\320\264 \320\277\320\265\321\200\321\201\320\276\320\275\320\260\320\273\320\260", nullptr));
#endif // QT_CONFIG(tooltip)
        pinLabel->setText(QCoreApplication::translate("Authorization", "Enter PIN", nullptr));
        label_10->setText(QString());
        registerButton->setText(QCoreApplication::translate("Authorization", "Register", nullptr));
        backButton->setText(QCoreApplication::translate("Authorization", "Back", nullptr));
        exitButton->setText(QString());
        label_11->setText(QCoreApplication::translate("Authorization", "Authorization", nullptr));
#if QT_CONFIG(tooltip)
        postComboBox->setToolTip(QCoreApplication::translate("Authorization", "\320\222\320\260\321\210\320\260 \320\264\320\276\320\273\320\266\320\275\320\276\321\201\321\202\321\214", nullptr));
#endif // QT_CONFIG(tooltip)
        label_12->setText(QCoreApplication::translate("Authorization", "Post", nullptr));
        label_13->setText(QCoreApplication::translate("Authorization", "Login", nullptr));
        label_14->setText(QCoreApplication::translate("Authorization", "Password", nullptr));
        registrationButton->setText(QCoreApplication::translate("Authorization", "Registration", nullptr));
        logInButton->setText(QCoreApplication::translate("Authorization", "Log in", nullptr));
        label_15->setText(QString());
#if QT_CONFIG(tooltip)
        viewPasswordButton->setToolTip(QCoreApplication::translate("Authorization", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214 \320\277\320\260\321\200\320\276\320\273\321\214", nullptr));
#endif // QT_CONFIG(tooltip)
        viewPasswordButton->setText(QString());
#if QT_CONFIG(tooltip)
        passwordLineEdit->setToolTip(QCoreApplication::translate("Authorization", "\320\227\320\260\320\263\320\273\320\260\320\262\320\275\321\213\320\265 \320\270 \321\201\321\202\321\200\320\276\321\207\320\275\321\213\320\265 \320\273\320\260\321\202\320\270\320\275\321\201\320\272\320\270\320\265 \320\261\321\203\320\272\320\262\321\213 \320\270 \321\206\320\270\321\204\321\200\321\213", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        loginLineEdit->setToolTip(QCoreApplication::translate("Authorization", "\320\227\320\260\320\263\320\273\320\260\320\262\320\275\321\213\320\265 \320\270 \321\201\321\202\321\200\320\276\321\207\320\275\321\213\320\265 \320\273\320\260\321\202\320\270\320\275\321\201\320\272\320\270\320\265 \320\261\321\203\320\272\320\262\321\213 \320\270 \321\206\320\270\321\204\321\200\321\213", nullptr));
#endif // QT_CONFIG(tooltip)
        label_16->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Authorization: public Ui_Authorization {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTHORIZATION_H

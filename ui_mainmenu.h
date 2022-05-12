/********************************************************************************
** Form generated from reading UI file 'mainmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINMENU_H
#define UI_MAINMENU_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainMenu
{
public:
    QStackedWidget *stackedWidget;
    QWidget *entrancePage;
    QWidget *widget;
    QPushButton *exitButton;
    QLabel *label;
    QPushButton *authorizationButton;
    QLabel *label_2;
    QWidget *widget_2;
    QWidget *mainPage;
    QWidget *widget_5;
    QLabel *label_13;
    QWidget *widget_6;
    QListView *allAdsListView;
    QWidget *accountPage;
    QWidget *widget_3;
    QPushButton *setPhotoButton;
    QPushButton *deletePhotoButton;
    QLabel *label_8;
    QLineEdit *editNameLineEdit;
    QPushButton *editNameButton;
    QLineEdit *editSurnameLineEdit;
    QPushButton *saveChangesButton;
    QLabel *label_4;
    QPushButton *editSurnameButton;
    QPushButton *editLoginButton;
    QPushButton *editPasswordButton;
    QPushButton *logOutButton;
    QLabel *label_10;
    QLabel *loginLabel;
    QPushButton *deleteAccountButton;
    QLabel *label_7;
    QLabel *label_3;
    QWidget *widget_4;
    QLabel *label_5;
    QLabel *postLabelRight;
    QLabel *postLabelLeft;
    QLabel *label_14;
    QLabel *label_9;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *nameLabel;
    QLabel *surnameLabel;
    QPushButton *goToAdHistoryButton;
    QLabel *statusLabel;
    QPushButton *backToAdminAdPageButton;
    QPushButton *setPhotoButton_3;
    QPushButton *backToChatButton;
    QWidget *myAdsPage;
    QWidget *widget_13;
    QWidget *widget_14;
    QLabel *label_83;
    QListView *adsListView;
    QLabel *postLabel;
    QWidget *adHistoryPage;
    QLabel *label_113;
    QWidget *widget_24;
    QWidget *widget_25;
    QListView *historyListView;
    QPushButton *backToAccountPageButton;
    QWidget *stackPage;
    QLabel *label_124;
    QWidget *widget_26;
    QWidget *widget_27;
    QListView *historyAndStackListView;
    QWidget *adPage;
    QPushButton *backButton_2;
    QWidget *widget_23;
    QLabel *headingLabel;
    QLabel *label_114;
    QLabel *label_115;
    QLabel *label_116;
    QLabel *label_117;
    QLabel *label_118;
    QLabel *label_119;
    QLabel *label_120;
    QLabel *label_121;
    QLabel *label_122;
    QLabel *buyingYearLabell;
    QLabel *transmissionLabell;
    QLabel *colorLabell;
    QLabel *driveLabell;
    QLabel *mileageLabell;
    QLabel *bodyTypeLabell;
    QLabel *engineLabell;
    QLabel *powerLabell;
    QTextEdit *descriptionTextEditt;
    QLabel *label_123;
    QPushButton *behindImageButtonn;
    QPushButton *bonnetImageButtonn;
    QPushButton *leftImageButtonn;
    QPushButton *rightImageButtonn;
    QPushButton *trunkImageButtonn;
    QPushButton *acceptButtonn;
    QPushButton *deleteAdButtonn;
    QPushButton *accountButtonn;
    QLabel *statusLabell;
    QPushButton *frontImageButtonn;
    QLabel *label_125;
    QPushButton *accountButton;
    QPushButton *chatButton;
    QPushButton *addAdButton;
    QPushButton *allAdsButton;
    QPushButton *adStackButton;
    QPushButton *adHistoryButton;
    QPushButton *myAdsButton;
    QPushButton *exitProgrammButton;

    void setupUi(QWidget *MainMenu)
    {
        if (MainMenu->objectName().isEmpty())
            MainMenu->setObjectName(QString::fromUtf8("MainMenu"));
        MainMenu->resize(800, 600);
        MainMenu->setMaximumSize(QSize(800, 600));
        MainMenu->setStyleSheet(QString::fromUtf8(""));
        stackedWidget = new QStackedWidget(MainMenu);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 800, 600));
        stackedWidget->setMaximumSize(QSize(800, 600));
        QFont font;
        font.setPointSize(10);
        stackedWidget->setFont(font);
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        entrancePage = new QWidget();
        entrancePage->setObjectName(QString::fromUtf8("entrancePage"));
        entrancePage->setStyleSheet(QString::fromUtf8("background-color: rgb(51, 51, 51);\n"
""));
        widget = new QWidget(entrancePage);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(200, 100, 400, 361));
        widget->setFocusPolicy(Qt::NoFocus);
        widget->setStyleSheet(QString::fromUtf8("background-image: url(:/entrancePHO.png);"));
        exitButton = new QPushButton(entrancePage);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        exitButton->setGeometry(QRect(740, 540, 52, 52));
        exitButton->setStyleSheet(QString::fromUtf8("background-image: url(:/exitIcon.png);"));
        exitButton->setFlat(true);
        label = new QLabel(entrancePage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(200, 230, 399, 51));
        QFont font1;
        font1.setPointSize(42);
        font1.setBold(false);
        font1.setItalic(false);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("font: 42pt \"Bauhaus 93\";\n"
"background-color: rgb(255, 255, 255);"));
        label->setAlignment(Qt::AlignCenter);
        authorizationButton = new QPushButton(entrancePage);
        authorizationButton->setObjectName(QString::fromUtf8("authorizationButton"));
        authorizationButton->setGeometry(QRect(250, 360, 300, 50));
        QFont font2;
        font2.setPointSize(28);
        font2.setBold(false);
        font2.setItalic(false);
        authorizationButton->setFont(font2);
        authorizationButton->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 130, 19);\n"
"font: 28pt \"Bauhaus 93\";"));
        label_2 = new QLabel(entrancePage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(200, 280, 399, 30));
        QFont font3;
        font3.setPointSize(22);
        font3.setBold(false);
        font3.setItalic(false);
        label_2->setFont(font3);
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 22pt \"Bauhaus 93\";"));
        label_2->setAlignment(Qt::AlignCenter);
        widget_2 = new QWidget(entrancePage);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(352, 130, 96, 96));
        widget_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"background-image: url(:/car.png);"));
        stackedWidget->addWidget(entrancePage);
        mainPage = new QWidget();
        mainPage->setObjectName(QString::fromUtf8("mainPage"));
        mainPage->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 44);"));
        widget_5 = new QWidget(mainPage);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        widget_5->setGeometry(QRect(140, 30, 446, 50));
        widget_5->setStyleSheet(QString::fromUtf8("background-image: url(:/LK_PHO.png);\n"
""));
        label_13 = new QLabel(mainPage);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(160, 35, 411, 41));
        QFont font4;
        font4.setPointSize(26);
        font4.setBold(false);
        font4.setItalic(false);
        label_13->setFont(font4);
        label_13->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 26pt \"Bauhaus 93\";"));
        label_13->setAlignment(Qt::AlignCenter);
        widget_6 = new QWidget(mainPage);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        widget_6->setGeometry(QRect(8, 100, 711, 471));
        widget_6->setStyleSheet(QString::fromUtf8("background-image: url(:/LK_PFON.png);"));
        allAdsListView = new QListView(mainPage);
        allAdsListView->setObjectName(QString::fromUtf8("allAdsListView"));
        allAdsListView->setGeometry(QRect(40, 130, 651, 411));
        allAdsListView->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 16pt \"Arial\";"));
        allAdsListView->setFrameShape(QFrame::NoFrame);
        stackedWidget->addWidget(mainPage);
        accountPage = new QWidget();
        accountPage->setObjectName(QString::fromUtf8("accountPage"));
        accountPage->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(0, 18, 0);"));
        widget_3 = new QWidget(accountPage);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(8, 100, 710, 470));
        widget_3->setStyleSheet(QString::fromUtf8("background-image: url(:/LK_PFON.png);"));
        setPhotoButton = new QPushButton(accountPage);
        setPhotoButton->setObjectName(QString::fromUtf8("setPhotoButton"));
        setPhotoButton->setGeometry(QRect(50, 130, 121, 111));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/addPhoto.png"), QSize(), QIcon::Normal, QIcon::Off);
        setPhotoButton->setIcon(icon);
        setPhotoButton->setIconSize(QSize(150, 150));
        setPhotoButton->setFlat(true);
        deletePhotoButton = new QPushButton(accountPage);
        deletePhotoButton->setObjectName(QString::fromUtf8("deletePhotoButton"));
        deletePhotoButton->setGeometry(QRect(60, 250, 101, 21));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        deletePhotoButton->setIcon(icon1);
        deletePhotoButton->setFlat(true);
        label_8 = new QLabel(accountPage);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(50, 365, 47, 21));
        label_8->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_8->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        editNameLineEdit = new QLineEdit(accountPage);
        editNameLineEdit->setObjectName(QString::fromUtf8("editNameLineEdit"));
        editNameLineEdit->setGeometry(QRect(50, 312, 231, 21));
        QFont font5;
        font5.setPointSize(11);
        editNameLineEdit->setFont(font5);
        editNameLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        editNameLineEdit->setReadOnly(false);
        editNameButton = new QPushButton(accountPage);
        editNameButton->setObjectName(QString::fromUtf8("editNameButton"));
        editNameButton->setGeometry(QRect(289, 312, 21, 21));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        editNameButton->setIcon(icon2);
        editNameButton->setFlat(true);
        editSurnameLineEdit = new QLineEdit(accountPage);
        editSurnameLineEdit->setObjectName(QString::fromUtf8("editSurnameLineEdit"));
        editSurnameLineEdit->setGeometry(QRect(340, 312, 221, 21));
        editSurnameLineEdit->setFont(font5);
        editSurnameLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        saveChangesButton = new QPushButton(accountPage);
        saveChangesButton->setObjectName(QString::fromUtf8("saveChangesButton"));
        saveChangesButton->setGeometry(QRect(600, 311, 80, 21));
        saveChangesButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 127);"));
        label_4 = new QLabel(accountPage);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(340, 290, 51, 21));
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        editSurnameButton = new QPushButton(accountPage);
        editSurnameButton->setObjectName(QString::fromUtf8("editSurnameButton"));
        editSurnameButton->setGeometry(QRect(568, 312, 21, 21));
        editSurnameButton->setIcon(icon2);
        editSurnameButton->setFlat(true);
        editLoginButton = new QPushButton(accountPage);
        editLoginButton->setObjectName(QString::fromUtf8("editLoginButton"));
        editLoginButton->setGeometry(QRect(50, 440, 121, 21));
        editLoginButton->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);"));
        editLoginButton->setIcon(icon2);
        editLoginButton->setFlat(true);
        editPasswordButton = new QPushButton(accountPage);
        editPasswordButton->setObjectName(QString::fromUtf8("editPasswordButton"));
        editPasswordButton->setGeometry(QRect(220, 440, 121, 21));
        editPasswordButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        editPasswordButton->setIcon(icon2);
        editPasswordButton->setFlat(true);
        logOutButton = new QPushButton(accountPage);
        logOutButton->setObjectName(QString::fromUtf8("logOutButton"));
        logOutButton->setGeometry(QRect(50, 510, 131, 24));
        logOutButton->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 130, 19);"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        logOutButton->setIcon(icon3);
        label_10 = new QLabel(accountPage);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(181, 511, 18, 21));
        label_10->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_10->setFrameShape(QFrame::VLine);
        loginLabel = new QLabel(accountPage);
        loginLabel->setObjectName(QString::fromUtf8("loginLabel"));
        loginLabel->setGeometry(QRect(100, 360, 151, 25));
        QFont font6;
        font6.setPointSize(12);
        font6.setBold(false);
        font6.setItalic(false);
        loginLabel->setFont(font6);
        loginLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 12pt \"Arial\";"));
        loginLabel->setFrameShape(QFrame::NoFrame);
        loginLabel->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        deleteAccountButton = new QPushButton(accountPage);
        deleteAccountButton->setObjectName(QString::fromUtf8("deleteAccountButton"));
        deleteAccountButton->setGeometry(QRect(200, 510, 131, 24));
        deleteAccountButton->setStyleSheet(QString::fromUtf8("background-color: rgb(167, 5, 5);"));
        label_7 = new QLabel(accountPage);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(52, 480, 275, 16));
        QFont font7;
        font7.setPointSize(6);
        font7.setBold(false);
        label_7->setFont(font7);
        label_7->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_7->setFrameShape(QFrame::HLine);
        label_7->setFrameShadow(QFrame::Sunken);
        label_7->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(accountPage);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 290, 47, 21));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        widget_4 = new QWidget(accountPage);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setGeometry(QRect(140, 30, 445, 50));
        widget_4->setStyleSheet(QString::fromUtf8("background-image: url(:/LK_PHO.png);"));
        label_5 = new QLabel(accountPage);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(160, 35, 411, 41));
        label_5->setFont(font4);
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 26pt \"Bauhaus 93\";"));
        label_5->setAlignment(Qt::AlignCenter);
        postLabelRight = new QLabel(accountPage);
        postLabelRight->setObjectName(QString::fromUtf8("postLabelRight"));
        postLabelRight->setGeometry(QRect(420, 360, 171, 25));
        postLabelRight->setFont(font6);
        postLabelRight->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 12pt \"Arial\";"));
        postLabelRight->setFrameShape(QFrame::NoFrame);
        postLabelRight->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        postLabelLeft = new QLabel(accountPage);
        postLabelLeft->setObjectName(QString::fromUtf8("postLabelLeft"));
        postLabelLeft->setGeometry(QRect(340, 365, 71, 21));
        postLabelLeft->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        postLabelLeft->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        label_14 = new QLabel(accountPage);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(340, 387, 270, 1));
        QFont font8;
        font8.setPointSize(2);
        label_14->setFont(font8);
        label_14->setStyleSheet(QString::fromUtf8("background-color: rgb(51, 51, 51);"));
        label_14->setFrameShape(QFrame::NoFrame);
        label_14->setFrameShadow(QFrame::Plain);
        label_9 = new QLabel(accountPage);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(50, 387, 270, 1));
        label_9->setFont(font8);
        label_9->setStyleSheet(QString::fromUtf8("background-color: rgb(51, 51, 51);"));
        label_9->setFrameShape(QFrame::NoFrame);
        label_9->setFrameShadow(QFrame::Plain);
        label_25 = new QLabel(accountPage);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(50, 308, 270, 1));
        label_25->setFont(font8);
        label_25->setStyleSheet(QString::fromUtf8("background-color: rgb(51, 51, 51);"));
        label_25->setFrameShape(QFrame::NoFrame);
        label_25->setFrameShadow(QFrame::Plain);
        label_26 = new QLabel(accountPage);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(340, 308, 270, 1));
        label_26->setFont(font8);
        label_26->setStyleSheet(QString::fromUtf8("background-color: rgb(51, 51, 51);"));
        label_26->setFrameShape(QFrame::NoFrame);
        label_26->setFrameShadow(QFrame::Plain);
        nameLabel = new QLabel(accountPage);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));
        nameLabel->setGeometry(QRect(80, 280, 151, 25));
        nameLabel->setFont(font5);
        nameLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        nameLabel->setFrameShape(QFrame::NoFrame);
        nameLabel->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        surnameLabel = new QLabel(accountPage);
        surnameLabel->setObjectName(QString::fromUtf8("surnameLabel"));
        surnameLabel->setGeometry(QRect(400, 280, 171, 25));
        surnameLabel->setFont(font6);
        surnameLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 12pt \"Arial\";"));
        surnameLabel->setFrameShape(QFrame::NoFrame);
        surnameLabel->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        goToAdHistoryButton = new QPushButton(accountPage);
        goToAdHistoryButton->setObjectName(QString::fromUtf8("goToAdHistoryButton"));
        goToAdHistoryButton->setGeometry(QRect(50, 510, 131, 24));
        goToAdHistoryButton->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 130, 19);"));
        statusLabel = new QLabel(accountPage);
        statusLabel->setObjectName(QString::fromUtf8("statusLabel"));
        statusLabel->setGeometry(QRect(50, 250, 171, 25));
        statusLabel->setFont(font6);
        statusLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(148, 0, 0);\n"
"font: 12pt \"Arial\";"));
        statusLabel->setFrameShape(QFrame::NoFrame);
        backToAdminAdPageButton = new QPushButton(accountPage);
        backToAdminAdPageButton->setObjectName(QString::fromUtf8("backToAdminAdPageButton"));
        backToAdminAdPageButton->setGeometry(QRect(10, 10, 31, 31));
        backToAdminAdPageButton->setStyleSheet(QString::fromUtf8(""));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/backIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        backToAdminAdPageButton->setIcon(icon4);
        backToAdminAdPageButton->setIconSize(QSize(30, 30));
        backToAdminAdPageButton->setFlat(true);
        setPhotoButton_3 = new QPushButton(accountPage);
        setPhotoButton_3->setObjectName(QString::fromUtf8("setPhotoButton_3"));
        setPhotoButton_3->setGeometry(QRect(50, 130, 121, 111));
        setPhotoButton_3->setIcon(icon);
        setPhotoButton_3->setIconSize(QSize(150, 150));
        setPhotoButton_3->setFlat(true);
        backToChatButton = new QPushButton(accountPage);
        backToChatButton->setObjectName(QString::fromUtf8("backToChatButton"));
        backToChatButton->setGeometry(QRect(10, 10, 31, 31));
        backToChatButton->setIcon(icon4);
        backToChatButton->setIconSize(QSize(30, 30));
        backToChatButton->setFlat(true);
        stackedWidget->addWidget(accountPage);
        widget_3->raise();
        deleteAccountButton->raise();
        logOutButton->raise();
        editPasswordButton->raise();
        setPhotoButton->raise();
        editNameLineEdit->raise();
        editSurnameLineEdit->raise();
        saveChangesButton->raise();
        editNameButton->raise();
        editSurnameButton->raise();
        loginLabel->raise();
        label_4->raise();
        editLoginButton->raise();
        label_8->raise();
        deletePhotoButton->raise();
        label_10->raise();
        label_7->raise();
        label_3->raise();
        widget_4->raise();
        label_5->raise();
        postLabelRight->raise();
        postLabelLeft->raise();
        label_14->raise();
        label_9->raise();
        label_25->raise();
        label_26->raise();
        nameLabel->raise();
        surnameLabel->raise();
        goToAdHistoryButton->raise();
        statusLabel->raise();
        backToAdminAdPageButton->raise();
        setPhotoButton_3->raise();
        backToChatButton->raise();
        myAdsPage = new QWidget();
        myAdsPage->setObjectName(QString::fromUtf8("myAdsPage"));
        myAdsPage->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(36, 0, 0);"));
        widget_13 = new QWidget(myAdsPage);
        widget_13->setObjectName(QString::fromUtf8("widget_13"));
        widget_13->setGeometry(QRect(8, 100, 711, 471));
        widget_13->setStyleSheet(QString::fromUtf8("background-image: url(:/LK_PFON.png);"));
        widget_14 = new QWidget(myAdsPage);
        widget_14->setObjectName(QString::fromUtf8("widget_14"));
        widget_14->setGeometry(QRect(140, 30, 446, 50));
        widget_14->setStyleSheet(QString::fromUtf8("background-image: url(:/LK_PHO.png);\n"
""));
        label_83 = new QLabel(myAdsPage);
        label_83->setObjectName(QString::fromUtf8("label_83"));
        label_83->setGeometry(QRect(160, 35, 411, 41));
        label_83->setFont(font4);
        label_83->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 26pt \"Bauhaus 93\";		"));
        label_83->setAlignment(Qt::AlignCenter);
        adsListView = new QListView(myAdsPage);
        adsListView->setObjectName(QString::fromUtf8("adsListView"));
        adsListView->setGeometry(QRect(45, 130, 641, 411));
        adsListView->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 16pt \"Arial\";"));
        adsListView->setFrameShape(QFrame::NoFrame);
        postLabel = new QLabel(myAdsPage);
        postLabel->setObjectName(QString::fromUtf8("postLabel"));
        postLabel->setGeometry(QRect(620, 550, 49, 16));
        stackedWidget->addWidget(myAdsPage);
        postLabel->raise();
        widget_13->raise();
        widget_14->raise();
        label_83->raise();
        adsListView->raise();
        adHistoryPage = new QWidget();
        adHistoryPage->setObjectName(QString::fromUtf8("adHistoryPage"));
        adHistoryPage->setStyleSheet(QString::fromUtf8("background-color: rgb(28, 0, 42);"));
        label_113 = new QLabel(adHistoryPage);
        label_113->setObjectName(QString::fromUtf8("label_113"));
        label_113->setGeometry(QRect(160, 35, 411, 41));
        label_113->setFont(font4);
        label_113->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 26pt \"Bauhaus 93\";"));
        label_113->setAlignment(Qt::AlignCenter);
        widget_24 = new QWidget(adHistoryPage);
        widget_24->setObjectName(QString::fromUtf8("widget_24"));
        widget_24->setGeometry(QRect(8, 100, 711, 471));
        widget_24->setStyleSheet(QString::fromUtf8("background-image: url(:/LK_PFON.png);"));
        widget_25 = new QWidget(adHistoryPage);
        widget_25->setObjectName(QString::fromUtf8("widget_25"));
        widget_25->setGeometry(QRect(140, 30, 446, 50));
        widget_25->setStyleSheet(QString::fromUtf8("background-image: url(:/LK_PHO.png);\n"
""));
        historyListView = new QListView(adHistoryPage);
        historyListView->setObjectName(QString::fromUtf8("historyListView"));
        historyListView->setGeometry(QRect(40, 130, 651, 411));
        historyListView->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 16pt \"Arial\";"));
        historyListView->setFrameShape(QFrame::NoFrame);
        backToAccountPageButton = new QPushButton(adHistoryPage);
        backToAccountPageButton->setObjectName(QString::fromUtf8("backToAccountPageButton"));
        backToAccountPageButton->setGeometry(QRect(10, 10, 31, 31));
        backToAccountPageButton->setStyleSheet(QString::fromUtf8(""));
        backToAccountPageButton->setIcon(icon4);
        backToAccountPageButton->setIconSize(QSize(30, 30));
        backToAccountPageButton->setFlat(true);
        stackedWidget->addWidget(adHistoryPage);
        widget_24->raise();
        widget_25->raise();
        label_113->raise();
        historyListView->raise();
        backToAccountPageButton->raise();
        stackPage = new QWidget();
        stackPage->setObjectName(QString::fromUtf8("stackPage"));
        stackPage->setStyleSheet(QString::fromUtf8("background-color: rgb(24, 8, 0);"));
        label_124 = new QLabel(stackPage);
        label_124->setObjectName(QString::fromUtf8("label_124"));
        label_124->setGeometry(QRect(160, 35, 411, 41));
        label_124->setFont(font4);
        label_124->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 26pt \"Bauhaus 93\";"));
        label_124->setAlignment(Qt::AlignCenter);
        widget_26 = new QWidget(stackPage);
        widget_26->setObjectName(QString::fromUtf8("widget_26"));
        widget_26->setGeometry(QRect(140, 30, 446, 50));
        widget_26->setStyleSheet(QString::fromUtf8("background-image: url(:/LK_PHO.png);\n"
""));
        widget_27 = new QWidget(stackPage);
        widget_27->setObjectName(QString::fromUtf8("widget_27"));
        widget_27->setGeometry(QRect(8, 100, 711, 471));
        widget_27->setStyleSheet(QString::fromUtf8("background-image: url(:/LK_PFON.png);"));
        historyAndStackListView = new QListView(stackPage);
        historyAndStackListView->setObjectName(QString::fromUtf8("historyAndStackListView"));
        historyAndStackListView->setGeometry(QRect(40, 130, 651, 411));
        historyAndStackListView->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 16pt \"Arial\";"));
        historyAndStackListView->setFrameShape(QFrame::NoFrame);
        stackedWidget->addWidget(stackPage);
        widget_26->raise();
        widget_27->raise();
        label_124->raise();
        historyAndStackListView->raise();
        adPage = new QWidget();
        adPage->setObjectName(QString::fromUtf8("adPage"));
        adPage->setStyleSheet(QString::fromUtf8("background-color: rgb(51, 51, 51);"));
        backButton_2 = new QPushButton(adPage);
        backButton_2->setObjectName(QString::fromUtf8("backButton_2"));
        backButton_2->setGeometry(QRect(10, 10, 31, 31));
        backButton_2->setStyleSheet(QString::fromUtf8(""));
        backButton_2->setIcon(icon4);
        backButton_2->setIconSize(QSize(30, 30));
        backButton_2->setFlat(true);
        widget_23 = new QWidget(adPage);
        widget_23->setObjectName(QString::fromUtf8("widget_23"));
        widget_23->setGeometry(QRect(10, 50, 710, 540));
        widget_23->setStyleSheet(QString::fromUtf8("background-image: url(:/adPHO.png);"));
        headingLabel = new QLabel(widget_23);
        headingLabel->setObjectName(QString::fromUtf8("headingLabel"));
        headingLabel->setGeometry(QRect(20, 20, 531, 41));
        QFont font9;
        font9.setPointSize(18);
        font9.setBold(true);
        headingLabel->setFont(font9);
        headingLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_114 = new QLabel(adPage);
        label_114->setObjectName(QString::fromUtf8("label_114"));
        label_114->setGeometry(QRect(30, 130, 91, 21));
        QFont font10;
        font10.setPointSize(12);
        label_114->setFont(font10);
        label_114->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_115 = new QLabel(adPage);
        label_115->setObjectName(QString::fromUtf8("label_115"));
        label_115->setGeometry(QRect(30, 160, 111, 21));
        label_115->setFont(font10);
        label_115->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_116 = new QLabel(adPage);
        label_116->setObjectName(QString::fromUtf8("label_116"));
        label_116->setGeometry(QRect(30, 220, 91, 21));
        label_116->setFont(font10);
        label_116->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_117 = new QLabel(adPage);
        label_117->setObjectName(QString::fromUtf8("label_117"));
        label_117->setGeometry(QRect(30, 190, 91, 21));
        label_117->setFont(font10);
        label_117->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_118 = new QLabel(adPage);
        label_118->setObjectName(QString::fromUtf8("label_118"));
        label_118->setGeometry(QRect(30, 340, 101, 21));
        label_118->setFont(font10);
        label_118->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_119 = new QLabel(adPage);
        label_119->setObjectName(QString::fromUtf8("label_119"));
        label_119->setGeometry(QRect(30, 280, 91, 21));
        label_119->setFont(font10);
        label_119->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_120 = new QLabel(adPage);
        label_120->setObjectName(QString::fromUtf8("label_120"));
        label_120->setGeometry(QRect(30, 310, 91, 21));
        label_120->setFont(font10);
        label_120->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_121 = new QLabel(adPage);
        label_121->setObjectName(QString::fromUtf8("label_121"));
        label_121->setGeometry(QRect(30, 250, 91, 21));
        label_121->setFont(font10);
        label_121->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_122 = new QLabel(adPage);
        label_122->setObjectName(QString::fromUtf8("label_122"));
        label_122->setGeometry(QRect(30, 370, 91, 21));
        label_122->setFont(font10);
        label_122->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        buyingYearLabell = new QLabel(adPage);
        buyingYearLabell->setObjectName(QString::fromUtf8("buyingYearLabell"));
        buyingYearLabell->setGeometry(QRect(150, 340, 151, 21));
        buyingYearLabell->setFont(font10);
        buyingYearLabell->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        buyingYearLabell->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        transmissionLabell = new QLabel(adPage);
        transmissionLabell->setObjectName(QString::fromUtf8("transmissionLabell"));
        transmissionLabell->setGeometry(QRect(150, 220, 151, 21));
        transmissionLabell->setFont(font10);
        transmissionLabell->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        transmissionLabell->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        colorLabell = new QLabel(adPage);
        colorLabell->setObjectName(QString::fromUtf8("colorLabell"));
        colorLabell->setGeometry(QRect(150, 280, 151, 21));
        colorLabell->setFont(font10);
        colorLabell->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        colorLabell->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        driveLabell = new QLabel(adPage);
        driveLabell->setObjectName(QString::fromUtf8("driveLabell"));
        driveLabell->setGeometry(QRect(150, 190, 151, 21));
        driveLabell->setFont(font10);
        driveLabell->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        driveLabell->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        mileageLabell = new QLabel(adPage);
        mileageLabell->setObjectName(QString::fromUtf8("mileageLabell"));
        mileageLabell->setGeometry(QRect(150, 310, 151, 21));
        mileageLabell->setFont(font10);
        mileageLabell->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        mileageLabell->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        bodyTypeLabell = new QLabel(adPage);
        bodyTypeLabell->setObjectName(QString::fromUtf8("bodyTypeLabell"));
        bodyTypeLabell->setGeometry(QRect(150, 130, 151, 21));
        bodyTypeLabell->setFont(font10);
        bodyTypeLabell->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        bodyTypeLabell->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        engineLabell = new QLabel(adPage);
        engineLabell->setObjectName(QString::fromUtf8("engineLabell"));
        engineLabell->setGeometry(QRect(150, 160, 151, 21));
        engineLabell->setFont(font10);
        engineLabell->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        engineLabell->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        powerLabell = new QLabel(adPage);
        powerLabell->setObjectName(QString::fromUtf8("powerLabell"));
        powerLabell->setGeometry(QRect(150, 250, 151, 21));
        powerLabell->setFont(font10);
        powerLabell->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        powerLabell->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        descriptionTextEditt = new QTextEdit(adPage);
        descriptionTextEditt->setObjectName(QString::fromUtf8("descriptionTextEditt"));
        descriptionTextEditt->setGeometry(QRect(30, 400, 275, 171));
        descriptionTextEditt->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        descriptionTextEditt->setReadOnly(true);
        label_123 = new QLabel(adPage);
        label_123->setObjectName(QString::fromUtf8("label_123"));
        label_123->setGeometry(QRect(30, 110, 671, 2));
        behindImageButtonn = new QPushButton(adPage);
        behindImageButtonn->setObjectName(QString::fromUtf8("behindImageButtonn"));
        behindImageButtonn->setGeometry(QRect(370, 340, 103, 81));
        behindImageButtonn->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        behindImageButtonn->setIconSize(QSize(103, 81));
        behindImageButtonn->setFlat(true);
        bonnetImageButtonn = new QPushButton(adPage);
        bonnetImageButtonn->setObjectName(QString::fromUtf8("bonnetImageButtonn"));
        bonnetImageButtonn->setGeometry(QRect(485, 340, 103, 81));
        bonnetImageButtonn->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        bonnetImageButtonn->setIconSize(QSize(103, 81));
        bonnetImageButtonn->setFlat(true);
        leftImageButtonn = new QPushButton(adPage);
        leftImageButtonn->setObjectName(QString::fromUtf8("leftImageButtonn"));
        leftImageButtonn->setGeometry(QRect(599, 340, 101, 81));
        leftImageButtonn->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        leftImageButtonn->setIconSize(QSize(103, 81));
        leftImageButtonn->setFlat(true);
        rightImageButtonn = new QPushButton(adPage);
        rightImageButtonn->setObjectName(QString::fromUtf8("rightImageButtonn"));
        rightImageButtonn->setGeometry(QRect(370, 430, 103, 81));
        rightImageButtonn->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        rightImageButtonn->setIconSize(QSize(103, 81));
        rightImageButtonn->setFlat(true);
        trunkImageButtonn = new QPushButton(adPage);
        trunkImageButtonn->setObjectName(QString::fromUtf8("trunkImageButtonn"));
        trunkImageButtonn->setGeometry(QRect(485, 430, 103, 81));
        trunkImageButtonn->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        trunkImageButtonn->setIconSize(QSize(103, 81));
        trunkImageButtonn->setFlat(true);
        acceptButtonn = new QPushButton(adPage);
        acceptButtonn->setObjectName(QString::fromUtf8("acceptButtonn"));
        acceptButtonn->setGeometry(QRect(370, 540, 161, 31));
        acceptButtonn->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 127);\n"
"color: rgb(255, 255, 255);\n"
"font: 10pt \"Arial\";\n"
""));
        deleteAdButtonn = new QPushButton(adPage);
        deleteAdButtonn->setObjectName(QString::fromUtf8("deleteAdButtonn"));
        deleteAdButtonn->setGeometry(QRect(559, 540, 141, 30));
        deleteAdButtonn->setStyleSheet(QString::fromUtf8("background-color: rgb(167, 5, 5);\n"
"font: 10pt \"Arial\";\n"
"color: rgb(255, 255, 255);"));
        accountButtonn = new QPushButton(adPage);
        accountButtonn->setObjectName(QString::fromUtf8("accountButtonn"));
        accountButtonn->setGeometry(QRect(569, 65, 131, 41));
        accountButtonn->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 10pt \"Arial\";"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/LK.png"), QSize(), QIcon::Normal, QIcon::Off);
        accountButtonn->setIcon(icon5);
        accountButtonn->setIconSize(QSize(30, 30));
        statusLabell = new QLabel(adPage);
        statusLabell->setObjectName(QString::fromUtf8("statusLabell"));
        statusLabell->setGeometry(QRect(571, 80, 127, 25));
        statusLabell->setFont(font10);
        statusLabell->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        statusLabell->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        frontImageButtonn = new QPushButton(adPage);
        frontImageButtonn->setObjectName(QString::fromUtf8("frontImageButtonn"));
        frontImageButtonn->setGeometry(QRect(370, 130, 330, 200));
        frontImageButtonn->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frontImageButtonn->setIconSize(QSize(330, 200));
        frontImageButtonn->setFlat(true);
        label_125 = new QLabel(adPage);
        label_125->setObjectName(QString::fromUtf8("label_125"));
        label_125->setGeometry(QRect(369, 526, 330, 1));
        stackedWidget->addWidget(adPage);
        backButton_2->raise();
        widget_23->raise();
        behindImageButtonn->raise();
        leftImageButtonn->raise();
        bonnetImageButtonn->raise();
        label_122->raise();
        driveLabell->raise();
        descriptionTextEditt->raise();
        label_119->raise();
        label_120->raise();
        buyingYearLabell->raise();
        powerLabell->raise();
        label_121->raise();
        bodyTypeLabell->raise();
        mileageLabell->raise();
        engineLabell->raise();
        label_118->raise();
        label_116->raise();
        label_117->raise();
        transmissionLabell->raise();
        label_114->raise();
        colorLabell->raise();
        label_115->raise();
        rightImageButtonn->raise();
        trunkImageButtonn->raise();
        label_123->raise();
        acceptButtonn->raise();
        deleteAdButtonn->raise();
        accountButtonn->raise();
        statusLabell->raise();
        frontImageButtonn->raise();
        label_125->raise();
        accountButton = new QPushButton(MainMenu);
        accountButton->setObjectName(QString::fromUtf8("accountButton"));
        accountButton->setGeometry(QRect(5, 10, 60, 50));
        accountButton->setFont(font);
        accountButton->setStyleSheet(QString::fromUtf8(""));
        accountButton->setIcon(icon5);
        accountButton->setIconSize(QSize(40, 40));
        accountButton->setAutoDefault(false);
        accountButton->setFlat(true);
        chatButton = new QPushButton(MainMenu);
        chatButton->setObjectName(QString::fromUtf8("chatButton"));
        chatButton->setGeometry(QRect(5, 130, 60, 50));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/chatIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        chatButton->setIcon(icon6);
        chatButton->setIconSize(QSize(40, 40));
        chatButton->setFlat(true);
        addAdButton = new QPushButton(MainMenu);
        addAdButton->setObjectName(QString::fromUtf8("addAdButton"));
        addAdButton->setGeometry(QRect(5, 190, 60, 50));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/addAd.png"), QSize(), QIcon::Normal, QIcon::Off);
        addAdButton->setIcon(icon7);
        addAdButton->setIconSize(QSize(40, 40));
        addAdButton->setFlat(true);
        allAdsButton = new QPushButton(MainMenu);
        allAdsButton->setObjectName(QString::fromUtf8("allAdsButton"));
        allAdsButton->setGeometry(QRect(5, 70, 60, 50));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/allAdIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        allAdsButton->setIcon(icon8);
        allAdsButton->setIconSize(QSize(40, 40));
        allAdsButton->setFlat(true);
        adStackButton = new QPushButton(MainMenu);
        adStackButton->setObjectName(QString::fromUtf8("adStackButton"));
        adStackButton->setGeometry(QRect(5, 380, 60, 50));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/stackIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        adStackButton->setIcon(icon9);
        adStackButton->setIconSize(QSize(45, 45));
        adStackButton->setFlat(true);
        adHistoryButton = new QPushButton(MainMenu);
        adHistoryButton->setObjectName(QString::fromUtf8("adHistoryButton"));
        adHistoryButton->setGeometry(QRect(5, 320, 60, 50));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/historyIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        adHistoryButton->setIcon(icon10);
        adHistoryButton->setIconSize(QSize(40, 40));
        adHistoryButton->setFlat(true);
        myAdsButton = new QPushButton(MainMenu);
        myAdsButton->setObjectName(QString::fromUtf8("myAdsButton"));
        myAdsButton->setGeometry(QRect(5, 260, 60, 50));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/myAdsIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        myAdsButton->setIcon(icon11);
        myAdsButton->setIconSize(QSize(40, 40));
        myAdsButton->setFlat(true);
        exitProgrammButton = new QPushButton(MainMenu);
        exitProgrammButton->setObjectName(QString::fromUtf8("exitProgrammButton"));
        exitProgrammButton->setGeometry(QRect(10, 540, 60, 50));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/exitIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        exitProgrammButton->setIcon(icon12);
        exitProgrammButton->setIconSize(QSize(40, 40));
        exitProgrammButton->setFlat(true);
        allAdsButton->raise();
        exitProgrammButton->raise();
        adStackButton->raise();
        adHistoryButton->raise();
        myAdsButton->raise();
        addAdButton->raise();
        chatButton->raise();
        accountButton->raise();
        stackedWidget->raise();

        retranslateUi(MainMenu);

        stackedWidget->setCurrentIndex(2);
        accountButton->setDefault(false);


        QMetaObject::connectSlotsByName(MainMenu);
    } // setupUi

    void retranslateUi(QWidget *MainMenu)
    {
        MainMenu->setWindowTitle(QCoreApplication::translate("MainMenu", "MainMenu", nullptr));
#if QT_CONFIG(tooltip)
        MainMenu->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        stackedWidget->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        stackedWidget->setWhatsThis(QCoreApplication::translate("MainMenu", "<html><head/><body><p>\320\234\320\276\320\270 \320\276\320\261\321\212\321\217\320\262\320\273\320\265\320\275\320\270\321\217</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        exitButton->setText(QString());
        label->setText(QCoreApplication::translate("MainMenu", "Welcome", nullptr));
        authorizationButton->setText(QCoreApplication::translate("MainMenu", "Authorization", nullptr));
        label_2->setText(QCoreApplication::translate("MainMenu", "to the AUTOSHOP", nullptr));
        label_13->setText(QCoreApplication::translate("MainMenu", "All ads", nullptr));
        setPhotoButton->setText(QString());
        deletePhotoButton->setText(QCoreApplication::translate("MainMenu", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \321\204\320\276\321\202\320\276", nullptr));
        label_8->setText(QCoreApplication::translate("MainMenu", "\320\233\320\276\320\263\320\270\320\275:", nullptr));
        editNameLineEdit->setText(QString());
        editNameButton->setText(QString());
        editSurnameLineEdit->setText(QString());
        saveChangesButton->setText(QCoreApplication::translate("MainMenu", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        label_4->setText(QCoreApplication::translate("MainMenu", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217 ", nullptr));
        editSurnameButton->setText(QString());
        editLoginButton->setText(QCoreApplication::translate("MainMenu", "\320\241\320\274\320\265\320\275\320\270\321\202\321\214 \320\273\320\276\320\263\320\270\320\275...", nullptr));
        editPasswordButton->setText(QCoreApplication::translate("MainMenu", "\320\241\320\274\320\265\320\275\320\270\321\202\321\214 \320\277\320\260\321\200\320\276\320\273\321\214...", nullptr));
        logOutButton->setText(QCoreApplication::translate("MainMenu", "\320\222\321\213\320\271\321\202\320\270", nullptr));
        label_10->setText(QString());
        loginLabel->setText(QString());
        deleteAccountButton->setText(QCoreApplication::translate("MainMenu", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\277\321\200\320\276\321\204\320\270\320\273\321\214", nullptr));
        label_7->setText(QString());
        label_3->setText(QCoreApplication::translate("MainMenu", "\320\230\320\274\321\217", nullptr));
        label_5->setText(QCoreApplication::translate("MainMenu", "Personal account ", nullptr));
        postLabelRight->setText(QString());
        postLabelLeft->setText(QCoreApplication::translate("MainMenu", "\320\224\320\276\320\273\320\266\320\275\320\276\321\201\321\202\321\214:", nullptr));
        label_14->setText(QString());
        label_9->setText(QString());
        label_25->setText(QString());
        label_26->setText(QString());
        nameLabel->setText(QString());
        surnameLabel->setText(QString());
        goToAdHistoryButton->setText(QCoreApplication::translate("MainMenu", "\320\230\321\201\321\202\320\276\321\200\320\270\321\217 \320\277\321\203\320\261\320\273\320\270\320\272\320\260\321\206\320\270\320\271", nullptr));
        statusLabel->setText(QCoreApplication::translate("MainMenu", "\320\227\320\260\320\261\320\273\320\276\320\272\320\270\321\200\320\276\320\262\320\260\320\275", nullptr));
        backToAdminAdPageButton->setText(QString());
        setPhotoButton_3->setText(QString());
        backToChatButton->setText(QString());
        label_83->setText(QCoreApplication::translate("MainMenu", "My ads", nullptr));
        postLabel->setText(QString());
        label_113->setText(QCoreApplication::translate("MainMenu", "Ad history", nullptr));
        backToAccountPageButton->setText(QString());
        label_124->setText(QCoreApplication::translate("MainMenu", "List for approval", nullptr));
        backButton_2->setText(QString());
        headingLabel->setText(QString());
        label_114->setText(QCoreApplication::translate("MainMenu", "\320\242\320\270\320\277 \320\272\321\203\320\267\320\276\320\262\320\260: ", nullptr));
        label_115->setText(QCoreApplication::translate("MainMenu", "\320\242\320\270\320\277 \320\264\320\262\320\270\320\263\320\260\321\202\320\265\320\273\321\217: ", nullptr));
        label_116->setText(QCoreApplication::translate("MainMenu", "\320\242\320\270\320\277 \320\232\320\237\320\237:", nullptr));
        label_117->setText(QCoreApplication::translate("MainMenu", "\320\237\321\200\320\270\320\262\320\276\320\264:", nullptr));
        label_118->setText(QCoreApplication::translate("MainMenu", "\320\223\320\276\320\264 \320\277\320\276\320\272\321\203\320\277\320\272\320\270:", nullptr));
        label_119->setText(QCoreApplication::translate("MainMenu", "\320\246\320\262\320\265\321\202:", nullptr));
        label_120->setText(QCoreApplication::translate("MainMenu", "\320\237\321\200\320\276\320\261\320\265\320\263:", nullptr));
        label_121->setText(QCoreApplication::translate("MainMenu", "\320\234\320\276\321\211\320\275\320\276\321\201\321\202\321\214:", nullptr));
        label_122->setText(QCoreApplication::translate("MainMenu", "\320\236\320\277\320\270\321\201\320\260\320\275\320\270\320\265:", nullptr));
        buyingYearLabell->setText(QString());
        transmissionLabell->setText(QString());
        colorLabell->setText(QString());
        driveLabell->setText(QString());
        mileageLabell->setText(QString());
        bodyTypeLabell->setText(QString());
        engineLabell->setText(QString());
        powerLabell->setText(QString());
        label_123->setText(QString());
        behindImageButtonn->setText(QString());
        bonnetImageButtonn->setText(QString());
        leftImageButtonn->setText(QString());
        rightImageButtonn->setText(QString());
        trunkImageButtonn->setText(QString());
        acceptButtonn->setText(QCoreApplication::translate("MainMenu", "\320\241\320\262\321\217\320\267\320\260\321\202\321\214\321\201\321\217  \321\201 \320\277\321\200\320\276\320\264\320\260\320\262\321\206\320\276\320\274", nullptr));
        deleteAdButtonn->setText(QCoreApplication::translate("MainMenu", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\276\320\261\321\212\321\217\320\262\320\273\320\265\320\275\320\270\320\265", nullptr));
        accountButtonn->setText(QString());
        statusLabell->setText(QString());
        frontImageButtonn->setText(QString());
        label_125->setText(QString());
#if QT_CONFIG(tooltip)
        accountButton->setToolTip(QCoreApplication::translate("MainMenu", "\320\233\320\270\321\207\320\275\321\213\320\271 \320\272\320\260\320\261\320\270\320\275\320\265\321\202", nullptr));
#endif // QT_CONFIG(tooltip)
        accountButton->setText(QString());
#if QT_CONFIG(tooltip)
        chatButton->setToolTip(QCoreApplication::translate("MainMenu", "\320\247\320\260\321\202", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        chatButton->setWhatsThis(QCoreApplication::translate("MainMenu", "<html><head/><body><p>\320\247\320\260\321\202</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        chatButton->setText(QString());
#if QT_CONFIG(tooltip)
        addAdButton->setToolTip(QCoreApplication::translate("MainMenu", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\276\320\261\321\212\321\217\320\262\320\273\320\265\320\275\320\270\320\265", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        addAdButton->setWhatsThis(QCoreApplication::translate("MainMenu", "<html><head/><body><p>\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\276\320\261\321\212\321\217\320\262\320\273\320\265\320\275\320\270\320\265</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        addAdButton->setText(QString());
#if QT_CONFIG(tooltip)
        allAdsButton->setToolTip(QCoreApplication::translate("MainMenu", "\320\222\321\201\320\265 \320\276\320\261\321\212\321\217\320\262\320\273\320\265\320\275\320\270\321\217", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        allAdsButton->setWhatsThis(QCoreApplication::translate("MainMenu", "<html><head/><body><p>\320\222\321\201\320\265 \320\276\320\261\321\212\321\217\320\262\320\273\320\265\320\275\320\270\321\217 </p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        allAdsButton->setText(QString());
        adStackButton->setText(QString());
#if QT_CONFIG(tooltip)
        adHistoryButton->setToolTip(QCoreApplication::translate("MainMenu", "\320\230\321\201\321\202\320\276\321\200\320\270\321\217 \320\276\320\261\321\212\321\217\320\262\320\273\320\265\320\275\320\270\320\271 ", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        adHistoryButton->setWhatsThis(QCoreApplication::translate("MainMenu", "<html><head/><body><p>\320\230\321\201\321\202\320\276\321\200\320\270\321\217 \320\276\320\261\321\212\321\217\320\262\320\273\320\265\320\275\320\270\320\271</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        adHistoryButton->setText(QString());
#if QT_CONFIG(tooltip)
        myAdsButton->setToolTip(QCoreApplication::translate("MainMenu", "\320\234\320\276\320\270 \320\276\320\261\321\212\321\217\320\262\320\273\320\265\320\275\320\270\321\217", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        myAdsButton->setWhatsThis(QCoreApplication::translate("MainMenu", "<html><head/><body><p>\320\234\320\276\320\270 \320\276\320\261\321\212\321\217\320\262\320\273\320\265\320\275\320\270\321\217</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        myAdsButton->setText(QString());
#if QT_CONFIG(tooltip)
        exitProgrammButton->setToolTip(QCoreApplication::translate("MainMenu", "\320\222\321\213\321\205\320\276\320\264 \320\270\320\267 \320\277\321\200\320\270\320\273\320\276\320\266\320\265\320\275\320\270\321\217", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        exitProgrammButton->setWhatsThis(QCoreApplication::translate("MainMenu", "<html><head/><body><p>\320\222\321\213\321\205\320\276\320\264 \320\270\320\267 \320\277\321\200\320\270\320\273\320\276\320\266\320\265\320\275\320\270\321\217 </p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        exitProgrammButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainMenu: public Ui_MainMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINMENU_H

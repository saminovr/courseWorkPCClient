/********************************************************************************
** Form generated from reading UI file 'chat.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHAT_H
#define UI_CHAT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Chat
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label;
    QPushButton *backToMainMenuFromChatButton;
    QLabel *label_2;
    QTextEdit *chatArea;
    QListView *chatList;
    QTextEdit *messageTextEdit;
    QPushButton *enterMessageButton;
    QWidget *widget;
    QLabel *label_3;
    QPushButton *userPushButton;

    void setupUi(QWidget *Chat)
    {
        if (Chat->objectName().isEmpty())
            Chat->setObjectName(QString::fromUtf8("Chat"));
        Chat->resize(800, 600);
        Chat->setMaximumSize(QSize(800, 600));
        Chat->setStyleSheet(QString::fromUtf8("background-color: rgb(51, 51, 51);"));
        stackedWidget = new QStackedWidget(Chat);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 800, 600));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setStyleSheet(QString::fromUtf8("background-color: rgb(51, 51, 51);"));
        label = new QLabel(page);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 500, 151, 31));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        backToMainMenuFromChatButton = new QPushButton(page);
        backToMainMenuFromChatButton->setObjectName(QString::fromUtf8("backToMainMenuFromChatButton"));
        backToMainMenuFromChatButton->setGeometry(QRect(10, 10, 31, 31));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/backIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        backToMainMenuFromChatButton->setIcon(icon);
        backToMainMenuFromChatButton->setIconSize(QSize(30, 30));
        backToMainMenuFromChatButton->setAutoDefault(false);
        backToMainMenuFromChatButton->setFlat(true);
        label_2 = new QLabel(page);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(90, 80, 181, 31));
        QFont font1;
        font1.setPointSize(26);
        font1.setBold(false);
        font1.setItalic(false);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 26pt \"Bauhaus 93\";"));
        chatArea = new QTextEdit(page);
        chatArea->setObjectName(QString::fromUtf8("chatArea"));
        chatArea->setGeometry(QRect(90, 160, 411, 331));
        chatArea->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        chatArea->setReadOnly(true);
        chatList = new QListView(page);
        chatList->setObjectName(QString::fromUtf8("chatList"));
        chatList->setGeometry(QRect(510, 160, 201, 331));
        chatList->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        messageTextEdit = new QTextEdit(page);
        messageTextEdit->setObjectName(QString::fromUtf8("messageTextEdit"));
        messageTextEdit->setGeometry(QRect(250, 500, 410, 40));
        messageTextEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        enterMessageButton = new QPushButton(page);
        enterMessageButton->setObjectName(QString::fromUtf8("enterMessageButton"));
        enterMessageButton->setGeometry(QRect(670, 500, 40, 40));
        enterMessageButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/enterMessage.png"), QSize(), QIcon::Normal, QIcon::Off);
        enterMessageButton->setIcon(icon1);
        enterMessageButton->setIconSize(QSize(40, 40));
        enterMessageButton->setFlat(true);
        widget = new QWidget(page);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(50, 60, 700, 500));
        widget->setStyleSheet(QString::fromUtf8("background-image: url(:/addAdPHO.png);"));
        label_3 = new QLabel(page);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(87, 117, 621, 2));
        userPushButton = new QPushButton(page);
        userPushButton->setObjectName(QString::fromUtf8("userPushButton"));
        userPushButton->setGeometry(QRect(90, 126, 131, 30));
        userPushButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 10pt \"Arial\";"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/LK.png"), QSize(), QIcon::Normal, QIcon::Off);
        userPushButton->setIcon(icon2);
        userPushButton->setIconSize(QSize(25, 25));
        stackedWidget->addWidget(page);
        widget->raise();
        backToMainMenuFromChatButton->raise();
        chatArea->raise();
        chatList->raise();
        enterMessageButton->raise();
        label->raise();
        label_2->raise();
        messageTextEdit->raise();
        label_3->raise();
        userPushButton->raise();

        retranslateUi(Chat);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Chat);
    } // setupUi

    void retranslateUi(QWidget *Chat)
    {
        Chat->setWindowTitle(QCoreApplication::translate("Chat", "Form", nullptr));
        label->setText(QCoreApplication::translate("Chat", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\201\320\276\320\276\320\261\321\211\320\265\320\275\320\270\320\265: ", nullptr));
        backToMainMenuFromChatButton->setText(QString());
        label_2->setText(QCoreApplication::translate("Chat", "Auto_Chat", nullptr));
        enterMessageButton->setText(QString());
        label_3->setText(QString());
        userPushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Chat: public Ui_Chat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHAT_H

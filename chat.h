#ifndef CHAT_H
#define CHAT_H

#include <QWidget>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QStandardItemModel>
#include <QTimer>
#include "connector.h"

namespace Ui {
class Chat;
}

class Chat : public QWidget
{
    Q_OBJECT

public:
    explicit Chat(QWidget *parent = nullptr);
    ~Chat();
    QString myCurrentLogin;
    QString myCurrentRole;

    typedef enum
    {
        sendMessage = 19,
        messageHistory,
        setMessageHistory,




    }
    typeMessage;

    QStandardItemModel* chatModel;

public slots:
    void prepareToSending(QModelIndex index);



private slots:
    void on_backToMainMenuFromChatButton_clicked();

    void on_enterMessageButton_clicked();

    void slotMessageSended(QJsonDocument);


    void on_chatList_clicked();

    void slotSetMessages(QJsonDocument);

    void clearChat();

    void update();

    void on_userPushButton_clicked();

private:
    Ui::Chat *ui;

    QTimer* timer;

    Connector objConnect;




signals:
    void backToMainMenuFromChat();

    void getAccountInformation(QString);
};

#endif // CHAT_H

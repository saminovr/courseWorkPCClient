#ifndef CONNECTOR_H
#define CONNECTOR_H

#include <QObject>
#include <QTcpSocket>
#include <QJsonObject>
#include <QJsonDocument>
#include <QTimer>
#include <QNetworkConfigurationManager>
#include <QHostInfo>




class Connector : public QObject
{
    Q_OBJECT
public:
    explicit Connector(QObject *parent = nullptr);

    typedef enum
    {
        authorization = 1, //идентификатор авторизации
        registration,
        addingAnAd,
        adInfo,
        adAccepted,
        accountInfo,
        blockAccount,
        updateInfo,
        historyInfo,
        stackInfo,
        SetUserPhoto,
        DeleteUserPhoto,
        myAds,
        deleteAd,
        deleteUser,
        updateUserName,
        editLogin,
        editPassword,
        sendMessage,
        messageHistory,
        setMessageHistory










    }
    typeMessage;






private:
    QTcpSocket* socket;

    QByteArray incomingArray = 0;
    QTimer timer;



public slots:

    void translator(QJsonDocument);

private slots:

    void slotConnected();
    void slotReadyRead();
    void slotDicsconnected();

    void slotClearArray();




signals:
    void profileBlocked();
    void profileExists(bool, QJsonDocument);
    void permissionToRegister(bool, QJsonDocument);

    void adIsLoaded(bool, QJsonDocument);

    void adInformation(QJsonDocument);

    void adIsAccepted(bool, QJsonDocument);

    void accountInformation(QJsonDocument);

    void updateInformation(QJsonDocument);

    void historyInformation(QJsonDocument);

    void stackInformation(QJsonDocument);

    void myAdsInfo(QJsonDocument);

    void loginEdited(bool, QString);

    void messageSended(QJsonDocument);

    void chats(QJsonDocument);

    void setMessages(QJsonDocument);


};

#endif // CONNECTOR_H

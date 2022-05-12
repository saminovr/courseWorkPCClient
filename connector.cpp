 #include "connector.h"

Connector::Connector(QObject *parent)
    : QObject{parent}
{
    socket = new QTcpSocket;
    socket->connectToHost("localhost", 2323);

    // для сокетов
    connect(socket, &QTcpSocket::connected, this, &Connector::slotConnected);
    connect(socket, &QTcpSocket::readyRead, this, &Connector::slotReadyRead);
    connect(socket, &QTcpSocket::disconnected, this, &Connector::slotConnected);


    connect(&timer, SIGNAL(timeout()), this, SLOT(slotClearArray()));

    // для взаимодействия классов с Connector




}

void Connector::translator(QJsonDocument doc)
{
    socket->write(doc.toJson());
}



void Connector::slotConnected()
{
    qDebug()<<"Connected";
}

void Connector::slotReadyRead()
{
    timer.stop();
    incomingArray.append(socket->readAll());
    QJsonDocument doc = QJsonDocument::fromJson(incomingArray);
    int type = doc.object().value("type").toInt();
    switch (type) {
    case authorization:
    {
        QJsonObject obj = doc.object().value("main").toObject();
        bool answer = obj.value("answer").toBool();
        bool isNotBlocked = obj.value("isNotBlocked").toBool();
        if (answer)
        {
            if (isNotBlocked)
                emit profileExists(true, doc);
            else if (!isNotBlocked)
                emit profileBlocked();
        }
        else if (!answer)
            emit profileExists(false, doc);
        break;
    }
    case registration:
    {
        QJsonObject obj = doc.object().value("main").toObject();
        bool answer = obj.value("answer").toBool();
        if (answer)
            emit permissionToRegister(true, doc);
        else if (!answer)
        {
            emit permissionToRegister(false, doc);
        }
        break;
    }
    case addingAnAd:
    {
        QJsonObject obj = doc.object().value("main").toObject();
        bool answer = obj.value("answer").toBool();
        if (answer)
            emit adIsLoaded(true, doc);
        else if (!answer)
        {
            emit adIsLoaded(false, doc);
        }
        break;
    }
    case adInfo:
    {
        emit adInformation(doc);
        break;
    }
    case adAccepted:
    {
        QJsonObject obj = doc.object().value("main").toObject();
        bool isAccepted = obj.value("isAccepted").toBool();
        if (isAccepted)
        {
            emit adIsAccepted(true, doc);
        }
        else if (!isAccepted)
        {
            emit adIsAccepted(false, doc);
        }
        break;
    }
    case accountInfo:
    {
        emit accountInformation(doc);
        break;
    }
    case updateInfo:
    {
        emit updateInformation(doc);
        break;
    }
    case historyInfo:
    {
        emit historyInformation(doc);
        break;
    }
    case stackInfo:
    {
        emit stackInformation(doc);
        break;
    }
    case myAds:
    {
        emit myAdsInfo(doc);
        break;
    }
    case editLogin:
    {
        QJsonObject obj = doc.object().value("main").toObject();
        bool isEdited = obj.value("isEdited").toBool();
        QString newLogin = obj.value("editedLogin").toString();
        if (isEdited)
        {
            emit loginEdited(true, newLogin);
        }
        else emit loginEdited(false, newLogin);

    }
    case sendMessage:
    {
        emit messageSended(doc);

        break;
    }
    case messageHistory:
    {
        emit chats(doc);
        break;
    }
    case setMessageHistory:
    {

        emit setMessages(doc);
        break;
    }
    }

    timer.start(500);
}

void Connector::slotDicsconnected()
{
    qDebug()<<"DISCONNECTED";
}

void Connector::slotClearArray()
{
    incomingArray.clear();
    timer.stop();
}

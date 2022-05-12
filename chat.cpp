#include "chat.h"
#include "ui_chat.h"

Chat::Chat(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Chat)
{
    ui->setupUi(this);
    this->setStyleSheet("background-color: rgb(51, 51, 51);");
    chatModel = new QStandardItemModel;
    chatModel->insertColumn(0);
    ui->userPushButton->hide();

    timer = new QTimer;

    ui->chatList->setModel(chatModel);
    ui->messageTextEdit->setEnabled(false);
    //
    connect(&objConnect, SIGNAL(messageSended(QJsonDocument)), this, SLOT(slotMessageSended(QJsonDocument)));

    connect(&objConnect, SIGNAL(setMessages(QJsonDocument)), this, SLOT(slotSetMessages(QJsonDocument)));

    connect(timer, SIGNAL(timeout()), this, SLOT(update()));





}

Chat::~Chat()
{
    delete ui;
}

void Chat::on_backToMainMenuFromChatButton_clicked()
{
    chatModel->clear();
    chatModel->insertColumn(0);
    ui->chatArea->clear();
    emit backToMainMenuFromChat();
    ui->userPushButton->hide();
    timer->stop();
}


void Chat::on_enterMessageButton_clicked()
{

    timer->stop();
    timer->start(2000);
    if (!ui->messageTextEdit->toPlainText().isEmpty())
    {
        QJsonObject obj;
        obj.insert("type", sendMessage);
        QJsonObject obj1;
        obj1.insert("senderLogin", myCurrentLogin);
        obj1.insert("receiverLogin", chatModel->data(chatModel->index(ui->chatList->currentIndex().row(),
                                                                      0)).toString());
        obj1.insert("message", ui->messageTextEdit->toPlainText());
        obj.insert("main", obj1);
        QJsonDocument doc;
        doc.setObject(obj);

        QMetaObject::invokeMethod(&objConnect, "translator", Qt::QueuedConnection, Q_ARG(QJsonDocument, doc));
        ui->messageTextEdit->clear();
        //on_chatList_clicked();
    }


}

void Chat::slotMessageSended(QJsonDocument doc)
{

    QJsonObject obj = doc.object().value("main").toObject();

    QString message = obj.value("message").toString();
    QString timeDate = obj.value("timeDate").toString();

    QString senderLogin = obj.value("senderLogin").toString();
    QString receiverLogin = obj.value("receiverLogin").toString();

    if(myCurrentLogin==senderLogin)
    {
        ui->chatArea->setAlignment(Qt::AlignRight);
        ui->chatArea->append("<"+timeDate+"> Я:"+message+"\n");
    }
    else if(myCurrentLogin==receiverLogin)
    {
        ui->chatArea->setAlignment(Qt::AlignLeft);
        ui->chatArea->append("<"+timeDate+"> "+senderLogin+":"+message+"\n");
    }
    timer->start(2000);

}

void Chat::prepareToSending(QModelIndex index)
{
    ui->chatList->setEnabled(true);
    ui->chatList->setCurrentIndex(index);
    ui->messageTextEdit->setEnabled(true);
    ui->userPushButton->show();
    ui->userPushButton->setText(chatModel->data(chatModel->index(ui->chatList->currentIndex().row(),0)).toString());
    on_chatList_clicked();
}



void Chat::on_chatList_clicked()
{
    //timer->stop();
    //timer->start(2000);
    ui->chatArea->clear();
    QJsonObject obj;
    obj.insert("type", setMessageHistory);
    QJsonObject obj1;
    obj1.insert("senderLogin", myCurrentLogin);
    obj1.insert("receiverLogin", chatModel->data(chatModel->index(ui->chatList->currentIndex().row(),0)).
                                                                                                    toString());
    obj.insert("main", obj1);
    QJsonDocument doc;
    doc.setObject(obj);

    QMetaObject::invokeMethod(&objConnect, "translator", Qt::QueuedConnection, Q_ARG(QJsonDocument, doc));

    ui->userPushButton->show();
    ui->userPushButton->setText(chatModel->data(chatModel->index(ui->chatList->currentIndex().row(),0)).
                                toString());


    ui->messageTextEdit->setEnabled(true);

    timer->start(2000);
}

void Chat::slotSetMessages(QJsonDocument doc)
{
    ui->chatArea->clear();
    timer->start(2000);
    QJsonObject obj = doc.object().value("main").toObject();

    QJsonArray messageArray = obj.value("messageArray").toArray();
    QJsonArray timeDateArray = obj.value("timeDateArray").toArray();

    QJsonArray senderLoginArray = obj.value("senderLoginArray").toArray();
    QJsonArray receiverLoginArray = obj.value("receiverLoginArray").toArray();

    int arrayCount = obj.value("arrayCount").toInt();

    for (int i=0; i<arrayCount; i++)
    {
        if (senderLoginArray.at(i).toString()==myCurrentLogin)
        {
            ui->chatArea->setAlignment(Qt::AlignRight);
            ui->chatArea->append("<"+timeDateArray.at(i).toString()+"> Я:"+messageArray.at(i).toString()+"\n");

        }
        else if(receiverLoginArray.at(i).toString()==myCurrentLogin)
        {
            ui->chatArea->setAlignment(Qt::AlignLeft);
            ui->chatArea->append("<"+timeDateArray.at(i).toString()+"> "+
                                  senderLoginArray.at(i).toString()+":"+messageArray.at(i).toString()+"\n");

        }

    }
}

void Chat::clearChat()
{
    chatModel->clear();
    chatModel->insertColumn(0);
    ui->messageTextEdit->clear();
    ui->messageTextEdit->setEnabled(false);
    ui->chatArea->clear();
    ui->userPushButton->setText("");
    ui->userPushButton->hide();
}

void Chat::update()
{
    QJsonObject obj;
    obj.insert("type", setMessageHistory);
    QJsonObject obj1;
    obj1.insert("senderLogin", myCurrentLogin);
    obj1.insert("receiverLogin", chatModel->data(chatModel->index(ui->chatList->currentIndex().row(),0)).
                                                                                                    toString());
    obj.insert("main", obj1);
    QJsonDocument doc;
    doc.setObject(obj);

    QMetaObject::invokeMethod(&objConnect, "translator", Qt::QueuedConnection, Q_ARG(QJsonDocument, doc));

    ui->userPushButton->show();
    ui->userPushButton->setText(chatModel->data(chatModel->index(ui->chatList->currentIndex().row(),0)).
                                toString());
}



void Chat::on_userPushButton_clicked()
{
    if(myCurrentRole!="Client")
    {
        emit getAccountInformation(ui->userPushButton->text());
    }
}


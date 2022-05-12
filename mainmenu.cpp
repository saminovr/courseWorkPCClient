#include "mainmenu.h"
#include "ui_mainmenu.h"

MainMenu::MainMenu(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MainMenu)
{
    ui->setupUi(this);

    ui->stackedWidget->insertWidget(1, &objAutho);
    ui->stackedWidget->insertWidget(2, &objAd);
    ui->stackedWidget->insertWidget(3, &objChat);

    this->setStyleSheet("background-color: rgb(51, 51, 51);");
    ui->stackedWidget->setCurrentWidget(ui->entrancePage);

    ui->editNameLineEdit->setEnabled(false);
    ui->editSurnameLineEdit->setEnabled(false);

    ui->backToAccountPageButton->hide();
    ui->backToAdminAdPageButton->hide();
    ui->backToChatButton->hide();

    // валидатор на ввод только букв для имени и фамилии
    QRegularExpression rx("[A-ZА-Я]{1,1}[a-zа-я]{1,26}");
    QValidator *nameSurnameValidator = new QRegularExpressionValidator(rx, this);
    ui->editNameLineEdit->setValidator(nameSurnameValidator);
    ui->editSurnameLineEdit->setValidator(nameSurnameValidator);

    myAdsModel = new QStandardItemModel;
    myAdsModel->insertColumns(0,3);
    adminStackModel = new QStandardItemModel;
    allAdModel = new QStandardItemModel;
    adHistoryModel = new QStandardItemModel;
    adHistoryModel->insertColumns(0,3);
    allAdModel->insertColumns(0,3);
    adminStackModel->insertColumns(0,4);


    ui->adsListView->setModel(myAdsModel);  // my ads
    ui->historyAndStackListView->setModel(adminStackModel);  // Admins stack
    ui->historyListView->setModel(adHistoryModel);  // my ads history
    ui->allAdsListView->setModel(allAdModel);  // all ads

    ui->adsListView->setIconSize(QSize(120,120));
    ui->historyAndStackListView->setIconSize(QSize(120,120));
    ui->historyListView->setIconSize(QSize(120,120));
    ui->allAdsListView->setIconSize(QSize(120,120));

    connect(&objAutho, SIGNAL(goToMainMenuFromLog(QJsonDocument)), this, SLOT(slotGoToMainMenuFromLog(QJsonDocument)));
    connect(&objAutho, SIGNAL(goToMainMenuFromReg(QJsonDocument)), this, SLOT(slotGoToMainMenuFromReg(QJsonDocument)));
    connect(&objAutho, SIGNAL(quit()), this, SLOT(close()));

    connect(&objAd, SIGNAL(backToMainMenu()), this, SLOT(slotBackToMainMenuFromAddAd()));
    connect(&objAd, SIGNAL(goToMainMenu()), this, SLOT(slotGoToMainMenuFromAddAd()));

    // закрывает чат, если главное окно было закрыто
    connect (this, SIGNAL(mainMenuClosed()), &objChat, SLOT(close()));

    // сообщает о (не)добавлении объявления
    connect(&objConnect, SIGNAL(adIsLoaded(bool, QJsonDocument)), this, SLOT(slotAdIsLoaded(bool, QJsonDocument)));

    // детали объявления
    connect(&objConnect, SIGNAL(adInformation(QJsonDocument)), this, SLOT(slotAdInformation(QJsonDocument)));

    // одобрение/неодобрение админом
    connect(&objConnect, SIGNAL(adIsAccepted(bool, QJsonDocument)), this,
                         SLOT(slotAdIsAccepted(bool, QJsonDocument)));

    // инфа об аккаунте
    connect(&objConnect, SIGNAL(accountInformation(QJsonDocument)), this,
                         SLOT(slotAccountInformation(QJsonDocument)));

    // обновление инфы
    connect(&objConnect, SIGNAL(updateInformation(QJsonDocument)), this,
                         SLOT(slotUpdateInformation(QJsonDocument)));

    // добавление истории в личном кабинете
    connect(&objConnect, SIGNAL(historyInformation(QJsonDocument)), this,
                         SLOT(slotHistoryInformation(QJsonDocument)));

    // добавление списка заявок на одобрение
    connect(&objConnect, SIGNAL(stackInformation(QJsonDocument)), this,
                         SLOT(slotStackInformation(QJsonDocument)));

    // мои объявления
    connect(&objConnect, SIGNAL(myAdsInfo(QJsonDocument)), this, SLOT(slotMyAdsInfo(QJsonDocument)));

    // редактирование логина
    connect(&objConnect, SIGNAL(loginEdited(bool, QString)), this, SLOT(slotLoginEdited(bool, QString)));

    // выход из чата
    connect(&objChat, SIGNAL(backToMainMenuFromChat()), this, SLOT(slotBackToMainMenuFromChat()));

    connect(&objConnect, SIGNAL(chats(QJsonDocument)), this, SLOT(slotChats(QJsonDocument)));

    connect(&objChat, SIGNAL(getAccountInformation(QString)), this, SLOT(slotGetAccountInformation(QString)));



}

MainMenu::~MainMenu()
{
    delete ui;
}


// главное меню из входа
void MainMenu::slotGoToMainMenuFromLog(QJsonDocument doc)
{
    QJsonObject obj = doc.object().value("main").toObject();

    currentName = obj.value("name").toString();
    currentSurname = obj.value("surname").toString();
    currentLogin = obj.value("login").toString();
    currentRole = obj.value("role").toString();

    QByteArray encodedUserPhoto(QByteArray::fromBase64(obj.value("userPhoto").toVariant().toByteArray()));
    currentUserPix.loadFromData(encodedUserPhoto, "PNG", Qt::AutoColor);
    if (currentUserPix.isNull())
    {
        ui->setPhotoButton->setIcon(QIcon(":/addPhoto.png"));
    }
    else ui->setPhotoButton->setIcon(QIcon(currentUserPix));

    if (obj.value("role").toString()!="Administrator")
    {
        ui->adStackButton->hide();
    }
    else ui->adStackButton->show();

    ui->postLabel->setText(obj.value("role").toString());

    setAllAds(doc);

    ui->stackedWidget->setGeometry(70,0,730,600);
    this->setStyleSheet("background-color: rgb(0, 0, 44);");
    ui->stackedWidget->setCurrentWidget(ui->mainPage);
}


// из регистрации
void MainMenu::slotGoToMainMenuFromReg(QJsonDocument doc)
{
    QJsonObject obj = doc.object().value("main").toObject();

    currentName = obj.value("name").toString();
    currentSurname = obj.value("surname").toString();
    currentLogin = obj.value("login").toString();
    currentRole = obj.value("role").toString();

    if (obj.value("role").toString()!="Administrator")
    {
        ui->adStackButton->hide();
    }
    else ui->adStackButton->show();

    ui->postLabel->setText(obj.value("role").toString());

    ui->setPhotoButton->setIcon(QIcon(":/addPhoto.png"));   ///---- фотто --- ////

    setAllAds(doc);

    ui->stackedWidget->setGeometry(70,0,730,600);
    this->setStyleSheet("background-color: rgb(0, 0, 44);");
    ui->stackedWidget->setCurrentWidget(ui->mainPage);
}


void MainMenu::setCurrentData(QString login, QString name, QString surname, QString role, QPixmap userPix)  //---NORM---////
{
    if (userPix.isNull())
    {
        ui->setPhotoButton->setIcon(QIcon(":/addPhoto.png"));
    }
    else ui->setPhotoButton->setIcon(QIcon(userPix));

    ui->postLabel->setText(role);


    ui->loginLabel->setText(login);
    ui->editNameLineEdit->setText(name);
    ui->editSurnameLineEdit->setText(surname);
    ui->postLabelRight->setText(currentRole);
}

void MainMenu::editNames()    ////----NOT NORM---////
{
    QJsonObject obj;
    obj.insert("type", updateUserName);
    QJsonObject obj1;
    obj1.insert("login", currentLogin);
    obj1.insert("editedName", getEditedName());
    obj1.insert("editedSurname", getEditedSurname());
    obj.insert("main", obj1);
    QJsonDocument doc;
    doc.setObject(obj);

    QMetaObject::invokeMethod(&objConnect, "translator", Qt::QueuedConnection, Q_ARG(QJsonDocument, doc));

    currentName = getEditedName();
    currentSurname = getEditedSurname();

}

void MainMenu::on_saveChangesButton_clicked()  ////---NORM---////
{
    if ((!ui->editNameLineEdit->text().isEmpty())&&(!ui->editSurnameLineEdit->text().isEmpty()))
    {
        ui->editNameLineEdit->setEnabled(false);
        ui->editSurnameLineEdit->setEnabled(false);
        editNames();
    }
    else QMessageBox::warning(0, "Edit name", "Поля не должны быть пустыми");
}



void MainMenu::on_editLoginButton_clicked()
{
    LoginEdit* edit = new LoginEdit;
    if (edit->exec()==LoginEdit::Accepted)
    {
        QJsonObject obj;
        obj.insert("type", editLogin);
        QJsonObject obj1;
        obj1.insert("login", currentLogin);
        obj1.insert("editedLogin", edit->getEditedLogin());
        obj.insert("main", obj1);
        QJsonDocument doc;
        doc.setObject(obj);

        QMetaObject::invokeMethod(&objConnect, "translator", Qt::QueuedConnection, Q_ARG(QJsonDocument, doc));
    }
}



void MainMenu::on_deleteAccountButton_clicked()  ////----NOT NORM---////
{
    switch (currentTypeId)
    {
    case fromAdminAdPage:
    {
        QMessageBox box;
        box.setText("Вы действительно хотите заблокировать этот профиль?");
        box.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
        box.exec();
        if (box.result()==QMessageBox::Yes)
        {
            QJsonObject obj;
            obj.insert("type", blockAccount);
            QJsonObject obj1;
            obj1.insert("login", ui->loginLabel->text());
            obj.insert("main", obj1);
            QJsonDocument doc;
            doc.setObject(obj);

            QMetaObject::invokeMethod(&objConnect, "translator", Qt::QueuedConnection, Q_ARG(QJsonDocument, doc));
            this->setStyleSheet("background-color: rgb(24, 8, 0);");
            ui->stackedWidget->setCurrentWidget(ui->stackPage);
        }
        break;
    }
    case fromOther:
    {
        QMessageBox box;
        box.setText("Вы действительно хотите удалить профиль?");
        box.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
        box.exec();
        if (box.result()==QMessageBox::Yes)
        {
            QJsonObject obj;
            obj.insert("type", deleteUser);
            QJsonObject obj1;
            obj1.insert("login", currentLogin);
            obj.insert("main", obj1);
            QJsonDocument doc;
            doc.setObject(obj);

            QMetaObject::invokeMethod(&objConnect, "translator", Qt::QueuedConnection, Q_ARG(QJsonDocument, doc));

            myAdsModel->clear();
            myAdsModel->insertColumns(0,3);

            adminStackModel->clear();
            adminStackModel->insertColumns(0,4);

            adHistoryModel->clear();
            adHistoryModel->insertColumns(0,3);

            allAdModel->clear();
            allAdModel->insertColumns(0,3);

            ui->stackedWidget->setCurrentIndex(1);
        }
        break;
    }

    }
}


void MainMenu::on_editPasswordButton_clicked()   ////----NOT NORM---////
{
    PasswordEdit* edit = new PasswordEdit;
    if (edit->exec()==QDialog::Accepted)
    {
        QJsonObject obj;
        obj.insert("type", editPassword);
        QJsonObject obj1;
        obj1.insert("login", currentLogin);
        obj1.insert("editedPassword", edit->getEditedPassword());
        obj.insert("main", obj1);
        QJsonDocument doc;
        doc.setObject(obj);

        QMetaObject::invokeMethod(&objConnect, "translator", Qt::QueuedConnection, Q_ARG(QJsonDocument, doc));
    }
    QMessageBox::information(0, "Password editer", "Пароль успешно изменен");
}


void MainMenu::on_setPhotoButton_clicked()
{
    QString file = QFileDialog::getOpenFileName(this, "Выберите файл", "C://", "Изображения (*.png *.jpg)");
    QPixmap pix(file);
    if (!pix.isNull())
    {
        ui->setPhotoButton->setIcon(QIcon(pix));
        currentUserPix = pix;
    }


    QByteArray arr;
    QBuffer buffer(&arr);
    buffer.open(QIODevice::WriteOnly);
    pix.save(&buffer, "PNG");
    QVariant var = arr.toBase64();

    QJsonObject obj;
    obj.insert("type", SetUserPhoto);
    QJsonObject obj1;
    obj1.insert("userPhoto", var.toString());
    obj1.insert("login", currentLogin);
    obj.insert("main", obj1);
    QJsonDocument doc;
    doc.setObject(obj);

    QMetaObject::invokeMethod(&objConnect, "translator", Qt::QueuedConnection, Q_ARG(QJsonDocument, doc));

}


void MainMenu::slotGoToMainMenuFromAddAd()
{
    QPixmap rightPhoto(objAd.adModel->data(objAd.adModel->index(objAd.adModel->rowCount()-1,12)).toString());
    QPixmap leftPhoto(objAd.adModel->data(objAd.adModel->index(objAd.adModel->rowCount()-1,13)).toString());
    QPixmap behindPhoto(objAd.adModel->data(objAd.adModel->index(objAd.adModel->rowCount()-1,14)).toString());
    QPixmap frontPhoto(objAd.adModel->data(objAd.adModel->index(objAd.adModel->rowCount()-1,15)).toString());
    QPixmap bonnetPhoto(objAd.adModel->data(objAd.adModel->index(objAd.adModel->rowCount()-1,16)).toString());
    QPixmap trunkPhoto(objAd.adModel->data(objAd.adModel->index(objAd.adModel->rowCount()-1,17)).toString());

    QByteArray rightPhotoByteArray;
    QByteArray leftPhotoByteArray;
    QByteArray behindPhotoByteArray;  // RAW BYTES
    QByteArray frontPhotoByteArray;
    QByteArray bonnetPhotoByteArray;
    QByteArray trunkPhotoByteArray;

    QBuffer rightPhotoBuffer(&rightPhotoByteArray);
    QBuffer leftPhotoBuffer(&leftPhotoByteArray);
    QBuffer behindPhotoBuffer(&behindPhotoByteArray);
    QBuffer frontPhotoBuffer(&frontPhotoByteArray);
    QBuffer bonnetPhotoBuffer(&bonnetPhotoByteArray);
    QBuffer trunkPhotoBuffer(&trunkPhotoByteArray);

    rightPhotoBuffer.open(QIODevice::WriteOnly);
    leftPhotoBuffer.open(QIODevice::WriteOnly);
    behindPhotoBuffer.open(QIODevice::WriteOnly);
    frontPhotoBuffer.open(QIODevice::WriteOnly);
    bonnetPhotoBuffer.open(QIODevice::WriteOnly);
    trunkPhotoBuffer.open(QIODevice::WriteOnly);

    rightPhoto.save(&rightPhotoBuffer, "PNG");
    leftPhoto.save(&leftPhotoBuffer, "PNG");
    behindPhoto.save(&behindPhotoBuffer, "PNG");
    frontPhoto.save(&frontPhotoBuffer, "PNG");
    bonnetPhoto.save(&bonnetPhotoBuffer, "PNG");
    trunkPhoto.save(&trunkPhotoBuffer, "PNG");

    QVariant rightPhotoVariant = rightPhotoByteArray.toBase64();
    QVariant leftPhotoVariant = leftPhotoByteArray.toBase64();
    QVariant behindPhotoVariant = behindPhotoByteArray.toBase64();
    QVariant frontPhotoVariant = frontPhotoByteArray.toBase64();        // STRING SIMILAR BYTES
    QVariant bonnetPhotoVariant = bonnetPhotoByteArray.toBase64();      // QSTRING == QVARIANT
    QVariant trunkPhotoVariant = trunkPhotoByteArray.toBase64();


    QJsonObject obj;
    obj.insert("type", addingAnAd);
    QJsonObject obj1;
    obj1.insert("login", currentLogin);
    obj1.insert("mark", objAd.adModel->data(objAd.adModel->index(objAd.adModel->rowCount()-1,0)).toString());
    obj1.insert("model", objAd.adModel->data(objAd.adModel->index(objAd.adModel->rowCount()-1,1)).toString());
    obj1.insert("prodYear", objAd.adModel->data(objAd.adModel->index(objAd.adModel->rowCount()-1,2)).toString());
    obj1.insert("bodyType", objAd.adModel->data(objAd.adModel->index(objAd.adModel->rowCount()-1,3)).toString());
    obj1.insert("engineType", objAd.adModel->data(objAd.adModel->index(objAd.adModel->rowCount()-1,4)).toString());
    obj1.insert("driveType", objAd.adModel->data(objAd.adModel->index(objAd.adModel->rowCount()-1,5)).toString());
    obj1.insert("transmissionType", objAd.adModel->data(objAd.adModel->index(objAd.adModel->rowCount()-1,6)).toString());
    obj1.insert("power", objAd.adModel->data(objAd.adModel->index(objAd.adModel->rowCount()-1,7)).toString());
    obj1.insert("color", objAd.adModel->data(objAd.adModel->index(objAd.adModel->rowCount()-1,8)).toString());
    obj1.insert("mileage", objAd.adModel->data(objAd.adModel->index(objAd.adModel->rowCount()-1,9)).toString());
    obj1.insert("buyingYear", objAd.adModel->data(objAd.adModel->index(objAd.adModel->rowCount()-1,10)).toString());
    obj1.insert("description", objAd.adModel->data(objAd.adModel->index(objAd.adModel->rowCount()-1,11)).toString());
    obj1.insert("rightPhoto", rightPhotoVariant.toString());
    obj1.insert("leftPhoto", leftPhotoVariant.toString());
    obj1.insert("behindPhoto", behindPhotoVariant.toString());
    obj1.insert("frontPhoto", frontPhotoVariant.toString());
    obj1.insert("bonnetPhoto", bonnetPhotoVariant.toString());
    obj1.insert("trunkPhoto", trunkPhotoVariant.toString());
    if (ui->postLabel->text()=="Administrator")
        obj1.insert("status", "Принято");
    else obj1.insert("status", "В обработке");


    obj.insert("main", obj1);
    QJsonDocument doc;
    doc.setObject(obj);

    QMetaObject::invokeMethod(&objConnect, "translator", Qt::QueuedConnection, Q_ARG(QJsonDocument, doc));

    ui->stackedWidget->setGeometry(70,0,730,600);
    this->setStyleSheet("background-color: rgb(36, 0, 0);");
    ui->stackedWidget->setCurrentWidget(ui->myAdsPage);
}




void MainMenu::closeEvent(QCloseEvent *event)
{
    emit mainMenuClosed();
    event->accept();
}

void MainMenu::on_logOutButton_clicked()
{
    myAdsModel->clear();
    ui->postLabel->clear();
    myAdsModel->insertColumns(0,3);

    adminStackModel->clear();
    adminStackModel->insertColumns(0,4);

    adHistoryModel->clear();
    adHistoryModel->insertColumns(0,3);

    allAdModel->clear();
    allAdModel->insertColumns(0,3);
    ui->stackedWidget->setCurrentIndex(1);

    QMetaObject::invokeMethod(&objChat, "clearChat", Qt::QueuedConnection);

    ui->stackedWidget->setGeometry(0,0,800,600);


}


void MainMenu::on_adsListView_clicked()
{
    QJsonObject obj;
    obj.insert("type", adInfo);
    obj.insert("typeId", fromAdsListView);
    QJsonObject obj1;
    obj1.insert("applicationId", myAdsModel->data(myAdsModel->index
                                                  (ui->adsListView->currentIndex().row(), 1)).toInt());
    obj.insert("main", obj1);
    QJsonDocument doc;
    doc.setObject(obj);

    QMetaObject::invokeMethod(&objConnect, "translator", Qt::QueuedConnection, Q_ARG(QJsonDocument, doc));

    ui->accountButtonn->hide();
    ui->acceptButtonn->hide();
    ui->statusLabell->show();
    ui->deleteAdButtonn->setText("Удалить объявление");
    ui->deleteAdButtonn->show();
}


void MainMenu::on_backButton_2_clicked()
{
    switch (currentTypeId)
    {
    case fromAllAdsListView:
    {
        this->setStyleSheet("background-color: rgb(0, 0, 44);");
        ui->stackedWidget->setCurrentWidget(ui->mainPage);
        break;
    }
    case fromAdsListView:
    {
        this->setStyleSheet("background-color: rgb(36, 0, 0);");
        ui->stackedWidget->setCurrentWidget(ui->myAdsPage);
        break;
    }
    case fromHistoryAndStackListView:
    {
        this->setStyleSheet("background-color: rgb(24, 8, 0);");
        ui->stackedWidget->setCurrentWidget(ui->stackPage);
        break;
    }
    case fromHistoryListView:
    {
        this->setStyleSheet("background-color: rgb(28, 0, 42);");
        ui->stackedWidget->setCurrentWidget(ui->adHistoryPage);
        break;
    }
    }

}

void MainMenu::setCurrentAdData(QJsonDocument doc)
{
    currentTypeId = doc.object().value("typeId").toInt();

    QJsonObject object = doc.object().value("main").toObject();
    ui->headingLabel->setText(object.value("mark").toString() + " " + object.value("model").toString()
                              + " " + object.value("prodYear").toString());
    ui->bodyTypeLabell->setText(object.value("bodyType").toString());
    ui->engineLabell->setText(object.value("engineType").toString());
    ui->driveLabell->setText(object.value("driveType").toString());
    ui->transmissionLabell->setText(object.value("transmissionType").toString());
    ui->powerLabell->setText(object.value("power").toString());
    ui->colorLabell->setText(object.value("color").toString());
    ui->buyingYearLabell->setText(object.value("buyingYear").toString());
    ui->mileageLabell->setText(object.value("mileage").toString());
    ui->descriptionTextEditt->setText(object.value("description").toString());

    QByteArray encodedRightPhoto(QByteArray::fromBase64(object.value("rightPhoto").toVariant().toByteArray()));
    QByteArray encodedLeftPhoto(QByteArray::fromBase64(object.value("leftPhoto").toVariant().toByteArray()));
    QByteArray encodedBehindPhoto(QByteArray::fromBase64(object.value("behindPhoto").toVariant().toByteArray()));
    QByteArray encodedFrontPhoto(QByteArray::fromBase64(object.value("frontPhoto").toVariant().toByteArray()));
    QByteArray encodedBonnetPhoto(QByteArray::fromBase64(object.value("bonnetPhoto").toVariant().toByteArray()));
    QByteArray encodedTrunkPhoto(QByteArray::fromBase64(object.value("trunkPhoto").toVariant().toByteArray()));

    QPixmap rightPhotoPix;
    rightPhotoPix.loadFromData(encodedRightPhoto, "PNG", Qt::AutoColor);
    QPixmap leftPhotoPix;
    leftPhotoPix.loadFromData(encodedLeftPhoto, "PNG", Qt::AutoColor);
    QPixmap behindPhotoPix;
    behindPhotoPix.loadFromData(encodedBehindPhoto, "PNG", Qt::AutoColor);
    QPixmap frontPhotoPix;
    frontPhotoPix.loadFromData(encodedFrontPhoto, "PNG", Qt::AutoColor);
    QPixmap bonnetPhotoPix;
    bonnetPhotoPix.loadFromData(encodedBonnetPhoto, "PNG", Qt::AutoColor);
    QPixmap trunkPhotoPix;
    trunkPhotoPix.loadFromData(encodedTrunkPhoto, "PNG", Qt::AutoColor);

    if (rightPhotoPix.isNull())
        rightPhotoPix.load("://appIcon.jpg");

    if (leftPhotoPix.isNull())
        leftPhotoPix.load("://appIcon.jpg");

    if (behindPhotoPix.isNull())
        behindPhotoPix.load("://appIcon.jpg");

    if (frontPhotoPix.isNull())
        frontPhotoPix.load("://appIcon.jpg");

    if (bonnetPhotoPix.isNull())
        bonnetPhotoPix.load("://appIcon.jpg");

    if (trunkPhotoPix.isNull())
        trunkPhotoPix.load("://appIcon.jpg");

    ui->frontImageButtonn->setIcon(QIcon(frontPhotoPix));
    ui->behindImageButtonn->setIcon(QIcon(behindPhotoPix));
    ui->rightImageButtonn->setIcon(QIcon(rightPhotoPix));
    ui->leftImageButtonn->setIcon(QIcon(leftPhotoPix));
    ui->trunkImageButtonn->setIcon(QIcon(trunkPhotoPix));
    ui->bonnetImageButtonn->setIcon(QIcon(bonnetPhotoPix));

    ui->statusLabell->setText(object.value("status").toString());
    ui->accountButtonn->setText(object.value("name").toString()+"\n"+object.value("surname").toString());

    this->setStyleSheet("background-color: rgb(51,51,51);");
    ui->stackedWidget->setCurrentWidget(ui->adPage);
}


void MainMenu::on_deleteAdButtonn_clicked()
{
    switch(currentTypeId)
    {
    case fromHistoryAndStackListView:
    {
        int applicationId = adminStackModel->data(adminStackModel->index
                                                  (ui->historyAndStackListView->currentIndex().row(),1)).toInt();
        QJsonObject obj;
        obj.insert("type", adAccepted);
        QJsonObject obj1;
        obj1.insert("adIsAccepted", false);
        obj1.insert("applicationId", applicationId);
        obj.insert("main", obj1);
        QJsonDocument doc;
        doc.setObject(obj);

        QMetaObject::invokeMethod(&objConnect, "translator", Qt::QueuedConnection, Q_ARG(QJsonDocument, doc));

        adminStackModel->removeRow(ui->historyAndStackListView->currentIndex().row());
    }
    case fromAdsListView:
    {
        QMessageBox box;
        box.setText("Вы действительно хотите удалить объявление?");
        box.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
        box.exec();
        if (box.result()==QMessageBox::Yes)
        {
            int applicationId = myAdsModel->data(myAdsModel->index
                                                 (ui->adsListView->currentIndex().row(),1)).toInt();
            QJsonObject obj;
            obj.insert("type", deleteAd);
            QJsonObject obj1;
            obj1.insert("applicationId", applicationId);
            obj.insert("main", obj1);
            QJsonDocument doc;
            doc.setObject(obj);

            QMetaObject::invokeMethod(&objConnect, "translator", Qt::QueuedConnection, Q_ARG(QJsonDocument, doc));

            myAdsModel->removeRow(ui->adsListView->currentIndex().row());
            this->setStyleSheet("background-color: rgb(36, 0, 0);");
            ui->stackedWidget->setCurrentWidget(ui->myAdsPage);
        }
    }
    }
}


void MainMenu::on_historyAndStackListView_clicked()
{
    QJsonObject obj;
    obj.insert("type", adInfo);
    obj.insert("typeId", fromHistoryAndStackListView);
    QJsonObject obj1;
    obj1.insert("applicationId", adminStackModel->data(adminStackModel->index
                                             (ui->historyAndStackListView->currentIndex().row(), 1)).toInt());
    obj.insert("main", obj1);
    QJsonDocument doc;
    doc.setObject(obj);

    QMetaObject::invokeMethod(&objConnect, "translator", Qt::QueuedConnection, Q_ARG(QJsonDocument, doc));

    ui->accountButtonn->show();
    ui->statusLabell->hide();
    ui->acceptButtonn->setText("Принять");
    ui->acceptButtonn->show();
    ui->deleteAdButtonn->setText("Отклонить");
    ui->deleteAdButtonn->show();
}


void MainMenu::on_acceptButtonn_clicked()
{
    switch(currentTypeId)
    {
    case fromHistoryAndStackListView:
    {
        int applicationId = adminStackModel->data(adminStackModel->index
                                                  (ui->historyAndStackListView->currentIndex().row(),1)).toInt();

        QJsonObject obj;
        obj.insert("type", adAccepted);
        QJsonObject obj1;
        obj1.insert("applicationId", applicationId);
        obj1.insert("adIsAccepted", true);
        obj.insert("main", obj1);
        QJsonDocument doc;
        doc.setObject(obj);

        QMetaObject::invokeMethod(&objConnect, "translator", Qt::QueuedConnection, Q_ARG(QJsonDocument, doc));
        break;

    }
    case fromAllAdsListView:
    {
        objChat.myCurrentLogin = currentLogin;

        ui->stackedWidget->setGeometry(0,0,800,600);


        QJsonObject obj;
        obj.insert("type", messageHistory);
        obj.insert("typeId", fromAllAdsListView);
        QJsonObject obj1;
        obj1.insert("login", currentLogin);
        obj1.insert("role", currentRole);
        obj.insert("main", obj1);
        QJsonDocument doc;
        doc.setObject(obj);

        QMetaObject::invokeMethod(&objConnect, "translator", Qt::QueuedConnection, Q_ARG(QJsonDocument, doc));
        ui->stackedWidget->setCurrentIndex(3);
        break;
    }
    }

}


void MainMenu::on_accountButtonn_clicked()
{
    ui->deletePhotoButton->hide();
    ui->editNameButton->hide();
    ui->editNameLineEdit->hide();
    ui->editSurnameLineEdit->hide();
    ui->editSurnameButton->hide();
    ui->saveChangesButton->hide();
    ui->editLoginButton->hide();
    ui->editPasswordButton->hide();
    ui->logOutButton->hide();
    ui->statusLabel->hide();
    ui->setPhotoButton->hide();
    ui->deleteAccountButton->setText("Заблокировать аккаунт");


    ui->setPhotoButton_3->show();
    ui->label_25->show();
    ui->label_26->show();
    ui->nameLabel->show();
    ui->surnameLabel->show();
    ui->goToAdHistoryButton->show();


    int applicationId = adminStackModel->data(adminStackModel->index
                                              (ui->historyAndStackListView->currentIndex().row(),1)).toInt();

    QJsonObject obj;
    obj.insert("type", accountInfo);
    obj.insert("typeId", fromAdminAdPage);
    QJsonObject obj1;
    obj1.insert("applicationId", applicationId);
    obj.insert("main", obj1);
    QJsonDocument doc;
    doc.setObject(obj);

    QMetaObject::invokeMethod(&objConnect, "translator", Qt::QueuedConnection, Q_ARG(QJsonDocument, doc));

}


void MainMenu::on_allAdsListView_clicked()
{
    int applicationId = allAdModel->data(allAdModel->index
                                              (ui->allAdsListView->currentIndex().row(),1)).toInt();
    QJsonObject obj;
    obj.insert("type", adInfo);
    obj.insert("typeId", fromAllAdsListView);
    QJsonObject obj1;
    obj1.insert("applicationId", applicationId);
    obj.insert("main", obj1);
    QJsonDocument doc;
    doc.setObject(obj);

    QMetaObject::invokeMethod(&objConnect, "translator", Qt::QueuedConnection, Q_ARG(QJsonDocument, doc));

    ui->acceptButtonn->setText("Связаться с продавцом");
    if (allAdModel->data(allAdModel->index(ui->allAdsListView->currentIndex().row(),2)).toString()==currentLogin)
        ui->acceptButtonn->hide();
    else ui->acceptButtonn->show();

    ui->statusLabell->hide();
    ui->accountButtonn->hide();
    ui->deleteAdButtonn->hide();
}

void MainMenu::slotAdIsLoaded(bool answer, QJsonDocument doc)
{
    if (answer)
    {
        QMessageBox::information(0, "Loading an ad", "Ваше объявление успешно загружено.\n"
                                                     "Дождитесь пока администратор проверит его. "
                                                     "Тогда оно появится в разделе \"Все объявления\"");

        QJsonObject obj = doc.object().value("main").toObject();

        QString heading = obj.value("mark").toString() + " " + obj.value("model").toString()
                          + " " + obj.value("prodYear").toString();



        int applicationId = obj.value("applicationId").toInt();

        QVariant tempVar = obj.value("frontPhoto").toVariant();
        QByteArray codedBytes = tempVar.toByteArray();
        QByteArray encodedBytes(QByteArray::fromBase64(codedBytes));
        QPixmap iconPix;
        iconPix.loadFromData(encodedBytes, "PNG", Qt::AutoColor);

        if (iconPix.isNull())
        {
            iconPix.load("://appIcon.jpg");
        }

        myAdsModel->insertRow(myAdsModel->rowCount());
        myAdsModel->setData(myAdsModel->index(myAdsModel->rowCount()-1,0), heading);
        myAdsModel->setData(myAdsModel->index(myAdsModel->rowCount()-1,1), applicationId);
        myAdsModel->setData(myAdsModel->index(myAdsModel->rowCount()-1,0), QIcon(iconPix), Qt::DecorationRole);

    }
    else QMessageBox::warning(0, "Loading an ad", "Ваше объявление не загружено. Попробуйте снова");
}

void MainMenu::slotAdInformation(QJsonDocument doc)
{   
    setCurrentAdData(doc);
}

void MainMenu::slotAdIsAccepted(bool isAccepted, QJsonDocument doc)
{
    if (isAccepted)
    {
        QJsonObject obj = doc.object().value("main").toObject();

        QString heading = obj.value("mark").toString() + " " + obj.value("model").toString()
                          + " " + obj.value("prodYear").toString();

        int applicationId = obj.value("applicationId").toInt();

        QByteArray encodedBytes(QByteArray::fromBase64(obj.value("frontPhoto").toVariant().toByteArray()));
        QPixmap iconPix;
        iconPix.loadFromData(encodedBytes, "PNG", Qt::AutoColor);

        if (iconPix.isNull())
        {
            iconPix.load("://appIcon.jpg");
        }

        allAdModel->insertRow(allAdModel->rowCount());
        allAdModel->setData(allAdModel->index(allAdModel->rowCount()-1,0), heading);
        allAdModel->setData(allAdModel->index(allAdModel->rowCount()-1,1), applicationId);
        allAdModel->setData(allAdModel->index(allAdModel->rowCount()-1,0), QIcon(iconPix), Qt::DecorationRole);
    }
    adminStackModel->removeRow(ui->historyAndStackListView->currentIndex().row());
    this->setStyleSheet("background-color: rgb(0, 18, 0);");
    ui->stackedWidget->setCurrentWidget(ui->stackPage);

}

void MainMenu::slotAccountInformation(QJsonDocument doc)
{
    QJsonObject obj = doc.object().value("main").toObject();

    if (doc.object().value("typeId").toInt()==fromAdminAdPage)
    {
        ui->backToAdminAdPageButton->show();
    }
    else ui->backToAdminAdPageButton->hide();

    if(doc.object().value("typeId").toInt()==fromChat)
    {
        ui->backToChatButton->show();
    }
    else ui->backToChatButton->hide();

    QString name = obj.value("name").toString();
    QString surname = obj.value("surname").toString();
    QString role = obj.value("role").toString();
    QString login = obj.value("login").toString();

    bool isNotBlocked = obj.value("isBlocked").toBool();

    QByteArray encodedUserPhoto(QByteArray::fromBase64(obj.value("userPhoto").toVariant().toByteArray()));
    QPixmap avatarPix;
    avatarPix.loadFromData(encodedUserPhoto, "PNG", Qt::AutoColor);

    if (avatarPix.isNull())
    {
        ui->setPhotoButton_3->setIcon(QIcon(":/acciuntIcon.png"));
    }
    else ui->setPhotoButton_3->setIcon(QIcon(avatarPix));

    ui->postLabelRight->setText(role);
    ui->loginLabel->setText(login);
    ui->nameLabel->setText(name);
    ui->surnameLabel->setText(surname);
    if (!isNotBlocked)
    {
        ui->statusLabel->show();
    }

    this->setStyleSheet("background-color: rgb(0, 18, 0);");
    ui->stackedWidget->setCurrentWidget(ui->accountPage);
}

void MainMenu::slotUpdateInformation(QJsonDocument doc)
{
    if (doc.object().value("isOnlyAll").toBool())
    {
        allAdModel->clear();
        allAdModel->insertColumns(0,3);
        setAllAds(doc);
    }
    else
    {
        adminStackModel->clear();
        adminStackModel->insertColumns(0,4);
        slotStackInformation(doc);
        allAdModel->clear();
        allAdModel->insertColumns(0,3);
        setAllAds(doc);
    }

}

void MainMenu::slotHistoryInformation(QJsonDocument doc)
{
    QJsonObject obj = doc.object().value("history").toObject();

    if (doc.object().value("typeId").toInt()==fromAccountPage)
    {
        ui->backToAccountPageButton->show();
    }
    else ui->backToAccountPageButton->hide();

    int historyArrayCount = obj.value("historyArrayCount").toInt();

    QJsonArray historyMarkArray = obj.value("historyMarkArray").toArray();
    QJsonArray historyModelArray = obj.value("historyModelArray").toArray();
    QJsonArray historyProdYearArray = obj.value("historyProdYearArray").toArray();
    QJsonArray historyFrontPhotoArray = obj.value("historyFrontPhotoArray").toArray();
    QJsonArray historyApplicationIdArray = obj.value("historyApplicationIdArray").toArray();

    for (int i=0; i<historyArrayCount; i++)
    {
        QByteArray encodedHistoryFrontPhoto(QByteArray::fromBase64(historyFrontPhotoArray.at(i).
                                                                 toVariant().toByteArray()));
        QPixmap historyFrontPhotoPix;
        historyFrontPhotoPix.loadFromData(encodedHistoryFrontPhoto, "PNG", Qt::AutoColor);

        if (historyFrontPhotoPix.isNull())
        {
            historyFrontPhotoPix.load("://appIcon.jpg");
        }

        QString heading = historyMarkArray.at(i).toString() + " " + historyModelArray.at(i).toString() +
                " " + historyProdYearArray.at(i).toString();

        adHistoryModel->insertRow(adHistoryModel->rowCount());
        adHistoryModel->setData(adHistoryModel->index(adHistoryModel->rowCount()-1,0), heading);
        adHistoryModel->setData(adHistoryModel->index(adHistoryModel->rowCount()-1,1),
                                                        historyApplicationIdArray.at(i).toInt());

        adHistoryModel->setData(adHistoryModel->index(adHistoryModel->rowCount()-1,0),
                                                        QIcon(historyFrontPhotoPix), Qt::DecorationRole);

    }
    this->setStyleSheet("background-color: rgb(28, 0, 42);");
    ui->stackedWidget->setCurrentWidget(ui->adHistoryPage);
}

void MainMenu::slotStackInformation(QJsonDocument doc)
{
    QJsonObject objStack = doc.object().value("stack").toObject();

    int stackArrayCount = objStack.value("stackArrayCount").toInt();

    QJsonArray stackFrontPhotoArray = objStack.value("stackFrontPhotoArray").toArray();
    QJsonArray stackMarkArray = objStack.value("stackMarkArray").toArray();
    QJsonArray stackModelArray = objStack.value("stackModelArray").toArray();
    QJsonArray stackProdYearArray = objStack.value("stackProdYearArray").toArray();
    QJsonArray stackApplicationIdArray = objStack.value("stackApplicationIdArray").toArray();
    QJsonArray stackUserLogin = objStack.value("stackUserLogin").toArray();

    for (int i=0; i<stackArrayCount; i++)
    {
        QByteArray encodedStackFrontPhoto(QByteArray::fromBase64(stackFrontPhotoArray.at(i).
                                                                 toVariant().toByteArray()));
        QPixmap stackFrontPhotoPix;
        stackFrontPhotoPix.loadFromData(encodedStackFrontPhoto, "PNG", Qt::AutoColor);

        if (stackFrontPhotoPix.isNull())
        {
            stackFrontPhotoPix.load("://appIcon.jpg");
        }

        QString heading = stackMarkArray.at(i).toString() + " " + stackModelArray.at(i).toString() +
                " " + stackProdYearArray.at(i).toString();


        adminStackModel->insertRow(adminStackModel->rowCount());
        adminStackModel->setData(adminStackModel->index(adminStackModel->rowCount()-1,0), heading);
        adminStackModel->setData(adminStackModel->index(adminStackModel->rowCount()-1,1),
                                                        stackApplicationIdArray.at(i).toInt());

        adminStackModel->setData(adminStackModel->index(adminStackModel->rowCount()-1,2),
                                                        stackUserLogin.at(i).toString());

        adminStackModel->setData(adminStackModel->index(adminStackModel->rowCount()-1,0),
                                                        QIcon(stackFrontPhotoPix), Qt::DecorationRole);
    }
    this->setStyleSheet("background-color: rgb(24, 8, 0);");
    ui->stackedWidget->setCurrentWidget(ui->stackPage);
}

void MainMenu::setAllAds(QJsonDocument doc)
{
    QJsonObject allObj = doc.object().value("all").toObject();

    QJsonArray allFrontPhotoArray = allObj.value("allFrontPhotoArray").toArray();
    QJsonArray allMarkArray = allObj.value("allMarkArray").toArray();
    QJsonArray allModelArray = allObj.value("allModelArray").toArray();
    QJsonArray allProdYearArray = allObj.value("allProdYearArray").toArray();
    QJsonArray allApplicationIdArray = allObj.value("allApplicationIdArray").toArray();
    QJsonArray allUserLogin = allObj.value("allUserLogin").toArray();

    int allArrayCount = allObj.value("allArrayCount").toInt();

    for (int i=0; i<allArrayCount; i++)
    {
        QByteArray encodedAllFrontPhoto(QByteArray::fromBase64(allFrontPhotoArray.at(i).
                                                                 toVariant().toByteArray()));
        QPixmap allFrontPhotoPix;
        allFrontPhotoPix.loadFromData(encodedAllFrontPhoto, "PNG", Qt::AutoColor);

        if (allFrontPhotoPix.isNull())
        {
            allFrontPhotoPix.load("://appIcon.jpg");
        }

        QString heading = allMarkArray.at(i).toString() + " " + allModelArray.at(i).toString() +
                " " + allProdYearArray.at(i).toString();

        allAdModel->insertRow(allAdModel->rowCount());
        allAdModel->setData(allAdModel->index(allAdModel->rowCount()-1,0), heading);
        allAdModel->setData(allAdModel->index(allAdModel->rowCount()-1,1),
                                                        allApplicationIdArray.at(i).toInt());

        allAdModel->setData(allAdModel->index(allAdModel->rowCount()-1,2),
                                                        allUserLogin.at(i).toString());

        allAdModel->setData(allAdModel->index(allAdModel->rowCount()-1,0),
                                                        QIcon(allFrontPhotoPix), Qt::DecorationRole);

    }
}

void MainMenu::setMyAds(QJsonDocument doc)
{
    QJsonObject obj = doc.object().value("main").toObject();

    int arrayCount = obj.value("arrayCount").toInt();

    QJsonArray frontPhotoArray = obj.value("frontPhotoArray").toArray();
    QJsonArray markArray = obj.value("markArray").toArray();
    QJsonArray modelArray = obj.value("modelArray").toArray();
    QJsonArray prodYearArray = obj.value("prodYearArray").toArray();
    QJsonArray applicationIdArray = obj.value("applicationIdArray").toArray();

    for (int i=0; i<arrayCount; i++)
    {
        QByteArray encodedFrontPhoto(QByteArray::fromBase64(frontPhotoArray.at(i).toVariant().toByteArray()));
        QPixmap frontPhotoPix;
        frontPhotoPix.loadFromData(encodedFrontPhoto, "PNG", Qt::AutoColor);

        if (frontPhotoPix.isNull())
        {
            frontPhotoPix.load("://appIcon.jpg");
        }

        QString heading = markArray.at(i).toString() + " " + modelArray.at(i).toString() +
                " " + prodYearArray.at(i).toString();

        myAdsModel->insertRow(myAdsModel->rowCount());
        myAdsModel->setData(myAdsModel->index(myAdsModel->rowCount()-1,0), heading);
        myAdsModel->setData(myAdsModel->index(myAdsModel->rowCount()-1,1), applicationIdArray.at(i).toInt());
        myAdsModel->setData(myAdsModel->index(myAdsModel->rowCount()-1,0), QIcon(frontPhotoPix), Qt::DecorationRole);

    }

    this->setStyleSheet("background-color: rgb(36, 0, 0);");
    ui->stackedWidget->setCurrentWidget(ui->myAdsPage);
}

void MainMenu::on_deletePhotoButton_clicked()
{
    ui->setPhotoButton->setIcon(QIcon(":/addPhoto.png"));
    currentUserPix.load(":/addPhoto.png");

    QJsonObject obj;
    obj.insert("type", DeleteUserPhoto);
    QJsonObject obj1;
    obj1.insert("login", currentLogin);
    obj.insert("main", obj1);
    QJsonDocument doc;
    doc.setObject(obj);

    QMetaObject::invokeMethod(&objConnect, "translator", Qt::QueuedConnection, Q_ARG(QJsonDocument, doc));
}

QString MainMenu::getEditedName()     {return ui->editNameLineEdit->text();}

QString MainMenu::getEditedSurname()  {return ui->editSurnameLineEdit->text();}

void MainMenu::on_authorizationButton_clicked()     {ui->stackedWidget->setCurrentIndex(1);}

void MainMenu::on_exitButton_clicked()           {this->close();}

void MainMenu::on_editNameButton_clicked()       {ui->editNameLineEdit->setEnabled(true);}

void MainMenu::on_editSurnameButton_clicked()    {ui->editSurnameLineEdit->setEnabled(true);}

void MainMenu::on_accountButton_clicked()
{
    ui->deletePhotoButton->show();
    ui->editNameButton->show();
    ui->editNameLineEdit->show();
    ui->editSurnameLineEdit->show();
    ui->editSurnameButton->show();
    ui->saveChangesButton->show();
    ui->editLoginButton->show();
    ui->editPasswordButton->show();
    ui->logOutButton->show();
    ui->setPhotoButton->show();
    ui->deleteAccountButton->setText("Удалить аккаунт");

    ui->label_25->hide();
    ui->label_26->hide();
    ui->nameLabel->hide();
    ui->surnameLabel->hide();
    ui->goToAdHistoryButton->hide();
    ui->statusLabel->hide();
    ui->setPhotoButton_3->hide();

    setCurrentData(currentLogin, currentName, currentSurname, currentRole, currentUserPix);

    currentTypeId = fromOther;

    this->setStyleSheet("background-color: rgb(0, 18, 0);");
    ui->stackedWidget->setCurrentWidget(ui->accountPage);

}


void MainMenu::on_addAdButton_clicked()
{
    ui->stackedWidget->setGeometry(0,0,800,600);
    ui->stackedWidget->setCurrentIndex(2);
    objAd.adModel->insertRow(objAd.adModel->rowCount());
}

void MainMenu::slotBackToMainMenuFromAddAd()
{
    ui->stackedWidget->setGeometry(70,0,730,600);
    this->setStyleSheet("background-color: rgb(0, 0, 44);");
    ui->stackedWidget->setCurrentWidget(ui->mainPage);
}


void MainMenu::on_chatButton_clicked()
{
    QJsonObject obj;
    obj.insert("type", messageHistory);
    QJsonObject obj1;
    obj1.insert("login", currentLogin);

    obj.insert("main", obj1);
    QJsonDocument doc;
    doc.setObject(obj);

    QMetaObject::invokeMethod(&objConnect, "translator", Qt::QueuedConnection, Q_ARG(QJsonDocument, doc));







    objChat.myCurrentLogin = currentLogin;
    objChat.myCurrentRole = currentRole;

    objChat.setStyleSheet("background-color: rgb(51, 51, 51);");
    ui->stackedWidget->setGeometry(0,0,800,600);
    ui->stackedWidget->setCurrentIndex(3);
}


void MainMenu::on_historyListView_clicked()
{
    int applicationId = adHistoryModel->data(adHistoryModel->index
                                              (ui->historyListView->currentIndex().row(),1)).toInt();
    QJsonObject obj;
    obj.insert("type", adInfo);
    obj.insert("typeId", fromHistoryListView);
    QJsonObject obj1;
    obj1.insert("applicationId", applicationId);
    obj.insert("main", obj1);
    QJsonDocument doc;
    doc.setObject(obj);

    QMetaObject::invokeMethod(&objConnect, "translator", Qt::QueuedConnection, Q_ARG(QJsonDocument, doc));

    ui->statusLabell->show();

    ui->acceptButtonn->hide();
    ui->accountButtonn->hide();
    ui->deleteAdButtonn->hide();
}


void MainMenu::on_allAdsButton_clicked()
{
    myAdsModel->clear();
    myAdsModel->insertColumns(0,3);
    adminStackModel->clear();
    adminStackModel->insertColumns(0,4);
    adHistoryModel->clear();
    adHistoryModel->insertColumns(0,3);

    this->setStyleSheet("background-color: rgb(0, 0, 44);");
    ui->stackedWidget->setCurrentWidget(ui->mainPage);
}

void MainMenu::on_myAdsButton_clicked()
{
    myAdsModel->clear();
    myAdsModel->insertColumns(0,3);

    QJsonObject obj;
    obj.insert("type", myAds);
    QJsonObject obj1;
    obj1.insert("login", currentLogin);
    obj.insert("main", obj1);
    QJsonDocument doc;
    doc.setObject(obj);

    QMetaObject::invokeMethod(&objConnect, "translator", Qt::QueuedConnection, Q_ARG(QJsonDocument, doc));
}

void MainMenu::slotMyAdsInfo(QJsonDocument doc)
{
    setMyAds(doc);
}

void MainMenu::on_exitProgrammButton_clicked()
{
    this->close();
}

void MainMenu::on_adHistoryButton_clicked()
{
    adHistoryModel->clear();
    adHistoryModel->insertColumns(0,3);

    QJsonObject obj;
    obj.insert("type", historyInfo);
    QJsonObject obj1;
    obj1.insert("login", currentLogin);
    obj.insert("main", obj1);
    QJsonDocument doc;
    doc.setObject(obj);

    QMetaObject::invokeMethod(&objConnect, "translator", Qt::QueuedConnection, Q_ARG(QJsonDocument, doc));
}


void MainMenu::on_adStackButton_clicked()
{
    adminStackModel->clear();
    adminStackModel->insertColumns(0,4);

    QJsonObject obj;
    obj.insert("type", stackInfo);
    QJsonObject obj1;
    obj1.insert("login", currentLogin);
    obj.insert("main", obj1);
    QJsonDocument doc;
    doc.setObject(obj);

    QMetaObject::invokeMethod(&objConnect, "translator", Qt::QueuedConnection, Q_ARG(QJsonDocument, doc));
}


void MainMenu::on_goToAdHistoryButton_clicked()
{
    adHistoryModel->clear();
    adHistoryModel->insertColumns(0,3);

    QJsonObject obj;
    obj.insert("type", historyInfo);
    obj.insert("typeId", fromAccountPage);
    QJsonObject obj1;
    obj1.insert("login", ui->loginLabel->text());
    obj.insert("main", obj1);
    QJsonDocument doc;
    doc.setObject(obj);

    QMetaObject::invokeMethod(&objConnect, "translator", Qt::QueuedConnection, Q_ARG(QJsonDocument, doc));
}


void MainMenu::on_backToAccountPageButton_clicked()
{
    on_accountButtonn_clicked();
}

void MainMenu::on_backToAdminAdPageButton_clicked()
{
    on_historyAndStackListView_clicked();
}

void MainMenu::slotLoginEdited(bool isEdited, QString newLogin)
{
    if (isEdited)
    {
        ui->loginLabel->setText(newLogin);
        currentLogin = newLogin;
    }
    else
    {
        QMessageBox::warning(0, "Edit Login", "Этот логин уже занят уже занят. Выберите другой");
        on_editLoginButton_clicked();
    }
}

void MainMenu::slotBackToMainMenuFromChat()
{
    ui->stackedWidget->setGeometry(70,0,730,600);
    this->setStyleSheet("background-color: rgb(0, 0, 44);");
    ui->stackedWidget->setCurrentWidget(ui->mainPage);
}

void MainMenu::slotChats(QJsonDocument doc)
{
    QJsonObject obj = doc.object().value("main").toObject();

    QJsonArray userLoginsArray = obj.value("userLogins").toArray();
    int arrayCount = obj.value("arrayCount").toInt();

    for(int i=0; i<arrayCount; i++)
    {
        objChat.chatModel->insertRow(objChat.chatModel->rowCount());
        objChat.chatModel->setData(objChat.chatModel->index(objChat.chatModel->rowCount()-1,0),
                                   userLoginsArray.at(i).toString());

    }

    objChat.myCurrentRole = currentRole;

    if(doc.object().value("typeId").toInt()==1)
    {
        bool flag = false;
        for (int i=0; i<objChat.chatModel->rowCount(); i++)
        {
            if (objChat.chatModel->data(objChat.chatModel->index(i,0)).toString()==
                    allAdModel->data(allAdModel->index(ui->allAdsListView->currentIndex().row(),2)).toString())
            {

                flag = true;// если переписка уже существует
                QMetaObject::invokeMethod(&objChat, "prepareToSending", Qt::QueuedConnection,
                                          Q_ARG(QModelIndex, objChat.chatModel->index(i,0)));
                break;
            }
            else flag = false;
        }
        if(!flag)
        {
            objChat.chatModel->insertRow(objChat.chatModel->rowCount());
            objChat.chatModel->setData(objChat.chatModel->index(objChat.chatModel->rowCount()-1,0),
                                       allAdModel->data(allAdModel->index(ui->allAdsListView->currentIndex().row(),2)).toString());
            QMetaObject::invokeMethod(&objChat, "prepareToSending", Qt::QueuedConnection,
                                      Q_ARG(QModelIndex, objChat.chatModel->index(objChat.chatModel->rowCount(),0)));
        }
    }



}

void MainMenu::slotGetAccountInformation(QString login)
{
    ui->deletePhotoButton->hide();
    ui->editNameButton->hide();
    ui->editNameLineEdit->hide();
    ui->editSurnameLineEdit->hide();
    ui->editSurnameButton->hide();
    ui->saveChangesButton->hide();
    ui->editLoginButton->hide();
    ui->editPasswordButton->hide();
    ui->logOutButton->hide();
    ui->statusLabel->hide();
    ui->setPhotoButton->hide();
    ui->deleteAccountButton->setText("Заблокировать аккаунт");


    ui->setPhotoButton_3->show();
    ui->label_25->show();
    ui->label_26->show();
    ui->nameLabel->show();
    ui->surnameLabel->show();
    ui->goToAdHistoryButton->show();

    QJsonObject obj;
    obj.insert("type", accountInfo);
    obj.insert("typeId", fromChat);
    QJsonObject obj1;
    obj1.insert("login", login);
    obj.insert("main", obj1);
    QJsonDocument doc;
    doc.setObject(obj);

    QMetaObject::invokeMethod(&objConnect, "translator", Qt::QueuedConnection, Q_ARG(QJsonDocument, doc));
}





void MainMenu::on_backToChatButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


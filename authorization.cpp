#include "authorization.h"
#include "ui_authorization.h"



Authorization::Authorization(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Authorization)
{
    ui->setupUi(this);


    // выпадющие списки для регистрации
    QStringList postList;
    postList << "Technical support" << "Administrator" << "Client";
    // в регистрации
    ui->choosePostComboBox->addItems(postList);
    ui->choosePostComboBox->setCurrentIndex(-1);
    // в входе
    ui->postComboBox->addItems(postList);
    ui->postComboBox->setCurrentIndex(-1);

    // сокрытие виджетов для админа и ТП
    ui->pinLabel->hide();
    ui->pinLineEdit->hide();



    // валидатор для ввода только 4 цифр в строке пин-кода персонала
    QIntValidator* validator = new QIntValidator(0,1000, this);
    ui->pinLineEdit->setValidator(validator);

    // валидатор на ввод только букв для имени и фамилии
    QRegExp rx("[A-ZА-Я]{1,1}[a-zа-я]{1,26}");
    QValidator *nameSurnameValidator = new QRegExpValidator(rx, this);
    ui->nameLineEdit->setValidator(nameSurnameValidator);
    ui->surnameLineEdit->setValidator(nameSurnameValidator);

    // валидатор для логина и пароля

    //rx.setPattern("[A-Za-z]{1,26}[0-9]{1,14}"); // старый валидатор (буквы, потом цифры)
    rx.setPattern("^[a-zA-Z0-9]+$"); // новый валидатор цифры и буквы в любом порядке
    QValidator* logPasValidator = new QRegExpValidator(rx, this);
    // в регитсрации
    ui->loginLineEdit_2->setValidator(logPasValidator);
    ui->passwordLineEdit_2->setValidator(logPasValidator);
    ui->confirmPasswordLineEdit->setValidator(logPasValidator);
    // в входе
    ui->loginLineEdit->setValidator(logPasValidator);
    ui->passwordLineEdit->setValidator(logPasValidator);
    /////////////////////////////////////////////////////////////////////////////

    model = new QStandardItemModel;
    model->insertColumns(0,8);



    // реализация открытия и сокрытия пароля в регистрации
    connect(ui->viewPasswordButton_2, &QPushButton::pressed, this, &Authorization::slotRegPasButtonPressed);
    connect(ui->viewPasswordButton_2, &QPushButton::released, this, &Authorization::slotRegPasButtonReleased);
    connect(ui->viewPasswordButton_3, &QPushButton::pressed, this, &Authorization::slotRegPasConfirmButtonPressed);
    connect(ui->viewPasswordButton_3, &QPushButton::released, this, &Authorization::slotRegPasConfirmButtonReleased);

    // показ/сокрытие виджетов для админа и ТП
    connect(ui->choosePostComboBox, QOverload<int>::of(&QComboBox::activated), this, &Authorization::slotPinManage);

    // сокрытие и показ пароля в входе
    connect(ui->viewPasswordButton, &QPushButton::pressed, this, &Authorization::slotLogPasButtonPressed);
    connect(ui->viewPasswordButton, &QPushButton::released, this, &Authorization::slotLogPasButtonReleased);


    ////
    connect(&objConnect, SIGNAL(profileExists(bool, QJsonDocument)), this, SLOT(slotProfileExists(bool, QJsonDocument)));
    connect(&objConnect, SIGNAL(permissionToRegister(bool, QJsonDocument)), this, SLOT(slotPermissionToRegister(bool, QJsonDocument)));

    connect(&objConnect, SIGNAL(profileBlocked()), this, SLOT(slotProfileBlocked()));





}

Authorization::~Authorization()
{
    delete ui;
}

void Authorization::slotProfileBlocked()
{
    QMessageBox::critical(0, "Authorization", "Ваш профиль заблокирован");
    clearLogLines();
}

void Authorization::slotProfileExists(bool answer, QJsonDocument doc)
{
    if (answer)
    {
        emit goToMainMenuFromLog(doc);
        clearLogLines();
    }
    else if (!answer)
    {
        QMessageBox::warning(0, "Log in error", "Неверный логин или пароль");
        clearLogLines();
    }
}

void Authorization::slotPermissionToRegister(bool answer, QJsonDocument doc)
{
    if (answer)
    {
        emit goToMainMenuFromReg(doc);
        clearRegLines();
        ui->stackedWidget->setCurrentWidget(ui->logPage);
    }
    else if (!answer)
    {
        QMessageBox::warning(0, "Register error", "Профиль с таким логином уже существует");
        ui->loginLineEdit_2->clear();
    }
}

void Authorization::slotPinManage()
{
    // если НЕ клиент - скрыть, иначе показать пин-код
    if ((ui->choosePostComboBox->currentIndex()!=2)&&(ui->choosePostComboBox->currentIndex()>-1))
    {
        ui->pinLabel->show();
        ui->pinLineEdit->show();
        ui->pinLineEdit->clear();
    }
    else
    {
        ui->pinLabel->hide();
        ui->pinLineEdit->hide();
        ui->pinLineEdit->clear();
    }
}

///////////////////////////////////////////////////////////
bool Authorization::checkLines()
{
    bool flag = true;

    // если хотя бы одно поле пустое
    if ((ui->nameLineEdit->text().isEmpty())||(ui->surnameLineEdit->text().isEmpty())
            ||(ui->loginLineEdit_2->text().isEmpty())||(ui->passwordLineEdit_2->text().isEmpty())
            ||(ui->confirmPasswordLineEdit->text().isEmpty())||(ui->choosePostComboBox->currentIndex()==-1))
    {
        QMessageBox::critical(0, "ERROR", "Заполните все поля");
        flag = false;
    }
    // проверка паролей
    if (ui->passwordLineEdit_2->text()!=ui->confirmPasswordLineEdit->text())
    {
        QMessageBox::critical(0, "ERROR", "Введенный и подтвержденный пароли не совпадают");
        flag = false;
    }

    // проверка пин-кода
    if ((ui->pinLineEdit->isVisible())&&(ui->pinLineEdit->text().isEmpty()))
    {
        QMessageBox::critical(0, "ERROR", "Введите пин-код персонала");
        flag = false;
    }

    else if (!ui->pinLineEdit->text().isEmpty())
    {
        if (ui->pinLineEdit->text()!="5239")
        {
            QMessageBox::critical(0, "ERROR", "Неверный пин-код персонала");
            flag = false;
        }
    }


    return flag;
}
//////////////////////////////////////////////////////////////////////

// кликнута "зарегистрироваться"
void Authorization::on_registerButton_clicked()
{
    if (checkLines())
    {
        QJsonObject obj;
        obj.insert("type", registration);
        QJsonObject obj1;
        obj1.insert("name", ui->nameLineEdit->text());
        obj1.insert("surname", ui->surnameLineEdit->text());
        obj1.insert("login", ui->loginLineEdit_2->text());
        obj1.insert("password", ui->passwordLineEdit_2->text());
        obj1.insert("role", ui->choosePostComboBox->currentText());
        obj.insert("main", obj1);
        QJsonDocument doc;
        doc.setObject(obj);

        QMetaObject::invokeMethod(&objConnect, "translator", Qt::QueuedConnection, Q_ARG(QJsonDocument, doc));
        slotPinManage();
    }

















//    bool flag = false;
//    // если нет ошибок в заполнении запомнить профиль
//    if (checkLines())
//    {
//        for (int i=0; i<model->rowCount(); i++)
//        {
//            if (model->data(model->index(i,1)).toString()==getLogin())
//            {
//                flag = true; // если нашли профиль с таким логином
//                QMessageBox::warning(0, "ERROR", "Профиль с таким логином уже существует. Выберите другой");
//                ui->loginLineEdit_2->clear();
//                break;
//            }
//        }
//        if (!flag)
//        {
//            model->insertRow(model->rowCount());
//            model->setData(model->index(model->rowCount()-1,0), getPost());
//            model->setData(model->index(model->rowCount()-1,1), getLogin());
//            model->setData(model->index(model->rowCount()-1,2), getPassword());
//            model->setData(model->index(model->rowCount()-1,3), getName());
//            model->setData(model->index(model->rowCount()-1,4), getSurname());
//            model->setData(model->index(model->rowCount()-1,7), true);
//            regRowIndex = model->rowCount()-1;
//            emit goToMainMenuFromReg();

//            clearRegLines();
//            slotPinManage();

//            ui->stackedWidget->setCurrentWidget(ui->logPage);
//        }
//    }
}

// кликнута вход
void Authorization::on_logInButton_clicked()
{
    QJsonObject obj;
    obj.insert("type", authorization);
    QJsonObject obj1;
    obj1.insert("login", ui->loginLineEdit->text());
    obj1.insert("password", ui->passwordLineEdit->text());
    obj1.insert("role", ui->postComboBox->currentText());
    obj.insert("main", obj1);
    QJsonDocument doc;
    doc.setObject(obj);

    QMetaObject::invokeMethod(&objConnect, "translator", Qt::QueuedConnection, Q_ARG(QJsonDocument, doc));
}
//////////////////////////////////////////////////////////////////////////////

// чистка полей регистрации
void Authorization::clearRegLines()
{
    ui->choosePostComboBox->setCurrentIndex(-1);
    ui->nameLineEdit->clear();
    ui->surnameLineEdit->clear();
    ui->loginLineEdit_2->clear();
    ui->passwordLineEdit_2->clear();
    ui->confirmPasswordLineEdit->clear();
    ui->pinLineEdit->clear();
}


// чистка полей входа
void Authorization::clearLogLines()
{
    ui->postComboBox->setCurrentIndex(-1);
    ui->loginLineEdit->clear();
    ui->passwordLineEdit->clear();
}





// кликнута назад
void Authorization::on_backButton_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->logPage);
    clearRegLines();
}


// переход к регистрации
void Authorization::on_registrationButton_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->regPage);
    clearLogLines();
}

////////////////////////////////////////////////////////////////////////////

void Authorization::on_exitButton_clicked()  {emit quit();}



void Authorization::slotLogPasButtonPressed()  {ui->passwordLineEdit->setEchoMode(QLineEdit::Normal);}

void Authorization::slotLogPasButtonReleased() {ui->passwordLineEdit->setEchoMode(QLineEdit::Password);}


void Authorization::slotRegPasButtonPressed()         {ui->passwordLineEdit_2->setEchoMode(QLineEdit::Normal);}

void Authorization::slotRegPasButtonReleased()        {ui->passwordLineEdit_2->setEchoMode(QLineEdit::Password);}

void Authorization::slotRegPasConfirmButtonPressed()  {ui->confirmPasswordLineEdit->setEchoMode(QLineEdit::Normal);}

void Authorization::slotRegPasConfirmButtonReleased() {ui->confirmPasswordLineEdit->setEchoMode(QLineEdit::Password);}


// из регистрации
QString Authorization::getName()              {return ui->nameLineEdit->text();}

QString Authorization::getSurname()           {return ui->surnameLineEdit->text();}

QString Authorization::getLogin()             {return ui->loginLineEdit_2->text();}

QString Authorization::getPassword()          {return ui->passwordLineEdit_2->text();}

QString Authorization::getPost()              {return ui->choosePostComboBox->currentText();}


// из входа
QString Authorization::getInputPost()         {return ui->postComboBox->currentText();}

QString Authorization::getInputLogin()        {return ui->loginLineEdit->text();}

QString Authorization::getInputPassword()     {return ui->passwordLineEdit->text();}





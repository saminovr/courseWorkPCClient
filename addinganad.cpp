#include "addinganad.h"
#include "ui_addinganad.h"

AddingAnAd::AddingAnAd(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddingAnAd)
{
    ui->setupUi(this);

    frontPhotoSelected = false;

    // валидатор для марки и модели
    QRegExp rx("[A-Za-zА-Яа-я]{1,26}");
    QValidator* markModelValidator = new QRegExpValidator(rx, this);
    ui->markLineEdit->setValidator(markModelValidator);

    // числовой валидатор
    QIntValidator* mileageValidator = new QIntValidator(0,1000000);
    QIntValidator* powerValidator = new QIntValidator(0,1000);
    ui->powerLineEdit->setValidator(powerValidator);
    ui->mileageLineEdit->setValidator(mileageValidator);

    // заполнение выпадающих списков
    QStringList bodyList;
    bodyList << "Седан" << "Хэтчбек 3 дв." << "Хэтчбек 5 дв." << "Внедорожник 3 дв." << "Внедорожник 5 дв."
             << "Универсал" << "Купе" << "Минивэн" << "Пикап" << "Лимузин" << "Фургон" << "Кабриолет";
    ui->bodyComboBox->addItems(bodyList);
    ui->bodyComboBox->setCurrentIndex(-1);

    QStringList engineList;
    engineList << "Бензин" << "Дизель" << "Гибрид" << "Электро";
    ui->engineComboBox->addItems(engineList);
    ui->engineComboBox->setCurrentIndex(-1);

    QStringList driveList;
    driveList << "Передний" << "Задний" << "Полный";
    ui->driveComboBox->addItems(driveList);
    ui->driveComboBox->setCurrentIndex(-1);

    QStringList transmissionList;
    transmissionList << "Автомат" << "Робот" << "Вариатор" << "Механика";
    ui->transmissonComboBox->addItems(transmissionList);
    ui->transmissonComboBox->setCurrentIndex(-1);

    QStringList yearList;
    for (int i=0; i<62; i++)
    {
        yearList << QString::number(2021-i);
    }

    ui->prodYearComboBox->addItems(yearList);
    ui->buyingYearComboBox->addItems(yearList);

    ui->prodYearComboBox->setCurrentIndex(-1);
    ui->buyingYearComboBox->setCurrentIndex(-1);

    ui->stackedWidget->setCurrentWidget(ui->page);


    adModel = new QStandardItemModel;
    adModel->insertColumns(0,19);



}

AddingAnAd::~AddingAnAd()
{
    delete ui;
}


void AddingAnAd::on_completeButton_clicked()
{






    if (isNotEmpty())
    {
        adModel->setData(adModel->index(adModel->rowCount()-1,0), getMark());
        adModel->setData(adModel->index(adModel->rowCount()-1,1), getModel());
        adModel->setData(adModel->index(adModel->rowCount()-1,2), getProdYear());
        adModel->setData(adModel->index(adModel->rowCount()-1,3), getBodyType());
        adModel->setData(adModel->index(adModel->rowCount()-1,4), getEngineType());
        adModel->setData(adModel->index(adModel->rowCount()-1,5), getDriveType());
        adModel->setData(adModel->index(adModel->rowCount()-1,6), getTransmissionType());
        adModel->setData(adModel->index(adModel->rowCount()-1,7), getPower());
        adModel->setData(adModel->index(adModel->rowCount()-1,8), getColor());
        adModel->setData(adModel->index(adModel->rowCount()-1,9), getMileage());
        adModel->setData(adModel->index(adModel->rowCount()-1,10), getBuyingYear());
        adModel->setData(adModel->index(adModel->rowCount()-1,11), getDescription());
        emit goToMainMenu();
        clearFields();
        ui->stackedWidget->setCurrentWidget(ui->page);
    }
    else if (!frontPhotoSelected)
    {
        QMessageBox::warning(0, "Adding an ad", "Загрузите фото автомобиля спереди");
    }
    else
    {
        QMessageBox::warning(0, "ERROR", "Заполните все поля");
    }

    rowIndex += 1;
}

bool AddingAnAd::isNotEmpty()
{
    if ((!ui->markLineEdit->text().isEmpty())&&(!ui->modelLineEdit->text().isEmpty())
            &&(ui->prodYearComboBox->currentIndex()!=-1)&&(ui->bodyComboBox->currentIndex()!=-1)
            &&(ui->engineComboBox->currentIndex()!=-1)&&(ui->driveComboBox->currentIndex()!=-1)
            &&(ui->transmissonComboBox->currentIndex()!=-1)&&(!ui->powerLineEdit->text().isEmpty())
            &&(!ui->colorLabel->text().isEmpty())&&(!ui->mileageLineEdit->text().isEmpty())
            &&(ui->buyingYearComboBox->currentIndex()!=-1)&&(!ui->descriptionTextEdit->toPlainText().isEmpty())
            &&(frontPhotoSelected))
    {
        return true;
    }
    else return false;
}

void AddingAnAd::clearFields()
{
    ui->markLineEdit->clear();
    ui->modelLineEdit->clear();
    ui->prodYearComboBox->setCurrentIndex(-1);
    ui->bodyComboBox->setCurrentIndex(-1);
    ui->engineComboBox->setCurrentIndex(-1);
    ui->driveComboBox->setCurrentIndex(-1);
    ui->transmissonComboBox->setCurrentIndex(-1);
    ui->powerLineEdit->clear();
    ui->colorLabel->clear();
    ui->mileageLineEdit->clear();
    ui->buyingYearComboBox->setCurrentIndex(-1);

    ui->carRightPhotoButton->setIcon(QIcon(":/carPhotoRight.png"));
    ui->carLeftPhotoButton->setIcon(QIcon(":/carPhotoLeft.png"));
    ui->carBehindPhotoButton->setIcon(QIcon(":/carPhotoBehind.png"));
    ui->carFrontPhotoButton->setIcon(QIcon(":/carPhotoFront.png"));
    ui->carBonnetPhotoButton->setIcon(QIcon(":/carPhotoBonnet.png"));
    ui->carTrunkPhotoButton->setIcon(QIcon(":/carPhotoTrunk.png"));
    ui->descriptionTextEdit->clear();
}


////////////////////////////////////////////////////////////////////////////////////////
void AddingAnAd::on_carRightPhotoButton_clicked()
{
    QString file = QFileDialog::getOpenFileName(this, "Выберите файл", "C://", "Изображения (*.png *.jpg)");
    if (!file.isEmpty())
    {
        ui->carRightPhotoButton->setIcon(QIcon(file));
        adModel->setData(adModel->index(adModel->rowCount()-1, 12), file);
    }
}


void AddingAnAd::on_carLeftPhotoButton_clicked()
{
    QString file = QFileDialog::getOpenFileName(this, "Выберите файл", "C://", "Изображения (*.png *.jpg)");
    if (!file.isEmpty())
    {
        ui->carLeftPhotoButton->setIcon(QIcon(file));
        adModel->setData(adModel->index(adModel->rowCount()-1, 13), file);
    }
}


void AddingAnAd::on_carBehindPhotoButton_clicked()
{
    QString file = QFileDialog::getOpenFileName(this, "Выберите файл", "C://", "Изображения (*.png *.jpg)");
    if (!file.isEmpty())
    {
        ui->carBehindPhotoButton->setIcon(QIcon(file));
        adModel->setData(adModel->index(adModel->rowCount()-1, 14), file);
    }
}


void AddingAnAd::on_carFrontPhotoButton_clicked()
{
    QString file = QFileDialog::getOpenFileName(this, "Выберите файл", "C://", "Изображения (*.png *.jpg)");
    if (!file.isEmpty())
    {
        ui->carFrontPhotoButton->setIcon(QIcon(file));
        adModel->setData(adModel->index(adModel->rowCount()-1, 15), file);
        frontPhotoSelected = true;
    }
}


void AddingAnAd::on_carBonnetPhotoButton_clicked()
{
    QString file = QFileDialog::getOpenFileName(this, "Выберите файл", "C://", "Изображения (*.png *.jpg)");
    if (!file.isEmpty())
    {
        ui->carBonnetPhotoButton->setIcon(QIcon(file));
        adModel->setData(adModel->index(adModel->rowCount()-1, 16), file);
    }
}


void AddingAnAd::on_carTrunkPhotoButton_clicked()
{
    QString file = QFileDialog::getOpenFileName(this, "Выберите файл", "C://", "Изображения (*.png *.jpg)");
    if (!file.isEmpty())
    {
        ui->carTrunkPhotoButton->setIcon(QIcon(file));
        adModel->setData(adModel->index(adModel->rowCount()-1, 17), file);
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////


QString AddingAnAd::getMark()             {return ui->markLineEdit->text();}

QString AddingAnAd::getModel()            {return ui->modelLineEdit->text();}

QString AddingAnAd::getProdYear()         {return ui->prodYearComboBox->currentText();}

QString AddingAnAd::getBodyType()         {return ui->bodyComboBox->currentText();}

QString AddingAnAd::getEngineType()       {return ui->engineComboBox->currentText();}

QString AddingAnAd::getDriveType()        {return ui->driveComboBox->currentText();}

QString AddingAnAd::getTransmissionType() {return ui->transmissonComboBox->currentText();}

QString AddingAnAd::getPower()            {return ui->powerLineEdit->text();}

QString AddingAnAd::getColor()            {return ui->colorLabel->text();}

QString AddingAnAd::getMileage()          {return ui->mileageLineEdit->text();}

QString AddingAnAd::getBuyingYear()       {return ui->buyingYearComboBox->currentText();}

QString AddingAnAd::getDescription()      {return ui->descriptionTextEdit->toPlainText();}



void AddingAnAd::on_whiteColorButton_clicked()      {ui->colorLabel->setText("Белый");}

void AddingAnAd::on_silverColorButton_clicked()     {ui->colorLabel->setText("Серебристый");}

void AddingAnAd::on_grayColorButton_clicked()       {ui->colorLabel->setText("Серый");}

void AddingAnAd::on_beigeColorButton_clicked()      {ui->colorLabel->setText("Бежевый");}

void AddingAnAd::on_brownColorButton_clicked()      {ui->colorLabel->setText("Коричневый");}

void AddingAnAd::on_goldenColorButton_clicked()     {ui->colorLabel->setText("Золотистый");}

void AddingAnAd::on_yellowColorButton_clicked()     {ui->colorLabel->setText("Желтый");}

void AddingAnAd::on_orangeColorButton_clicked()     {ui->colorLabel->setText("Оранжевый");}

void AddingAnAd::on_pinkColorButton_clicked()       {ui->colorLabel->setText("Розовый");}

void AddingAnAd::on_redColorButton_clicked()        {ui->colorLabel->setText("Красный");}

void AddingAnAd::on_purpleColorButton_clicked()     {ui->colorLabel->setText("Пурпурный");}

void AddingAnAd::on_greenColorButton_clicked()      {ui->colorLabel->setText("Зеленый");}

void AddingAnAd::on_blueColorButton_clicked()       {ui->colorLabel->setText("Голубой");}

void AddingAnAd::on_darkBlueColorButton_clicked()   {ui->colorLabel->setText("Синий");}

void AddingAnAd::on_darkPurpleColorButton_clicked() {ui->colorLabel->setText("Фиолетовый");}

void AddingAnAd::on_blackColorButton_clicked()      {ui->colorLabel->setText("Черный");}




void AddingAnAd::on_backButton_clicked()       {emit backToMainMenu();}


void AddingAnAd::on_continueButton_clicked()   {ui->stackedWidget->setCurrentWidget(ui->page_2);}


void AddingAnAd::on_backButton_2_clicked()     {ui->stackedWidget->setCurrentWidget(ui->page);}


void AddingAnAd::on_continueButton_2_clicked() {ui->stackedWidget->setCurrentWidget(ui->page_3);}


void AddingAnAd::on_backButton_3_clicked()     {ui->stackedWidget->setCurrentWidget(ui->page_2);}


void AddingAnAd::on_continueButton_3_clicked() {ui->stackedWidget->setCurrentWidget(ui->page_4);}

void AddingAnAd::on_backButton_4_clicked()     {ui->stackedWidget->setCurrentWidget(ui->page_3);}

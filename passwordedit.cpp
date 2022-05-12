#include "passwordedit.h"
#include "ui_passwordedit.h"

PasswordEdit::PasswordEdit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PasswordEdit)
{
    ui->setupUi(this);

    // валидатор для пароля
    QRegExp rx("^[a-zA-Z0-9]+$");

    QValidator* pasValidator = new QRegExpValidator(rx, this);
    ui->passwordLineEdit->setValidator(pasValidator);
    ui->confirmedPasswordLineEdit->setValidator(pasValidator);

    // реализация открытия и сокрытия пароля в регистрации
    connect(ui->viewPassword, &QPushButton::pressed, this, &PasswordEdit::slotRegPasButtonPressed);
    connect(ui->viewPassword, &QPushButton::released, this, &PasswordEdit::slotRegPasButtonReleased);
    connect(ui->viewPassword_2, &QPushButton::pressed, this, &PasswordEdit::slotRegPasConfirmButtonPressed);
    connect(ui->viewPassword_2, &QPushButton::released, this, &PasswordEdit::slotRegPasConfirmButtonReleased);
}

PasswordEdit::~PasswordEdit()
{
    delete ui;
}

void PasswordEdit::on_okButton_clicked()
{
    if ((!ui->passwordLineEdit->text().isEmpty())&&(!ui->confirmedPasswordLineEdit->text().isEmpty()))
    {
        if (ui->passwordLineEdit->text()==ui->confirmedPasswordLineEdit->text())
            PasswordEdit::accept();

        else QMessageBox::critical(0, "ERROR", "Введенный и подтвержденный пароли не совпадают");
    }
    else QMessageBox::critical(0, "ERROR", "Заполните все поля");
}

void PasswordEdit::on_cancelButton_clicked()  {PasswordEdit::reject();}


QString PasswordEdit::getEditedPassword()     {return ui->confirmedPasswordLineEdit->text();}


void PasswordEdit::slotRegPasButtonPressed()         {ui->passwordLineEdit->setEchoMode(QLineEdit::Normal);}

void PasswordEdit::slotRegPasButtonReleased()        {ui->passwordLineEdit->setEchoMode(QLineEdit::Password);}

void PasswordEdit::slotRegPasConfirmButtonPressed()  {ui->confirmedPasswordLineEdit->setEchoMode(QLineEdit::Normal);}

void PasswordEdit::slotRegPasConfirmButtonReleased() {ui->confirmedPasswordLineEdit->setEchoMode(QLineEdit::Password);}

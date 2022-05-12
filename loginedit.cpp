#include "loginedit.h"
#include "ui_loginedit.h"

LoginEdit::LoginEdit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginEdit)
{
    ui->setupUi(this);

    // валидатор для логина
    QRegExp rx("^[a-zA-Z0-9]+$");
    QValidator* logValidator = new QRegExpValidator(rx, this);
    ui->loginLineEdit->setValidator(logValidator);
}

LoginEdit::~LoginEdit()
{
    delete ui;
}

void LoginEdit::on_okButton_clicked()
{
    if (!ui->loginLineEdit->text().isEmpty())
        LoginEdit::accept();

    else QMessageBox::critical(0,"ERROR", "Введите логин");

}

void LoginEdit::on_cancelButton_clicked()  {LoginEdit::reject();}


QString LoginEdit::getEditedLogin()  {return ui->loginLineEdit->text();}

#ifndef AUTHORIZATION_H
#define AUTHORIZATION_H

#include <QWidget>
#include <QtWidgets>
#include <QStandardItemModel>

#include "connector.h"

namespace Ui {
class Authorization;
}

class Authorization : public QWidget
{
    Q_OBJECT

public:
    explicit Authorization(QWidget *parent = nullptr);
    ~Authorization();



    QStandardItemModel* model;

    int logRowIndex;
    int regRowIndex;
    typedef enum
    {
        authorization = 1, //идентификатор авторизации
        registration,
    }
    typeMessage;



private:
    Ui::Authorization *ui;

    Connector objConnect;

    // регистрация
    QString getName();
    QString getSurname();
    QString getLogin();
    QString getPassword();
    QString getPost();


    // вход
    QString getInputPost();
    QString getInputLogin();
    QString getInputPassword();

    // проверка полей ввода
    bool checkLines();
    // очистка полей ввода
    void clearRegLines();
    void clearLogLines();

private slots:

    void slotProfileBlocked();
    void slotProfileExists(bool, QJsonDocument);
    void slotPermissionToRegister(bool, QJsonDocument);

    void slotRegPasButtonPressed();
    void slotRegPasButtonReleased();
    void slotRegPasConfirmButtonPressed();
    void slotRegPasConfirmButtonReleased();

    void slotLogPasButtonPressed();
    void slotLogPasButtonReleased();

    void slotPinManage();



    void on_backButton_clicked();

    void on_registrationButton_clicked();
    void on_registerButton_clicked();

    void on_logInButton_clicked();

    void on_exitButton_clicked();

signals:

    void goToMainMenuFromReg(QJsonDocument);
    void goToMainMenuFromLog(QJsonDocument);

    void quit();
};

#endif // AUTHORIZATION_H

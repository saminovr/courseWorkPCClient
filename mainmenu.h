#ifndef MAINMENU_H
#define MAINMENU_H

#include <QWidget>
#include <QFileDialog>
#include <QJsonObject>
#include <QJsonDocument>

#include "authorization.h"
#include "loginedit.h"
#include "passwordedit.h"
#include "addinganad.h"
#include "chat.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainMenu; }
QT_END_NAMESPACE

class MainMenu : public QWidget
{
    Q_OBJECT

public:
    MainMenu(QWidget *parent = nullptr);
    ~MainMenu();

    QLabel* loginLabel;

    typedef enum
    {
        //authorization = 1, //идентификатор авторизации
        //registration,
        addingAnAd = 3,
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

    typedef enum
    {
        fromAllAdsListView = 1,
        fromAdsListView,
        fromHistoryAndStackListView,
        fromHistoryListView,
        fromAccountPage,
        fromAdminAdPage,
        fromOther,
        fromChat,






    }
    typeFrom;

    QString getEditedName();
    QString getEditedSurname();

private slots:



    void on_authorizationButton_clicked();

    void slotGoToMainMenuFromLog(QJsonDocument);
    void slotGoToMainMenuFromReg(QJsonDocument);

    void slotBackToMainMenuFromAddAd();
    void slotGoToMainMenuFromAddAd();

    void slotAdIsLoaded(bool, QJsonDocument);

    void slotAdInformation(QJsonDocument);

    void slotAdIsAccepted(bool, QJsonDocument);

    void slotAccountInformation(QJsonDocument);

    void slotUpdateInformation(QJsonDocument);

    void slotHistoryInformation(QJsonDocument);

    void slotStackInformation(QJsonDocument);

    void slotMyAdsInfo(QJsonDocument);

    void slotLoginEdited(bool, QString);

    void slotBackToMainMenuFromChat();

    void slotChats(QJsonDocument);

    void slotGetAccountInformation(QString);





    void on_exitButton_clicked();

    void on_editNameButton_clicked();

    void on_editSurnameButton_clicked();

    void on_saveChangesButton_clicked();

    void on_accountButton_clicked();

    void on_editLoginButton_clicked();

    void on_logOutButton_clicked();

    void on_deleteAccountButton_clicked();

    void on_editPasswordButton_clicked();

    void on_setPhotoButton_clicked();

    void on_deletePhotoButton_clicked();





    void on_addAdButton_clicked();

    void on_adsListView_clicked();

    void on_backButton_2_clicked();

    void on_deleteAdButtonn_clicked();

    void on_historyAndStackListView_clicked();

    void on_acceptButtonn_clicked();

    void on_accountButtonn_clicked();

    void on_allAdsListView_clicked();


    void on_chatButton_clicked();

    void on_historyListView_clicked();

    void on_allAdsButton_clicked();



    void on_myAdsButton_clicked();


    void on_exitProgrammButton_clicked();

    void on_adHistoryButton_clicked();

    void on_adStackButton_clicked();



    void on_goToAdHistoryButton_clicked();

    //void on_historyListView_clicked();

    void on_backToAccountPageButton_clicked();

    void on_backToAdminAdPageButton_clicked();

    void on_backToChatButton_clicked();

signals:
    void mainMenuClosed();


private:
    Ui::MainMenu *ui;

    QString currentLogin;
    QString currentName;
    QString currentSurname;
    QString currentRole;
    QPixmap currentUserPix;



    int currentTypeId;

    Authorization objAutho;
    AddingAnAd objAd;
    Chat objChat;
    Connector objConnect;
    //Connector* objConn;

    QStandardItemModel* myAdsModel;
    QStandardItemModel* adminStackModel;
    QStandardItemModel* adHistoryModel;
    QStandardItemModel* allAdModel;

    void setCurrentData(QString login, QString name, QString surname, QString role, QPixmap userPix);
    void setCurrentAdData(QJsonDocument);

    void editNames();

    void setAllAds(QJsonDocument);
    void setMyAds(QJsonDocument);

    void closeEvent(QCloseEvent* event);
};
#endif // MAINMENU_H

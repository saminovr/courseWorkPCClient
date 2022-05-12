#ifndef ADDINGANAD_H
#define ADDINGANAD_H

#include <QDialog>
#include <QStandardItemModel>
#include <QFileDialog>
#include <QtWidgets>


namespace Ui {
class AddingAnAd;
}

class AddingAnAd : public QDialog
{
    Q_OBJECT

public:
    explicit AddingAnAd(QWidget *parent = nullptr);
    ~AddingAnAd();

    typedef enum
    {
        addingAnAd = 3, //идентификатор авторизации
    }
    typeMessage;

    QStandardItemModel* adModel;

    int rowIndex = 0;

private slots:


    void on_backButton_clicked();

    void on_continueButton_clicked();

    void on_backButton_2_clicked();

    void on_continueButton_2_clicked();


    void on_backButton_3_clicked();

    void on_whiteColorButton_clicked();

    void on_silverColorButton_clicked();

    void on_grayColorButton_clicked();

    void on_beigeColorButton_clicked();

    void on_brownColorButton_clicked();

    void on_goldenColorButton_clicked();

    void on_yellowColorButton_clicked();

    void on_orangeColorButton_clicked();

    void on_pinkColorButton_clicked();

    void on_redColorButton_clicked();

    void on_purpleColorButton_clicked();

    void on_greenColorButton_clicked();

    void on_blueColorButton_clicked();

    void on_darkBlueColorButton_clicked();

    void on_darkPurpleColorButton_clicked();



    void on_blackColorButton_clicked();

    void on_continueButton_3_clicked();

    void on_carRightPhotoButton_clicked();

    void on_carLeftPhotoButton_clicked();

    void on_carBehindPhotoButton_clicked();

    void on_carFrontPhotoButton_clicked();

    void on_carBonnetPhotoButton_clicked();

    void on_carTrunkPhotoButton_clicked();

    void on_backButton_4_clicked();

    void on_completeButton_clicked();

private:
    Ui::AddingAnAd *ui;

    bool isNotEmpty();
    bool frontPhotoSelected;

    void clearFields();

    QString getMark();
    QString getModel();
    QString getProdYear();
    QString getBodyType();
    QString getEngineType();
    QString getDriveType();
    QString getTransmissionType();
    QString getPower();
    QString getColor();
    QString getMileage();
    QString getBuyingYear();
    QString getRightPhoto();
    QString getLeftPhoto();
    QString getBehindPhoto();
    QString getFrontPhoto();
    QString getBonnetPhoto();
    QString getTrunkPhoto();
    QString getDescription();

signals:
    void backToMainMenu();
    void goToMainMenu();
};

#endif // ADDINGANAD_H

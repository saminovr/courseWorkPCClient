/********************************************************************************
** Form generated from reading UI file 'addinganad.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDINGANAD_H
#define UI_ADDINGANAD_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddingAnAd
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *headerLabel;
    QLabel *markLabel;
    QLabel *modelLabel;
    QLabel *label_4;
    QLineEdit *markLineEdit;
    QLineEdit *modelLineEdit;
    QPushButton *backButton;
    QLabel *label_5;
    QLabel *label_6;
    QComboBox *bodyComboBox;
    QPushButton *continueButton;
    QComboBox *prodYearComboBox;
    QLabel *label_7;
    QWidget *widget;
    QWidget *page_2;
    QComboBox *engineComboBox;
    QComboBox *transmissonComboBox;
    QPushButton *backButton_2;
    QLabel *label_26;
    QLabel *label_27;
    QComboBox *driveComboBox;
    QLabel *label_28;
    QLabel *label_29;
    QLineEdit *powerLineEdit;
    QPushButton *continueButton_2;
    QLabel *label_30;
    QLabel *label_31;
    QLabel *label_32;
    QLabel *label_8;
    QWidget *widget_2;
    QWidget *page_3;
    QPushButton *silverColorButton;
    QLabel *label_34;
    QLabel *label_35;
    QPushButton *goldenColorButton;
    QPushButton *whiteColorButton;
    QLabel *label_36;
    QPushButton *backButton_3;
    QLabel *label_37;
    QPushButton *greenColorButton;
    QPushButton *orangeColorButton;
    QPushButton *blueColorButton;
    QPushButton *darkBlueColorButton;
    QPushButton *yellowColorButton;
    QPushButton *darkPurpleColorButton;
    QLabel *label_21;
    QLabel *label_38;
    QPushButton *grayColorButton;
    QPushButton *purpleColorButton;
    QPushButton *pinkColorButton;
    QPushButton *redColorButton;
    QLineEdit *mileageLineEdit;
    QLabel *colorLabel;
    QPushButton *brownColorButton;
    QPushButton *blackColorButton;
    QPushButton *beigeColorButton;
    QPushButton *continueButton_3;
    QComboBox *buyingYearComboBox;
    QLabel *label_9;
    QWidget *widget_3;
    QWidget *page_4;
    QPushButton *backButton_4;
    QLabel *label_40;
    QLabel *label_41;
    QLabel *label_22;
    QPushButton *carLeftPhotoButton;
    QPushButton *carRightPhotoButton;
    QPushButton *carBehindPhotoButton;
    QPushButton *carFrontPhotoButton;
    QPushButton *carBonnetPhotoButton;
    QPushButton *carTrunkPhotoButton;
    QLabel *label;
    QLabel *label_23;
    QLabel *label_2;
    QTextEdit *descriptionTextEdit;
    QPushButton *completeButton;
    QLabel *label_10;
    QWidget *widget_4;

    void setupUi(QDialog *AddingAnAd)
    {
        if (AddingAnAd->objectName().isEmpty())
            AddingAnAd->setObjectName(QString::fromUtf8("AddingAnAd"));
        AddingAnAd->resize(800, 600);
        stackedWidget = new QStackedWidget(AddingAnAd);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 800, 600));
        stackedWidget->setLayoutDirection(Qt::LeftToRight);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setStyleSheet(QString::fromUtf8("background-color: rgb(51, 51, 51);"));
        headerLabel = new QLabel(page);
        headerLabel->setObjectName(QString::fromUtf8("headerLabel"));
        headerLabel->setGeometry(QRect(110, 80, 481, 31));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setItalic(false);
        headerLabel->setFont(font);
        headerLabel->setStyleSheet(QString::fromUtf8("font: 700 20pt \"Arial\";\n"
"background-color: rgb(255, 255, 255);"));
        markLabel = new QLabel(page);
        markLabel->setObjectName(QString::fromUtf8("markLabel"));
        markLabel->setGeometry(QRect(110, 140, 111, 21));
        QFont font1;
        font1.setPointSize(12);
        markLabel->setFont(font1);
        markLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        markLabel->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        modelLabel = new QLabel(page);
        modelLabel->setObjectName(QString::fromUtf8("modelLabel"));
        modelLabel->setGeometry(QRect(110, 220, 111, 21));
        modelLabel->setFont(font1);
        modelLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        modelLabel->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        label_4 = new QLabel(page);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(110, 110, 550, 2));
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(51, 51, 51);"));
        label_4->setFrameShape(QFrame::Box);
        markLineEdit = new QLineEdit(page);
        markLineEdit->setObjectName(QString::fromUtf8("markLineEdit"));
        markLineEdit->setGeometry(QRect(110, 170, 171, 21));
        markLineEdit->setFont(font1);
        markLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        markLineEdit->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        modelLineEdit = new QLineEdit(page);
        modelLineEdit->setObjectName(QString::fromUtf8("modelLineEdit"));
        modelLineEdit->setGeometry(QRect(110, 250, 171, 21));
        modelLineEdit->setFont(font1);
        modelLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        modelLineEdit->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        backButton = new QPushButton(page);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(10, 10, 31, 31));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/backIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        backButton->setIcon(icon);
        backButton->setIconSize(QSize(30, 30));
        backButton->setAutoDefault(false);
        backButton->setFlat(true);
        label_5 = new QLabel(page);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(110, 300, 111, 21));
        label_5->setFont(font1);
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_5->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        label_6 = new QLabel(page);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(110, 380, 111, 21));
        label_6->setFont(font1);
        label_6->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_6->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        bodyComboBox = new QComboBox(page);
        bodyComboBox->setObjectName(QString::fromUtf8("bodyComboBox"));
        bodyComboBox->setGeometry(QRect(110, 410, 131, 22));
        bodyComboBox->setFont(font1);
        bodyComboBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        continueButton = new QPushButton(page);
        continueButton->setObjectName(QString::fromUtf8("continueButton"));
        continueButton->setGeometry(QRect(580, 480, 81, 21));
        continueButton->setLayoutDirection(Qt::RightToLeft);
        continueButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/next.png"), QSize(), QIcon::Normal, QIcon::Off);
        continueButton->setIcon(icon1);
        continueButton->setFlat(false);
        prodYearComboBox = new QComboBox(page);
        prodYearComboBox->setObjectName(QString::fromUtf8("prodYearComboBox"));
        prodYearComboBox->setGeometry(QRect(110, 330, 72, 20));
        prodYearComboBox->setFont(font1);
        prodYearComboBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_7 = new QLabel(page);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(110, 460, 550, 2));
        label_7->setStyleSheet(QString::fromUtf8("background-color: rgb(51, 51, 51);"));
        label_7->setFrameShape(QFrame::Box);
        widget = new QWidget(page);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(50, 50, 700, 500));
        widget->setStyleSheet(QString::fromUtf8("background-image: url(:/addAdPHO.png);"));
        stackedWidget->addWidget(page);
        widget->raise();
        headerLabel->raise();
        markLabel->raise();
        modelLabel->raise();
        label_4->raise();
        markLineEdit->raise();
        modelLineEdit->raise();
        backButton->raise();
        label_5->raise();
        label_6->raise();
        bodyComboBox->raise();
        continueButton->raise();
        prodYearComboBox->raise();
        label_7->raise();
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        page_2->setStyleSheet(QString::fromUtf8("background-color: rgb(51, 51, 51);"));
        engineComboBox = new QComboBox(page_2);
        engineComboBox->setObjectName(QString::fromUtf8("engineComboBox"));
        engineComboBox->setGeometry(QRect(110, 170, 131, 22));
        engineComboBox->setFont(font1);
        engineComboBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        transmissonComboBox = new QComboBox(page_2);
        transmissonComboBox->setObjectName(QString::fromUtf8("transmissonComboBox"));
        transmissonComboBox->setGeometry(QRect(110, 330, 131, 22));
        transmissonComboBox->setFont(font1);
        transmissonComboBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        backButton_2 = new QPushButton(page_2);
        backButton_2->setObjectName(QString::fromUtf8("backButton_2"));
        backButton_2->setGeometry(QRect(10, 10, 31, 31));
        backButton_2->setIcon(icon);
        backButton_2->setIconSize(QSize(30, 30));
        backButton_2->setAutoDefault(false);
        backButton_2->setFlat(true);
        label_26 = new QLabel(page_2);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(110, 140, 111, 21));
        label_26->setFont(font1);
        label_26->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_26->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        label_27 = new QLabel(page_2);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(110, 80, 491, 31));
        label_27->setFont(font);
        label_27->setStyleSheet(QString::fromUtf8("font: 700 20pt \"Arial\";\n"
"background-color: rgb(255, 255, 255);"));
        driveComboBox = new QComboBox(page_2);
        driveComboBox->setObjectName(QString::fromUtf8("driveComboBox"));
        driveComboBox->setGeometry(QRect(110, 250, 131, 22));
        driveComboBox->setFont(font1);
        driveComboBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_28 = new QLabel(page_2);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(110, 300, 141, 21));
        label_28->setFont(font1);
        label_28->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_28->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        label_29 = new QLabel(page_2);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setGeometry(QRect(110, 220, 111, 21));
        label_29->setFont(font1);
        label_29->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_29->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        powerLineEdit = new QLineEdit(page_2);
        powerLineEdit->setObjectName(QString::fromUtf8("powerLineEdit"));
        powerLineEdit->setGeometry(QRect(110, 410, 81, 21));
        powerLineEdit->setFont(font1);
        powerLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        powerLineEdit->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        continueButton_2 = new QPushButton(page_2);
        continueButton_2->setObjectName(QString::fromUtf8("continueButton_2"));
        continueButton_2->setGeometry(QRect(580, 480, 81, 21));
        continueButton_2->setLayoutDirection(Qt::RightToLeft);
        continueButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        continueButton_2->setIcon(icon1);
        continueButton_2->setFlat(false);
        label_30 = new QLabel(page_2);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setGeometry(QRect(110, 110, 550, 2));
        label_30->setStyleSheet(QString::fromUtf8("background-color: rgb(51, 51, 51);"));
        label_30->setFrameShape(QFrame::NoFrame);
        label_31 = new QLabel(page_2);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setGeometry(QRect(110, 380, 141, 21));
        label_31->setFont(font1);
        label_31->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_31->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        label_32 = new QLabel(page_2);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setGeometry(QRect(200, 410, 141, 21));
        label_32->setFont(font1);
        label_32->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_32->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        label_8 = new QLabel(page_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(110, 460, 550, 2));
        label_8->setStyleSheet(QString::fromUtf8("background-color: rgb(51, 51, 51);"));
        label_8->setFrameShape(QFrame::Box);
        widget_2 = new QWidget(page_2);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(50, 50, 700, 500));
        widget_2->setStyleSheet(QString::fromUtf8("background-image: url(:/addAdPHO.png);"));
        stackedWidget->addWidget(page_2);
        widget_2->raise();
        engineComboBox->raise();
        transmissonComboBox->raise();
        backButton_2->raise();
        label_26->raise();
        label_27->raise();
        driveComboBox->raise();
        label_28->raise();
        label_29->raise();
        powerLineEdit->raise();
        continueButton_2->raise();
        label_30->raise();
        label_31->raise();
        label_32->raise();
        label_8->raise();
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        page_3->setStyleSheet(QString::fromUtf8("background-color: rgb(51, 51, 51);"));
        silverColorButton = new QPushButton(page_3);
        silverColorButton->setObjectName(QString::fromUtf8("silverColorButton"));
        silverColorButton->setGeometry(QRect(140, 190, 21, 21));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/silverColor.png"), QSize(), QIcon::Normal, QIcon::Off);
        silverColorButton->setIcon(icon2);
        silverColorButton->setIconSize(QSize(21, 21));
        silverColorButton->setFlat(true);
        label_34 = new QLabel(page_3);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setGeometry(QRect(110, 370, 191, 21));
        label_34->setFont(font1);
        label_34->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_34->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        label_35 = new QLabel(page_3);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setGeometry(QRect(220, 310, 51, 21));
        label_35->setFont(font1);
        label_35->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_35->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        goldenColorButton = new QPushButton(page_3);
        goldenColorButton->setObjectName(QString::fromUtf8("goldenColorButton"));
        goldenColorButton->setGeometry(QRect(260, 190, 21, 21));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/goldenColor.png"), QSize(), QIcon::Normal, QIcon::Off);
        goldenColorButton->setIcon(icon3);
        goldenColorButton->setIconSize(QSize(21, 21));
        goldenColorButton->setFlat(true);
        whiteColorButton = new QPushButton(page_3);
        whiteColorButton->setObjectName(QString::fromUtf8("whiteColorButton"));
        whiteColorButton->setGeometry(QRect(110, 190, 21, 21));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/whiteColor.png"), QSize(), QIcon::Normal, QIcon::Off);
        whiteColorButton->setIcon(icon4);
        whiteColorButton->setIconSize(QSize(21, 21));
        whiteColorButton->setFlat(true);
        label_36 = new QLabel(page_3);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        label_36->setGeometry(QRect(110, 110, 550, 2));
        label_36->setStyleSheet(QString::fromUtf8("background-color: rgb(51, 51, 51);"));
        label_36->setFrameShape(QFrame::NoFrame);
        backButton_3 = new QPushButton(page_3);
        backButton_3->setObjectName(QString::fromUtf8("backButton_3"));
        backButton_3->setGeometry(QRect(10, 10, 31, 31));
        backButton_3->setIcon(icon);
        backButton_3->setIconSize(QSize(30, 30));
        backButton_3->setAutoDefault(false);
        backButton_3->setFlat(true);
        label_37 = new QLabel(page_3);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        label_37->setGeometry(QRect(110, 80, 561, 31));
        label_37->setFont(font);
        label_37->setStyleSheet(QString::fromUtf8("font: 700 20pt \"Arial\";\n"
"background-color: rgb(255, 255, 255);"));
        greenColorButton = new QPushButton(page_3);
        greenColorButton->setObjectName(QString::fromUtf8("greenColorButton"));
        greenColorButton->setGeometry(QRect(200, 220, 21, 21));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/greenColor.png"), QSize(), QIcon::Normal, QIcon::Off);
        greenColorButton->setIcon(icon5);
        greenColorButton->setIconSize(QSize(21, 21));
        greenColorButton->setFlat(true);
        orangeColorButton = new QPushButton(page_3);
        orangeColorButton->setObjectName(QString::fromUtf8("orangeColorButton"));
        orangeColorButton->setGeometry(QRect(320, 190, 21, 21));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/orangeColor.png"), QSize(), QIcon::Normal, QIcon::Off);
        orangeColorButton->setIcon(icon6);
        orangeColorButton->setIconSize(QSize(21, 21));
        orangeColorButton->setFlat(true);
        blueColorButton = new QPushButton(page_3);
        blueColorButton->setObjectName(QString::fromUtf8("blueColorButton"));
        blueColorButton->setGeometry(QRect(230, 220, 21, 21));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/blueColor.png"), QSize(), QIcon::Normal, QIcon::Off);
        blueColorButton->setIcon(icon7);
        blueColorButton->setIconSize(QSize(21, 21));
        blueColorButton->setFlat(true);
        darkBlueColorButton = new QPushButton(page_3);
        darkBlueColorButton->setObjectName(QString::fromUtf8("darkBlueColorButton"));
        darkBlueColorButton->setGeometry(QRect(260, 220, 21, 21));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/darkBlueColor.png"), QSize(), QIcon::Normal, QIcon::Off);
        darkBlueColorButton->setIcon(icon8);
        darkBlueColorButton->setIconSize(QSize(21, 21));
        darkBlueColorButton->setFlat(true);
        yellowColorButton = new QPushButton(page_3);
        yellowColorButton->setObjectName(QString::fromUtf8("yellowColorButton"));
        yellowColorButton->setGeometry(QRect(290, 190, 21, 21));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/yellowColor.png"), QSize(), QIcon::Normal, QIcon::Off);
        yellowColorButton->setIcon(icon9);
        yellowColorButton->setIconSize(QSize(21, 21));
        yellowColorButton->setFlat(true);
        darkPurpleColorButton = new QPushButton(page_3);
        darkPurpleColorButton->setObjectName(QString::fromUtf8("darkPurpleColorButton"));
        darkPurpleColorButton->setGeometry(QRect(290, 220, 21, 21));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/darkPurpleColor.png"), QSize(), QIcon::Normal, QIcon::Off);
        darkPurpleColorButton->setIcon(icon10);
        darkPurpleColorButton->setIconSize(QSize(21, 21));
        darkPurpleColorButton->setFlat(true);
        label_21 = new QLabel(page_3);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(110, 160, 151, 21));
        label_21->setFont(font1);
        label_21->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_21->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        label_38 = new QLabel(page_3);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        label_38->setGeometry(QRect(110, 280, 111, 21));
        label_38->setFont(font1);
        label_38->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_38->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        grayColorButton = new QPushButton(page_3);
        grayColorButton->setObjectName(QString::fromUtf8("grayColorButton"));
        grayColorButton->setGeometry(QRect(170, 190, 21, 21));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/grayColor.png"), QSize(), QIcon::Normal, QIcon::Off);
        grayColorButton->setIcon(icon11);
        grayColorButton->setIconSize(QSize(21, 21));
        grayColorButton->setFlat(true);
        purpleColorButton = new QPushButton(page_3);
        purpleColorButton->setObjectName(QString::fromUtf8("purpleColorButton"));
        purpleColorButton->setGeometry(QRect(170, 220, 21, 21));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/purpleColor.png"), QSize(), QIcon::Normal, QIcon::Off);
        purpleColorButton->setIcon(icon12);
        purpleColorButton->setIconSize(QSize(21, 21));
        purpleColorButton->setFlat(true);
        pinkColorButton = new QPushButton(page_3);
        pinkColorButton->setObjectName(QString::fromUtf8("pinkColorButton"));
        pinkColorButton->setGeometry(QRect(110, 220, 21, 21));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/pinkColor.png"), QSize(), QIcon::Normal, QIcon::Off);
        pinkColorButton->setIcon(icon13);
        pinkColorButton->setIconSize(QSize(21, 21));
        pinkColorButton->setFlat(true);
        redColorButton = new QPushButton(page_3);
        redColorButton->setObjectName(QString::fromUtf8("redColorButton"));
        redColorButton->setGeometry(QRect(140, 220, 21, 21));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/redColor.png"), QSize(), QIcon::Normal, QIcon::Off);
        redColorButton->setIcon(icon14);
        redColorButton->setIconSize(QSize(21, 21));
        redColorButton->setFlat(true);
        mileageLineEdit = new QLineEdit(page_3);
        mileageLineEdit->setObjectName(QString::fromUtf8("mileageLineEdit"));
        mileageLineEdit->setGeometry(QRect(110, 310, 101, 21));
        mileageLineEdit->setFont(font1);
        mileageLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        mileageLineEdit->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        colorLabel = new QLabel(page_3);
        colorLabel->setObjectName(QString::fromUtf8("colorLabel"));
        colorLabel->setGeometry(QRect(240, 160, 151, 21));
        colorLabel->setFont(font1);
        colorLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        colorLabel->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        brownColorButton = new QPushButton(page_3);
        brownColorButton->setObjectName(QString::fromUtf8("brownColorButton"));
        brownColorButton->setGeometry(QRect(230, 190, 21, 21));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/brownColor.png"), QSize(), QIcon::Normal, QIcon::Off);
        brownColorButton->setIcon(icon15);
        brownColorButton->setIconSize(QSize(21, 21));
        brownColorButton->setFlat(true);
        blackColorButton = new QPushButton(page_3);
        blackColorButton->setObjectName(QString::fromUtf8("blackColorButton"));
        blackColorButton->setGeometry(QRect(320, 220, 21, 21));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/blackColor.png"), QSize(), QIcon::Normal, QIcon::Off);
        blackColorButton->setIcon(icon16);
        blackColorButton->setIconSize(QSize(21, 21));
        blackColorButton->setFlat(true);
        beigeColorButton = new QPushButton(page_3);
        beigeColorButton->setObjectName(QString::fromUtf8("beigeColorButton"));
        beigeColorButton->setGeometry(QRect(200, 190, 21, 21));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/beigeColor.png"), QSize(), QIcon::Normal, QIcon::Off);
        beigeColorButton->setIcon(icon17);
        beigeColorButton->setIconSize(QSize(21, 21));
        beigeColorButton->setFlat(true);
        continueButton_3 = new QPushButton(page_3);
        continueButton_3->setObjectName(QString::fromUtf8("continueButton_3"));
        continueButton_3->setGeometry(QRect(580, 480, 81, 21));
        continueButton_3->setLayoutDirection(Qt::RightToLeft);
        continueButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        continueButton_3->setIcon(icon1);
        continueButton_3->setFlat(false);
        buyingYearComboBox = new QComboBox(page_3);
        buyingYearComboBox->setObjectName(QString::fromUtf8("buyingYearComboBox"));
        buyingYearComboBox->setGeometry(QRect(110, 400, 72, 20));
        buyingYearComboBox->setFont(font1);
        buyingYearComboBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_9 = new QLabel(page_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(110, 460, 550, 2));
        label_9->setStyleSheet(QString::fromUtf8("background-color: rgb(51, 51, 51);"));
        label_9->setFrameShape(QFrame::Box);
        widget_3 = new QWidget(page_3);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(50, 50, 700, 500));
        widget_3->setStyleSheet(QString::fromUtf8("background-image: url(:/addAdPHO.png);"));
        stackedWidget->addWidget(page_3);
        widget_3->raise();
        silverColorButton->raise();
        label_34->raise();
        label_35->raise();
        goldenColorButton->raise();
        whiteColorButton->raise();
        label_36->raise();
        backButton_3->raise();
        label_37->raise();
        greenColorButton->raise();
        orangeColorButton->raise();
        blueColorButton->raise();
        darkBlueColorButton->raise();
        yellowColorButton->raise();
        darkPurpleColorButton->raise();
        label_21->raise();
        label_38->raise();
        grayColorButton->raise();
        purpleColorButton->raise();
        pinkColorButton->raise();
        redColorButton->raise();
        mileageLineEdit->raise();
        colorLabel->raise();
        brownColorButton->raise();
        blackColorButton->raise();
        beigeColorButton->raise();
        continueButton_3->raise();
        buyingYearComboBox->raise();
        label_9->raise();
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        page_4->setStyleSheet(QString::fromUtf8("background-color: rgb(51, 51, 51);"));
        backButton_4 = new QPushButton(page_4);
        backButton_4->setObjectName(QString::fromUtf8("backButton_4"));
        backButton_4->setGeometry(QRect(10, 10, 31, 31));
        backButton_4->setIcon(icon);
        backButton_4->setIconSize(QSize(30, 30));
        backButton_4->setAutoDefault(false);
        backButton_4->setFlat(true);
        label_40 = new QLabel(page_4);
        label_40->setObjectName(QString::fromUtf8("label_40"));
        label_40->setGeometry(QRect(110, 80, 551, 31));
        label_40->setFont(font);
        label_40->setStyleSheet(QString::fromUtf8("font: 700 20pt \"Arial\";\n"
"background-color: rgb(255, 255, 255);\n"
""));
        label_41 = new QLabel(page_4);
        label_41->setObjectName(QString::fromUtf8("label_41"));
        label_41->setGeometry(QRect(110, 110, 550, 2));
        label_41->setStyleSheet(QString::fromUtf8("background-color: rgb(51, 51, 51);"));
        label_41->setFrameShape(QFrame::NoFrame);
        label_22 = new QLabel(page_4);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(110, 140, 191, 21));
        label_22->setFont(font1);
        label_22->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_22->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        carLeftPhotoButton = new QPushButton(page_4);
        carLeftPhotoButton->setObjectName(QString::fromUtf8("carLeftPhotoButton"));
        carLeftPhotoButton->setGeometry(QRect(190, 190, 65, 65));
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/carPhotoLeft.png"), QSize(), QIcon::Normal, QIcon::Off);
        carLeftPhotoButton->setIcon(icon18);
        carLeftPhotoButton->setIconSize(QSize(65, 65));
        carLeftPhotoButton->setFlat(true);
        carRightPhotoButton = new QPushButton(page_4);
        carRightPhotoButton->setObjectName(QString::fromUtf8("carRightPhotoButton"));
        carRightPhotoButton->setGeometry(QRect(110, 190, 65, 65));
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/carPhotoRight.png"), QSize(), QIcon::Normal, QIcon::Off);
        carRightPhotoButton->setIcon(icon19);
        carRightPhotoButton->setIconSize(QSize(65, 65));
        carRightPhotoButton->setFlat(true);
        carBehindPhotoButton = new QPushButton(page_4);
        carBehindPhotoButton->setObjectName(QString::fromUtf8("carBehindPhotoButton"));
        carBehindPhotoButton->setGeometry(QRect(270, 190, 65, 65));
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/carPhotoBehind.png"), QSize(), QIcon::Normal, QIcon::Off);
        carBehindPhotoButton->setIcon(icon20);
        carBehindPhotoButton->setIconSize(QSize(65, 65));
        carBehindPhotoButton->setFlat(true);
        carFrontPhotoButton = new QPushButton(page_4);
        carFrontPhotoButton->setObjectName(QString::fromUtf8("carFrontPhotoButton"));
        carFrontPhotoButton->setGeometry(QRect(350, 190, 65, 65));
        QIcon icon21;
        icon21.addFile(QString::fromUtf8(":/carPhotoFront.png"), QSize(), QIcon::Normal, QIcon::Off);
        carFrontPhotoButton->setIcon(icon21);
        carFrontPhotoButton->setIconSize(QSize(65, 65));
        carFrontPhotoButton->setFlat(true);
        carBonnetPhotoButton = new QPushButton(page_4);
        carBonnetPhotoButton->setObjectName(QString::fromUtf8("carBonnetPhotoButton"));
        carBonnetPhotoButton->setGeometry(QRect(430, 190, 65, 65));
        QIcon icon22;
        icon22.addFile(QString::fromUtf8(":/carPhotoBonnet.png"), QSize(), QIcon::Normal, QIcon::Off);
        carBonnetPhotoButton->setIcon(icon22);
        carBonnetPhotoButton->setIconSize(QSize(65, 65));
        carBonnetPhotoButton->setFlat(true);
        carTrunkPhotoButton = new QPushButton(page_4);
        carTrunkPhotoButton->setObjectName(QString::fromUtf8("carTrunkPhotoButton"));
        carTrunkPhotoButton->setGeometry(QRect(510, 190, 65, 65));
        QIcon icon23;
        icon23.addFile(QString::fromUtf8(":/carPhotoTrunk.png"), QSize(), QIcon::Normal, QIcon::Off);
        carTrunkPhotoButton->setIcon(icon23);
        carTrunkPhotoButton->setIconSize(QSize(65, 65));
        carTrunkPhotoButton->setFlat(true);
        label = new QLabel(page_4);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 160, 471, 31));
        QFont font2;
        label->setFont(font2);
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(107, 107, 107);"));
        label->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        label_23 = new QLabel(page_4);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(110, 270, 191, 21));
        label_23->setFont(font1);
        label_23->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_23->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        label_2 = new QLabel(page_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(110, 290, 441, 16));
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(107, 107, 107);\n"
"background-color: rgb(255, 255, 255);"));
        label_2->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        descriptionTextEdit = new QTextEdit(page_4);
        descriptionTextEdit->setObjectName(QString::fromUtf8("descriptionTextEdit"));
        descriptionTextEdit->setGeometry(QRect(110, 310, 531, 121));
        descriptionTextEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        completeButton = new QPushButton(page_4);
        completeButton->setObjectName(QString::fromUtf8("completeButton"));
        completeButton->setGeometry(QRect(580, 480, 81, 21));
        completeButton->setLayoutDirection(Qt::RightToLeft);
        completeButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 127);"));
        completeButton->setIcon(icon1);
        completeButton->setFlat(false);
        label_10 = new QLabel(page_4);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(110, 460, 550, 2));
        label_10->setStyleSheet(QString::fromUtf8("background-color: rgb(51, 51, 51);"));
        label_10->setFrameShape(QFrame::Box);
        widget_4 = new QWidget(page_4);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setGeometry(QRect(50, 50, 700, 500));
        widget_4->setStyleSheet(QString::fromUtf8("background-image: url(:/addAdPHO.png);"));
        stackedWidget->addWidget(page_4);
        widget_4->raise();
        backButton_4->raise();
        label_40->raise();
        label_41->raise();
        label_22->raise();
        carLeftPhotoButton->raise();
        carRightPhotoButton->raise();
        carBehindPhotoButton->raise();
        carFrontPhotoButton->raise();
        carBonnetPhotoButton->raise();
        carTrunkPhotoButton->raise();
        label->raise();
        label_23->raise();
        label_2->raise();
        descriptionTextEdit->raise();
        completeButton->raise();
        label_10->raise();

        retranslateUi(AddingAnAd);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(AddingAnAd);
    } // setupUi

    void retranslateUi(QDialog *AddingAnAd)
    {
        AddingAnAd->setWindowTitle(QCoreApplication::translate("AddingAnAd", "Dialog", nullptr));
        headerLabel->setText(QCoreApplication::translate("AddingAnAd", "\320\244\320\276\321\200\320\274\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265 \320\276\320\261\321\212\321\217\320\262\320\273\320\265\320\275\320\270\321\217", nullptr));
        markLabel->setText(QCoreApplication::translate("AddingAnAd", "\320\234\320\260\321\200\320\272\320\260:", nullptr));
        modelLabel->setText(QCoreApplication::translate("AddingAnAd", "\320\234\320\276\320\264\320\265\320\273\321\214:", nullptr));
        label_4->setText(QString());
        backButton->setText(QString());
        label_5->setText(QCoreApplication::translate("AddingAnAd", "\320\223\320\276\320\264 \320\262\321\213\320\277\321\203\321\201\320\272\320\260: ", nullptr));
        label_6->setText(QCoreApplication::translate("AddingAnAd", "\320\242\320\270\320\277 \320\272\321\203\320\267\320\276\320\262\320\260:", nullptr));
        continueButton->setText(QCoreApplication::translate("AddingAnAd", "\320\224\320\260\320\273\320\265\320\265", nullptr));
        continueButton->setProperty("Alignment ", QVariant(QCoreApplication::translate("AddingAnAd", "AlignRight", nullptr)));
        label_7->setText(QString());
        backButton_2->setText(QString());
        label_26->setText(QCoreApplication::translate("AddingAnAd", "\320\224\320\262\320\270\320\263\320\260\321\202\320\265\320\273\321\214:", nullptr));
        label_27->setText(QCoreApplication::translate("AddingAnAd", "\320\244\320\276\321\200\320\274\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265 \320\276\320\261\321\212\321\217\320\262\320\273\320\265\320\275\320\270\321\217", nullptr));
        label_28->setText(QCoreApplication::translate("AddingAnAd", "\320\232\320\276\321\200\320\276\320\261\320\272\320\260 \320\277\320\265\321\200\320\265\320\264\320\260\321\207:", nullptr));
        label_29->setText(QCoreApplication::translate("AddingAnAd", "\320\237\321\200\320\270\320\262\320\276\320\264:", nullptr));
        continueButton_2->setText(QCoreApplication::translate("AddingAnAd", "\320\224\320\260\320\273\320\265\320\265", nullptr));
        continueButton_2->setProperty("Alignment ", QVariant(QCoreApplication::translate("AddingAnAd", "AlignRight", nullptr)));
        label_30->setText(QString());
        label_31->setText(QCoreApplication::translate("AddingAnAd", "\320\234\320\276\321\211\320\275\320\276\321\201\321\202\321\214:", nullptr));
        label_32->setText(QCoreApplication::translate("AddingAnAd", "\320\273.\321\201", nullptr));
        label_8->setText(QString());
#if QT_CONFIG(tooltip)
        silverColorButton->setToolTip(QCoreApplication::translate("AddingAnAd", "\320\241\320\265\321\200\320\265\320\261\321\200\320\270\321\201\321\202\321\213\320\271", nullptr));
#endif // QT_CONFIG(tooltip)
        silverColorButton->setText(QString());
        label_34->setText(QCoreApplication::translate("AddingAnAd", "\320\223\320\276\320\264 \320\277\320\276\320\272\321\203\320\277\320\272\320\270 \320\260\320\262\321\202\320\276\320\274\320\276\320\261\320\270\320\273\321\217:", nullptr));
        label_35->setText(QCoreApplication::translate("AddingAnAd", "\320\272\320\274", nullptr));
#if QT_CONFIG(tooltip)
        goldenColorButton->setToolTip(QCoreApplication::translate("AddingAnAd", "\320\227\320\276\320\273\320\276\321\202\320\270\321\201\321\202\321\213\320\271", nullptr));
#endif // QT_CONFIG(tooltip)
        goldenColorButton->setText(QString());
#if QT_CONFIG(tooltip)
        whiteColorButton->setToolTip(QCoreApplication::translate("AddingAnAd", "\320\221\320\265\320\273\321\213\320\271", nullptr));
#endif // QT_CONFIG(tooltip)
        whiteColorButton->setText(QString());
        label_36->setText(QString());
        backButton_3->setText(QString());
        label_37->setText(QCoreApplication::translate("AddingAnAd", "\320\244\320\276\321\200\320\274\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265 \320\276\320\261\321\212\321\217\320\262\320\273\320\265\320\275\320\270\321\217", nullptr));
#if QT_CONFIG(tooltip)
        greenColorButton->setToolTip(QCoreApplication::translate("AddingAnAd", "\320\227\320\265\320\273\320\265\320\275\321\213\320\271", nullptr));
#endif // QT_CONFIG(tooltip)
        greenColorButton->setText(QString());
#if QT_CONFIG(tooltip)
        orangeColorButton->setToolTip(QCoreApplication::translate("AddingAnAd", "\320\236\321\200\320\260\320\275\320\266\320\265\320\262\321\213\320\271", nullptr));
#endif // QT_CONFIG(tooltip)
        orangeColorButton->setText(QString());
#if QT_CONFIG(tooltip)
        blueColorButton->setToolTip(QCoreApplication::translate("AddingAnAd", "\320\223\320\276\320\273\321\203\320\261\320\276\320\271", nullptr));
#endif // QT_CONFIG(tooltip)
        blueColorButton->setText(QString());
#if QT_CONFIG(tooltip)
        darkBlueColorButton->setToolTip(QCoreApplication::translate("AddingAnAd", "\320\241\320\270\320\275\320\270\320\271", nullptr));
#endif // QT_CONFIG(tooltip)
        darkBlueColorButton->setText(QString());
#if QT_CONFIG(tooltip)
        yellowColorButton->setToolTip(QCoreApplication::translate("AddingAnAd", "\320\226\320\265\320\273\321\202\321\213\320\271", nullptr));
#endif // QT_CONFIG(tooltip)
        yellowColorButton->setText(QString());
#if QT_CONFIG(tooltip)
        darkPurpleColorButton->setToolTip(QCoreApplication::translate("AddingAnAd", "\320\244\320\270\320\276\320\273\320\265\321\202\320\276\320\262\321\213\320\271", nullptr));
#endif // QT_CONFIG(tooltip)
        darkPurpleColorButton->setText(QString());
        label_21->setText(QCoreApplication::translate("AddingAnAd", "\320\246\320\262\320\265\321\202 \320\260\320\262\321\202\320\276\320\274\320\276\320\261\320\270\320\273\321\217:", nullptr));
        label_38->setText(QCoreApplication::translate("AddingAnAd", "\320\237\321\200\320\276\320\261\320\265\320\263:", nullptr));
#if QT_CONFIG(tooltip)
        grayColorButton->setToolTip(QCoreApplication::translate("AddingAnAd", "\320\241\320\265\321\200\321\213\320\271", nullptr));
#endif // QT_CONFIG(tooltip)
        grayColorButton->setText(QString());
#if QT_CONFIG(tooltip)
        purpleColorButton->setToolTip(QCoreApplication::translate("AddingAnAd", "\320\237\321\203\321\200\320\277\321\203\321\200\320\275\321\213\320\271", nullptr));
#endif // QT_CONFIG(tooltip)
        purpleColorButton->setText(QString());
#if QT_CONFIG(tooltip)
        pinkColorButton->setToolTip(QCoreApplication::translate("AddingAnAd", "\320\240\320\276\320\267\320\276\320\262\321\213\320\271", nullptr));
#endif // QT_CONFIG(tooltip)
        pinkColorButton->setText(QString());
#if QT_CONFIG(tooltip)
        redColorButton->setToolTip(QCoreApplication::translate("AddingAnAd", "\320\232\321\200\320\260\321\201\320\275\321\213\320\271", nullptr));
#endif // QT_CONFIG(tooltip)
        redColorButton->setText(QString());
        mileageLineEdit->setText(QString());
        colorLabel->setText(QString());
#if QT_CONFIG(tooltip)
        brownColorButton->setToolTip(QCoreApplication::translate("AddingAnAd", "\320\232\320\276\321\200\320\270\321\207\320\275\320\265\320\262\321\213\320\271", nullptr));
#endif // QT_CONFIG(tooltip)
        brownColorButton->setText(QString());
#if QT_CONFIG(tooltip)
        blackColorButton->setToolTip(QCoreApplication::translate("AddingAnAd", "\320\247\320\265\321\200\320\275\321\213\320\271", nullptr));
#endif // QT_CONFIG(tooltip)
        blackColorButton->setText(QString());
#if QT_CONFIG(tooltip)
        beigeColorButton->setToolTip(QCoreApplication::translate("AddingAnAd", "\320\221\320\265\320\266\320\265\320\262\321\213\320\271", nullptr));
#endif // QT_CONFIG(tooltip)
        beigeColorButton->setText(QString());
        continueButton_3->setText(QCoreApplication::translate("AddingAnAd", "\320\224\320\260\320\273\320\265\320\265", nullptr));
        continueButton_3->setProperty("Alignment ", QVariant(QCoreApplication::translate("AddingAnAd", "AlignRight", nullptr)));
        label_9->setText(QString());
        backButton_4->setText(QString());
        label_40->setText(QCoreApplication::translate("AddingAnAd", "\320\244\320\276\321\200\320\274\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265 \320\276\320\261\321\212\321\217\320\262\320\273\320\265\320\275\320\270\321\217", nullptr));
        label_41->setText(QString());
        label_22->setText(QCoreApplication::translate("AddingAnAd", "\320\244\320\276\321\202\320\276\320\263\321\200\320\260\321\204\320\270\320\270 \320\260\320\262\321\202\320\276\320\274\320\276\320\261\320\270\320\273\321\217:", nullptr));
#if QT_CONFIG(tooltip)
        carLeftPhotoButton->setToolTip(QCoreApplication::translate("AddingAnAd", "\320\222\320\270\320\264 \321\201\320\273\320\265\320\262\320\260", nullptr));
#endif // QT_CONFIG(tooltip)
        carLeftPhotoButton->setText(QString());
#if QT_CONFIG(tooltip)
        carRightPhotoButton->setToolTip(QCoreApplication::translate("AddingAnAd", "\320\222\320\270\320\264 \321\201\320\277\321\200\320\260\320\262\320\260", nullptr));
#endif // QT_CONFIG(tooltip)
        carRightPhotoButton->setText(QString());
#if QT_CONFIG(tooltip)
        carBehindPhotoButton->setToolTip(QCoreApplication::translate("AddingAnAd", "\320\222\320\270\320\264 \321\201\320\267\320\260\320\264\320\270", nullptr));
#endif // QT_CONFIG(tooltip)
        carBehindPhotoButton->setText(QString());
#if QT_CONFIG(tooltip)
        carFrontPhotoButton->setToolTip(QCoreApplication::translate("AddingAnAd", "\320\222\320\270\320\264 \321\201\320\277\320\265\321\200\320\265\320\264\320\270", nullptr));
#endif // QT_CONFIG(tooltip)
        carFrontPhotoButton->setText(QString());
#if QT_CONFIG(tooltip)
        carBonnetPhotoButton->setToolTip(QCoreApplication::translate("AddingAnAd", "\320\222\320\270\320\264 \321\201 \320\276\321\202\320\272\321\200\321\213\321\202\321\213\320\274 \320\272\320\260\320\277\320\276\321\202\320\276\320\274", nullptr));
#endif // QT_CONFIG(tooltip)
        carBonnetPhotoButton->setText(QString());
#if QT_CONFIG(tooltip)
        carTrunkPhotoButton->setToolTip(QCoreApplication::translate("AddingAnAd", "\320\222\320\270\320\264 \321\201 \320\276\321\202\320\272\321\200\321\213\321\202\321\213\320\274 \320\261\320\260\320\263\320\260\320\266\320\275\320\270\320\272\320\276\320\274", nullptr));
#endif // QT_CONFIG(tooltip)
        carTrunkPhotoButton->setText(QString());
        label->setText(QCoreApplication::translate("AddingAnAd", "\320\241\321\204\320\276\321\202\320\276\320\263\321\200\320\260\321\204\320\270\321\200\321\203\320\271\321\202\320\265 \320\260\320\262\321\202\320\276\320\274\320\276\320\261\320\270\320\273\321\214 \320\262 \321\201\320\276\320\276\321\202\320\262\320\265\321\202\321\201\321\202\320\262\320\270\320\270 \321\201 \320\277\321\200\320\265\320\264\320\276\321\201\321\202\320\260\320\262\320\273\320\265\320\275\320\275\321\213\320\274\320\270 \320\270\320\267\320\276\320\261\321\200\320\260\320\266\320\265\320\275\321\217\320\274\320\270.\n"
"\320\223\320\273\320\260\320\262\320\275\320\276\320\265 \321\204\320\276\321\202\320\276 - \320\262\320\270\320\264 \321\201\320\277\320\265\321\200\320\265\320\264\320\270", nullptr));
        label_23->setText(QCoreApplication::translate("AddingAnAd", "\320\236\320\277\320\270\321\201\320\260\320\275\320\270\320\265:", nullptr));
        label_2->setText(QCoreApplication::translate("AddingAnAd", "\320\247\320\265\321\201\321\202\320\275\320\276 \320\270 \321\200\320\260\320\267\320\262\320\265\321\200\320\275\321\203\321\202\320\276 \320\276\320\277\320\270\321\210\320\270\321\202\320\265 \320\222\320\260\321\210 \320\260\320\262\321\202\320\276\320\274\320\276\320\261\320\270\320\273\321\214, \320\265\320\263\320\276 \320\264\320\276\321\201\321\202\320\276\320\270\320\275\321\201\321\202\320\262\320\260 \320\270 \320\275\320\265\320\264\320\276\321\201\321\202\320\260\321\202\320\272\320\270.", nullptr));
        completeButton->setText(QCoreApplication::translate("AddingAnAd", "\320\227\320\260\320\262\320\265\321\200\321\210\320\270\321\202\321\214", nullptr));
        completeButton->setProperty("Alignment ", QVariant(QCoreApplication::translate("AddingAnAd", "AlignRight", nullptr)));
        label_10->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AddingAnAd: public Ui_AddingAnAd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDINGANAD_H

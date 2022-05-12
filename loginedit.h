#ifndef LOGINEDIT_H
#define LOGINEDIT_H

#include <QDialog>
#include <QRegExpValidator>
#include <QtWidgets>

namespace Ui {
class LoginEdit;
}

class LoginEdit : public QDialog
{
    Q_OBJECT

public:
    explicit LoginEdit(QWidget *parent = nullptr);
    ~LoginEdit();

    QString getEditedLogin();

private slots:
    void on_okButton_clicked();

    void on_cancelButton_clicked();

private:
    Ui::LoginEdit *ui;
};

#endif // LOGINEDIT_H

#ifndef PASSWORDEDIT_H
#define PASSWORDEDIT_H

#include <QDialog>
#include <QRegExpValidator>
#include <QtWidgets>

namespace Ui {
class PasswordEdit;
}

class PasswordEdit : public QDialog
{
    Q_OBJECT

public:
    explicit PasswordEdit(QWidget *parent = nullptr);
    ~PasswordEdit();

    QString getEditedPassword();

private slots:

    void slotRegPasButtonPressed();
    void slotRegPasButtonReleased();
    void slotRegPasConfirmButtonPressed();
    void slotRegPasConfirmButtonReleased();

    void on_okButton_clicked();

    void on_cancelButton_clicked();

private:
    Ui::PasswordEdit *ui;
};

#endif // PASSWORDEDIT_H

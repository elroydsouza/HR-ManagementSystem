#ifndef LOGINSCREEN_H
#define LOGINSCREEN_H

#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QWidget>

#include <iostream>


namespace Ui {
class loginScreen;
}

class loginScreen : public QWidget
{
    Q_OBJECT

public:
    explicit loginScreen(QWidget *parent = nullptr);
    ~loginScreen();

private slots:
    void on_btn_login_clicked();

    QString encryptPassword(QString password);

private:
    Ui::loginScreen *ui;
};

#endif // LOGINSCREEN_H

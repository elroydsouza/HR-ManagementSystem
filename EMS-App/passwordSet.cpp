#include "passwordSet.h"
#include "ui_passwordSet.h"
#include "loginScreen.h"

passwordSet::passwordSet(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::passwordSet)
{
    ui->setupUi(this);
}

void passwordSet::run(){
    ui->lbl_email->setText("Logged in as: " + user.getEmail());
}

void passwordSet::acceptUser(User _user){
    user = _user;
}

passwordSet::~passwordSet()
{
    delete ui;
}

void passwordSet::on_btn_set_clicked()
{
    QString encryptedPass = encryptPassword(ui->le_password->text());

    QSqlQuery query;
    query.prepare(QString("UPDATE users "
                          "SET password = :password "
                          "WHERE email = :email"));

    query.bindValue(":email", user.getEmail());
    query.bindValue(":password", encryptedPass);

    query.exec();

    if(query.exec()){
        QMessageBox::information(this,"Success","Password has been successfully updated!");

        loginScreen *openChat = new loginScreen;
        openChat->show();
        close();
    } else {
        QMessageBox::information(this,"Error","Wrong password or email");
    }
}

QString passwordSet::encryptPassword(QString password) {
    int key = 2;
    std::string encryptedPassword;

    std::string standardPassword = password.toStdString();

    for (int charCodeValue : standardPassword) {
        charCodeValue = charCodeValue + key;

        if (charCodeValue >= 128){
            throw std::invalid_argument("Invalid character!");
        }
        encryptedPassword.push_back(charCodeValue);

    }

    password = QString::fromStdString(encryptedPassword);

    return password;
}


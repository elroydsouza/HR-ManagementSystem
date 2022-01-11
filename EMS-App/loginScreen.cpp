#include "loginScreen.h"
#include "ui_loginScreen.h"
#include "menuScreen.h"
#include "user.h"

loginScreen::loginScreen(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::loginScreen)
{
    ui->setupUi(this);
}

loginScreen::~loginScreen()
{
    delete ui;
}

void loginScreen::on_btn_login_clicked()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setUserName("admin");
    db.setPassword("5yHvkrLmMpUNKq5z");
    db.setDatabaseName("emsApp");

    if(db.open()){
        QString username = ui->le_username->text();
        QString password = ui->le_password->text();

        try {
            password = encryptPassword(password);

            QSqlQuery query;
            query.prepare(QString("SELECT * FROM users "
                                  "WHERE username = :username "
                                  "AND password = :password"));

            query.bindValue(":username",username);
            query.bindValue(":password",password);

            query.exec();

            if(query.next()){
                 QMessageBox::information(this,"Success","You are logged in");

                 QSqlQuery query;
                 query.prepare(QString("SELECT userID, firstName, lastName, pfpNo "
                                       "FROM users "
                                       "WHERE username = :username"));

                 query.bindValue(":username",username);
                 query.exec();
                 query.next();

                 int userID = query.value(0).toInt();
                 QString firstName = query.value(1).toString();
                 QString lastName = query.value(2).toString();
                 int profilePicture = query.value(3).toInt();

                 User user = User();
                 user.setUser(userID, username, firstName, lastName, profilePicture);

                 menuScreen *openChat = new menuScreen;
                 openChat->acceptUser(user);
                 openChat->show();
                 openChat->run();
                 close();

             } else {
                 QMessageBox::information(this,"Error","Wrong password or username");
             }
        } catch (std::invalid_argument& ia) {
            QMessageBox::information(this,"Error","Invalid character in password!");
        }

    } else {
        QMessageBox::information(this,"Not Connected","Database is not connected");
    }
}

QString loginScreen::encryptPassword(QString password) {
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

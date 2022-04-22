#include "loginScreen.h"
#include "ui_loginScreen.h"
#include "menuScreen.h"
#include "user.h"
#include "passwordSet.h"

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
    QString email = ui->le_email->text();
    QString password = ui->le_password->text();

    if(email == "admin" && password == "At8.[#"){
        QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
        db.setHostName("127.0.0.1");
        db.setUserName("admin");
        db.setPassword("5yHvkrLmMpUNKq5z");
        db.setDatabaseName("emsApp");
        db.open();

        User user = User();
        user.setUser("1", "admin", "Admin", "Account", 1);

        QMessageBox::information(this,"Success","You are logged in as admin");
        menuScreen *openChat = new menuScreen;
        openChat->acceptUser(user);
        openChat->show();
        openChat->run();
        close();
    } else {

        QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
        db.setHostName("127.0.0.1");
        db.setUserName("admin");
        db.setPassword("5yHvkrLmMpUNKq5z");
        db.setDatabaseName("emsApp");

        if(db.open()){

            if(password == NULL){
                try {
                    QSqlQuery query;

                    query.prepare(QString("SELECT password FROM users "
                                          "WHERE email = :email"));

                    query.bindValue(":email",email);

                    query.exec();
                    if(query.next()){
                        QString passwordStored = query.value(0).toString();
                        if(passwordStored == NULL){
                            User user = User();
                            user.setUser("999999", email, "firstName", "lastName", 2);

                            passwordSet *openChat = new passwordSet;
                            openChat->acceptUser(user);
                            openChat->show();
                            openChat->run();
                            close();
                        } else {
                            QMessageBox::information(this,"Error","Password already set for email!");
                        }
                    } else {
                        QMessageBox::information(this,"Error","Wrong password or email!");
                    }
                } catch (std::invalid_argument& ia) {
                    QMessageBox::information(this,"Error","Invalid character in password!");
                }
            } else {
                try {
                    password = encryptPassword(password);

                    QSqlQuery query;
                    query.prepare(QString("SELECT * FROM users "
                                          "WHERE email = :email "
                                          "AND password = :password"));

                    query.bindValue(":email",email);
                    query.bindValue(":password",password);

                    query.exec();

                    if(query.next()){
                         query.prepare(QString("SELECT employeeID, firstName, lastName, departmentCode "
                                               "FROM users "
                                               "WHERE email = :email"));

                         query.bindValue(":email", email);
                         query.exec();
                         if(query.next()){
                             QString employeeID = query.value(0).toString();
                             QString firstName = query.value(1).toString();
                             QString lastName = query.value(2).toString();
                             QString deptCode = query.value(3).toString();
                             int permLevel = 2;

                             if(deptCode == "DPT943"){
                                 permLevel = 1;
                             }

                             User user = User();
                             user.setUser(employeeID, email, firstName, lastName, permLevel);

                             QMessageBox::information(this,"Success","You are logged in");
                             menuScreen *openChat = new menuScreen;
                             openChat->acceptUser(user);
                             openChat->show();
                             openChat->run();
                             close();
                         } else {
                             QMessageBox::information(this,"Error","User credentials could not be stored");
                         }
                     } else {
                         QMessageBox::information(this,"Error","Wrong password or email");
                     }
                } catch (std::invalid_argument& ia) {
                    QMessageBox::information(this,"Error","Invalid character in password!");
                }
            }

        } else {
            QMessageBox::information(this,"Not Connected","Database is not connected");
        }
    }
}

QString loginScreen::encryptPassword(QString pass) {
    int key = 2;
    std::string encryptedPass;

    std::string standardPass = pass.toStdString();

    for (int charCode : standardPass) {
        charCode = charCode + key;

        if (charCode >= 128){
            throw std::invalid_argument("Invalid character in password!");
        }
        encryptedPass.push_back(charCode);

    }

    pass = QString::fromStdString(encryptedPass);

    return pass;
}

#include "menuScreen.h"
#include "departmentScreen.h"
#include "absenceScreen.h"
#include "scheduleScreen.h"
#include "loginScreen.h"
#include "ui_menuScreen.h"

menuScreen::menuScreen(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::menuScreen)
{
    ui->setupUi(this);
}

void menuScreen::run(){
    ui->lbl_name->setText("Logged in as: " + user.getFullName());

    if(user.getPermLevel() == 2){
        ui->btn_User->setVisible(false);
    }
}

void menuScreen::acceptUser(User _user){
    user = _user;
}

menuScreen::~menuScreen()
{
    delete ui;
}

void menuScreen::on_btn_User_clicked()
{
    employeeScreen *openChat = new employeeScreen;
    openChat->acceptUser(user);
    openChat->show();
    openChat->run();
    close();
}

void menuScreen::on_btn_Department_clicked()
{
    departmentScreen *openChat = new departmentScreen;
    openChat->acceptUser(user);
    openChat->show();
    openChat->run();
    close();
}

void menuScreen::on_btn_absence_clicked()
{
    absenceScreen *openChat = new absenceScreen;
    openChat->acceptUser(user);
    openChat->show();
    openChat->run();
    close();
}

void menuScreen::on_btn_Schedule_clicked()
{
    scheduleScreen *openChat = new scheduleScreen;
    openChat->acceptUser(user);
    openChat->show();
    openChat->run();
    close();
}

void menuScreen::on_btn_logout_clicked()
{
    loginScreen *openChat = new loginScreen;
    openChat->show();
    close();
}

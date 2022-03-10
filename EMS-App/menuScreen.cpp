#include "menuScreen.h"
#include "departmentScreen.h"
#include "absenceScreen.h"
#include "ui_menuScreen.h"

menuScreen::menuScreen(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::menuScreen)
{
    ui->setupUi(this);
}

void menuScreen::run(){
    ui->lbl_name->setText("Logged in as: " + user.getFullName());
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

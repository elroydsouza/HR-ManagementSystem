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
        ui->btn_Department->setText("Departments");
        ui->btn_absence->setText("Absence");
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
    employeeScreen *openUser = new employeeScreen;
    openUser->acceptUser(user);
    openUser->show();
    openUser->run();
    close();
}

void menuScreen::on_btn_Department_clicked()
{
    departmentScreen *openDepartment = new departmentScreen;
    openDepartment->acceptUser(user);
    openDepartment->show();
    openDepartment->run();
    close();
}

void menuScreen::on_btn_absence_clicked()
{
    absenceScreen *openAbsence = new absenceScreen;
    openAbsence->acceptUser(user);
    openAbsence->show();
    openAbsence->run();
    close();
}

void menuScreen::on_btn_Schedule_clicked()
{
    scheduleScreen *openSchedule = new scheduleScreen;
    openSchedule->acceptUser(user);
    openSchedule->show();
    openSchedule->run();
    close();
}

void menuScreen::on_btn_logout_clicked()
{
    loginScreen *openLogin = new loginScreen;
    openLogin->show();
    close();
}

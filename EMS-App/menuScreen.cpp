#include "menuScreen.h"
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

}

#include "loginScreen.h"
#include "ui_loginScreen.h"

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

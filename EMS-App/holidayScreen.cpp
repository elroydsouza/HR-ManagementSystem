#include "holidayScreen.h"
#include "ui_holidayScreen.h"

holidayScreen::holidayScreen(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::holidayScreen)
{
    ui->setupUi(this);
}

holidayScreen::~holidayScreen()
{
    delete ui;
}

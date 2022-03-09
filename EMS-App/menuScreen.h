#ifndef MENUSCREEN_H
#define MENUSCREEN_H

#include "employeeScreen.h"
#include "user.h"
#include <QWidget>

namespace Ui {
class menuScreen;
}

class menuScreen : public QWidget
{
    Q_OBJECT

public:
    explicit menuScreen(QWidget *parent = nullptr);
    void acceptUser(User _user);
    void run();
    ~menuScreen();

private slots:
    void on_btn_User_clicked();

    void on_btn_Department_clicked();

private:
    User user;
    Ui::menuScreen *ui;
};

#endif // MENUSCREEN_H

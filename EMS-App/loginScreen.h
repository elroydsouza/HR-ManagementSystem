#ifndef LOGINSCREEN_H
#define LOGINSCREEN_H

#include <QWidget>

namespace Ui {
class loginScreen;
}

class loginScreen : public QWidget
{
    Q_OBJECT

public:
    explicit loginScreen(QWidget *parent = nullptr);
    ~loginScreen();

private:
    Ui::loginScreen *ui;
};

#endif // LOGINSCREEN_H

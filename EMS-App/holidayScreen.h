#ifndef HOLIDAYSCREEN_H
#define HOLIDAYSCREEN_H

#include <QWidget>

namespace Ui {
class holidayScreen;
}

class holidayScreen : public QWidget
{
    Q_OBJECT

public:
    explicit holidayScreen(QWidget *parent = nullptr);
    ~holidayScreen();

private:
    Ui::holidayScreen *ui;
};

#endif // HOLIDAYSCREEN_H

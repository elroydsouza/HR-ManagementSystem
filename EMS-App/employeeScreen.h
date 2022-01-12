#ifndef EMPLOYEESCREEN_H
#define EMPLOYEESCREEN_H

#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>
#include "user.h"
#include <QWidget>

namespace Ui {
class employeeScreen;
}

class employeeScreen : public QWidget
{
    Q_OBJECT

public:
    explicit employeeScreen(QWidget *parent = nullptr);
    void acceptUser(User _user);
    void run();
    ~employeeScreen();

private slots:
    void on_le_search_returnPressed();

private:
    User user;
    Ui::employeeScreen *ui;
};

#endif // EMPLOYEESCREEN_H

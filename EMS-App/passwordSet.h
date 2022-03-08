#ifndef PASSWORDSET_H
#define PASSWORDSET_H

#include <QtSql>
#include <QSqlDatabase>
#include "user.h"
#include <QWidget>

namespace Ui {
class passwordSet;
}

class passwordSet : public QWidget
{
    Q_OBJECT

public:
    explicit passwordSet(QWidget *parent = nullptr);
    void acceptUser(User _user);
    void run();
    ~passwordSet();

private slots:
    void on_btn_set_clicked();

    QString encryptPassword(QString password);

private:
    User user;
    Ui::passwordSet *ui;
};

#endif // PASSWORDSET_H

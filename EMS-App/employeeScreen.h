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

    void on_btn_search_clicked();

    void on_btn_insert_clicked();

    void on_btn_submit_clicked();

    void clearAllInsert();

    void on_btn_clear_clicked();

    void on_btn_update_clicked();

    void on_btn_back_clicked();

    void on_btn_generateID_clicked();

    void on_tbl_usersUpdate_activated();

    void on_Ubtn_update_clicked();

    void on_btn_delete_clicked();

    void on_Dtbl_users_activated();

    void on_Dbtn_delete_clicked();

    void clearAllDelete();

    void on_btn_save_clicked();

    void on_tbl_users_activated(const QModelIndex &index);

private:
    User user;
    Ui::employeeScreen *ui;
};

#endif // EMPLOYEESCREEN_H

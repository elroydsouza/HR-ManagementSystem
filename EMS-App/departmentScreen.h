#ifndef DEPARTMENTSCREEN_H
#define DEPARTMENTSCREEN_H

#include "user.h"
#include <QWidget>

namespace Ui {
class departmentScreen;
}

class departmentScreen : public QWidget
{
    Q_OBJECT

public:
    explicit departmentScreen(QWidget *parent = nullptr);
    void acceptUser(User _user);
    void run();
    ~departmentScreen();

private slots:
    void on_btn_search_clicked();

    void on_btn_back_clicked();

    void on_btn_maintenance_clicked();

    void on_Mtbl_departments_activated();

    void on_btn_generate_clicked();

    void on_btn_clear_clicked();

    void on_btn_update_clicked();

    void on_btn_insert_clicked();

    void clearAll();

    void on_btn_delete_clicked();

    void on_cb_departments_activated(const QString &arg1);

    void fillDeptComboBox();

    void on_btn_save_clicked();

    void on_le_search_textChanged(const QString &arg1);

private:
    User user;
    Ui::departmentScreen *ui;
};

#endif // DEPARTMENTSCREEN_H

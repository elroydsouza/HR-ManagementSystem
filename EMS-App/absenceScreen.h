#ifndef ABSENCESCREEN_H
#define ABSENCESCREEN_H

#include "user.h"
#include <QWidget>

namespace Ui {
class absenceScreen;
}

class absenceScreen : public QWidget
{
    Q_OBJECT

public:
    explicit absenceScreen(QWidget *parent = nullptr);
    void acceptUser(User _user);
    void run();
    ~absenceScreen();

private slots:
    void on_btn_back_clicked();

    void on_pte_reason_textChanged();

    void on_rb_sick_clicked();

    void on_rb_holiday_clicked();

    void on_Rbtn_request_clicked();

    void on_btn_request_clicked();

    void on_btn_outstandingReq_clicked();

    void on_tbl_sickLeave_activated();

    void on_btn_outstandingApp_clicked();

    void on_tbl_outstandingApp_activated();

    void on_btn_approve_clicked();

    void on_btn_deny_clicked();

    void on_tbl_holidayLeave_activated();

    void on_btn_requestDelete_clicked();

    void on_btn_maintenance_clicked();

    void on_tbl_employees_activated();

    void on_btn_update_clicked();

private:
    User user;
    Ui::absenceScreen *ui;
};

#endif // HOLIDAYSCREEN_H

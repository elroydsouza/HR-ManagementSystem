#ifndef SCHEDULESCREEN_H
#define SCHEDULESCREEN_H

#include <vector>
#include <unordered_map>
#include "user.h"
#include <QWidget>

namespace Ui {
class scheduleScreen;
}

class scheduleScreen : public QWidget
{
    Q_OBJECT

public:
    explicit scheduleScreen(QWidget *parent = nullptr);
    void acceptUser(User _user);
    void run();
    ~scheduleScreen();

private slots:
    void on_btn_back_clicked();

    void on_cb_employees_activated(const QString &arg1);

    void on_btn_override_clicked();

    void on_btn_schedule_clicked();

    void on_btn_viewCurrent_clicked();

    void on_btn_viewPurged_clicked();

    void on_btn_purge_clicked();

    void on_btn_purgeCurrent_clicked();

    void on_btn_saveCurrent_clicked();

    void on_btn_savePurged_clicked();

    void on_btn_generate_clicked();

    int validationChecks();

    std::vector<std::string> randomFourDays();

    void on_btn_delete_clicked();

private:
    std::unordered_map<std::string, std::string> employee;
    User user;
    Ui::scheduleScreen *ui;
};

#endif // SCHEDULESCREEN_H

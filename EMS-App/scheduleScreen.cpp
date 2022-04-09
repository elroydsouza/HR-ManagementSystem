#include "menuScreen.h"
#include "departmentScreen.h"
#include "scheduleScreen.h"
#include "ui_scheduleScreen.h"

#include <algorithm>
#include <unordered_map>
#include <vector>
#include <iostream>

scheduleScreen::scheduleScreen(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::scheduleScreen)
{
    ui->setupUi(this);
}

void scheduleScreen::run(){
    ui->lbl_name->setText("Logged in as: " + user.getFullName());
    ui->stackedWidget->setCurrentIndex(0);
    ui->btn_schedule->setDown(true);

    if(user.getPermLevel() == 2){
        ui->stackedWidget->setCurrentIndex(1);
        ui->btn_schedule->setDisabled(true);
        ui->btn_viewPurged->setDisabled(true);
        ui->btn_purgeCurrent->setDisabled(true);
        ui->btn_saveCurrent->setDisabled(true);

        QSqlQueryModel *model = new QSqlQueryModel();
        QSqlQuery query;
        query.prepare(QString("SELECT CONCAT(users.firstName, ' ', users.lastName) AS name, monday, tuesday, wednesday, thursday, friday, saturday, sunday "
                              "FROM users, schedule "
                              "WHERE users.employeeID = schedule.employeeID"));

        query.exec();
        model->setQuery(query);
        ui->tbl_currentSchedule->setModel(model);
        ui->tbl_currentSchedule->verticalHeader()->setStyleSheet("::section{ background-color:rgb(222, 29, 29) }");
        ui->tbl_currentSchedule->horizontalHeader()->setDefaultAlignment(Qt::AlignLeft);
        ui->tbl_currentSchedule->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    }

    int count = 0;
    QSqlQuery query;

    query.prepare("SELECT employeeID, firstName, lastName FROM users");

    query.exec();

    while (query.next()) {
        QString employeeFullName = query.value(1).toString() + " " + query.value(2).toString();
        ui->cb_employees->addItem(employeeFullName);

        employee.insert({employeeFullName.toStdString() + std::to_string(count), query.value(0).toString().toStdString()});
        count++;
    }

    ui->cb_employees->setCurrentIndex(-1);
}

void scheduleScreen::acceptUser(User _user){
    user = _user;
}

scheduleScreen::~scheduleScreen()
{
    delete ui;
}

void scheduleScreen::on_btn_back_clicked()
{
    menuScreen *openChat = new menuScreen;
    openChat->acceptUser(user);
    openChat->show();
    openChat->run();
    close();
}

void scheduleScreen::on_cb_employees_activated(const QString &arg1)
{
    int cbEmployeeIndex = ui->cb_employees->currentIndex();

    if(cbEmployeeIndex == -1){
    } else {
        ui->le_monday->clear();
        ui->le_tuesday->clear();
        ui->le_wednesday->clear();
        ui->le_thursday->clear();
        ui->le_friday->clear();
        ui->le_saturday->clear();
        ui->le_sunday->clear();

        std::unordered_map<std::string, std::string>::iterator selectedEmployeeID = employee.find(arg1.toStdString() + std::to_string(ui->cb_employees->currentIndex()));

        std::string str(selectedEmployeeID->second);
        QString selectedID = QString::fromStdString(str);

        ui->le_employeeName->setText(arg1);

        QSqlQuery query;
        query.prepare("SELECT monday, tuesday, wednesday, thursday, friday, saturday, sunday FROM schedule "
                      "WHERE employeeID = :employeeID");

        query.bindValue(":employeeID", selectedID);

        query.exec();
        if(query.next()){

            ui->le_monday->setText(query.value(0).toString());
            ui->le_tuesday->setText(query.value(1).toString());
            ui->le_wednesday->setText(query.value(2).toString());
            ui->le_thursday->setText(query.value(3).toString());
            ui->le_friday->setText(query.value(4).toString());
            ui->le_saturday->setText(query.value(5).toString());
            ui->le_sunday->setText(query.value(6).toString());
        } else {
            ui->le_monday->clear();
            ui->le_tuesday->clear();
            ui->le_wednesday->clear();
            ui->le_thursday->clear();
            ui->le_friday->clear();
            ui->le_saturday->clear();
            ui->le_sunday->clear();

            QMessageBox::information(this,"Unknown Schedule","This employee does not currently have a schedule, please set one!");
        }
    }
}

void scheduleScreen::on_btn_override_clicked()
{
    int cbEmployeeIndex = ui->cb_employees->currentIndex();

    if(cbEmployeeIndex == -1){
    } else {
        std::unordered_map<std::string, std::string>::iterator selectedEmployeeID = employee.find(ui->le_employeeName->text().toStdString() + std::to_string(ui->cb_employees->currentIndex()));

        std::string str(selectedEmployeeID->second);
        QString selectedID = QString::fromStdString(str);

        QSqlQuery query;
        query.prepare(QString("DELETE FROM schedule WHERE employeeID = :employeeID"));
        query.bindValue(":employeeID", selectedID);
        query.exec();


        query.prepare(QString("INSERT INTO schedule (employeeID, monday, tuesday, wednesday, thursday, friday, saturday, sunday) "
                              "VALUES (:employeeID, :monday, :tuesday, :wednesday, :thursday, :friday, :saturday, :sunday)"));

        query.bindValue(":employeeID", selectedID);
        query.bindValue(":monday", ui->le_monday->text());
        query.bindValue(":tuesday", ui->le_tuesday->text());
        query.bindValue(":wednesday", ui->le_wednesday->text());
        query.bindValue(":thursday", ui->le_thursday->text());
        query.bindValue(":friday", ui->le_friday->text());
        query.bindValue(":saturday", ui->le_saturday->text());
        query.bindValue(":sunday", ui->le_sunday->text());

        if(query.exec()){
            QMessageBox::information(this,"Success",ui->le_employeeName->text()+"'s schedule has been updated!");
        }
    }
}

void scheduleScreen::on_btn_schedule_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    ui->btn_schedule->setDown(true);
}

void scheduleScreen::on_btn_viewCurrent_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    ui->btn_viewCurrent->setDown(true);
    ui->btn_schedule->setDown(false);

    QSqlQueryModel *model = new QSqlQueryModel();
    QSqlQuery query;
    query.prepare(QString("SELECT CONCAT(users.firstName, ' ', users.lastName) AS name, monday, tuesday, wednesday, thursday, friday, saturday, sunday "
                          "FROM users, schedule "
                          "WHERE users.employeeID = schedule.employeeID"));

    query.exec();
    model->setQuery(query);
    ui->tbl_currentSchedule->setModel(model);
    ui->tbl_currentSchedule->verticalHeader()->setStyleSheet("::section{ background-color:rgb(222, 29, 29) }");
    ui->tbl_currentSchedule->horizontalHeader()->setDefaultAlignment(Qt::AlignLeft);
    ui->tbl_currentSchedule->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

}

void scheduleScreen::on_btn_viewPurged_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    ui->btn_viewPurged->setDown(true);
    ui->btn_schedule->setDown(false);

    QSqlQueryModel *model = new QSqlQueryModel();
    QSqlQuery query;
    query.prepare(QString("SELECT CONCAT(users.firstName, ' ', users.lastName) AS name, monday, tuesday, wednesday, thursday, friday, saturday, sunday "
                          "FROM users, purgedSchedule "
                          "WHERE users.employeeID = purgedSchedule.employeeID"));

    query.exec();
    model->setQuery(query);
    ui->tbl_purgedSchedule->setModel(model);
    ui->tbl_purgedSchedule->verticalHeader()->setStyleSheet("::section{ background-color:rgb(222, 29, 29) }");
    ui->tbl_purgedSchedule->horizontalHeader()->setDefaultAlignment(Qt::AlignLeft);
    ui->tbl_purgedSchedule->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}

void scheduleScreen::on_btn_purge_clicked()
{
    QSqlQuery query;
    query.prepare(QString("DELETE FROM purgedSchedule"));

    query.exec();

    query.prepare(QString("INSERT INTO purgedSchedule "
                          "SELECT * FROM schedule"));

    if(query.exec()){
        QMessageBox::information(this,"Success","Schedule has been purged.");

        query.prepare(QString("DELETE FROM schedule"));

        query.exec();
    }
}

void scheduleScreen::on_btn_purgeCurrent_clicked()
{
    QSqlQuery query;
    query.prepare(QString("DELETE FROM purgedSchedule"));

    query.exec();

    query.prepare(QString("INSERT INTO purgedSchedule "
                          "SELECT * FROM schedule"));

    if(query.exec()){
        QMessageBox::information(this,"Success","Schedule has been purged.");

        query.prepare(QString("DELETE FROM schedule"));

        query.exec();

        QSqlQueryModel *model = new QSqlQueryModel();
        QSqlQuery query;
        query.prepare(QString("SELECT CONCAT(users.firstName, ' ', users.lastName) AS name, monday, tuesday, wednesday, thursday, friday, saturday, sunday "
                              "FROM users, schedule "
                              "WHERE users.employeeID = schedule.employeeID"));

        query.exec();
        model->setQuery(query);
        ui->tbl_currentSchedule->setModel(model);
        ui->tbl_currentSchedule->verticalHeader()->setStyleSheet("::section{ background-color:rgb(222, 29, 29) }");
        ui->tbl_currentSchedule->horizontalHeader()->setDefaultAlignment(Qt::AlignLeft);
        ui->tbl_currentSchedule->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    }
}

void scheduleScreen::on_btn_saveCurrent_clicked()
{
    QDate date = QDate::currentDate();
    ui->tbl_currentSchedule->grab().save(QString::fromStdString("saved_documents/currentSchedule/schedule") + date.toString("dd.MM.yyyy") + ".png");
}

void scheduleScreen::on_btn_savePurged_clicked()
{
    QDate date = QDate::currentDate();
    ui->tbl_purgedSchedule->grab().save(QString::fromStdString("saved_documents/purgedSchedule/pschedule") + date.toString("dd.MM.yyyy") + ".png");
}

void scheduleScreen::on_btn_generate_clicked()
{
    int preCheck = 0;
    QSqlQuery query;
    query.prepare(QString("SELECT COUNT(*) FROM users "
                          "WHERE departmentCode = 'DPT943'"));

    query.exec();
    query.next();
    int managerCount = query.value(0).toInt();
    if(managerCount >= 2){
        preCheck = 1;
    }


    std::vector<int> deptCheck = {};
    QSqlQuery query2;
    query.prepare(QString("SELECT departmentCode from departments"));
    query.exec();
    while(query.next()){
        if(query.value(0).toString() != "DPT943"){
            query2.prepare(QString("SELECT COUNT(*) FROM users "
                                  "WHERE departmentCode = :departmentCode"));

            query2.bindValue(":departmentCode", query.value(0).toString());

            query2.exec();
            query2.next();
            deptCheck.push_back(query2.value(0).toInt());
       }
    }

    for(int check : deptCheck){
        if(check >= 4){
            preCheck = 1;
        } else {
            preCheck = 0;
        }
    }

    if(preCheck == 1){
        int validationCheck = 0;
        while(validationCheck == 0){
            query.prepare(QString("DELETE FROM schedule"));

            query.exec();

            std::vector<std::string> fourDays = randomFourDays();

            query.prepare(QString("SELECT employeeID, departmentCode FROM users"));

            QSqlQuery query2;
            QSqlQuery query3;
            query.exec();
            while(query.next()){
                query2.prepare(QString("SELECT departmentAbbreviation FROM departments "
                                       "WHERE departmentCode = :departmentCode"));
                query2.bindValue(":departmentCode", query.value(1).toString());
                query2.exec();
                query2.next();

                int count = 0;

                for(std::string day : fourDays){
                    if(count == 0){
                        query3.prepare(QString("INSERT INTO schedule (employeeID, "+QString::fromStdString(fourDays[0])+") "
                                               "VALUES (:employeeID, :department)"));
                        query3.bindValue(":employeeID", query.value(0).toString());
                        query3.bindValue(":department", query2.value(0).toString());
                        query3.exec();

                        count++;
                    } else {
                        query3.prepare(QString("UPDATE schedule SET "+QString::fromStdString(day)+" = :department "
                                               "WHERE employeeID = :employeeID"));
                        query3.bindValue(":employeeID", query.value(0).toString());
                        query3.bindValue(":department", query2.value(0).toString());
                        query3.exec();
                    }
                }
                fourDays = randomFourDays();
            }
            validationCheck = validationChecks();
        }
        QMessageBox::information(this,"Success","Schedule has been generated!");
    } else {
        QMessageBox::information(this,"Error","Please ensure there is at least 2 managers and 4 employees per department to use auto-scheduler...");
    }

}

int scheduleScreen::validationChecks()
{
    int validationCheck = 1;
    QSqlQuery query;

    std::vector<std::string> daysInWeek = {"monday", "tuesday", "wednesday", "thursday", "friday", "saturday", "sunday"};
    std::vector<int> counts = {};

    // Make sure there is at least 1 manager per day
    for(std::string day : daysInWeek){
        query.prepare(QString("SELECT COUNT(*) FROM schedule "
                              "WHERE "+QString::fromStdString(day)+" = 'DM'"));

        query.exec();
        query.next();
        counts.push_back(query.value(0).toInt());
    }

    for(int count : counts){
        if(count == 0){
            validationCheck = 0;
            return validationCheck;
        }
    }
    counts.clear();

    // Make sure there is at least 2 employees per day
    std::vector<std::string> deptIDs = {};
    query.prepare(QString("SELECT departmentAbbreviation from departments"));
    query.exec();
    while(query.next()){
        deptIDs.push_back(query.value(0).toString().toStdString());
    }
    deptIDs.erase(std::remove(deptIDs.begin(), deptIDs.end(), "DM"), deptIDs.end());

    for(std::string department : deptIDs){
        for(std::string day : daysInWeek){
            query.prepare(QString("SELECT COUNT(*) FROM schedule "
                                  "WHERE "+QString::fromStdString(day)+" = :departmentAbb"));

            query.bindValue(":departmentAbb", QString::fromStdString(department));

            query.exec();
            query.next();
            counts.push_back(query.value(0).toInt());
        }

        for(int count : counts){
            if(count < 2){
                validationCheck = 0;
                return validationCheck;
            }
        }
    }

    return validationCheck;
}

std::vector<std::string> scheduleScreen::randomFourDays()
{
    std::vector<std::string> days = {"monday", "tuesday", "wednesday", "thursday", "friday", "saturday", "sunday"};
    std::vector<std::string> fourDays = {};

    for(int i=0;i<4;i++){
        int random = rand() % days.size();
        std::string randomDay = days[random];
        fourDays.push_back(randomDay);
        days.erase(std::remove(days.begin(), days.end(), randomDay), days.end());
    }

    return fourDays;
}

void scheduleScreen::on_btn_delete_clicked()
{
    QMessageBox::StandardButton question = QMessageBox::question(this, "Confirm", "Are you sure you want to delete this purged schedule?",
                                                                 QMessageBox::Yes|QMessageBox::No);
    if(question == QMessageBox::Yes){
        QSqlQuery query;
        query.prepare(QString("DELETE FROM purgedSchedule"));

        query.exec();
    }
}

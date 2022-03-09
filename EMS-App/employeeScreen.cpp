#include "employeeScreen.h"
#include "ui_employeeScreen.h"
#include "menuScreen.h"

#include <unordered_map>
#include <stdlib.h>

#include <iostream>

employeeScreen::employeeScreen(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::employeeScreen)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
}

void employeeScreen::run(){
    ui->lbl_name->setText("Logged in as: " + user.getFullName());
    QDate date = QDate::currentDate();
    ui->de_employDate->setDate(date);

    // Add info box to every stacked widget page explaining how to use

    // reference the icon geez tuk something

    QSqlQueryModel *model = new QSqlQueryModel();

    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setUserName("admin");
    db.setPassword("5yHvkrLmMpUNKq5z");
    db.setDatabaseName("emsApp");

    if(db.open()){

        try {

            QSqlQuery query;
            query.prepare(QString("SELECT employeeID, firstName, lastName, DOB, gender, email, employDate FROM users")); // ADD DEPARTMENT

            query.exec();

            model->setQuery(query);
            ui->tbl_users->setModel(model);
            ui->tbl_users->verticalHeader()->setStyleSheet("::section{ background-color:rgb(222, 29, 29) }");
            ui->tbl_users->horizontalHeader()->setDefaultAlignment(Qt::AlignLeft);
            ui->tbl_users->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

//            ui->tbl_usersInsert->setModel(model);
//            ui->tbl_usersInsert->verticalHeader()->setStyleSheet("::section{ background-color:rgb(222, 29, 29) }");
//            ui->tbl_usersInsert->horizontalHeader()->setDefaultAlignment(Qt::AlignLeft);
//            ui->tbl_usersInsert->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
//            ui->tbl_users->setColumnWidth(0,85);
//            ui->tbl_users->setColumnWidth(1,85);
//            ui->tbl_users->setColumnWidth(2,30);
//            ui->tbl_users->setColumnWidth(3,70);
//            ui->tbl_users->setColumnWidth(4,100);
//            ui->tbl_users->setColumnWidth(5,100);
//            ui->tbl_users->setColumnWidth(6,95);

        } catch (std::invalid_argument& ia) {
            QMessageBox::information(this,"Error","Employee table could not be displayed");
        }

    } else {
        QMessageBox::information(this,"Not Connected","Database is not connected");
    }

    ui->btn_search->setDown(true);
}

void employeeScreen::acceptUser(User _user){
    user = _user;
}

employeeScreen::~employeeScreen()
{
    delete ui;
}

void employeeScreen::on_le_search_returnPressed()
{
    //proxy->setFilterRegExp(QRegExp(".png", Qt::CaseInsensitive, QRegExp::FixedString));
    //proxy->setFilterKeyColumn(1);
}

void employeeScreen::on_btn_search_clicked()
{
    QSqlQueryModel *model = new QSqlQueryModel();

    QSqlQuery query;
    query.prepare(QString("SELECT employeeID, firstName, lastName, DOB, gender, email, employDate FROM users")); // ADD DEPARTMENT

    query.exec();

    model->setQuery(query);
    ui->tbl_users->setModel(model);
    ui->tbl_users->verticalHeader()->setStyleSheet("::section{ background-color:rgb(222, 29, 29) }");
    ui->tbl_users->horizontalHeader()->setDefaultAlignment(Qt::AlignLeft);
    ui->tbl_users->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    ui->stackedWidget->setCurrentIndex(0);

    ui->btn_search->setDown(true);
}

void employeeScreen::on_btn_insert_clicked()
{
    ui->cb_department->clear();

    QString departmentName;

    QSqlQuery query;
    query.prepare("SELECT departmentName "
                  "FROM departments");

    query.exec();

    while (query.next()) {
        departmentName = query.value(0).toString();
        ui->cb_department->addItem(departmentName);
    }

    ui->stackedWidget->setCurrentIndex(1);

    ui->btn_insert->setDown(true);
    ui->btn_search->setDown(false);
}


void employeeScreen::on_btn_submit_clicked()
{
    QSqlQuery query;
    query.prepare("SELECT departmentCode "
                  "FROM departments "
                  "WHERE departmentName = :departmentName");

    query.bindValue(":departmentName", ui->cb_department->currentText());
    query.exec();
    query.next();

    QString departmentCode = query.value(0).toString();

    QString firstName = ui->le_firstName->text();
    QString lastName = ui->le_lastName->text();
    QString DOB = ui->de_DOB->text();
    QString gender = ui->le_gender->text();
    QString phoneNo = ui->le_phoneNo->text();
    QString address = ui->le_address->text();
    QString email = ui->le_email->text();
    QString employeeID = ui->le_employeeID->text();
    QString employDate = ui->de_employDate->text();

    query.prepare("INSERT INTO users (departmentCode, firstName, lastName, email, gender, phoneNo, DOB, address, employeeID, employDate) "
                  "VALUES (:departmentCode, :firstName, :lastName, :email, :gender, :phoneNo, :DOB, :address, :employeeID, :employDate)");
    query.bindValue(":departmentCode", departmentCode);
    query.bindValue(":firstName", firstName);
    query.bindValue(":lastName", lastName);
    query.bindValue(":email", email);
    query.bindValue(":gender", gender);
    query.bindValue(":phoneNo", phoneNo);
    query.bindValue(":DOB", DOB);
    query.bindValue(":address", address);
    query.bindValue(":employeeID", employeeID);
    query.bindValue(":employDate", employDate);

    if(query.exec()){
        clearAllInsert();
        QMessageBox::information(this,"Registration successful","Account has been created");
    }else{
        QMessageBox::information(this,"Registration unsuccessful","Account has not been created");
    }
}

void employeeScreen::clearAllInsert(){
    ui->le_firstName->clear();
    ui->le_lastName->clear();
    ui->de_DOB->setDate(QDate::fromString("2000-01-01", "yyyy-MM-dd"));
    ui->le_gender->clear();
    ui->cb_department->setCurrentIndex(0);

    QDate date = QDate::currentDate();
    ui->de_employDate->setDate(date);

    ui->le_email->clear();
    ui->le_address->clear();
    ui->le_phoneNo->clear();
    ui->le_employeeID->clear();

}

void employeeScreen::on_btn_clear_clicked()
{
    clearAllInsert();
}

void employeeScreen::on_btn_update_clicked()
{
    QSqlQueryModel *model = new QSqlQueryModel();
    QSqlQuery query;
    query.prepare(QString("SELECT employeeID, firstName, lastName FROM users"));

    query.exec();
    model->setQuery(query);
    ui->tbl_usersUpdate->setModel(model);
    ui->tbl_usersUpdate->verticalHeader()->setStyleSheet("::section{ background-color:rgb(222, 29, 29) }");
    ui->tbl_usersUpdate->horizontalHeader()->setDefaultAlignment(Qt::AlignLeft);
    ui->tbl_usersUpdate->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    ui->Ule_employeeID->clear();
    ui->Ule_firstName->clear();
    ui->Ule_lastName->clear();
    ui->Ule_email->clear();
    ui->Ucb_department->setCurrentIndex(0);
    ui->Ule_gender->clear();
    ui->Ule_phoneNo->clear();
    ui->Ule_address->clear();

    ui->Ucb_department->clear();

    QString departmentName;
    query.prepare("SELECT departmentName "
                  "FROM departments");

    query.exec();

    while (query.next()) {
        departmentName = query.value(0).toString();
        ui->Ucb_department->addItem(departmentName);
    }

    ui->stackedWidget->setCurrentIndex(2);

    ui->btn_update->setDown(true);
    ui->btn_search->setDown(false);
}

void employeeScreen::on_btn_back_clicked()
{
    menuScreen *openChat = new menuScreen;
    openChat->acceptUser(user);
    openChat->show();
    openChat->run();
    close();
}

void employeeScreen::on_btn_generateID_clicked()
{
    QSqlQuery query;
    query.prepare(QString("SELECT employeeID FROM users"));

    std::unordered_map<std::string, std::string> employeeIDs;

    if(query.exec()){
        while(query.next()){
            std::string selectedID = query.value(0).toString().toStdString();
            employeeIDs.insert({selectedID, "placeholder"});
        }

        bool check = false;

        while(check == false){
            int randNo = (rand() % 88888) + 10000;
            QString randomID = "BS" + QString::fromStdString(std::to_string(randNo));

            if(employeeIDs.find(randomID.toStdString()) != employeeIDs.end()){
            } else {
                ui->le_employeeID->setText(randomID);

                check = true;
            }
        }

    }else{
        QMessageBox::information(this,"Error","Employee ID could not be generated");
    }
}

void employeeScreen::on_tbl_usersUpdate_activated()
{
    QModelIndex selectedRow = ui->tbl_usersUpdate->selectionModel()->currentIndex();
    QVariant selectedID = selectedRow.sibling(selectedRow.row(),0).data();
    QString selectedEmployeeID = selectedID.toString();

    QSqlQuery query;
    query.prepare(QString("SELECT firstName, lastName, email, departmentCode, gender, phoneNo, address FROM users "
                          "WHERE employeeID = '"+selectedEmployeeID+"'"));

    query.exec();
    query.next();
    ui->Ule_employeeID->setText(selectedEmployeeID);

    ui->Ule_firstName->setText(query.value(0).toString());
    ui->Ule_lastName->setText(query.value(1).toString());
    ui->Ule_email->setText(query.value(2).toString());

    QString departmentCode = query.value(3).toString();

    ui->Ule_gender->setText(query.value(4).toString());
    ui->Ule_phoneNo->setText(query.value(5).toString());
    ui->Ule_address->setText(query.value(6).toString());

    if(departmentCode == "unknown"){
        ui->Ucb_department->setCurrentIndex(-1);
    } else {
        query.prepare(QString("SELECT departmentName FROM departments "
                              "WHERE departmentCode = '"+departmentCode+"'"));

        query.exec();
        query.next();

        ui->Ucb_department->setCurrentText(query.value(0).toString());
    }
}

void employeeScreen::on_Ubtn_update_clicked()
{
    QString updatedFirstName = ui->Ule_firstName->text();
    QString updatedLastName = ui->Ule_lastName->text();
    QString updatedEmail = ui->Ule_email->text();
    QString departmentName = ui->Ucb_department->currentText();

    QSqlQuery query;

    if(ui->Ucb_department->currentIndex() == -1){
        QMessageBox::information(this,"Error","Please select a department before updating");
    } else {
        query.prepare(QString("SELECT departmentCode FROM departments "
                              "WHERE departmentName = '"+departmentName+"'"));

        query.exec();
        query.next();

        QString updatedDepartmentCode = query.value(0).toString();


        QString updatedGender = ui->Ule_gender->text();
        QString updatedPhoneNo = ui->Ule_phoneNo->text();
        QString updatedAddress = ui->Ule_address->text();

        query.prepare(QString("UPDATE users "
                              "SET firstName = :firstName, lastName = :lastName, email = :email, departmentCode = :departmentCode, gender = :gender, phoneNo = :phoneNo, address = :address "
                              "WHERE employeeID = :employeeID"));

        query.bindValue(":employeeID", ui->Ule_employeeID->text());
        query.bindValue(":departmentCode", updatedDepartmentCode);
        query.bindValue(":firstName", updatedFirstName);
        query.bindValue(":lastName", updatedLastName);
        query.bindValue(":email", updatedEmail);
        query.bindValue(":gender", updatedGender);
        query.bindValue(":phoneNo", updatedPhoneNo);
        query.bindValue(":address", updatedAddress);

        if(query.exec()){
            QSqlQueryModel *model = new QSqlQueryModel();
            query.prepare(QString("SELECT employeeID, firstName, lastName FROM users"));

            query.exec();
            model->setQuery(query);
            ui->tbl_usersUpdate->setModel(model);
            ui->tbl_usersUpdate->verticalHeader()->setStyleSheet("::section{ background-color:rgb(222, 29, 29) }");
            ui->tbl_usersUpdate->horizontalHeader()->setDefaultAlignment(Qt::AlignLeft);
            ui->tbl_usersUpdate->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

            QMessageBox::information(this,"Success","Employee has been updated");
        }else{
            QMessageBox::information(this,"Error","Employee could not be updated");
        }
    }
}

void employeeScreen::on_btn_delete_clicked()
{
    QSqlQueryModel *model = new QSqlQueryModel();

    QSqlQuery query;
    query.prepare(QString("SELECT employeeID, firstName, lastName, DOB, gender, email, employDate FROM users")); // ADD DEPARTMENT

    query.exec();

    model->setQuery(query);
    ui->Dtbl_users->setModel(model);
    ui->Dtbl_users->verticalHeader()->setStyleSheet("::section{ background-color:rgb(222, 29, 29) }");
    ui->Dtbl_users->horizontalHeader()->setDefaultAlignment(Qt::AlignLeft);
    ui->Dtbl_users->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    clearAllDelete();

    ui->stackedWidget->setCurrentIndex(3);

    ui->btn_delete->setDown(true);
    ui->btn_search->setDown(false);
}

void employeeScreen::on_Dtbl_users_activated()
{
    QModelIndex selectedRow = ui->Dtbl_users->selectionModel()->currentIndex();
    QVariant selectedID = selectedRow.sibling(selectedRow.row(),0).data();
    QString selectedEmployeeID = selectedID.toString();

    QSqlQuery query;
    query.prepare(QString("SELECT firstName, lastName FROM users "
                          "WHERE employeeID = '"+selectedEmployeeID+"'"));

    if(query.exec()){
        while(query.next()){
            ui->Dle_employeeID->setText(selectedEmployeeID);
            ui->Dle_firstName->setText(query.value(0).toString());
            ui->Dle_lastName->setText(query.value(1).toString());
        }
    }
}

void employeeScreen::on_Dbtn_delete_clicked()
{
    QString selectedID = ui->Dle_employeeID->text();
    QString selectedFirstName = ui->Dle_firstName->text();
    QString selectedLastName = ui->Dle_lastName->text();

    QMessageBox::StandardButton question = QMessageBox::question(this, "Confirm", "Are you sure you want to delete ("+ selectedID + ") "+ selectedFirstName +" "+ selectedLastName+"?",
                                                                 QMessageBox::Yes|QMessageBox::No);
    if(question == QMessageBox::Yes){
        QSqlQuery query;
        query.prepare(QString("DELETE FROM users WHERE employeeID = '"+selectedID+"'"));

        if(query.exec()){
            QSqlQueryModel *model = new QSqlQueryModel();

            query.prepare(QString("SELECT employeeID, firstName, lastName, DOB, gender, email, employDate FROM users")); // ADD DEPARTMENT

            query.exec();

            model->setQuery(query);
            ui->Dtbl_users->setModel(model);
            ui->Dtbl_users->verticalHeader()->setStyleSheet("::section{ background-color:rgb(222, 29, 29) }");
            ui->Dtbl_users->horizontalHeader()->setDefaultAlignment(Qt::AlignLeft);
            ui->Dtbl_users->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

            clearAllDelete();

            QMessageBox::information(this,"Success","Employee has been successfully deleted");
        } else {
            QMessageBox::information(this,"Error","Employee could not be deleted");
        }
    }

}

void employeeScreen::clearAllDelete(){
    ui->Dle_employeeID->clear();
    ui->Dle_firstName->clear();
    ui->Dle_lastName->clear();
}


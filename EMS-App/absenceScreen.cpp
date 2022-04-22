#include "menuScreen.h"
#include "absenceScreen.h"
#include "ui_absenceScreen.h"

absenceScreen::absenceScreen(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::absenceScreen)
{
    ui->setupUi(this);
}

void absenceScreen::run(){
    ui->lbl_name->setText("Logged in as: " + user.getFullName());
    ui->de_absenceDate->setDate(QDate::currentDate().addDays(1));
    ui->stackedWidget->setCurrentIndex(0);
    ui->btn_request->setDown(true);

    if(user.getPermLevel() == 2){
        ui->btn_outstandingApp->setDisabled(true);
        ui->btn_maintenance->setDisabled(true);
    } else if (user.getEmail() == "admin"){
        ui->btn_request->setDisabled(true);
        ui->btn_outstandingReq->setDisabled(true);
        ui->stackedWidget->setCurrentIndex(2);

        QSqlQuery query;
        query.prepare(QString("SELECT ticketID AS TicketID, employeeID AS EmployeeID, type AS Type, date As Date FROM absence "
                              "WHERE status = :status"));

        query.bindValue(":status","waiting");

        query.exec();

        QSqlQueryModel *model = new QSqlQueryModel();
        model->setQuery(query);
        ui->tbl_outstandingApp->setModel(model);
        ui->tbl_outstandingApp->verticalHeader()->setStyleSheet("::section{ background-color:rgb(222, 29, 29) }");
        ui->tbl_outstandingApp->horizontalHeader()->setDefaultAlignment(Qt::AlignLeft);
        ui->tbl_outstandingApp->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    }

    ui->de_date->setDate(QDate::currentDate());

    ui->pte_reason->setEnabled(false);
    ui->pte_reason->setPlainText("Reason is only needed if requesting sick leave.");

    QSqlQuery query;
    query.prepare(QString("SELECT remainingHoliday, remainingSick FROM absenceRemaining "
                          "WHERE employeeID = :employeeID"));

    query.bindValue(":employeeID",user.getEmployeeID());

    query.exec();
    query.next();

    ui->Rlbl_holidayLeave->setText(query.value(0).toString());
    ui->Rlbl_sickLeave->setText(query.value(1).toString());

    query.prepare(QString("SELECT date, ticketID from absence"));

    query.exec();
    QSqlQuery query2;
    while(query.next()){
        QString ticketID = query.value(1).toString();
        if(query.value(0).toDate() == QDate::currentDate()){
            query2.prepare(QString("DELETE FROM absence WHERE ticketID = :ticketID"));
            query2.bindValue(":ticketID", ticketID);
            query2.exec();
        }
    }
}

void absenceScreen::acceptUser(User _user){
    user = _user;
}

absenceScreen::~absenceScreen()
{
    delete ui;
}

void absenceScreen::on_btn_back_clicked()
{
    menuScreen *openChat = new menuScreen;
    openChat->acceptUser(user);
    openChat->show();
    openChat->run();
    close();
}

void absenceScreen::on_pte_reason_textChanged()
{
    QString amount = QString("%1/400").arg(ui->pte_reason->toPlainText().length());
    ui->lbl_charactersRemaining->setText(amount);
}

void absenceScreen::on_rb_sick_clicked()
{
    ui->pte_reason->setEnabled(true);
    ui->pte_reason->clear();
}

void absenceScreen::on_rb_holiday_clicked()
{
    ui->pte_reason->setEnabled(false);
    ui->pte_reason->setPlainText("Reason is only needed if requesting sick leave.");
}

void absenceScreen::on_Rbtn_request_clicked()
{
    QString type;
    QString ticketID;
    QString employeeID;
    QString date;
    QString reason;
    QString status;

    if(!ui->rb_holiday->isChecked() && !ui->rb_sick->isChecked()){
        QMessageBox::information(this,"No type","Please make sure you select a type of absence");
    } else {
        if(ui->de_absenceDate->date() > QDate::currentDate()){
            // type
            if(ui->rb_holiday->isChecked()){
                type = "holiday";
                ui->pte_reason->clear();
            } else if (ui->rb_sick->isChecked()){
                type = "sick";
                // reason
                reason = ui->pte_reason->toPlainText();
            }

            if(type == "sick" && ui->lbl_charactersRemaining->text() == "0/400"){
                QMessageBox::information(this,"No reason","Please type in a reason for requesting sick leave");
            } else {
                // ticket id
                QSqlQuery query;
                query.prepare(QString("SELECT ticketID FROM absence"));

                std::unordered_map<std::string, std::string> ticketIDmap;

                if(query.exec()){
                    while(query.next()){
                        std::string selectedID = query.value(0).toString().toStdString();
                        ticketIDmap.insert({selectedID, "placeholder"});
                    }

                    bool check = false;

                    while(check == false){
                        int randNo = (rand() % 888) + 100;
                        QString randomID = "ABS" + QString::fromStdString(std::to_string(randNo));

                        if(ticketIDmap.find(randomID.toStdString()) != ticketIDmap.end()){
                        } else {
                            ticketID = randomID;

                            check = true;
                        }
                    }
                }else{
                    QMessageBox::information(this,"Error","Employee ID could not be generated");
                }

                // employeeID
                employeeID = user.getEmployeeID();

                // date
                date = ui->de_absenceDate->text();

                // status
                status = "waiting";

                // insertion
                query.prepare("INSERT INTO absence (ticketID, employeeID, type, date, reason, status) "
                              "VALUES (:ticketID, :employeeID, :type, :date, :reason, :status)");
                query.bindValue(":ticketID", ticketID);
                query.bindValue(":employeeID", employeeID);
                query.bindValue(":type", type);
                query.bindValue(":date", date);
                query.bindValue(":reason", reason);
                query.bindValue(":status", status);

                if(query.exec()){
                    if(ui->rb_sick->isChecked()){
                        ui->pte_reason->clear();
                    } else {
                        ui->pte_reason->setPlainText("Reason is only needed if requesting sick leave.");
                    }
                    QMessageBox::information(this,"Success","Request has been made");
                    ui->de_absenceDate->setDate(QDate::currentDate().addDays(1));
                } else {
                    QMessageBox::information(this,"Error","Request could not be made");
                }
            }
        } else {
            QMessageBox::information(this,"Error","Please ensure date is in the future...");
        }

    }


}

void absenceScreen::on_btn_request_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);

    ui->btn_request->setDown(true);

    QSqlQuery query;
    query.prepare(QString("SELECT remainingHoliday, remainingSick FROM absenceRemaining "
                          "WHERE employeeID = :employeeID"));

    query.bindValue(":employeeID",user.getEmployeeID());

    query.exec();
    query.next();

    ui->Rlbl_holidayLeave->setText(query.value(0).toString());
    ui->Rlbl_sickLeave->setText(query.value(1).toString());
}

void absenceScreen::on_btn_outstandingReq_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);

    ui->btn_outstandingReq->setDown(true);
    ui->btn_request->setDown(false);

    QSqlQuery query;
    query.prepare(QString("SELECT ticketID AS TicketID, date AS Date, status AS Status FROM absence "
                          "WHERE type = :type "
                          "AND employeeID = :employeeID"));

    query.bindValue(":type","holiday");
    query.bindValue(":employeeID",user.getEmployeeID());

    query.exec();

    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery(query);
    ui->tbl_holidayLeave->setModel(model);
    ui->tbl_holidayLeave->verticalHeader()->setStyleSheet("::section{ background-color:rgb(222, 29, 29) }");
    ui->tbl_holidayLeave->horizontalHeader()->setDefaultAlignment(Qt::AlignLeft);
    ui->tbl_holidayLeave->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);



    query.prepare(QString("SELECT ticketID AS TicketID, date AS Date, status AS Status FROM absence "
                          "WHERE type = :type "
                          "AND employeeID = :employeeID"));

    query.bindValue(":type","sick");
    query.bindValue(":employeeID",user.getEmployeeID());

    query.exec();

    QSqlQueryModel *model2 = new QSqlQueryModel();
    model2->setQuery(query);
    ui->tbl_sickLeave->setModel(model2);
    ui->tbl_sickLeave->verticalHeader()->setStyleSheet("::section{ background-color:rgb(222, 29, 29) }");
    ui->tbl_sickLeave->horizontalHeader()->setDefaultAlignment(Qt::AlignLeft);
    ui->tbl_sickLeave->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}

void absenceScreen::on_tbl_sickLeave_activated()
{
    QModelIndex selectedRow = ui->tbl_sickLeave->selectionModel()->currentIndex();
    QVariant selectedID = selectedRow.sibling(selectedRow.row(),0).data();
    QString selectedTicketID = selectedID.toString();

    QSqlQuery query;
    query.prepare(QString("SELECT reason, date, type FROM absence "
                          "WHERE ticketID = :ticketID"));

    query.bindValue(":ticketID",selectedTicketID);

    query.exec();
    query.next();

    ui->ORpte_reason->setPlainText(query.value(0).toString());

    ui->ORle_ticketID->setText(selectedTicketID);
    ui->ORde_date->setDate(query.value(1).toDate());
    ui->ORle_type->setText(query.value(2).toString());
}

void absenceScreen::on_btn_outstandingApp_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);

    ui->btn_outstandingApp->setDown(true);
    ui->btn_request->setDown(false);

    QSqlQuery query;
    query.prepare(QString("SELECT ticketID AS TicketID, employeeID AS EmployeeID, type AS Type, date As Date FROM absence "
                          "WHERE status = :status"));

    query.bindValue(":status","waiting");

    query.exec();

    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery(query);
    ui->tbl_outstandingApp->setModel(model);
    ui->tbl_outstandingApp->verticalHeader()->setStyleSheet("::section{ background-color:rgb(222, 29, 29) }");
    ui->tbl_outstandingApp->horizontalHeader()->setDefaultAlignment(Qt::AlignLeft);
    ui->tbl_outstandingApp->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}

void absenceScreen::on_tbl_outstandingApp_activated()
{
    QModelIndex selectedRow = ui->tbl_outstandingApp->selectionModel()->currentIndex();
    QVariant selectedID = selectedRow.sibling(selectedRow.row(),0).data();
    QString selectedTicketID = selectedID.toString();

    QSqlQuery query;
    query.prepare(QString("SELECT employeeID, date, reason, type FROM absence "
                          "WHERE ticketID = :ticketID"));

    query.bindValue(":ticketID",selectedTicketID);

    query.exec();
    query.next();

    QString employeeID = query.value(0).toString();
    ui->de_date->setDate(query.value(1).toDate());
    ui->OApte_reason->setPlainText(query.value(2).toString());
    ui->OAle_type->setText(query.value(3).toString());
    ui->le_ticketID->setText(selectedTicketID);

    query.prepare(QString("SELECT firstName, lastName FROM users "
                          "WHERE employeeID = :employeeID"));

    query.bindValue(":employeeID",employeeID);

    query.exec();
    query.next();

    ui->le_name->setText(query.value(0).toString() + " " + query.value(1).toString());
}

void absenceScreen::on_btn_approve_clicked()
{
    if(ui->le_ticketID->text() != NULL){
        QMessageBox::StandardButton question = QMessageBox::question(this, "Confirm", "Are you sure you would like to approve this leave?",
                                                                     QMessageBox::Yes|QMessageBox::No);
        if(question == QMessageBox::Yes){
            QSqlQuery query;
            query.prepare(QString("UPDATE absence SET status = :status WHERE ticketID = :ticketID"));

            query.bindValue(":status", "approved");
            query.bindValue(":ticketID", ui->le_ticketID->text());
            query.exec();

            QString employeeID;
            query.prepare(QString("SELECT employeeID FROM absence "
                                  "WHERE ticketID = :ticketID"));

            query.bindValue(":ticketID", ui->le_ticketID->text());
            query.exec();
            if(query.next()){
                employeeID = query.value(0).toString();
            }

            if(ui->OAle_type->text() == "holiday"){
                query.prepare(QString("SELECT remainingHoliday FROM absenceRemaining "
                                      "WHERE employeeID = :employeeID"));

                query.bindValue(":employeeID", employeeID);
                query.exec();

                if(query.next()){
                    int remainingHoliday = query.value(0).toInt();

                    query.prepare(QString("UPDATE absenceRemaining SET remainingHoliday = :remainingHoliday "
                                          "WHERE employeeID = :employeeID"));

                    query.bindValue(":remainingHoliday", remainingHoliday-1);
                    query.bindValue(":employeeID", employeeID);
                    query.exec();
                }

            } else if(ui->OAle_type->text() == "sick"){
                query.prepare(QString("SELECT remainingSick FROM absenceRemaining "
                                      "WHERE employeeID = :employeeID"));

                query.bindValue(":employeeID", employeeID);
                query.exec();

                if(query.next()){
                    int remainingSick = query.value(0).toInt();

                    query.prepare(QString("UPDATE absenceRemaining SET remainingSick = :remainingSick "
                                          "WHERE employeeID = :employeeID"));

                    query.bindValue(":remainingSick", remainingSick-1);
                    query.bindValue(":employeeID", employeeID);
                    query.exec();
                }

            }

            query.prepare(QString("SELECT ticketID AS TicketID, employeeID AS EmployeeID, type AS Type, date AS Date FROM absence "
                                  "WHERE status = :status"));

            query.bindValue(":status","waiting");

            query.exec();

            QSqlQueryModel *model = new QSqlQueryModel();
            model->setQuery(query);
            ui->tbl_outstandingApp->setModel(model);
            ui->tbl_outstandingApp->verticalHeader()->setStyleSheet("::section{ background-color:rgb(222, 29, 29) }");
            ui->tbl_outstandingApp->horizontalHeader()->setDefaultAlignment(Qt::AlignLeft);
            ui->tbl_outstandingApp->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);


            ui->le_ticketID->clear();
            ui->le_name->clear();
            ui->de_date->setDate(QDate::currentDate());
            ui->OApte_reason->clear();
        }
    }
}

void absenceScreen::on_btn_deny_clicked()
{
    if(ui->le_ticketID->text() != NULL){
        QMessageBox::StandardButton question = QMessageBox::question(this, "Confirm", "Are you sure you would like to deny this leave?",
                                                                     QMessageBox::Yes|QMessageBox::No);
        if(question == QMessageBox::Yes){
            QSqlQuery query;
            query.prepare(QString("UPDATE absence SET status = :status WHERE ticketID = :ticketID"));

            query.bindValue(":status", "denied");
            query.bindValue(":ticketID", ui->le_ticketID->text());

            query.exec();


            query.prepare(QString("SELECT ticketID AS TicketID, employeeID AS EmployeeID, type AS Type, date AS Date FROM absence "
                                  "WHERE status = :status"));

            query.bindValue(":status","waiting");

            query.exec();

            QSqlQueryModel *model = new QSqlQueryModel();
            model->setQuery(query);
            ui->tbl_outstandingApp->setModel(model);
            ui->tbl_outstandingApp->verticalHeader()->setStyleSheet("::section{ background-color:rgb(222, 29, 29) }");
            ui->tbl_outstandingApp->horizontalHeader()->setDefaultAlignment(Qt::AlignLeft);
            ui->tbl_outstandingApp->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);


            ui->le_ticketID->clear();
            ui->le_name->clear();
            ui->de_date->setDate(QDate::currentDate());
            ui->OApte_reason->clear();
        }
    }
}

void absenceScreen::on_tbl_holidayLeave_activated()
{
    QModelIndex selectedRow = ui->tbl_holidayLeave->selectionModel()->currentIndex();
    QVariant selectedID = selectedRow.sibling(selectedRow.row(),0).data();
    QString selectedTicketID = selectedID.toString();

    QSqlQuery query;
    query.prepare(QString("SELECT date, type FROM absence "
                          "WHERE ticketID = :ticketID"));

    query.bindValue(":ticketID",selectedTicketID);

    query.exec();
    query.next();

    ui->ORle_ticketID->setText(selectedTicketID);
    ui->ORde_date->setDate(query.value(0).toDate());
    ui->ORle_type->setText(query.value(1).toString());
}

void absenceScreen::on_btn_requestDelete_clicked()
{
    QString ticketID = ui->ORle_ticketID->text();
    QString type = ui->ORle_type->text();
    QString date = ui->ORde_date->text();

    if(ticketID != ""){
        QMessageBox::StandardButton question = QMessageBox::question(this, "Confirm", "Are you sure you want to delete ("+ ticketID + ") "+ type +" leave on " + date + "?",
                                                                     QMessageBox::Yes|QMessageBox::No);
        if(question == QMessageBox::Yes){
            QSqlQuery query4;
            query4.prepare(QString("SELECT status, employeeID FROM absence WHERE ticketID = '"+ticketID+"'"));
            query4.exec();
            query4.next();
            QString status = query4.value(0).toString();
            QString employeeID = query4.value(1).toString();

            query4.prepare(QString("SELECT remainingHoliday, remainingSick FROM absenceRemaining WHERE employeeID = :employeeID"));
            query4.bindValue(":employeeID", employeeID);
            query4.exec();
            query4.next();
            int remHol = query4.value(0).toInt();
            int remSick = query4.value(1).toInt();

            QSqlQuery query;
            query.prepare(QString("DELETE FROM absence WHERE ticketID = '"+ticketID+"'"));

            if(query.exec()){
                ui->ORle_ticketID->clear();
                ui->ORle_type->clear();
                ui->ORde_date->setDate(QDate::currentDate());
                ui->ORpte_reason->clear();
                QSqlQuery query;

                if(type == "holiday" && status == "approved"){
                    query.prepare(QString("UPDATE absenceRemaining SET remainingHoliday = :remainingHoliday WHERE employeeID = :employeeID"));

                    query.bindValue(":employeeID", employeeID);
                    query.bindValue(":remainingHoliday", remHol + 1);

                    query.exec();

                    QMessageBox::information(this,"Success","One holiday leave has been added back to remaining!");
                } else if(type == "sick" && status == "approved"){
                    query.prepare(QString("UPDATE absenceRemaining SET remainingSick = :remainingSick WHERE employeeID = :employeeID"));

                    query.bindValue(":employeeID", employeeID);
                    query.bindValue(":remainingSick", remSick + 1);

                    query.exec();

                    QMessageBox::information(this,"Success","One sick leave has been added back to remaining!");
                }

                query.prepare(QString("SELECT ticketID AS TicketID, date AS Date, status AS Status FROM absence "
                                      "WHERE type = :type "
                                      "AND employeeID = :employeeID"));

                query.bindValue(":type","holiday");
                query.bindValue(":employeeID",user.getEmployeeID());

                query.exec();

                QSqlQueryModel *model = new QSqlQueryModel();
                model->setQuery(query);
                ui->tbl_holidayLeave->setModel(model);
                ui->tbl_holidayLeave->verticalHeader()->setStyleSheet("::section{ background-color:rgb(222, 29, 29) }");
                ui->tbl_holidayLeave->horizontalHeader()->setDefaultAlignment(Qt::AlignLeft);
                ui->tbl_holidayLeave->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);



                query.prepare(QString("SELECT ticketID AS TicketID, date AS Date, status AS Status FROM absence "
                                      "WHERE type = :type "
                                      "AND employeeID = :employeeID"));

                query.bindValue(":type","sick");
                query.bindValue(":employeeID",user.getEmployeeID());

                query.exec();

                QSqlQueryModel *model2 = new QSqlQueryModel();
                model2->setQuery(query);
                ui->tbl_sickLeave->setModel(model2);
                ui->tbl_sickLeave->verticalHeader()->setStyleSheet("::section{ background-color:rgb(222, 29, 29) }");
                ui->tbl_sickLeave->horizontalHeader()->setDefaultAlignment(Qt::AlignLeft);
                ui->tbl_sickLeave->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

                QMessageBox::information(this,"Success","Leave has been deleted");
            }
        }
    } else {
        QMessageBox::information(this,"Error","Please select a leave first..");
    }
}

void absenceScreen::on_btn_maintenance_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);

    ui->btn_maintenance->setDown(true);
    ui->btn_request->setDown(false);

    QSqlQuery query;
    query.prepare(QString("SELECT employeeID AS EmployeeID, CONCAT(firstname, ' ', lastname) AS Name FROM users "));

    query.exec();

    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery(query);
    ui->tbl_employees->setModel(model);
    ui->tbl_employees->verticalHeader()->setStyleSheet("::section{ background-color:rgb(222, 29, 29) }");
    ui->tbl_employees->horizontalHeader()->setDefaultAlignment(Qt::AlignLeft);
    ui->tbl_employees->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}

void absenceScreen::on_tbl_employees_activated()
{
    QModelIndex selectedRow = ui->tbl_employees->selectionModel()->currentIndex();
    QVariant selectedID = selectedRow.sibling(selectedRow.row(),0).data();
    QString selectedEmployeeID = selectedID.toString();

    QSqlQuery query;
    query.prepare(QString("SELECT remainingHoliday, remainingSick FROM absenceRemaining "
                          "WHERE employeeID = :employeeID"));

    query.bindValue(":employeeID",selectedEmployeeID);

    query.exec();
    query.next();

    ui->Mle_employeeID->setText(selectedEmployeeID);
    ui->Mle_remainingHol->setText(query.value(0).toString());
    ui->Mle_remainingSick->setText(query.value(1).toString());

    query.prepare(QString("SELECT firstName, lastName FROM users "
                          "WHERE employeeID = :employeeID"));

    query.bindValue(":employeeID",selectedEmployeeID);

    query.exec();
    query.next();

    ui->Mle_employeeName->setText(query.value(0).toString() + " " + query.value(1).toString());
}

void absenceScreen::on_btn_update_clicked()
{
    QSqlQuery query;
    query.prepare(QString("UPDATE absenceRemaining SET remainingHoliday = :remainingHoliday, remainingSick = :remainingSick WHERE employeeID = :employeeID"));

    query.bindValue(":employeeID", ui->Mle_employeeID->text());
    query.bindValue(":remainingHoliday", ui->Mle_remainingHol->text());
    query.bindValue(":remainingSick", ui->Mle_remainingSick->text());

    if(query.exec()){
        QMessageBox::information(this,"Success","Leave amount has been updated");
    } else {
        QMessageBox::information(this,"Error","Please enter a number");
    }
}

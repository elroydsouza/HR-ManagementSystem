#include "menuScreen.h"
#include "departmentScreen.h"
#include "ui_departmentScreen.h"

departmentScreen::departmentScreen(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::departmentScreen)
{
    ui->setupUi(this);
}

void departmentScreen::run(){
    ui->lbl_name->setText("Logged in as: " + user.getFullName());

    ui->cb_departments->clear();

    if(user.getPermLevel() == 2){
        ui->btn_maintenance->setDisabled(true);
        ui->btn_save->setDisabled(true);
    }

    QSqlQueryModel *model = new QSqlQueryModel();

    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setUserName("admin");
    db.setPassword("5yHvkrLmMpUNKq5z");
    db.setDatabaseName("emsApp");

    if(db.open()){

        try {
            fillDeptComboBox();

            ui->cb_departments->setCurrentIndex(-1);

            QSqlQuery query;

            query.prepare(QString("SELECT departmentName AS Name, departmentAbbreviation AS Abbreviation, departmentManager AS DepartmentManager, departmentContact AS DepartmentContact FROM departments"));

            query.exec();

            model->setQuery(query);
            ui->tbl_departments->setModel(model);
            ui->tbl_departments->verticalHeader()->setStyleSheet("::section{ background-color:rgb(222, 29, 29) }");
            ui->tbl_departments->horizontalHeader()->setDefaultAlignment(Qt::AlignLeft);
            ui->tbl_departments->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
            ui->tbl_departments->horizontalHeader()->setSectionResizeMode(3, QHeaderView::ResizeToContents);

        } catch (std::invalid_argument& ia) {
            QMessageBox::information(this,"Error","Department table could not be displayed");
        }

    } else {
        QMessageBox::information(this,"Not Connected","Database is not connected");
    }

    ui->stackedWidget->setCurrentIndex(0);

    ui->btn_search->setDown(true);
}

void departmentScreen::fillDeptComboBox(){
    ui->cb_departments->clear();

    QSqlQuery query;

    query.prepare("SELECT departmentName "
                  "FROM departments");

    query.exec();

    while (query.next()) {
        QString departmentName = query.value(0).toString();
        ui->cb_departments->addItem(departmentName);
    }
}

void departmentScreen::acceptUser(User _user){
    user = _user;
}

departmentScreen::~departmentScreen()
{
    delete ui;
}

void departmentScreen::on_btn_search_clicked()
{
    ui->le_search->clear();

    QSqlQueryModel *model = new QSqlQueryModel();

    QSqlQuery query;
    query.prepare(QString("SELECT departmentName AS Name, departmentAbbreviation AS Abbreviation, departmentManager AS DepartmentManager, departmentContact AS DepartmentContact FROM departments"));

    query.exec();

    model->setQuery(query);
    ui->tbl_departments->setModel(model);
    ui->tbl_departments->verticalHeader()->setStyleSheet("::section{ background-color:rgb(222, 29, 29) }");
    ui->tbl_departments->horizontalHeader()->setDefaultAlignment(Qt::AlignLeft);
    ui->tbl_departments->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tbl_departments->horizontalHeader()->setSectionResizeMode(3, QHeaderView::ResizeToContents);

    fillDeptComboBox();

    ui->tbl_employees->model()->deleteLater();
    ui->cb_departments->setCurrentIndex(-1);

    ui->stackedWidget->setCurrentIndex(0);

    ui->btn_search->setDown(true);
}

void departmentScreen::on_btn_back_clicked()
{
    menuScreen *openChat = new menuScreen;
    openChat->acceptUser(user);
    openChat->show();
    openChat->run();
    close();
}

void departmentScreen::on_btn_maintenance_clicked()
{
    QSqlQueryModel *model = new QSqlQueryModel();

    QSqlQuery query;
    query.prepare(QString("SELECT departmentCode AS Code, departmentName AS Name, departmentAbbreviation AS Abbreviation, departmentManager AS DepartmentManager FROM departments"));

    query.exec();

    model->setQuery(query);
    ui->Mtbl_departments->setModel(model);
    ui->Mtbl_departments->verticalHeader()->setStyleSheet("::section{ background-color:rgb(222, 29, 29) }");
    ui->Mtbl_departments->horizontalHeader()->setDefaultAlignment(Qt::AlignLeft);
    ui->Mtbl_departments->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    ui->stackedWidget->setCurrentIndex(1);

    ui->btn_maintenance->setDown(true);

    ui->btn_search->setDown(false);
}

void departmentScreen::on_Mtbl_departments_activated()
{
    ui->le_deptName->setEnabled(true);
    ui->le_deptAbbreviation->setEnabled(true);

    QModelIndex selectedRow = ui->Mtbl_departments->selectionModel()->currentIndex();
    QVariant selectedCode = selectedRow.sibling(selectedRow.row(),0).data();
    QString selectedDepartmentCode = selectedCode.toString();

    QSqlQuery query;
    query.prepare(QString("SELECT departmentName, departmentAbbreviation, departmentManager, departmentContact FROM departments "
                          "WHERE departmentCode = '"+selectedDepartmentCode+"'"));

    if(query.exec()){
        while(query.next()){
            ui->le_deptCode->setText(selectedDepartmentCode);

            if(ui->le_deptCode->text() == "DPT943"){
                ui->le_deptName->setDisabled(true);
                ui->le_deptAbbreviation->setDisabled(true);
            }

            ui->le_deptName->setText(query.value(0).toString());
            ui->le_deptAbbreviation->setText(query.value(1).toString());
            ui->le_deptManager->setText(query.value(2).toString());
            ui->le_deptContact->setText(query.value(3).toString());

            ui->lbl_deptSelected->setText(query.value(0).toString());
            ui->lbl_deptSelected->setStyleSheet("color: rgb(50, 159, 195)");
        }
    }
}

void departmentScreen::on_btn_generate_clicked()
{
    QSqlQuery query;
    query.prepare(QString("SELECT departmentCode FROM departments"));

    std::unordered_map<std::string, std::string> deptCodes;

    if(query.exec()){
        while(query.next()){
            std::string selectedCode = query.value(0).toString().toStdString();
            deptCodes.insert({selectedCode, "placeholder"});
        }
       bool check = false;

        while(check == false){
            int randNo = (rand() % 888) + 100;
            QString randomCode = "DPT" + QString::fromStdString(std::to_string(randNo));

            if(deptCodes.find(randomCode.toStdString()) != deptCodes.end()){
            } else {
                ui->le_deptCode->setText(randomCode);

                ui->lbl_deptSelected->setText("NONE");
                ui->lbl_deptSelected->setStyleSheet("color: black");
                ui->le_deptName->clear();
                ui->le_deptAbbreviation->clear();
                ui->le_deptManager->clear();
                ui->le_deptContact->clear();

                ui->le_deptName->setEnabled(true);
                ui->le_deptAbbreviation->setEnabled(true);

                check = true;
            }
        }

    }else{
        QMessageBox::information(this,"Error","Department code could not be generated");
    }
}

void departmentScreen::on_btn_clear_clicked()
{
    clearAll();
}

void departmentScreen::clearAll()
{
    ui->lbl_deptSelected->setText("NONE");
    ui->lbl_deptSelected->setStyleSheet("color: black");
    ui->le_deptCode->clear();
    ui->le_deptName->clear();
    ui->le_deptAbbreviation->clear();
    ui->le_deptManager->clear();
    ui->le_deptContact->clear();
    ui->le_deptName->setEnabled(true);
    ui->le_deptAbbreviation->setEnabled(true);
}

void departmentScreen::on_btn_update_clicked()
{
    QString updatedName = ui->le_deptName->text();
    QString updatedAbbreviation = ui->le_deptAbbreviation->text();
    QString updatedManager = ui->le_deptManager->text();
    QString updatedContact = ui->le_deptContact->text();

    QSqlQuery query;
    query.prepare(QString("UPDATE departments "
                          "SET departmentName = :departmentName, departmentAbbreviation = :departmentAbbreviation, departmentManager = :departmentManager, departmentContact = :departmentContact "
                          "WHERE departmentCode = :departmentCode"));

    query.bindValue(":departmentCode", ui->le_deptCode->text());
    query.bindValue(":departmentName", updatedName);
    query.bindValue(":departmentAbbreviation", updatedAbbreviation);
    query.bindValue(":departmentManager", updatedManager);
    query.bindValue(":departmentContact", updatedContact);

    if(query.exec()){
        QSqlQueryModel *model = new QSqlQueryModel();
        query.prepare(QString("SELECT departmentCode AS Code, departmentName AS Name, departmentAbbreviation AS Abbreviation, departmentManager AS DepartmentManager FROM departments"));

        query.exec();
        model->setQuery(query);
        ui->Mtbl_departments->setModel(model);
        ui->Mtbl_departments->verticalHeader()->setStyleSheet("::section{ background-color:rgb(222, 29, 29) }");
        ui->Mtbl_departments->horizontalHeader()->setDefaultAlignment(Qt::AlignLeft);
        ui->Mtbl_departments->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

        QMessageBox::information(this,"Success","Department has been updated");
    }else{
        QMessageBox::information(this,"Error","Department could not be updated");
    }
}

void departmentScreen::on_btn_insert_clicked()
{
    QString deptCode = ui->le_deptCode->text();
    QString deptName = ui->le_deptName->text();
    QString deptAbbreviation = ui->le_deptAbbreviation->text();
    QString deptManager = ui->le_deptManager->text();
    QString deptContact = ui->le_deptContact->text();

    QSqlQuery query;

    query.prepare("INSERT INTO departments (departmentCode, departmentName, departmentAbbreviation, departmentManager, departmentContact) "
                  "VALUES (:departmentCode, :departmentName, :departmentAbbreviation, :departmentManager, :departmentContact)");
    query.bindValue(":departmentCode", deptCode);
    query.bindValue(":departmentName", deptName);
    query.bindValue(":departmentAbbreviation", deptAbbreviation);
    query.bindValue(":departmentManager", deptManager);
    query.bindValue(":departmentContact", deptContact);

    if(query.exec()){
        QSqlQueryModel *model = new QSqlQueryModel();
        query.prepare(QString("SELECT departmentCode AS Code, departmentName AS Name, departmentAbbreviation AS Abbreviation, departmentManager AS DepartmentManager FROM departments"));

        query.exec();
        model->setQuery(query);
        ui->Mtbl_departments->setModel(model);
        ui->Mtbl_departments->verticalHeader()->setStyleSheet("::section{ background-color:rgb(222, 29, 29) }");
        ui->Mtbl_departments->horizontalHeader()->setDefaultAlignment(Qt::AlignLeft);
        ui->Mtbl_departments->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

        clearAll();
        QMessageBox::information(this,"Successful","New department has been created");
    }else{
        QMessageBox::information(this,"Error","Department could not be created");
    }
}

void departmentScreen::on_btn_delete_clicked()
{
    QString selectedCode = ui->le_deptCode->text();
    QString selectedDeptName = ui->le_deptName->text();

    if(selectedCode == "DPT943"){
        QMessageBox::information(this,"Error","Manager account cannot be deleted...");
    } else {
        QMessageBox::StandardButton question = QMessageBox::question(this, "Confirm", "Are you sure you want to delete ("+ selectedCode + ") "+ selectedDeptName +"?",
                                                                     QMessageBox::Yes|QMessageBox::No);
        if(question == QMessageBox::Yes){
            QSqlQuery query;

            query.prepare(QString("UPDATE users "
                                  "SET departmentCode = :departmentCode "
                                  "WHERE departmentCode = '"+selectedCode+"'"));

            query.bindValue(":departmentCode", "unknown");

            query.exec();
            query.next();

            query.prepare(QString("DELETE FROM departments WHERE departmentCode = '"+selectedCode+"'"));

            if(query.exec()){
                QSqlQueryModel *model = new QSqlQueryModel();
                query.prepare(QString("SELECT departmentCode AS Code, departmentName AS Name, departmentAbbreviation AS Abbreviation, departmentManager AS DepartmentManager FROM departments"));

                query.exec();
                model->setQuery(query);
                ui->Mtbl_departments->setModel(model);
                ui->Mtbl_departments->verticalHeader()->setStyleSheet("::section{ background-color:rgb(222, 29, 29) }");
                ui->Mtbl_departments->horizontalHeader()->setDefaultAlignment(Qt::AlignLeft);
                ui->Mtbl_departments->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

                clearAll();

                QMessageBox::information(this,"Success","Department has been successfully deleted");
            } else {
                QMessageBox::information(this,"Error","Department could not be deleted, make sure all employees have re-assigned departments.");
            }
        }
    }
}

void departmentScreen::on_cb_departments_activated(const QString &arg1)
{
    QSqlQuery query;
    query.prepare(QString("SELECT departmentCode FROM departments "
                          "WHERE departmentName = '"+arg1+"'"));

    query.exec();
    query.next();

    QString departmentCode = query.value(0).toString();

    QSqlQueryModel *model = new QSqlQueryModel();
    query.prepare(QString("SELECT employeeID AS EmployeeID, CONCAT(firstname, ' ', lastname) AS Name, email AS Email FROM users "
                          "WHERE departmentCode = '"+departmentCode+"'"));

    query.exec();
    model->setQuery(query);
    ui->tbl_employees->setModel(model);
    ui->tbl_employees->verticalHeader()->setStyleSheet("::section{ background-color:rgb(222, 29, 29) }");
    ui->tbl_employees->horizontalHeader()->setDefaultAlignment(Qt::AlignLeft);
    ui->tbl_employees->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tbl_employees->horizontalHeader()->setSectionResizeMode(2, QHeaderView::ResizeToContents);
}

void departmentScreen::on_btn_save_clicked()
{
    if(ui->cb_departments->currentIndex() != -1){
        QString deptName = ui->cb_departments->currentText();
        std::string deptN = deptName.toStdString();

        std::string::iterator end_pos = std::remove(deptN.begin(), deptN.end(), ' ');
        deptN.erase(end_pos, deptN.end());

        QDate date = QDate::currentDate();
        ui->tbl_employees->grab().save(QString::fromStdString("saved_documents/departmentsLog/") + QString::fromStdString(deptN) + "_" + date.toString("dd.MM.yyyy") + ".png");
    }
}

void departmentScreen::on_le_search_textChanged(const QString &text)
{
    QSqlQueryModel *model = new QSqlQueryModel();
    QSortFilterProxyModel *proxy = new QSortFilterProxyModel();

    QSqlQuery query;

    query.prepare(QString("SELECT departmentName AS Name, departmentAbbreviation AS Abbreviation, departmentManager AS DepartmentManager, departmentContact AS DepartmentContact FROM departments"));

    query.exec();

    model->setQuery(query);

    proxy->setSourceModel(model);
    proxy->setFilterWildcard(text);

    ui->tbl_departments->setModel(proxy);
    ui->tbl_departments->verticalHeader()->setStyleSheet("::section{ background-color:rgb(222, 29, 29) }");
    ui->tbl_departments->horizontalHeader()->setDefaultAlignment(Qt::AlignLeft);
    ui->tbl_departments->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tbl_departments->horizontalHeader()->setSectionResizeMode(3, QHeaderView::ResizeToContents);
}

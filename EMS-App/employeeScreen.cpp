#include "employeeScreen.h"
#include "ui_employeeScreen.h"

employeeScreen::employeeScreen(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::employeeScreen)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
}

void employeeScreen::run(){
    ui->lbl_name->setText("Logged in as: " + user.getFullName());

    QSqlQueryModel *model = new QSqlQueryModel();

    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setUserName("admin");
    db.setPassword("5yHvkrLmMpUNKq5z");
    db.setDatabaseName("emsApp");

    if(db.open()){

        try {

            QSqlQuery query;
            query.prepare(QString("SELECT firstName, lastName, DOB, gender, email, employDate FROM users"));

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
            QMessageBox::information(this,"Error","Invalid character in password!");
        }

    } else {
        QMessageBox::information(this,"Not Connected","Database is not connected");
    }
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
    ui->stackedWidget->setCurrentIndex(0);
}

void employeeScreen::on_btn_insert_clicked()
{
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
}


void employeeScreen::on_btn_submit_clicked()
{
    QSqlQuery query;
    query.prepare("SELECT departmentID "
                  "FROM departments "
                  "WHERE departmentName = :departmentName");

    query.bindValue(":departmentName", ui->cb_department->currentText());
    query.exec();
    query.next();

    int departmentID = query.value(0).toInt();

    QString username = ui->le_username->text();
    QString password = ui->le_password->text();
    QString firstName = ui->le_firstName->text();
    QString lastName = ui->le_lastName->text();
    QString DOB = ui->de_DOB->text();
    QString gender = ui->le_gender->text();
    QString email = ui->le_email->text();
    QString employDate = ui->de_employDate->text();

//    ui->le_username->setText(username);
//    ui->le_password->setText(password);
//    ui->le_firstName->setText(firstName);
//    ui->le_lastName->setText(lastName);
//    ui->btn_clear->setText(DOB);
//    ui->le_gender->setText(gender);
//    ui->le_email->setText(email);
//    ui->btn_submit->setText(employDate);

    query.prepare("INSERT INTO users (departmentID, username, password, firstName, lastName, DOB, gender, email, employDate) "
                  "VALUES (:departmentID, :username, :password, :firstName, :lastName, :DOB, :gender, :email, :employDate)");
    query.bindValue(":departmentID", departmentID);
    query.bindValue(":username", username);
    query.bindValue(":password", password);
    query.bindValue(":firstName", firstName);
    query.bindValue(":lastName", lastName);
    query.bindValue(":DOB", DOB);
    query.bindValue(":gender", gender);
    query.bindValue(":email", email);
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
    ui->de_DOB->clear();
    ui->le_gender->clear();
    ui->cb_department->clear();
    ui->de_employDate->clear();
    ui->le_email->clear();
    ui->le_username->clear();
    ui->le_password->clear();

}

void employeeScreen::on_btn_clear_clicked()
{
    clearAllInsert();
}

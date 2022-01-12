#include "employeeScreen.h"
#include "ui_employeeScreen.h"

employeeScreen::employeeScreen(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::employeeScreen)
{
    ui->setupUi(this);
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
            query.prepare(QString("SELECT firstName, lastName, age, gender, department, phoneNo, employDate FROM users"));

            query.exec();

            model->setQuery(query);
            ui->tbl_users->setModel(model);
            ui->tbl_users->verticalHeader()->setStyleSheet("::section{ background-color:rgb(222, 29, 29) }");
            ui->tbl_users->horizontalHeader()->setDefaultAlignment(Qt::AlignLeft);
            ui->tbl_users->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
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

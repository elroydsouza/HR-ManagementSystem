/********************************************************************************
** Form generated from reading UI file 'employeeScreen.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPLOYEESCREEN_H
#define UI_EMPLOYEESCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_employeeScreen
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_6;
    QPushButton *btn_logo;
    QLabel *lbl_name;
    QSpacerItem *verticalSpacer;
    QPushButton *btn_search;
    QPushButton *btn_insert;
    QPushButton *btn_update;
    QPushButton *pushButton;
    QPushButton *btn_back;
    QSpacerItem *verticalSpacer_7;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_11;
    QLineEdit *le_search;
    QTableView *tbl_users;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_7;
    QSpacerItem *verticalSpacer_10;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label;
    QDateEdit *de_DOB;
    QLabel *label_4;
    QLineEdit *le_gender;
    QLineEdit *le_email;
    QLabel *label_20;
    QSpacerItem *verticalSpacer_4;
    QLineEdit *le_lastName;
    QLabel *label_8;
    QLabel *label_3;
    QLineEdit *le_firstName;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_5;
    QLineEdit *le_phoneNo;
    QLabel *label_22;
    QSpacerItem *verticalSpacer_8;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_9;
    QLineEdit *le_address;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_21;
    QGridLayout *gridLayout_2;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_5;
    QDateEdit *de_employDate;
    QLabel *label_6;
    QLabel *label_10;
    QComboBox *cb_department;
    QSpacerItem *verticalSpacer_9;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *le_employeeID;
    QPushButton *btn_generateID;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_clear;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btn_submit;
    QWidget *page_3;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_19;
    QTableView *tbl_usersUpdate;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_23;
    QLineEdit *Ule_employeeID;
    QLabel *label_12;
    QLineEdit *Ule_firstName;
    QLabel *label_13;
    QLineEdit *Ule_lastName;
    QLabel *label_14;
    QLineEdit *Ule_email;
    QLabel *label_18;
    QComboBox *Ucb_department;
    QLabel *label_15;
    QLineEdit *Ule_gender;
    QLabel *label_16;
    QLineEdit *Ule_phoneNo;
    QLabel *label_17;
    QLineEdit *Ule_address;
    QSpacerItem *verticalSpacer_11;
    QPushButton *Ubtn_update;

    void setupUi(QWidget *employeeScreen)
    {
        if (employeeScreen->objectName().isEmpty())
            employeeScreen->setObjectName(QString::fromUtf8("employeeScreen"));
        employeeScreen->resize(1000, 550);
        employeeScreen->setStyleSheet(QString::fromUtf8("background-color: rgb(39, 183, 229);"));
        horizontalLayout = new QHBoxLayout(employeeScreen);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(9, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, 0, -1);
        verticalSpacer_6 = new QSpacerItem(20, 9, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_6);

        btn_logo = new QPushButton(employeeScreen);
        btn_logo->setObjectName(QString::fromUtf8("btn_logo"));
        btn_logo->setMinimumSize(QSize(0, 50));
        btn_logo->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(btn_logo);

        lbl_name = new QLabel(employeeScreen);
        lbl_name->setObjectName(QString::fromUtf8("lbl_name"));

        verticalLayout->addWidget(lbl_name);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        btn_search = new QPushButton(employeeScreen);
        btn_search->setObjectName(QString::fromUtf8("btn_search"));
        btn_search->setMinimumSize(QSize(200, 75));

        verticalLayout->addWidget(btn_search);

        btn_insert = new QPushButton(employeeScreen);
        btn_insert->setObjectName(QString::fromUtf8("btn_insert"));
        btn_insert->setMinimumSize(QSize(0, 75));

        verticalLayout->addWidget(btn_insert);

        btn_update = new QPushButton(employeeScreen);
        btn_update->setObjectName(QString::fromUtf8("btn_update"));
        btn_update->setMinimumSize(QSize(0, 75));

        verticalLayout->addWidget(btn_update);

        pushButton = new QPushButton(employeeScreen);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(0, 75));

        verticalLayout->addWidget(pushButton);

        btn_back = new QPushButton(employeeScreen);
        btn_back->setObjectName(QString::fromUtf8("btn_back"));

        verticalLayout->addWidget(btn_back);

        verticalSpacer_7 = new QSpacerItem(20, 9, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_7);


        horizontalLayout->addLayout(verticalLayout);

        stackedWidget = new QStackedWidget(employeeScreen);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(243, 243, 243);"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        verticalLayout_2 = new QVBoxLayout(page);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_11 = new QLabel(page);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        QFont font;
        font.setPointSize(15);
        label_11->setFont(font);

        verticalLayout_2->addWidget(label_11);

        le_search = new QLineEdit(page);
        le_search->setObjectName(QString::fromUtf8("le_search"));

        verticalLayout_2->addWidget(le_search);

        tbl_users = new QTableView(page);
        tbl_users->setObjectName(QString::fromUtf8("tbl_users"));
        tbl_users->setStyleSheet(QString::fromUtf8("QHeaderView::section { background-color:black; color:white ; font-weight: bold}\n"
"QTableCornerButton::section { background-color:black }\n"
"verticalHeader::section{ background-color:rgb(190,1,1) }"));
        tbl_users->setAlternatingRowColors(true);
        tbl_users->setSelectionBehavior(QAbstractItemView::SelectRows);
        tbl_users->setShowGrid(false);
        tbl_users->setCornerButtonEnabled(false);

        verticalLayout_2->addWidget(tbl_users);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        verticalLayout_3 = new QVBoxLayout(page_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_7 = new QLabel(page_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);
        label_7->setFont(font);

        verticalLayout_3->addWidget(label_7);

        verticalSpacer_10 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_10);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 4, 1, 1, 1);

        label = new QLabel(page_2);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);

        gridLayout->addWidget(label, 3, 0, 1, 1);

        de_DOB = new QDateEdit(page_2);
        de_DOB->setObjectName(QString::fromUtf8("de_DOB"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(de_DOB->sizePolicy().hasHeightForWidth());
        de_DOB->setSizePolicy(sizePolicy1);
        de_DOB->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(de_DOB, 7, 4, 1, 1);

        label_4 = new QLabel(page_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);

        gridLayout->addWidget(label_4, 6, 0, 1, 1);

        le_gender = new QLineEdit(page_2);
        le_gender->setObjectName(QString::fromUtf8("le_gender"));
        le_gender->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(le_gender, 7, 0, 1, 1);

        le_email = new QLineEdit(page_2);
        le_email->setObjectName(QString::fromUtf8("le_email"));
        le_email->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(le_email, 4, 4, 1, 1);

        label_20 = new QLabel(page_2);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        QFont font2;
        font2.setPointSize(13);
        font2.setBold(false);
        font2.setUnderline(true);
        font2.setWeight(50);
        label_20->setFont(font2);

        gridLayout->addWidget(label_20, 1, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_4, 2, 2, 1, 1);

        le_lastName = new QLineEdit(page_2);
        le_lastName->setObjectName(QString::fromUtf8("le_lastName"));
        le_lastName->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(le_lastName, 4, 2, 1, 1);

        label_8 = new QLabel(page_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font1);

        gridLayout->addWidget(label_8, 3, 4, 1, 1);

        label_3 = new QLabel(page_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);

        gridLayout->addWidget(label_3, 6, 4, 1, 1);

        le_firstName = new QLineEdit(page_2);
        le_firstName->setObjectName(QString::fromUtf8("le_firstName"));
        le_firstName->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(le_firstName, 4, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 4, 3, 1, 1);

        label_2 = new QLabel(page_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);

        gridLayout->addWidget(label_2, 3, 2, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_5, 5, 2, 1, 1);

        le_phoneNo = new QLineEdit(page_2);
        le_phoneNo->setObjectName(QString::fromUtf8("le_phoneNo"));
        le_phoneNo->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(le_phoneNo, 7, 2, 1, 1);

        label_22 = new QLabel(page_2);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setFont(font1);

        gridLayout->addWidget(label_22, 6, 2, 1, 1);


        verticalLayout_3->addLayout(gridLayout);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_8);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_9 = new QLabel(page_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font1);

        verticalLayout_5->addWidget(label_9);

        le_address = new QLineEdit(page_2);
        le_address->setObjectName(QString::fromUtf8("le_address"));
        le_address->setMinimumSize(QSize(0, 30));

        verticalLayout_5->addWidget(le_address);


        verticalLayout_3->addLayout(verticalLayout_5);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        label_21 = new QLabel(page_2);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Ubuntu"));
        font3.setPointSize(13);
        font3.setBold(false);
        font3.setUnderline(true);
        font3.setWeight(50);
        label_21->setFont(font3);

        verticalLayout_3->addWidget(label_21);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_5 = new QLabel(page_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font1);

        gridLayout_2->addWidget(label_5, 1, 0, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_6, 1, 3, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 1, 1, 1, 1);

        de_employDate = new QDateEdit(page_2);
        de_employDate->setObjectName(QString::fromUtf8("de_employDate"));
        sizePolicy1.setHeightForWidth(de_employDate->sizePolicy().hasHeightForWidth());
        de_employDate->setSizePolicy(sizePolicy1);
        de_employDate->setMinimumSize(QSize(0, 30));

        gridLayout_2->addWidget(de_employDate, 2, 4, 1, 1);

        label_6 = new QLabel(page_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font1);

        gridLayout_2->addWidget(label_6, 1, 4, 1, 1);

        label_10 = new QLabel(page_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font1);

        gridLayout_2->addWidget(label_10, 1, 2, 1, 1);

        cb_department = new QComboBox(page_2);
        cb_department->setObjectName(QString::fromUtf8("cb_department"));
        sizePolicy1.setHeightForWidth(cb_department->sizePolicy().hasHeightForWidth());
        cb_department->setSizePolicy(sizePolicy1);
        cb_department->setMinimumSize(QSize(0, 30));

        gridLayout_2->addWidget(cb_department, 2, 0, 1, 1);

        verticalSpacer_9 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_9, 0, 2, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        le_employeeID = new QLineEdit(page_2);
        le_employeeID->setObjectName(QString::fromUtf8("le_employeeID"));
        le_employeeID->setMinimumSize(QSize(0, 30));
        le_employeeID->setReadOnly(true);

        horizontalLayout_4->addWidget(le_employeeID);

        btn_generateID = new QPushButton(page_2);
        btn_generateID->setObjectName(QString::fromUtf8("btn_generateID"));
        btn_generateID->setMinimumSize(QSize(0, 30));

        horizontalLayout_4->addWidget(btn_generateID);


        gridLayout_2->addLayout(horizontalLayout_4, 2, 2, 1, 1);


        verticalLayout_3->addLayout(gridLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        btn_clear = new QPushButton(page_2);
        btn_clear->setObjectName(QString::fromUtf8("btn_clear"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btn_clear->sizePolicy().hasHeightForWidth());
        btn_clear->setSizePolicy(sizePolicy2);
        btn_clear->setMinimumSize(QSize(125, 30));

        horizontalLayout_3->addWidget(btn_clear);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        btn_submit = new QPushButton(page_2);
        btn_submit->setObjectName(QString::fromUtf8("btn_submit"));
        btn_submit->setMinimumSize(QSize(125, 30));

        horizontalLayout_3->addWidget(btn_submit);


        verticalLayout_3->addLayout(horizontalLayout_3);

        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        horizontalLayout_2 = new QHBoxLayout(page_3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(-1, -1, 0, -1);
        label_19 = new QLabel(page_3);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setFont(font);

        verticalLayout_6->addWidget(label_19);

        tbl_usersUpdate = new QTableView(page_3);
        tbl_usersUpdate->setObjectName(QString::fromUtf8("tbl_usersUpdate"));
        tbl_usersUpdate->setStyleSheet(QString::fromUtf8("QHeaderView::section { background-color:black; color:white ; font-weight: bold}\n"
"QTableCornerButton::section { background-color:black }\n"
"verticalHeader::section{ background-color:rgb(190,1,1) }"));
        tbl_usersUpdate->setSelectionBehavior(QAbstractItemView::SelectRows);
        tbl_usersUpdate->setShowGrid(false);

        verticalLayout_6->addWidget(tbl_usersUpdate);


        horizontalLayout_2->addLayout(verticalLayout_6);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(-1, -1, 0, -1);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_23 = new QLabel(page_3);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        QFont font4;
        font4.setBold(true);
        font4.setWeight(75);
        label_23->setFont(font4);

        horizontalLayout_6->addWidget(label_23);

        Ule_employeeID = new QLineEdit(page_3);
        Ule_employeeID->setObjectName(QString::fromUtf8("Ule_employeeID"));
        Ule_employeeID->setReadOnly(true);

        horizontalLayout_6->addWidget(Ule_employeeID);


        verticalLayout_4->addLayout(horizontalLayout_6);

        label_12 = new QLabel(page_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        verticalLayout_4->addWidget(label_12);

        Ule_firstName = new QLineEdit(page_3);
        Ule_firstName->setObjectName(QString::fromUtf8("Ule_firstName"));

        verticalLayout_4->addWidget(Ule_firstName);

        label_13 = new QLabel(page_3);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        verticalLayout_4->addWidget(label_13);

        Ule_lastName = new QLineEdit(page_3);
        Ule_lastName->setObjectName(QString::fromUtf8("Ule_lastName"));

        verticalLayout_4->addWidget(Ule_lastName);

        label_14 = new QLabel(page_3);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        verticalLayout_4->addWidget(label_14);

        Ule_email = new QLineEdit(page_3);
        Ule_email->setObjectName(QString::fromUtf8("Ule_email"));

        verticalLayout_4->addWidget(Ule_email);

        label_18 = new QLabel(page_3);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        verticalLayout_4->addWidget(label_18);

        Ucb_department = new QComboBox(page_3);
        Ucb_department->setObjectName(QString::fromUtf8("Ucb_department"));

        verticalLayout_4->addWidget(Ucb_department);

        label_15 = new QLabel(page_3);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        verticalLayout_4->addWidget(label_15);

        Ule_gender = new QLineEdit(page_3);
        Ule_gender->setObjectName(QString::fromUtf8("Ule_gender"));

        verticalLayout_4->addWidget(Ule_gender);

        label_16 = new QLabel(page_3);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        verticalLayout_4->addWidget(label_16);

        Ule_phoneNo = new QLineEdit(page_3);
        Ule_phoneNo->setObjectName(QString::fromUtf8("Ule_phoneNo"));

        verticalLayout_4->addWidget(Ule_phoneNo);

        label_17 = new QLabel(page_3);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        verticalLayout_4->addWidget(label_17);

        Ule_address = new QLineEdit(page_3);
        Ule_address->setObjectName(QString::fromUtf8("Ule_address"));

        verticalLayout_4->addWidget(Ule_address);

        verticalSpacer_11 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_11);

        Ubtn_update = new QPushButton(page_3);
        Ubtn_update->setObjectName(QString::fromUtf8("Ubtn_update"));
        Ubtn_update->setMinimumSize(QSize(0, 30));

        verticalLayout_4->addWidget(Ubtn_update);


        horizontalLayout_2->addLayout(verticalLayout_4);

        stackedWidget->addWidget(page_3);

        horizontalLayout->addWidget(stackedWidget);


        retranslateUi(employeeScreen);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(employeeScreen);
    } // setupUi

    void retranslateUi(QWidget *employeeScreen)
    {
        employeeScreen->setWindowTitle(QApplication::translate("employeeScreen", "Form", nullptr));
        btn_logo->setText(QString());
        lbl_name->setText(QApplication::translate("employeeScreen", "Logged in as: User", nullptr));
        btn_search->setText(QApplication::translate("employeeScreen", "Search", nullptr));
        btn_insert->setText(QApplication::translate("employeeScreen", "Insert Employee", nullptr));
        btn_update->setText(QApplication::translate("employeeScreen", "Update Employee", nullptr));
        pushButton->setText(QApplication::translate("employeeScreen", "Delete Employee", nullptr));
        btn_back->setText(QApplication::translate("employeeScreen", "Back", nullptr));
        label_11->setText(QApplication::translate("employeeScreen", "Search through employees", nullptr));
        label_7->setText(QApplication::translate("employeeScreen", "Insert Employee", nullptr));
        label->setText(QApplication::translate("employeeScreen", "FirstName", nullptr));
        de_DOB->setDisplayFormat(QApplication::translate("employeeScreen", "yyyy-MM-dd", nullptr));
        label_4->setText(QApplication::translate("employeeScreen", "Gender", nullptr));
        label_20->setText(QApplication::translate("employeeScreen", "Personal Information", nullptr));
        label_8->setText(QApplication::translate("employeeScreen", "Email", nullptr));
        label_3->setText(QApplication::translate("employeeScreen", "Date of Birth", nullptr));
        label_2->setText(QApplication::translate("employeeScreen", "LastName", nullptr));
        label_22->setText(QApplication::translate("employeeScreen", "Phone Number", nullptr));
        label_9->setText(QApplication::translate("employeeScreen", "Address", nullptr));
        label_21->setText(QApplication::translate("employeeScreen", "Bradford Swissport Information", nullptr));
        label_5->setText(QApplication::translate("employeeScreen", "Department", nullptr));
        de_employDate->setDisplayFormat(QApplication::translate("employeeScreen", "yyyy-MM-dd", nullptr));
        label_6->setText(QApplication::translate("employeeScreen", "Employment Date", nullptr));
        label_10->setText(QApplication::translate("employeeScreen", "Employee ID", nullptr));
        btn_generateID->setText(QApplication::translate("employeeScreen", "Generate", nullptr));
        btn_clear->setText(QApplication::translate("employeeScreen", "Clear", nullptr));
        btn_submit->setText(QApplication::translate("employeeScreen", "Submit", nullptr));
        label_19->setText(QApplication::translate("employeeScreen", "Update employees from list", nullptr));
        label_23->setText(QApplication::translate("employeeScreen", "Employee ID:", nullptr));
        label_12->setText(QApplication::translate("employeeScreen", "First Name", nullptr));
        label_13->setText(QApplication::translate("employeeScreen", "Last Name", nullptr));
        label_14->setText(QApplication::translate("employeeScreen", "Email", nullptr));
        label_18->setText(QApplication::translate("employeeScreen", "Department", nullptr));
        label_15->setText(QApplication::translate("employeeScreen", "Gender", nullptr));
        label_16->setText(QApplication::translate("employeeScreen", "Phone Number", nullptr));
        label_17->setText(QApplication::translate("employeeScreen", "Address", nullptr));
        Ubtn_update->setText(QApplication::translate("employeeScreen", "Update", nullptr));
    } // retranslateUi

};

namespace Ui {
    class employeeScreen: public Ui_employeeScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPLOYEESCREEN_H

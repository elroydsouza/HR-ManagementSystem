/********************************************************************************
** Form generated from reading UI file 'employeeScreen.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPLOYEESCREEN_H
#define UI_EMPLOYEESCREEN_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtGui/QIcon>
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
    QWidget *verticalSidebar;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *btn_logo;
    QSpacerItem *horizontalSpacer_9;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer_10;
    QLabel *lbl_name;
    QSpacerItem *horizontalSpacer_11;
    QSpacerItem *verticalSpacer_15;
    QLabel *label_29;
    QSpacerItem *verticalSpacer;
    QPushButton *btn_search;
    QPushButton *btn_insert;
    QPushButton *btn_update;
    QPushButton *btn_delete;
    QPushButton *btn_back;
    QSpacerItem *verticalSpacer_7;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_11;
    QPushButton *btn_save;
    QLineEdit *le_search;
    QTableView *tbl_users;
    QLabel *lbl_doubleClickToView;
    QWidget *grid_extraInfo;
    QGridLayout *gridLayout_3;
    QLabel *label_30;
    QLabel *lbl_address;
    QLabel *label_31;
    QLabel *lbl_phoneNo;
    QLabel *label_32;
    QLabel *lbl_email;
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
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_12;
    QPushButton *Ubtn_update;
    QSpacerItem *horizontalSpacer_13;
    QWidget *page_4;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_24;
    QTableView *Dtbl_users;
    QSpacerItem *verticalSpacer_13;
    QLabel *label_28;
    QSpacerItem *verticalSpacer_14;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_25;
    QLineEdit *Dle_employeeID;
    QLabel *label_26;
    QLineEdit *Dle_name;
    QLabel *label_27;
    QLineEdit *Dle_departmentName;
    QSpacerItem *verticalSpacer_12;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *Dbtn_delete;

    void setupUi(QWidget *employeeScreen)
    {
        if (employeeScreen->objectName().isEmpty())
            employeeScreen->setObjectName(QString::fromUtf8("employeeScreen"));
        employeeScreen->resize(1000, 550);
        employeeScreen->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout = new QHBoxLayout(employeeScreen);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalSidebar = new QWidget(employeeScreen);
        verticalSidebar->setObjectName(QString::fromUtf8("verticalSidebar"));
        verticalSidebar->setStyleSheet(QString::fromUtf8("background-color: rgb(39, 183, 229);"));
        verticalLayout = new QVBoxLayout(verticalSidebar);
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_6 = new QSpacerItem(20, 9, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_6);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalSpacer_8 = new QSpacerItem(2, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_8);

        btn_logo = new QPushButton(verticalSidebar);
        btn_logo->setObjectName(QString::fromUtf8("btn_logo"));
        btn_logo->setMinimumSize(QSize(0, 50));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        btn_logo->setFont(font);
        btn_logo->setStyleSheet(QString::fromUtf8("background-color: rgb(239, 41, 41);"));

        horizontalLayout_10->addWidget(btn_logo);

        horizontalSpacer_9 = new QSpacerItem(2, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_9);


        verticalLayout->addLayout(horizontalLayout_10);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalSpacer_10 = new QSpacerItem(2, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_10);

        lbl_name = new QLabel(verticalSidebar);
        lbl_name->setObjectName(QString::fromUtf8("lbl_name"));

        horizontalLayout_12->addWidget(lbl_name);

        horizontalSpacer_11 = new QSpacerItem(2, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_11);


        verticalLayout->addLayout(horizontalLayout_12);

        verticalSpacer_15 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_15);

        label_29 = new QLabel(verticalSidebar);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        label_29->setFont(font1);
        label_29->setStyleSheet(QString::fromUtf8(""));
        label_29->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_29);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        btn_search = new QPushButton(verticalSidebar);
        btn_search->setObjectName(QString::fromUtf8("btn_search"));
        btn_search->setMinimumSize(QSize(210, 75));
        btn_search->setStyleSheet(QString::fromUtf8("QPushButton{ border: none; Text-align:left;}\n"
"\n"
"QPushButton::hover { background-color: rgb(97, 199, 231); }\n"
"\n"
"QPushButton::pressed { background-color: rgb(48, 152, 185); }"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../ask-for-help.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_search->setIcon(icon);
        btn_search->setIconSize(QSize(30, 30));
        btn_search->setCheckable(true);
        btn_search->setChecked(true);
        btn_search->setAutoExclusive(true);
        btn_search->setFlat(true);

        verticalLayout->addWidget(btn_search);

        btn_insert = new QPushButton(verticalSidebar);
        btn_insert->setObjectName(QString::fromUtf8("btn_insert"));
        btn_insert->setMinimumSize(QSize(0, 75));
        btn_insert->setStyleSheet(QString::fromUtf8("QPushButton{ border: none; Text-align:left;}\n"
"\n"
"QPushButton::hover { background-color: rgb(97, 199, 231); }\n"
"\n"
"QPushButton::pressed { background-color: rgb(48, 152, 185); }"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../add-user.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_insert->setIcon(icon1);
        btn_insert->setIconSize(QSize(30, 30));
        btn_insert->setCheckable(true);
        btn_insert->setAutoExclusive(true);
        btn_insert->setFlat(true);

        verticalLayout->addWidget(btn_insert);

        btn_update = new QPushButton(verticalSidebar);
        btn_update->setObjectName(QString::fromUtf8("btn_update"));
        btn_update->setMinimumSize(QSize(0, 75));
        btn_update->setStyleSheet(QString::fromUtf8("QPushButton{ border: none; Text-align:left;}\n"
"\n"
"QPushButton::hover { background-color: rgb(97, 199, 231); }\n"
"\n"
"QPushButton::pressed { background-color: rgb(48, 152, 185); }\n"
""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../../settings-gear-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_update->setIcon(icon2);
        btn_update->setIconSize(QSize(30, 30));
        btn_update->setCheckable(true);
        btn_update->setAutoExclusive(true);
        btn_update->setFlat(true);

        verticalLayout->addWidget(btn_update);

        btn_delete = new QPushButton(verticalSidebar);
        btn_delete->setObjectName(QString::fromUtf8("btn_delete"));
        btn_delete->setMinimumSize(QSize(0, 75));
        btn_delete->setStyleSheet(QString::fromUtf8("QPushButton{ border: none; Text-align:left;}\n"
"\n"
"QPushButton::hover { background-color: rgb(97, 199, 231); }\n"
"\n"
"QPushButton::pressed { background-color: rgb(48, 152, 185); }"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../../delete-user.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_delete->setIcon(icon3);
        btn_delete->setIconSize(QSize(30, 30));
        btn_delete->setCheckable(true);
        btn_delete->setChecked(false);
        btn_delete->setAutoExclusive(true);
        btn_delete->setFlat(true);

        verticalLayout->addWidget(btn_delete);

        btn_back = new QPushButton(verticalSidebar);
        btn_back->setObjectName(QString::fromUtf8("btn_back"));

        verticalLayout->addWidget(btn_back);

        verticalSpacer_7 = new QSpacerItem(20, 9, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_7);


        horizontalLayout->addWidget(verticalSidebar);

        stackedWidget = new QStackedWidget(employeeScreen);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(243, 243, 243);"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        verticalLayout_2 = new QVBoxLayout(page);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_11 = new QLabel(page);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        QFont font2;
        font2.setPointSize(15);
        label_11->setFont(font2);

        horizontalLayout_9->addWidget(label_11);

        btn_save = new QPushButton(page);
        btn_save->setObjectName(QString::fromUtf8("btn_save"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btn_save->sizePolicy().hasHeightForWidth());
        btn_save->setSizePolicy(sizePolicy);
        btn_save->setMinimumSize(QSize(170, 0));
        btn_save->setStyleSheet(QString::fromUtf8("background-color: rgb(39, 183, 229);"));

        horizontalLayout_9->addWidget(btn_save);


        verticalLayout_2->addLayout(horizontalLayout_9);

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

        lbl_doubleClickToView = new QLabel(page);
        lbl_doubleClickToView->setObjectName(QString::fromUtf8("lbl_doubleClickToView"));

        verticalLayout_2->addWidget(lbl_doubleClickToView);

        grid_extraInfo = new QWidget(page);
        grid_extraInfo->setObjectName(QString::fromUtf8("grid_extraInfo"));
        gridLayout_3 = new QGridLayout(grid_extraInfo);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_30 = new QLabel(grid_extraInfo);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setFont(font);

        gridLayout_3->addWidget(label_30, 0, 1, 1, 1);

        lbl_address = new QLabel(grid_extraInfo);
        lbl_address->setObjectName(QString::fromUtf8("lbl_address"));

        gridLayout_3->addWidget(lbl_address, 1, 3, 1, 1);

        label_31 = new QLabel(grid_extraInfo);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setFont(font);

        gridLayout_3->addWidget(label_31, 0, 3, 1, 1);

        lbl_phoneNo = new QLabel(grid_extraInfo);
        lbl_phoneNo->setObjectName(QString::fromUtf8("lbl_phoneNo"));

        gridLayout_3->addWidget(lbl_phoneNo, 1, 1, 1, 1);

        label_32 = new QLabel(grid_extraInfo);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setFont(font);

        gridLayout_3->addWidget(label_32, 0, 0, 1, 1);

        lbl_email = new QLabel(grid_extraInfo);
        lbl_email->setObjectName(QString::fromUtf8("lbl_email"));

        gridLayout_3->addWidget(lbl_email, 1, 0, 1, 1);


        verticalLayout_2->addWidget(grid_extraInfo);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        verticalLayout_3 = new QVBoxLayout(page_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_7 = new QLabel(page_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy1);
        label_7->setFont(font2);

        verticalLayout_3->addWidget(label_7);

        verticalSpacer_10 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_10);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 4, 1, 1, 1);

        label = new QLabel(page_2);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font3;
        font3.setPointSize(11);
        font3.setBold(true);
        font3.setWeight(75);
        label->setFont(font3);

        gridLayout->addWidget(label, 3, 0, 1, 1);

        de_DOB = new QDateEdit(page_2);
        de_DOB->setObjectName(QString::fromUtf8("de_DOB"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(de_DOB->sizePolicy().hasHeightForWidth());
        de_DOB->setSizePolicy(sizePolicy2);
        de_DOB->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(de_DOB, 7, 4, 1, 1);

        label_4 = new QLabel(page_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font3);

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
        QFont font4;
        font4.setPointSize(13);
        font4.setBold(false);
        font4.setUnderline(true);
        font4.setWeight(50);
        label_20->setFont(font4);

        gridLayout->addWidget(label_20, 1, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_4, 2, 2, 1, 1);

        le_lastName = new QLineEdit(page_2);
        le_lastName->setObjectName(QString::fromUtf8("le_lastName"));
        le_lastName->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(le_lastName, 4, 2, 1, 1);

        label_8 = new QLabel(page_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font3);

        gridLayout->addWidget(label_8, 3, 4, 1, 1);

        label_3 = new QLabel(page_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font3);

        gridLayout->addWidget(label_3, 6, 4, 1, 1);

        le_firstName = new QLineEdit(page_2);
        le_firstName->setObjectName(QString::fromUtf8("le_firstName"));
        le_firstName->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(le_firstName, 4, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 4, 3, 1, 1);

        label_2 = new QLabel(page_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font3);

        gridLayout->addWidget(label_2, 3, 2, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_5, 5, 2, 1, 1);

        le_phoneNo = new QLineEdit(page_2);
        le_phoneNo->setObjectName(QString::fromUtf8("le_phoneNo"));
        le_phoneNo->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(le_phoneNo, 7, 2, 1, 1);

        label_22 = new QLabel(page_2);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setFont(font3);

        gridLayout->addWidget(label_22, 6, 2, 1, 1);


        verticalLayout_3->addLayout(gridLayout);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_8);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_9 = new QLabel(page_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font3);

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
        QFont font5;
        font5.setFamily(QString::fromUtf8("Ubuntu"));
        font5.setPointSize(13);
        font5.setBold(false);
        font5.setUnderline(true);
        font5.setWeight(50);
        label_21->setFont(font5);

        verticalLayout_3->addWidget(label_21);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_5 = new QLabel(page_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font3);

        gridLayout_2->addWidget(label_5, 1, 0, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_6, 1, 3, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 1, 1, 1, 1);

        de_employDate = new QDateEdit(page_2);
        de_employDate->setObjectName(QString::fromUtf8("de_employDate"));
        sizePolicy2.setHeightForWidth(de_employDate->sizePolicy().hasHeightForWidth());
        de_employDate->setSizePolicy(sizePolicy2);
        de_employDate->setMinimumSize(QSize(0, 30));
        de_employDate->setMinimumDate(QDate(2022, 1, 1));

        gridLayout_2->addWidget(de_employDate, 2, 4, 1, 1);

        label_6 = new QLabel(page_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font3);

        gridLayout_2->addWidget(label_6, 1, 4, 1, 1);

        label_10 = new QLabel(page_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font3);

        gridLayout_2->addWidget(label_10, 1, 2, 1, 1);

        cb_department = new QComboBox(page_2);
        cb_department->setObjectName(QString::fromUtf8("cb_department"));
        sizePolicy2.setHeightForWidth(cb_department->sizePolicy().hasHeightForWidth());
        cb_department->setSizePolicy(sizePolicy2);
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
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(btn_clear->sizePolicy().hasHeightForWidth());
        btn_clear->setSizePolicy(sizePolicy3);
        btn_clear->setMinimumSize(QSize(125, 30));

        horizontalLayout_3->addWidget(btn_clear);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        btn_submit = new QPushButton(page_2);
        btn_submit->setObjectName(QString::fromUtf8("btn_submit"));
        btn_submit->setMinimumSize(QSize(125, 30));
        btn_submit->setStyleSheet(QString::fromUtf8("background-color: rgb(39, 183, 229);"));

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
        label_19->setFont(font2);

        verticalLayout_6->addWidget(label_19);

        tbl_usersUpdate = new QTableView(page_3);
        tbl_usersUpdate->setObjectName(QString::fromUtf8("tbl_usersUpdate"));
        tbl_usersUpdate->setStyleSheet(QString::fromUtf8("QHeaderView::section { background-color:black; color:white ; font-weight: bold}\n"
"QTableCornerButton::section { background-color:black }\n"
"verticalHeader::section{ background-color:rgb(190,1,1) }"));
        tbl_usersUpdate->setAlternatingRowColors(true);
        tbl_usersUpdate->setSelectionBehavior(QAbstractItemView::SelectRows);
        tbl_usersUpdate->setShowGrid(false);
        tbl_usersUpdate->setCornerButtonEnabled(false);

        verticalLayout_6->addWidget(tbl_usersUpdate);


        horizontalLayout_2->addLayout(verticalLayout_6);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(-1, -1, 0, -1);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_23 = new QLabel(page_3);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setFont(font);

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

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_12);

        Ubtn_update = new QPushButton(page_3);
        Ubtn_update->setObjectName(QString::fromUtf8("Ubtn_update"));
        Ubtn_update->setMinimumSize(QSize(0, 30));
        Ubtn_update->setStyleSheet(QString::fromUtf8("background-color: rgb(39, 183, 229);"));

        horizontalLayout_5->addWidget(Ubtn_update);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_13);


        verticalLayout_4->addLayout(horizontalLayout_5);


        horizontalLayout_2->addLayout(verticalLayout_4);

        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        verticalLayout_8 = new QVBoxLayout(page_4);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        label_24 = new QLabel(page_4);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setFont(font2);

        verticalLayout_8->addWidget(label_24);

        Dtbl_users = new QTableView(page_4);
        Dtbl_users->setObjectName(QString::fromUtf8("Dtbl_users"));
        Dtbl_users->setStyleSheet(QString::fromUtf8("QHeaderView::section { background-color:black; color:white ; font-weight: bold}\n"
"QTableCornerButton::section { background-color:black }\n"
"verticalHeader::section{ background-color:rgb(190,1,1) }"));
        Dtbl_users->setAlternatingRowColors(true);
        Dtbl_users->setSelectionBehavior(QAbstractItemView::SelectRows);
        Dtbl_users->setShowGrid(false);
        Dtbl_users->setCornerButtonEnabled(false);

        verticalLayout_8->addWidget(Dtbl_users);

        verticalSpacer_13 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_8->addItem(verticalSpacer_13);

        label_28 = new QLabel(page_4);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setFont(font);

        verticalLayout_8->addWidget(label_28);

        verticalSpacer_14 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_8->addItem(verticalSpacer_14);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_25 = new QLabel(page_4);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        horizontalLayout_7->addWidget(label_25);

        Dle_employeeID = new QLineEdit(page_4);
        Dle_employeeID->setObjectName(QString::fromUtf8("Dle_employeeID"));
        Dle_employeeID->setReadOnly(true);

        horizontalLayout_7->addWidget(Dle_employeeID);

        label_26 = new QLabel(page_4);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        horizontalLayout_7->addWidget(label_26);

        Dle_name = new QLineEdit(page_4);
        Dle_name->setObjectName(QString::fromUtf8("Dle_name"));
        Dle_name->setReadOnly(true);

        horizontalLayout_7->addWidget(Dle_name);

        label_27 = new QLabel(page_4);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        horizontalLayout_7->addWidget(label_27);

        Dle_departmentName = new QLineEdit(page_4);
        Dle_departmentName->setObjectName(QString::fromUtf8("Dle_departmentName"));
        Dle_departmentName->setReadOnly(true);

        horizontalLayout_7->addWidget(Dle_departmentName);


        verticalLayout_8->addLayout(horizontalLayout_7);

        verticalSpacer_12 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_8->addItem(verticalSpacer_12);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_7);

        Dbtn_delete = new QPushButton(page_4);
        Dbtn_delete->setObjectName(QString::fromUtf8("Dbtn_delete"));
        Dbtn_delete->setMinimumSize(QSize(100, 30));
        Dbtn_delete->setStyleSheet(QString::fromUtf8("background-color: rgb(239, 41, 41);"));

        horizontalLayout_8->addWidget(Dbtn_delete);


        verticalLayout_8->addLayout(horizontalLayout_8);

        stackedWidget->addWidget(page_4);

        horizontalLayout->addWidget(stackedWidget);


        retranslateUi(employeeScreen);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(employeeScreen);
    } // setupUi

    void retranslateUi(QWidget *employeeScreen)
    {
        employeeScreen->setWindowTitle(QApplication::translate("employeeScreen", "Form", nullptr));
        btn_logo->setText(QApplication::translate("employeeScreen", "BRADFORD SWISSPORT", nullptr));
        lbl_name->setText(QApplication::translate("employeeScreen", "Logged in as: User", nullptr));
        label_29->setText(QApplication::translate("employeeScreen", "User Maintenance", nullptr));
        btn_search->setText(QApplication::translate("employeeScreen", "Search", nullptr));
        btn_insert->setText(QApplication::translate("employeeScreen", "Insert Employee", nullptr));
        btn_update->setText(QApplication::translate("employeeScreen", "Update Employee", nullptr));
        btn_delete->setText(QApplication::translate("employeeScreen", "Delete Employee", nullptr));
        btn_back->setText(QApplication::translate("employeeScreen", "Back", nullptr));
        label_11->setText(QApplication::translate("employeeScreen", "Search through employees", nullptr));
        btn_save->setText(QApplication::translate("employeeScreen", "Save Employee Table", nullptr));
        le_search->setPlaceholderText(QApplication::translate("employeeScreen", "Type employee name here...", nullptr));
        lbl_doubleClickToView->setText(QApplication::translate("employeeScreen", "Double click an employee to view extra employee information..", nullptr));
        label_30->setText(QApplication::translate("employeeScreen", "Phone Number:", nullptr));
        lbl_address->setText(QApplication::translate("employeeScreen", "TextLabel", nullptr));
        label_31->setText(QApplication::translate("employeeScreen", "Address:", nullptr));
        lbl_phoneNo->setText(QApplication::translate("employeeScreen", "TextLabel", nullptr));
        label_32->setText(QApplication::translate("employeeScreen", "Email:", nullptr));
        lbl_email->setText(QApplication::translate("employeeScreen", "TextLabel", nullptr));
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
        label_19->setText(QApplication::translate("employeeScreen", "Update employees from table", nullptr));
        label_23->setText(QApplication::translate("employeeScreen", "Employee ID:", nullptr));
        label_12->setText(QApplication::translate("employeeScreen", "First Name", nullptr));
        label_13->setText(QApplication::translate("employeeScreen", "Last Name", nullptr));
        label_14->setText(QApplication::translate("employeeScreen", "Email", nullptr));
        label_18->setText(QApplication::translate("employeeScreen", "Department", nullptr));
        label_15->setText(QApplication::translate("employeeScreen", "Gender", nullptr));
        label_16->setText(QApplication::translate("employeeScreen", "Phone Number", nullptr));
        label_17->setText(QApplication::translate("employeeScreen", "Address", nullptr));
        Ubtn_update->setText(QApplication::translate("employeeScreen", "Update", nullptr));
        label_24->setText(QApplication::translate("employeeScreen", "Delete employees from table", nullptr));
        label_28->setText(QApplication::translate("employeeScreen", "Employee Selected:", nullptr));
        label_25->setText(QApplication::translate("employeeScreen", "Employee ID:", nullptr));
        label_26->setText(QApplication::translate("employeeScreen", "Name:", nullptr));
        label_27->setText(QApplication::translate("employeeScreen", "Department Name:", nullptr));
        Dbtn_delete->setText(QApplication::translate("employeeScreen", "DELETE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class employeeScreen: public Ui_employeeScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPLOYEESCREEN_H

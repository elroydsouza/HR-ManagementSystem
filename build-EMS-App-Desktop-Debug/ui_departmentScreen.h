/********************************************************************************
** Form generated from reading UI file 'departmentScreen.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEPARTMENTSCREEN_H
#define UI_DEPARTMENTSCREEN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
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

class Ui_departmentScreen
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
    QPushButton *btn_maintenance;
    QSpacerItem *verticalSpacer_2;
    QPushButton *btn_back;
    QSpacerItem *verticalSpacer_7;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_11;
    QLineEdit *le_search;
    QTableView *tbl_departments;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_12;
    QPushButton *btn_save;
    QComboBox *cb_departments;
    QTableView *tbl_employees;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_7;
    QTableView *Mtbl_departments;
    QHBoxLayout *horizontalLayout_4;
    QLabel *lbl_deptSelectedPrefix;
    QLabel *lbl_deptSelected;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *btn_delete;
    QGridLayout *gridLayout_2;
    QLineEdit *le_deptName;
    QLabel *label_3;
    QLabel *label;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *le_deptCode;
    QPushButton *btn_generate;
    QLineEdit *le_deptAbbreviation;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_6;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLineEdit *le_deptManager;
    QLineEdit *le_deptContact;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btn_clear;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_update;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btn_insert;
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
    QLineEdit *Dle_firstName;
    QLabel *label_27;
    QLineEdit *Dle_lastName;
    QSpacerItem *verticalSpacer_12;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *Dbtn_delete;

    void setupUi(QWidget *departmentScreen)
    {
        if (departmentScreen->objectName().isEmpty())
            departmentScreen->setObjectName(QString::fromUtf8("departmentScreen"));
        departmentScreen->resize(1000, 550);
        departmentScreen->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout = new QHBoxLayout(departmentScreen);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalSidebar = new QWidget(departmentScreen);
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

        verticalSpacer_15 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_15);

        label_29 = new QLabel(verticalSidebar);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        label_29->setFont(font1);
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

        btn_maintenance = new QPushButton(verticalSidebar);
        btn_maintenance->setObjectName(QString::fromUtf8("btn_maintenance"));
        btn_maintenance->setMinimumSize(QSize(0, 75));
        btn_maintenance->setStyleSheet(QString::fromUtf8("QPushButton{ border: none; Text-align:left;}\n"
"\n"
"QPushButton::hover { background-color: rgb(97, 199, 231); }\n"
"\n"
"QPushButton::pressed { background-color: rgb(48, 152, 185); }"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../settings-gear-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_maintenance->setIcon(icon1);
        btn_maintenance->setIconSize(QSize(30, 30));
        btn_maintenance->setCheckable(true);
        btn_maintenance->setAutoExclusive(true);
        btn_maintenance->setFlat(true);

        verticalLayout->addWidget(btn_maintenance);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        btn_back = new QPushButton(verticalSidebar);
        btn_back->setObjectName(QString::fromUtf8("btn_back"));

        verticalLayout->addWidget(btn_back);

        verticalSpacer_7 = new QSpacerItem(20, 9, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_7);


        horizontalLayout->addWidget(verticalSidebar);

        stackedWidget = new QStackedWidget(departmentScreen);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(243, 243, 243);"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        verticalLayout_2 = new QVBoxLayout(page);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_11 = new QLabel(page);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        QFont font2;
        font2.setPointSize(15);
        label_11->setFont(font2);

        horizontalLayout_11->addWidget(label_11);


        verticalLayout_2->addLayout(horizontalLayout_11);

        le_search = new QLineEdit(page);
        le_search->setObjectName(QString::fromUtf8("le_search"));

        verticalLayout_2->addWidget(le_search);

        tbl_departments = new QTableView(page);
        tbl_departments->setObjectName(QString::fromUtf8("tbl_departments"));
        tbl_departments->setStyleSheet(QString::fromUtf8("QHeaderView::section { background-color:black; color:white ; font-weight: bold}\n"
"QTableCornerButton::section { background-color:black }\n"
"verticalHeader::section{ background-color:rgb(190,1,1) }"));
        tbl_departments->setAlternatingRowColors(true);
        tbl_departments->setSelectionBehavior(QAbstractItemView::SelectRows);
        tbl_departments->setShowGrid(false);
        tbl_departments->setCornerButtonEnabled(false);

        verticalLayout_2->addWidget(tbl_departments);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_5 = new QLabel(page);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font2);

        horizontalLayout_9->addWidget(label_5);

        horizontalSpacer_12 = new QSpacerItem(150, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_12);

        btn_save = new QPushButton(page);
        btn_save->setObjectName(QString::fromUtf8("btn_save"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btn_save->sizePolicy().hasHeightForWidth());
        btn_save->setSizePolicy(sizePolicy);
        btn_save->setMinimumSize(QSize(100, 0));
        btn_save->setStyleSheet(QString::fromUtf8("background-color: rgb(39, 183, 229);"));

        horizontalLayout_9->addWidget(btn_save);

        cb_departments = new QComboBox(page);
        cb_departments->setObjectName(QString::fromUtf8("cb_departments"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(cb_departments->sizePolicy().hasHeightForWidth());
        cb_departments->setSizePolicy(sizePolicy1);

        horizontalLayout_9->addWidget(cb_departments);


        verticalLayout_2->addLayout(horizontalLayout_9);

        tbl_employees = new QTableView(page);
        tbl_employees->setObjectName(QString::fromUtf8("tbl_employees"));
        tbl_employees->setStyleSheet(QString::fromUtf8("QHeaderView::section { background-color:black; color:white ; font-weight: bold}\n"
"QTableCornerButton::section { background-color:black }\n"
"verticalHeader::section{ background-color:rgb(190,1,1) }"));
        tbl_employees->setAlternatingRowColors(true);
        tbl_employees->setSelectionBehavior(QAbstractItemView::SelectRows);
        tbl_employees->setShowGrid(false);
        tbl_employees->setCornerButtonEnabled(false);

        verticalLayout_2->addWidget(tbl_employees);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        verticalLayout_3 = new QVBoxLayout(page_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_7 = new QLabel(page_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy2);
        label_7->setFont(font2);

        verticalLayout_3->addWidget(label_7);

        Mtbl_departments = new QTableView(page_2);
        Mtbl_departments->setObjectName(QString::fromUtf8("Mtbl_departments"));
        Mtbl_departments->setStyleSheet(QString::fromUtf8("QHeaderView::section { background-color:black; color:white ; font-weight: bold}\n"
"QTableCornerButton::section { background-color:black }\n"
"verticalHeader::section{ background-color:rgb(190,1,1) }"));
        Mtbl_departments->setAlternatingRowColors(true);
        Mtbl_departments->setSelectionBehavior(QAbstractItemView::SelectRows);
        Mtbl_departments->setShowGrid(false);
        Mtbl_departments->setCornerButtonEnabled(false);

        verticalLayout_3->addWidget(Mtbl_departments);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        lbl_deptSelectedPrefix = new QLabel(page_2);
        lbl_deptSelectedPrefix->setObjectName(QString::fromUtf8("lbl_deptSelectedPrefix"));
        QFont font3;
        font3.setPointSize(14);
        font3.setBold(true);
        font3.setUnderline(true);
        font3.setWeight(75);
        lbl_deptSelectedPrefix->setFont(font3);
        lbl_deptSelectedPrefix->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(lbl_deptSelectedPrefix);

        lbl_deptSelected = new QLabel(page_2);
        lbl_deptSelected->setObjectName(QString::fromUtf8("lbl_deptSelected"));
        QFont font4;
        font4.setPointSize(14);
        font4.setBold(true);
        font4.setWeight(75);
        lbl_deptSelected->setFont(font4);

        horizontalLayout_4->addWidget(lbl_deptSelected);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        btn_delete = new QPushButton(page_2);
        btn_delete->setObjectName(QString::fromUtf8("btn_delete"));
        btn_delete->setMinimumSize(QSize(125, 30));
        btn_delete->setStyleSheet(QString::fromUtf8("background-color: rgb(239, 41, 41);"));

        horizontalLayout_4->addWidget(btn_delete);


        verticalLayout_3->addLayout(horizontalLayout_4);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        le_deptName = new QLineEdit(page_2);
        le_deptName->setObjectName(QString::fromUtf8("le_deptName"));
        le_deptName->setMinimumSize(QSize(0, 30));

        gridLayout_2->addWidget(le_deptName, 1, 2, 1, 1);

        label_3 = new QLabel(page_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        label = new QLabel(page_2);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font5;
        font5.setPointSize(11);
        font5.setBold(true);
        font5.setWeight(75);
        label->setFont(font5);

        gridLayout_2->addWidget(label, 0, 2, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        le_deptCode = new QLineEdit(page_2);
        le_deptCode->setObjectName(QString::fromUtf8("le_deptCode"));
        le_deptCode->setMinimumSize(QSize(0, 30));
        le_deptCode->setReadOnly(true);

        horizontalLayout_5->addWidget(le_deptCode);

        btn_generate = new QPushButton(page_2);
        btn_generate->setObjectName(QString::fromUtf8("btn_generate"));
        btn_generate->setMinimumSize(QSize(0, 30));

        horizontalLayout_5->addWidget(btn_generate);


        gridLayout_2->addLayout(horizontalLayout_5, 1, 0, 1, 1);

        le_deptAbbreviation = new QLineEdit(page_2);
        le_deptAbbreviation->setObjectName(QString::fromUtf8("le_deptAbbreviation"));
        le_deptAbbreviation->setMinimumSize(QSize(0, 30));

        gridLayout_2->addWidget(le_deptAbbreviation, 1, 4, 1, 1);

        label_2 = new QLabel(page_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font5);

        gridLayout_2->addWidget(label_2, 0, 4, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 1, 3, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_6, 1, 1, 1, 1);


        verticalLayout_3->addLayout(gridLayout_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_4 = new QLabel(page_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font5);

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        le_deptManager = new QLineEdit(page_2);
        le_deptManager->setObjectName(QString::fromUtf8("le_deptManager"));
        le_deptManager->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(le_deptManager, 5, 0, 1, 1);

        le_deptContact = new QLineEdit(page_2);
        le_deptContact->setObjectName(QString::fromUtf8("le_deptContact"));
        le_deptContact->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(le_deptContact, 5, 2, 1, 1);

        label_8 = new QLabel(page_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font5);

        gridLayout->addWidget(label_8, 4, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 5, 1, 1, 1);


        verticalLayout_3->addLayout(gridLayout);

        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        btn_clear = new QPushButton(page_2);
        btn_clear->setObjectName(QString::fromUtf8("btn_clear"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(btn_clear->sizePolicy().hasHeightForWidth());
        btn_clear->setSizePolicy(sizePolicy3);
        btn_clear->setMinimumSize(QSize(125, 30));

        horizontalLayout_3->addWidget(btn_clear);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        btn_update = new QPushButton(page_2);
        btn_update->setObjectName(QString::fromUtf8("btn_update"));
        btn_update->setMinimumSize(QSize(125, 30));
        btn_update->setStyleSheet(QString::fromUtf8("background-color: rgb(39, 183, 229);"));

        horizontalLayout_3->addWidget(btn_update);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        btn_insert = new QPushButton(page_2);
        btn_insert->setObjectName(QString::fromUtf8("btn_insert"));
        btn_insert->setMinimumSize(QSize(125, 30));
        btn_insert->setStyleSheet(QString::fromUtf8("background-color: rgb(39, 183, 229);"));

        horizontalLayout_3->addWidget(btn_insert);


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

        Ubtn_update = new QPushButton(page_3);
        Ubtn_update->setObjectName(QString::fromUtf8("Ubtn_update"));
        Ubtn_update->setMinimumSize(QSize(0, 30));

        verticalLayout_4->addWidget(Ubtn_update);


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

        Dle_firstName = new QLineEdit(page_4);
        Dle_firstName->setObjectName(QString::fromUtf8("Dle_firstName"));
        Dle_firstName->setReadOnly(true);

        horizontalLayout_7->addWidget(Dle_firstName);

        label_27 = new QLabel(page_4);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        horizontalLayout_7->addWidget(label_27);

        Dle_lastName = new QLineEdit(page_4);
        Dle_lastName->setObjectName(QString::fromUtf8("Dle_lastName"));
        Dle_lastName->setReadOnly(true);

        horizontalLayout_7->addWidget(Dle_lastName);


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


        retranslateUi(departmentScreen);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(departmentScreen);
    } // setupUi

    void retranslateUi(QWidget *departmentScreen)
    {
        departmentScreen->setWindowTitle(QApplication::translate("departmentScreen", "Form", nullptr));
        btn_logo->setText(QApplication::translate("departmentScreen", "BRADFORD SWISSPORT", nullptr));
        lbl_name->setText(QApplication::translate("departmentScreen", "Logged in as: User", nullptr));
        label_29->setText(QApplication::translate("departmentScreen", "Department Maintenance", nullptr));
        btn_search->setText(QApplication::translate("departmentScreen", "Search", nullptr));
        btn_maintenance->setText(QApplication::translate("departmentScreen", "Maintenance", nullptr));
        btn_back->setText(QApplication::translate("departmentScreen", "Back", nullptr));
        label_11->setText(QApplication::translate("departmentScreen", "Search through departments", nullptr));
        le_search->setPlaceholderText(QApplication::translate("departmentScreen", "Type department name here...", nullptr));
        label_5->setText(QApplication::translate("departmentScreen", "View employees based on department", nullptr));
        btn_save->setText(QApplication::translate("departmentScreen", "Save Table", nullptr));
        label_7->setText(QApplication::translate("departmentScreen", "Maintain Departments", nullptr));
        lbl_deptSelectedPrefix->setText(QApplication::translate("departmentScreen", "Department Selected:", nullptr));
        lbl_deptSelected->setText(QApplication::translate("departmentScreen", "NONE", nullptr));
        btn_delete->setText(QApplication::translate("departmentScreen", "DELETE", nullptr));
        label_3->setText(QApplication::translate("departmentScreen", "Department Code", nullptr));
        label->setText(QApplication::translate("departmentScreen", "Department Name", nullptr));
        btn_generate->setText(QApplication::translate("departmentScreen", "Generate", nullptr));
        label_2->setText(QApplication::translate("departmentScreen", "Department Abbreviation", nullptr));
        label_4->setText(QApplication::translate("departmentScreen", "Department Manager", nullptr));
        label_8->setText(QApplication::translate("departmentScreen", "Department Contact", nullptr));
        btn_clear->setText(QApplication::translate("departmentScreen", "Clear", nullptr));
        btn_update->setText(QApplication::translate("departmentScreen", "Update", nullptr));
        btn_insert->setText(QApplication::translate("departmentScreen", "Insert", nullptr));
        label_19->setText(QApplication::translate("departmentScreen", "Update employees from table", nullptr));
        label_23->setText(QApplication::translate("departmentScreen", "Employee ID:", nullptr));
        label_12->setText(QApplication::translate("departmentScreen", "First Name", nullptr));
        label_13->setText(QApplication::translate("departmentScreen", "Last Name", nullptr));
        label_14->setText(QApplication::translate("departmentScreen", "Email", nullptr));
        label_18->setText(QApplication::translate("departmentScreen", "Department", nullptr));
        label_15->setText(QApplication::translate("departmentScreen", "Gender", nullptr));
        label_16->setText(QApplication::translate("departmentScreen", "Phone Number", nullptr));
        label_17->setText(QApplication::translate("departmentScreen", "Address", nullptr));
        Ubtn_update->setText(QApplication::translate("departmentScreen", "Update", nullptr));
        label_24->setText(QApplication::translate("departmentScreen", "Delete employees from table", nullptr));
        label_28->setText(QApplication::translate("departmentScreen", "Employee Selected:", nullptr));
        label_25->setText(QApplication::translate("departmentScreen", "Employee ID:", nullptr));
        label_26->setText(QApplication::translate("departmentScreen", "First Name:", nullptr));
        label_27->setText(QApplication::translate("departmentScreen", "Last Name:", nullptr));
        Dbtn_delete->setText(QApplication::translate("departmentScreen", "DELETE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class departmentScreen: public Ui_departmentScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEPARTMENTSCREEN_H

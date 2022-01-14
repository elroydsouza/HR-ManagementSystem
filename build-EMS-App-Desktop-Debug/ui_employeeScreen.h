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
    QPushButton *pushButton_4;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_7;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_11;
    QLineEdit *le_search;
    QTableView *tbl_users;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout;
    QLineEdit *le_email;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label_3;
    QLineEdit *le_lastName;
    QDateEdit *de_DOB;
    QDateEdit *de_employDate;
    QLabel *label_9;
    QComboBox *cb_department;
    QLineEdit *le_gender;
    QSpacerItem *verticalSpacer_4;
    QLineEdit *le_username;
    QLabel *label_10;
    QLabel *label_2;
    QLabel *label_6;
    QLabel *label;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_8;
    QLineEdit *le_firstName;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_7;
    QLineEdit *le_password;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_clear;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btn_submit;

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

        pushButton_4 = new QPushButton(employeeScreen);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setMinimumSize(QSize(0, 75));

        verticalLayout->addWidget(pushButton_4);

        pushButton = new QPushButton(employeeScreen);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(0, 75));

        verticalLayout->addWidget(pushButton);

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
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        le_email = new QLineEdit(page_2);
        le_email->setObjectName(QString::fromUtf8("le_email"));
        le_email->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(le_email, 9, 0, 1, 1);

        label_5 = new QLabel(page_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 5, 2, 1, 1);

        label_4 = new QLabel(page_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 5, 0, 1, 1);

        label_3 = new QLabel(page_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 4, 1, 1);

        le_lastName = new QLineEdit(page_2);
        le_lastName->setObjectName(QString::fromUtf8("le_lastName"));
        le_lastName->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(le_lastName, 3, 2, 1, 1);

        de_DOB = new QDateEdit(page_2);
        de_DOB->setObjectName(QString::fromUtf8("de_DOB"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(de_DOB->sizePolicy().hasHeightForWidth());
        de_DOB->setSizePolicy(sizePolicy);
        de_DOB->setMinimumSize(QSize(247, 30));

        gridLayout->addWidget(de_DOB, 3, 4, 1, 1);

        de_employDate = new QDateEdit(page_2);
        de_employDate->setObjectName(QString::fromUtf8("de_employDate"));
        de_employDate->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(de_employDate, 6, 4, 1, 1);

        label_9 = new QLabel(page_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 8, 2, 1, 1);

        cb_department = new QComboBox(page_2);
        cb_department->setObjectName(QString::fromUtf8("cb_department"));
        cb_department->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(cb_department, 6, 2, 1, 1);

        le_gender = new QLineEdit(page_2);
        le_gender->setObjectName(QString::fromUtf8("le_gender"));
        le_gender->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(le_gender, 6, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 1, 2, 1, 1);

        le_username = new QLineEdit(page_2);
        le_username->setObjectName(QString::fromUtf8("le_username"));
        le_username->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(le_username, 9, 2, 1, 1);

        label_10 = new QLabel(page_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 8, 4, 1, 1);

        label_2 = new QLabel(page_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 2, 1, 1);

        label_6 = new QLabel(page_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 5, 4, 1, 1);

        label = new QLabel(page_2);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 4, 2, 1, 1);

        label_8 = new QLabel(page_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 8, 0, 1, 1);

        le_firstName = new QLineEdit(page_2);
        le_firstName->setObjectName(QString::fromUtf8("le_firstName"));
        le_firstName->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(le_firstName, 3, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 7, 2, 1, 1);

        label_7 = new QLabel(page_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);

        gridLayout->addWidget(label_7, 0, 0, 1, 1);

        le_password = new QLineEdit(page_2);
        le_password->setObjectName(QString::fromUtf8("le_password"));
        le_password->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(le_password, 9, 4, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 3, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 3, 3, 1, 1);


        verticalLayout_3->addLayout(gridLayout);

        verticalSpacer_5 = new QSpacerItem(20, 70, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        btn_clear = new QPushButton(page_2);
        btn_clear->setObjectName(QString::fromUtf8("btn_clear"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btn_clear->sizePolicy().hasHeightForWidth());
        btn_clear->setSizePolicy(sizePolicy1);
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

        horizontalLayout->addWidget(stackedWidget);


        retranslateUi(employeeScreen);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(employeeScreen);
    } // setupUi

    void retranslateUi(QWidget *employeeScreen)
    {
        employeeScreen->setWindowTitle(QApplication::translate("employeeScreen", "Form", nullptr));
        btn_logo->setText(QString());
        lbl_name->setText(QApplication::translate("employeeScreen", "Logged in as: User", nullptr));
        btn_search->setText(QApplication::translate("employeeScreen", "Search", nullptr));
        btn_insert->setText(QApplication::translate("employeeScreen", "Insert Employee", nullptr));
        pushButton_4->setText(QApplication::translate("employeeScreen", "PushButton", nullptr));
        pushButton->setText(QApplication::translate("employeeScreen", "Delete Employee", nullptr));
        label_11->setText(QApplication::translate("employeeScreen", "Search through employees", nullptr));
        label_5->setText(QApplication::translate("employeeScreen", "Department", nullptr));
        label_4->setText(QApplication::translate("employeeScreen", "Gender", nullptr));
        label_3->setText(QApplication::translate("employeeScreen", "Date of Birth", nullptr));
        de_DOB->setDisplayFormat(QApplication::translate("employeeScreen", "yyyy-MM-dd", nullptr));
        de_employDate->setDisplayFormat(QApplication::translate("employeeScreen", "yyyy-MM-dd", nullptr));
        label_9->setText(QApplication::translate("employeeScreen", "Username", nullptr));
        label_10->setText(QApplication::translate("employeeScreen", "Password", nullptr));
        label_2->setText(QApplication::translate("employeeScreen", "Lastname", nullptr));
        label_6->setText(QApplication::translate("employeeScreen", "Employment Date", nullptr));
        label->setText(QApplication::translate("employeeScreen", "Firstname", nullptr));
        label_8->setText(QApplication::translate("employeeScreen", "Email", nullptr));
        label_7->setText(QApplication::translate("employeeScreen", "Insert Employee", nullptr));
        btn_clear->setText(QApplication::translate("employeeScreen", "Clear", nullptr));
        btn_submit->setText(QApplication::translate("employeeScreen", "Submit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class employeeScreen: public Ui_employeeScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPLOYEESCREEN_H

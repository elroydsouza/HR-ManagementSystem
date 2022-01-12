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
    QPushButton *btn_logo;
    QLabel *lbl_name;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *le_search;
    QTableView *tbl_users;
    QWidget *page_2;

    void setupUi(QWidget *employeeScreen)
    {
        if (employeeScreen->objectName().isEmpty())
            employeeScreen->setObjectName(QString::fromUtf8("employeeScreen"));
        employeeScreen->resize(1000, 550);
        horizontalLayout = new QHBoxLayout(employeeScreen);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, 0, -1);
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

        pushButton_2 = new QPushButton(employeeScreen);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(200, 75));

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(employeeScreen);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(0, 75));

        verticalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(employeeScreen);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setMinimumSize(QSize(0, 75));

        verticalLayout->addWidget(pushButton_4);

        pushButton = new QPushButton(employeeScreen);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(0, 75));

        verticalLayout->addWidget(pushButton);


        horizontalLayout->addLayout(verticalLayout);

        stackedWidget = new QStackedWidget(employeeScreen);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        verticalLayout_2 = new QVBoxLayout(page);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
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
        tbl_users->verticalHeader()->setVisible(true);

        verticalLayout_2->addWidget(tbl_users);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        stackedWidget->addWidget(page_2);

        horizontalLayout->addWidget(stackedWidget);


        retranslateUi(employeeScreen);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(employeeScreen);
    } // setupUi

    void retranslateUi(QWidget *employeeScreen)
    {
        employeeScreen->setWindowTitle(QApplication::translate("employeeScreen", "Form", nullptr));
        btn_logo->setText(QString());
        lbl_name->setText(QApplication::translate("employeeScreen", "Logged in as: User", nullptr));
        pushButton_2->setText(QApplication::translate("employeeScreen", "PushButton", nullptr));
        pushButton_3->setText(QApplication::translate("employeeScreen", "PushButton", nullptr));
        pushButton_4->setText(QApplication::translate("employeeScreen", "PushButton", nullptr));
        pushButton->setText(QApplication::translate("employeeScreen", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class employeeScreen: public Ui_employeeScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPLOYEESCREEN_H

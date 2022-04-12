/********************************************************************************
** Form generated from reading UI file 'menuScreen.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUSCREEN_H
#define UI_MENUSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_menuScreen
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *lbl_name;
    QSpacerItem *verticalSpacer_2;
    QWidget *verticalWidget_2;
    QVBoxLayout *verticalLayout_3;
    QPushButton *btn_User;
    QPushButton *btn_Department;
    QPushButton *btn_absence;
    QPushButton *btn_Schedule;
    QSpacerItem *verticalSpacer;
    QPushButton *btn_logout;

    void setupUi(QWidget *menuScreen)
    {
        if (menuScreen->objectName().isEmpty())
            menuScreen->setObjectName(QString::fromUtf8("menuScreen"));
        menuScreen->resize(260, 383);
        menuScreen->setStyleSheet(QString::fromUtf8("background-color: rgb(243, 243, 243);"));
        verticalLayout_2 = new QVBoxLayout(menuScreen);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, -1, 0);
        label = new QLabel(menuScreen);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        verticalLayout->addWidget(label);

        lbl_name = new QLabel(menuScreen);
        lbl_name->setObjectName(QString::fromUtf8("lbl_name"));
        lbl_name->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(lbl_name);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        verticalWidget_2 = new QWidget(menuScreen);
        verticalWidget_2->setObjectName(QString::fromUtf8("verticalWidget_2"));
        verticalWidget_2->setStyleSheet(QString::fromUtf8("background-color: rgb(39, 183, 229);"));
        verticalLayout_3 = new QVBoxLayout(verticalWidget_2);
        verticalLayout_3->setSpacing(24);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(15, 20, 15, 20);
        btn_User = new QPushButton(verticalWidget_2);
        btn_User->setObjectName(QString::fromUtf8("btn_User"));
        btn_User->setMinimumSize(QSize(0, 40));

        verticalLayout_3->addWidget(btn_User);

        btn_Department = new QPushButton(verticalWidget_2);
        btn_Department->setObjectName(QString::fromUtf8("btn_Department"));
        btn_Department->setMinimumSize(QSize(0, 40));

        verticalLayout_3->addWidget(btn_Department);

        btn_absence = new QPushButton(verticalWidget_2);
        btn_absence->setObjectName(QString::fromUtf8("btn_absence"));
        btn_absence->setMinimumSize(QSize(0, 40));

        verticalLayout_3->addWidget(btn_absence);

        btn_Schedule = new QPushButton(verticalWidget_2);
        btn_Schedule->setObjectName(QString::fromUtf8("btn_Schedule"));
        btn_Schedule->setMinimumSize(QSize(0, 40));

        verticalLayout_3->addWidget(btn_Schedule);


        verticalLayout->addWidget(verticalWidget_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        btn_logout = new QPushButton(menuScreen);
        btn_logout->setObjectName(QString::fromUtf8("btn_logout"));
        btn_logout->setStyleSheet(QString::fromUtf8("background-color: rgb(239, 41, 41);"));

        verticalLayout->addWidget(btn_logout);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(menuScreen);

        QMetaObject::connectSlotsByName(menuScreen);
    } // setupUi

    void retranslateUi(QWidget *menuScreen)
    {
        menuScreen->setWindowTitle(QApplication::translate("menuScreen", "Main Menu Screen", nullptr));
        label->setText(QApplication::translate("menuScreen", "HR Management System", nullptr));
        lbl_name->setText(QApplication::translate("menuScreen", "Logged in as: ", nullptr));
        btn_User->setText(QApplication::translate("menuScreen", "User Maintenance", nullptr));
        btn_Department->setText(QApplication::translate("menuScreen", "Department Maintenance", nullptr));
        btn_absence->setText(QApplication::translate("menuScreen", "Absence Management", nullptr));
        btn_Schedule->setText(QApplication::translate("menuScreen", "Schedule", nullptr));
        btn_logout->setText(QApplication::translate("menuScreen", "Log Out", nullptr));
    } // retranslateUi

};

namespace Ui {
    class menuScreen: public Ui_menuScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUSCREEN_H

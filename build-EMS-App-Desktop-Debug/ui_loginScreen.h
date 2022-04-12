/********************************************************************************
** Form generated from reading UI file 'loginScreen.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINSCREEN_H
#define UI_LOGINSCREEN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_loginScreen
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *logo;
    QSpacerItem *horizontalSpacer_11;
    QLabel *title;
    QSpacerItem *horizontalSpacer_2;
    QWidget *container;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_9;
    QWidget *loginForm;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *le_email;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *le_password;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *btn_login;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *loginScreen)
    {
        if (loginScreen->objectName().isEmpty())
            loginScreen->setObjectName(QString::fromUtf8("loginScreen"));
        loginScreen->resize(850, 500);
        loginScreen->setStyleSheet(QString::fromUtf8("background-color: rgb(243, 243, 243);"));
        verticalLayout_2 = new QVBoxLayout(loginScreen);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, -1, 0, -1);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        logo = new QPushButton(loginScreen);
        logo->setObjectName(QString::fromUtf8("logo"));
        logo->setMinimumSize(QSize(50, 50));
        logo->setStyleSheet(QString::fromUtf8("border: 1px solid; "));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../Bradford_Swissport_logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        logo->setIcon(icon);
        logo->setIconSize(QSize(300, 90));
        logo->setFlat(true);

        horizontalLayout->addWidget(logo);

        horizontalSpacer_11 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_11);

        title = new QLabel(loginScreen);
        title->setObjectName(QString::fromUtf8("title"));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        title->setFont(font);
        title->setStyleSheet(QString::fromUtf8("color: rgb(39, 183, 229);"));

        horizontalLayout->addWidget(title);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        container = new QWidget(loginScreen);
        container->setObjectName(QString::fromUtf8("container"));
        container->setStyleSheet(QString::fromUtf8("#container { border: 2px solid;background-color: rgb(48, 152, 185); }"));
        horizontalLayout_8 = new QHBoxLayout(container);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(-1, 15, -1, 15);
        horizontalSpacer_9 = new QSpacerItem(200, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_9);

        loginForm = new QWidget(container);
        loginForm->setObjectName(QString::fromUtf8("loginForm"));
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        loginForm->setFont(font1);
        loginForm->setStyleSheet(QString::fromUtf8("#loginForm { border: 2px solid;  background-color:rgb(39,183,229);}"));
        verticalLayout_3 = new QVBoxLayout(loginForm);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(9, 9, 9, 9);
        verticalSpacer = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        le_email = new QLineEdit(loginForm);
        le_email->setObjectName(QString::fromUtf8("le_email"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(le_email->sizePolicy().hasHeightForWidth());
        le_email->setSizePolicy(sizePolicy);
        le_email->setMinimumSize(QSize(200, 30));
        le_email->setFont(font1);

        horizontalLayout_2->addWidget(le_email);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout_3->addLayout(horizontalLayout_2);

        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        le_password = new QLineEdit(loginForm);
        le_password->setObjectName(QString::fromUtf8("le_password"));
        sizePolicy.setHeightForWidth(le_password->sizePolicy().hasHeightForWidth());
        le_password->setSizePolicy(sizePolicy);
        le_password->setMinimumSize(QSize(200, 30));
        le_password->setEchoMode(QLineEdit::Password);
        le_password->setReadOnly(false);

        horizontalLayout_4->addWidget(le_password);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);


        verticalLayout_3->addLayout(horizontalLayout_4);

        verticalSpacer_4 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_7);

        btn_login = new QPushButton(loginForm);
        btn_login->setObjectName(QString::fromUtf8("btn_login"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(4);
        sizePolicy1.setHeightForWidth(btn_login->sizePolicy().hasHeightForWidth());
        btn_login->setSizePolicy(sizePolicy1);
        btn_login->setMinimumSize(QSize(100, 30));
        btn_login->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_5->addWidget(btn_login);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_8);


        verticalLayout_3->addLayout(horizontalLayout_5);


        horizontalLayout_8->addWidget(loginForm);

        horizontalSpacer_10 = new QSpacerItem(200, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_10);


        verticalLayout->addWidget(container);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(loginScreen);

        QMetaObject::connectSlotsByName(loginScreen);
    } // setupUi

    void retranslateUi(QWidget *loginScreen)
    {
        loginScreen->setWindowTitle(QApplication::translate("loginScreen", "Login Screen", nullptr));
        logo->setText(QString());
        title->setText(QApplication::translate("loginScreen", "HR Management System", nullptr));
        le_email->setText(QString());
        le_email->setPlaceholderText(QApplication::translate("loginScreen", "email", nullptr));
        le_password->setPlaceholderText(QApplication::translate("loginScreen", "password", nullptr));
        btn_login->setText(QApplication::translate("loginScreen", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class loginScreen: public Ui_loginScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINSCREEN_H

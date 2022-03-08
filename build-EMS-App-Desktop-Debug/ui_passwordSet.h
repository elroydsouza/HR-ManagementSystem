/********************************************************************************
** Form generated from reading UI file 'passwordSet.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PASSWORDSET_H
#define UI_PASSWORDSET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_passwordSet
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QLabel *label;
    QLabel *lbl_email;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QLineEdit *le_password;
    QPushButton *btn_set;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *passwordSet)
    {
        if (passwordSet->objectName().isEmpty())
            passwordSet->setObjectName(QString::fromUtf8("passwordSet"));
        passwordSet->resize(358, 212);
        QFont font;
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        passwordSet->setFont(font);
        passwordSet->setStyleSheet(QString::fromUtf8("background-color: rgb(243, 243, 243);"));
        verticalLayout = new QVBoxLayout(passwordSet);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        label = new QLabel(passwordSet);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(39, 183, 229);"));

        verticalLayout->addWidget(label);

        lbl_email = new QLabel(passwordSet);
        lbl_email->setObjectName(QString::fromUtf8("lbl_email"));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(false);
        font1.setWeight(50);
        lbl_email->setFont(font1);

        verticalLayout->addWidget(lbl_email);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        le_password = new QLineEdit(passwordSet);
        le_password->setObjectName(QString::fromUtf8("le_password"));
        le_password->setMinimumSize(QSize(0, 30));
        le_password->setFont(font1);

        horizontalLayout->addWidget(le_password);

        btn_set = new QPushButton(passwordSet);
        btn_set->setObjectName(QString::fromUtf8("btn_set"));
        btn_set->setMinimumSize(QSize(0, 30));
        btn_set->setFont(font1);
        btn_set->setStyleSheet(QString::fromUtf8("background-color: rgb(39, 183, 229);"));

        horizontalLayout->addWidget(btn_set);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(passwordSet);

        QMetaObject::connectSlotsByName(passwordSet);
    } // setupUi

    void retranslateUi(QWidget *passwordSet)
    {
        passwordSet->setWindowTitle(QApplication::translate("passwordSet", "Form", nullptr));
        label->setText(QApplication::translate("passwordSet", "Set a password below:", nullptr));
        lbl_email->setText(QApplication::translate("passwordSet", "Logged in as: Email", nullptr));
        btn_set->setText(QApplication::translate("passwordSet", "Set", nullptr));
    } // retranslateUi

};

namespace Ui {
    class passwordSet: public Ui_passwordSet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PASSWORDSET_H

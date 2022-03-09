/********************************************************************************
** Form generated from reading UI file 'holidayScreen.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOLIDAYSCREEN_H
#define UI_HOLIDAYSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_holidayScreen
{
public:

    void setupUi(QWidget *holidayScreen)
    {
        if (holidayScreen->objectName().isEmpty())
            holidayScreen->setObjectName(QString::fromUtf8("holidayScreen"));
        holidayScreen->resize(1000, 550);

        retranslateUi(holidayScreen);

        QMetaObject::connectSlotsByName(holidayScreen);
    } // setupUi

    void retranslateUi(QWidget *holidayScreen)
    {
        holidayScreen->setWindowTitle(QApplication::translate("holidayScreen", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class holidayScreen: public Ui_holidayScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOLIDAYSCREEN_H

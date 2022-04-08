/********************************************************************************
** Form generated from reading UI file 'scheduleScreen.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCHEDULESCREEN_H
#define UI_SCHEDULESCREEN_H

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

class Ui_scheduleScreen
{
public:
    QVBoxLayout *verticalLayout_7;
    QWidget *verticalSidebar;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_back;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label_29;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *btn_schedule;
    QPushButton *btn_viewCurrent;
    QPushButton *btn_viewPurged;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *btn_logo;
    QStackedWidget *stackedWidget;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_7;
    QLabel *lbl_name;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_10;
    QSpacerItem *horizontalSpacer_4;
    QComboBox *cb_employees;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout;
    QLineEdit *le_thursday;
    QLabel *label;
    QLabel *label_6;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *le_employeeName;
    QLabel *label_3;
    QLineEdit *le_sunday;
    QLineEdit *le_friday;
    QLabel *label_8;
    QLabel *label_2;
    QLineEdit *le_tuesday;
    QLineEdit *le_saturday;
    QLineEdit *le_monday;
    QLineEdit *le_wednesday;
    QLabel *label_9;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_generate;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *btn_override;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btn_purge;
    QWidget *page_3;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_19;
    QTableView *tbl_currentSchedule;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *btn_purgeCurrent;
    QWidget *page_4;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_24;
    QTableView *tbl_purgedSchedule;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *btn_delete;

    void setupUi(QWidget *scheduleScreen)
    {
        if (scheduleScreen->objectName().isEmpty())
            scheduleScreen->setObjectName(QString::fromUtf8("scheduleScreen"));
        scheduleScreen->resize(1000, 550);
        scheduleScreen->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_7 = new QVBoxLayout(scheduleScreen);
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        verticalSidebar = new QWidget(scheduleScreen);
        verticalSidebar->setObjectName(QString::fromUtf8("verticalSidebar"));
        verticalSidebar->setStyleSheet(QString::fromUtf8("background-color: rgb(39, 183, 229);"));
        horizontalLayout = new QHBoxLayout(verticalSidebar);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(3, 0, 3, 0);
        btn_back = new QPushButton(verticalSidebar);
        btn_back->setObjectName(QString::fromUtf8("btn_back"));
        btn_back->setMinimumSize(QSize(0, 70));

        horizontalLayout->addWidget(btn_back);

        horizontalSpacer_8 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_8);

        label_29 = new QLabel(verticalSidebar);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label_29->setFont(font);
        label_29->setStyleSheet(QString::fromUtf8(""));
        label_29->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_29);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);

        btn_schedule = new QPushButton(verticalSidebar);
        btn_schedule->setObjectName(QString::fromUtf8("btn_schedule"));
        btn_schedule->setMinimumSize(QSize(0, 75));
        btn_schedule->setStyleSheet(QString::fromUtf8("QPushButton{ border: none; Text-align:left;}\n"
"\n"
"QPushButton::hover { background-color: rgb(97, 199, 231); }\n"
"\n"
"QPushButton::pressed { background-color: rgb(48, 152, 185); }"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../ask-for-help.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_schedule->setIcon(icon);
        btn_schedule->setIconSize(QSize(30, 30));
        btn_schedule->setCheckable(true);
        btn_schedule->setChecked(true);
        btn_schedule->setAutoExclusive(true);
        btn_schedule->setFlat(true);

        horizontalLayout->addWidget(btn_schedule);

        btn_viewCurrent = new QPushButton(verticalSidebar);
        btn_viewCurrent->setObjectName(QString::fromUtf8("btn_viewCurrent"));
        btn_viewCurrent->setMinimumSize(QSize(0, 75));
        btn_viewCurrent->setStyleSheet(QString::fromUtf8("QPushButton{ border: none; Text-align:left;}\n"
"\n"
"QPushButton::hover { background-color: rgb(97, 199, 231); }\n"
"\n"
"QPushButton::pressed { background-color: rgb(48, 152, 185); }"));
        btn_viewCurrent->setIcon(icon);
        btn_viewCurrent->setIconSize(QSize(30, 30));
        btn_viewCurrent->setCheckable(true);
        btn_viewCurrent->setAutoExclusive(true);
        btn_viewCurrent->setFlat(true);

        horizontalLayout->addWidget(btn_viewCurrent);

        btn_viewPurged = new QPushButton(verticalSidebar);
        btn_viewPurged->setObjectName(QString::fromUtf8("btn_viewPurged"));
        btn_viewPurged->setMinimumSize(QSize(0, 75));
        btn_viewPurged->setStyleSheet(QString::fromUtf8("QPushButton{ border: none; Text-align:left;}\n"
"\n"
"QPushButton::hover { background-color: rgb(97, 199, 231); }\n"
"\n"
"QPushButton::pressed { background-color: rgb(48, 152, 185); }"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../delete-user.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_viewPurged->setIcon(icon1);
        btn_viewPurged->setIconSize(QSize(30, 30));
        btn_viewPurged->setCheckable(true);
        btn_viewPurged->setChecked(false);
        btn_viewPurged->setAutoExclusive(true);
        btn_viewPurged->setFlat(true);

        horizontalLayout->addWidget(btn_viewPurged);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        btn_logo = new QPushButton(verticalSidebar);
        btn_logo->setObjectName(QString::fromUtf8("btn_logo"));
        btn_logo->setMinimumSize(QSize(0, 50));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        btn_logo->setFont(font1);
        btn_logo->setStyleSheet(QString::fromUtf8("background-color: rgb(239, 41, 41);"));

        horizontalLayout->addWidget(btn_logo);


        verticalLayout_7->addWidget(verticalSidebar);

        stackedWidget = new QStackedWidget(scheduleScreen);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(243, 243, 243);"));
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        verticalLayout_3 = new QVBoxLayout(page_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_7 = new QLabel(page_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setPointSize(15);
        label_7->setFont(font2);

        horizontalLayout_9->addWidget(label_7);

        lbl_name = new QLabel(page_2);
        lbl_name->setObjectName(QString::fromUtf8("lbl_name"));

        horizontalLayout_9->addWidget(lbl_name);


        verticalLayout_3->addLayout(horizontalLayout_9);

        verticalSpacer_4 = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_4);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_10 = new QLabel(page_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        QFont font3;
        font3.setPointSize(12);
        label_10->setFont(font3);

        horizontalLayout_4->addWidget(label_10);

        horizontalSpacer_4 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        cb_employees = new QComboBox(page_2);
        cb_employees->setObjectName(QString::fromUtf8("cb_employees"));
        cb_employees->setMinimumSize(QSize(200, 30));
        cb_employees->setFont(font1);

        horizontalLayout_4->addWidget(cb_employees);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout_3->addLayout(horizontalLayout_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        le_thursday = new QLineEdit(page_2);
        le_thursday->setObjectName(QString::fromUtf8("le_thursday"));
        le_thursday->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(le_thursday, 2, 4, 1, 1);

        label = new QLabel(page_2);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 1, 1, 1);

        label_6 = new QLabel(page_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 0, 6, 1, 1);

        label_4 = new QLabel(page_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 0, 4, 1, 1);

        label_5 = new QLabel(page_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 0, 5, 1, 1);

        le_employeeName = new QLineEdit(page_2);
        le_employeeName->setObjectName(QString::fromUtf8("le_employeeName"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(le_employeeName->sizePolicy().hasHeightForWidth());
        le_employeeName->setSizePolicy(sizePolicy1);
        le_employeeName->setMinimumSize(QSize(200, 30));
        le_employeeName->setFont(font1);
        le_employeeName->setReadOnly(true);

        gridLayout->addWidget(le_employeeName, 2, 0, 1, 1);

        label_3 = new QLabel(page_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 3, 1, 1);

        le_sunday = new QLineEdit(page_2);
        le_sunday->setObjectName(QString::fromUtf8("le_sunday"));
        le_sunday->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(le_sunday, 2, 7, 1, 1);

        le_friday = new QLineEdit(page_2);
        le_friday->setObjectName(QString::fromUtf8("le_friday"));
        le_friday->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(le_friday, 2, 5, 1, 1);

        label_8 = new QLabel(page_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 0, 7, 1, 1);

        label_2 = new QLabel(page_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        le_tuesday = new QLineEdit(page_2);
        le_tuesday->setObjectName(QString::fromUtf8("le_tuesday"));
        le_tuesday->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(le_tuesday, 2, 2, 1, 1);

        le_saturday = new QLineEdit(page_2);
        le_saturday->setObjectName(QString::fromUtf8("le_saturday"));
        le_saturday->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(le_saturday, 2, 6, 1, 1);

        le_monday = new QLineEdit(page_2);
        le_monday->setObjectName(QString::fromUtf8("le_monday"));
        le_monday->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(le_monday, 2, 1, 1, 1);

        le_wednesday = new QLineEdit(page_2);
        le_wednesday->setObjectName(QString::fromUtf8("le_wednesday"));
        le_wednesday->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(le_wednesday, 2, 3, 1, 1);

        label_9 = new QLabel(page_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font1);

        gridLayout->addWidget(label_9, 0, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout->addItem(verticalSpacer_3, 1, 0, 1, 1);


        verticalLayout_3->addLayout(gridLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        btn_generate = new QPushButton(page_2);
        btn_generate->setObjectName(QString::fromUtf8("btn_generate"));
        btn_generate->setMinimumSize(QSize(150, 30));
        btn_generate->setStyleSheet(QString::fromUtf8("background-color: rgb(39, 183, 229);"));

        horizontalLayout_3->addWidget(btn_generate);

        horizontalSpacer_9 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_9);

        btn_override = new QPushButton(page_2);
        btn_override->setObjectName(QString::fromUtf8("btn_override"));
        btn_override->setMinimumSize(QSize(150, 30));
        btn_override->setStyleSheet(QString::fromUtf8("background-color: rgb(39, 183, 229);"));

        horizontalLayout_3->addWidget(btn_override);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        btn_purge = new QPushButton(page_2);
        btn_purge->setObjectName(QString::fromUtf8("btn_purge"));
        btn_purge->setMinimumSize(QSize(150, 30));
        btn_purge->setStyleSheet(QString::fromUtf8("background-color: rgb(239, 41, 41);"));

        horizontalLayout_3->addWidget(btn_purge);


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

        tbl_currentSchedule = new QTableView(page_3);
        tbl_currentSchedule->setObjectName(QString::fromUtf8("tbl_currentSchedule"));
        tbl_currentSchedule->setStyleSheet(QString::fromUtf8("QHeaderView::section { background-color:black; color:white ; font-weight: bold}\n"
"QTableCornerButton::section { background-color:black }\n"
"verticalHeader::section{ background-color:rgb(190,1,1) }"));
        tbl_currentSchedule->setAlternatingRowColors(true);
        tbl_currentSchedule->setSelectionBehavior(QAbstractItemView::SelectRows);
        tbl_currentSchedule->setShowGrid(true);
        tbl_currentSchedule->setCornerButtonEnabled(false);

        verticalLayout_6->addWidget(tbl_currentSchedule);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        pushButton = new QPushButton(page_3);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(120, 30));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(39, 183, 229);"));

        horizontalLayout_5->addWidget(pushButton);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_10);

        btn_purgeCurrent = new QPushButton(page_3);
        btn_purgeCurrent->setObjectName(QString::fromUtf8("btn_purgeCurrent"));
        btn_purgeCurrent->setMinimumSize(QSize(100, 30));
        btn_purgeCurrent->setStyleSheet(QString::fromUtf8("background-color: rgb(239, 41, 41);"));

        horizontalLayout_5->addWidget(btn_purgeCurrent);


        verticalLayout_6->addLayout(horizontalLayout_5);


        horizontalLayout_2->addLayout(verticalLayout_6);

        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        verticalLayout_8 = new QVBoxLayout(page_4);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        label_24 = new QLabel(page_4);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setFont(font2);

        verticalLayout_8->addWidget(label_24);

        tbl_purgedSchedule = new QTableView(page_4);
        tbl_purgedSchedule->setObjectName(QString::fromUtf8("tbl_purgedSchedule"));
        tbl_purgedSchedule->setStyleSheet(QString::fromUtf8("QHeaderView::section { background-color:black; color:white ; font-weight: bold}\n"
"QTableCornerButton::section { background-color:black }\n"
"verticalHeader::section{ background-color:rgb(190,1,1) }"));
        tbl_purgedSchedule->setAlternatingRowColors(true);
        tbl_purgedSchedule->setSelectionBehavior(QAbstractItemView::SelectRows);
        tbl_purgedSchedule->setShowGrid(true);
        tbl_purgedSchedule->setCornerButtonEnabled(false);

        verticalLayout_8->addWidget(tbl_purgedSchedule);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        pushButton_2 = new QPushButton(page_4);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(170, 30));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(39, 183, 229);"));

        horizontalLayout_8->addWidget(pushButton_2);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_7);

        btn_delete = new QPushButton(page_4);
        btn_delete->setObjectName(QString::fromUtf8("btn_delete"));
        btn_delete->setMinimumSize(QSize(100, 30));
        btn_delete->setStyleSheet(QString::fromUtf8("background-color: rgb(239, 41, 41);"));

        horizontalLayout_8->addWidget(btn_delete);


        verticalLayout_8->addLayout(horizontalLayout_8);

        stackedWidget->addWidget(page_4);

        verticalLayout_7->addWidget(stackedWidget);


        retranslateUi(scheduleScreen);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(scheduleScreen);
    } // setupUi

    void retranslateUi(QWidget *scheduleScreen)
    {
        scheduleScreen->setWindowTitle(QApplication::translate("scheduleScreen", "Form", nullptr));
        btn_back->setText(QApplication::translate("scheduleScreen", "Back", nullptr));
        label_29->setText(QApplication::translate("scheduleScreen", "Scheduler", nullptr));
        btn_schedule->setText(QApplication::translate("scheduleScreen", "Schedule", nullptr));
        btn_viewCurrent->setText(QApplication::translate("scheduleScreen", "View Current Schedule", nullptr));
        btn_viewPurged->setText(QApplication::translate("scheduleScreen", "View Purged Schedule", nullptr));
        btn_logo->setText(QApplication::translate("scheduleScreen", "BRADFORD SWISSPORT", nullptr));
        label_7->setText(QApplication::translate("scheduleScreen", "Schedule Employees", nullptr));
        lbl_name->setText(QApplication::translate("scheduleScreen", "Logged in as: User", nullptr));
        label_10->setText(QApplication::translate("scheduleScreen", "Select Employee:", nullptr));
        label->setText(QApplication::translate("scheduleScreen", "Monday", nullptr));
        label_6->setText(QApplication::translate("scheduleScreen", "Saturday", nullptr));
        label_4->setText(QApplication::translate("scheduleScreen", "Thursday", nullptr));
        label_5->setText(QApplication::translate("scheduleScreen", "Friday", nullptr));
        label_3->setText(QApplication::translate("scheduleScreen", "Wednesday", nullptr));
        label_8->setText(QApplication::translate("scheduleScreen", "Sunday", nullptr));
        label_2->setText(QApplication::translate("scheduleScreen", "Tuesday", nullptr));
        label_9->setText(QApplication::translate("scheduleScreen", "Employee Name", nullptr));
        btn_generate->setText(QApplication::translate("scheduleScreen", "Generate Schedule", nullptr));
        btn_override->setText(QApplication::translate("scheduleScreen", "Override", nullptr));
        btn_purge->setText(QApplication::translate("scheduleScreen", "Purge Schedule", nullptr));
        label_19->setText(QApplication::translate("scheduleScreen", "Current Schedule", nullptr));
        pushButton->setText(QApplication::translate("scheduleScreen", "Save Schedule", nullptr));
        btn_purgeCurrent->setText(QApplication::translate("scheduleScreen", "PURGE", nullptr));
        label_24->setText(QApplication::translate("scheduleScreen", "Purged Schedule", nullptr));
        pushButton_2->setText(QApplication::translate("scheduleScreen", "Save Purged Schedule", nullptr));
        btn_delete->setText(QApplication::translate("scheduleScreen", "DELETE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class scheduleScreen: public Ui_scheduleScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCHEDULESCREEN_H

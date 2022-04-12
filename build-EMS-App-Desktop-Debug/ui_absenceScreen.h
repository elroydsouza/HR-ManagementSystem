/********************************************************************************
** Form generated from reading UI file 'absenceScreen.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABSENCESCREEN_H
#define UI_ABSENCESCREEN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_absenceScreen
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
    QPushButton *btn_request;
    QPushButton *btn_outstandingReq;
    QPushButton *btn_outstandingApp;
    QPushButton *btn_maintenance;
    QPushButton *btn_back;
    QSpacerItem *verticalSpacer_7;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_11;
    QHBoxLayout *horizontalLayout_11;
    QVBoxLayout *verticalLayout_9;
    QSpacerItem *verticalSpacer_19;
    QHBoxLayout *horizontalLayout_9;
    QRadioButton *rb_holiday;
    QRadioButton *rb_sick;
    QSpacerItem *verticalSpacer_16;
    QLabel *label_32;
    QPlainTextEdit *pte_reason;
    QLabel *lbl_charactersRemaining;
    QSpacerItem *verticalSpacer_17;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_33;
    QDateEdit *de_absenceDate;
    QSpacerItem *horizontalSpacer_14;
    QSpacerItem *verticalSpacer_18;
    QPushButton *Rbtn_request;
    QSpacerItem *verticalSpacer_20;
    QVBoxLayout *verticalLayout_7;
    QWidget *verticalWidget_3;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_31;
    QLabel *Rlbl_holidayLeave;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_30;
    QLabel *Rlbl_sickLeave;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_7;
    QLabel *label;
    QHBoxLayout *horizontalLayout_3;
    QTableView *tbl_holidayLeave;
    QSpacerItem *horizontalSpacer_5;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_12;
    QSpacerItem *verticalSpacer_2;
    QGridLayout *gridLayout;
    QLineEdit *ORle_type;
    QSpacerItem *verticalSpacer_4;
    QLineEdit *ORle_ticketID;
    QDateEdit *ORde_date;
    QLabel *label_10;
    QLabel *label_14;
    QLabel *label_13;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer_3;
    QPushButton *btn_requestDelete;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_4;
    QTableView *tbl_sickLeave;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_3;
    QPlainTextEdit *ORpte_reason;
    QWidget *page_3;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QTableView *tbl_outstandingApp;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_9;
    QLineEdit *le_ticketID;
    QLabel *label_19;
    QLineEdit *OAle_type;
    QLabel *label_5;
    QLineEdit *le_name;
    QLabel *label_6;
    QDateEdit *de_date;
    QLabel *label_8;
    QPlainTextEdit *OApte_reason;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btn_approve;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *btn_deny;
    QSpacerItem *horizontalSpacer_3;
    QWidget *page_4;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_24;
    QHBoxLayout *horizontalLayout_7;
    QTableView *tbl_employees;
    QVBoxLayout *verticalLayout_11;
    QSpacerItem *verticalSpacer_10;
    QLabel *label_18;
    QLineEdit *Mle_employeeID;
    QSpacerItem *verticalSpacer_8;
    QLabel *label_15;
    QLineEdit *Mle_employeeName;
    QSpacerItem *verticalSpacer_11;
    QLabel *label_16;
    QLineEdit *Mle_remainingHol;
    QSpacerItem *verticalSpacer_12;
    QLabel *label_17;
    QLineEdit *Mle_remainingSick;
    QSpacerItem *verticalSpacer_9;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer_13;

    void setupUi(QWidget *absenceScreen)
    {
        if (absenceScreen->objectName().isEmpty())
            absenceScreen->setObjectName(QString::fromUtf8("absenceScreen"));
        absenceScreen->resize(1000, 550);
        absenceScreen->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout = new QHBoxLayout(absenceScreen);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalSidebar = new QWidget(absenceScreen);
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

        btn_request = new QPushButton(verticalSidebar);
        btn_request->setObjectName(QString::fromUtf8("btn_request"));
        btn_request->setEnabled(true);
        btn_request->setMinimumSize(QSize(210, 75));
        btn_request->setStyleSheet(QString::fromUtf8("QPushButton{ border: none; Text-align:left;}\n"
"\n"
"QPushButton::hover { background-color: rgb(97, 199, 231); }\n"
"\n"
"QPushButton::pressed { background-color: rgb(48, 152, 185); }"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../add-user.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_request->setIcon(icon);
        btn_request->setIconSize(QSize(30, 30));
        btn_request->setCheckable(true);
        btn_request->setChecked(true);
        btn_request->setAutoExclusive(true);
        btn_request->setFlat(true);

        verticalLayout->addWidget(btn_request);

        btn_outstandingReq = new QPushButton(verticalSidebar);
        btn_outstandingReq->setObjectName(QString::fromUtf8("btn_outstandingReq"));
        btn_outstandingReq->setMinimumSize(QSize(0, 75));
        btn_outstandingReq->setStyleSheet(QString::fromUtf8("QPushButton{ border: none; Text-align:left;}\n"
"\n"
"QPushButton::hover { background-color: rgb(97, 199, 231); }\n"
"\n"
"QPushButton::pressed { background-color: rgb(48, 152, 185); }"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../alert.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_outstandingReq->setIcon(icon1);
        btn_outstandingReq->setIconSize(QSize(30, 30));
        btn_outstandingReq->setCheckable(true);
        btn_outstandingReq->setAutoExclusive(true);
        btn_outstandingReq->setFlat(true);

        verticalLayout->addWidget(btn_outstandingReq);

        btn_outstandingApp = new QPushButton(verticalSidebar);
        btn_outstandingApp->setObjectName(QString::fromUtf8("btn_outstandingApp"));
        btn_outstandingApp->setMinimumSize(QSize(0, 75));
        btn_outstandingApp->setStyleSheet(QString::fromUtf8("QPushButton{ border: none; Text-align:left;}\n"
"\n"
"QPushButton::hover { background-color: rgb(97, 199, 231); }\n"
"\n"
"QPushButton::pressed { background-color: rgb(48, 152, 185); }\n"
""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../../settings-gear-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_outstandingApp->setIcon(icon2);
        btn_outstandingApp->setIconSize(QSize(30, 30));
        btn_outstandingApp->setCheckable(true);
        btn_outstandingApp->setAutoExclusive(true);
        btn_outstandingApp->setFlat(true);

        verticalLayout->addWidget(btn_outstandingApp);

        btn_maintenance = new QPushButton(verticalSidebar);
        btn_maintenance->setObjectName(QString::fromUtf8("btn_maintenance"));
        btn_maintenance->setMinimumSize(QSize(0, 75));
        btn_maintenance->setStyleSheet(QString::fromUtf8("QPushButton{ border: none; Text-align:left;}\n"
"\n"
"QPushButton::hover { background-color: rgb(97, 199, 231); }\n"
"\n"
"QPushButton::pressed { background-color: rgb(48, 152, 185); }"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../../ask-for-help.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_maintenance->setIcon(icon3);
        btn_maintenance->setIconSize(QSize(30, 30));
        btn_maintenance->setCheckable(true);
        btn_maintenance->setChecked(false);
        btn_maintenance->setAutoExclusive(true);
        btn_maintenance->setFlat(true);

        verticalLayout->addWidget(btn_maintenance);

        btn_back = new QPushButton(verticalSidebar);
        btn_back->setObjectName(QString::fromUtf8("btn_back"));

        verticalLayout->addWidget(btn_back);

        verticalSpacer_7 = new QSpacerItem(20, 9, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_7);


        horizontalLayout->addWidget(verticalSidebar);

        stackedWidget = new QStackedWidget(absenceScreen);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(243, 243, 243);"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        verticalLayout_2 = new QVBoxLayout(page);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_11 = new QLabel(page);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setPointSize(15);
        label_11->setFont(font2);

        verticalLayout_2->addWidget(label_11);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(15, -1, 15, -1);
        verticalSpacer_19 = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_9->addItem(verticalSpacer_19);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        rb_holiday = new QRadioButton(page);
        rb_holiday->setObjectName(QString::fromUtf8("rb_holiday"));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(false);
        font3.setWeight(50);
        rb_holiday->setFont(font3);

        horizontalLayout_9->addWidget(rb_holiday);

        rb_sick = new QRadioButton(page);
        rb_sick->setObjectName(QString::fromUtf8("rb_sick"));
        QFont font4;
        font4.setPointSize(12);
        rb_sick->setFont(font4);

        horizontalLayout_9->addWidget(rb_sick);


        verticalLayout_9->addLayout(horizontalLayout_9);

        verticalSpacer_16 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_16);

        label_32 = new QLabel(page);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        QFont font5;
        font5.setPointSize(11);
        label_32->setFont(font5);

        verticalLayout_9->addWidget(label_32);

        pte_reason = new QPlainTextEdit(page);
        pte_reason->setObjectName(QString::fromUtf8("pte_reason"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pte_reason->sizePolicy().hasHeightForWidth());
        pte_reason->setSizePolicy(sizePolicy1);

        verticalLayout_9->addWidget(pte_reason);

        lbl_charactersRemaining = new QLabel(page);
        lbl_charactersRemaining->setObjectName(QString::fromUtf8("lbl_charactersRemaining"));
        lbl_charactersRemaining->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_9->addWidget(lbl_charactersRemaining);

        verticalSpacer_17 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_17);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        label_33 = new QLabel(page);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setFont(font5);

        horizontalLayout_15->addWidget(label_33);

        de_absenceDate = new QDateEdit(page);
        de_absenceDate->setObjectName(QString::fromUtf8("de_absenceDate"));
        de_absenceDate->setMinimumSize(QSize(175, 30));

        horizontalLayout_15->addWidget(de_absenceDate);

        horizontalSpacer_14 = new QSpacerItem(150, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_14);


        verticalLayout_9->addLayout(horizontalLayout_15);

        verticalSpacer_18 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_18);

        Rbtn_request = new QPushButton(page);
        Rbtn_request->setObjectName(QString::fromUtf8("Rbtn_request"));
        Rbtn_request->setMinimumSize(QSize(0, 30));
        Rbtn_request->setStyleSheet(QString::fromUtf8("background-color: rgb(39, 183, 229);"));

        verticalLayout_9->addWidget(Rbtn_request);

        verticalSpacer_20 = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_9->addItem(verticalSpacer_20);


        horizontalLayout_11->addLayout(verticalLayout_9);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(15, 100, 15, 100);
        verticalWidget_3 = new QWidget(page);
        verticalWidget_3->setObjectName(QString::fromUtf8("verticalWidget_3"));
        verticalWidget_3->setStyleSheet(QString::fromUtf8("#verticalWidget_3{border: 2px solid;background-color: rgb(48, 152, 185); }"));
        verticalLayout_10 = new QVBoxLayout(verticalWidget_3);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(15, -1, 15, -1);
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(7, -1, 7, -1);
        label_31 = new QLabel(verticalWidget_3);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        QFont font6;
        font6.setPointSize(12);
        font6.setBold(true);
        font6.setWeight(75);
        label_31->setFont(font6);
        label_31->setStyleSheet(QString::fromUtf8("background-color: rgba(0,0,0,0%)"));

        horizontalLayout_13->addWidget(label_31);

        Rlbl_holidayLeave = new QLabel(verticalWidget_3);
        Rlbl_holidayLeave->setObjectName(QString::fromUtf8("Rlbl_holidayLeave"));
        Rlbl_holidayLeave->setFont(font6);
        Rlbl_holidayLeave->setStyleSheet(QString::fromUtf8("background-color: rgba(0,0,0,0%)"));

        horizontalLayout_13->addWidget(Rlbl_holidayLeave);


        verticalLayout_10->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        horizontalLayout_14->setContentsMargins(7, -1, 7, -1);
        label_30 = new QLabel(verticalWidget_3);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setFont(font6);
        label_30->setStyleSheet(QString::fromUtf8("background-color: rgba(0,0,0,0%)"));

        horizontalLayout_14->addWidget(label_30);

        Rlbl_sickLeave = new QLabel(verticalWidget_3);
        Rlbl_sickLeave->setObjectName(QString::fromUtf8("Rlbl_sickLeave"));
        Rlbl_sickLeave->setFont(font6);
        Rlbl_sickLeave->setStyleSheet(QString::fromUtf8("background-color: rgba(0,0,0,0%)"));

        horizontalLayout_14->addWidget(Rlbl_sickLeave);


        verticalLayout_10->addLayout(horizontalLayout_14);


        verticalLayout_7->addWidget(verticalWidget_3);


        horizontalLayout_11->addLayout(verticalLayout_7);


        verticalLayout_2->addLayout(horizontalLayout_11);

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

        label = new QLabel(page_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font5);

        verticalLayout_3->addWidget(label);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        tbl_holidayLeave = new QTableView(page_2);
        tbl_holidayLeave->setObjectName(QString::fromUtf8("tbl_holidayLeave"));
        tbl_holidayLeave->setStyleSheet(QString::fromUtf8("QHeaderView::section { background-color:black; color:white ; font-weight: bold}\n"
"QTableCornerButton::section { background-color:black }\n"
"verticalHeader::section{ background-color:rgb(190,1,1) }"));
        tbl_holidayLeave->setAlternatingRowColors(true);
        tbl_holidayLeave->setSelectionBehavior(QAbstractItemView::SelectRows);
        tbl_holidayLeave->setShowGrid(false);
        tbl_holidayLeave->setCornerButtonEnabled(false);

        horizontalLayout_3->addWidget(tbl_holidayLeave);

        horizontalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_12 = new QLabel(page_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        verticalLayout_6->addWidget(label_12);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        ORle_type = new QLineEdit(page_2);
        ORle_type->setObjectName(QString::fromUtf8("ORle_type"));
        ORle_type->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(ORle_type, 2, 1, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 7, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_4, 1, 1, 1, 1);

        ORle_ticketID = new QLineEdit(page_2);
        ORle_ticketID->setObjectName(QString::fromUtf8("ORle_ticketID"));
        ORle_ticketID->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(ORle_ticketID, 0, 1, 1, 1);

        ORde_date = new QDateEdit(page_2);
        ORde_date->setObjectName(QString::fromUtf8("ORde_date"));
        ORde_date->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(ORde_date, 4, 1, 1, 1);

        label_10 = new QLabel(page_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 0, 0, 1, 1);

        label_14 = new QLabel(page_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout->addWidget(label_14, 4, 0, 1, 1);

        label_13 = new QLabel(page_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout->addWidget(label_13, 2, 0, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 7, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_5, 3, 1, 1, 1);


        verticalLayout_6->addLayout(gridLayout);

        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_3);

        btn_requestDelete = new QPushButton(page_2);
        btn_requestDelete->setObjectName(QString::fromUtf8("btn_requestDelete"));
        btn_requestDelete->setMinimumSize(QSize(0, 30));
        btn_requestDelete->setStyleSheet(QString::fromUtf8("background-color: rgb(239, 41, 41);"));

        verticalLayout_6->addWidget(btn_requestDelete);


        horizontalLayout_3->addLayout(verticalLayout_6);


        verticalLayout_3->addLayout(horizontalLayout_3);

        label_2 = new QLabel(page_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_3->addWidget(label_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        tbl_sickLeave = new QTableView(page_2);
        tbl_sickLeave->setObjectName(QString::fromUtf8("tbl_sickLeave"));
        tbl_sickLeave->setStyleSheet(QString::fromUtf8("QHeaderView::section { background-color:black; color:white ; font-weight: bold}\n"
"QTableCornerButton::section { background-color:black }\n"
"verticalHeader::section{ background-color:rgb(190,1,1) }"));
        tbl_sickLeave->setAlternatingRowColors(true);
        tbl_sickLeave->setSelectionBehavior(QAbstractItemView::SelectRows);
        tbl_sickLeave->setShowGrid(false);
        tbl_sickLeave->setCornerButtonEnabled(false);

        horizontalLayout_4->addWidget(tbl_sickLeave);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_3 = new QLabel(page_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_5->addWidget(label_3);

        ORpte_reason = new QPlainTextEdit(page_2);
        ORpte_reason->setObjectName(QString::fromUtf8("ORpte_reason"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(ORpte_reason->sizePolicy().hasHeightForWidth());
        ORpte_reason->setSizePolicy(sizePolicy3);
        ORpte_reason->setReadOnly(true);

        verticalLayout_5->addWidget(ORpte_reason);


        horizontalLayout_4->addLayout(verticalLayout_5);


        verticalLayout_3->addLayout(horizontalLayout_4);

        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        horizontalLayout_2 = new QHBoxLayout(page_3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_4 = new QLabel(page_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font2);

        verticalLayout_4->addWidget(label_4);

        tbl_outstandingApp = new QTableView(page_3);
        tbl_outstandingApp->setObjectName(QString::fromUtf8("tbl_outstandingApp"));
        tbl_outstandingApp->setStyleSheet(QString::fromUtf8("QHeaderView::section { background-color:black; color:white ; font-weight: bold}\n"
"QTableCornerButton::section { background-color:black }\n"
"verticalHeader::section{ background-color:rgb(190,1,1) }"));
        tbl_outstandingApp->setAlternatingRowColors(true);
        tbl_outstandingApp->setSelectionBehavior(QAbstractItemView::SelectRows);
        tbl_outstandingApp->setShowGrid(false);
        tbl_outstandingApp->setCornerButtonEnabled(false);

        verticalLayout_4->addWidget(tbl_outstandingApp);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_9 = new QLabel(page_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_5->addWidget(label_9);

        le_ticketID = new QLineEdit(page_3);
        le_ticketID->setObjectName(QString::fromUtf8("le_ticketID"));
        le_ticketID->setMinimumSize(QSize(0, 30));

        horizontalLayout_5->addWidget(le_ticketID);

        label_19 = new QLabel(page_3);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        horizontalLayout_5->addWidget(label_19);

        OAle_type = new QLineEdit(page_3);
        OAle_type->setObjectName(QString::fromUtf8("OAle_type"));
        OAle_type->setMinimumSize(QSize(0, 30));
        OAle_type->setReadOnly(true);

        horizontalLayout_5->addWidget(OAle_type);

        label_5 = new QLabel(page_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        le_name = new QLineEdit(page_3);
        le_name->setObjectName(QString::fromUtf8("le_name"));
        le_name->setMinimumSize(QSize(0, 30));
        le_name->setReadOnly(true);

        horizontalLayout_5->addWidget(le_name);

        label_6 = new QLabel(page_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_5->addWidget(label_6);

        de_date = new QDateEdit(page_3);
        de_date->setObjectName(QString::fromUtf8("de_date"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(de_date->sizePolicy().hasHeightForWidth());
        de_date->setSizePolicy(sizePolicy4);
        de_date->setMinimumSize(QSize(0, 30));
        de_date->setReadOnly(true);

        horizontalLayout_5->addWidget(de_date);


        verticalLayout_4->addLayout(horizontalLayout_5);

        label_8 = new QLabel(page_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout_4->addWidget(label_8);

        OApte_reason = new QPlainTextEdit(page_3);
        OApte_reason->setObjectName(QString::fromUtf8("OApte_reason"));
        sizePolicy3.setHeightForWidth(OApte_reason->sizePolicy().hasHeightForWidth());
        OApte_reason->setSizePolicy(sizePolicy3);
        OApte_reason->setMaximumSize(QSize(16777215, 150));
        OApte_reason->setReadOnly(true);

        verticalLayout_4->addWidget(OApte_reason);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        btn_approve = new QPushButton(page_3);
        btn_approve->setObjectName(QString::fromUtf8("btn_approve"));
        btn_approve->setMinimumSize(QSize(0, 30));
        btn_approve->setStyleSheet(QString::fromUtf8("background-color: rgb(39, 183, 229);"));

        horizontalLayout_6->addWidget(btn_approve);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);

        btn_deny = new QPushButton(page_3);
        btn_deny->setObjectName(QString::fromUtf8("btn_deny"));
        btn_deny->setMinimumSize(QSize(0, 30));
        btn_deny->setStyleSheet(QString::fromUtf8("background-color: rgb(239, 41, 41);"));

        horizontalLayout_6->addWidget(btn_deny);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);


        verticalLayout_4->addLayout(horizontalLayout_6);


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

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        tbl_employees = new QTableView(page_4);
        tbl_employees->setObjectName(QString::fromUtf8("tbl_employees"));
        tbl_employees->setStyleSheet(QString::fromUtf8("QHeaderView::section { background-color:black; color:white ; font-weight: bold}\n"
"QTableCornerButton::section { background-color:black }\n"
"verticalHeader::section{ background-color:rgb(190,1,1) }"));
        tbl_employees->setAlternatingRowColors(true);
        tbl_employees->setSelectionBehavior(QAbstractItemView::SelectRows);
        tbl_employees->setShowGrid(false);
        tbl_employees->setCornerButtonEnabled(false);

        horizontalLayout_7->addWidget(tbl_employees);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_11->addItem(verticalSpacer_10);

        label_18 = new QLabel(page_4);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        verticalLayout_11->addWidget(label_18);

        Mle_employeeID = new QLineEdit(page_4);
        Mle_employeeID->setObjectName(QString::fromUtf8("Mle_employeeID"));
        Mle_employeeID->setReadOnly(true);

        verticalLayout_11->addWidget(Mle_employeeID);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_11->addItem(verticalSpacer_8);

        label_15 = new QLabel(page_4);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        verticalLayout_11->addWidget(label_15);

        Mle_employeeName = new QLineEdit(page_4);
        Mle_employeeName->setObjectName(QString::fromUtf8("Mle_employeeName"));
        Mle_employeeName->setReadOnly(true);

        verticalLayout_11->addWidget(Mle_employeeName);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_11->addItem(verticalSpacer_11);

        label_16 = new QLabel(page_4);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        verticalLayout_11->addWidget(label_16);

        Mle_remainingHol = new QLineEdit(page_4);
        Mle_remainingHol->setObjectName(QString::fromUtf8("Mle_remainingHol"));

        verticalLayout_11->addWidget(Mle_remainingHol);

        verticalSpacer_12 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_11->addItem(verticalSpacer_12);

        label_17 = new QLabel(page_4);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        verticalLayout_11->addWidget(label_17);

        Mle_remainingSick = new QLineEdit(page_4);
        Mle_remainingSick->setObjectName(QString::fromUtf8("Mle_remainingSick"));

        verticalLayout_11->addWidget(Mle_remainingSick);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_11->addItem(verticalSpacer_9);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_6);

        pushButton = new QPushButton(page_4);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(0, 30));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(39, 183, 229);"));

        horizontalLayout_8->addWidget(pushButton);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_7);


        verticalLayout_11->addLayout(horizontalLayout_8);

        verticalSpacer_13 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_11->addItem(verticalSpacer_13);


        horizontalLayout_7->addLayout(verticalLayout_11);


        verticalLayout_8->addLayout(horizontalLayout_7);

        stackedWidget->addWidget(page_4);

        horizontalLayout->addWidget(stackedWidget);


        retranslateUi(absenceScreen);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(absenceScreen);
    } // setupUi

    void retranslateUi(QWidget *absenceScreen)
    {
        absenceScreen->setWindowTitle(QApplication::translate("absenceScreen", "Absence Management Screen", nullptr));
        btn_logo->setText(QApplication::translate("absenceScreen", "BRADFORD SWISSPORT", nullptr));
        lbl_name->setText(QApplication::translate("absenceScreen", "Logged in as: User", nullptr));
        label_29->setText(QApplication::translate("absenceScreen", "Absence Management", nullptr));
        btn_request->setText(QApplication::translate("absenceScreen", "Request", nullptr));
        btn_outstandingReq->setText(QApplication::translate("absenceScreen", "Outstanding requests", nullptr));
        btn_outstandingApp->setText(QApplication::translate("absenceScreen", "Outstanding approvals", nullptr));
        btn_maintenance->setText(QApplication::translate("absenceScreen", "Maintenance", nullptr));
        btn_back->setText(QApplication::translate("absenceScreen", "Back", nullptr));
        label_11->setText(QApplication::translate("absenceScreen", "Request Absence", nullptr));
        rb_holiday->setText(QApplication::translate("absenceScreen", "Holiday", nullptr));
        rb_sick->setText(QApplication::translate("absenceScreen", "Sick", nullptr));
        label_32->setText(QApplication::translate("absenceScreen", "Reason:", nullptr));
        pte_reason->setPlainText(QString());
        lbl_charactersRemaining->setText(QApplication::translate("absenceScreen", "0/400", nullptr));
        label_33->setText(QApplication::translate("absenceScreen", "Date:", nullptr));
        de_absenceDate->setDisplayFormat(QApplication::translate("absenceScreen", "yyyy-MM-dd", nullptr));
        Rbtn_request->setText(QApplication::translate("absenceScreen", "Request", nullptr));
        label_31->setText(QApplication::translate("absenceScreen", "Remaining holiday leave:", nullptr));
        Rlbl_holidayLeave->setText(QApplication::translate("absenceScreen", "0", nullptr));
        label_30->setText(QApplication::translate("absenceScreen", "Remaining sick leave:", nullptr));
        Rlbl_sickLeave->setText(QApplication::translate("absenceScreen", "0", nullptr));
        label_7->setText(QApplication::translate("absenceScreen", "Outstanding Requests", nullptr));
        label->setText(QApplication::translate("absenceScreen", "Holidays leave", nullptr));
        label_12->setText(QApplication::translate("absenceScreen", "Selected leave:", nullptr));
        ORde_date->setDisplayFormat(QApplication::translate("absenceScreen", "yyyy-MM-dd", nullptr));
        label_10->setText(QApplication::translate("absenceScreen", "Ticket ID:", nullptr));
        label_14->setText(QApplication::translate("absenceScreen", "Date:", nullptr));
        label_13->setText(QApplication::translate("absenceScreen", "Type:", nullptr));
        btn_requestDelete->setText(QApplication::translate("absenceScreen", "Delete", nullptr));
        label_2->setText(QApplication::translate("absenceScreen", "Sick leave", nullptr));
        label_3->setText(QApplication::translate("absenceScreen", "Selected sick leave reason:", nullptr));
        label_4->setText(QApplication::translate("absenceScreen", "Outstanding Approvals", nullptr));
        label_9->setText(QApplication::translate("absenceScreen", "Ticket ID:", nullptr));
        label_19->setText(QApplication::translate("absenceScreen", "Type:", nullptr));
        label_5->setText(QApplication::translate("absenceScreen", "Name:", nullptr));
        label_6->setText(QApplication::translate("absenceScreen", "Date", nullptr));
        de_date->setDisplayFormat(QApplication::translate("absenceScreen", "yyyy-MM-dd", nullptr));
        label_8->setText(QApplication::translate("absenceScreen", "Reason:", nullptr));
        btn_approve->setText(QApplication::translate("absenceScreen", "Approve", nullptr));
        btn_deny->setText(QApplication::translate("absenceScreen", "Deny", nullptr));
        label_24->setText(QApplication::translate("absenceScreen", "Work Leave Maintenance", nullptr));
        label_18->setText(QApplication::translate("absenceScreen", "Employee ID", nullptr));
        label_15->setText(QApplication::translate("absenceScreen", "Employee Name", nullptr));
        label_16->setText(QApplication::translate("absenceScreen", " Remaining Holiday Leave", nullptr));
        label_17->setText(QApplication::translate("absenceScreen", "Remaining Sick Leave", nullptr));
        pushButton->setText(QApplication::translate("absenceScreen", "Update", nullptr));
    } // retranslateUi

};

namespace Ui {
    class absenceScreen: public Ui_absenceScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABSENCESCREEN_H

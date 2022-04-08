#include "user.h"

User::User(){

}

QString User::getEmployeeID() {
    return currentEmployeeID;
};

QString User::getEmail() {
    return currentEmail;
};

QString User::getFirstName() {
    return currentFirstName;
};

QString User::getLastName() {
    return currentLastName;
};

QString User::getFullName() {
    QString currentFullName = getFirstName() + " " + getLastName();
    return currentFullName;
};

int User::getPermLevel() {
    return currentPermLevel;
}

void User::updateFirstName(QString name){
    currentFirstName = name;
};

void User::updateLastName(QString name){
    currentLastName = name;
};

#ifndef USER_H
#define USER_H
#include <QString>

class User
{
public:
    User();
    QString getEmployeeID();
    QString getEmail();
    QString getFirstName();
    QString getLastName();
    QString getFullName();
    void setUser(QString setEmployeeID, QString setEmail, QString setFirstName, QString setLastName) {
        currentEmployeeID = setEmployeeID;
        currentEmail = setEmail;
        currentFirstName = setFirstName;
        currentLastName = setLastName;
    }
    void updateFirstName(QString name);
    void updateLastName(QString name);

private:
    QString currentEmployeeID;
    QString currentEmail;
    QString currentFirstName;
    QString currentLastName;
};

#endif // USER_H

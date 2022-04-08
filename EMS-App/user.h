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
    int getPermLevel();
    void setUser(QString setEmployeeID, QString setEmail, QString setFirstName, QString setLastName, int setPermLevel) {
        currentEmployeeID = setEmployeeID;
        currentEmail = setEmail;
        currentFirstName = setFirstName;
        currentLastName = setLastName;
        currentPermLevel = setPermLevel;
    }
    void updateFirstName(QString name);
    void updateLastName(QString name);

private:
    QString currentEmployeeID;
    QString currentEmail;
    QString currentFirstName;
    QString currentLastName;
    int currentPermLevel;
};

#endif // USER_H

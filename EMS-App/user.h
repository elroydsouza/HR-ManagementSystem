#ifndef USER_H
#define USER_H
#include <QString>

class User
{
public:
    User();
    int getUserID();
    QString getEmail();
    QString getFirstName();
    QString getLastName();
    QString getFullName();
    void setUser(int setUserID, QString setEmail, QString setFirstName, QString setLastName) {
        currentUserID = setUserID;
        currentEmail = setEmail;
        currentFirstName = setFirstName;
        currentLastName = setLastName;
    }
    void updateFirstName(QString name);
    void updateLastName(QString name);

private:
    int currentUserID;
    QString currentEmail;
    QString currentFirstName;
    QString currentLastName;
};

#endif // USER_H

#ifndef LOGINDB_H
#define LOGINDB_H

#include <QObject>
#include "src/bend/db/databasemanage.h"
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
class LoginDb
{
public:
    LoginDb();
    int userInfo(const QString &username,const QString &password);
    bool databasedb();
private:
    QSqlDatabase db;
};

#endif // LOGINDB_H

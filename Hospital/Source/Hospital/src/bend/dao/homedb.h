#ifndef HOMEDB_H
#define HOMEDB_H

#include <QObject>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QHash>
#include "src/bend/db/databasemanage.h"
class HomeDb
{
public:
    HomeDb();
    QHash<QString,QString> loadUserInfo(const QString &username);
private:
    QSqlDatabase sql;
};

#endif // HOMEDB_H

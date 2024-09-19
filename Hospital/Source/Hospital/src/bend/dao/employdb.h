#ifndef EMPLOYDB_H
#define EMPLOYDB_H

#include <QObject>
#include "src/bend/db/databasemanage.h"
#include <QStandardItemModel>
#include <QSqlRecord>
class EmployDb
{
public:
    EmployDb();
    QStandardItemModel* getEmployInfo();
    QStringList getUserType();
    QStringList getSectionRoom();
    bool deleteEmploy(const QString &username);
};

#endif // EMPLOYDB_H

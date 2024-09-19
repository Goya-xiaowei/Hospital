#ifndef DATABASEMANAGE_H
#define DATABASEMANAGE_H
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QMutexLocker>


class DatabaseManage
{
public:
    static DatabaseManage* instance();
    QSqlDatabase& database();

private:
    DatabaseManage();
    ~DatabaseManage();

    static DatabaseManage* m_instance;
    QSqlDatabase m_database;
};

#endif // DATABASEMANAGE_H

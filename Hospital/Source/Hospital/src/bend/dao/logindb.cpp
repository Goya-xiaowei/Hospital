#include "logindb.h"

LoginDb::LoginDb()
{
    db = DatabaseManage::instance()->database();
}

int LoginDb::userInfo(const QString &username, const QString &password)
{
    QSqlQuery query;
    query.prepare("SELECT Pwd FROM `users` WHERE Uname = name");
    query.bindValue(":name",username);
    if(query.exec() && query.next())
    {
        QString pwd = query.value(0).toString();
        if(password == pwd)
        {
            return 1;
        }
        else
        {
            return 2;
        }
    }
    else
    {
        return 0;
    }
}

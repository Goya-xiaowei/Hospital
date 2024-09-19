#include "homedb.h"

HomeDb::HomeDb()
{
    sql = DatabaseManage::instance()->database();
}

QHash<QString, QString> HomeDb::loadUserInfo(const QString &username)
{
    QSqlQuery query;
    QHash<QString, QString> userinfo;

    // 准备SQL查询语句
    query.prepare("SELECT Uname, name, Sex, Type, SectionRoom, Phone, Address FROM `users` WHERE Uname = :username");
    query.bindValue(":username", username);

    // 执行查询
    if(query.exec())
    {
        // 检查查询是否成功并获取结果
        if(query.next())
        {
            // 将查询结果存入QHash中
            userinfo["Uname"] = query.value(0).toString();
            userinfo["name"] = query.value(1).toString();
            userinfo["Sex"] = query.value(2).toString();
            userinfo["Type"] = query.value(3).toString();
            userinfo["SectionRoom"] = query.value(4).toString();
            userinfo["Phone"] = query.value(5).toString();
            userinfo["Address"] = query.value(6).toString();
        }
    }
    else
    {
        qDebug()<<query.lastError().text();
    }

    return userinfo;
}

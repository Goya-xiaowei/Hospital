#ifndef USERDB_H
#define USERDB_H

#include <QSqlQueryModel>
#include <QStandardItemModel>
#include <QString>

#include <src/bend/employeeModel/User.h>


class UserModel
{
public:
    UserModel();
    bool saveUserType(const QString &typeName, const QString &peodom);
    bool saveUser(const User &user,const QString &peodom);
    bool addSectionRoom(QHash<QString,QString>);
    bool updateUserPeodom(const QString &name,const QString &peodom);
    bool addSectionRoomSon(const QString &sectionName,const QString &sectionSonName);
    bool deleteSectionRoomSon(const QString &sectionName);

    QStandardItemModel* showReviseSectionRoom();
    QStandardItemModel* showSectionRoom();
    QString selectUser(const QString &tableName,const QString &name);//查询用户名是否存在
    QStandardItemModel* showUser();
    QStandardItemModel* showUserType();
    QStringList fendEmployeeUserType();
    QStringList getPeoDomFunc(const QString &typeName);
    QStringList getUserPeodomFunc(const QString &name);
    QStringList getSectionAddressMoney(const QString &name);
};

#endif // USERDB_H

#include "userdb.h"
#include "src/bend/db/databasemanage.h"

#include <QSqlRecord>

UserModel::UserModel()
{

}

bool UserModel::saveUserType(const QString &typeName, const QString &peodom)
{

    QSqlDatabase db = DatabaseManage::instance()->database();

    QSqlQuery query;
    query.prepare("select Type from userstype where Type = ?");
    query.bindValue(0,typeName);

    if(query.exec())
    {
        QString name;
        while(query.next())
        {
            name = query.value(0).toString();
        }


        if(name.isEmpty()||name!=typeName)
        {
            query.prepare("INSERT INTO userstype(Type,Peodom) VALUES(?,?)");
            query.bindValue(0,typeName);
            query.bindValue(1,peodom);
            return query.exec();
        }
        else
        {
            query.prepare("update userstype set Peodom = ? where Type = ?;");
            query.bindValue(0,peodom);
            query.bindValue(1,typeName);
            return query.exec();
        }

    }
    else
    {
        qDebug() << "Error opening database:" << query.lastError().text();
        return false;
    }



}

bool UserModel::saveUser(const User &user, const QString &peodom)
{
    QSqlDatabase db = DatabaseManage::instance()->database();
    QSqlQuery query;
    QString name = selectUser("users",user.name);

    if(!name.isEmpty())
    {
        return false;
    }
    query.prepare("insert into users(Uname,name,Pwd,Sex,Address,Phone,Type,SectionRoom,Money,Peodom,Information) "
                  "values(?,?,?,?,?,?,?,?,?,?,?)");
    query.bindValue(0,user.username);
    query.bindValue(1,user.name);
    query.bindValue(2,user.password);
    query.bindValue(3,user.sex);
    query.bindValue(4,user.address);
    query.bindValue(5,user.phone);
    query.bindValue(6,user.type);
    query.bindValue(7,user.sectionRoom);
    query.bindValue(8,user.money);
    query.bindValue(9,peodom);
    query.bindValue(10,user.info);
    if(query.exec())
    {
        return true;
    }
    else
    {
        qDebug() << "Error opening database:" << query.lastError().text();
        return false;
    }



}

bool UserModel::addSectionRoom(QHash<QString, QString> info)
{
    QString sectionRoomName = info["科别名称"];
    QString sectionAddress = info["科室地址"];
    QString sectionRoomMoney = info["挂号费"];

    QSqlDatabase db = DatabaseManage::instance()->database();
    QSqlQuery query;
    query.prepare("insert into sectionroom(Sname,Saddr,Sprice) values(:name,:address,:money);");
    query.bindValue(":name",sectionRoomName);
    query.bindValue(":address",sectionAddress);
    query.bindValue(":money",sectionRoomMoney);
    return query.exec();
}

bool UserModel::updateUserPeodom(const QString &name, const QString &peodom)
{

    QSqlDatabase db = DatabaseManage::instance()->database();
    QSqlQuery query;
    query.prepare("update users set Peodom = :peodom where Uname = :name");
    query.bindValue(":peodom",peodom);
    query.bindValue(":name",name);
    if(!query.exec())
    {
        qDebug()<<query.lastError().text();
    }
    return query.exec();
}

bool UserModel::addSectionRoomSon(const QString &sectionName, const QString &sectionSonName)
{
    QSqlDatabase db = DatabaseManage::instance()->database();
    QSqlQuery query;
    query.prepare("insert into sectionroomson(Sname,SonName) values(:section,:sectionson)");
    query.bindValue(":section",sectionName);
    query.bindValue(":sectionson",sectionSonName);
    if(!query.exec())
    {
        qDebug()<<query.lastError().text();
    }
    return query.exec();
}



bool UserModel::deleteSectionRoomSon(const QString &sectionName)
{
    QSqlDatabase db = DatabaseManage::instance()->database();
    QSqlQuery query;
    query.prepare("delete from sectionroomson where SonName = :sectionName");

    query.bindValue(":sectionName",sectionName);
    if(!query.exec())
    {
        qDebug()<<query.lastError().text();
    }
    return query.exec();
}

QStandardItemModel *UserModel::showReviseSectionRoom()
{
    QStandardItemModel *model = new QStandardItemModel();
    QSqlDatabase db = DatabaseManage::instance()->database();
    QSqlQuery query;
    query.prepare("select Sname,Saddr,Sprice from sectionroom;");
    if(query.exec())
    {
        int count = query.record().count();
        while(query.next())
        {
            QStandardItem *item = nullptr;
            for(int i = 0;i < count;i++)
            {
                item = new QStandardItem(query.value(i).toString());
                model->setItem(query.at(),i,item);
            }

        }
    }
    else
    {
        qDebug()<<query.lastError().text();
    }
    return model;
}

QString UserModel::selectUser(const QString &tableName, const QString &name)
{
    QSqlDatabase db = DatabaseManage::instance()->database();
    QSqlQuery query;
    // Directly include the table name and name in the query
    QString queryString = QString("SELECT name FROM %1 WHERE name = '%2'")
                              .arg(tableName)
                              .arg(name);

    query.prepare(queryString);

    QString result;
    if (query.exec())
    {
        while (query.next())
        {
            result = query.value(0).toString();
        }
    }
    else
    {
        qDebug() << query.lastError();
    }

    return result;
}

QStandardItemModel *UserModel::showUser()
{
    QStandardItemModel *model = new QStandardItemModel();
    model->setColumnCount(4);


    QSqlDatabase db = DatabaseManage::instance()->database();
    QSqlQuery query;
    query.prepare("select * from users;");
    if(query.exec())
    {
        while(query.next())
        {
            QString userName = query.value(1).toString();
            QStandardItem *itemUserName = new QStandardItem(userName);

            QString name = query.value(2).toString();
            QStandardItem *itemName = new QStandardItem(name);

            QString userType = query.value(7).toString();
            QStandardItem *itemUserType = new QStandardItem(userType);

            QString sectionRoom = query.value(8).toString();
            QStandardItem *itemSectionRoom = new QStandardItem(sectionRoom);

            model->setItem(query.at(),0,itemUserName);
            model->setItem(query.at(),1,itemName);
            model->setItem(query.at(),2,itemUserType);
            model->setItem(query.at(),3,itemSectionRoom);
        }
    }
    return model;
}

QStandardItemModel* UserModel::showSectionRoom()
{
    QStandardItemModel *model = new QStandardItemModel();
    QSqlDatabase db = DatabaseManage::instance()->database();
    model->setColumnCount(1);
    QSqlQuery query(db);

    // query.prepare("select * from sectionroom");
    query.prepare("SELECT sp.Sname, ss.SonName "
                  "FROM sectionroom sp "
                  "LEFT JOIN sectionroomson ss "
                  "ON sp.Sname = ss.Sname;");

    QMap<QString,QStandardItem*> parentItems;
    if(query.exec())
    {
        while(query.next())
        {
            QString parentItemName = query.value(0).toString();
            QString childItemName = query.value(1).toString();

            if(!parentItems.contains(parentItemName))
            {
                QStandardItem *parentItem = new QStandardItem(parentItemName);
                parentItem->setEnabled(false);
                model->appendRow(parentItem);

                parentItems.insert(parentItemName,parentItem);

            }
            if (!childItemName.isEmpty()) {
                QStandardItem *childItem = new QStandardItem(childItemName);
                parentItems[parentItemName]->appendRow(childItem);
            }


        }
    }
    else
    {
        // 处理查询失败的情况
        qDebug() << "Query failed:" << query.lastError().text();
    }


    return model;
}
QStandardItemModel* UserModel::showUserType()
{
    QStandardItemModel *model = new QStandardItemModel();
    QSqlDatabase db = DatabaseManage::instance()->database();
    QSqlQuery query;
    query.prepare("select Type from userstype;");
    if(query.exec())
    {
        model->clear();
        int count = query.record().count();
        QStringList head;
        for(int i = 0;i < count;i++)
        {
            head<<query.record().fieldName(i);
        }
        model->setHorizontalHeaderLabels(head);

        while(query.next())
        {
            QStandardItem *item = new QStandardItem();
            for(int i = 0;i < count;i++)
            {
                item = new QStandardItem(query.value(i).toString());
                model->setItem(query.at(),i,item);
            }
        }
    }
    else
    {
        qDebug() << "Error executing query:" << query.lastError().text();
    }
    return model;
}

QStringList UserModel::fendEmployeeUserType()
{
    QSqlDatabase db = DatabaseManage::instance()->database();
    QStringList result;
    QSqlQuery query;
    query.prepare("select Type from userstype;");
    if(query.exec())
    {
        while(query.next())
        {
            result.append(query.value(0).toString());
        }
    }
    return result;
}

QStringList UserModel::getPeoDomFunc(const QString &typeName)
{
    QSqlDatabase db = DatabaseManage::instance()->database();
    QStringList result;
    QString peodom; // 存储单个查询结果的变量
    QSqlQuery query;
    query.prepare("select Peodom from userstype where Type = ?;");
    query.bindValue(0, typeName);
    if(query.exec() && query.next()) // 确保查询执行并至少有一条结果
    {
        peodom = query.value(0).toString();

        result = peodom.split(";", Qt::SkipEmptyParts); // 直接分割查询结果
        for(int i = 0;i<result.count();i++)
        {
            result[i] = result[i].trimmed();
        }
    }
    return result;
}

QStringList UserModel::getUserPeodomFunc(const QString &name)
{
    QSqlDatabase db = DatabaseManage::instance()->database();
    QStringList result;
    QString peodom; // 存储单个查询结果的变量
    QSqlQuery query;

    query.prepare("select Peodom from users where Uname = :name;");
    query.bindValue(":name",name);
    if(query.exec() && query.next())
    {

        peodom = query.value(0).toString();
        result = peodom.split(";", Qt::SkipEmptyParts); // 直接分割查询结果
        for(int i = 0; i<result.count();i++)
        {

            result[i] = result[i].trimmed();
        }
    }
    else
    {
        qDebug()<<query.lastError();
    }

    return result;
}

QStringList UserModel::getSectionAddressMoney(const QString &name)
{
    QSqlDatabase db = DatabaseManage::instance()->database();
    QStringList sectionRoomList;
    QSqlQuery query;
    query.prepare("select Saddr,Sprice from sectionroom where Sname = :name;");
    query.bindValue(":name",name);
    if(query.exec() && query.next())
    {
        sectionRoomList.append(query.value(0).toString());
        sectionRoomList.append(query.value(1).toString());
    }
    return sectionRoomList;
}

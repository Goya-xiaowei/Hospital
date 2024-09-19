#include "sectionroomdb.h"
#include <src/bend/db/databasemanage.h>
SectionRoomDb::SectionRoomDb() {}

bool SectionRoomDb::onReviseData(QString oldname,QString newname,QString newaddress,double newmoney)
{
    QSqlDatabase db = DatabaseManage::instance()->database();
    QSqlQuery query;
    if(isExist(oldname))
    {
        query.prepare("update sectionroom set Sname = :newname,Saddr = :newaddress,Sprice = :newmoney "
                      "where Sname = :oldname;");
        query.bindValue(":newname",newname);
        query.bindValue(":newaddress",newaddress);
        query.bindValue(":newmoney",newmoney);
        query.bindValue(":oldname",oldname);
        return query.exec();
    }
    return false;


}

bool SectionRoomDb::onDeleteData(QString oldname)
{
    QSqlDatabase db = DatabaseManage::instance()->database();
    if(isExist(oldname))
    {
        QSqlQuery query;
        query.prepare("delete from sectionroom where Sname = :oldname;");
        query.bindValue(":oldname",oldname);
        return query.exec();
    }
    return false;

}

bool SectionRoomDb::isExist(QString name)
{
    // QSqlDatabase db = DatabaseManage::instance()->database();
    QSqlQuery query;
    query.prepare("select * from where Sname = :name;");
    query.bindValue(":name",name);
    bool is_exist;
    if(query.exec())
    {
        is_exist = query.next();
    }
    return is_exist;
}

bool SectionRoomDb::onAddRectionRoomSonData()
{

}

bool SectionRoomDb::onDeleteRectionRoomSonData()
{

}

QStringList SectionRoomDb::selectAllSection()
{
    QSqlDatabase db = DatabaseManage::instance()->database();
    QSqlQuery query;
    query.prepare("select Sname from sectionroom");
    QStringList sectionRoomList;
    if(query.exec())
    {
        while(query.next())
        {
            sectionRoomList.append(query.value(0).toString());
        }
    }
    return sectionRoomList;
}

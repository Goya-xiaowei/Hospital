#ifndef SECTIONROOMDB_H
#define SECTIONROOMDB_H

#include <QString>


class SectionRoomDb
{
public:
    SectionRoomDb();
    bool onReviseData(QString oldname,QString newname,QString newaddress,double newmoney);
    bool onDeleteData(QString oldname);
    bool isExist(QString oldname);
    bool onAddRectionRoomSonData();
    bool onDeleteRectionRoomSonData();
    QStringList selectAllSection();
};

#endif // SECTIONROOMDB_H

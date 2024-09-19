#include "inpatientdb.h"

InPatientDb::InPatientDb(QObject *parent)
    : QObject{parent}
{

}

QStringList InPatientDb::loadSectionType()
{
    QSqlDatabase db = DatabaseManage::instance()->database();
    QSqlQuery query;
    query.prepare("select Sname from sectionroom;");
    if(query.exec())
    {
        QStringList snameList;
        while(query.next())
        {
            snameList.append(query.value(0).toString());
        }
        return snameList;
    }
    else
    {
        qDebug()<<query.lastError().text();
        return QStringList();
    }

}

QString InPatientDb::returnSectionAddress(const QString &sectionName)
{
    QSqlDatabase db = DatabaseManage::instance()->database();
    QSqlQuery query;
    query.prepare("select Saddr from sectionroom where Sname = :name;");
    query.bindValue(":name",sectionName);
    if(query.exec()&&query.next())
    {
        QString address = query.value(0).toString();
        return address;
    }
    else
    {
        qDebug()<<query.lastError().text();
        return QString();
    }
}

int InPatientDb::getSectionRoomId(const QString &name)
{
    QSqlDatabase db = DatabaseManage::instance()->database();
    QSqlQuery query;
    query.prepare("select Sid from sectionroom where Sname = :name;");
    query.bindValue(":name",name);
    if(query.exec()&&query.next())
    {
        int num = query.value(0).toInt();
        return num;
    }
    else
    {
        qDebug()<<query.lastError().text();
        return int8_t();
    }
}

int InPatientDb::getWardInfoCount()
{
    QSqlDatabase db = DatabaseManage::instance()->database();
    QSqlQuery query;
    query.prepare("select count(*) from ward_info;");
    if(query.exec()&&query.next())
    {
        int num = query.value(0).toInt();
        return num;
    }
    else
    {
        qDebug()<<query.lastError().text();
        return int8_t();
    }

}

bool InPatientDb::addWardInfo(QHash<QString, QString> wardInfo)
{
    QSqlDatabase db = DatabaseManage::instance()->database();
    bool isbool = isWardInfo(wardInfo["病房号"]);
    if(!isbool)
    {
        QSqlQuery query;
        query.prepare("insert into "
                      "ward_info(ward_section_room,ward_type,address,price,ward_number,bed_count) "
                      "values(:ward_section_room,:ward_type,:address,:price,:ward_number,:bed_count)");
        query.bindValue(":ward_section_room",wardInfo["病房科室"]);
        query.bindValue(":ward_type",wardInfo["病房类型"]);
        query.bindValue(":address",wardInfo["病房地址"]);
        query.bindValue(":price",wardInfo["病房价格"]);
        query.bindValue(":ward_number",wardInfo["病房号"]);
        query.bindValue(":bed_count",wardInfo["病床个数"]);
        if(query.exec())
        {
            return true;
        }
        else
        {
            qDebug()<<query.lastError().text();
            return false;
        }
    }
    else
    {
        return false;
    }

}

QStandardItemModel *InPatientDb::loadWardInfoView(const QString &sectionName)
{
    QSqlDatabase db = DatabaseManage::instance()->database();
    QStandardItemModel *model = new QStandardItemModel;
    model->setColumnCount(6);
    QStringList itemList;
    itemList<<"病房科室"<<"病房类型"<<"病房地址"<<"病房价格"<<"病房号"<<"病房床数";
    model->setHorizontalHeaderLabels(itemList);

    QSqlQuery query;
    if(sectionName == "")
    {
        query.prepare("SELECT * FROM ward_info");
    }
    else
    {
        query.prepare("SELECT * FROM ward_info where ward_section_room = :name");
        query.bindValue(":name",sectionName);
    }

    if(query.exec())
    {
        int count = query.record().count();
        int row = 0;
        QStandardItem *item;
        while(query.next())
        {
            for(int i = 1;i < count;i++)
            {
                item = new QStandardItem(query.value(i).toString());
                model->setItem(row,i-1,item);
            }
            row++;
        }
    }
    else
    {
        qDebug()<<query.lastError().text();
    }
    return model;
}

QStandardItemModel *InPatientDb::loadWardBedsView(const QString &roomId)
{
    QSqlDatabase db = DatabaseManage::instance()->database();
    QStandardItemModel *model = new QStandardItemModel;
    model->setColumnCount(5);
    QStringList nameList;
    nameList<<"病房号"<<"床位号"<<"病房状态"<<"病人医疗卡号"<<"床位类型";
    model->setHorizontalHeaderLabels(nameList);
    QSqlQuery query;
    query.prepare("select * from ward_beds where room_number = :roomid");
    query.bindValue(":roomid",roomId);
    if(query.exec())
    {
        int count = query.record().count();//获取列
        int row = 0;
        while(query.next())
        {
            QStandardItem *item;
            for(int i = 1;i < count;i++)
            {
                item = new QStandardItem(query.value(i).toString());
                model->setItem(row,i-1,item);
            }
            row++;
        }
    }
    else
    {
        qDebug()<<query.lastError().text();
    }
    return model;
}

QStandardItemModel *InPatientDb::loadNotNUllWardBeds()
{
    QSqlDatabase db = DatabaseManage::instance()->database();
    QSqlQuery query;
    query.prepare("select * from ward_beds where bed_status = :bedstatus");
    query.bindValue(":bedstatus","空");
    QStandardItemModel *model = new QStandardItemModel;
    QStringList nameList;
    nameList<<"病房号"<<"床位号"<<"病房状态"<<"病人医疗卡号"<<"床位类型";
    model->setHorizontalHeaderLabels(nameList);
    if(query.exec())
    {
        int count = query.record().count();
        int row = 0;
        while(query.next())
        {
            QStandardItem *item;
            for(int i = 1;i < count;i++)
            {
                item = new QStandardItem(query.value(i).toString());
                model->setItem(row,i-1,item);
            }
            row++;
        }
    }
    return model;
}

QStandardItemModel *InPatientDb::loadRegisterInfo()
{
    QSqlDatabase db = DatabaseManage::instance()->database();
    QSqlQuery query;
    query.prepare("select * from ward_beds where bed_status = '空'");

    QStandardItemModel *model = new QStandardItemModel(this);
    QStringList nameList;
    nameList<<"病房号"<<"床位号"<<"病房状态"<<"病人医疗卡号";
    model->setHorizontalHeaderLabels(nameList);
    if(query.exec())
    {
        int count = query.record().count();
        int row = 0;
        while(query.next())
        {
            QStandardItem *item;
            for(int i = 1;i < count;i++)
            {
                item = new QStandardItem(query.value(i).toString());
                model->setItem(row,i-1,item);
            }
            row++;
        }
    }
    return model;
}

QStandardItemModel *InPatientDb::loadRegisteredUserInfo()
{
    QSqlDatabase db = DatabaseManage::instance()->database();
    QSqlQuery query;
    query.prepare("SELECT b.patient_cardid "
                  "FROM ward_info i "
                  "INNER JOIN ward_beds b ON i.ward_number = b.room_number "
                  "WHERE b.patient_cardid IS NOT NULL;");

    QStringList cardList;
    if(query.exec()) {
        while(query.next()) {
            cardList.append(query.value(0).toString());
        }
    } else {
        qDebug() << "Query execution failed:" << query.lastError().text();
    }
    query.clear();
    query.prepare("select i.Name,r.KId,r.IdCard, r.SectionRoom,i.IdcardNo,i.Phone "
                  "from "
                  "register r "
                  "inner join "
                  "idcard i "
                  "on r.IdCard = i.Card;");
    QStandardItemModel *model = new QStandardItemModel;
    QStringList nameList;
    nameList<<"病人姓名"<<"挂号单号"<<"医疗卡号"<<"挂号科室"<<"身份证号"<<"联系电话";
    model->setHorizontalHeaderLabels(nameList);
    if(query.exec())
    {
        int count = query.record().count();
        int row = 0;
        while(query.next())
        {
            QString currentIdCard = query.value(2).toString();
            if(cardList.contains(currentIdCard))
            {
                continue;
            }
            QStandardItem *item;

            for(int i = 0;i < count;i++)
            {
                item = new QStandardItem(query.value(i).toString());
                model->setItem(row,i,item);
            }
            row++;

        }
    }
    else
    {
        qDebug()<<query.lastError().text();
    }
    return model;
}



bool InPatientDb::addWardBedInfo(const QString &wardId, const int &bedNumber)
{
    QSqlDatabase db = DatabaseManage::instance()->database();
    QSqlQuery selectQuery;

    // 准备并执行查询，检查病房是否存在
    selectQuery.prepare("SELECT * FROM ward_info WHERE ward_number = :wardNumber");
    selectQuery.bindValue(":wardNumber", wardId);
    if (selectQuery.exec() && selectQuery.first())
    {
        QSqlQuery query;
        for (int i = 0; i < bedNumber; i++)
        {
            QString bedsId = wardId + QString::number(i + 1).rightJustified(2, '0');
            query.prepare("INSERT INTO ward_beds (room_number, bed_number, bed_status) "
                          "VALUES (:roomNumber, :bedNumber, :bedStatus)");
            query.bindValue(":roomNumber", wardId);
            query.bindValue(":bedNumber", bedsId);
            query.bindValue(":bedStatus", "空"); // 假设 "空" 是 bed_status 字段的允许值

            if (!query.exec())
            {
                qDebug() << query.lastError().text();
                return false; // 如果插入失败，返回 false
            }
        }
        return true; // 所有床位添加成功，返回 true
    }
    else
    {
        qDebug() << selectQuery.lastError().text();
        return false; // 病房不存在，返回 false
    }
}

QSqlDatabase InPatientDb::database()
{
    return DatabaseManage::instance()->database();
}

QStringList InPatientDb::getWardRoomIdList(const QString &sectionRoom)
{
    QStringList wardRoomIdList;
    QSqlDatabase db = DatabaseManage::instance()->database();
    QSqlQuery query;
    query.prepare("select ward_number from ward_info where ward_section_room = :sectionroom");
    query.bindValue(":sectionroom", sectionRoom);
    if (query.exec())
    {
        // 遍历查询结果
        while (query.next())
        {
            // 由于只查询了一个字段，索引应为 0
            wardRoomIdList.append(query.value(0).toString());
        }
    }
    else
    {
        qDebug() << query.lastError().text();
    }
    // 返回收集到的病房号列表
    return wardRoomIdList;
}
//获取房间类型
QString InPatientDb::getWardRoomType(const QString &wardRoomid)
{
    QString wardRoomType;
    QSqlDatabase db = DatabaseManage::instance()->database();
    QSqlQuery query;
    query.prepare("select ward_type from ward_info where ward_number = :wardnumber");
    query.bindValue(":wardnumber", wardRoomid);
    if (query.exec()&&query.next())
    {
        wardRoomType = query.value(0).toString();
    }
    else
    {
        qDebug() << query.lastError().text();
    }
    return wardRoomType;
}

QStringList InPatientDb::getWardRoomBeds(const QString &wardRoomid)
{
    QStringList wardRoomBedsList;
    QSqlDatabase db = DatabaseManage::instance()->database();
    QSqlQuery query;
    query.prepare("select bed_number from ward_beds where room_number = :wardRoomId and bed_status = '空'");
    query.bindValue(":wardRoomId", wardRoomid);
    if (query.exec())
    {
        // 遍历查询结果
        while (query.next())
        {
            // 由于只查询了一个字段，索引应为 0
            wardRoomBedsList.append(query.value(0).toString());
        }
    }
    else
    {
        qDebug() << query.lastError().text();
    }
    // 返回收集到的病床号列表
    return wardRoomBedsList;
}

bool InPatientDb::updateBedInfo(const QString &bedid,const QString &card,const QString &bedType)
{
    QSqlDatabase db = DatabaseManage::instance()->database();
    QSqlQuery query;
    query.prepare("update ward_beds "
                  "set bed_status = '已住', patient_cardid = :card ,bed_type = :bedtype "
                  "where bed_number = :bedid");
    query.bindValue(":card",card);
    query.bindValue(":bedtype",bedType);
    query.bindValue(":bedid",bedid);
    return query.exec();
}

QString InPatientDb::getWardRoomPrice(const QString &wardRoomId)
{
    QSqlDatabase db = DatabaseManage::instance()->database();
    QSqlQuery query;
    query.prepare("SELECT price FROM ward_info WHERE ward_number = :wardroomid;");
    query.bindValue(":wardroomid", wardRoomId);
    QString result;
    if(query.exec()&&query.next())
    {
        result = query.value(0).toString();
    }
    else
    {
        qDebug()<<query.lastError().text();
    }

    return result;
}

QStringList InPatientDb::getSectionRoomBedType(const QString &sectionRoom)
{
    QSqlDatabase db = DatabaseManage::instance()->database();
    QSqlQuery query;
    query.prepare("SELECT ward_type FROM ward_info WHERE ward_section_room = :sectionRoom;");
    query.bindValue(":sectionRoom", sectionRoom);
    QStringList typeList;
    if(query.exec())
    {
        while(query.next())
        {
            typeList.append(query.value(0).toString());
        }
    }
    else
    {
        qDebug()<<query.lastError().text();
    }
    return typeList;
}

QStandardItemModel *InPatientDb::loadAllInfo()
{
    QSqlDatabase db = DatabaseManage::instance()->database();
    QStandardItemModel* model = new QStandardItemModel;
    QStringList tableName;
    tableName<<"病人姓名"<<"医疗卡卡号"<<"就诊科室"<<"病房号"<<"病床号"
              <<"病房类型"<<"就诊医生"<<"性别"<<"年龄"<<"联系电话";
    model->setHorizontalHeaderLabels(tableName);
    QSqlQuery query;
    query.prepare("select i.`Name`,b.patient_cardid,r.SectionRoom,b.room_number,b.bed_number,b.bed_type,r.Doctor,i.Sex,i.Age,i.Phone "
                  "from "
                  "ward_beds b inner join register r "
                  "on b.patient_cardid = r.IdCard "
                  "inner JOIN idcard i "
                  "on b.patient_cardid = i.Card;");
    if(query.exec())
    {

        int count = query.record().count();
        int row = 0;
        model->setColumnCount(count);
        QStandardItem *item;
        while(query.next())
        {
            for(int i = 0;i < count;i++)
            {
                item = new QStandardItem(query.value(i).toString());
                model->setItem(row,i,item);
            }
            row++;
        }
    }
    return model;
}

bool InPatientDb::isWardInfo(const QString &id)
{
    QSqlDatabase db = DatabaseManage::instance()->database();
    QSqlQuery query;
    query.prepare("SELECT ward_id FROM ward_info WHERE ward_number = :id;");
    query.bindValue(":id", id);

    if (query.exec()) {

        if (query.first()) {

            return true;
        }
    } else {

        qDebug() << query.lastError().text();
        return false;
    }


}

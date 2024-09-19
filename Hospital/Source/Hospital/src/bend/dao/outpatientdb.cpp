#include "outpatientdb.h"

OutPatientDb::OutPatientDb() {

}

QStringList OutPatientDb::selectSectionName()
{
    QSqlDatabase db = DatabaseManage::instance()->database();
    QStringList results;
    QSqlQuery query;
    query.prepare("select Sname from sectionroom;");
    if(query.exec())
    {
        while(query.next())
        {
            results.append(query.value(0).toString());
        }
    }
    else
    {
        qDebug()<<query.lastError().text();
    }

    return results;
}

QStringList OutPatientDb::selectDoctor(const QString &name)
{
    QSqlDatabase db = DatabaseManage::instance()->database();
    QStringList results;
    QSqlQuery query;
    query.prepare("select name from users where SectionRoom = :name;");
    query.bindValue(":name",name);
    if(query.exec())
    {
        while(query.next())
        {
            results.append(query.value(0).toString());
        }
    }
    else
    {
        qDebug()<<query.lastError().text();
    }
    return results;
}

QString OutPatientDb::selectMoney(const QString &name)
{
    QSqlDatabase db = DatabaseManage::instance()->database();
    QString results;
    QSqlQuery query;
    query.prepare("select Sprice from sectionroom where Sname = :name;");
    query.bindValue(":name",name);
    if(query.exec() && query.next())
    {
        results = query.value(0).toString();
    }
    else
    {
        qDebug()<<query.lastError().text();
    }
    return results;
}

int OutPatientDb::getdataCount()
{
    QSqlDatabase db = DatabaseManage::instance()->database();
    int number;
    QSqlQuery query;
    query.prepare("select count(*) from idcard;");
    if(query.exec() && query.next())
    {
        number = query.value(0).toInt();
    }
    else
    {
        qDebug()<<query.lastError().text();
    }
    return number;
}

int OutPatientDb::getRegisterTableCount()
{
    QSqlDatabase db = DatabaseManage::instance()->database();
    QSqlQuery query;
    query.prepare("select count(*) from register;");
    int count = 0;
    if(query.exec() && query.next())
    {
        count = query.value(0).toInt();
    }
    else
    {
        qDebug()<<query.lastError().text();
    }
    return count;
}

bool OutPatientDb::commitData(QHash<QString, QString> userInfo)
{
    QSqlDatabase db = DatabaseManage::instance()->database();
    QSqlQuery query;
    query.prepare("INSERT INTO idcard(Card, Name, Sex, Age, Birthday, Address, Phone, Nation, Cultrue, Marriage, Work, Postcode, IdcardNo) "
                  "VALUES(:card, :name, :sex, :age, :birthday, :address, :phone, :nation, :culture, :marriage, :work, :postcode, :idcardno)");

    // 设置参数值
    query.bindValue(":card", userInfo.value("Card"));
    query.bindValue(":name", userInfo.value("Name"));
    query.bindValue(":sex", userInfo.value("Sex"));
    query.bindValue(":age", userInfo.value("Age"));
    query.bindValue(":birthday", userInfo.value("Birthday"));
    query.bindValue(":address", userInfo.value("Address"));
    query.bindValue(":phone", userInfo.value("Phone"));
    query.bindValue(":nation", userInfo.value("Nation"));
    query.bindValue(":culture", userInfo.value("Cultrue"));
    query.bindValue(":marriage", userInfo.value("Marriage"));
    query.bindValue(":work", userInfo.value("Work"));
    query.bindValue(":postcode", userInfo.value("Postcode"));
    query.bindValue(":idcardno", userInfo.value("IdcardNo"));
    if (query.exec()) {
        // 插入成功
        return true;
    } else {
        // 插入失败
        qDebug() << "Error:" << query.lastError().text();
        return false;
    }
}

bool OutPatientDb::commitRegisteredData(QHash<QString, QString> userInfo)
{
    QSqlDatabase db = DatabaseManage::instance()->database();
    QSqlQuery query;
    query.prepare("insert into register(KId,IdCard,IdType,GuaDanFei,OtherFei,SectionRoom,Doctor,ReristerTime,SeeDoctorTime) "
                  "values(:KId,:IdCard,:IdType,:GuaDanFei,:OtherFei,:SectionRoom,:Doctor,:ReristerTime,:SeeDoctorTime);");
    query.bindValue(":KId",userInfo.value("KId"));
    query.bindValue(":IdCard",userInfo.value("IdCard"));
    query.bindValue(":IdType",userInfo.value("IdType"));
    query.bindValue(":GuaDanFei",userInfo.value("GuaDanFei"));
    query.bindValue(":OtherFei",userInfo.value("OtherFei"));
    query.bindValue(":SectionRoom",userInfo.value("SectionRoom"));
    query.bindValue(":Doctor",userInfo.value("Doctor"));
    query.bindValue(":ReristerTime",userInfo.value("ReristerTime"));
    query.bindValue(":SeeDoctorTime",userInfo.value("SeeDoctorTime"));
    if (query.exec()) {
        // 插入成功
        return true;
    } else {
        // 插入失败
        qDebug() << "Error:" << query.lastError().text();
        return false;
    }
}

bool OutPatientDb::updateData(QHash<QString, QString> userInfo,QString Card)
{
    QSqlDatabase db = DatabaseManage::instance()->database();
    QSqlQuery query;
    query.prepare("update idcard "
                    "set Card=:Card, Name=:Name, Sex=:Sex, Age=:Age, Birthday=:Birthday, Address=:Address, Phone=:Phone, Nation=:Nation, Cultrue=:Cultrue, Marriage=:Marriage, Work=:Work, Postcode=:Postcode, IdcardNo=:IdcardNo "
                    "where Card=:IdCard");
    query.bindValue(":Card", userInfo.value("Card"));
    query.bindValue(":Name", userInfo.value("Name"));
    query.bindValue(":Sex", userInfo.value("Sex"));
    query.bindValue(":Age", userInfo.value("Age"));
    query.bindValue(":Birthday", userInfo.value("Birthday"));
    query.bindValue(":Address", userInfo.value("Address"));
    query.bindValue(":Phone", userInfo.value("Phone"));
    query.bindValue(":Nation", userInfo.value("Nation"));
    query.bindValue(":Cultrue", userInfo.value("Cultrue"));
    query.bindValue(":Marriage", userInfo.value("Marriage"));
    query.bindValue(":Work", userInfo.value("Work"));
    query.bindValue(":Postcode", userInfo.value("Postcode"));
    query.bindValue(":IdcardNo", userInfo.value("IdcardNo"));
    query.bindValue(":IdCard",Card);

    if(!query.exec())
    {
        qDebug()<<query.lastError().text();
    }
    return query.exec();


}

bool OutPatientDb::updateRegisteredData(QHash<QString, QString> userInfo,QString Card)
{
    QSqlDatabase db = DatabaseManage::instance()->database();
    QSqlQuery query;
    query.prepare("update register "
                  "set KId=:KId,IdCard=:IdCard,IdType=:IdType,GuaDanFei=:GuaDanFei,OtherFei=:OtherFei,SectionRoom=:SectionRoom,Doctor=:Doctor,ReristerTime=:ReristerTime,SeeDoctorTime=:SeeDoctorTime "
                  "where IdCard = :Card;");
    query.bindValue(":KId",userInfo.value("KId"));
    query.bindValue(":IdCard",userInfo.value("IdCard"));
    query.bindValue(":IdType",userInfo.value("IdType"));
    query.bindValue(":GuaDanFei",userInfo.value("GuaDanFei"));
    query.bindValue(":OtherFei",userInfo.value("OtherFei"));
    query.bindValue(":SectionRoom",userInfo.value("SectionRoom"));
    query.bindValue(":Doctor",userInfo.value("Doctor"));
    query.bindValue(":ReristerTime",userInfo.value("ReristerTime"));
    query.bindValue(":SeeDoctorTime",userInfo.value("SeeDoctorTime"));
    query.bindValue(":Card",Card);
    if(!query.exec())
    {
        qDebug()<<query.lastError().text();
    }
    return query.exec();
}

QString OutPatientDb::IsSelectRegistered(const QString &id)
{
   QSqlDatabase db = DatabaseManage::instance()->database();
    QSqlQuery query;
    query.prepare("select Card from idcard where idcardNo = :id;");
    query.bindValue(":id",id);
    QString result;
    if(query.exec())
    {
        if(query.next())
        {
            result = query.value(0).toString();
        }
        else
        {
            result = "";
        }

    }
    else
    {
        qDebug()<<query.lastError().text();
    }
    return result;
}

QSqlDatabase OutPatientDb::database()
{
    return DatabaseManage::instance()->database();
}

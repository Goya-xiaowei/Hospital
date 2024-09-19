#include "doctordb.h"
#include <QSqlRecord>
DoctorDb::DoctorDb() {}

QStandardItemModel *DoctorDb::getRegisterInfoModel()
{
    QSqlDatabase db = DatabaseManage::instance()->database();
    QStandardItemModel *model = new QStandardItemModel();
    QSqlQuery query;
    query.prepare("select * from register where isVisitDoctor = '否';");
    QStringList list;
    list<<"挂号单"<<"医疗卡卡号"<<"挂号类型"<<"挂号费"
         <<"其他费用"<<"挂号科室"<<"医师"<<"是否就诊"<<"挂号时间"
         <<"就诊时间";
    model->setHorizontalHeaderLabels(list);


    if(query.exec())
    {
        QSqlRecord record = query.record(); // 获取查询结果的记录
        int columnCount = record.count(); // 获取列数
        model->setColumnCount(columnCount-1); // 设置模型的列数

        int rowIndex = 0; // 行索引
        while(query.next())
        {
            // 为每一行创建一个新的行索引
            for(int columnIndex = 1; columnIndex < columnCount; columnIndex++)
            {
                QStandardItem *item = new QStandardItem(query.value(columnIndex).toString());
                model->setItem(rowIndex, columnIndex-1, item); // 设置项的行和列
            }
            rowIndex++; // 更新行索引
        }
    }
    else
    {
        qDebug() << "Error executing query:" << query.lastError().text();
    }

    return model;
}
QStandardItemModel *DoctorDb::loadChineseDrug()
{
    QStandardItemModel* model = new QStandardItemModel;
    QSqlDatabase db = DatabaseManage::instance()->database();
    QSqlQuery query;
    query.prepare("select Dname,Dtype,Dshape,DsellPrice,Defficay "
                  "from drug_insert where Dtype = '中药'");
    if(query.exec())
    {
        int count = query.record().count();
        int row = 0;
        while(query.next())
        {
            QStandardItem *item;
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

QStandardItemModel *DoctorDb::loadWesternDrug()
{
    QStandardItemModel* model = new QStandardItemModel;
    QSqlDatabase db = DatabaseManage::instance()->database();
    QSqlQuery query;
    query.prepare("select Dname,Dtype,Dshape,DsellPrice,Defficay "
                  "from drug_insert where Dtype = '西药'");
    if(query.exec())
    {
        int count = query.record().count();
        int row = 0;
        while(query.next())
        {
            QStandardItem *item;
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

QStringList DoctorDb::getPatientInfo(const QString &card)
{
    QSqlDatabase db = DatabaseManage::instance()->database();
    QSqlQuery query;
    query.prepare("SELECT Name, Sex, Age, Address FROM `idcard` WHERE Card = :card");
    query.bindValue(":card", card);
    QStringList list;

    if (query.exec()) {
        if (query.next()) { // 确保至少有一行数据
            // 使用列名获取数据
            list << query.value("Name").toString();
            list << query.value("Sex").toString();
            list << query.value("Age").toString();
            list << query.value("Address").toString();
        }
    } else {
        qDebug() << query.lastError().text();
    }

    return list;
}

int DoctorDb::getSectionRoomId(const QString &CardId)
{
    QSqlDatabase db = DatabaseManage::instance()->database();

    QSqlQuery query;
    int result;
    query.prepare("SELECT sr.Sid "
                  "FROM sectionroom sr "
                  "INNER JOIN register r ON sr.Sname = r.SectionRoom "
                  "WHERE r.IdCard = :card");
    query.bindValue(":card",CardId);
    if(query.exec()&&query.next())
    {
        result = query.value(0).toInt();
    }
    else
    {
        qDebug()<<query.lastError().text();
    }

    return result;
}

int DoctorDb::getDrugCmedicineKaiyaoCount()
{
    QSqlDatabase db = DatabaseManage::instance()->database();
    QSqlQuery query;
    query.prepare("select count(*) from drug_cmedicine_kaiyao");
    int number;
    if(query.exec() && query.first())
    {
        number = query.value(0).toInt();
        return number;
    }
    else
    {
        qDebug()<<query.lastError().text();
        return -1;
    }

}


bool DoctorDb::addKaiYaoDan(const QHash<QString, QString> &info)
{
    QSqlDatabase db = DatabaseManage::instance()->database();
    QSqlQuery query;
    query.prepare("INSERT INTO "
                  "`drug_cmedicine_kaiyao`(`DpreId`, `Dcardid`, `Drugname`, `Drugnumber`, `Dstate`, `Diskaiyao`,`DJiuZhen`, `Dyizhu`, `DTime`) "
                  "VALUES (:DpreId,:Dcardid,:Drugname,:Drugnumber,:Dstate,:Diskaiyao,:DJiuZhen,:Dyizhu,:DTime)");
    query.bindValue(":DpreId",info["处方单"]);
    query.bindValue(":Dcardid",info["医疗卡卡号"]);
    query.bindValue(":Drugname",info["药品名"]);
    query.bindValue(":Drugnumber",info["药品数量"]);
    query.bindValue(":Dstate",info["处方状态"]);
    query.bindValue(":Diskaiyao",info["开药状态"]);
    query.bindValue(":DJiuZhen",info["初复诊"]);
    query.bindValue(":Dyizhu",info["医嘱"]);
    query.bindValue(":DTime",info["开药时间"]);
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

bool DoctorDb::updateIsVisitdoctor(const QString &card)
{
    QSqlDatabase db = DatabaseManage::instance()->database();
    QSqlQuery query;
    query.prepare("UPDATE register set isVisitDoctor = '是' WHERE IdCard = :card ");
    query.bindValue(":card",card);
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





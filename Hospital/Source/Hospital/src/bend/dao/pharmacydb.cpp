#include "pharmacydb.h"

PharmacyDb::PharmacyDb(QObject *parent)
    : QObject{parent}
{
    db = DatabaseManage::instance()->database();
}

QStandardItemModel *PharmacyDb::loadTreeViewLeft()
{
    QStandardItemModel *model = new QStandardItemModel;
    QStringList list;
    list<<"医疗卡"<<"病人姓名"<<"性别"<<"年龄"<<"就诊科室"<<"就诊医生";
    model->setHorizontalHeaderLabels(list);
    QSqlQuery query;
    query.prepare("SELECT i.Card,i.`Name`,i.Sex,i.Age, r.SectionRoom,r.Doctor "
                  "FROM "
                  "idcard i inner join register r "
                  "on i.Card = r.IdCard "
                  "WHERE "
                  "i.Card "
                  "in (SELECT DISTINCT(Dcardid) FROM `drug_cmedicine_kaiyao` WHERE Diskaiyao = '未开药' AND Dstate = '已支付')");
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
    else
    {
        qDebug()<<query.lastError().text();
    }
    return model;
}

QStandardItemModel *PharmacyDb::loadTreeViewRight(const QString &card)
{
    QStandardItemModel *model = new QStandardItemModel;
    QSqlQuery query;
    query.prepare("SELECT i.Drugname,i.Dstate,i.Diskaiyao,i.Drugnumber,d.Dshape,d.DsellPrice "
                  "FROM "
                  "(SELECT * FROM `drug_cmedicine_kaiyao` WHERE Dcardid = :card AND Dstate = '已支付') i "
                  "INNER JOIN "
                  "drug_insert d "
                  "ON i.Drugname = d.Dname");
    query.bindValue(":card",card);
    QStringList list;
    list<<"药品名"<<"支付状态"<<"是否开药"<<"开药数量"<<"药品剂型"<<"药品单价";
    model->setHorizontalHeaderLabels(list);
    query.bindValue(":card",card);
    if(query.exec())
    {
        int count = query.record().count();
        int row = 0;
        while(query.next())
        {
            QStandardItem *item;
            for(int i = 0 ;i < count;i++)
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

bool PharmacyDb::updateIsKaiyao(const QString &card)
{
    QSqlQuery query;
    query.prepare("UPDATE drug_cmedicine_kaiyao SET Diskaiyao = '已开药' WHERE Dcardid = :card");
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

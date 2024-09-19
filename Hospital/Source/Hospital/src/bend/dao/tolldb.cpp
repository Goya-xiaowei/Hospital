#include "tolldb.h"

TollDb::TollDb()
{
    db = DatabaseManage::instance()->database();
}


QStandardItemModel *TollDb::loadModelData(const int currentPage)
{

    QSqlQuery query;
    query.prepare("SELECT i.Card, i.Name, i.Sex,i.Age,i.IdcardNo,  r.SectionRoom, r.Doctor "
                  "FROM idcard i "
                  "INNER JOIN register r ON i.Card = r.IdCard "
                  "WHERE i.Card IN (SELECT DISTINCT Dcardid FROM `drug_cmedicine_kaiyao` WHERE Dstate = '未支付')"
                  "LIMIT :limit OFFSET :offset");
    int offset = pageSize*currentPage;
    query.bindValue(":limit",pageSize);
    query.bindValue(":offset",offset);
    QStandardItemModel *model = new QStandardItemModel;
    model->setColumnCount(7);


    if(query.exec())
    {
        model->clear();
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

QStandardItemModel *TollDb::loadModelRight(const QString &cardid)
{

    QSqlQuery query;
    query.prepare("select n.Drugname,n.Drugnumber,d.DsellPrice,d.Dshape,n.Dstate,d.Defficay "
                  "from "
                  "(SELECT Drugname,Drugnumber,Dstate FROM drug_cmedicine_kaiyao where Dcardid = :cardid AND Dstate = '未支付') n "
                  "inner join drug_insert d "
                  "on n.Drugname = d.Dname");
    query.bindValue(":cardid",cardid);
    QStandardItemModel *model = new QStandardItemModel;
    if(query.exec())
    {
        int row = 0;
        int count = query.record().count();
        while(query.next())
        {
            QStandardItem *item;
            for(int i = 0;i < count ;i++)
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

QString TollDb::giveAllDrugPrice(const QString &cardid)
{

    QString result;
    QSqlQuery query;
    query.prepare("select sum(n.Drugnumber*d.DsellPrice) "
                  "from (SELECT Drugname,Drugnumber,Dstate FROM drug_cmedicine_kaiyao where Dcardid = :cardid and Dstate = '未支付') n "
                  "inner join drug_insert d "
                  "on n.Drugname = d.Dname");
    query.bindValue(":cardid",cardid);
    if(query.exec() && query.next())
    {
        result = query.value(0).toString();
    }
    else
    {
        qDebug()<<query.lastError().text();
    }
    return result;
}

QStringList TollDb::loadSectionRoon()
{

    QStringList result;

    QSqlQuery query;
    query.prepare("SELECT Sname FROM `sectionroom`");
    if(query.exec())
    {
        while(query.next())
        {
            result<<query.value(0).toString();
        }
    }
    else
    {
        qDebug()<<query.lastError().text();
    }
    return result;
}

int TollDb::loadAllPages()
{

    QSqlQuery  query;
    query.prepare("SELECT count(*)"
                  "FROM idcard i "
                  "INNER JOIN register r ON i.Card = r.IdCard "
                  "WHERE i.Card IN (SELECT DISTINCT Dcardid FROM `drug_cmedicine_kaiyao`)"
                  "LIMIT :limit OFFSET :offset;");
    int countData;
    if(query.exec()&&query.next())
    {
        int count = query.value(0).toInt();
        countData = qCeil(count/10);
        qDebug()<<"count:"<<count;
        qDebug()<<"countData:"<<countData;
        return countData;

    }
    else
    {
        qDebug()<<query.lastError().text();
        return 0;
    }
}

bool TollDb::updateKaiyaoInfo(const QString &card)
{
    QSqlQuery query;
    query.prepare("UPDATE drug_cmedicine_kaiyao set Dstate = '已支付' WHERE Dcardid = :card");
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

void TollDb::deleteRegister(const QString &card)
{
    QSqlQuery query;
    // query.prepare("")
}

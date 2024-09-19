#include "drugwarehousingdb.h"

DrugWarehousingDb::DrugWarehousingDb(QObject *parent)
    : QObject{parent}
{}

bool DrugWarehousingDb::addDrugInfo(QHash<QString, QString> info)
{
    QSqlDatabase db = DatabaseManage::instance()->database();
    QSqlQuery query;
    query.prepare("insert into "
                  "drug_insert(Dname,Dtype,DcostName,Dshape,Dspecs,DinsertPrice,DsellPrice,Dstock,DstockMax,DstockMin,DproductTime,DeffectTime,Defficay) "
                  "values(:Dname,:Dtype,:DcostName,:Dshape,:Dspecs,:DinsertPrice,:DsellPrice,:Dstock,:DstockMax,:DstockMin,:DproductTime,:DeffectTime,:Defficay);");
    query.bindValue(":Dname",info.value("Dname"));
    query.bindValue(":Dtype",info.value("Dtype"));
    query.bindValue(":DcostName",info.value("DcostName"));
    query.bindValue(":Dshape",info.value("Dshape"));
    query.bindValue(":Dspecs",info.value("Dspecs"));
    query.bindValue(":DinsertPrice",info.value("DinsertPrice"));
    query.bindValue(":DsellPrice",info.value("DsellPrice"));
    query.bindValue(":Dstock",info.value("Dstock"));
    query.bindValue(":DstockMax",info.value("DstockMax"));
    query.bindValue(":DstockMin",info.value("DstockMin"));
    query.bindValue(":DproductTime",info.value("DproductTime"));
    query.bindValue(":DeffectTime",info.value("DeffectTime"));
    query.bindValue(":Defficay",info.value("Defficay"));
    return query.exec();

}
bool DrugWarehousingDb::drugUpdateInfo(const QString &drugName,QHash<QString,QString> info)
{
    QSqlDatabase db = DatabaseManage::instance()->database();
    QSqlQuery querySelect;
    querySelect.prepare("select * from drug_insert where Dname = :name");
    querySelect.bindValue(":name",drugName);
    if(querySelect.exec() && querySelect.next())
    {
        QSqlQuery queryUpdate;
        queryUpdate.prepare("update drug_insert "
                            "set Dname=:Dname,Dtype=:Dtype,DcostName=:DcostName,Dshape=:Dshape,Dspecs=:Dspecs,DinsertPrice=:DinsertPrice,DsellPrice=:DsellPrice,Dstock=:Dstock,DstockMax=:DstockMax,DstockMin=:DstockMin,DproductTime=:DproductTime,DeffectTime=:DeffectTime,Defficay=:Defficay "
                            "where Dname=:name;");
        queryUpdate.bindValue(":Dname",info.value("Dname"));
        queryUpdate.bindValue(":Dtype",info.value("Dtype"));
        queryUpdate.bindValue(":DcostName",info.value("DcostName"));
        queryUpdate.bindValue(":Dshape",info.value("Dshape"));
        queryUpdate.bindValue(":Dspecs",info.value("Dspecs"));
        queryUpdate.bindValue(":DinsertPrice",info.value("DinsertPrice"));
        queryUpdate.bindValue(":DsellPrice",info.value("DsellPrice"));
        queryUpdate.bindValue(":Dstock",info.value("Dstock"));
        queryUpdate.bindValue(":DstockMax",info.value("DstockMax"));
        queryUpdate.bindValue(":DstockMin",info.value("DstockMin"));
        queryUpdate.bindValue(":DproductTime",info.value("DproductTime"));
        queryUpdate.bindValue(":DeffectTime",info.value("DeffectTime"));
        queryUpdate.bindValue(":Defficay",info.value("Defficay"));
        queryUpdate.bindValue(":name",drugName);
        if(!queryUpdate.exec())
        {
            qDebug()<<queryUpdate.lastError().text();
            return false;
        }
        return true;

    }
    else
    {
        return addDrugInfo(info);
    }
    // return query.exec();

}

QStandardItemModel *DrugWarehousingDb::selectDrugShapeInfo(const QString &name)
{
    QStandardItemModel *itemModel = nullptr;
    QSqlDatabase db = DatabaseManage::instance()->database();
    QSqlQuery query;
    query.prepare("select * from drug_insert where Dshape like :Dname;");
    query.bindValue(":Dname","%" + name + "%");
    if(query.exec())
    {
        QStandardItem *item;

        int count = query.record().count();
        itemModel = new QStandardItemModel(count-1,0);
        QStringList listName;
        listName<<"药品名称"<<"药品类型"<<"费用名称"<<"剂型"<<"规格"<<"进价"
                 <<"售价"<<"库存"<<"库存上限"<<"库存下限"<<"生产日期"<<"有效日期"<<"药功效";
        itemModel->setHorizontalHeaderLabels(listName);
        int row = 0;
        while(query.next())
        {
            for(int i = 1;i < count;i++)
            {
                item = new QStandardItem(query.value(i).toString());
                itemModel->setItem(row,i - 1,item);
            }
            row++;

        }
    }
    return itemModel;
}

QStandardItemModel* DrugWarehousingDb::selectNameDrugInfo(const QString &name)
{
    QStandardItemModel *nameItemModel = nullptr;
    QSqlDatabase db = DatabaseManage::instance()->database();
    QSqlQuery query;
    query.prepare("SELECT * FROM drug_insert WHERE Dname LIKE :namePattern;");
    query.bindValue(":namePattern", "%" + name + "%"); // 找到包含 name 的所有记录

    if(query.exec())
    {
        int count = query.record().count();
        nameItemModel = new QStandardItemModel(count-1,0);
        QStringList listName;
        listName<<"药品名称"<<"药品类型"<<"费用名称"<<"剂型"<<"规格"<<"进价"
                 <<"售价"<<"库存"<<"库存上限"<<"库存下限"<<"生产日期"<<"有效日期"<<"药功效";
        nameItemModel->setHorizontalHeaderLabels(listName);
        // nameItemModel->setColumnCount(count);
        QStandardItem *item = nullptr;
        int row = 0;
        while(query.next())
        {
            for(int i = 1; i < count;i++)
            {
                item = new QStandardItem(query.value(i).toString());
                nameItemModel->setItem(row,i - 1,item);
            }
            row++;
        }


    }
    return nameItemModel;

}

QStandardItemModel *DrugWarehousingDb::selectDrugPriceInfo(const QString &price)
{
    QStandardItemModel *itemModel;
    QSqlDatabase db = DatabaseManage::instance()->database();
    int priceInt = price.toInt();
    QSqlQuery query;
    query.prepare("SELECT * FROM drug_insert WHERE DinsertPrice = :priceInt OR DsellPrice = :priceInt;");
    query.bindValue(":priceInt", priceInt);
    if(query.exec())
    {
        int count = query.record().count();
        itemModel = new QStandardItemModel(count-1,0);
        QStringList listName;
        listName<<"药品名称"<<"药品类型"<<"费用名称"<<"剂型"<<"规格"<<"进价"
                 <<"售价"<<"库存"<<"库存上限"<<"库存下限"<<"生产日期"<<"有效日期"<<"药功效";
        itemModel->setHorizontalHeaderLabels(listName);
        // nameItemModel->setColumnCount(count);
        QStandardItem *item = nullptr;
        int row = 0;
        while(query.next())
        {
            for(int i = 1; i < count;i++)
            {
                item = new QStandardItem(query.value(i).toString());
                itemModel->setItem(row,i - 1,item);
            }
            row++;
        }


    }
    return itemModel;
}

bool DrugWarehousingDb::deleteNameDrugInfo(const QString &name)
{
    QSqlDatabase db = DatabaseManage::instance()->database();
    QSqlQuery query;
    query.prepare("DELETE FROM drug_insert WHERE Dname = :name;");
    query.bindValue(":name",name);
    if(query.exec())
    {
        return true;
    }
    else
    {
        qDebug()<<query.lastError().text();
        return false;
    }
    // return query.exec();
}

QStandardItemModel* DrugWarehousingDb::selectAllDrugInfo()
{
    QStandardItemModel *drugAllInfoModel = new QStandardItemModel();;
    QSqlDatabase db = DatabaseManage::instance()->database();
    QSqlQuery query;
    query.prepare("select * from drug_insert;");
    QStringList listName;
    listName<<"药品名称"<<"药品类型"<<"费用名称"<<"剂型"<<"规格"<<"进价"
             <<"售价"<<"库存"<<"库存上限"<<"库存下限"<<"生产日期"<<"有效日期"<<"药功效";
    drugAllInfoModel->setHorizontalHeaderLabels(listName);
    if(query.exec())
    {
        int count = query.record().count();
        drugAllInfoModel->setColumnCount(count - 1);
        int row = 0;
        while(query.next())
        {
            QStandardItem *drugInfoItem = nullptr;
            for(int i = 1;i < count;i++)
            {
                drugInfoItem = new QStandardItem(query.value(i).toString());
                drugAllInfoModel->setItem(row,i - 1,drugInfoItem);
            }
            row++;
        }
    }
    else
    {
        qDebug()<<query.lastError().text();
    }
    return drugAllInfoModel;
}

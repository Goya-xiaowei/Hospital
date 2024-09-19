#include "employdb.h"

EmployDb::EmployDb()
{

}

QStandardItemModel *EmployDb::getEmployInfo()
{
    QStandardItemModel  *itemModel;
    QSqlDatabase db = DatabaseManage::instance()->database();
    QSqlQuery query;
    query.prepare("select * from users;");
    if(query.exec())
    {
        // 获取查询结果的列数
        int count = query.record().count();
        // 创建模型，列数比查询结果少2（因为不包括第3列和最后一列）
        itemModel = new QStandardItemModel(0, count - 2);

        // 设置表头标签，这里我们不包括第3列和最后一列的标题
        QStringList list;
        list << "用户名" << "员工姓名" <<"密码" <<"性别" << "地址" << "联系电话"
             << "类型" << "科室" << "挂号费";
        itemModel->setHorizontalHeaderLabels(list);

        QStandardItem *item;
        int row = 0;
        while(query.next())
        {

            for(int i = 1; i < count-1; i++)
            {
                item = new QStandardItem(query.value(i).toString());

                itemModel->setItem(row, i - 1, item);
            }
            row++;
        }
    }
    else
    {
        qDebug() << query.lastError().text();
    }
    return itemModel;
}

QStringList EmployDb::getUserType()
{
    QSqlDatabase db = DatabaseManage::instance()->database();
    QSqlQuery query;
    query.prepare("select Type from userstype;");
    if(query.exec())
    {
        QStringList list;
        while(query.next())
        {
            QString type = query.value(0).toString();
            list.append(type);
        }
        return list;
    }
    else
    {
        qDebug()<<query.lastError().text();
        return QStringList();
    }

}

QStringList EmployDb::getSectionRoom()
{
    QSqlDatabase db = DatabaseManage::instance()->database();
    QSqlQuery query;
    query.prepare("select Sname from sectionroom;");
    if(query.exec())
    {
        QStringList list;
        while(query.next())
        {
            QString type = query.value(0).toString();
            list.append(type);
        }
        return list;
    }
    else
    {
        qDebug()<<query.lastError().text();
        return QStringList();
    }
}

bool EmployDb::deleteEmploy(const QString &username)
{
    QSqlDatabase db = DatabaseManage::instance()->database();
    QSqlQuery query;
    query.prepare("DELETE FROM users WHERE Uname = :username");
    query.bindValue(":username",username);

    if(query.exec())
    {
        return true;
    }
    else
    {
        return false;
    }
}

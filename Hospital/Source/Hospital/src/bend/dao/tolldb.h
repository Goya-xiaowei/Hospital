#ifndef TOLLDB_H
#define TOLLDB_H

#include <QObject>
#include <QStandardItemModel>
#include "src/bend/db/databasemanage.h"
#include <QSqlRecord>
#include <QtMath>
class TollDb
{
public:
    TollDb();
    const int pageSize = 10;//每页显示的行数
    QStandardItemModel* loadModelData(const int currentPage);
    QStandardItemModel *loadModelRight(const QString &cardid);
    QString giveAllDrugPrice(const QString &cardid);
    QStringList loadSectionRoon();

    int loadAllPages();//获取数据库中数据有多少页
    bool updateKaiyaoInfo(const QString &card);
    void deleteRegister(const QString &card);
private:
    QSqlDatabase db;
};

#endif // TOLLDB_H

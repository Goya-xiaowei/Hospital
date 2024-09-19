#ifndef DRUGWAREHOUSINGDB_H
#define DRUGWAREHOUSINGDB_H

#include <QObject>
#include <QStandardItemModel>
#include <QSqlRecord>
#include "src/bend/db/databasemanage.h"
class DrugWarehousingDb : public QObject
{
    Q_OBJECT
public:
    explicit DrugWarehousingDb(QObject *parent = nullptr);
    bool addDrugInfo(QHash<QString,QString> info);
    QStandardItemModel* selectAllDrugInfo();
    bool drugUpdateInfo(const QString &drugName,QHash<QString,QString> info);
    QStandardItemModel* selectDrugShapeInfo(const QString &name);
    QStandardItemModel* selectNameDrugInfo(const QString &name);
    QStandardItemModel* selectDrugPriceInfo(const QString &price);
    bool deleteNameDrugInfo(const QString &name);

signals:
};

#endif // DRUGWAREHOUSINGDB_H

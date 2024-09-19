#ifndef PHARMACYDB_H
#define PHARMACYDB_H

#include <QObject>
#include "src/bend/db/databasemanage.h"
#include <QStandardItemModel>
#include <QSqlRecord>
class PharmacyDb : public QObject
{
    Q_OBJECT
public:
    explicit PharmacyDb(QObject *parent = nullptr);
    QStandardItemModel* loadTreeViewLeft();
    QStandardItemModel* loadTreeViewRight(const QString &card);
    bool updateIsKaiyao(const QString &card);
private:
    QSqlDatabase db;


signals:
};

#endif // PHARMACYDB_H

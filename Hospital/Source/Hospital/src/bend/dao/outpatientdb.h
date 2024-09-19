#ifndef OUTPATIENTDB_H
#define OUTPATIENTDB_H
#include "src/bend/db/databasemanage.h"
class OutPatientDb
{
public:
    OutPatientDb();


    QStringList selectSectionName();
    QStringList selectDoctor(const QString& name);
    QString selectMoney(const QString& name);
    int getdataCount();
    int getRegisterTableCount();
    bool commitData(QHash<QString,QString> userInfo);
    bool commitRegisteredData(QHash<QString,QString> userInfo);

    bool updateData(QHash<QString,QString> userInfo,QString Card);
    bool updateRegisteredData(QHash<QString,QString> userInfo,QString Card);
    QString IsSelectRegistered(const QString& id);
    QSqlDatabase database();
private:



};

#endif // OUTPATIENTDB_H

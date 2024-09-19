#ifndef DOCTORDB_H
#define DOCTORDB_H

#include <QObject>
#include <QStandardItemModel>
#include "src/bend/db/databasemanage.h"
class DoctorDb
{
public:
    DoctorDb();

    QStandardItemModel* getRegisterInfoModel();
    QStandardItemModel* loadChineseDrug();
    QStandardItemModel* loadWesternDrug();
    QStringList getPatientInfo(const QString &card);
    int getSectionRoomId(const QString &CardId);
    int getDrugCmedicineKaiyaoCount();
    bool addKaiYaoDan(const QHash<QString,QString> &info);
    bool updateIsVisitdoctor(const QString &card);
};

#endif // DOCTORDB_H

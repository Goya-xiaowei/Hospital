#ifndef INPATIENTDB_H
#define INPATIENTDB_H
#include "src/bend/db/databasemanage.h"
#include <QObject>
#include <QStandardItemModel>
#include <QSqlRecord>
class InPatientDb : public QObject
{
    Q_OBJECT
public:
    explicit InPatientDb(QObject *parent = nullptr);
    QStringList loadSectionType();
    QString returnSectionAddress(const QString &sectionName);
    int getSectionRoomId(const QString &name);
    int getWardInfoCount();
    bool addWardInfo(QHash<QString,QString> wardInfo);
    QStandardItemModel *loadWardInfoView(const QString &sectionName = QString());
    QStandardItemModel *loadWardBedsView(const QString &roomId);
    QStandardItemModel *loadNotNUllWardBeds();
    QStandardItemModel *loadRegisterInfo();
    QStandardItemModel *loadRegisteredUserInfo();
    bool addWardBedInfo(const QString &wardId,const int &benNumber);
    QSqlDatabase database();
    QStringList getWardRoomIdList(const QString &sectionRoom);
    QString getWardRoomType(const QString &wardRoomid);
    QStringList getWardRoomBeds(const QString &wardRoomid);
    bool updateBedInfo(const QString &bedid,const QString &card,const QString &bedType);
    QString getWardRoomPrice(const QString &wardRoomId);
    QStringList getSectionRoomBedType(const QString &sectionRoom);
    QStandardItemModel* loadAllInfo();

private:
    bool isWardInfo(const QString &id);
signals:
};

#endif // INPATIENTDB_H

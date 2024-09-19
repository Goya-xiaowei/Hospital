#ifndef INPATIENTCONTROLLER_H
#define INPATIENTCONTROLLER_H

#include <QObject>
#include "src/fend/uiinpatientmanage/wardaddbtn.h"
#include "src/bend/dao/inpatientdb.h"
class InPatientController : public QObject
{
    Q_OBJECT
public:
    InPatientController(WardAddBtn*view,InPatientDb *model);
    QString sectionRoomAddre(const QString &name);
    void addWardInfo();
    // void addWardBeds(const QString &roomNumber,const int &bedsNumber);

private:
    WardAddBtn *view;
    InPatientDb *model;

private:


signals:
};

#endif // INPATIENTCONTROLLER_H

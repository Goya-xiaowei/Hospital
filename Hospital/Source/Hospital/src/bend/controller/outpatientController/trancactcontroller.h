#ifndef TRANCACTCONTROLLER_H
#define TRANCACTCONTROLLER_H

#include <QObject>
#include "src/bend/dao/outpatientdb.h"
#include "src/fend/uioutpatientmanage/trancactbtn.h"

class TrancactController:public QObject
{
    Q_OBJECT
public:
    TrancactController(TrancactBtn *view,OutPatientDb *dbModel);
    void onCommitData();
private:
    TrancactBtn *view;
    OutPatientDb *dbModel;
signals:
    void commitSucceccSignal();


};

#endif // TRANCACTCONTROLLER_H

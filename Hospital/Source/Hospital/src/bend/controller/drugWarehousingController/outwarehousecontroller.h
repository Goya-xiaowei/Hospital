#ifndef OUTWAREHOUSECONTROLLER_H
#define OUTWAREHOUSECONTROLLER_H

#include <QObject>
#include "src/fend/uidrugmanage/drugoutwarehousebtn.h"
#include "src/bend/dao/drugwarehousingdb.h"
class OutWarehouseController:public QObject
{
    Q_OBJECT
public:
    OutWarehouseController(DrugOutWarehouseBtn *view,DrugWarehousingDb* model);
    void deleteNameDrugInfo();
private:
    DrugOutWarehouseBtn *view;
    DrugWarehousingDb* model;
signals:
    void deleteFinish();
};

#endif // OUTWAREHOUSECONTROLLER_H

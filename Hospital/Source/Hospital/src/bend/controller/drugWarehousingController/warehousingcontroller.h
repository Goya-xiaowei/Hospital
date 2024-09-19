#ifndef WAREHOUSINGCONTROLLER_H
#define WAREHOUSINGCONTROLLER_H

#include <QObject>
#include "src/bend/dao/drugwarehousingdb.h"
#include "src/fend/uidrugmanage/drugwarehousebtn.h"

class WareHousingController:public QObject
{
    Q_OBJECT
public:
    WareHousingController(DrugWarehouseBtn* view,DrugWarehousingDb*model);
    void addDrugInfo();
    void updateDrugInfo();

signals:
    void saveFinish();
private:
    DrugWarehouseBtn *view;
    DrugWarehousingDb *model;
};

#endif // WAREHOUSINGCONTROLLER_H

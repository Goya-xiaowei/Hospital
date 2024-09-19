#ifndef DRUGWAREHOUSINGCONTROLLER_H
#define DRUGWAREHOUSINGCONTROLLER_H

#include <QObject>

#include "src/fend/uidrugmanage/drugwarehousebtn.h"
#include "src/bend/dao/drugwarehousingdb.h"
class DrugWarehousingController : public QObject
{
    Q_OBJECT
public:

    // DrugWarehousingController(DrugWarehouseBtn* view,DrugWarehousingDb* model);

    // void addDrugInfo();

private:
    // DrugWarehouseBtn *view;
    // DrugWarehousingDb *model;
};

#endif // DRUGWAREHOUSINGCONTROLLER_H

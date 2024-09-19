#include "outwarehousecontroller.h"



OutWarehouseController::OutWarehouseController(DrugOutWarehouseBtn *view, DrugWarehousingDb *model)
    :view(view),model(model)
{

}

void OutWarehouseController::deleteNameDrugInfo()
{
    QString name = view->getLineEditName();
    qDebug()<<name;
    bool success = model->deleteNameDrugInfo(name);
    if(success)
    {
        view->delectDrugInfoSuccess();
        emit deleteFinish();
    }
    else
    {
        view->delectDrugInfoSuccess();
    }
}

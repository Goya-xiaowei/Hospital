#include "warehousingcontroller.h"

WareHousingController::WareHousingController(DrugWarehouseBtn *view, DrugWarehousingDb *model)
    :view(view),model(model)
{

}

void WareHousingController::addDrugInfo()
{
    QHash<QString, QString> drugInfo = view->getDrugInfo();
    bool success = model->addDrugInfo(drugInfo);
    if(success)
    {
        view->addDataSuccess();
        emit saveFinish();
    }
    else
    {
        view->addDateError();
    }
}

void WareHousingController::updateDrugInfo()
{
    QHash<QString,QString> druginfo = view->getDrugInfo();
    QString name = view->getDrugName();
    bool success = model->drugUpdateInfo(name,druginfo);
    if(success)
    {
        view->addDataSuccess();
        emit saveFinish();
    }
    else
    {
        view->addDateError();
    }
}





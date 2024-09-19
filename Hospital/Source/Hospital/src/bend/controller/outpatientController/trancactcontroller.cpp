#include "trancactcontroller.h"



TrancactController::TrancactController(TrancactBtn *view, OutPatientDb *dbModel)
    :view(view),dbModel(dbModel)
{

}

void TrancactController::onCommitData()
{
    QHash<QString,QString> useInfo = view->getInfo();
    bool success = dbModel->commitData(useInfo);
    if(success)
    {
        qDebug()<<"成功";
        emit commitSucceccSignal();
    }
    else
    {
        qDebug()<<"失败";
    }
}

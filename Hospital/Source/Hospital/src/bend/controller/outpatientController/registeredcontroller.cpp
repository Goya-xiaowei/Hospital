#include "registeredcontroller.h"


RegisteredController::RegisteredController(PatientRegistrationBtn *view, OutPatientDb *dbModel)
    :view(view),dbModel(dbModel)
{

}

void RegisteredController::addRegisteredInfo()
{

}

void RegisteredController::updateInfo()
{
    QString idCard = view->getIdCard();
    // QString card = view->getLineEditCard();
    QHash<QString,QString> userinfo = view->getUserInfo();
    QHash<QString,QString> registeredInfo = view->getRegisteredInfo();
    QString card = dbModel->IsSelectRegistered(idCard);
    bool success = true;
    dbModel->database().transaction();
    if(card.isEmpty())
    {
        success &= dbModel->commitRegisteredData(registeredInfo);
        success &= dbModel->commitData(userinfo);

    }
    else
    {
        success &= dbModel->commitRegisteredData(registeredInfo);
        success &= dbModel->updateData(userinfo,card);
    }
    if (success)
    {
        dbModel->database().commit(); // 提交事务

        view->commitSuccess();
        emit commitFinish();
    }
    else
    {
        dbModel->database().rollback(); // 回滚事务
        view->commitError();
    }
}




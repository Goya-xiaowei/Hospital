#include "userinfocontroller.h"



UserInfoController::UserInfoController(EmployeeBtn *view, UserModel *model)
    : view(view), model(model)
{

}

void UserInfoController::onCommitClick()
{
    User user = view->getUserInfo();

    QStringList peodomList = model->getPeoDomFunc(user.type);
    QString peodom;
    for(int i = 0;i < peodomList.count();i++)
    {
        peodom = peodom + peodomList[i] + ";";
    }
    if (peodom.endsWith(";")) {
        peodom.chop(2);
    }
    bool success = model->saveUser(user,peodom);

    if(success)
    {
        view->showSaveSuccessMessage();
    }
    else
    {
        QString name = model->selectUser("users",user.name);
        if(!name.isEmpty())
        {
            view->showUserExist();
            return;
        }
        view->showSaveErrorMessage();
    }

}

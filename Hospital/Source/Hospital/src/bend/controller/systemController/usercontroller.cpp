#include "usercontroller.h"

UserController::UserController(SystemBtn *view, UserModel *model)
    : view(view), model(model) {
    // 构造函数实现
}

void UserController::onSaveUserTypeClick() {

    QString userTypeText = view->getLineEditNameText();
    QString AllText = view->getCheckedPermissionsText();
    bool success = model->saveUserType(userTypeText, AllText);

    if (success) {
        view->showSaveSuccessMessage();
        emit onSaveClickSiganl(); // 如果保存成功，发射信号
    } else {
        view->showSaveErrorMessage();
        // 处理保存失败的情况
    }
}

void UserController::onSaveUserClick()
{
    QString listInfo = view->getLineEditUserName();
    QString peodom = view->getCheckedPermissionsText();
    qDebug()<<peodom;
    bool success = model->updateUserPeodom(listInfo,peodom);
    if (success) {
        view->showSaveSuccessMessage();
        emit onSaveClickSiganl(); // 如果保存成功，发射信号
    } else {
        view->showSaveErrorMessage();
        // 处理保存失败的情况
    }

}




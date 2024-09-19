#include "inpatientcontroller.h"

InPatientController::InPatientController(WardAddBtn *view, InPatientDb *model)
    :view(view),model(model)
{

}

QString InPatientController::sectionRoomAddre(const QString &name)
{
    QString add = model->returnSectionAddress(name);
    return add;
}

void InPatientController::addWardInfo()
{
    QHash<QString, QString> wardInfo = view->getInfo();
    QString roomNumber = view->getWardRoomNumber();
    int bedsNumber = view->getBedsNUmber();

    // 假设 model->database() 返回有效的数据库连接
    QSqlDatabase db = model->database();

    // 开启事务
    if (!db.transaction()) {
        qDebug() << "不能执行事务";
        view->showAddError();
        return;
    }

    // 添加病房信息
    bool successWardInfo = model->addWardInfo(wardInfo);
    if (!successWardInfo) {

        db.rollback(); // 回滚事务
        view->showAddError();
        return;
    }

    // 尝试添加床位信息
    bool success = model->addWardBedInfo(roomNumber, bedsNumber);
    if (!success) {

        db.rollback(); // 回滚事务
        view->showAddError();
        return;
    }
    // 如果所有操作都成功，提交事务
    if (!db.commit()) {
        // qDebug() << "事务提交失败";
        view->showAddError();
    } else {
        // qDebug() << "事务提交成功";
        view->showAddSuccess();
    }
}



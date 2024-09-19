#include "sectionroomcontroller.h"


SectionRoomController::SectionRoomController(DepartmentBtn *view, UserModel *model)
    :view(view),model(model)
{

}

void SectionRoomController::onCreateClick()
{

    QHash<QString, QString> info = view->getTextInfo();
    bool success = model->addSectionRoom(info);
    if(success)
    {
        qDebug()<<"添加成功";
        emit createFinishFignals();
    }
    else
    {
        qDebug()<<"添加失败";
    }

    // QString sectionRoomName = info["科别名称"];
    // QString sectionAddress = info["科室地址"];
    // QString sectionRoomMoney = info["挂号费"];

    // QSqlDatabase db = DatabaseManage::instance()->database();
    // QSqlQuery query;
    // query.prepare("insert into sectionroom(Sname,Saddr,Sprice) values(:name,:address,:money);");
    // query.bindValue(":name",sectionRoomName);
    // query.bindValue(":address",sectionAddress);
    // query.bindValue(":money",sectionRoomMoney);



}

void SectionRoomController::onAddSectionClick()
{
    QString type = view->getSectionTypeText();
    QString sonName = view->getsectionSonTypeText();
    bool success = model->addSectionRoomSon(type,sonName);
    if(success)
    {
        view->upCreateSaveSucceed();
        emit addFinishSignals();
    }
    else
    {
        view->showSaveErrorMessage();
    }
}

void SectionRoomController::onDeleteSectionSonClick()
{
    QString sonName = view->getsectionSonTypeText();
    bool success = model->deleteSectionRoomSon(sonName);
    qDebug()<<"onDeleteSectionSonClick";
    if(success)
    {
        view->showDeleteSuccess();
        emit deleteFinishsignals();
    }
    else
    {
        view->showDeleteError();
    }
}

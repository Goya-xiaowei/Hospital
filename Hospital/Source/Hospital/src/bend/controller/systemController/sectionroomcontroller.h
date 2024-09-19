#ifndef SECTIONROOMCONTROLLER_H
#define SECTIONROOMCONTROLLER_H
#include <QHash>
#include <QObject>
#include <src/fend/uisystemmanage/departmentbtn.h>
#include <src/bend/dao/userdb.h>
#include <src/bend/db/databasemanage.h>
class SectionRoomController: public QObject
{
    Q_OBJECT
public:
    SectionRoomController(DepartmentBtn *view,UserModel *model);
    void onCreateClick();
    void onAddSectionClick();
    void onDeleteSectionSonClick();
signals:
    void createFinishFignals();
    void deleteFinishsignals();
    void addFinishSignals();
private:
    DepartmentBtn *view;
    UserModel *model;
};

#endif // SECTIONROOMCONTROLLER_H

#ifndef USERINFOCONTROLLER_H
#define USERINFOCONTROLLER_H
#include "src/fend/uisystemmanage/employeebtn.h"

#include <QObject>
#include <src/bend/dao/userdb.h>

class UserInfoController:public QObject
{
    Q_OBJECT
public:
    UserInfoController(EmployeeBtn *view,UserModel *model);
    void onCommitClick();
private:
    EmployeeBtn *view; // 确保这里有 view 成员变量的声明
    UserModel *model;
};

#endif // USERINFOCONTROLLER_H

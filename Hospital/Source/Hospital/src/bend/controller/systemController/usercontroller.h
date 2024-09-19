#ifndef USERCONTROLLER_H
#define USERCONTROLLER_H

#include <QObject>


#include "src/fend/uisystemmanage/systembtn.h"
#include "src/bend/dao/userdb.h"
class UserController : public QObject
{
    Q_OBJECT

public:
    UserController(SystemBtn *view, UserModel *model);
    void onSaveUserTypeClick();
    void onSaveUserClick();

signals:
    void onSaveClickSiganl(); // 确保信号被正确声明

private:
    SystemBtn *view;
    UserModel *model;
};

#endif // USERCONTROLLER_H

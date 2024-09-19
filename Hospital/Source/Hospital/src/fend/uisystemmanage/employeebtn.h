#ifndef EMPLOYEEBTN_H
#define EMPLOYEEBTN_H
#include "src/bend/employeeModel/User.h"
#include <QDialog>

namespace Ui {
class EmployeeBtn;
}

class EmployeeBtn : public QDialog
{
    Q_OBJECT

public:
    explicit EmployeeBtn(QWidget *parent = nullptr);
    ~EmployeeBtn();
    void initGroupBox();
    User getUserInfo()const;
    void showSaveSuccessMessage();
    void showSaveErrorMessage();
    void showUserExist();

private:
    Ui::EmployeeBtn *ui;

    void onBtnCommitClick();
    void onBtnResetClick();
};

#endif // EMPLOYEEBTN_H

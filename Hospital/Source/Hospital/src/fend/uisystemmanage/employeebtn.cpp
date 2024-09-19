#include "employeebtn.h"
#include "ui_employeebtn.h"
#include "src/bend/controller/systemController/userinfocontroller.h"

#include <QMessageBox>

#include <src/bend/dao/sectionroomdb.h>
#include <src/bend/dao/userdb.h>
EmployeeBtn::EmployeeBtn(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::EmployeeBtn)
{
    ui->setupUi(this);
    initGroupBox();
    UserInfoController *controller = new UserInfoController(this,new UserModel);

    connect(ui->btnCommit,&QPushButton::clicked,controller,&UserInfoController::onCommitClick);
    connect(ui->btnReset,&QPushButton::clicked,this,&EmployeeBtn::onBtnResetClick);
}

EmployeeBtn::~EmployeeBtn()
{
    delete ui;
}

void EmployeeBtn::initGroupBox()
{
    ui->comboBoxSex->addItem("男");
    ui->comboBoxSex->addItem("女");
    UserModel user;
    QStringList userList = user.fendEmployeeUserType();
    for(int i = 0;i < userList.count();i++)
    {
        ui->comboBoxUserType->addItem(userList.at(i));
    }

    //后期改为从数据库中读取表中由创建的科室
    SectionRoomDb db;
    QStringList listDepartment = db.selectAllSection();
    ui->comboBoxSectionRoom->addItems(listDepartment);




}

User EmployeeBtn::getUserInfo() const
{
    User user;
    user.username = ui->lineEditUName->text();
    user.name = ui->lineEditName->text();
    user.sex = ui->comboBoxSex->currentText();
    user.password = ui->lineEditPassword->text();
    user.address = ui->lineEditAddress->text();
    user.phone = ui->lineEditPhone->text();
    user.money = ui->lineEditMoney->text().toDouble();
    user.sectionRoom = ui->comboBoxSectionRoom->currentText();
    user.type = ui->comboBoxUserType->currentText();
    user.info = ui->textEditInformation->toPlainText();
    return user;
}

void EmployeeBtn::showSaveSuccessMessage()
{
    QMessageBox::information(this,"提示","保存成功");
}

void EmployeeBtn::showSaveErrorMessage()
{
    QMessageBox::warning(this,"警告","失败");
}

void EmployeeBtn::showUserExist()
{
    QMessageBox::warning(this,"警告","用户已存在");
}

void EmployeeBtn::onBtnCommitClick()
{

}

void EmployeeBtn::onBtnResetClick()
{
    QList<QLineEdit*> lineedit = findChildren<QLineEdit*>();
    for(auto line:lineedit)
    {
        line->clear();
    }
}

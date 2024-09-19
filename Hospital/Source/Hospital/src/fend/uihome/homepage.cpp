#include "homepage.h"
#include "ui_homepage.h"

HomePage::HomePage(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::HomePage)
{
    ui->setupUi(this);
}

HomePage::~HomePage()
{
    delete ui;
}

void HomePage::loadInfo(const QString &username)
{
    HomeDb db;
    userinfo.clear();
    userinfo = db.loadUserInfo(username);
    ui->lineEditUserName->setText(userinfo["Uname"]);
    ui->lineEditName->setText(userinfo["name"]);
    ui->lineEditSex->setText(userinfo["Sex"]);
    ui->lineEditType->setText(userinfo["Type"]);
    ui->lineEditSectionRoom->setText(userinfo["SectionRoom"]);
    ui->lineEditPhone->setText(userinfo["Phone"]);
    ui->lineEditAddr->setText(userinfo["Address"]);
}

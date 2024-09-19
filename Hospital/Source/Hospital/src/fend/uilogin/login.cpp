#include "login.h"
#include "ui_login.h"

#include "src/bend/dao/logindb.h"

#include <QMessageBox>

Login::Login(QWidget *parent)
    : QDialog(parent), mainWindow(nullptr), ui(new Ui::Login)
{
    ui->setupUi(this);

    connect(ui->btn_signin,&QPushButton::clicked,this,&Login::onBtnLogin);

}

Login::~Login()
{
    delete ui;
    delete mainWindow;

}

void Login::onBtnLogin()
{
    QString name = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();

    LoginDb db;
    int isResult = db.userInfo(name,password);
    if(isResult == 0)
    {
        QMessageBox::information(this,"提示","用户不存在请检查或告诉管理员！！");
    }
    else if(isResult == 1)
    {
        this->hide();
        if (mainWindow) {
            delete mainWindow;
            mainWindow = nullptr;
        }
        if (!mainWindow) {
            mainWindow = new UiMain;
            mainWindow->show();
            connect(this,&Login::loginSuccess,mainWindow,&UiMain::receivedSignals);
            connect(mainWindow,&UiMain::btnQuit,this,&Login::showLogin);
            emit loginSuccess(name);


        }
        else
        {
            qDebug()<<"mainWindow已存在";
        }

    }
    else if(isResult == 2)
    {
        QMessageBox::information(this,"提示","密码或用户名错误");
    }

}

void Login::showLogin()
{
    this->show();

}

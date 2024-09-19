#include "mainwindow.h"
#include "ui_mainwindow.h"


#include <QButtonGroup>
#include <QGraphicsDropShadowEffect>
#include "src/fend/uimain/uimain.h"
#include <QTimer>
#include <qradiobutton.h>
#include "src/bend/dao/logindb.h"
MainWindow::MainWindow(QDialog *parent)
    : QDialog(parent)
{
    ui->setupUi(this);
    connect(ui->btn_signin,&QPushButton::clicked,this,&MainWindow::onBtnLogin);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onBtnLogin()
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
        UiMain ui;
        ui.show();
    }
    else if(isResult == 2)
    {

    }
}







#include "src/fend/uisystemmanage/systemmanagewidget.h"
#include "ui_systemmanagewidget.h"
#include "src/fend/uisystemmanage/registeredbtn.h"
#include "src/fend/uisystemmanage/departmentbtn.h"
#include "src/fend/uisystemmanage/systembtn.h"
#include "src/fend/uisystemmanage/employeebtn.h"
#include <QFile>
#include <QMessageBox>
#include <QSignalMapper>
#include <QSqlQuery>
#include <src/bend/db/databasemanage.h>
SystemManageWidget::SystemManageWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SystemManageWidget)
{
    ui->setupUi(this);
    setupActionMap();

    QSignalMapper *mapper = new QSignalMapper;
    QList<QPushButton*> list = findChildren<QPushButton*>();

    for(auto btn:list)
    {
        connect(btn,SIGNAL(clicked()),mapper,SLOT(map()));
        mapper->setMapping(btn,btn->objectName());
    }
    connect(mapper,&QSignalMapper::mappedString,this,&SystemManageWidget::onButtonClick);
    // connect(ui->btnRegistered,&QPushButton::clicked,this,&SystemManageWidget::onGhdClick);
    // connect(ui->btnDataBackup,&QPushButton::clicked,this,&SystemManageWidget::btnDataBackup);



}

SystemManageWidget::~SystemManageWidget()
{
    delete ui;
}

void SystemManageWidget::onGhdClick()
{
    RegisteredBtn *registered = new RegisteredBtn;
    registered->setAttribute(Qt::WA_DeleteOnClose);
    // registered->show();
    registered->exec();


}

void SystemManageWidget::onMzdClick()
{
    OutPatientBtn *outPatient = new OutPatientBtn;
    outPatient->setAttribute(Qt::WA_DeleteOnClose);
    outPatient->exec();
}

void SystemManageWidget::onZydClick()
{
    HospitalizationSilpsBtn *hospitalization = new HospitalizationSilpsBtn;
    hospitalization->setAttribute(Qt::WA_DeleteOnClose);
    hospitalization->exec();
}

void SystemManageWidget::onDepartment()
{
    DepartmentBtn *department = new DepartmentBtn;
    department->setAttribute(Qt::WA_DeleteOnClose);
    department->exec();
}

void SystemManageWidget::onSystemClick()
{
    SystemBtn *system = new SystemBtn;
    system->setAttribute(Qt::WA_DeleteOnClose);
    system->exec();
}

void SystemManageWidget::onButtonClick(const QString &buttonObjectName)
{
    if(buttonActionMap.contains(buttonObjectName))
    {
        buttonActionMap[buttonObjectName]();
    }

}

void SystemManageWidget::onEmployeeClick()
{
    EmployeeBtn *createEmployee =  new EmployeeBtn;
    createEmployee->setAttribute(Qt::WA_DeleteOnClose);
    createEmployee->exec();
}
// void SystemManageWidget::btnDataBackup()
// {
//     QSqlDatabase db = DatabaseManage::instance()->database();
//     // 假设您已经知道 root 用户的密码，这里直接赋值
//     QString rootPassword = "root"; // 替换为您的 root 用户密码

//     QString dbName = db.databaseName(); // 获取当前数据库的名称
//     QString host = "192.168.2.110"; // 假设数据库运行在本机，使用 localhost
//     QString path = "C:/backup.sql"; // 完整的备份文件路径和文件名

//     // 指定 mysqldump 的完整路径（如果需要）
//     QString mysqldumpPath = "mysqldump"; // 如果 mysqldump 在系统 PATH 中，可以直接使用命令名

//     // 构造 mysqldump 命令
//     // 注意：这里没有将密码包含在命令中，以避免安全风险
//     QString backupCommand = QString("%1 -uroot -p'%2' -h%3 %4 > %5")
//                                 .arg(mysqldumpPath)
//                                 .arg(rootPassword) // 使用 root 用户密码
//                                 .arg(host)
//                                 .arg(dbName)
//                                 .arg(path);

//     // 使用 system 函数执行 mysqldump 命令
//     int result = system(backupCommand.toStdString().c_str());

//     // 检查命令执行结果
//     if (QFile::exists(path)) {
//         QMessageBox::information(this, "提示", "数据库备份成功");
//     } else {
//         qDebug() << "备份文件不存在";
//         QMessageBox::warning(this, "提示", "数据库备份失败！");
//     }
// }
void SystemManageWidget::setupActionMap()
{

    buttonActionMap.insert(ui->btnRegistered->objectName(),
                           std::bind(&SystemManageWidget::onGhdClick, this));
    buttonActionMap.insert(ui->btnOutpatient->objectName(),
                           std::bind(&SystemManageWidget::onMzdClick, this));
    buttonActionMap.insert(ui->btnHospitalizationSilps->objectName(),
                           std::bind(&SystemManageWidget::onZydClick, this));
    buttonActionMap.insert(ui->btnDepartment->objectName(),
                           std::bind(&SystemManageWidget::onDepartment, this));
    buttonActionMap.insert(ui->btnSystem->objectName(),
                           std::bind(&SystemManageWidget::onSystemClick, this));
    buttonActionMap.insert(ui->btnCreateEmployee->objectName(),
                           std::bind(&SystemManageWidget::onEmployeeClick, this));


}



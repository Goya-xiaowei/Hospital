#include "wardaddbtn.h"
#include "ui_wardaddbtn.h"
#include "src/bend/dao/inpatientdb.h"
#include "src/bend/controller/inPatientCOntroller/inpatientcontroller.h"

#include <QMessageBox>
WardAddBtn::WardAddBtn(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::WardAddBtn)
{
    ui->setupUi(this);
    init();
    connect(ui->comboBoxSectionRoom,&QComboBox::currentTextChanged,this,&WardAddBtn::loadAddress);
    InPatientController *controller = new InPatientController(this,new InPatientDb);
    connect(ui->btnSureAdd,&QPushButton::clicked,controller,&InPatientController::addWardInfo);
    // connect(ui->comboBoxNumber,&QComboBox::currentTextChanged,this,&WardAddBtn::onComboBoxNumber);

}

WardAddBtn::~WardAddBtn()
{
    delete ui;
}

QHash<QString,QString> WardAddBtn::getInfo()
{
    wardInfo.clear();
    wardInfo["病房科室"] = ui->comboBoxSectionRoom->currentText();
    wardInfo["病房类型"] = ui->comboBoxWardType->currentText();
    wardInfo["病房地址"] = ui->lineEditAddress->text();
    wardInfo["病房价格"] = ui->lineEditPrice->text();
    wardInfo["病房号"] = ui->lineEditId->text();
    wardInfo["病床个数"] = ui->comboBoxNumber->currentText();
    qDebug()<<wardInfo["病房科室"];
    qDebug()<<wardInfo["病房类型"];
    qDebug()<<wardInfo["病房地址"];
    qDebug()<<wardInfo["病房价格"];
    qDebug()<<wardInfo["病房号"];
    qDebug()<<wardInfo["病床个数"];
    return wardInfo;
}

void WardAddBtn::showAddSuccess()
{
    QMessageBox::information(this,"提示","添加成功");
}

void WardAddBtn::showAddError()
{
    QMessageBox::information(this,"提示","添加失败");
}

QString WardAddBtn::getWardRoomNumber()
{
    return ui->lineEditId->text();
}

int WardAddBtn::getBedsNUmber()
{
    return ui->comboBoxNumber->currentText().toInt();
}

void WardAddBtn::init()
{
    ui->comboBoxWardType->addItem("普通病房");
    ui->comboBoxWardType->addItem("VIP病房");
    ui->comboBoxWardType->addItem("重症监护室");
    InPatientDb db;
    QStringList list;
    list = db.loadSectionType();
    ui->comboBoxSectionRoom->addItems(list);
    QStringList numberList;
    for(int i = 1;i<=6;i++)
    {
        numberList<<QString::number(i);
    }
    ui->comboBoxNumber->addItems(numberList);

}

QString WardAddBtn::loadWardNumber(const int &sectionRoomId,const int &wardInfoCount)
{
    QString wardId;

    wardId = "6610" + QString::number(sectionRoomId).rightJustified(3,'0') + QString::number(wardInfoCount + 1).rightJustified(3,'0');
    return wardId;
}

QString WardAddBtn::getRoomNumber()
{
    return ui->lineEditId->text();
}

void WardAddBtn::loadAddress(const QString &add)
{
    QString sectionRoomAddress;
    InPatientController *inPatient = new InPatientController(this,new InPatientDb);
    sectionRoomAddress = inPatient->sectionRoomAddre(add);
    ui->lineEditAddress->setText(sectionRoomAddress);
    InPatientDb db;
    int num = db.getSectionRoomId(add);
    int wardcount = db.getWardInfoCount();
    QString wardId = loadWardNumber(num,wardcount);
    ui->lineEditId->setText(wardId);
}

void WardAddBtn::onComboBoxNumber(const QString &number)
{
    QString roomId = getRoomNumber();
    int bedNumber = number.toInt();
    InPatientController *controller = new InPatientController(this,new InPatientDb);
    // controller->addWardBeds(roomId,bedNumber);
}

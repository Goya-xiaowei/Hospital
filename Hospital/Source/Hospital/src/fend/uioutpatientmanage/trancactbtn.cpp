#include "src/fend/uioutpatientmanage/trancactbtn.h"
#include "ui_trancactbtn.h"

#include <src/bend/dao/outpatientdb.h>

#include <src/bend/controller/outpatientController/trancactcontroller.h>

TrancactBtn::TrancactBtn(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TrancactBtn)
{
    ui->setupUi(this);
    ui->birthDate->setDisplayFormat("yyyy-MM-dd");
    ui->birthDate->setDate(QDate::currentDate());
    initInfo();
    TrancactController *controller = new TrancactController(this,new OutPatientDb());
    connect(ui->btnClear,&QPushButton::clicked,this,&TrancactBtn::onBtnClearClick);
    connect(ui->btnCommit,&QPushButton::clicked,controller,&TrancactController::onCommitData);
    connect(controller,&TrancactController::commitSucceccSignal,this,&TrancactBtn::onBtnClearClick);
}

TrancactBtn::~TrancactBtn()
{
    delete ui;
}

void TrancactBtn::initInfo()
{
    QStringList cultureList;
    cultureList<<"文盲"<<"小学"<<"高中"<<"大专"<<"本科"<<"研究生";
    ui->comboBoxCulture->addItems(cultureList);
    ui->comboBoxCulture->setCurrentIndex(-1);
    QStringList marriageList;
    marriageList<<"已婚"<<"未婚";
    ui->comboBoxMarriage->addItems(marriageList);
    ui->comboBoxMarriage->setCurrentIndex(-1);
    QStringList sexList;
    sexList<<"男"<<"女";
    ui->comboBoxSex->addItems(sexList);
    ui->comboBoxSex->setCurrentIndex(-1);
    QStringList professionList;
    professionList<<"学生"<<"农民"<<"工人"<<"教师"<<"医生"<<"其他";
    ui->comboBoxProfessional->addItems(professionList);
    ui->comboBoxProfessional->setCurrentIndex(-1);
    QStringList ethnicGroupList;
    ethnicGroupList<<"汉族"<<"回族"<<"藏族"<<"苗族"<<"彝族"<<"哈萨克族"<<"其他";
    ui->comboBoxEthnicGroup->addItems(ethnicGroupList);
    ui->comboBoxEthnicGroup->setCurrentIndex(-1);
    ui->lineEditCard->setText(getIdCard());

}
QString TrancactBtn::getIdCard()
{
    QString time;
    QDateTime timedate = QDateTime::currentDateTime();
    time = timedate.toString("yyyyMMdd");

    OutPatientDb db;
    int count = db.getdataCount() + 1;
    QString number;
    number = QString::number(count).rightJustified(5,'0');
    QString id_card = "6610" + time + number;
    return id_card;
}

QHash<QString, QString> TrancactBtn::getInfo()
{
    userInfo.clear();
    userInfo["Card"] = ui->lineEditCard->text();
    userInfo["Name"] = ui->lineEditName->text();
    userInfo["Sex"] = ui->comboBoxSex->currentText();
    userInfo["Age"] = ui->lineEditAge->text();
    userInfo["Birthday"] = ui->birthDate->date().toString("yyyy-MM-dd"); // 格式化日期
    userInfo["Address"] = ui->lineEditAddress->text();
    userInfo["Phone"] = ui->lineEditPhone->text();
    userInfo["Nation"] = ui->comboBoxEthnicGroup->currentText();
    userInfo["Cultrue"] = ui->comboBoxCulture->currentText();
    userInfo["Marriage"] = ui->comboBoxMarriage->currentText();
    userInfo["Work"] = ui->comboBoxProfessional->currentText();
    userInfo["Postcode"] = ui->lineEditZipCode->text();
    userInfo["IdcardNo"] = ui->lineEditIdCard->text();

    return userInfo;
}

void TrancactBtn::onBtnClearClick()
{
    ui->lineEditAddress->clear();
    ui->lineEditAge->clear();
    ui->lineEditCard->clear();
    ui->lineEditIdCard->clear();
    ui->lineEditName->clear();
    ui->lineEditZipCode->clear();
    ui->lineEditPhone->clear();
    ui->comboBoxCulture->setCurrentIndex(-1);
    ui->comboBoxEthnicGroup->setCurrentIndex(-1);
    ui->comboBoxMarriage->setCurrentIndex(-1);
    ui->comboBoxProfessional->setCurrentIndex(-1);
    ui->comboBoxSex->setCurrentIndex(-1);
    ui->birthDate->setDisplayFormat("yyyy/MM/dd");
    ui->birthDate->setDate(QDate::currentDate());
    ui->lineEditCard->setText(getIdCard());
}

void TrancactBtn::onBtnCommitClick()
{

}

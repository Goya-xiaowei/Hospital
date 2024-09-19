#include "src/fend/uioutpatientmanage/patientregistrationbtn.h"
#include "ui_patientregistrationbtn.h"
#include "src/bend/controller/outpatientController/registeredcontroller.h"

#include <QMessageBox>
PatientRegistrationBtn::PatientRegistrationBtn(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::PatientRegistrationBtn)
{
    ui->setupUi(this);
    ui->birthDate->setDisplayFormat("yyyy-MM-dd");
    ui->dateVisit->setDisplayFormat("yyyy-MM-dd");
    ui->dateRegistration->setDisplayFormat("yyyy-MM-dd");

    ui->birthDate->setDate(QDate::currentDate());
    ui->dateVisit->setDate(QDate::currentDate());
    ui->dateRegistration->setDate(QDate::currentDate());
    initInfo();
    //处理输入身份证号时，数据库中是否存在挂号单，如果存在，修改医疗卡卡号
    connect(ui->lineEditIdCard, &QLineEdit::editingFinished, this, &PatientRegistrationBtn::onEditingFinished);
    connect(this,&PatientRegistrationBtn::editingFinished,this,&PatientRegistrationBtn::handleEditingFinished);
    RegisteredController *controller = new RegisteredController(this,new OutPatientDb());
    connect(ui->comboBoxSectionRoom,&QComboBox::currentTextChanged,this,&PatientRegistrationBtn::initDoctor);
    connect(ui->btnClear,&QPushButton::clicked,this,&PatientRegistrationBtn::initInfo);
    connect(ui->btnCommit,&QPushButton::clicked,controller,&RegisteredController::updateInfo);
    connect(controller,&RegisteredController::commitFinish,this,&PatientRegistrationBtn::initInfo);
}

PatientRegistrationBtn::~PatientRegistrationBtn()
{
    delete ui;
}

QHash<QString, QString> PatientRegistrationBtn::getUserInfo()
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

QHash<QString, QString> PatientRegistrationBtn::getRegisteredInfo()
{
    userInfo.clear();
    userInfo["KId"] = ui->lineEditRegistered->text();
    userInfo["IdCard"] = ui->lineEditCard->text();
    userInfo["IdType"] = ui->comboBoxRegisteredType->currentText();
    userInfo["GuaDanFei"] = ui->lineEditRegisteredMoney->text();
    userInfo["OtherFei"] = ui->lineEditOtherMoney->text();
    userInfo["SectionRoom"] = ui->comboBoxSectionRoom->currentText();
    userInfo["Doctor"] = ui->comboBoxDoctor->currentText();
    userInfo["ReristerTime"] = ui->dateRegistration->date().toString("yyyy-MM-dd");
    userInfo["SeeDoctorTime"] = ui->dateVisit->date().toString("yyyy-MM-dd");
    return userInfo;
}

QString PatientRegistrationBtn::getIdCard()
{
    return ui->lineEditIdCard->text();
}

QString PatientRegistrationBtn::getLineEditCard()
{
    return ui->lineEditCard->text();
}

void PatientRegistrationBtn::commitSuccess()
{
    QMessageBox::information(this,"提示","挂号成功");
}

void PatientRegistrationBtn::commitError()
{
    QMessageBox::warning(this,"警告","挂号失败");
}

void PatientRegistrationBtn::initInfo()
{
    QStringList sexList;
    sexList<<"男"<<"女";
    ui->lineEditAddress->clear();
    ui->lineEditAge->clear();
    ui->lineEditIdCard->clear();
    ui->lineEditName->clear();
    ui->lineEditOtherMoney->clear();
    ui->lineEditPhone->clear();
    ui->lineEditRegisteredMoney->clear();
    ui->lineEditZipCode->clear();
    ui->lineEditCard->clear();
    ui->lineEditRegistered->clear();
    ui->comboBoxSex->addItems(sexList);
    ui->comboBoxSex->setCurrentIndex(-1);
    ui->comboBoxRegisteredType->clear();
    QStringList resistrerdTypeList;
    resistrerdTypeList<<"普通号"<<"专家号";
    ui->comboBoxRegisteredType->addItems(resistrerdTypeList);
    ui->comboBoxRegisteredType->setCurrentIndex(-1);

    OutPatientDb db;
    QStringList nameList = db.selectSectionName();
    ui->comboBoxSectionRoom->addItems(nameList);
    ui->comboBoxSectionRoom->setCurrentIndex(-1);

    ui->comboBoxCulture->clear();
    QStringList cultureList;
    cultureList<<"文盲"<<"小学"<<"高中"<<"大专"<<"本科"<<"研究生";
    ui->comboBoxCulture->addItems(cultureList);
    ui->comboBoxCulture->setCurrentIndex(-1);

    ui->comboBoxMarriage->clear();
    QStringList marriageList;
    marriageList<<"已婚"<<"未婚";
    ui->comboBoxMarriage->addItems(marriageList);
    ui->comboBoxMarriage->setCurrentIndex(-1);

    ui->comboBoxProfessional->clear();
    QStringList professionList;
    professionList<<"学生"<<"农民"<<"工人"<<"教师"<<"医生"<<"其他";
    ui->comboBoxProfessional->addItems(professionList);
    ui->comboBoxProfessional->setCurrentIndex(-1);

    QStringList ethnicGroupList;
    ethnicGroupList<<"汉族"<<"回族"<<"藏族"<<"苗族"<<"彝族"<<"哈萨克族"<<"其他";
    ui->comboBoxEthnicGroup->addItems(ethnicGroupList);
    ui->comboBoxEthnicGroup->setCurrentIndex(-1);
    ui->lineEditCard->setText(getCard());
    ui->lineEditRegistered->setText(getKId());
}

void PatientRegistrationBtn::initDoctor(const QString name)
{
    OutPatientDb db;
    QStringList doctorList;

    doctorList= db.selectDoctor(name);
    ui->comboBoxDoctor->clear();
    if(doctorList.isEmpty())
    {
        ui->comboBoxDoctor->addItem("");
    }
    else
    {
        ui->comboBoxDoctor->addItems(doctorList);
    }
    QString money = db.selectMoney(name);
    ui->lineEditRegisteredMoney->setText(money);

}

QString PatientRegistrationBtn::getCard()
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

QString PatientRegistrationBtn::getKId()
{
    QString time;
    QDateTime data = QDateTime::currentDateTime();
    time = data.toString("yyyyMMdd");
    OutPatientDb db;
    int count = db.getRegisterTableCount() + 1;
    QString number;
    number = QString::number(count).rightJustified(5,'0');
    QString KId = "6601" + time + number;
    return KId;
}

void PatientRegistrationBtn::onEditingFinished()
{
    QLineEdit *lineEdit = qobject_cast<QLineEdit *>(sender());
    if (lineEdit) {
        emit editingFinished(lineEdit->text());
    }
}

void PatientRegistrationBtn::handleEditingFinished(const QString &text)
{
    OutPatientDb db;
    QString is = db.IsSelectRegistered(text);
    if(!is.isEmpty())
    {
        ui->lineEditCard->setText(is);
    }
}



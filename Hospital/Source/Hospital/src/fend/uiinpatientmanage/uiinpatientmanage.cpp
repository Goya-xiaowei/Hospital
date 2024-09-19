#include "uiinpatientmanage.h"
#include "ui_uiinpatientmanage.h"

UiInpatientManage::UiInpatientManage(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::UiInpatientManage)
{
    ui->setupUi(this);
    wardView = new WardViewingBtn(this);
    patientSearch = new PatientSearchBtn(this);
    wardAdd = new WardAddBtn(this);
    registration = new RegistrationBtn(this);
    ui->stackedWidget->addWidget(wardView);
    ui->stackedWidget->addWidget(patientSearch);
    ui->stackedWidget->addWidget(wardAdd);
    ui->stackedWidget->addWidget(registration);

    connect(ui->btnWardView,&QPushButton::clicked,this,&UiInpatientManage::onBtnWardViewClick);
    connect(ui->btnPatientFind,&QPushButton::clicked,this,&UiInpatientManage::onBtnPatientSearchClick);
    connect(ui->btnWardAdd,&QPushButton::clicked,this,&UiInpatientManage::onBtnWardAddClick);
    connect(ui->btnRegistration,&QPushButton::clicked,this,&UiInpatientManage::onBtnRegistrationClick);

}

UiInpatientManage::~UiInpatientManage()
{
    delete ui;
}

void UiInpatientManage::onBtnWardViewClick()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void UiInpatientManage::onBtnPatientSearchClick()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void UiInpatientManage::onBtnWardAddClick()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void UiInpatientManage::onBtnRegistrationClick()
{
    ui->stackedWidget->setCurrentIndex(3);
}

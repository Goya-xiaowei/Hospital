#include "src/fend/uipharmacymanage/pharmacymanagewidget.h"
#include "ui_pharmacymanagewidget.h"



PharmacyManageWidget::PharmacyManageWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::PharmacyManageWidget)
{
    ui->setupUi(this);

    sendMedicine = new SendMedicineBtn();
    medicationList = new MedicationListBtn();
    ui->pharmacyStackedWidget->addWidget(medicationList);
    ui->pharmacyStackedWidget->addWidget(sendMedicine);

    connect(ui->btnMedicationList,&QPushButton::clicked,this,&PharmacyManageWidget::onClickMedicationList);
    connect(ui->btnSendMedicine,&QPushButton::clicked,this,&PharmacyManageWidget::onClickSendMedicine);

}

PharmacyManageWidget::~PharmacyManageWidget()
{
    delete ui;
}

void PharmacyManageWidget::onClickMedicationList()
{
    ui->btnMedicationList->setIcon(QIcon(":/image/jianyaodan2.png"));
    ui->btnSendMedicine->setIcon(QIcon(":/image/yifayao.png"));
    ui->pharmacyStackedWidget->setCurrentIndex(2);
}

void PharmacyManageWidget::onClickSendMedicine()
{
    ui->btnMedicationList->setIcon(QIcon(":/image/jianyaodan.png"));
    ui->btnSendMedicine->setIcon(QIcon(":/image/yifayao2.png"));
    ui->pharmacyStackedWidget->setCurrentIndex(3);
}

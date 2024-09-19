#include "src/fend/uidrugmanage/drugmanagewidget.h"
#include "ui_drugmanagewidget.h"

DrugManageWidget::DrugManageWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::DrugManageWidget)
{
    ui->setupUi(this);
    drugReview = new DrugReviewBtn(this);
    drugWarehouse = new DrugWarehouseBtn(this);
    drugOutWarehouse = new DrugOutWarehouseBtn(this);
    ui->drugManageStacked->addWidget(drugWarehouse);
    ui->drugManageStacked->addWidget(drugReview);
    ui->drugManageStacked->addWidget(drugOutWarehouse);

    connect(ui->btnDrugWarehouse,&QPushButton::clicked,this,&DrugManageWidget::onWarehouse);
    connect(ui->btnDrugOutWarehouse,&QPushButton::clicked,this,&DrugManageWidget::onOutWarehouse);
    connect(ui->btnDrugReview,&QPushButton::clicked,this,&DrugManageWidget::onReview);
}

DrugManageWidget::~DrugManageWidget()
{
    delete ui;
}

void DrugManageWidget::onWarehouse()
{
    ui->btnDrugWarehouse->setIcon(QIcon(":/image/drug_in2.png"));
    ui->btnDrugReview->setIcon(QIcon(":/image/drug_select.png"));
    ui->btnDrugOutWarehouse->setIcon(QIcon(":/image/drug_out.png"));
    ui->drugManageStacked->setCurrentIndex(2);
}

void DrugManageWidget::onOutWarehouse()
{
    ui->btnDrugWarehouse->setIcon(QIcon(":/image/drug_in.png"));
    ui->btnDrugReview->setIcon(QIcon(":/image/drug_select.png"));
    ui->btnDrugOutWarehouse->setIcon(QIcon(":/image/drug_out2.png"));
    ui->drugManageStacked->setCurrentIndex(4);
}

void DrugManageWidget::onReview()
{
    ui->btnDrugWarehouse->setIcon(QIcon(":/image/drug_in.png"));
    ui->btnDrugReview->setIcon(QIcon(":/image/drug_select2.png"));
    ui->btnDrugOutWarehouse->setIcon(QIcon(":/image/drug_out.png"));
    ui->drugManageStacked->setCurrentIndex(3);
}

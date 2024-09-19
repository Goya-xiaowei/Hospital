#include "src/fend/uifinancialmanage/financialmanagewidget.h"
#include "ui_financialmanagewidget.h"
#include "src/fend/uifinancialmanage/employmanage.h"
FinancialManageWidget::FinancialManageWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FinancialManageWidget)
{
    ui->setupUi(this);
    employ = new EmployManage(this);
    business = new BusinessStatisticsBtn(this);
    ui->financialManafeStacked->addWidget(business);
    ui->financialManafeStacked->addWidget(employ);
    connect(ui->btnBusinessStatistics,&QPushButton::clicked,this,&FinancialManageWidget::onBtnBusinessManage);
    connect(ui->btnEmployManage,&QPushButton::clicked,this,&FinancialManageWidget::onBtnEmployManage);
}

FinancialManageWidget::~FinancialManageWidget()
{
    delete ui;
}

void FinancialManageWidget::onBtnEmployManage()
{
    ui->btnEmployManage->setIcon(QIcon(":/image/yuangong2.png"));
    ui->btnBusinessStatistics->setIcon(QIcon(":/image/yingye1.png"));
    ui->financialManafeStacked->setCurrentIndex(1);

}

void FinancialManageWidget::onBtnBusinessManage()
{
    ui->btnEmployManage->setIcon(QIcon(":/image/yuangong1.png"));
    ui->btnBusinessStatistics->setIcon(QIcon(":/image/yingye2.png"));
     ui->financialManafeStacked->setCurrentIndex(0);
}

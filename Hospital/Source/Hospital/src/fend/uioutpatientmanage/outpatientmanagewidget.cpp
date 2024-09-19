#include "outpatientmanagewidget.h"

#include "ui_outpatientmanagewidget.h"

#include <QMessageBox>

OutpatientManageWidget::OutpatientManageWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::OutpatientManageWidget)
{
    ui->setupUi(this);

    patientRegistration = new PatientRegistrationBtn(this);
    trancact = new TrancactBtn(this);

    ui->outPatientStackedWidget->addWidget(patientRegistration);
    ui->outPatientStackedWidget->addWidget(trancact);


    connect(ui->btnPatientRegistration,&QPushButton::clicked,
            this,&OutpatientManageWidget::onClickedPatientRegistration);
    connect(ui->btnTrancact,&QPushButton::clicked,this,
            &OutpatientManageWidget::onClickedTransact);


}

OutpatientManageWidget::~OutpatientManageWidget()
{
    delete ui;
}

void OutpatientManageWidget::showDataSaveSuccess()
{
    QMessageBox::information(this,"提示","挂号成功!");
}

void OutpatientManageWidget::showDataSaveError()
{
    QMessageBox::warning(this,"提示","挂号失败!");
}



void OutpatientManageWidget::onClickedTransact()
{

    ui->btnPatientRegistration->setIcon(QIcon(":/image/bingren1.png"));
    ui->btnTrancact->setIcon(QIcon(":/image/card2.png"));
    ui->outPatientStackedWidget->setCurrentIndex(3);

}

void OutpatientManageWidget::onClickedPatientRegistration()
{

    ui->btnPatientRegistration->setIcon(QIcon(":/image/bingren2.png"));
    ui->btnTrancact->setIcon(QIcon(":/image/card1.png"));
    ui->outPatientStackedWidget->setCurrentIndex(2);
}

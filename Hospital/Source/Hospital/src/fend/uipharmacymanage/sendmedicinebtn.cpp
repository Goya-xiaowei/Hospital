#include "src/fend/uipharmacymanage/sendmedicinebtn.h"
#include "ui_sendmedicinebtn.h"

SendMedicineBtn::SendMedicineBtn(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::SendMedicineBtn)
{
    ui->setupUi(this);
}

SendMedicineBtn::~SendMedicineBtn()
{
    delete ui;
}

#include "businessstatisticsbtn.h"
#include "ui_businessstatisticsbtn.h"

BusinessStatisticsBtn::BusinessStatisticsBtn(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::BusinessStatisticsBtn)
{
    ui->setupUi(this);
}

BusinessStatisticsBtn::~BusinessStatisticsBtn()
{
    delete ui;
}

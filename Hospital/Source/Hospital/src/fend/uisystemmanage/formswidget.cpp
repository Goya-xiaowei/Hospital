#include "formswidget.h"
#include "ui_formswidget.h"

FormsWidget::FormsWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FormsWidget)
{
    ui->setupUi(this);
    ui->labelGhd->setPixmap(QPixmap(":/image/ghd.jpg"));
    ui->labelGhd->setScaledContents(true);
}

FormsWidget::~FormsWidget()
{
    delete ui;
}

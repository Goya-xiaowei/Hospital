#include "src/fend/uisystemmanage/ghdforms.h"
#include "ui_ghdforms.h"

GhdForms::GhdForms(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::GhdForms)
{
    ui->setupUi(this);
    // QPixmap pixmap(":/image/ghd.jpg");
    // QPixmap scaledPixmap = pixmap.scaled(ui->label->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation);
    // ui->label->setPixmap(scaledPixmap);
}

GhdForms::~GhdForms()
{
    delete ui;
}

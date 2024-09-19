#include "hospitalizationsilpsbtn.h"
#include "ui_hospitalizationsilpsbtn.h"

HospitalizationSilpsBtn::HospitalizationSilpsBtn(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::HospitalizationSilpsBtn)
{
    ui->setupUi(this);
    resize(500,500);
    ui->groupBoxMzd->setVisible(false);
    connect(ui->btnPreview,&QPushButton::clicked,this,&HospitalizationSilpsBtn::onBtnPreviewClick);
    setWindowFlags(Qt::Dialog|Qt::WindowCloseButtonHint);

    QList<QCheckBox*> listBoxs = findChildren<QCheckBox*>();

    for (int i = 0; i < listBoxs.count(); ++i) {
        connect(listBoxs.at(i),static_cast<void (QCheckBox::*)(bool)>(&QCheckBox::clicked),
                this,&HospitalizationSilpsBtn::onCheckBoxShowText);
    }
    connect(ui->btnAdd,&QPushButton::clicked,this,&HospitalizationSilpsBtn::onBtnAdd);
    connect(ui->btnClear,&QPushButton::clicked,this,&HospitalizationSilpsBtn::onBtnClear);
    connect(ui->btnClose,&QPushButton::clicked,this,&HospitalizationSilpsBtn::onBtnClose);

}

HospitalizationSilpsBtn::~HospitalizationSilpsBtn()
{
    delete ui;
}

void HospitalizationSilpsBtn::onBtnPreviewClick()
{
    ui->groupBoxMzd->setVisible(true);
    ui->listWidgetPreview->clear();
    for(int i = 0 ;i < ui->listWidgetShowCheckBox->count();i++)
    {
        QString text = ui->listWidgetShowCheckBox->item(i)->text();
        ui->listWidgetPreview->addItem(text);
    }
}

void HospitalizationSilpsBtn::onBtnAdd()
{
    QString text = ui->lineEditAdd->text();
    ui->listWidgetShowCheckBox->addItem(text);
}

void HospitalizationSilpsBtn::onBtnClear()
{
    ui->listWidgetShowCheckBox->clear();
}

void HospitalizationSilpsBtn::onBtnClose()
{
    ui->groupBoxMzd->setVisible(false);
}

void HospitalizationSilpsBtn::onCheckBoxShowText(bool checked)
{
    QCheckBox* checkBox = qobject_cast<QCheckBox*>(sender());
    if (!checkBox) return;
    QString text = checkBox->text();
    if(checked)
    {
        bool exists = false;
        for(int i = 0 ;i < ui->listWidgetShowCheckBox->count();i++)
        {
            if(ui->listWidgetShowCheckBox->item(i)->text() == text)
            {
                exists = true;
                break;
            }
        }
        if(!exists)
        {
            ui->listWidgetShowCheckBox->addItem(text);
        }
    }
    else
    {
        for(int i = ui->listWidgetShowCheckBox->count() - 1;i >= 0;i--)
        {
            if(ui->listWidgetShowCheckBox->item(i)->text() == text)
            {
                delete ui->listWidgetShowCheckBox->item(i);
            }
        }
    }


}



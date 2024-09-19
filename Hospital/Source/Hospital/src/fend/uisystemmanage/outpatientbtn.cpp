#include "outpatientbtn.h"
#include "ui_outpatientbtn.h"

OutPatientBtn::OutPatientBtn(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::OutPatientBtn)
{
    ui->setupUi(this);
    resize(500,500);
    ui->groupBoxMzd->setVisible(false);
    connect(ui->btnPreview,&QPushButton::clicked,this,&OutPatientBtn::onBtnPreviewClick);
    setWindowFlags(Qt::Dialog|Qt::WindowCloseButtonHint);
    QList<QCheckBox*> check = findChildren<QCheckBox*>();
    for(int i = 0;i < check.count();i++)
    {
        connect(check.at(i),static_cast<void (QCheckBox::*)(bool)>(&QCheckBox::clicked),
                this,&OutPatientBtn::onCheckBoxShowText);
    }
    connect(ui->btnClear,&QPushButton::clicked,this,&OutPatientBtn::onBtnClear);
    connect(ui->btnAdd,&QPushButton::clicked,this,&OutPatientBtn::onBtnAdd);
    connect(ui->btnClose,&QPushButton::clicked,this,&OutPatientBtn::onBtnClose);

}

OutPatientBtn::~OutPatientBtn()
{
    delete ui;
}

void OutPatientBtn::onBtnPreviewClick()
{
    ui->groupBoxMzd->setVisible(true);
    ui->listWidgetPreviewCheckBox->clear();
    for(int i = 0;i < ui->listWidgetShowCheckBox->count();i++)
    {
        QString text = ui->listWidgetShowCheckBox->item(i)->text();
        ui->listWidgetPreviewCheckBox->addItem(text);
    }
}

void OutPatientBtn::onBtnClear()
{
    ui->listWidgetShowCheckBox->clear();
}

void OutPatientBtn::onBtnAdd()
{
    QString text = ui->lineEditAdd->text();
    ui->listWidgetShowCheckBox->addItem(text);
}

void OutPatientBtn::onBtnClose()
{
    ui->groupBoxMzd->setVisible(false);
}

void OutPatientBtn::onCheckBoxShowText(bool check)
{
    // sender() 返回发出信号的对象，这里我们将其转换为 QCheckBox*
    QCheckBox *checkBox = qobject_cast<QCheckBox*>(sender());
    if (!checkBox) return;

    QString checkBoxText = checkBox->text();

    if (check) {
        // 检查文本是否已经存在于列表中
        bool exists = false;
        for (int i = 0; i < ui->listWidgetShowCheckBox->count(); i++) {
            if (ui->listWidgetShowCheckBox->item(i)->text() == checkBoxText) {
                exists = true;
                break;
            }
        }
        // 如果文本不存在于列表中，则添加新项
        if (!exists) {
            ui->listWidgetShowCheckBox->addItem(checkBoxText);
        }
    } else {
        // 遍历列表项，移除与复选框文本匹配的项
        for (int i = ui->listWidgetShowCheckBox->count() - 1; i >= 0; i--) {
            if (ui->listWidgetShowCheckBox->item(i)->text() == checkBoxText) {
                delete ui->listWidgetShowCheckBox->takeItem(i);
            }
        }
    }

}


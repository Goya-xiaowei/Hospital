#include "src/fend/uisystemmanage/registeredbtn.h"
#include "ui_registeredbtn.h"
#include <QSignalMapper>
RegisteredBtn::RegisteredBtn(QDialog *parent)
    : QDialog(parent)
    , ui(new Ui::RegisteredBtn)
{
    ui->setupUi(this);
    resize(500,500);
    ui->groupBoxGhd->setVisible(false);

    connect(ui->btnPreview,&QPushButton::clicked,this,&RegisteredBtn::onBtnPreviewClick);
    setWindowFlags(Qt::Dialog|Qt::WindowCloseButtonHint);

    QList<QCheckBox*> checkBoxs = findChildren<QCheckBox*>();
    for(int i = 0;i < checkBoxs.count();i++)
    {
        connect(checkBoxs.at(i),static_cast<void (QCheckBox::*)(bool)>(&QCheckBox::clicked),
                this,&RegisteredBtn::onCheckBoxShowText);
    }
    connect(ui->btnAdd,&QPushButton::clicked,this,&RegisteredBtn::onBtnAdd);
    connect(ui->btnClear,&QPushButton::clicked,this,&RegisteredBtn::onBtnClear);
    connect(ui->btnClose,&QPushButton::clicked,this,&RegisteredBtn::onBtnClose);

}

RegisteredBtn::~RegisteredBtn()
{
    delete ui;
}

void RegisteredBtn::onBtnPreviewClick()
{
    ui->groupBoxGhd->setVisible(true);

    ui->listWidgetPreview->clear();
    for(int i = 0;i < ui->listWidgetShowCheckBox->count();i++)
    {
        QString text = ui->listWidgetShowCheckBox->item(i)->text();
        ui->listWidgetPreview->addItem(text);
    }
}

void RegisteredBtn::onBtnAdd()
{
    QString text = ui->lineEditAdd->text();
    ui->listWidgetShowCheckBox->addItem(text);
}

void RegisteredBtn::onBtnClear()
{
    ui->listWidgetShowCheckBox->clear();
}

void RegisteredBtn::onBtnClose()
{
    ui->groupBoxGhd->setVisible(false);
}

void RegisteredBtn::onCheckBoxShowText(bool checked)
{
    // sender() 返回发出信号的对象，这里我们将其转换为 QCheckBox*

    QCheckBox *checkBox = qobject_cast<QCheckBox*>(sender());
    if (!checkBox) return;

    QString checkBoxText = checkBox->text();

    if (checked) {
        // 检查文本是否已经存在于列表中
        bool exists = false;
        for (int i = 0; i < ui->listWidgetShowCheckBox->count(); ++i) {
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
        for (int i = ui->listWidgetShowCheckBox->count() - 1; i >= 0; --i) {
            if (ui->listWidgetShowCheckBox->item(i)->text() == checkBoxText) {
                delete ui->listWidgetShowCheckBox->takeItem(i);
            }
        }
    }
}








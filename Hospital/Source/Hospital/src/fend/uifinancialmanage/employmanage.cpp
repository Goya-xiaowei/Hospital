#include "employmanage.h"
#include "ui_employmanage.h"
#include "src/bend/dao/employdb.h"

#include <QMessageBox>
EmployManage::EmployManage(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::EmployManage)
{
    ui->setupUi(this);
    init();
    connect(ui->treeView,&QTreeView::clicked,
            [this](const QModelIndex &index)
            {
                if(index.isValid())
                {
                    QStandardItemModel *model = qobject_cast<QStandardItemModel*>(ui->treeView->model());
                    ui->lineEditName->setText(model->data(index.sibling(index.row(),0)).toString());
                    ui->lineEditEmployName->setText(model->data(index.sibling(index.row(),1)).toString());
                    //下标为2的那一列被隐藏显示了所以后续从3开始
                    ui->comboBoxSex->setCurrentText(model->data(index.sibling(index.row(),3)).toString());
                    ui->lineEditAddress->setText(model->data(index.sibling(index.row(),4)).toString());
                    ui->lineEditPhone->setText(model->data(index.sibling(index.row(),5)).toString());
                    ui->comboBoxType->setCurrentText(model->data(index.sibling(index.row(),6)).toString());
                    ui->comboBoxSectionRoom->setCurrentText(model->data(index.sibling(index.row(),7)).toString());
                    ui->lineEditMoney->setText(model->data(index.sibling(index.row(),8)).toString());
                }
            });
    connect(ui->btnDelete,&QPushButton::clicked,this,&EmployManage::btnDeleteSlot);
    connect(this,&EmployManage::fnish,this,&EmployManage::init);
}

EmployManage::~EmployManage()
{
    delete ui;
}

void EmployManage::showEmployInfo()
{

}

void EmployManage::btnDeleteSlot()
{
    QString username = ui->lineEditName->text();
    EmployDb db;
    bool isSuccess = db.deleteEmploy(username);
    if(isSuccess)
    {
        QMessageBox::information(this,"提示","删除成功！");
    }
    else
    {
        QMessageBox::warning(this,"警告","删除失败！");
    }
    emit fnish();
}

void EmployManage::btnUpdateSlot()
{

}

void EmployManage::init()
{
    EmployDb db;
    QStandardItemModel *model = new QStandardItemModel;
    model = db.getEmployInfo();
    ui->treeView->setModel(model);
    ui->treeView->header()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->treeView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->treeView->setColumnHidden(2,true);
    ui->comboBoxType->addItems(db.getUserType());
    QStringList sex;
    sex<<"男"<<"女";
    ui->comboBoxSex->addItems(sex);
    ui->comboBoxSectionRoom->addItems(db.getSectionRoom());
}

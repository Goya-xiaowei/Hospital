#include "src/fend/uidrugmanage/drugoutwarehousebtn.h"
#include "ui_drugoutwarehousebtn.h"
#include "src/bend/controller/drugWarehousingController/warehousingcontroller.h"
#include <src/bend/dao/drugwarehousingdb.h>
#include <QMessageBox>
#include "src/bend/controller/drugWarehousingController/outwarehousecontroller.h"
DrugOutWarehouseBtn::DrugOutWarehouseBtn(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::DrugOutWarehouseBtn)
{
    ui->setupUi(this);
    DrugWarehousingDb db;

    QStandardItemModel *model = nullptr;
    model = db.selectAllDrugInfo();

    ui->treeView->setModel(model);
    ui->treeView->header()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->treeView->setEditTriggers(QAbstractItemView::NoEditTriggers);

    connect(ui->btnClear,&QPushButton::clicked,this,&DrugOutWarehouseBtn::onBtnClearClick);
    connect(ui->treeView,&QTreeView::clicked,
            [this](const QModelIndex &index)
            {
                if(index.isValid())
                {
                    QStandardItemModel *model = qobject_cast<QStandardItemModel*>(ui->treeView->model());
                    ui->lineEditDrugName->setText(model->data(index.sibling(index.row(), 0)).toString());
                }

    });
    connect(ui->btnFind,&QPushButton::clicked,this,&DrugOutWarehouseBtn::onBtnFindClick);
    OutWarehouseController *controller = new OutWarehouseController(this,new DrugWarehousingDb);
    connect(ui->btnOuthouse,&QPushButton::clicked,controller,&OutWarehouseController::deleteNameDrugInfo);
    connect(controller,&OutWarehouseController::deleteFinish,this,&DrugOutWarehouseBtn::showAllDrugInfo);
}

DrugOutWarehouseBtn::~DrugOutWarehouseBtn()
{
    delete ui;
}

QString DrugOutWarehouseBtn::getLineEditName()
{
    return ui->lineEditDrugName->text();
}

void DrugOutWarehouseBtn::onBtnClearClick()
{
    ui->lineEditDrugName->clear();
}

void DrugOutWarehouseBtn::onBtnFindClick()
{
    DrugWarehousingDb db;
    QString name = ui->lineEditDrugName->text();
    QStandardItemModel *itemModel = new QStandardItemModel;
    itemModel = db.selectNameDrugInfo(name);
    ui->treeView->setModel(itemModel);

}

void DrugOutWarehouseBtn::onBtnDeleteClick()
{

}

void DrugOutWarehouseBtn::delectDrugInfoSuccess()
{
    QMessageBox::information(this,"提示","删除成功");
}

void DrugOutWarehouseBtn::delectDrugInfoError()
{
    QMessageBox::warning(this,"警告","删除失败");
}

void DrugOutWarehouseBtn::showAllDrugInfo()
{
    QStandardItemModel*itemModel = new QStandardItemModel;
    DrugWarehousingDb db;
    itemModel = db.selectAllDrugInfo();
    ui->treeView->header()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->treeView->setModel(itemModel);
    ui->treeView->setEditTriggers(QAbstractItemView::NoEditTriggers);
}

#include "src/fend/uidrugmanage/drugwarehousebtn.h"
#include "ui_drugwarehousebtn.h"
#include <src/bend/controller/drugWarehousingController/warehousingcontroller.h>

DrugWarehouseBtn::DrugWarehouseBtn(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::DrugWarehouseBtn)
{
    ui->setupUi(this);
    init();

    WareHousingController *controller = new WareHousingController(this,new DrugWarehousingDb);
    connect(ui->btnDrugWarehousing,&QPushButton::clicked,controller,&WareHousingController::addDrugInfo);
    connect(ui->treeView,&QTreeView::clicked,
            [this](const QModelIndex &index)
            {
                if(index.isValid())
                {
                    QStandardItemModel *model = qobject_cast<QStandardItemModel*>(ui->treeView->model());
                    ui->lineEditDrugName->setText(model->data(index.sibling(index.row(), 0)).toString());
                    ui->comboBoxDrugType->setCurrentText(model->data(index.sibling(index.row(), 1)).toString());
                    ui->comboBoxCostName->setCurrentText(model->data(index.sibling(index.row(), 2)).toString());
                    ui->comboBoxDrugShape->setCurrentText(model->data(index.sibling(index.row(), 3)).toString());
                    ui->comboBoxDrugSpecs->setCurrentText(model->data(index.sibling(index.row(), 4)).toString());
                    ui->lineEditInsertPrice->setText(model->data(index.sibling(index.row(), 5)).toString());
                    ui->lineEditSellsPrice->setText(model->data(index.sibling(index.row(), 6)).toString());
                    ui->lineEditstock->setText(model->data(index.sibling(index.row(), 7)).toString());
                    ui->lineEditstockMax->setText(model->data(index.sibling(index.row(), 8)).toString());
                    ui->lineEditstockMin->setText(model->data(index.sibling(index.row(), 9)).toString());
                    ui->effectiveDate->setDateTime(model->data(index.sibling(index.row(),10)).toDateTime());
                    ui->produceDate->setDateTime(model->data(index.sibling(index.row(),11)).toDateTime());
                    ui->textEditEfficay->setPlainText(model->data(index.sibling(index.row(),12)).toString());

                }
            });
    connect(controller,&WareHousingController::saveFinish,this,&DrugWarehouseBtn::init);
    connect(ui->btnClearAll,&QPushButton::clicked,this,&DrugWarehouseBtn::clearAllText);
    connect(ui->btnDrugUpdate,&QPushButton::clicked,controller,&WareHousingController::updateDrugInfo);
    connect(ui->btnShowAllDrug,&QPushButton::clicked,this,&DrugWarehouseBtn::init);
    connect(ui->btnFind,&QPushButton::clicked,this,&DrugWarehouseBtn::selectDrugInfoShowTreeView);
}

DrugWarehouseBtn::~DrugWarehouseBtn()
{
    delete ui;
}

void DrugWarehouseBtn::addDataSuccess()
{
    QMessageBox::information(this,"提示","保存成功");
}

void DrugWarehouseBtn::addDateError()
{
    QMessageBox::warning(this,"警告","保存失败");
}

void DrugWarehouseBtn::clearAllText()
{
    ui->lineEditDrugName->clear();
    ui->comboBoxDrugType->clear();
    ui->comboBoxCostName->clear();
    ui->comboBoxDrugShape->clear();
    ui->comboBoxDrugSpecs->clear();
    ui->lineEditInsertPrice->clear();
    ui->lineEditSellsPrice->clear();
    ui->lineEditstock->clear();
    ui->lineEditstockMax->clear();
    ui->lineEditstockMin->clear();
    ui->effectiveDate->clear();
    ui->produceDate->clear();
    ui->textEditEfficay->clear();
    init();
}

void DrugWarehouseBtn::selectDrugInfoShowTreeView()
{
    DrugWarehousingDb db;
    QStandardItemModel *itemModel = new QStandardItemModel;
    QString name = getDrugName();
    itemModel = db.selectNameDrugInfo(name);
    ui->treeView->setModel(itemModel);
}

QHash<QString, QString> DrugWarehouseBtn::getDrugInfo()
{
    drugInfo.clear();
    drugInfo["Dname"] = ui->lineEditDrugName->text();
    drugInfo["Dtype"] = ui->comboBoxDrugType->currentText();
    drugInfo["DcostName"] = ui->comboBoxCostName->currentText();
    drugInfo["Dshape"] = ui->comboBoxDrugShape->currentText();
    drugInfo["Dspecs"] = ui->comboBoxDrugSpecs->currentText();
    drugInfo["DinsertPrice"] = ui->lineEditInsertPrice->text();
    drugInfo["DsellPrice"] = ui->lineEditSellsPrice->text();
    drugInfo["Dstock"] = ui->lineEditstock->text();
    drugInfo["DstockMax"] = ui->lineEditstockMax->text();
    drugInfo["DstockMin"] = ui->lineEditstockMin->text();
    drugInfo["DproductTime"] = ui->effectiveDate->text();
    drugInfo["DeffectTime"] = ui->produceDate->text();
    drugInfo["Defficay"] = ui->textEditEfficay->toPlainText();
    return drugInfo;
}

QString DrugWarehouseBtn::getDrugName()
{
    return ui->lineEditDrugName->text();
}

void DrugWarehouseBtn::init()
{
    ui->produceDate->setDisplayFormat("yyyy/MM/dd");
    ui->effectiveDate->setDisplayFormat("yyyy/MM/dd");
    ui->produceDate->setDateTime(QDateTime::currentDateTime());
    ui->effectiveDate->setDateTime(QDateTime::currentDateTime());
    QStringList info;
    info<<"片剂"<<"冲剂"<<"液剂";
    ui->comboBoxDrugShape->addItems(info);
    info.clear();
    info<<"中药"<<"西药";
    ui->comboBoxDrugType->addItems(info);
    info.clear();
    info<<"中药费用"<<"西药费用";
    ui->comboBoxCostName->addItems(info);
    info.clear();
    info<<"克"<<"片"<<"袋"<<"盒";
    ui->comboBoxDrugSpecs->addItems(info);
    info.clear();
    DrugWarehousingDb db;
    QStandardItemModel *itemModel = nullptr;
    itemModel = db.selectAllDrugInfo();
    // 设置水平头的自适应列宽模式
    ui->treeView->header()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->treeView->setModel(itemModel);
    ui->treeView->setEditTriggers(QAbstractItemView::NoEditTriggers);
}


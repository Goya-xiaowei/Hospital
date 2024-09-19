#include "src/fend/uidrugmanage/drugreviewbtn.h"
#include "ui_drugreviewbtn.h"
#include "src/bend/controller/drugWarehousingController/warehousingcontroller.h"
#include "src/bend/dao/drugwarehousingdb.h"
DrugReviewBtn::DrugReviewBtn(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::DrugReviewBtn)
{
    ui->setupUi(this);
    init();
    DrugWarehousingDb db;
    // WareHousingController *controller = new WareHousingController(this,new DrugWarehousingDb());
    // WareHousingController *controller = new WareHousingController(this,new DrugWarehousingDb);
    QStandardItemModel *model = nullptr;
    model = db.selectAllDrugInfo();

    ui->treeView->setModel(model);
    ui->treeView->header()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->treeView->setEditTriggers(QAbstractItemView::NoEditTriggers);

    connect(ui->btnShape,&QPushButton::clicked,this,&DrugReviewBtn::selectDrugShapeInfo);
    connect(ui->btnNameSelect,&QPushButton::clicked,this,&DrugReviewBtn::selectDrugNameInfo);
    connect(ui->btnSelectAll,&QPushButton::clicked,this,&DrugReviewBtn::selectDrugInfo);
    connect(ui->btnPrice,&QPushButton::clicked,this,&DrugReviewBtn::selectDrugPrice);
}

DrugReviewBtn::~DrugReviewBtn()
{
    delete ui;
}

void DrugReviewBtn::selectDrugShapeInfo()
{
    DrugWarehousingDb db;
    QStandardItemModel *itemModel = new QStandardItemModel;
    QString name = ui->comboBoxShape->currentText();
    qDebug()<<name;
    itemModel = db.selectDrugShapeInfo(name);
    ui->treeView->setModel(itemModel);
}

void DrugReviewBtn::selectDrugNameInfo()
{
    DrugWarehousingDb db;
    QStandardItemModel *itemModel = new QStandardItemModel;
    QString name = ui->lineEditDrugName->text();
    itemModel = db.selectNameDrugInfo(name);
    ui->treeView->setModel(itemModel);
}

void DrugReviewBtn::selectDrugInfo()
{
    DrugWarehousingDb db;
    QStandardItemModel *itemModel = new QStandardItemModel;
    itemModel = db.selectAllDrugInfo();
    ui->treeView->setModel(itemModel);
}

void DrugReviewBtn::selectDrugPrice()
{
    DrugWarehousingDb db;
    QStandardItemModel *itemModel = new QStandardItemModel;
    QString price = ui->lineEditPrice->text();
    itemModel = db.selectDrugPriceInfo(price);
    ui->treeView->setModel(itemModel);
}

void DrugReviewBtn::init()
{
    QStringList info;
    info<<"片剂"<<"冲剂"<<"液剂";
    ui->comboBoxShape->addItems(info);
}

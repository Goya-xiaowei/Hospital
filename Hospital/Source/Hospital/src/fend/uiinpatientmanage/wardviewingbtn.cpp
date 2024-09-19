#include "wardviewingbtn.h"
#include "ui_wardviewingbtn.h"
#include "src/bend/dao/inpatientdb.h"
WardViewingBtn::WardViewingBtn(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::WardViewingBtn)
{
    ui->setupUi(this);
    init();
    connect(ui->comboBoxSection,&QComboBox::currentTextChanged,this,&WardViewingBtn::loadSerctionWardRoom);
    connect(ui->treeViewWardView,&QTreeView::clicked,this,&WardViewingBtn::onWardViewClick);
}

WardViewingBtn::~WardViewingBtn()
{
    delete ui;
}

void WardViewingBtn::init()
{
    InPatientDb db;
    QStringList sectionName = db.loadSectionType();
    ui->comboBoxSection->addItems(sectionName);
    ui->comboBoxSection->setCurrentIndex(-1);
    QStandardItemModel *model = new QStandardItemModel;
    model = db.loadWardInfoView();
    ui->treeViewWardView->setModel(model);
    ui->treeViewWardView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->treeViewWardView->header()->setHighlightSections(QHeaderView::ResizeToContents);
}

void WardViewingBtn::loadSerctionWardRoom(const QString &sectionName)
{

    InPatientDb db;
    QStandardItemModel *model = new QStandardItemModel;
    model = db.loadWardInfoView(sectionName);
    ui->treeViewWardView->setModel(model);
    ui->treeViewWardView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->treeViewWardView->header()->setHighlightSections(QHeaderView::ResizeToContents);
}

void WardViewingBtn::onWardViewClick(const QModelIndex &index)
{
    QString roomid;
    if(index.isValid())
    {
       roomid = ui->treeViewWardView->model()->data(index.sibling(index.row(),4)).toString();
    }
    InPatientDb db;
    QStandardItemModel *model = new QStandardItemModel;
    model = db.loadWardBedsView(roomid);
    ui->treeView_2->setModel(model);
    ui->treeView_2->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->treeView_2->header()->setHighlightSections(QHeaderView::ResizeToContents);
}

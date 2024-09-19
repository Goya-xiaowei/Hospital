#include "patientsearchbtn.h"
#include "ui_patientsearchbtn.h"
#include <QSortFilterProxyModel>
PatientSearchBtn::PatientSearchBtn(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::PatientSearchBtn)
{
    ui->setupUi(this);
    init();
    connect(ui->btnFind,&QPushButton::clicked,this,&PatientSearchBtn::onBtnFind);
    connect(ui->btnAll,&QPushButton::clicked,this,&PatientSearchBtn::init);
}

PatientSearchBtn::~PatientSearchBtn()
{
    delete ui;
}

void PatientSearchBtn::init()
{
    InPatientDb db;
    QStandardItemModel *model = new QStandardItemModel;
    model = db.loadAllInfo();
    ui->treeView->setModel(model);
    ui->treeView->setEditTriggers(QAbstractItemView::NoEditTriggers);

    for(int i = 0;i < model->columnCount();i++)
    {
        ui->treeView->resizeColumnToContents(i);
    }
    ui->treeView->header()->setHighlightSections(QHeaderView::ResizeToContents);
}

void PatientSearchBtn::onBtnFind()
{
    QString name = ui->lineEditName->text();
    QSortFilterProxyModel *model = new QSortFilterProxyModel;
    model->setSourceModel(ui->treeView->model());
    model->setFilterKeyColumn(0);
    model->setFilterFixedString(name);
    ui->treeView->setModel(model);
}

#include "ui_medicationlistbtn.h"
#include "medicationlistbtn.h"
MedicationListBtn::MedicationListBtn(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MedicationListBtn)
{
    ui->setupUi(this);
    init();
    connect(ui->treeViewLeft,&QTreeView::doubleClicked,this,&MedicationListBtn::onTreeViewLeft);
    connect(ui->btnSendDrug,&QPushButton::clicked,this,&MedicationListBtn::onBtnSendDrug);
}

MedicationListBtn::~MedicationListBtn()
{
    delete ui;
}

void MedicationListBtn::init()
{
    QStandardItemModel *model = new QStandardItemModel;

    model = db.loadTreeViewLeft();
    ui->treeViewLeft->setModel(model);
    ui->treeViewLeft->setEditTriggers(QAbstractItemView::NoEditTriggers);
    for(int i =0 ;i< ui->treeViewLeft->model()->columnCount();i++)
    {
        ui->treeViewLeft->resizeColumnToContents(i);
    }
    ui->treeViewLeft->header()->setHighlightSections(QHeaderView::ResizeToContents);

}

void MedicationListBtn::onTreeViewLeft(const QModelIndex &index)
{
    QStandardItemModel *sourceModel = qobject_cast<QStandardItemModel *>(ui->treeViewLeft->model());

    if(index.isValid())
    {
        QString card = sourceModel->data(index.sibling(index.row(),0)).toString();
        ui->lineEditCard->setText(card);
        QString name = sourceModel->data(index.sibling(index.row(),1)).toString();
        ui->lineEditName->setText(name);
        sourceModel = db.loadTreeViewRight(card);

        ui->treeViewRight->setModel(sourceModel);
        ui->treeViewRight->setEditTriggers(QAbstractItemView::NoEditTriggers);
        for(int i = 0;i < sourceModel->columnCount();i++)
        {
            ui->treeViewRight->resizeColumnToContents(i);
        }
         ui->treeViewLeft->header()->setHighlightSections(QHeaderView::ResizeToContents);
    }
}

void MedicationListBtn::onBtnSendDrug()
{
    QString card = ui->lineEditCard->text();
    bool isSuccess = db.updateIsKaiyao(card);
    if(isSuccess)
    {
        QMessageBox::information(this,"提示","发药成功");

    }
    else
    {
        QMessageBox::warning(this,"警告","发药失败");
    }
}

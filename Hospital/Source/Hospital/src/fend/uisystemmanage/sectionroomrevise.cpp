#include "sectionroomrevise.h"
#include "ui_sectionroomrevise.h"


#include "src/bend/dao/sectionroomdb.h"
#include <QStandardItemModel>
#include <QTreeView>
#include <QHeaderView>
#include <QMessageBox>
SectionRoomRevise::SectionRoomRevise(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SectionRoomRevise)
{
    ui->setupUi(this);
    ui->treeViewRevise->setEditTriggers(QAbstractItemView::NoEditTriggers);
    UserModel model;
    QStandardItemModel *itemmodel =nullptr;
    itemmodel = model.showReviseSectionRoom();
    QStringList list;
    list<<"科室"<<"科室地址"<<"挂号费";
    itemmodel->setHorizontalHeaderLabels(list);
    ui->treeViewRevise->setModel(itemmodel);
    // ui->treeViewRevise->header()->setSectionHidden(0,true);
    //点击列表中的数据，会对应赋给窗口的文本编辑框中
    connect(ui->treeViewRevise->selectionModel(), &QItemSelectionModel::selectionChanged,
            [this,itemmodel](const QItemSelection &selected) {
                // 清空文本框以避免显示旧数据
                ui->lineEditName->clear();
                ui->lineEditAddress->clear();
                ui->lineEditMoney->clear();

                foreach (const QModelIndex &index, selected.indexes()) {
                    if (index.isValid()) {
                        QString department = itemmodel->data(index.sibling(index.row(), 0), Qt::DisplayRole).toString();
                        QString departmentAddress = itemmodel->data(index.sibling(index.row(), 1), Qt::DisplayRole).toString();
                        QString registrationFee = itemmodel->data(index.sibling(index.row(), 2), Qt::DisplayRole).toString();

                        // 将选中项的科室名称赋值给 oldName
                        oldName = department;

                        // 将获取到的值显示到文本框中
                        ui->lineEditName->setText(department);
                        ui->lineEditAddress->setText(departmentAddress);
                        ui->lineEditMoney->setText(registrationFee);
                    }
                }
            });

    // oldName = ui->lineEditName->text();
    qDebug()<<oldName;
    //修改科室信息
    connect(ui->btnRevise, &QPushButton::clicked,
            [=]() {
                SectionRoomDb db;
                bool success = db.onReviseData(oldName, ui->lineEditName->text(),
                                               ui->lineEditAddress->text(),
                                               ui->lineEditMoney->text().toDouble());
                if(success) {
                    QMessageBox::information(this, "提示", "修改成功");
                    emit finishSignal();
                } else {
                    QMessageBox::warning(this, "警告", "修改失败");
                }
            });
    //删除科室信息
    connect(ui->btnDelete,&QPushButton::clicked,
            [this](){
                SectionRoomDb db;
                bool success = db.onDeleteData(oldName);
                if(success) {
                    QMessageBox::information(this, "提示", "删除成功");
                    emit finishSignal();
                } else {
                    QMessageBox::warning(this, "警告", "删除失败");
                }
    });
    // ...
    connect(this,&SectionRoomRevise::finishSignal,this,&SectionRoomRevise::initTreeView);
}

SectionRoomRevise::~SectionRoomRevise()
{
    delete ui;
}

void SectionRoomRevise::showSuccessMessageBox()
{
    QMessageBox::information(this,"提示","添加成功");
}

void SectionRoomRevise::showErrorMessageBox()
{
    QMessageBox::warning(this,"警告","添加失败");
}

void SectionRoomRevise::initTreeView()
{
    UserModel model;
    QStandardItemModel *itemmodel =nullptr;
    itemmodel = model.showSectionRoom();
    QStringList list;
    list<<"编号"<<"科室"<<"科室地址"<<"挂号费";
    itemmodel->setHorizontalHeaderLabels(list);
    ui->treeViewRevise->setModel(itemmodel);
    ui->treeViewRevise->header()->setSectionHidden(0,true);
}






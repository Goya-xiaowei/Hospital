#include "departmentbtn.h"
#include "ui_departmentbtn.h"
#include "src/bend/controller/systemController/sectionroomcontroller.h"

#include <QMessageBox>

#include <src/bend/dao/sectionroomdb.h>
DepartmentBtn::DepartmentBtn(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DepartmentBtn)
{

    ui->setupUi(this);
    ui->treeView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    SectionRoomController *controller = new SectionRoomController(this,new UserModel);
    // ui->comboBoxCategory->setCurrentText("");
    connect(ui->btnClear,&QPushButton::clicked,this,&DepartmentBtn::onBtnClearClick);
    connect(ui->btnCreate,&QPushButton::clicked,controller,&SectionRoomController::onCreateClick);
    connect(ui->btnRevise,&QPushButton::clicked,this,&DepartmentBtn::onBtnReviseClick);
    initTreeView();

    connect(controller,&SectionRoomController::createFinishFignals,this,&DepartmentBtn::initTreeView);
    connect(controller,&SectionRoomController::deleteFinishsignals,this,&DepartmentBtn::initTreeView);
    connect(controller,&SectionRoomController::addFinishSignals,this,&DepartmentBtn::initTreeView);

    // 假设 model 是从 UserModel::showSectionRoom() 获取的 QStandardItemModel 指针
    connect(ui->treeView, &QTreeView::clicked, [this](const QModelIndex &index) {
        if (index.isValid()) {
            // 检查是否是父节点，父节点的 parent() 应该是无效的
            if (!index.parent().isValid()) {
                // 选中的是父节点
                QString name = index.model()->data(index, Qt::DisplayRole).toString();
                qDebug() << "Parent Name:" << name;
                QStringList list = model.getSectionAddressMoney(name);
                QString address = list.at(0);
                QString money = list.at(1);

                ui->lineEditSectionMoney->setText(money);
                ui->lineEditSectionAddress->setText(address);
                ui->lineEditSectionName->setText(name);
                ui->comboBoxCategory->setCurrentText(name);

            } else {
                // 选中的是子节4点

                QString sonName = index.model()->data(index, Qt::DisplayRole).toString();
                QModelIndex parentIndex = index.parent();
                QString parentname;
                if(parentIndex.isValid())
                {
                    parentname = parentIndex.model()->data(parentIndex,Qt::DisplayRole).toString();
                }
                ui->lineEditSonName->setText(sonName);
                ui->comboBoxCategory->setCurrentText(parentname);

            }
        }
    });
    connect(ui->btnAdd,&QPushButton::clicked,controller,&SectionRoomController::onAddSectionClick);
    connect(ui->btnDelete,&QPushButton::clicked,controller,&SectionRoomController::onDeleteSectionSonClick);
    connect(ui->btnClose,&QPushButton::clicked,[this](){this->close();});
}


DepartmentBtn::~DepartmentBtn()
{
    delete ui;
}

void DepartmentBtn::upCreateSaveSucceed()
{
    QMessageBox::information(this,"提示","添加成功");
}

void DepartmentBtn::showSaveErrorMessage()
{
    QMessageBox::warning(this,"错误","添加失败");
}

void DepartmentBtn::showDeleteSuccess()
{
    QMessageBox::information(this,"提示","删除成功");
}

void DepartmentBtn::showDeleteError()
{
    QMessageBox::warning(this,"错误","删除失败");
}

QString DepartmentBtn::getSectionTypeText()
{
    return ui->comboBoxCategory->currentText();
}

QString DepartmentBtn::getsectionSonTypeText()
{
    return ui->lineEditSonName->text();
}


QHash<QString, QString> DepartmentBtn::getTextInfo()
{
    QHash<QString,QString> info;
    info.insert(ui->labelSectionName->text().trimmed(), ui->lineEditSectionName->text());
    info.insert(ui->labelSectionAddress->text().trimmed(), ui->lineEditSectionAddress->text());
    info.insert(ui->labelSectionMoney->text().trimmed(), ui->lineEditSectionMoney->text());
    return info;
}

void DepartmentBtn::initTreeView()
{
    itemmodel = model.showSectionRoom();
    ui->treeView->setModel(itemmodel);
    ui->treeView->setHeaderHidden(true);
    // ui->comboBoxCategory->clear();
    SectionRoomDb sectiondb;
    QStringList list = sectiondb.selectAllSection();
    ui->comboBoxCategory->addItems(list);
}

void DepartmentBtn::onBtnClearClick()
{
    ui->lineEditSectionAddress->clear();
    ui->lineEditSectionMoney->clear();
    ui->lineEditSectionName->clear();
}

void DepartmentBtn::onBtnReviseClick()
{
    SectionRoomRevise *revise = new SectionRoomRevise(this);
    revise->setAttribute(Qt::WA_DeleteOnClose);
    revise->exec();
}

void DepartmentBtn::onBtnAddClick()
{

}

void DepartmentBtn::onBtnDelectClick()
{

}





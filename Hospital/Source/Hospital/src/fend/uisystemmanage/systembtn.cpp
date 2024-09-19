#include "src/fend/uisystemmanage/systembtn.h"
#include "ui_systembtn.h"

#include <QMessageBox>
#include <QSqlQueryModel>
#include <QSqlQueryModel>
#include <QTimer>
#include "src/bend/controller/systemController/usercontroller.h"
#include <QStandardItemModel>
#include <QListWidget>
#include <src/bend/dao/userdb.h>
SystemBtn::SystemBtn(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SystemBtn)
{
    ui->setupUi(this);
    resize(800,600);
    // ui->comboBoxName->addItem("管理员");
    // ui->comboBoxName->addItem("医师");
    initMap();

    for (QCheckBox *mainCheckBox : checkBoxMap.keys()) {
        connect(mainCheckBox, &QCheckBox::clicked, this, &SystemBtn::onBtonSignal);

    }

    QList<QCheckBox*> listCheckBox = findChildren<QCheckBox*>();
    connect(ui->checkBoxAll,&QCheckBox::clicked,[this,listCheckBox]()
            {
                bool checkAll = ui->checkBoxAll->isChecked();
                for(QCheckBox *checkBox : listCheckBox)
                {
                    if(checkBox!=ui->checkBoxAll)
                    {
                        if(ui->checkBoxAll->isEnabled())
                        {
                            checkBox->setChecked(checkAll);
                            checkBox->setEnabled(checkAll);
                            emit onAll();
                        }

                    }
                }
            });
    connect(this,&SystemBtn::onAll,[this]()
            {
                for (auto it = checkBoxMap.begin(); it != checkBoxMap.end(); ++it)
                {
                    QCheckBox *mainCheckBox = it.key();
                    bool enable = mainCheckBox->isChecked();
                    mainCheckBox->setEnabled(true);
                    QList<QCheckBox*> subCheckBoxes = it.value();
                    for (QCheckBox *subCheckBox : subCheckBoxes) {
                        subCheckBox->setEnabled(enable);

                    }
                }
            });
    UserModel userModel;
    QStandardItemModel *model = nullptr;
    model = userModel.showUserType();
    ui->listViewUserType->setModel(model);


    UserController *controller = new UserController(this, new UserModel());
    // connect(ui->btnSave,&QPushButton::clicked,controller,&UserController::onSaveUserTypeClick);

    connect(controller,&UserController::onSaveClickSiganl,[&]()
            {
                QStandardItemModel *model = userModel.showUserType();
                model->setHeaderData(0, Qt::Horizontal, QStringLiteral("类型")); // 假设"类型"是第一列
                ui->listViewUserType->setModel(model);
            });


    UserModel user;
    QStandardItemModel *usermodel = user.showUser();
    QStringList listname;
    listname<<"用户名"<<"员工姓名"<<"员工类型"<<"员工科室";
    usermodel->setHorizontalHeaderLabels(listname);

    ui->treeViewUser->setModel(usermodel);
    for (int i = 0; i < 4; ++i) {
        ui->treeViewUser->setColumnWidth(i,80);
    }

    connect(ui->listViewUserType->selectionModel(),
            &QItemSelectionModel::selectionChanged,
            this,
            &SystemBtn::onUserTypeSelectionChanged);
    connect(ui->treeViewUser->selectionModel(),
            &QItemSelectionModel::selectionChanged,
            this,
            &SystemBtn::onUserSelectionChanged);
    // connect(ui->btnSave, &QPushButton::clicked, controller, &UserController::onSaveClick);
    // connect(ui->btnSave, &QPushButton::clicked, controller, &UserController::onSaveClick);

    // connect(ui->btnSave, &QPushButton::clicked, this, &SystemBtn::onSaveClick);
    // connect(ui->btnSave,&QPushButton::clicked,controller,&UserController::onSaveUserClick);
    connect(ui->btnSave,&QPushButton::clicked,this,&SystemBtn::onSaveClick);
    connect(this, &SystemBtn::saveUserTypeSignal, controller, &UserController::onSaveUserTypeClick);
    connect(this, &SystemBtn::saveUserSignal, controller, &UserController::onSaveUserClick);

}

SystemBtn::~SystemBtn()
{
    delete ui;
}

QString SystemBtn::getLineEditNameText() const
{
    return ui->lineEditName->text();
}

QString SystemBtn::getCheckedPermissionsText() const
{
    QString peodom;
    QList<QWidget*> checkBoxes = this->findChildren<QWidget*>(Q_NULLPTR); // 获取所有子控件

    for (QWidget* widget : checkBoxes) {
        if (QCheckBox* checkBox = qobject_cast<QCheckBox*>(widget)) { // 检查是否是QCheckBox
            if (checkBox->isChecked() && checkBox->text()!="全选") { // 检查是否被选中且不是全选
                peodom += checkBox->text() + "; "; // 添加选中的checkBox文本，用分号分隔
            }
        }

    }
    if (peodom.endsWith("; ")) {
        peodom.chop(2);
    }
    return peodom;
}

QString SystemBtn::getLineEditUserName() const
{
    return ui->lineEditUserName->text();

}


void SystemBtn::showSaveSuccessMessage()
{
    QMessageBox::information(this,"提示","保存成功");
}

void SystemBtn::showSaveErrorMessage()
{
    QMessageBox::information(this,"提示","保存失败");

}

void SystemBtn::showSaveIsNull()
{
    QMessageBox::warning(this,"警告","类型名称不能为空");
}

void SystemBtn::initMap()
{

    checkBoxMap[ui->checkBoxFinanceManage]<<ui->checkBoxFinanceManage1
                                           <<ui->checkBoxFinanceManage2<<ui->checkBoxFinanceManage3;

    checkBoxMap[ui->checkBoxHospManage]<<ui->checkBoxHospManage1
                                        <<ui->checkBoxHospManage2<<ui->checkBoxHospManage3<<ui->checkBoxHospManage4
                                        <<ui->checkBoxHospManage5<<ui->checkBoxHospManage6<<ui->checkBoxHospManage7
                                        <<ui->checkBoxHospManage8<<ui->checkBoxHospManage9;

    checkBoxMap[ui->checkBoxOutDoctor]<<ui->checkBoxOutDoctor1
                                       <<ui->checkBoxOutDoctor2<<ui->checkBoxOutDoctor3<<ui->checkBoxOutDoctor4;

    checkBoxMap[ui->checkBoxOutPatientCharges]<<ui->checkBoxOutPatientCharges1
                                               <<ui->checkBoxOutPatientCharges2;

    checkBoxMap[ui->checkBoxPharmacyManage]<<ui->checkBoxPharmacyManage1
                                            <<ui->checkBoxPharmacyManage2;

    checkBoxMap[ui->checkBoxSystemManage]<<ui->checkBoxSystemManage1<<ui->checkBoxSystemManage2
                                          <<ui->checkBoxSystemManage3<<ui->checkBoxSystemManage4
                                          <<ui->checkBoxSystemManage5<<ui->checkBoxSystemManage6
                                          <<ui->checkBoxSystemManage7<<ui->checkBoxSystemManage8;

    checkBoxMap[ui->checkBoxOutpatientManage]<<ui->checkBoxOutpatientManage1<<ui->checkBoxOutpatientManage2
                                              <<ui->checkBoxOutpatientManage3<<ui->checkBoxOutpatientManage4
                                              <<ui->checkBoxOutpatientManage5;

    checkBoxMap[ui->checkBoxDrugManage]<<ui->checkBoxDrugManage1
                                        <<ui->checkBoxDrugManage2<<ui->checkBoxDrugManage3<<ui->checkBoxDrugManage4;
}

void SystemBtn::onSaveClick()
{   qDebug()<<"onSaveClick";
    UserController *controller = new UserController(this,new UserModel());
    qDebug()<<lastSelectedView;
    if (lastSelectedView == "listViewUserType") {

        emit saveUserTypeSignal();

    } else if (lastSelectedView == "treeViewUser") {
       emit saveUserSignal();

    }
}



void SystemBtn::onBtonSignal()
{
    QCheckBox* mainCheckBoxs = qobject_cast<QCheckBox*>(sender());
    if(!mainCheckBoxs)return;
    if (ui->checkBoxAll->isChecked()) {
        return;
    }
    auto it = checkBoxMap.find(mainCheckBoxs);
    if(it!=checkBoxMap.end())
    {

        bool enable = mainCheckBoxs->isChecked();
        for(QCheckBox *subCheckBox : it.value())
        {
            subCheckBox->setEnabled(enable);
            subCheckBox->setChecked(enable); // 如果需要，也可以设置子复选框的选中状态
        }
    }

}

void SystemBtn::onBtonNoSiganl(QCheckBox* checkBox)
{
    if (!checkBox) return; // 如果传入的复选框为空，则直接返回
    if (ui->checkBoxAll->isChecked()) {
        return; // 如果"全选"复选框被选中，则不执行任何操作
    }
    auto it = checkBoxMap.find(checkBox);
    if (it != checkBoxMap.end())
    {
        // 根据传入的 checkBox 的选中状态来启用和设置子复选框
        bool enable = checkBox->isChecked();
        for (QCheckBox* subCheckBox : it.value())
        {
            subCheckBox->setEnabled(enable);
            subCheckBox->setChecked(enable);
        }
    }
}

void SystemBtn::initTableView()
{




}

void SystemBtn::initTreeViewUser()
{
    UserModel user;
    QStandardItemModel *model = user.showUser();
    QStringList listname;
    listname<<"用户名"<<"员工姓名"<<"员工类型"<<"员工科室";
    model->setHorizontalHeaderLabels(listname);

    ui->treeViewUser->setModel(model);
    for (int i = 0; i < 4; ++i) {
        ui->treeViewUser->setColumnWidth(i,80);
    }
}

void SystemBtn::onUserTypeSelectionChanged(const QItemSelection &selected, const QItemSelection &deselected) {
    lastSelectedView = "listViewUserType";
    for (QCheckBox *mainCheckBox : checkBoxMap.keys()) {
        if(mainCheckBox)
        {
            mainCheckBox->setChecked(false);
            onBtonNoSiganl(mainCheckBox);
        }
    }
    // 当选中项发生变化时，更新 ui->lineEditName 的文本
    if (!selected.indexes().isEmpty()) {
        // 获取第一个选中项的索引
        QModelIndex index = selected.indexes().first();
        // 从模型中获取数据
        QString selectedItemText = ui->listViewUserType->model()->data(index).toString();
        // 将数据显示到 ui->lineEditName 中
        UserModel user;
        QStringList peodomList = user.getPeoDomFunc(selectedItemText);
        QList<QCheckBox*> listCheckBox = findChildren<QCheckBox*>();
        for(auto checkBox : listCheckBox)
        {
            if(peodomList.contains(checkBox->text()))
            {
                checkBox->setChecked(true);
                checkBox->setEnabled(true);
            }
        }
        ui->lineEditName->setText(selectedItemText);
    }

}

void SystemBtn::onUserSelectionChanged(const QItemSelection &selected, const QItemSelection &deselected)
{
    lastSelectedView = "treeViewUser";
    for (QCheckBox *mainCheckBox : checkBoxMap.keys()) {
        if(mainCheckBox)
        {
            mainCheckBox->setChecked(false);
            onBtonNoSiganl(mainCheckBox);
        }
    }

    if (!selected.indexes().isEmpty()) {
        // 获取第一个选中项的索引
        QModelIndex index = selected.indexes().first();
        // 从模型中获取数据
        QString username = ui->treeViewUser->model()->data(index.sibling(index.row(), 0), Qt::DisplayRole).toString();
        QString userType = ui->treeViewUser->model()->data(index.sibling(index.row(), 2), Qt::DisplayRole).toString();
        // 将数据显示到 ui->lineEditName 中
        UserModel user;
        QStringList peodomList = user.getUserPeodomFunc(username);
        QList<QCheckBox*> listCheckBox = findChildren<QCheckBox*>();
        for(auto checkBox : listCheckBox)
        {
            if(peodomList.contains(checkBox->text()))
            {
                checkBox->setChecked(true);
                checkBox->setEnabled(true);
            }
        }
        ui->lineEditUserType->setText(userType);
        ui->lineEditUserName->setText(username);
    }

}







#include "src/fend/uidoctor/doctorwidget.h"
#include "ui_doctorwidget.h"

#include <QStandardItemModel>
#include <QSqlRecord>
#include <QStandardItemModel>
#include <QMessageBox>
#include <src/bend/dao/doctordb.h>
#include <src/bend/controller/doctorController/doctorcontroller.h>

DoctorWidget::DoctorWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DoctorWidget)
{
    ui->setupUi(this);
    ui->tabWidget->setCurrentIndex(0 );
    ui->dateEditReristerTime->setDate(QDate::currentDate());
    ui->dateEditSeeDoctorTime->setDate(QDate::currentDate());
    ui->dateEdit->setDate(QDate::currentDate());
    ui->dateEditWestern->setDate(QDate::currentDate());
    DoctorDb db;
    QStandardItemModel *model = nullptr;
    model = db.getRegisterInfoModel();
    ui->treeViewInfo->setModel(model);
    ui->treeViewInfo->setEditTriggers(QAbstractItemView::NoEditTriggers);
    for(int i = 0;i < model->columnCount();i++)
    {
        ui->treeViewInfo->resizeColumnToContents(i);
    }
    connect(ui->treeViewInfo, &QTreeView::clicked, [this](const QModelIndex &index) {
        // 确保索引有效
        if (index.isValid()) {
            // 获取模型的引用
            QStandardItemModel *model = qobject_cast<QStandardItemModel *>(ui->treeViewInfo->model());
            if (model) {
                // 遍历所有列以获取整行数据
                userInfoMap.clear();
                for(int column = 0;column<model->columnCount();column++)
                {
                    QString columnName = model->headerData(column,Qt::Horizontal).toString();

                    QVariant data = model->data(index.sibling(index.row(), column));
                    userInfoMap[columnName] = data.toString();
                }
                giveInfo(userInfoMap);
                emit sendIdCardSignals(index);

            } else {
                qDebug() << "Model is not a QStandardItemModel";
            }
        } else {
            qDebug() << "Invalid index";
        }
    });
    init();
    connect(this,&DoctorWidget::sendIdCardSignals,this,&DoctorWidget::initDrugInfo);
    connect(ui->btnChineseFind,&QPushButton::clicked,this,&DoctorWidget::loadChineseFindDrug);
    connect(ui->btnWesternFind,&QPushButton::clicked,this,&DoctorWidget::loadWesterFindDrug);
    connect(ui->btnChineseShowAll,&QPushButton::clicked,this,&DoctorWidget::init);
    connect(ui->btnWesternShowAll,&QPushButton::clicked,this,&DoctorWidget::init);

    connect(ui->treeViewChineseDrug,&QTreeView::doubleClicked,this,&DoctorWidget::loadChineseDrugChoose);
    connect(ui->treeViewWesternDrug,&QTreeView::doubleClicked,this,&DoctorWidget::loadWesternDrugChoose);

    //提交数据保存到数据库中

    connect(ui->btnAdd,&QPushButton::clicked,this,&DoctorWidget::saveKaiyaoInfo);
    connect(ui->btnWesternAdd,&QPushButton::clicked,this,&DoctorWidget::saveKaiyaoWesternInfo);

    connect(ui->btnClear,&QPushButton::clicked,this,&DoctorWidget::onBtnChineseClear);
    connect(ui->btnWesternClear,&QPushButton::clicked,this,&DoctorWidget::onBtnWesternClear);

    connect(this,&DoctorWidget::sendVisitDoctorFinish,this,&DoctorWidget::updateInfo);
}

DoctorWidget::~DoctorWidget()
{
    delete ui;
}



void DoctorWidget::giveInfo(QHash<QString, QString> info)
{
    ui->lineEditKId->setText(info["挂号单"]);
    ui->lineEditIdCard->setText(info["医疗卡卡号"]);
    ui->lineEditIdType->setText(info["挂号类型"]);
    ui->lineEditGuaDanFei->setText(info["挂号费"]);
    ui->lineEditOtherFei->setText(info["其他费用"]);
    ui->lineEditSectionRoom->setText(info["挂号科室"]);
    ui->lineEditDoctor->setText(info["医师"]);
    // ui->dateEditReristerTime->setDate(QDate::fromString(info["挂号日期"],"yyyy/MM/dd"));

    QDate Reristerdate = QDate::fromString(info.value("挂号时间"),"yyyy-MM-dd");
    ui->dateEditReristerTime->setDate(Reristerdate);
    QDate seeDoctorDate = QDate::fromString(info.value("就诊时间"),"yyyy-MM-dd");
    ui->dateEditSeeDoctorTime->setDate(seeDoctorDate);

}

void DoctorWidget::init()
{
    //中药
    DoctorDb db;
    QStandardItemModel *chineseModel = new QStandardItemModel;
    QStringList tableList;
    tableList<<"药品名"<<"药品类型"<<"药品剂型"<<"售价"<<"功效";
    chineseModel = db.loadChineseDrug();
    chineseModel->setHorizontalHeaderLabels(tableList);
    ui->treeViewChineseDrug->setModel(chineseModel);
    ui->treeViewChineseDrug->setEditTriggers(QAbstractItemView::NoEditTriggers);
    for(int i = 0;i < ui->treeViewChineseDrug->model()->columnCount();i++)
    {

        ui->treeViewChineseDrug->resizeColumnToContents(i);
    }
    ui->treeViewChineseDrug->header()->setHighlightSections(QHeaderView::ResizeToContents);
    //西药
    QStandardItemModel *westernModel = new QStandardItemModel;
    westernModel = db.loadWesternDrug();
    westernModel->setHorizontalHeaderLabels(tableList);
    ui->treeViewWesternDrug->setModel(westernModel);
    ui->treeViewWesternDrug->setEditTriggers(QAbstractItemView::NoEditTriggers);
    for(int i = 0;i < ui->treeViewWesternDrug->model()->columnCount();i++)
    {
        ui->treeViewWesternDrug->resizeColumnToContents(i);
    }
    ui->treeViewWesternDrug->header()->setHighlightSections(QHeaderView::ResizeToContents);
    ui->comboBoxChinese->clear();
    ui->comboBoxWestern->clear();
    QStringList list;
    list<<"初诊"<<"复诊";
    ui->comboBoxWestern->addItems(list);
    ui->comboBoxWestern->setCurrentIndex(-1);
    ui->comboBoxChinese->addItems(list);
    ui->comboBoxChinese->setCurrentIndex(-1);

    ui->dateEdit->setDateTime(QDateTime::currentDateTime());
    ui->dateEditWestern->setDateTime(QDateTime::currentDateTime());
    // 首先，确保您的tablenameList已经定义
    QStringList tablenameList;
    tablenameList<< "药品数量" << "药品名" << "药品类型" << "药品剂型" << "售价" << "功效" ;

    // 设置中药选择的模型和列宽自适应
    QStandardItemModel *modelChinese = new QStandardItemModel;
    modelChinese->setHorizontalHeaderLabels(tablenameList);
    ui->treeViewChineseChooseDrug->setModel(modelChinese);
    ui->treeViewChineseChooseDrug->header()->setSectionResizeMode(QHeaderView::ResizeToContents);

    // 设置西药选择的模型和列宽自适应
    QStandardItemModel *modelWestern = new QStandardItemModel;
    modelWestern->setHorizontalHeaderLabels(tablenameList);
    ui->treeViewWesternChooseDrug->setModel(modelWestern);
    ui->treeViewWesternChooseDrug->header()->setSectionResizeMode(QHeaderView::ResizeToContents);

}

void DoctorWidget::initDrugInfo(const QModelIndex &index)
{
    QHash<QString,QString> info;
    if(index.isValid())
    {
        QStandardItemModel *model = qobject_cast<QStandardItemModel *>(ui->treeViewInfo->model());
        if(model)
        {
            info.clear();
            for(int i = 0;i < model->columnCount();i++)
            {
                QString name = model->headerData(i,Qt::Horizontal).toString();
                QString nameValues = model->data(index.sibling(index.row(),i)).toString();
                info[name] = nameValues;
            }

        }
    }
    getChineseInfo(info);
    getWesternInfo(info);
    ui->lineEditChufangId->setText(loadChineseChufangId());
    ui->lineEditWesternChufangId->setText(loadWesternChufangId());
}

void DoctorWidget::getChineseInfo(const QHash<QString, QString> &info)
{
    ui->lineEditId->setText(info["挂号单"]);
    ui->lineEditCard->setText(info["医疗卡卡号"]);
    QDate seeDoctorDate = QDate::fromString(info.value("就诊时间"),"yyyy-MM-dd");
    ui->dateEdit->setDate(seeDoctorDate);
    DoctorDb db;
    QStringList list;
    list = db.getPatientInfo(ui->lineEditCard->text());
    ui->lineEditName->setText(list.at(0));
    ui->lineEditSex->setText(list.at(1));
    ui->lineEditAge->setText(list.at(2));
    ui->lineEditAddress->setText(list.at(3));
}

void DoctorWidget::getWesternInfo(const QHash<QString, QString> &info)
{
    ui->lineEditWesternId->setText(info["挂号单"]);
    ui->lineEditWesternCard->setText(info["医疗卡卡号"]);
    QDate seeDoctorDate = QDate::fromString(info.value("就诊时间"),"yyyy-MM-dd");
    ui->dateEditWestern->setDate(seeDoctorDate);
    DoctorDb db;
    QStringList list;
    list = db.getPatientInfo(ui->lineEditCard->text());
    ui->lineEditWesternName->setText(list.at(0));
    ui->lineEditWesternSex->setText(list.at(1));
    ui->lineEditWesternAge->setText(list.at(2));
    ui->lineEditWesternAddress->setText(list.at(3));
}

QString DoctorWidget::loadChineseChufangId()
{

    QDateTime data = QDateTime::currentDateTime();
    QString time = data.toString("MMdd");

    DoctorDb db ;
    int sectionId = db.getSectionRoomId(ui->lineEditIdCard->text());
    int count = db.getDrugCmedicineKaiyaoCount() + 1;
    QString chufangId = "1" + time + QString::number(sectionId).rightJustified(2,'0') + QString::number(count).rightJustified(4,'0');
    return chufangId;
}

QString DoctorWidget::loadWesternChufangId()
{
    QDateTime data = QDateTime::currentDateTime();
    QString time = data.toString("MMdd");

    DoctorDb db ;
    int sectionId = db.getSectionRoomId(ui->lineEditIdCard->text());
    int count = db.getDrugCmedicineKaiyaoCount() + 1;
    QString chufangId = "2" + time + QString::number(sectionId).rightJustified(2,'0') + QString::number(count).rightJustified(4,'0');
    return chufangId;
}

void DoctorWidget::loadChineseFindDrug()
{
    QString text = ui->lineEditChineseFind->text();
    QSortFilterProxyModel *model = new QSortFilterProxyModel;
    model->setSourceModel(ui->treeViewChineseDrug->model());
    model->setFilterKeyColumn(0);
    model->setFilterFixedString(text);
    ui->treeViewChineseDrug->setModel(model);
}

void DoctorWidget::loadWesterFindDrug()
{
    QString text = ui->lineEditWesternFind->text();
    QSortFilterProxyModel *model = new QSortFilterProxyModel;
    model->setSourceModel(ui->treeViewWesternDrug->model());
    model->setFilterKeyColumn(0);
    model->setFilterFixedString(text);
    ui->treeViewWesternDrug->setModel(model);
}

bool DoctorWidget::itemExists(QStandardItemModel *model, const QString &text) {
    for (int i = 0; i < model->rowCount(); ++i) {
        if (model->item(i, 0)->text() == text) { // 假设文本在第一列
            return true;
        }
    }
    return false;
}

void DoctorWidget::loadChineseDrugChoose(const QModelIndex &index)
{
    if (!index.isValid()) {
        return;
    }

    // 获取treeViewChineseDrug的模型
    QStandardItemModel *modelDrug = qobject_cast<QStandardItemModel *>(ui->treeViewChineseDrug->model());

    if (!modelDrug) {
        return;
    }

    // 获取点击的药品信息
    QString drugName = modelDrug->data(index.sibling(index.row(),0)).toString();

    // 获取数量，从lineEditDrugNumber中获取
    int quantity = ui->lineEditDrugNumber->text().toInt();
    if(!quantity)
    {
        QMessageBox::warning(this,"警告","药品数量不能为空！");
        return;
    }
    // 获取treeViewChineseChooseDrug的模型
    QStandardItemModel *modelChoose = qobject_cast<QStandardItemModel *>(ui->treeViewChineseChooseDrug->model());
    if (!modelChoose) {
        return;
    }

    // 检查是否已经存在该药品
    bool found = false;
    for (int i = 0; i < modelChoose->rowCount(); ++i) {
        if (modelChoose->item(i, 1)->text() == drugName) {
            // 如果存在，更新数量
            QStandardItem *quantityItem = new QStandardItem(QString::number(quantity));
            modelChoose->setItem(i, 0, quantityItem); // 更新最后一列的数量
            found = true;
            break;
        }
    }

    if (!found) {
        // 如果不存在，添加新行
        QStandardItem *itemName;
        int row = modelChoose->rowCount();//获取已经存在的列
        for(int i = 1; i< modelChoose->columnCount();i++)
        {
            itemName = new QStandardItem(modelDrug->data(index.sibling(index.row(),i-1)).toString());
            modelChoose->setItem(row,i,itemName);
        }
        itemName = new QStandardItem(QString::number(quantity));
        modelChoose->setItem(row,0,itemName);

    }
}
void DoctorWidget::loadWesternDrugChoose(const QModelIndex &index)
{
    if (!index.isValid()) {
        return;
    }

    // 获取treeViewChineseDrug的模型
    QStandardItemModel *modelDrug = qobject_cast<QStandardItemModel *>(ui->treeViewWesternDrug->model());

    if (!modelDrug) {
        return;
    }

    // 获取点击的药品信息
    QString drugName = modelDrug->data(index.sibling(index.row(),0)).toString();

    // 获取数量，从lineEditDrugNumber中获取
    int quantity = ui->lineEditWesternDrugNumber->text().toInt();
    if(!quantity)
    {
        QMessageBox::warning(this,"警告","药品数量不能为空！");
        return;
    }
    // 获取treeViewChineseChooseDrug的模型
    QStandardItemModel *modelChoose = qobject_cast<QStandardItemModel *>(ui->treeViewWesternChooseDrug->model());
    if (!modelChoose) {
        return;
    }

    // 检查是否已经存在该药品
    bool found = false;
    for (int i = 0; i < modelChoose->rowCount(); ++i) {
        if (modelChoose->item(i, 1)->text() == drugName) {
            // 如果存在，更新数量
            QStandardItem *quantityItem = new QStandardItem(QString::number(quantity));
            modelChoose->setItem(i, 0, quantityItem); // 更新最后一列的数量
            found = true;
            break;
        }
    }

    if (!found) {
        // 如果不存在，添加新行
        QStandardItem *itemName;
        int row = modelChoose->rowCount();//获取已经存在的列
        for(int i = 1; i< modelChoose->columnCount();i++)
        {
            itemName = new QStandardItem(modelDrug->data(index.sibling(index.row(),i-1)).toString());
            modelChoose->setItem(row,i,itemName);
        }
        itemName = new QStandardItem(QString::number(quantity));
        modelChoose->setItem(row,0,itemName);

    }
}

QHash<QString, QString> DoctorWidget::getkaiyaoInfo()
{


}

void DoctorWidget::saveKaiyaoInfo()
{
    bool isSaveFinish = true;
    QStandardItemModel *model = qobject_cast<QStandardItemModel *>(ui->treeViewChineseChooseDrug->model());
    for(int i = 0;i < model->rowCount();i++)
    {
        kaiyaoInfo.clear();
        kaiyaoInfo["处方单"] = ui->lineEditChufangId->text();
        kaiyaoInfo["医疗卡卡号"] = ui->lineEditCard->text();
        kaiyaoInfo["药品名"] = model->data(model->index(i,1)).toString();
        kaiyaoInfo["药品数量"] = ui->lineEditDrugNumber->text();
        kaiyaoInfo["处方状态"] = "未支付";
        kaiyaoInfo["开药状态"] = "未开药";
        kaiyaoInfo["初复诊"] = ui->comboBoxChinese->currentText();
        kaiyaoInfo["医嘱"] = ui->textEditChinese->toPlainText();
        kaiyaoInfo["开药时间"] = ui->dateEdit->text();
        DoctorDb db;
        isSaveFinish = db.addKaiYaoDan(kaiyaoInfo);
        bool isSuccess = db.updateIsVisitdoctor(ui->lineEditCard->text());
        if(isSuccess)
        {
            emit sendVisitDoctorFinish();
        }
    }
    if(isSaveFinish)
    {
        QMessageBox::information(this,"提示","开药成功");
        QStringList tablenameList;
        tablenameList<< "药品数量" << "药品名" << "药品类型" << "药品剂型" << "售价" << "功效" ;
        QStandardItemModel *modelChinese = new QStandardItemModel;
        modelChinese->setHorizontalHeaderLabels(tablenameList);
        ui->treeViewChineseChooseDrug->setModel(modelChinese);
        ui->treeViewChineseChooseDrug->header()->setSectionResizeMode(QHeaderView::ResizeToContents);
    }
    else
    {
        QMessageBox::warning(this,"提示","开药失败");
    }
}

void DoctorWidget::saveKaiyaoWesternInfo()
{
    bool isSaveFinish = true;
    QStandardItemModel *model = qobject_cast<QStandardItemModel *>(ui->treeViewWesternChooseDrug->model());
    for(int i = 0;i < model->rowCount();i++)
    {
        kaiyaoInfo.clear();
        kaiyaoInfo["处方单"] = ui->lineEditWesternChufangId->text();
        kaiyaoInfo["医疗卡卡号"] = ui->lineEditWesternCard->text();
        kaiyaoInfo["药品名"] = model->data(model->index(i,1)).toString();
        kaiyaoInfo["药品数量"] = ui->lineEditWesternDrugNumber->text();
        kaiyaoInfo["处方状态"] = "未支付";
        kaiyaoInfo["初复诊"] = ui->comboBoxWestern->currentText();
        kaiyaoInfo["医嘱"] = ui->textEditWestern->toPlainText();
        kaiyaoInfo["开药时间"] = ui->dateEditWestern->text();
        DoctorDb db;
        isSaveFinish = db.addKaiYaoDan(kaiyaoInfo);
    }
    if(isSaveFinish)
    {
        QMessageBox::information(this,"提示","开药成功");
        QStringList tablenameList;
        tablenameList<< "药品数量" << "药品名" << "药品类型" << "药品剂型" << "售价" << "功效" ;
        QStandardItemModel *modelChinese = new QStandardItemModel;
        modelChinese->setHorizontalHeaderLabels(tablenameList);
        ui->treeViewWesternChooseDrug->setModel(modelChinese);
        ui->treeViewWesternChooseDrug->header()->setSectionResizeMode(QHeaderView::ResizeToContents);

    }
    else
    {
        QMessageBox::warning(this,"提示","开药失败");
    }
}

void DoctorWidget::onBtnChineseClear()
{
    ui->lineEditName->clear();
    ui->lineEditAge->clear();
    ui->lineEditAddress->clear();
    ui->lineEditCard->clear();
    ui->lineEditChufangId->clear();
    ui->lineEditChufangId->clear();
    ui->lineEditDrugNumber->clear();
    ui->comboBoxChinese->setCurrentIndex(-1);
    ui->lineEditSex->clear();
    ui->lineEditId->clear();
    ui->dateEdit->setDateTime(QDateTime::currentDateTime());
}

void DoctorWidget::onBtnWesternClear()
{
    ui->lineEditWesternName->clear();
    ui->lineEditAge->clear();
    ui->lineEditWesternAge->clear();
    ui->lineEditWesternCard->clear();
    ui->lineEditWesternChufangId->clear();
    ui->lineEditWesternChufangId->clear();
    ui->lineEditWesternDrugNumber->clear();
    ui->comboBoxWestern->setCurrentIndex(-1);
    ui->lineEditWesternSex->clear();
    ui->lineEditWesternId->clear();
    ui->dateEditWestern->setDateTime(QDateTime::currentDateTime());
}

void DoctorWidget::updateInfo()
{
    DoctorDb db;
    QStandardItemModel *model = nullptr;
    model = db.getRegisterInfoModel();
    ui->treeViewInfo->setModel(model);
    ui->treeViewInfo->setEditTriggers(QAbstractItemView::NoEditTriggers);
    for(int i = 0;i < model->columnCount();i++)
    {
        ui->treeViewInfo->resizeColumnToContents(i);
    }
}


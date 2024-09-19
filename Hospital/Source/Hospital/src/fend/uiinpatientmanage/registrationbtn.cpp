#include "registrationbtn.h"
#include "ui_registrationbtn.h"

#include <QMessageBox>
#include <QStandardItemModel>
#include "src/bend/dao/inpatientdb.h"
RegistrationBtn::RegistrationBtn(QWidget *parent) : QWidget(parent), ui(new Ui::RegistrationBtn)
{
    ui->setupUi(this);
    init();
    connect(ui->treeViewRegistedName,&QTreeView::clicked,this,&RegistrationBtn::onTreeViewClick);
    connect(ui->comboBoxSectionType,&QComboBox::currentTextChanged,this,&RegistrationBtn::onSectionTypeClick);
    connect(ui->comboBoxWardRoomId,&QComboBox::currentTextChanged,this,&RegistrationBtn::onWardRoomIdClick);
    connect(ui->btnAdd,&QPushButton::clicked,this,&RegistrationBtn::onBtnAddClick);
    connect(this,&RegistrationBtn::treeViewClickFinish,this,&RegistrationBtn::loadRoomBedIdlist);
    connect(this,&RegistrationBtn::updateFinish,this,&RegistrationBtn::init);
    connect(ui->btnClear,&QPushButton::clicked,this,&RegistrationBtn::onBtnClearClick);


}

RegistrationBtn::~RegistrationBtn()
{
    delete ui;
}

void RegistrationBtn::init()
{
    InPatientDb db;

    QStringList sectionList = db.loadSectionType();
    ui->comboBoxSectionType->addItems(sectionList);
    ui->comboBoxSectionType->setCurrentIndex(-1);
    // QStringList wardTypeName;
    // wardTypeName<<"普通病房"<<"VIP病房"<<"重症监护室";
    // ui->comboBoxBedType->addItems(wardTypeName);
    QStandardItemModel *model = new QStandardItemModel;
    model = db.loadRegisteredUserInfo();
    ui->treeViewRegistedName->setModel(model);
    ui->treeViewRegistedName->header()->setHighlightSections(QHeaderView::ResizeToContents);
    ui->treeViewRegistedName->setEditTriggers(QAbstractItemView::NoEditTriggers);
    for(int i = 0;i < model->columnCount();i++)
    {
        ui->treeViewRegistedName->resizeColumnToContents(i);
    }
}

void RegistrationBtn::onTreeViewClick(const QModelIndex &index)
{
    if(index.isValid())
    {
        QString name = ui->treeViewRegistedName->model()->data(index.sibling(index.row(),0)).toString();
        QString cardId = ui->treeViewRegistedName->model()->data(index.sibling(index.row(),2)).toString();
        QString sectionRomm = ui->treeViewRegistedName->model()->data(index.sibling(index.row(),3)).toString();

        ui->lineEditName->setText(name);
        ui->lineEditCard->setText(cardId);
        ui->comboBoxSectionType->setCurrentText(sectionRomm);

    }
    emit treeViewClickFinish();

}

void RegistrationBtn::onSectionTypeClick(const QString &sectionTypeName)
{

    ui->comboBoxWardRoomId->clear();
    InPatientDb db;
    QStringList wardRoomId = db.getWardRoomIdList(sectionTypeName);
    ui->comboBoxBedType->clear();
    ui->comboBoxWardRoomId->addItems(wardRoomId);
    QStringList bedstype = db.getSectionRoomBedType(sectionTypeName);
    ui->comboBoxBedType->addItems(bedstype);
}

void RegistrationBtn::onWardRoomIdClick(const QString &wardRoomId)
{
    InPatientDb db;

    QString wardType = db.getWardRoomType(ui->comboBoxWardRoomId->currentText());
    ui->comboBoxBedType->setCurrentText(wardType);

    QStringList wardRoomBeds = db.getWardRoomBeds(wardRoomId);
    ui->comboBoxWardBedId->addItems(wardRoomBeds);
    QString price = db.getWardRoomPrice(wardRoomId);
    ui->lineEditPrice->setText(price);


}

void RegistrationBtn::onBtnAddClick()
{
    QString card = ui->lineEditCard->text();
    QString bedsid = ui->comboBoxWardBedId->currentText();
    QString bedType = ui->comboBoxBedType->currentText();
    QString bedPrice = ui->lineEditPrice->text();
    if(card == "" || bedPrice == "")
    {
        QMessageBox::warning(this,"警告","请输入完整的信息!");
        return;
    }
    InPatientDb db;
    bool success = db.updateBedInfo(bedsid,card,bedType);
    if(success)
    {
        QMessageBox::information(this,"提示","添加成功!");
        emit updateFinish();
    }
    else
    {
        QMessageBox::warning(this,"警告","添加失败");
    }

}

void RegistrationBtn::loadRoomBedIdlist()
{
    QString roomid = ui->comboBoxWardRoomId->currentText();
    InPatientDb db;
    QStringList wardRoomBeds = db.getWardRoomBeds(roomid);
    ui->comboBoxWardBedId->clear();
    ui->comboBoxWardBedId->addItems(wardRoomBeds);

}

void RegistrationBtn::onBtnClearClick()
{
    ui->lineEditCard->clear();
    ui->lineEditName->clear();
    ui->lineEditPrice->clear();
    ui->comboBoxBedType->clear();
    ui->comboBoxSectionType->setCurrentIndex(-1);
    ui->comboBoxWardRoomId->clear();
    ui->comboBoxWardBedId->clear();
}

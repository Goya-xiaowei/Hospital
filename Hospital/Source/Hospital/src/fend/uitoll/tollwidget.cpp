#include "src/fend/uitoll/tollwidget.h"
#include "ui_tollwidget.h"
#include "src/bend/dao/tolldb.h"
#include <QMessageBox>

TollWidget::TollWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TollWidget)
{
    ui->setupUi(this);
    init();
    ui->comboBoxLeft->addItems(getAllPage());
    connect(ui->treeViewLeft,&QTreeView::doubleClicked,this,&TollWidget::loadTreeViewRight);

    connect(ui->lineEditZhifuPrice,&QLineEdit::editingFinished,this,&TollWidget::computeChange);

    connect(ui->btnLeftHome,&QPushButton::clicked,this,&TollWidget::onBtnLeftHome);
    connect(ui->btnLeftPrevious,&QPushButton::clicked,this,&TollWidget::onBtnLeftPrevious);
    connect(ui->btnLeftNext,&QPushButton::clicked,this,&TollWidget::onBtnLeftNext);
    connect(ui->btnLeftEnd,&QPushButton::clicked,this,&TollWidget::onBtnLeftEnd);

    connect(ui->btnRightHome,&QPushButton::clicked,this,&TollWidget::onBtnRightHome);
    connect(ui->btnRightPrevious,&QPushButton::clicked,this,&TollWidget::onBtnRightPrevious);
    connect(ui->btnRightNext,&QPushButton::clicked,this,&TollWidget::onBtnRightNext);
    connect(ui->btnRightEnd,&QPushButton::clicked,this,&TollWidget::onBtnRightEnd);
    connect(ui->comboBoxLeft,&QComboBox::currentTextChanged,this,&TollWidget::onComboBoxLeftCurrentTextChanged);

    connect(ui->btnCheckout,&QPushButton::clicked,this,&TollWidget::onBtnCheckout);

}

TollWidget::~TollWidget()
{
    delete ui;
}

void TollWidget::onComboBoxLeftCurrentTextChanged(const QString &pageText) {
    int pageIndex = pageText.toInt() - 1;  // 将页码文本转换为整数，并减去1（因为列表是从1开始的）
    if (pageIndex >= 0) {
        currentPageLeft = pageIndex;  // 更新当前页码
        page(currentPageLeft);  // 加载并显示当前页的数据
    } else {
        // 可以添加错误处理，例如当输入的页码无效时
        QMessageBox::warning(this, "错误", "无效的页码");
    }
}

void TollWidget::init()
{
    TollDb db;
    QStandardItemModel *model = new QStandardItemModel();
    model = db.loadModelData(0);
    QStringList listname;
    listname<<"医疗卡号"<<"病人姓名"<<"性别"<<"年龄"<<"身份证号"<<"就诊科室"<<"就诊医生";
    model->setHorizontalHeaderLabels(listname);
    ui->treeViewLeft->setModel(model);
    ui->treeViewLeft->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->treeViewLeft->header()->setSectionResizeMode(QHeaderView::ResizeToContents);
    // QStringList index = getAllPage();
    // ui->comboBoxLeft->addItems(getAllPage());
    QStringList result;
    result = db.loadSectionRoon();
    ui->comboBoxSectionRoom->addItems(result);
    ui->comboBoxSectionRoom->setCurrentIndex(-1);
    QStringList sex;
    sex<<"男"<<"女";
    ui->comboBoxSex->addItems(sex);
    ui->comboBoxSex->setCurrentIndex(-1);

}

void TollWidget::page(int index)
{
    TollDb db;
    QStandardItemModel *model = new QStandardItemModel();
    model = db.loadModelData(index);
    ui->treeViewLeft->setModel(model);
    ui->treeViewLeft->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->treeViewLeft->header()->setSectionResizeMode(QHeaderView::ResizeToContents);
}

QStringList TollWidget::getAllPage()
{
    TollDb db;
    int allPage = db.loadAllPages();

    int j = 1;
    QStringList pageList;
    for(int i = 0;i < allPage + 1;i++)
    {

        pageList<<QString::number(i+1);
        j++;
    }
    return pageList;
}

void TollWidget::onBtnLeftPrevious()
{
    TollDb db;
    int endPage = db.loadAllPages();
    if(currentPageLeft>0)
    {
        currentPageLeft--;
        page(currentPageLeft);
    }
    else
    {
        QMessageBox::warning(this,"警告","当前页为第一页");
    }

}

void TollWidget::onBtnLeftNext()
{
    TollDb db;
    int endPage = db.loadAllPages();
    if(currentPageLeft<endPage)
    {
        currentPageLeft++;
        page(currentPageLeft);
    }
    else
    {
        QMessageBox::warning(this,"警告","当前页为最后一页");
    }
}

void TollWidget::onBtnLeftHome()
{
    TollDb db;
    currentPageLeft = 0;
    page(currentPageLeft);

}

void TollWidget::onBtnLeftEnd()
{
    TollDb db;
    int endPage = db.loadAllPages();
    currentPageLeft = endPage;
    page(currentPageLeft);
}

void TollWidget::onBtnRightPrevious()
{

}

void TollWidget::onBtnRightNext()
{

}

void TollWidget::onBtnRightHome()
{

}

void TollWidget::onBtnRightEnd()
{

}

void TollWidget::loadTreeViewRight(const QModelIndex &index)
{
    QStandardItemModel *model = qobject_cast<QStandardItemModel *>(ui->treeViewLeft->model());
    qDebug()<<"赋值";
    qDebug()<<model->data(index.sibling(index.row(),2)).toString();
    qDebug()<<model->data(index.sibling(index.row(),6)).toString();
    ui->lineEditCard->setText(model->data(index.sibling(index.row(),0)).toString());
    ui->lineEditDoctor->setText(model->data(index.sibling(index.row(),6)).toString());
    ui->lineEditName->setText(model->data(index.sibling(index.row(),1)).toString());
    ui->comboBoxSex->setCurrentText(model->data(index.sibling(index.row(),2)).toString());
    ui->comboBoxSectionRoom->setCurrentText(model->data(index.sibling(index.row(),5)).toString());
    ui->lineEditId->setText(model->data(index.sibling(index.row(),4)).toString());

    QString cardId = model->data(index.sibling(index.row(),0)).toString();
    TollDb db;
    model = db.loadModelRight(cardId);
    QStringList listname;
    listname<<"药品名称"<<"数量"<<"单价"<<"剂型"<<"支付状态"<<"功效";
    model->setHorizontalHeaderLabels(listname);
    ui->treeViewRight->setModel(model);
    ui->treeViewRight->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->treeViewRight->header()->setSectionResizeMode(QHeaderView::ResizeToContents);
    QString sumPrice = db.giveAllDrugPrice(cardId);
    ui->lineEditSumPrice->setText(sumPrice);

}

void TollWidget::computeChange()
{
    qDebug()<<"computeChange";
    int sum = ui->lineEditSumPrice->text().toInt();
    int giveMoney = ui->lineEditZhifuPrice->text().toInt();
    ui->lineEditChangePrice->setText(QString::number(giveMoney - sum));
}

void TollWidget::onBtnCheckout()
{
    int money = ui->lineEditChangePrice->text().toInt();
    if(money<0)
    {
        QMessageBox::warning(this,"提示","支付金额不足");
        return;
    }
    QString card = ui->lineEditCard->text();
    TollDb db;
    bool success = db.updateKaiyaoInfo(card);
    if(success)
    {
        QMessageBox::information(this,"提示","支付成功");
    }
    else
    {
        QMessageBox::warning(this,"提示","支付失败");
    }
}

#include "ui_uimain.h"
#include "uimain.h"

#include <QTime>
#include <QTimer>
#include <QHBoxLayout>
#include <QMoveEvent>
#include <QMouseEvent>
#include <QSignalMapper>
#include "src/fend/uitoll/tollwidget.h"
#include <src/fend/uilogin/login.h>

UiMain::UiMain(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::UiMain)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
    QTimer *timer = new QTimer;
    connect(timer,&QTimer::timeout,this,&UiMain::upTime);
    timer->start(100);
    ui->btnHome->setFocusPolicy(Qt::NoFocus);
    ui->btnMinWidget->setFocusPolicy(Qt::NoFocus);
    ui->btnMaxWidget->setFocusPolicy(Qt::NoFocus);
    ui->btnCloseWidget->setFocusPolicy(Qt::NoFocus);
    ui->btnDoctor->setFocusPolicy(Qt::NoFocus);
    ui->btnDrugManage->setFocusPolicy(Qt::NoFocus);
    ui->btnFinancialManage->setFocusPolicy(Qt::NoFocus);
    ui->btnInpatientManage->setFocusPolicy(Qt::NoFocus);
    ui->btnOutpatientManage->setFocusPolicy(Qt::NoFocus);
    ui->btnPharmacyManage->setFocusPolicy(Qt::NoFocus);
    ui->btnToll->setFocusPolicy(Qt::NoFocus);
    ui->btnSystem->setFocusPolicy(Qt::NoFocus);
    ui->btnQuit->setFocusPolicy(Qt::NoFocus);


    setupActionMap();

    QSignalMapper* mapper = new QSignalMapper(this);
    QList<QPushButton*> buttonList = findChildren<QPushButton*>();
    for(auto btn:buttonList)
    {
        connect(btn,SIGNAL(clicked()),mapper,SLOT(map()));
        mapper->setMapping(btn,btn->text());
    }

    connect(mapper,SIGNAL(mappedString(QString)),this,SLOT(onButtonClick(QString)));

    // connect(this, &QWidget::mousePressEvent, this, &UiMain::mousePressEvent);
    // connect(this, &QWidget::mouseMoveEvent, this, &UiMain::mouseMoveEvent);
    connect(ui->btnQuit,&QPushButton::clicked,this,&UiMain::onBtnQuit);

}
UiMain::~UiMain()
{


    delete ui;

}


void UiMain::clearMainWidget() {
    if (ui->mainWidget->layout()) {
        QLayoutItem *item;
        while ((item = ui->mainWidget->layout()->takeAt(0)) != nullptr) {
            QWidget *widget = item->widget();
            if (widget) {
                widget->setParent(nullptr); // 移除父布局
                widget->deleteLater();
            }
            delete item;
        }
        delete ui->mainWidget->layout(); // 删除布局

    }
    // 现在可以安全地添加新布局了
}

void UiMain::setupActionMap()
{
    buttonActionMap.insert("主页",std::bind(&UiMain::onBtnHome,this));
    buttonActionMap.insert("系统管理", std::bind(&UiMain::onBtnSystem, this));
    buttonActionMap.insert("门诊医生", std::bind(&UiMain::onBtnDoctor, this));
    buttonActionMap.insert("门诊管理", std::bind(&UiMain::onBtnOutpatientManage, this));
    buttonActionMap.insert("门诊收费", std::bind(&UiMain::onBtnToll,this));
    buttonActionMap.insert("药房管理", std::bind(&UiMain::onBtnPharmacyManage,this));
    buttonActionMap.insert("药库管理", std::bind(&UiMain::onBtnDrugManage,this));
    buttonActionMap.insert("财务管理", std::bind(&UiMain::onBtnFinancialManage,this));
    buttonActionMap.insert("住院管理", std::bind(&UiMain::onBtnInpatientManage,this));

}

void UiMain::mouseMoveEvent(QMouseEvent *event)
{
    if (event->buttons() == Qt::LeftButton) {
        move(event->globalPos() - dragPosition);
    }
}

void UiMain::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        dragPosition = event->globalPos() - frameGeometry().topLeft();
    }
}



void UiMain::on_btnCloseWidget_clicked()
{
    close();
}

void UiMain::on_btnMaxWidget_clicked()
{
    if(isMaximized == false)
    {
        showMaximized();
        isMaximized = true;
    }else{
        showNormal();
        isMaximized = false;
    }

}

void UiMain::on_btnMinWidget_clicked()
{
    showMinimized();
}

void UiMain::onButtonClick(const QString& text)
{
    if (buttonActionMap.contains(text)) {
        buttonActionMap[text](); // 调用对应的槽函数
    }

}

void UiMain::upTime()
{
    QDateTime time = QDateTime::currentDateTime();
    QString strTime = time.toString("hh:mm:ss");
    ui->labelTime->setText(strTime);

    ui->labelYearMonthDay->setText(time.toString("yyyy年MM月dd日"));
}

void UiMain::onBtnHome()
{
    clearMainWidget();
    HomePage *homeWidget = new HomePage(this);
    ui->mainWidget->setLayout(new QHBoxLayout());
    ui->mainWidget->layout()->addWidget(homeWidget);
    QString username = ui->labelShowUser->text();
    homeWidget->loadInfo(username);

}


void UiMain::onBtnSystem() {
    clearMainWidget();
    SystemManageWidget *systemWidget = new SystemManageWidget(this);
    ui->mainWidget->setLayout(new QHBoxLayout());
    ui->mainWidget->layout()->addWidget(systemWidget);



}

void UiMain::onBtnOutpatientManage() {
    clearMainWidget();
    OutpatientManageWidget *outpatientWidget = new OutpatientManageWidget(this);
    ui->mainWidget->setLayout(new QHBoxLayout());
    ui->mainWidget->layout()->addWidget(outpatientWidget);
}

void UiMain::onBtnDoctor()
{
    clearMainWidget();
    DoctorWidget *doctorWidget = new DoctorWidget(this);
    ui->mainWidget->setLayout(new QHBoxLayout);
    ui->mainWidget->layout()->addWidget(doctorWidget);

}

void UiMain::onBtnToll()
{
    clearMainWidget();
    TollWidget *tollwidget = new TollWidget(this);
    ui->mainWidget->setLayout(new QHBoxLayout);
    ui->mainWidget->layout()->addWidget(tollwidget);
}

void UiMain::onBtnInpatientManage()
{
    clearMainWidget();
    UiInpatientManage *inPatientManage = new UiInpatientManage(this);
    ui->mainWidget->setLayout(new QHBoxLayout);
    ui->mainWidget->layout()->addWidget(inPatientManage);
}

void UiMain::onBtnPharmacyManage()
{
    clearMainWidget();
    PharmacyManageWidget *pharmacyManage = new PharmacyManageWidget(this);
    ui->mainWidget->setLayout(new QHBoxLayout());
    ui->mainWidget->layout()->addWidget(pharmacyManage);
}

void UiMain::onBtnDrugManage()
{
    clearMainWidget();
    DrugManageWidget *drugManage = new DrugManageWidget(this);
    ui->mainWidget->setLayout(new QHBoxLayout);
    ui->mainWidget->layout()->addWidget(drugManage);


}

void UiMain::onBtnFinancialManage()
{
    clearMainWidget();
    FinancialManageWidget *financialManage = new FinancialManageWidget();
    ui->mainWidget->setLayout(new QHBoxLayout);
    ui->mainWidget->layout()->addWidget(financialManage);
}

void UiMain::onBtnQuit()
{
    emit btnQuit();
    this->close();

}

void UiMain::receivedSignals(const QString &name)
{
    ui->labelShowUser->setText(name);

}



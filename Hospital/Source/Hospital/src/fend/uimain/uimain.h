#ifndef UIMAIN_H
#define UIMAIN_H

#include <QHBoxLayout>
#include <QSignalMapper>
#include <QDialog>

#include "src/fend/uipharmacymanage/pharmacymanagewidget.h"
#include "src/fend/uisystemmanage/systemmanagewidget.h"
#include "src/fend/uioutpatientmanage/outpatientmanagewidget.h"
#include "src/fend/uidoctor/doctorwidget.h"
#include "src/fend/uihome/homepage.h"
#include "src/fend/uiinpatientmanage/uiinpatientmanage.h"
// #include "topwidget.h"
#include "src/fend/uidrugmanage/drugmanagewidget.h"
#include "src/fend/uifinancialmanage/financialmanagewidget.h"
#include <functional>

QT_BEGIN_NAMESPACE
namespace Ui { class UiMain; }
QT_END_NAMESPACE

class UiMain : public QDialog
{
    Q_OBJECT

public:
    UiMain(QWidget *parent = nullptr);
    ~UiMain();
    void receivedSignals(const QString &name);

private:
    Ui::UiMain *ui;
    SystemManageWidget *systemManageWidget;
    OutpatientManageWidget *outpatientManageWidget;
    QHBoxLayout *hboxLayout;

    QMap<QString,std::function<void()>> buttonActionMap;

private:
    void clearMainWidget();

    void setupActionMap();
    QPoint dragPosition;
protected:
    void mouseMoveEvent(QMouseEvent *event);
    void mousePressEvent(QMouseEvent *event);


signals:
    void btnManageClickSignal();
    void btnQuit();

private slots:
    void on_btnCloseWidget_clicked();
    void on_btnMaxWidget_clicked();
    void on_btnMinWidget_clicked();


    void onButtonClick(const QString& text);
    void upTime();

    //管理按钮事件处理函数
    void onBtnHome();
    void onBtnSystem();
    void onBtnOutpatientManage();
    void onBtnDoctor();
    void onBtnToll();
    void onBtnInpatientManage();
    void onBtnPharmacyManage();
    void onBtnDrugManage();
    void onBtnFinancialManage();

    void onBtnQuit();


private:
    bool isMaximized = false;


};
#endif // UIMAIN_H

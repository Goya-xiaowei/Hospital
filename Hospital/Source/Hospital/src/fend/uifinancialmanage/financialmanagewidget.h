#ifndef FINANCIALMANAGEWIDGET_H
#define FINANCIALMANAGEWIDGET_H

#include <QWidget>
#include "src/fend/uifinancialmanage/employmanage.h"
#include "src/fend/uifinancialmanage/businessstatisticsbtn.h"

namespace Ui {
class FinancialManageWidget;
}

class FinancialManageWidget : public QWidget
{
    Q_OBJECT

public:
    explicit FinancialManageWidget(QWidget *parent = nullptr);
    ~FinancialManageWidget();

private:
    Ui::FinancialManageWidget *ui;
    void onBtnEmployManage();
    void onBtnBusinessManage();

private:
    EmployManage *employ;
    BusinessStatisticsBtn *business;
};

#endif // FINANCIALMANAGEWIDGET_H

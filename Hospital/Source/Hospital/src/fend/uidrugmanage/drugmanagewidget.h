#ifndef DRUGMANAGEWIDGET_H
#define DRUGMANAGEWIDGET_H

#include <QWidget>
#include "src/fend/uidrugmanage/drugoutwarehousebtn.h"
#include "src/fend/uidrugmanage/drugreviewbtn.h"
#include "src/fend/uidrugmanage/drugwarehousebtn.h"
namespace Ui {
class DrugManageWidget;
}

class DrugManageWidget : public QWidget
{
    Q_OBJECT

public:
    explicit DrugManageWidget(QWidget *parent = nullptr);
    ~DrugManageWidget();

private:
    Ui::DrugManageWidget *ui;
private:
    DrugOutWarehouseBtn *drugOutWarehouse;
    DrugWarehouseBtn *drugWarehouse;
    DrugReviewBtn *drugReview;

private slots:
    void onWarehouse();
    void onOutWarehouse();
    void onReview();
};

#endif // DRUGMANAGEWIDGET_H

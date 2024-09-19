#ifndef DRUGWAREHOUSEBTN_H
#define DRUGWAREHOUSEBTN_H

#include <QWidget>
#include <QMessageBox>
#include <QStandardItemModel>
#include "src/bend/controller/drugWarehousingController/drugwarehousingcontroller.h"
namespace Ui {
class DrugWarehouseBtn;
}

class DrugWarehouseBtn : public QWidget
{
    Q_OBJECT

public:
    explicit DrugWarehouseBtn(QWidget *parent = nullptr);
    ~DrugWarehouseBtn();
    void addDataSuccess();
    void addDateError();

    QHash<QString, QString> getDrugInfo();
    QString getDrugName();

private slots:
    void clearAllText();
    void selectDrugInfoShowTreeView();



private:
    Ui::DrugWarehouseBtn *ui;
    QHash<QString,QString> drugInfo;


    void init();
    void setModel();

};

#endif // DRUGWAREHOUSEBTN_H

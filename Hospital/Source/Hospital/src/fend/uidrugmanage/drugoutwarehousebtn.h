#ifndef DRUGOUTWAREHOUSEBTN_H
#define DRUGOUTWAREHOUSEBTN_H

#include <QWidget>

namespace Ui {
class DrugOutWarehouseBtn;
}

class DrugOutWarehouseBtn : public QWidget
{
    Q_OBJECT

public:
    explicit DrugOutWarehouseBtn(QWidget *parent = nullptr);
    ~DrugOutWarehouseBtn();
    QString getLineEditName();
    void delectDrugInfoSuccess();
    void delectDrugInfoError();
    void showAllDrugInfo();

private:
    Ui::DrugOutWarehouseBtn *ui;
private slots:
    void onBtnClearClick();
    void onBtnFindClick();
    void onBtnDeleteClick();
private:

};

#endif // DRUGOUTWAREHOUSEBTN_H

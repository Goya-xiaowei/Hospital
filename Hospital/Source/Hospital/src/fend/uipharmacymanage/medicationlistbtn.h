#ifndef MEDICATIONLISTBTN_H
#define MEDICATIONLISTBTN_H

#include <QWidget>
#include "src/bend/dao/pharmacydb.h"
#include <QStandardItemModel>
#include <QMessageBox>
namespace Ui {
class MedicationListBtn;
}

class MedicationListBtn : public QWidget
{
    Q_OBJECT

public:
    explicit MedicationListBtn(QWidget *parent = nullptr);
    ~MedicationListBtn();
private:
    void init();
    void onTreeViewLeft(const QModelIndex &index);
    void onBtnSendDrug();
private:
    Ui::MedicationListBtn *ui;
    PharmacyDb db;
};

#endif // MEDICATIONLISTBTN_H

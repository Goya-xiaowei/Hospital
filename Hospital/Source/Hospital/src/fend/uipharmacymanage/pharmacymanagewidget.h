#ifndef PHARMACYMANAGEWIDGET_H
#define PHARMACYMANAGEWIDGET_H

#include <QWidget>
#include "src/fend/uipharmacymanage/sendmedicinebtn.h"
#include "src/fend/uipharmacymanage/medicationlistbtn.h"
namespace Ui {
class PharmacyManageWidget;
}

class PharmacyManageWidget : public QWidget
{
    Q_OBJECT

public:
    explicit PharmacyManageWidget(QWidget *parent = nullptr);
    ~PharmacyManageWidget();
private slots:
    void onClickMedicationList();
    void onClickSendMedicine();

private:
    Ui::PharmacyManageWidget *ui;
    SendMedicineBtn *sendMedicine;
    MedicationListBtn *medicationList;
};

#endif // PHARMACYMANAGEWIDGET_H

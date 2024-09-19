#ifndef UIINPATIENTMANAGE_H
#define UIINPATIENTMANAGE_H

#include <QWidget>
#include "src/fend/uiinpatientmanage/wardviewingbtn.h"
#include "src/fend/uiinpatientmanage/patientsearchbtn.h"
#include "src/fend/uiinpatientmanage/wardaddbtn.h"
#include "src/fend/uiinpatientmanage/registrationbtn.h"
namespace Ui {
class UiInpatientManage;
}

class UiInpatientManage : public QWidget
{
    Q_OBJECT

public:
    explicit UiInpatientManage(QWidget *parent = nullptr);
    ~UiInpatientManage();

private:
    Ui::UiInpatientManage *ui;
    WardViewingBtn *wardView;
    PatientSearchBtn *patientSearch;
    WardAddBtn *wardAdd;
    RegistrationBtn *registration;

private slots:
    void onBtnWardViewClick();
    void onBtnPatientSearchClick();
    void onBtnWardAddClick();
    void onBtnRegistrationClick();
};

#endif // UIINPATIENTMANAGE_H

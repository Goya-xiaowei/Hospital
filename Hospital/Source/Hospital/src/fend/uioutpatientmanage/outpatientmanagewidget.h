#ifndef OUTPATIENTMANAGEWIDGET_H
#define OUTPATIENTMANAGEWIDGET_H

#include "src/fend/uioutpatientmanage/patientregistrationbtn.h"
#include "src/fend/uioutpatientmanage/trancactbtn.h"

#include <QStackedWidget>
#include <QWidget>

namespace Ui {
class OutpatientManageWidget;
}

class OutpatientManageWidget : public QWidget
{
    Q_OBJECT

public:
    explicit OutpatientManageWidget(QWidget *parent = nullptr);
    ~OutpatientManageWidget();
    void showDataSaveSuccess();
    void showDataSaveError();
    void showDataCrateSuccess();
    void showDataCrateError();
private slots:
    void onClickedTransact();
    void onClickedPatientRegistration();

private:
    Ui::OutpatientManageWidget *ui;
    PatientRegistrationBtn *patientRegistration;
    TrancactBtn *trancact;
};

#endif // OUTPATIENTMANAGEWIDGET_H

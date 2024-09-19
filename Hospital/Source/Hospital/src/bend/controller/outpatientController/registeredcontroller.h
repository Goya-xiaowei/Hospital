#ifndef REGISTEREDCONTROLLER_H
#define REGISTEREDCONTROLLER_H

#include <QObject>
#include "src/fend/uioutpatientmanage/patientregistrationbtn.h"
#include "src/bend/dao/outpatientdb.h"
class RegisteredController: public QObject
{
    Q_OBJECT
public:
    RegisteredController(PatientRegistrationBtn *view,OutPatientDb *dbModel);
    void addRegisteredInfo();
    void updateInfo();


private:
    PatientRegistrationBtn *view;
    OutPatientDb *dbModel;
signals:
    void commitFinish();

};

#endif // REGISTEREDCONTROLLER_H

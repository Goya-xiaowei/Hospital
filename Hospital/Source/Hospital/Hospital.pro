QT       += core gui
QT += sql
RC_ICONS = exe.ico
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    src/bend/controller/doctorController/doctorcontroller.cpp \
    src/bend/controller/drugWarehousingController/outwarehousecontroller.cpp \
    src/bend/controller/drugWarehousingController/warehousingcontroller.cpp \
    src/bend/controller/inPatientCOntroller/inpatientcontroller.cpp \
    src/bend/controller/outpatientController/registeredcontroller.cpp \
    src/bend/controller/outpatientController/trancactcontroller.cpp \
    src/bend/controller/systemController/sectionroomcontroller.cpp \
    src/bend/controller/systemController/usercontroller.cpp \
    src/bend/controller/systemController/userinfocontroller.cpp \
    src/bend/dao/doctordb.cpp \
    src/bend/dao/drugwarehousingdb.cpp \
    src/bend/dao/employdb.cpp \
    src/bend/dao/homedb.cpp \
    src/bend/dao/inpatientdb.cpp \
    src/bend/dao/logindb.cpp \
    src/bend/dao/outpatientdb.cpp \
    src/bend/dao/pharmacydb.cpp \
    src/bend/dao/sectionroomdb.cpp \
    src/bend/dao/tolldb.cpp \
    src/bend/dao/userDb.cpp \
    src/bend/db/databasemanage.cpp \
    src/fend/uidoctor/doctorwidget.cpp \
    src/fend/uidrugmanage/drugmanagewidget.cpp \
    src/fend/uidrugmanage/drugoutwarehousebtn.cpp \
    src/fend/uidrugmanage/drugreviewbtn.cpp \
    src/fend/uidrugmanage/drugwarehousebtn.cpp \
    src/fend/uifinancialmanage/businessstatisticsbtn.cpp \
    src/fend/uifinancialmanage/employmanage.cpp \
    src/fend/uifinancialmanage/financialmanagewidget.cpp \
    src/fend/uihome/homepage.cpp \
    src/fend/uiinpatientmanage/patientsearchbtn.cpp \
    src/fend/uiinpatientmanage/registrationbtn.cpp \
    src/fend/uiinpatientmanage/uiinpatientmanage.cpp \
    src/fend/uiinpatientmanage/wardaddbtn.cpp \
    src/fend/uiinpatientmanage/wardviewingbtn.cpp \
    src/fend/uilogin/login.cpp \
    src/fend/uimain/uimain.cpp \
    src/fend/uioutpatientmanage/outpatientmanagewidget.cpp \
    src/fend/uioutpatientmanage/patientregistrationbtn.cpp \
    src/fend/uioutpatientmanage/trancactbtn.cpp \
    src/fend/uipharmacymanage/medicationlistbtn.cpp \
    src/fend/uipharmacymanage/pharmacymanagewidget.cpp \
    src/fend/uipharmacymanage/sendmedicinebtn.cpp \
    src/fend/uisystemmanage/departmentbtn.cpp \
    src/fend/uisystemmanage/employeebtn.cpp \
    src/fend/uisystemmanage/hospitalizationsilpsbtn.cpp \
    src/fend/uisystemmanage/outpatientbtn.cpp \
    src/fend/uisystemmanage/registeredbtn.cpp \
    src/fend/uisystemmanage/sectionroomrevise.cpp \
    src/fend/uisystemmanage/systembtn.cpp \
    src/fend/uisystemmanage/systemmanagewidget.cpp \
    src/fend/uitoll/tollwidget.cpp


HEADERS += \
    src/bend/controller/doctorController/doctorcontroller.h \
    src/bend/controller/drugWarehousingController/outwarehousecontroller.h \
    src/bend/controller/drugWarehousingController/warehousingcontroller.h \
    src/bend/controller/inPatientCOntroller/inpatientcontroller.h \
    src/bend/controller/outpatientController/registeredcontroller.h \
    src/bend/controller/outpatientController/trancactcontroller.h \
    src/bend/controller/systemController/sectionroomcontroller.h \
    src/bend/controller/systemController/usercontroller.h \
    src/bend/controller/systemController/userinfocontroller.h \
    src/bend/dao/doctordb.h \
    src/bend/dao/drugwarehousingdb.h \
    src/bend/dao/employdb.h \
    src/bend/dao/homedb.h \
    src/bend/dao/inpatientdb.h \
    src/bend/dao/logindb.h \
    src/bend/dao/outpatientdb.h \
    src/bend/dao/pharmacydb.h \
    src/bend/dao/sectionroomdb.h \
    src/bend/dao/tolldb.h \
    src/bend/dao/userdb.h \
    src/bend/db/databasemanage.h \
    src/bend/employeeModel/User.h \
    src/bend/model/usermodel.h \
    src/fend/uidoctor/doctorwidget.h \
    src/fend/uidrugmanage/drugmanagewidget.h \
    src/fend/uidrugmanage/drugoutwarehousebtn.h \
    src/fend/uidrugmanage/drugreviewbtn.h \
    src/fend/uidrugmanage/drugwarehousebtn.h \
    src/fend/uifinancialmanage/businessstatisticsbtn.h \
    src/fend/uifinancialmanage/employmanage.h \
    src/fend/uifinancialmanage/financialmanagewidget.h \
    src/fend/uihome/homepage.h \
    src/fend/uiinpatientmanage/patientsearchbtn.h \
    src/fend/uiinpatientmanage/registrationbtn.h \
    src/fend/uiinpatientmanage/uiinpatientmanage.h \
    src/fend/uiinpatientmanage/wardaddbtn.h \
    src/fend/uiinpatientmanage/wardviewingbtn.h \
    src/fend/uilogin/login.h \
    src/fend/uimain/uimain.h \
    src/fend/uioutpatientmanage/outpatientmanagewidget.h \
    src/fend/uioutpatientmanage/patientregistrationbtn.h \
    src/fend/uioutpatientmanage/trancactbtn.h \
    src/fend/uipharmacymanage/medicationlistbtn.h \
    src/fend/uipharmacymanage/pharmacymanagewidget.h \
    src/fend/uipharmacymanage/sendmedicinebtn.h \
    src/fend/uisystemmanage/departmentbtn.h \
    src/fend/uisystemmanage/employeebtn.h \
    src/fend/uisystemmanage/hospitalizationsilpsbtn.h \
    src/fend/uisystemmanage/outpatientbtn.h \
    src/fend/uisystemmanage/registeredbtn.h \
    src/fend/uisystemmanage/sectionroomrevise.h \
    src/fend/uisystemmanage/systembtn.h \
    src/fend/uisystemmanage/systemmanagewidget.h \
    src/fend/uitoll/tollwidget.h


FORMS += \
    src/fend/uidoctor/doctorwidget.ui \
    src/fend/uidrugmanage/drugmanagewidget.ui \
    src/fend/uidrugmanage/drugoutwarehousebtn.ui \
    src/fend/uidrugmanage/drugreviewbtn.ui \
    src/fend/uidrugmanage/drugwarehousebtn.ui \
    src/fend/uifinancialmanage/businessstatisticsbtn.ui \
    src/fend/uifinancialmanage/employmanage.ui \
    src/fend/uifinancialmanage/financialmanagewidget.ui \
    src/fend/uihome/homepage.ui \
    src/fend/uiinpatientmanage/patientsearchbtn.ui \
    src/fend/uiinpatientmanage/registrationbtn.ui \
    src/fend/uiinpatientmanage/uiinpatientmanage.ui \
    src/fend/uiinpatientmanage/wardaddbtn.ui \
    src/fend/uiinpatientmanage/wardviewingbtn.ui \
    src/fend/uilogin/login.ui \
    src/fend/uimain/uimain.ui \
    src/fend/uioutpatientmanage/outpatientmanagewidget.ui \
    src/fend/uioutpatientmanage/patientregistrationbtn.ui \
    src/fend/uioutpatientmanage/trancactbtn.ui \
    src/fend/uipharmacymanage/medicationlistbtn.ui \
    src/fend/uipharmacymanage/pharmacymanagewidget.ui \
    src/fend/uipharmacymanage/sendmedicinebtn.ui \
    src/fend/uisystemmanage/departmentbtn.ui \
    src/fend/uisystemmanage/employeebtn.ui \
    src/fend/uisystemmanage/hospitalizationsilpsbtn.ui \
    src/fend/uisystemmanage/outpatientbtn.ui \
    src/fend/uisystemmanage/registeredbtn.ui \
    src/fend/uisystemmanage/sectionroomrevise.ui \
    src/fend/uisystemmanage/systembtn.ui \
    src/fend/uisystemmanage/systemmanagewidget.ui \
    src/fend/uitoll/tollwidget.ui


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    static/resource.qrc

#ifndef SYSTEMMANAGEWIDGET_H
#define SYSTEMMANAGEWIDGET_H

#include <QWidget>
#include "src/fend/uisystemmanage/outpatientbtn.h"
#include "src/fend/uisystemmanage/hospitalizationsilpsbtn.h"
#include "src/fend/uisystemmanage/registeredbtn.h"
#include <QSqlError>
namespace Ui {
class SystemManageWidget;
}

class SystemManageWidget : public QWidget
{
    Q_OBJECT

public:
    explicit SystemManageWidget(QWidget *parent = nullptr);
    ~SystemManageWidget();

private:
    Ui::SystemManageWidget *ui;

private:
    void onGhdClick();
    void onMzdClick();
    void onZydClick();
    void onDepartment();
    void onSystemClick();
    void onButtonClick(const QString &buttonObjectName);
    void onEmployeeClick();
    // void btnDataBackup();
    void setupActionMap();
private:
    QMap<QString,std::function<void()>> buttonActionMap;


};

#endif // SYSTEMMANAGEWIDGET_H

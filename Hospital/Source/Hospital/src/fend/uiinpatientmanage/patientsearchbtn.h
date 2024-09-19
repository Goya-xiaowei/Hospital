#ifndef PATIENTSEARCHBTN_H
#define PATIENTSEARCHBTN_H

#include <QWidget>
#include <src/bend/dao/inpatientdb.h>
namespace Ui {
class PatientSearchBtn;
}

class PatientSearchBtn : public QWidget
{
    Q_OBJECT

public:
    explicit PatientSearchBtn(QWidget *parent = nullptr);
    ~PatientSearchBtn();

private:
    Ui::PatientSearchBtn *ui;
    void init();
private slots:
    void onBtnFind();
};

#endif // PATIENTSEARCHBTN_H

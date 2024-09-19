#ifndef PATIENTREGISTRATIONBTN_H
#define PATIENTREGISTRATIONBTN_H

#include <QWidget>
#include "src/bend/dao/outpatientdb.h"
#include <QRandomGenerator>
namespace Ui {
class PatientRegistrationBtn;
}

class PatientRegistrationBtn : public QWidget
{
    Q_OBJECT

public:
    explicit PatientRegistrationBtn(QWidget *parent = nullptr);
    ~PatientRegistrationBtn();
    QHash<QString,QString> getUserInfo();
    QHash<QString,QString> getRegisteredInfo();
    QString getIdCard();//获取输入的身份证号
    QString getLineEditCard();
    void commitSuccess();
    void commitError();
private:
    void initInfo();
    void initDoctor(const QString name);
    QString getCard();
    QString getKId();
    QHash<QString,QString> userInfo;
private slots:
    void onEditingFinished();
    void handleEditingFinished(const QString &text);
signals:
    void editingFinished(const QString &text);
private:
    Ui::PatientRegistrationBtn *ui;


};

#endif // PATIENTREGISTRATIONBTN_H

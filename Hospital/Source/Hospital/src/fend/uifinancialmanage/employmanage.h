#ifndef EMPLOYMANAGE_H
#define EMPLOYMANAGE_H

#include <QWidget>

namespace Ui {
class EmployManage;
}

class EmployManage : public QWidget
{
    Q_OBJECT

public:
    explicit EmployManage(QWidget *parent = nullptr);
    ~EmployManage();
    void showEmployInfo();

private slots:
    void btnDeleteSlot();
    void btnUpdateSlot();

private:
    Ui::EmployManage *ui;
    void init();

signals:
    void fnish();
};

#endif // EMPLOYMANAGE_H

#ifndef SENDMEDICINEBTN_H
#define SENDMEDICINEBTN_H

#include <QWidget>

namespace Ui {
class SendMedicineBtn;
}

class SendMedicineBtn : public QWidget
{
    Q_OBJECT

public:
    explicit SendMedicineBtn(QWidget *parent = nullptr);
    ~SendMedicineBtn();

private:
    Ui::SendMedicineBtn *ui;
};

#endif // SENDMEDICINEBTN_H

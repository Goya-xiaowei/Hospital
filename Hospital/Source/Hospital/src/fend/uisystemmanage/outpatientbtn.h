#ifndef OUTPATIENTBTN_H
#define OUTPATIENTBTN_H

#include <QDialog>

namespace Ui {
class OutPatientBtn;
}

class OutPatientBtn : public QDialog
{
    Q_OBJECT

public:
    explicit OutPatientBtn(QWidget *parent = nullptr);
    ~OutPatientBtn();

private:
    Ui::OutPatientBtn *ui;

private:
    void onBtnPreviewClick();
    void onBtnClear();
    void onBtnAdd();
    void onBtnClose();
    void onCheckBoxShowText(bool check);

};

#endif // OUTPATIENTBTN_H

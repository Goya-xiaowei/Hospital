#ifndef HOSPITALIZATIONSILPSBTN_H
#define HOSPITALIZATIONSILPSBTN_H

#include <QDialog>

namespace Ui {
class HospitalizationSilpsBtn;
}

class HospitalizationSilpsBtn : public QDialog
{
    Q_OBJECT

public:
    explicit HospitalizationSilpsBtn(QWidget *parent = nullptr);
    ~HospitalizationSilpsBtn();

private:
    Ui::HospitalizationSilpsBtn *ui;
private:
    void onBtnPreviewClick();
    void onBtnAdd();
    void onBtnClear();
    void onBtnClose();

    void onCheckBoxShowText(bool checked);
};

#endif // HOSPITALIZATIONSILPSBTN_H

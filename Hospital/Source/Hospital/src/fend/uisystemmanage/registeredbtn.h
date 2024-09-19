#ifndef REGISTEREDBTN_H
#define REGISTEREDBTN_H

#include <QDialog>
#include <QCheckBox>
#include <QEvent>
#include <QStringListModel>
namespace Ui {
class RegisteredBtn;
}

class RegisteredBtn : public QDialog
{
    Q_OBJECT

public:
    explicit RegisteredBtn(QDialog *parent = nullptr);
    ~RegisteredBtn();

private slots:
    void onBtnPreviewClick();
    void onBtnAdd();
    void onBtnClear();
    void onBtnClose();
    void onCheckBoxShowText(bool checked);

private:
    Ui::RegisteredBtn *ui;


};

#endif // REGISTEREDBTN_H

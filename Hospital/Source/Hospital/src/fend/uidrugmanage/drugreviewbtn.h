#ifndef DRUGREVIEWBTN_H
#define DRUGREVIEWBTN_H

#include <QWidget>

namespace Ui {
class DrugReviewBtn;
}

class DrugReviewBtn : public QWidget
{
    Q_OBJECT

public:
    explicit DrugReviewBtn(QWidget *parent = nullptr);
    ~DrugReviewBtn();
    void selectDrugShapeInfo();
    void selectDrugNameInfo();
    void selectDrugInfo();
    void selectDrugPrice();
    void init();

private:
    Ui::DrugReviewBtn *ui;
};

#endif // DRUGREVIEWBTN_H

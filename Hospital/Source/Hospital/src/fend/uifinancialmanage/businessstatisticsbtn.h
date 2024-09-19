#ifndef BUSINESSSTATISTICSBTN_H
#define BUSINESSSTATISTICSBTN_H

#include <QWidget>

namespace Ui {
class BusinessStatisticsBtn;
}

class BusinessStatisticsBtn : public QWidget
{
    Q_OBJECT

public:
    explicit BusinessStatisticsBtn(QWidget *parent = nullptr);
    ~BusinessStatisticsBtn();

private:
    Ui::BusinessStatisticsBtn *ui;
};

#endif // BUSINESSSTATISTICSBTN_H

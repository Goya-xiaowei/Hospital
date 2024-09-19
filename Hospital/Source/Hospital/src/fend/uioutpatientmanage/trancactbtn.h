#ifndef TRANCACTBTN_H
#define TRANCACTBTN_H

#include <QWidget>
#include <QHash>
namespace Ui {
class TrancactBtn;
}

class TrancactBtn : public QWidget
{
    Q_OBJECT

public:
    explicit TrancactBtn(QWidget *parent = nullptr);
    ~TrancactBtn();
    QHash<QString,QString> getInfo();
private:
    Ui::TrancactBtn *ui;
    void initInfo();
    QString getIdCard();


    QHash<QString,QString> userInfo;

private slots:
    void onBtnClearClick();
    void onBtnCommitClick();
};

#endif // TRANCACTBTN_H

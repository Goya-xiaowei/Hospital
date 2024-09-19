#ifndef WARDVIEWINGBTN_H
#define WARDVIEWINGBTN_H

#include <QWidget>

namespace Ui {
class WardViewingBtn;
}

class WardViewingBtn : public QWidget
{
    Q_OBJECT

public:
    explicit WardViewingBtn(QWidget *parent = nullptr);
    ~WardViewingBtn();

private:
    Ui::WardViewingBtn *ui;
private:
    void init();
    void loadSerctionWardRoom(const QString &sectionName);
private slots:
    void onWardViewClick(const QModelIndex &index);
};

#endif // WARDVIEWINGBTN_H

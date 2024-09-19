#ifndef WARDADDBTN_H
#define WARDADDBTN_H

#include <QWidget>
#include <QHash>
namespace Ui {
class WardAddBtn;
}

class WardAddBtn : public QWidget
{
    Q_OBJECT

public:
    explicit WardAddBtn(QWidget *parent = nullptr);
    ~WardAddBtn();
    QHash<QString,QString> getInfo();
    void showAddSuccess();
    void showAddError();
    QString getWardRoomNumber();
    int getBedsNUmber();

private:
    QHash<QString,QString> wardInfo;
private:
    Ui::WardAddBtn *ui;
    void init();
    QString loadWardNumber(const int &sectionRoomId,const int &wardInfoCount);
    QString getRoomNumber();

private slots:
    void loadAddress(const QString &add);
    void onComboBoxNumber(const QString &number);
};

#endif // WARDADDBTN_H

#ifndef REGISTRATIONBTN_H
#define REGISTRATIONBTN_H

#include <QWidget>

namespace Ui
{
class RegistrationBtn;
}

class RegistrationBtn : public QWidget
{
    Q_OBJECT

public:
    explicit RegistrationBtn(QWidget *parent = nullptr);
    ~RegistrationBtn();

private:
    Ui::RegistrationBtn *ui;
    void init();
    void onTreeViewClick(const QModelIndex &index);
    void onSectionTypeClick(const QString &sectionTypeName);
    void onWardRoomIdClick(const QString &wardRoomId);
    void onBtnAddClick();
    void loadRoomBedIdlist();
    void onBtnClearClick();
signals:
    void updateFinish();
    void treeViewClickFinish();
};

#endif  // REGISTRATIONBTN_H

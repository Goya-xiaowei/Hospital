#ifndef SYSTEMBTN_H
#define SYSTEMBTN_H

#include <QCheckBox>
#include <QDialog>
#include <QItemSelection>

namespace Ui {
class SystemBtn;
}

class SystemBtn : public QDialog
{
    Q_OBJECT

public:
    explicit SystemBtn(QWidget *parent = nullptr);
    ~SystemBtn();
    QString getLineEditNameText() const;
    QString getCheckedPermissionsText() const;
    QString getLineEditUserName() const;
    void showSaveSuccessMessage();
    void showSaveErrorMessage();
    void showSaveIsNull();

private:
    Ui::SystemBtn *ui;
signals:
    void onAll();

private:
    QHash<QCheckBox*, QList<QCheckBox*>> checkBoxMap;
    void initMap();
    void onSaveClick();
    void onBtnAllCheckBox();
    void onBtonSignal();
    void onBtonNoSiganl(QCheckBox* checkBox);
    void initTableView();
    void initTreeViewUser();
    void onUserTypeSelectionChanged(const QItemSelection &selected, const QItemSelection &deselected);
    void onUserSelectionChanged(const QItemSelection &selected, const QItemSelection &deselected);
private:
    QString lastSelectedView;

signals:
    void saveTypeSiganl();
    void saveUserTypeSignal();
    void saveUserSignal();

};

#endif // SYSTEMBTN_H

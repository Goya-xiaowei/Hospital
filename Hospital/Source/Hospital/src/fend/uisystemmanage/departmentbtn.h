#ifndef DEPARTMENTBTN_H
#define DEPARTMENTBTN_H

#include <QDialog>

#include <src/bend/dao/userdb.h>
#include "src/fend/uisystemmanage/sectionroomrevise.h"
namespace Ui {
class DepartmentBtn;
}

class DepartmentBtn : public QDialog
{
    Q_OBJECT

public:
    explicit DepartmentBtn(QWidget *parent = nullptr);
    ~DepartmentBtn();
    void upCreateSaveSucceed();
    void showSaveErrorMessage();
    void showDeleteSuccess();
    void showDeleteError();

    QString getSectionTypeText();
    QString getsectionSonTypeText();

    QHash<QString,QString> getTextInfo();
private:
    Ui::DepartmentBtn *ui;
    void initTreeView();

    UserModel model;
    QStandardItemModel *itemmodel = nullptr;
private slots:
    void onBtnClearClick();
    void onBtnReviseClick();
    void onBtnAddClick();

    void onBtnDelectClick();






};

#endif // DEPARTMENTBTN_H

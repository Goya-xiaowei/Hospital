#ifndef SECTIONROOMREVISE_H
#define SECTIONROOMREVISE_H

#include <QDialog>

#include <src/bend/dao/userdb.h>

namespace Ui {
class SectionRoomRevise;
}

class SectionRoomRevise : public QDialog
{
    Q_OBJECT

public:
    explicit SectionRoomRevise(QWidget *parent = nullptr);
    ~SectionRoomRevise();
    void showSuccessMessageBox();
    void showErrorMessageBox();

private:
    Ui::SectionRoomRevise *ui;
private slots:
    void initTreeView();


signals:
    void finishSignal();
private:
    QString oldName;

};

#endif // SECTIONROOMREVISE_H

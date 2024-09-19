#ifndef DOCTORWIDGET_H
#define DOCTORWIDGET_H

#include <QWidget>
#include <QStandardItemModel>
#include <qsortfilterproxymodel.h>

namespace Ui {
class DoctorWidget;
}

class DoctorWidget : public QWidget
{
    Q_OBJECT

public:
    explicit DoctorWidget(QWidget *parent = nullptr);
    ~DoctorWidget();


private:
    Ui::DoctorWidget *ui;
    QHash<QString,QString> userInfoMap;
    void giveInfo(QHash<QString,QString> info);
    void init();
    void initDrugInfo(const QModelIndex &index);
    void getChineseInfo(const QHash<QString,QString> &info);
    void getWesternInfo(const QHash<QString,QString> &info);
    QString loadChineseChufangId();
    QString loadWesternChufangId();
    void loadChineseFindDrug();
    void loadWesterFindDrug();
    bool itemExists(QStandardItemModel *model, const QString &text);
    void loadChineseDrugChoose(const QModelIndex &index);
    void loadWesternDrugChoose(const QModelIndex &index);
    QHash<QString,QString> getkaiyaoInfo();
    void saveKaiyaoInfo();
    void saveKaiyaoWesternInfo();
    void onBtnChineseClear();
    void onBtnWesternClear();
private:
    QHash<QString,QString> kaiyaoInfo;
    void updateInfo();

signals:
    void sendIdCardSignals(const QModelIndex &index);
    void sendVisitDoctorFinish();

};

#endif // DOCTORWIDGET_H

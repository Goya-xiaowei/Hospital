#ifndef TOLLWIDGET_H
#define TOLLWIDGET_H

#include <QWidget>

namespace Ui {
class TollWidget;
}

class TollWidget : public QWidget
{
    Q_OBJECT

public:
    explicit TollWidget(QWidget *parent = nullptr);
    ~TollWidget();

private:
    Ui::TollWidget *ui;
    void onComboBoxLeftCurrentTextChanged(const QString &pageText);
    void init();
    void page(int index);
    QStringList getAllPage();
private:
    int currentPageLeft = 0;
    int currentPageRight = 0;
private slots:
    void onBtnLeftPrevious();
    void onBtnLeftNext();
    void onBtnLeftHome();
    void onBtnLeftEnd();

    void onBtnRightPrevious();
    void onBtnRightNext();
    void onBtnRightHome();
    void onBtnRightEnd();
    void loadTreeViewRight(const QModelIndex &index);
    void computeChange();
    void onBtnCheckout();

};

#endif // TOLLWIDGET_H

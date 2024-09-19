#ifndef HOMEPAGE_H
#define HOMEPAGE_H

#include <QHash>
#include <QWidget>
#include "src/bend/dao/homedb.h"
namespace Ui {
class HomePage;
}

class HomePage : public QWidget
{
    Q_OBJECT

public:
    explicit HomePage(QWidget *parent = nullptr);
    ~HomePage();
    void loadInfo(const QString &username);

private:
    Ui::HomePage *ui;
    QHash<QString,QString> userinfo;

};

#endif // HOMEPAGE_H

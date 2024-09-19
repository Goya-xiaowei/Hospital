#ifndef LINEEDITTOLL_H
#define LINEEDITTOLL_H

#include <QObject>
#include <QLineEdit>
class LineEditToll:public QLineEdit
{
public:
    LineEditToll();
signals:
    void finish();
};

#endif // LINEEDITTOLL_H

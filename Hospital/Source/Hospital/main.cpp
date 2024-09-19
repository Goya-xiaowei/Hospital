#include "src/fend/uimain/uimain.h"
#include "src/fend/uilogin/login.h"
#include <QApplication>
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFile path(":/qss/style.qss");
    path.open(QIODevice::ReadOnly);
    QString style = path.readAll();
    a.setStyleSheet(style);
    path.close();
    // UiMain w;
    Login m;
    m.show();
    // w.show();
    return a.exec();
}

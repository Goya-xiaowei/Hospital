#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include "src/fend/uimain/uimain.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Login; }
QT_END_NAMESPACE

class Login : public QDialog
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();
    UiMain *mainWindow;

private:
    Ui::Login *ui;
signals:
    void loginSuccess(const QString &name);
private slots:
    void onBtnLogin();
    void showLogin();
};

#endif // LOGIN_H

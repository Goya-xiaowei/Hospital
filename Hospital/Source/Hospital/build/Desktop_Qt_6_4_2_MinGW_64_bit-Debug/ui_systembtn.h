/********************************************************************************
** Form generated from reading UI file 'systembtn.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYSTEMBTN_H
#define UI_SYSTEMBTN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SystemBtn
{
public:

    void setupUi(QWidget *SystemBtn)
    {
        if (SystemBtn->objectName().isEmpty())
            SystemBtn->setObjectName("SystemBtn");
        SystemBtn->resize(400, 300);

        retranslateUi(SystemBtn);

        QMetaObject::connectSlotsByName(SystemBtn);
    } // setupUi

    void retranslateUi(QWidget *SystemBtn)
    {
        SystemBtn->setWindowTitle(QCoreApplication::translate("SystemBtn", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SystemBtn: public Ui_SystemBtn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYSTEMBTN_H

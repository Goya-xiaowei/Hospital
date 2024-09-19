/********************************************************************************
** Form generated from reading UI file 'businessstatisticsbtn.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUSINESSSTATISTICSBTN_H
#define UI_BUSINESSSTATISTICSBTN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BusinessStatisticsBtn
{
public:

    void setupUi(QWidget *BusinessStatisticsBtn)
    {
        if (BusinessStatisticsBtn->objectName().isEmpty())
            BusinessStatisticsBtn->setObjectName(QString::fromUtf8("BusinessStatisticsBtn"));
        BusinessStatisticsBtn->resize(662, 470);
        BusinessStatisticsBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        retranslateUi(BusinessStatisticsBtn);

        QMetaObject::connectSlotsByName(BusinessStatisticsBtn);
    } // setupUi

    void retranslateUi(QWidget *BusinessStatisticsBtn)
    {
        BusinessStatisticsBtn->setWindowTitle(QCoreApplication::translate("BusinessStatisticsBtn", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BusinessStatisticsBtn: public Ui_BusinessStatisticsBtn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUSINESSSTATISTICSBTN_H

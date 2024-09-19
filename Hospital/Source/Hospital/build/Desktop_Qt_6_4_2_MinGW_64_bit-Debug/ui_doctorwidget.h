/********************************************************************************
** Form generated from reading UI file 'doctorwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCTORWIDGET_H
#define UI_DOCTORWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DoctorWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QWidget *tab;
    QWidget *widget_2;
    QWidget *tab_2;
    QWidget *widget_3;
    QWidget *tab_4;
    QWidget *widget_4;

    void setupUi(QWidget *DoctorWidget)
    {
        if (DoctorWidget->objectName().isEmpty())
            DoctorWidget->setObjectName("DoctorWidget");
        DoctorWidget->resize(400, 300);
        verticalLayout_2 = new QVBoxLayout(DoctorWidget);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(DoctorWidget);
        tabWidget->setObjectName("tabWidget");
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        verticalLayout = new QVBoxLayout(tab_3);
        verticalLayout->setObjectName("verticalLayout");
        widget = new QWidget(tab_3);
        widget->setObjectName("widget");

        verticalLayout->addWidget(widget);

        tabWidget->addTab(tab_3, QString());
        tab = new QWidget();
        tab->setObjectName("tab");
        widget_2 = new QWidget(tab);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(0, 0, 431, 301));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        widget_3 = new QWidget(tab_2);
        widget_3->setObjectName("widget_3");
        widget_3->setGeometry(QRect(0, 0, 431, 301));
        tabWidget->addTab(tab_2, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        widget_4 = new QWidget(tab_4);
        widget_4->setObjectName("widget_4");
        widget_4->setGeometry(QRect(0, 0, 431, 301));
        tabWidget->addTab(tab_4, QString());

        verticalLayout_2->addWidget(tabWidget);


        retranslateUi(DoctorWidget);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DoctorWidget);
    } // setupUi

    void retranslateUi(QWidget *DoctorWidget)
    {
        DoctorWidget->setWindowTitle(QCoreApplication::translate("DoctorWidget", "Form", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("DoctorWidget", "\351\200\211\347\227\205\344\272\272", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("DoctorWidget", "\345\206\231\347\227\205\344\276\213", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("DoctorWidget", "\345\274\200\344\270\255\350\215\257", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("DoctorWidget", "\345\274\200\350\245\277\350\215\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DoctorWidget: public Ui_DoctorWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCTORWIDGET_H

/********************************************************************************
** Form generated from reading UI file 'drugoutwarehousebtn.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRUGOUTWAREHOUSEBTN_H
#define UI_DRUGOUTWAREHOUSEBTN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DrugOutWarehouseBtn
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer;
    QTableWidget *tableWidget;

    void setupUi(QWidget *DrugOutWarehouseBtn)
    {
        if (DrugOutWarehouseBtn->objectName().isEmpty())
            DrugOutWarehouseBtn->setObjectName("DrugOutWarehouseBtn");
        DrugOutWarehouseBtn->resize(791, 527);
        verticalLayout = new QVBoxLayout(DrugOutWarehouseBtn);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(DrugOutWarehouseBtn);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(DrugOutWarehouseBtn);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout->addWidget(lineEdit);

        pushButton = new QPushButton(DrugOutWarehouseBtn);
        pushButton->setObjectName("pushButton");

        horizontalLayout->addWidget(pushButton);


        horizontalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        pushButton_3 = new QPushButton(DrugOutWarehouseBtn);
        pushButton_3->setObjectName("pushButton_3");

        horizontalLayout_3->addWidget(pushButton_3);


        horizontalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pushButton_2 = new QPushButton(DrugOutWarehouseBtn);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout_2->addWidget(pushButton_2);


        horizontalLayout_4->addLayout(horizontalLayout_2);


        verticalLayout->addLayout(horizontalLayout_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        tableWidget = new QTableWidget(DrugOutWarehouseBtn);
        tableWidget->setObjectName("tableWidget");

        verticalLayout->addWidget(tableWidget);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 8);

        retranslateUi(DrugOutWarehouseBtn);

        QMetaObject::connectSlotsByName(DrugOutWarehouseBtn);
    } // setupUi

    void retranslateUi(QWidget *DrugOutWarehouseBtn)
    {
        DrugOutWarehouseBtn->setWindowTitle(QCoreApplication::translate("DrugOutWarehouseBtn", "Form", nullptr));
        label->setText(QCoreApplication::translate("DrugOutWarehouseBtn", "\350\215\257\345\223\201\345\220\215\347\247\260", nullptr));
        pushButton->setText(QCoreApplication::translate("DrugOutWarehouseBtn", "\346\237\245\346\211\276", nullptr));
        pushButton_3->setText(QCoreApplication::translate("DrugOutWarehouseBtn", "\350\215\257\345\223\201\345\207\272\345\272\223", nullptr));
        pushButton_2->setText(QCoreApplication::translate("DrugOutWarehouseBtn", "\346\270\205\351\231\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DrugOutWarehouseBtn: public Ui_DrugOutWarehouseBtn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRUGOUTWAREHOUSEBTN_H

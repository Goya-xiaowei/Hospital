/********************************************************************************
** Form generated from reading UI file 'drugoutwarehousebtn.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
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
#include <QtWidgets/QTreeView>
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
    QLineEdit *lineEditDrugName;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnFind;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btnOuthouse;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnClear;
    QSpacerItem *verticalSpacer;
    QTreeView *treeView;

    void setupUi(QWidget *DrugOutWarehouseBtn)
    {
        if (DrugOutWarehouseBtn->objectName().isEmpty())
            DrugOutWarehouseBtn->setObjectName(QString::fromUtf8("DrugOutWarehouseBtn"));
        DrugOutWarehouseBtn->resize(791, 527);
        DrugOutWarehouseBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        verticalLayout = new QVBoxLayout(DrugOutWarehouseBtn);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(DrugOutWarehouseBtn);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEditDrugName = new QLineEdit(DrugOutWarehouseBtn);
        lineEditDrugName->setObjectName(QString::fromUtf8("lineEditDrugName"));

        horizontalLayout->addWidget(lineEditDrugName);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnFind = new QPushButton(DrugOutWarehouseBtn);
        btnFind->setObjectName(QString::fromUtf8("btnFind"));

        horizontalLayout->addWidget(btnFind);


        horizontalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        btnOuthouse = new QPushButton(DrugOutWarehouseBtn);
        btnOuthouse->setObjectName(QString::fromUtf8("btnOuthouse"));

        horizontalLayout_3->addWidget(btnOuthouse);


        horizontalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        btnClear = new QPushButton(DrugOutWarehouseBtn);
        btnClear->setObjectName(QString::fromUtf8("btnClear"));

        horizontalLayout_2->addWidget(btnClear);


        horizontalLayout_4->addLayout(horizontalLayout_2);


        verticalLayout->addLayout(horizontalLayout_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        treeView = new QTreeView(DrugOutWarehouseBtn);
        treeView->setObjectName(QString::fromUtf8("treeView"));

        verticalLayout->addWidget(treeView);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 6);

        retranslateUi(DrugOutWarehouseBtn);

        QMetaObject::connectSlotsByName(DrugOutWarehouseBtn);
    } // setupUi

    void retranslateUi(QWidget *DrugOutWarehouseBtn)
    {
        DrugOutWarehouseBtn->setWindowTitle(QCoreApplication::translate("DrugOutWarehouseBtn", "Form", nullptr));
        label->setText(QCoreApplication::translate("DrugOutWarehouseBtn", "\350\215\257\345\223\201\345\220\215\347\247\260", nullptr));
        btnFind->setText(QCoreApplication::translate("DrugOutWarehouseBtn", "\346\237\245\346\211\276", nullptr));
        btnOuthouse->setText(QCoreApplication::translate("DrugOutWarehouseBtn", "\350\215\257\345\223\201\345\207\272\345\272\223", nullptr));
        btnClear->setText(QCoreApplication::translate("DrugOutWarehouseBtn", "\346\270\205\351\231\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DrugOutWarehouseBtn: public Ui_DrugOutWarehouseBtn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRUGOUTWAREHOUSEBTN_H

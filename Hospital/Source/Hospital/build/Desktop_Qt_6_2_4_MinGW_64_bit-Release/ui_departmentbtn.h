/********************************************************************************
** Form generated from reading UI file 'departmentbtn.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEPARTMENTBTN_H
#define UI_DEPARTMENTBTN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
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

class Ui_DepartmentBtn
{
public:
    QHBoxLayout *horizontalLayout_9;
    QTreeView *treeView;
    QSpacerItem *horizontalSpacer_8;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_3;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *labelSectionName;
    QLineEdit *lineEditSectionName;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelSectionAddress;
    QLineEdit *lineEditSectionAddress;
    QHBoxLayout *horizontalLayout_7;
    QLabel *labelSectionMoney;
    QLineEdit *lineEditSectionMoney;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *btnCreate;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *btnRevise;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *btnClear;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QComboBox *comboBoxCategory;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_7;
    QLineEdit *lineEditSonName;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btnAdd;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *btnDelete;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *btnClose;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_9;

    void setupUi(QWidget *DepartmentBtn)
    {
        if (DepartmentBtn->objectName().isEmpty())
            DepartmentBtn->setObjectName(QString::fromUtf8("DepartmentBtn"));
        DepartmentBtn->resize(666, 603);
        horizontalLayout_9 = new QHBoxLayout(DepartmentBtn);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        treeView = new QTreeView(DepartmentBtn);
        treeView->setObjectName(QString::fromUtf8("treeView"));

        horizontalLayout_9->addWidget(treeView);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_8);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        label = new QLabel(DepartmentBtn);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(120, 50));

        verticalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelSectionName = new QLabel(DepartmentBtn);
        labelSectionName->setObjectName(QString::fromUtf8("labelSectionName"));
        labelSectionName->setMinimumSize(QSize(100, 50));

        horizontalLayout->addWidget(labelSectionName);

        lineEditSectionName = new QLineEdit(DepartmentBtn);
        lineEditSectionName->setObjectName(QString::fromUtf8("lineEditSectionName"));

        horizontalLayout->addWidget(lineEditSectionName);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        labelSectionAddress = new QLabel(DepartmentBtn);
        labelSectionAddress->setObjectName(QString::fromUtf8("labelSectionAddress"));
        labelSectionAddress->setMinimumSize(QSize(100, 50));

        horizontalLayout_2->addWidget(labelSectionAddress);

        lineEditSectionAddress = new QLineEdit(DepartmentBtn);
        lineEditSectionAddress->setObjectName(QString::fromUtf8("lineEditSectionAddress"));

        horizontalLayout_2->addWidget(lineEditSectionAddress);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        labelSectionMoney = new QLabel(DepartmentBtn);
        labelSectionMoney->setObjectName(QString::fromUtf8("labelSectionMoney"));
        labelSectionMoney->setMinimumSize(QSize(100, 50));

        horizontalLayout_7->addWidget(labelSectionMoney);

        lineEditSectionMoney = new QLineEdit(DepartmentBtn);
        lineEditSectionMoney->setObjectName(QString::fromUtf8("lineEditSectionMoney"));

        horizontalLayout_7->addWidget(lineEditSectionMoney);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        btnCreate = new QPushButton(DepartmentBtn);
        btnCreate->setObjectName(QString::fromUtf8("btnCreate"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnCreate->sizePolicy().hasHeightForWidth());
        btnCreate->setSizePolicy(sizePolicy);
        btnCreate->setMinimumSize(QSize(100, 0));

        horizontalLayout_8->addWidget(btnCreate);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_4);

        btnRevise = new QPushButton(DepartmentBtn);
        btnRevise->setObjectName(QString::fromUtf8("btnRevise"));
        sizePolicy.setHeightForWidth(btnRevise->sizePolicy().hasHeightForWidth());
        btnRevise->setSizePolicy(sizePolicy);
        btnRevise->setMinimumSize(QSize(100, 0));

        horizontalLayout_8->addWidget(btnRevise);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_5);

        btnClear = new QPushButton(DepartmentBtn);
        btnClear->setObjectName(QString::fromUtf8("btnClear"));
        sizePolicy.setHeightForWidth(btnClear->sizePolicy().hasHeightForWidth());
        btnClear->setSizePolicy(sizePolicy);
        btnClear->setMinimumSize(QSize(100, 0));

        horizontalLayout_8->addWidget(btnClear);


        verticalLayout->addLayout(horizontalLayout_8);


        verticalLayout_2->addLayout(verticalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_5 = new QLabel(DepartmentBtn);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(0, 50));

        horizontalLayout_6->addWidget(label_5);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);


        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_6 = new QLabel(DepartmentBtn);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(100, 50));

        horizontalLayout_4->addWidget(label_6);

        comboBoxCategory = new QComboBox(DepartmentBtn);
        comboBoxCategory->setObjectName(QString::fromUtf8("comboBoxCategory"));

        horizontalLayout_4->addWidget(comboBoxCategory);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_7 = new QLabel(DepartmentBtn);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMinimumSize(QSize(100, 50));

        horizontalLayout_5->addWidget(label_7);

        lineEditSonName = new QLineEdit(DepartmentBtn);
        lineEditSonName->setObjectName(QString::fromUtf8("lineEditSonName"));

        horizontalLayout_5->addWidget(lineEditSonName);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        btnAdd = new QPushButton(DepartmentBtn);
        btnAdd->setObjectName(QString::fromUtf8("btnAdd"));
        sizePolicy.setHeightForWidth(btnAdd->sizePolicy().hasHeightForWidth());
        btnAdd->setSizePolicy(sizePolicy);
        btnAdd->setMinimumSize(QSize(100, 0));

        horizontalLayout_3->addWidget(btnAdd);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        btnDelete = new QPushButton(DepartmentBtn);
        btnDelete->setObjectName(QString::fromUtf8("btnDelete"));
        sizePolicy.setHeightForWidth(btnDelete->sizePolicy().hasHeightForWidth());
        btnDelete->setSizePolicy(sizePolicy);
        btnDelete->setMinimumSize(QSize(100, 0));

        horizontalLayout_3->addWidget(btnDelete);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);

        btnClose = new QPushButton(DepartmentBtn);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));
        sizePolicy.setHeightForWidth(btnClose->sizePolicy().hasHeightForWidth());
        btnClose->setSizePolicy(sizePolicy);
        btnClose->setMinimumSize(QSize(100, 0));

        horizontalLayout_3->addWidget(btnClose);


        verticalLayout_3->addLayout(horizontalLayout_3);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_4);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);


        verticalLayout_2->addLayout(verticalLayout_3);


        horizontalLayout_9->addLayout(verticalLayout_2);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_9);


        retranslateUi(DepartmentBtn);

        QMetaObject::connectSlotsByName(DepartmentBtn);
    } // setupUi

    void retranslateUi(QWidget *DepartmentBtn)
    {
        DepartmentBtn->setWindowTitle(QCoreApplication::translate("DepartmentBtn", "Form", nullptr));
        label->setText(QCoreApplication::translate("DepartmentBtn", "\347\247\221\345\210\253", nullptr));
        labelSectionName->setText(QCoreApplication::translate("DepartmentBtn", "\347\247\221\345\210\253\345\220\215\347\247\260", nullptr));
        labelSectionAddress->setText(QCoreApplication::translate("DepartmentBtn", "\347\247\221\345\256\244\345\234\260\345\235\200", nullptr));
        labelSectionMoney->setText(QCoreApplication::translate("DepartmentBtn", "\346\214\202\345\217\267\350\264\271", nullptr));
        btnCreate->setText(QCoreApplication::translate("DepartmentBtn", "\346\267\273\345\212\240", nullptr));
        btnRevise->setText(QCoreApplication::translate("DepartmentBtn", "\344\277\256\346\224\271\347\247\221\345\256\244", nullptr));
        btnClear->setText(QCoreApplication::translate("DepartmentBtn", "\346\270\205\351\231\244", nullptr));
        label_5->setText(QCoreApplication::translate("DepartmentBtn", "\347\227\205\344\276\213", nullptr));
        label_6->setText(QCoreApplication::translate("DepartmentBtn", "\347\247\221\345\210\253", nullptr));
        comboBoxCategory->setCurrentText(QString());
        label_7->setText(QCoreApplication::translate("DepartmentBtn", "\345\220\215\347\247\260", nullptr));
        btnAdd->setText(QCoreApplication::translate("DepartmentBtn", "\346\267\273\345\212\240", nullptr));
        btnDelete->setText(QCoreApplication::translate("DepartmentBtn", "\345\210\240\351\231\244", nullptr));
        btnClose->setText(QCoreApplication::translate("DepartmentBtn", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DepartmentBtn: public Ui_DepartmentBtn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEPARTMENTBTN_H

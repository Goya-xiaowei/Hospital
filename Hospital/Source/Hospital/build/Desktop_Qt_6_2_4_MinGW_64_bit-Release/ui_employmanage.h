/********************************************************************************
** Form generated from reading UI file 'employmanage.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPLOYMANAGE_H
#define UI_EMPLOYMANAGE_H

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

class Ui_EmployManage
{
public:
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_7;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEditName;
    QLineEdit *lineEditEmployName;
    QComboBox *comboBoxType;
    QComboBox *comboBoxSectionRoom;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label_8;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *lineEditPhone;
    QLineEdit *lineEditAddress;
    QComboBox *comboBoxSex;
    QLineEdit *lineEditMoney;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnUpdate;
    QPushButton *btnDelete;
    QSpacerItem *horizontalSpacer_4;
    QTreeView *treeView;

    void setupUi(QWidget *EmployManage)
    {
        if (EmployManage->objectName().isEmpty())
            EmployManage->setObjectName(QString::fromUtf8("EmployManage"));
        EmployManage->resize(751, 626);
        EmployManage->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_6 = new QVBoxLayout(EmployManage);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(EmployManage);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(EmployManage);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(EmployManage);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        label_7 = new QLabel(EmployManage);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout->addWidget(label_7);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lineEditName = new QLineEdit(EmployManage);
        lineEditName->setObjectName(QString::fromUtf8("lineEditName"));
        lineEditName->setEnabled(true);

        verticalLayout_2->addWidget(lineEditName);

        lineEditEmployName = new QLineEdit(EmployManage);
        lineEditEmployName->setObjectName(QString::fromUtf8("lineEditEmployName"));

        verticalLayout_2->addWidget(lineEditEmployName);

        comboBoxType = new QComboBox(EmployManage);
        comboBoxType->setObjectName(QString::fromUtf8("comboBoxType"));

        verticalLayout_2->addWidget(comboBoxType);

        comboBoxSectionRoom = new QComboBox(EmployManage);
        comboBoxSectionRoom->setObjectName(QString::fromUtf8("comboBoxSectionRoom"));

        verticalLayout_2->addWidget(comboBoxSectionRoom);


        horizontalLayout_2->addLayout(verticalLayout_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_4 = new QLabel(EmployManage);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_3->addWidget(label_4);

        label_6 = new QLabel(EmployManage);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_3->addWidget(label_6);

        label_5 = new QLabel(EmployManage);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_3->addWidget(label_5);

        label_8 = new QLabel(EmployManage);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout_3->addWidget(label_8);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        lineEditPhone = new QLineEdit(EmployManage);
        lineEditPhone->setObjectName(QString::fromUtf8("lineEditPhone"));

        verticalLayout_4->addWidget(lineEditPhone);

        lineEditAddress = new QLineEdit(EmployManage);
        lineEditAddress->setObjectName(QString::fromUtf8("lineEditAddress"));

        verticalLayout_4->addWidget(lineEditAddress);

        comboBoxSex = new QComboBox(EmployManage);
        comboBoxSex->setObjectName(QString::fromUtf8("comboBoxSex"));

        verticalLayout_4->addWidget(comboBoxSex);

        lineEditMoney = new QLineEdit(EmployManage);
        lineEditMoney->setObjectName(QString::fromUtf8("lineEditMoney"));

        verticalLayout_4->addWidget(lineEditMoney);


        horizontalLayout_2->addLayout(verticalLayout_4);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        verticalLayout_5->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnUpdate = new QPushButton(EmployManage);
        btnUpdate->setObjectName(QString::fromUtf8("btnUpdate"));

        horizontalLayout->addWidget(btnUpdate);

        btnDelete = new QPushButton(EmployManage);
        btnDelete->setObjectName(QString::fromUtf8("btnDelete"));

        horizontalLayout->addWidget(btnDelete);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        verticalLayout_5->addLayout(horizontalLayout);


        verticalLayout_6->addLayout(verticalLayout_5);

        treeView = new QTreeView(EmployManage);
        treeView->setObjectName(QString::fromUtf8("treeView"));

        verticalLayout_6->addWidget(treeView);

        verticalLayout_6->setStretch(0, 1);
        verticalLayout_6->setStretch(1, 8);

        retranslateUi(EmployManage);

        QMetaObject::connectSlotsByName(EmployManage);
    } // setupUi

    void retranslateUi(QWidget *EmployManage)
    {
        EmployManage->setWindowTitle(QCoreApplication::translate("EmployManage", "Form", nullptr));
        label->setText(QCoreApplication::translate("EmployManage", "\347\224\250\346\210\267\345\220\215:", nullptr));
        label_2->setText(QCoreApplication::translate("EmployManage", "\345\221\230\345\267\245\345\247\223\345\220\215\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("EmployManage", "\347\261\273\345\236\213\357\274\232", nullptr));
        label_7->setText(QCoreApplication::translate("EmployManage", "\347\247\221\345\256\244\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("EmployManage", "\350\201\224\347\263\273\347\224\265\350\257\235\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("EmployManage", "\345\234\260\345\235\200\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("EmployManage", "\346\200\247\345\210\253:", nullptr));
        label_8->setText(QCoreApplication::translate("EmployManage", "\346\214\202\345\217\267\350\264\271\357\274\232", nullptr));
        lineEditPhone->setText(QString());
        lineEditAddress->setText(QString());
        lineEditMoney->setText(QString());
        btnUpdate->setText(QCoreApplication::translate("EmployManage", "\344\277\256\346\224\271", nullptr));
        btnDelete->setText(QCoreApplication::translate("EmployManage", "\345\210\240\351\231\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EmployManage: public Ui_EmployManage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPLOYMANAGE_H

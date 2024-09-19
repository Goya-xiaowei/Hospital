/********************************************************************************
** Form generated from reading UI file 'medicationlistbtn.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEDICATIONLISTBTN_H
#define UI_MEDICATIONLISTBTN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MedicationListBtn
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QHBoxLayout *horizontalLayout_5;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QListWidget *listWidget_2;

    void setupUi(QWidget *MedicationListBtn)
    {
        if (MedicationListBtn->objectName().isEmpty())
            MedicationListBtn->setObjectName("MedicationListBtn");
        MedicationListBtn->resize(904, 551);
        verticalLayout_3 = new QVBoxLayout(MedicationListBtn);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(MedicationListBtn);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(MedicationListBtn);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout->addWidget(lineEdit);


        horizontalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(MedicationListBtn);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        lineEdit_2 = new QLineEdit(MedicationListBtn);
        lineEdit_2->setObjectName("lineEdit_2");

        horizontalLayout_2->addWidget(lineEdit_2);


        horizontalLayout_4->addLayout(horizontalLayout_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        pushButton = new QPushButton(MedicationListBtn);
        pushButton->setObjectName("pushButton");

        horizontalLayout_3->addWidget(pushButton);

        pushButton_2 = new QPushButton(MedicationListBtn);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout_3->addWidget(pushButton_2);


        horizontalLayout_4->addLayout(horizontalLayout_3);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        groupBox = new QGroupBox(MedicationListBtn);
        groupBox->setObjectName("groupBox");
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(5, 12, 5, 5);
        listWidget = new QListWidget(groupBox);
        listWidget->setObjectName("listWidget");

        verticalLayout->addWidget(listWidget);


        horizontalLayout_5->addWidget(groupBox);

        groupBox_2 = new QGroupBox(MedicationListBtn);
        groupBox_2->setObjectName("groupBox_2");
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(5, 12, 5, 5);
        listWidget_2 = new QListWidget(groupBox_2);
        listWidget_2->setObjectName("listWidget_2");

        verticalLayout_2->addWidget(listWidget_2);


        horizontalLayout_5->addWidget(groupBox_2);


        verticalLayout_3->addLayout(horizontalLayout_5);

        verticalLayout_3->setStretch(0, 1);
        verticalLayout_3->setStretch(1, 8);

        retranslateUi(MedicationListBtn);

        QMetaObject::connectSlotsByName(MedicationListBtn);
    } // setupUi

    void retranslateUi(QWidget *MedicationListBtn)
    {
        MedicationListBtn->setWindowTitle(QCoreApplication::translate("MedicationListBtn", "Form", nullptr));
        label->setText(QCoreApplication::translate("MedicationListBtn", "\346\214\202\345\217\267\347\274\226\345\217\267\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("MedicationListBtn", "\345\247\223\345\220\215\357\274\232", nullptr));
        pushButton->setText(QCoreApplication::translate("MedicationListBtn", "\346\211\223\345\215\225", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MedicationListBtn", "\345\217\221\350\215\257", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MedicationListBtn", "\346\234\252\346\211\223\345\215\225", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MedicationListBtn", "\345\267\262\346\211\223\345\215\225\346\234\252\345\217\221\350\215\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MedicationListBtn: public Ui_MedicationListBtn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEDICATIONLISTBTN_H

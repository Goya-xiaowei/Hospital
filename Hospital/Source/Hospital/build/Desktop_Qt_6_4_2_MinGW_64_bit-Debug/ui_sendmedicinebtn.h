/********************************************************************************
** Form generated from reading UI file 'sendmedicinebtn.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENDMEDICINEBTN_H
#define UI_SENDMEDICINEBTN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SendMedicineBtn
{
public:
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QSpacerItem *verticalSpacer_2;
    QListWidget *listWidget;

    void setupUi(QWidget *SendMedicineBtn)
    {
        if (SendMedicineBtn->objectName().isEmpty())
            SendMedicineBtn->setObjectName("SendMedicineBtn");
        SendMedicineBtn->resize(889, 528);
        horizontalLayout_2 = new QHBoxLayout(SendMedicineBtn);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setSizeConstraint(QLayout::SetFixedSize);
        radioButton = new QRadioButton(SendMedicineBtn);
        radioButton->setObjectName("radioButton");

        horizontalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(SendMedicineBtn);
        radioButton_2->setObjectName("radioButton_2");

        horizontalLayout->addWidget(radioButton_2);

        radioButton_5 = new QRadioButton(SendMedicineBtn);
        radioButton_5->setObjectName("radioButton_5");

        horizontalLayout->addWidget(radioButton_5);

        radioButton_3 = new QRadioButton(SendMedicineBtn);
        radioButton_3->setObjectName("radioButton_3");

        horizontalLayout->addWidget(radioButton_3);

        radioButton_4 = new QRadioButton(SendMedicineBtn);
        radioButton_4->setObjectName("radioButton_4");

        horizontalLayout->addWidget(radioButton_4);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        listWidget = new QListWidget(SendMedicineBtn);
        listWidget->setObjectName("listWidget");

        verticalLayout->addWidget(listWidget);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(3, 6);

        horizontalLayout_2->addLayout(verticalLayout);


        retranslateUi(SendMedicineBtn);

        QMetaObject::connectSlotsByName(SendMedicineBtn);
    } // setupUi

    void retranslateUi(QWidget *SendMedicineBtn)
    {
        SendMedicineBtn->setWindowTitle(QCoreApplication::translate("SendMedicineBtn", "Form", nullptr));
        radioButton->setText(QCoreApplication::translate("SendMedicineBtn", "\344\273\212\345\244\251", nullptr));
        radioButton_2->setText(QCoreApplication::translate("SendMedicineBtn", "\346\234\254\345\221\250", nullptr));
        radioButton_5->setText(QCoreApplication::translate("SendMedicineBtn", "\346\234\254\346\234\210", nullptr));
        radioButton_3->setText(QCoreApplication::translate("SendMedicineBtn", "\344\273\212\345\271\264", nullptr));
        radioButton_4->setText(QCoreApplication::translate("SendMedicineBtn", "\345\205\250\351\203\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SendMedicineBtn: public Ui_SendMedicineBtn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDMEDICINEBTN_H

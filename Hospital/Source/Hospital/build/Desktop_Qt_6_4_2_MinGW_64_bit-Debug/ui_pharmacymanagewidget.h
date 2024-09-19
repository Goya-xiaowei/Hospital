/********************************************************************************
** Form generated from reading UI file 'pharmacymanagewidget.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PHARMACYMANAGEWIDGET_H
#define UI_PHARMACYMANAGEWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PharmacyManageWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *layoutMedicationList;
    QSpacerItem *verticalSpacer_5;
    QPushButton *btnMedicationList;
    QLabel *labelMedicationList;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *layoutSendMedicine;
    QPushButton *btnSendMedicine;
    QLabel *labelSendMedicine;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_4;
    QStackedWidget *pharmacyStackedWidget;
    QWidget *page;
    QWidget *page_2;

    void setupUi(QWidget *PharmacyManageWidget)
    {
        if (PharmacyManageWidget->objectName().isEmpty())
            PharmacyManageWidget->setObjectName("PharmacyManageWidget");
        PharmacyManageWidget->resize(531, 326);
        verticalLayout = new QVBoxLayout(PharmacyManageWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        layoutMedicationList = new QVBoxLayout();
        layoutMedicationList->setObjectName("layoutMedicationList");
        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        layoutMedicationList->addItem(verticalSpacer_5);

        btnMedicationList = new QPushButton(PharmacyManageWidget);
        btnMedicationList->setObjectName("btnMedicationList");
        btnMedicationList->setMaximumSize(QSize(100, 100));
        btnMedicationList->setStyleSheet(QString::fromUtf8("QPushButton { border: none; }"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/jianyaodan.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnMedicationList->setIcon(icon);
        btnMedicationList->setIconSize(QSize(100, 100));

        layoutMedicationList->addWidget(btnMedicationList);

        labelMedicationList = new QLabel(PharmacyManageWidget);
        labelMedicationList->setObjectName("labelMedicationList");
        labelMedicationList->setMaximumSize(QSize(100, 16777215));
        labelMedicationList->setAlignment(Qt::AlignCenter);

        layoutMedicationList->addWidget(labelMedicationList);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        layoutMedicationList->addItem(verticalSpacer);

        layoutMedicationList->setStretch(1, 4);
        layoutMedicationList->setStretch(3, 1);

        verticalLayout_4->addLayout(layoutMedicationList);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_3);

        layoutSendMedicine = new QVBoxLayout();
        layoutSendMedicine->setObjectName("layoutSendMedicine");
        btnSendMedicine = new QPushButton(PharmacyManageWidget);
        btnSendMedicine->setObjectName("btnSendMedicine");
        btnSendMedicine->setMaximumSize(QSize(100, 100));
        btnSendMedicine->setStyleSheet(QString::fromUtf8("QPushButton { border: none; }"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/image/yifayao.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnSendMedicine->setIcon(icon1);
        btnSendMedicine->setIconSize(QSize(100, 100));

        layoutSendMedicine->addWidget(btnSendMedicine);

        labelSendMedicine = new QLabel(PharmacyManageWidget);
        labelSendMedicine->setObjectName("labelSendMedicine");
        labelSendMedicine->setMaximumSize(QSize(100, 16777215));
        labelSendMedicine->setAlignment(Qt::AlignCenter);

        layoutSendMedicine->addWidget(labelSendMedicine);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        layoutSendMedicine->addItem(verticalSpacer_2);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        layoutSendMedicine->addItem(verticalSpacer_4);

        layoutSendMedicine->setStretch(0, 4);
        layoutSendMedicine->setStretch(1, 1);

        verticalLayout_4->addLayout(layoutSendMedicine);


        horizontalLayout->addLayout(verticalLayout_4);

        pharmacyStackedWidget = new QStackedWidget(PharmacyManageWidget);
        pharmacyStackedWidget->setObjectName("pharmacyStackedWidget");
        page = new QWidget();
        page->setObjectName("page");
        pharmacyStackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        pharmacyStackedWidget->addWidget(page_2);

        horizontalLayout->addWidget(pharmacyStackedWidget);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 5);

        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(PharmacyManageWidget);

        QMetaObject::connectSlotsByName(PharmacyManageWidget);
    } // setupUi

    void retranslateUi(QWidget *PharmacyManageWidget)
    {
        PharmacyManageWidget->setWindowTitle(QCoreApplication::translate("PharmacyManageWidget", "Form", nullptr));
        btnMedicationList->setText(QString());
        labelMedicationList->setText(QCoreApplication::translate("PharmacyManageWidget", "\346\237\245\347\234\213\346\243\200\350\215\257\345\215\225", nullptr));
        btnSendMedicine->setText(QString());
        labelSendMedicine->setText(QCoreApplication::translate("PharmacyManageWidget", "\346\237\245\347\234\213\345\267\262\345\217\221\350\215\257\345\223\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PharmacyManageWidget: public Ui_PharmacyManageWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PHARMACYMANAGEWIDGET_H

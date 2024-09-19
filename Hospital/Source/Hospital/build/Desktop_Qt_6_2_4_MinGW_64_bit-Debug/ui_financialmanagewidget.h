/********************************************************************************
** Form generated from reading UI file 'financialmanagewidget.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINANCIALMANAGEWIDGET_H
#define UI_FINANCIALMANAGEWIDGET_H

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

class Ui_FinancialManageWidget
{
public:
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *layoutPatientRegistration;
    QPushButton *btnBusinessStatistics;
    QLabel *labelBusinessStatistics;
    QVBoxLayout *verticalLayout;
    QPushButton *btnEmployManage;
    QLabel *labelEmployManage;
    QVBoxLayout *verticalLayout_2;
    QPushButton *btnPatientRegistration_2;
    QLabel *labelPatientRegistration_2;
    QStackedWidget *financialManafeStacked;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *FinancialManageWidget)
    {
        if (FinancialManageWidget->objectName().isEmpty())
            FinancialManageWidget->setObjectName(QString::fromUtf8("FinancialManageWidget"));
        FinancialManageWidget->resize(778, 468);
        FinancialManageWidget->setStyleSheet(QString::fromUtf8("QPushButton { background-color: rgba(0, 0, 0, 0); }"));
        verticalLayout_4 = new QVBoxLayout(FinancialManageWidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        layoutPatientRegistration = new QVBoxLayout();
        layoutPatientRegistration->setObjectName(QString::fromUtf8("layoutPatientRegistration"));
        btnBusinessStatistics = new QPushButton(FinancialManageWidget);
        btnBusinessStatistics->setObjectName(QString::fromUtf8("btnBusinessStatistics"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnBusinessStatistics->sizePolicy().hasHeightForWidth());
        btnBusinessStatistics->setSizePolicy(sizePolicy);
        btnBusinessStatistics->setMaximumSize(QSize(100, 100));
        btnBusinessStatistics->setStyleSheet(QString::fromUtf8("QPushButton { border: none; }"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/yingye1.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnBusinessStatistics->setIcon(icon);
        btnBusinessStatistics->setIconSize(QSize(100, 100));

        layoutPatientRegistration->addWidget(btnBusinessStatistics);

        labelBusinessStatistics = new QLabel(FinancialManageWidget);
        labelBusinessStatistics->setObjectName(QString::fromUtf8("labelBusinessStatistics"));
        labelBusinessStatistics->setMaximumSize(QSize(100, 16777215));
        labelBusinessStatistics->setAlignment(Qt::AlignCenter);

        layoutPatientRegistration->addWidget(labelBusinessStatistics);

        layoutPatientRegistration->setStretch(0, 4);
        layoutPatientRegistration->setStretch(1, 1);

        verticalLayout_3->addLayout(layoutPatientRegistration);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        btnEmployManage = new QPushButton(FinancialManageWidget);
        btnEmployManage->setObjectName(QString::fromUtf8("btnEmployManage"));
        btnEmployManage->setMaximumSize(QSize(100, 100));
        btnEmployManage->setStyleSheet(QString::fromUtf8("QPushButton { border: none; }"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/image/yuangong.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnEmployManage->setIcon(icon1);
        btnEmployManage->setIconSize(QSize(100, 100));

        verticalLayout->addWidget(btnEmployManage);

        labelEmployManage = new QLabel(FinancialManageWidget);
        labelEmployManage->setObjectName(QString::fromUtf8("labelEmployManage"));
        labelEmployManage->setMaximumSize(QSize(100, 16777215));
        labelEmployManage->setInputMethodHints(Qt::ImhMultiLine);
        labelEmployManage->setAlignment(Qt::AlignCenter);
        labelEmployManage->setIndent(0);

        verticalLayout->addWidget(labelEmployManage);


        verticalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        btnPatientRegistration_2 = new QPushButton(FinancialManageWidget);
        btnPatientRegistration_2->setObjectName(QString::fromUtf8("btnPatientRegistration_2"));
        btnPatientRegistration_2->setMaximumSize(QSize(100, 100));
        btnPatientRegistration_2->setStyleSheet(QString::fromUtf8("QPushButton { border: none; }"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/image/gongzi1.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnPatientRegistration_2->setIcon(icon2);
        btnPatientRegistration_2->setIconSize(QSize(100, 100));

        verticalLayout_2->addWidget(btnPatientRegistration_2);

        labelPatientRegistration_2 = new QLabel(FinancialManageWidget);
        labelPatientRegistration_2->setObjectName(QString::fromUtf8("labelPatientRegistration_2"));
        labelPatientRegistration_2->setMaximumSize(QSize(100, 16777215));
        labelPatientRegistration_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(labelPatientRegistration_2);


        verticalLayout_3->addLayout(verticalLayout_2);


        horizontalLayout->addLayout(verticalLayout_3);

        financialManafeStacked = new QStackedWidget(FinancialManageWidget);
        financialManafeStacked->setObjectName(QString::fromUtf8("financialManafeStacked"));
        financialManafeStacked->setStyleSheet(QString::fromUtf8(""));
        financialManafeStacked->setFrameShape(QFrame::NoFrame);

        horizontalLayout->addWidget(financialManafeStacked);


        verticalLayout_4->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);


        retranslateUi(FinancialManageWidget);

        QMetaObject::connectSlotsByName(FinancialManageWidget);
    } // setupUi

    void retranslateUi(QWidget *FinancialManageWidget)
    {
        FinancialManageWidget->setWindowTitle(QCoreApplication::translate("FinancialManageWidget", "Form", nullptr));
        btnBusinessStatistics->setText(QString());
        labelBusinessStatistics->setText(QCoreApplication::translate("FinancialManageWidget", "\350\220\245\344\270\232\347\273\237\350\256\241", nullptr));
        btnEmployManage->setText(QString());
        labelEmployManage->setText(QCoreApplication::translate("FinancialManageWidget", "\345\221\230\345\267\245\347\256\241\347\220\206", nullptr));
        btnPatientRegistration_2->setText(QString());
        labelPatientRegistration_2->setText(QCoreApplication::translate("FinancialManageWidget", "\345\267\245\350\265\204\345\210\206\351\205\215", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FinancialManageWidget: public Ui_FinancialManageWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINANCIALMANAGEWIDGET_H

/********************************************************************************
** Form generated from reading UI file 'drugmanagewidget.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRUGMANAGEWIDGET_H
#define UI_DRUGMANAGEWIDGET_H

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

class Ui_DrugManageWidget
{
public:
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *layoutDrugWarehouse;
    QPushButton *btnDrugWarehouse;
    QLabel *labelDrugWarehouse;
    QVBoxLayout *layoutDrugReview;
    QPushButton *btnDrugReview;
    QLabel *labelDrugReview;
    QVBoxLayout *layoutDrugOutWarehouse;
    QPushButton *btnDrugOutWarehouse;
    QLabel *labelDrugOutWarehouse;
    QStackedWidget *drugManageStacked;
    QWidget *page;
    QWidget *page_2;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *DrugManageWidget)
    {
        if (DrugManageWidget->objectName().isEmpty())
            DrugManageWidget->setObjectName(QString::fromUtf8("DrugManageWidget"));
        DrugManageWidget->resize(751, 504);
        DrugManageWidget->setStyleSheet(QString::fromUtf8("QPushButton { background-color: rgba(0, 0, 0, 0); }"));
        verticalLayout_4 = new QVBoxLayout(DrugManageWidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        layoutDrugWarehouse = new QVBoxLayout();
        layoutDrugWarehouse->setObjectName(QString::fromUtf8("layoutDrugWarehouse"));
        btnDrugWarehouse = new QPushButton(DrugManageWidget);
        btnDrugWarehouse->setObjectName(QString::fromUtf8("btnDrugWarehouse"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnDrugWarehouse->sizePolicy().hasHeightForWidth());
        btnDrugWarehouse->setSizePolicy(sizePolicy);
        btnDrugWarehouse->setMaximumSize(QSize(100, 100));
        btnDrugWarehouse->setStyleSheet(QString::fromUtf8("QPushButton { border: none; }"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/drug_in.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnDrugWarehouse->setIcon(icon);
        btnDrugWarehouse->setIconSize(QSize(100, 100));

        layoutDrugWarehouse->addWidget(btnDrugWarehouse);

        labelDrugWarehouse = new QLabel(DrugManageWidget);
        labelDrugWarehouse->setObjectName(QString::fromUtf8("labelDrugWarehouse"));
        labelDrugWarehouse->setMaximumSize(QSize(100, 16777215));
        labelDrugWarehouse->setAlignment(Qt::AlignCenter);

        layoutDrugWarehouse->addWidget(labelDrugWarehouse);

        layoutDrugWarehouse->setStretch(0, 4);
        layoutDrugWarehouse->setStretch(1, 1);

        verticalLayout_3->addLayout(layoutDrugWarehouse);

        layoutDrugReview = new QVBoxLayout();
        layoutDrugReview->setObjectName(QString::fromUtf8("layoutDrugReview"));
        btnDrugReview = new QPushButton(DrugManageWidget);
        btnDrugReview->setObjectName(QString::fromUtf8("btnDrugReview"));
        btnDrugReview->setMaximumSize(QSize(100, 100));
        btnDrugReview->setStyleSheet(QString::fromUtf8("QPushButton { border: none; }"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/image/drug_select.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnDrugReview->setIcon(icon1);
        btnDrugReview->setIconSize(QSize(100, 100));

        layoutDrugReview->addWidget(btnDrugReview);

        labelDrugReview = new QLabel(DrugManageWidget);
        labelDrugReview->setObjectName(QString::fromUtf8("labelDrugReview"));
        labelDrugReview->setMaximumSize(QSize(100, 16777215));
        labelDrugReview->setInputMethodHints(Qt::ImhMultiLine);
        labelDrugReview->setAlignment(Qt::AlignCenter);
        labelDrugReview->setIndent(0);

        layoutDrugReview->addWidget(labelDrugReview);


        verticalLayout_3->addLayout(layoutDrugReview);

        layoutDrugOutWarehouse = new QVBoxLayout();
        layoutDrugOutWarehouse->setObjectName(QString::fromUtf8("layoutDrugOutWarehouse"));
        btnDrugOutWarehouse = new QPushButton(DrugManageWidget);
        btnDrugOutWarehouse->setObjectName(QString::fromUtf8("btnDrugOutWarehouse"));
        btnDrugOutWarehouse->setMaximumSize(QSize(100, 100));
        btnDrugOutWarehouse->setStyleSheet(QString::fromUtf8("QPushButton { border: none; }"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/image/drug_out.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnDrugOutWarehouse->setIcon(icon2);
        btnDrugOutWarehouse->setIconSize(QSize(100, 100));

        layoutDrugOutWarehouse->addWidget(btnDrugOutWarehouse);

        labelDrugOutWarehouse = new QLabel(DrugManageWidget);
        labelDrugOutWarehouse->setObjectName(QString::fromUtf8("labelDrugOutWarehouse"));
        labelDrugOutWarehouse->setMaximumSize(QSize(100, 16777215));
        labelDrugOutWarehouse->setAlignment(Qt::AlignCenter);

        layoutDrugOutWarehouse->addWidget(labelDrugOutWarehouse);


        verticalLayout_3->addLayout(layoutDrugOutWarehouse);


        horizontalLayout->addLayout(verticalLayout_3);

        drugManageStacked = new QStackedWidget(DrugManageWidget);
        drugManageStacked->setObjectName(QString::fromUtf8("drugManageStacked"));
        drugManageStacked->setStyleSheet(QString::fromUtf8(""));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 0);"));
        drugManageStacked->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        drugManageStacked->addWidget(page_2);

        horizontalLayout->addWidget(drugManageStacked);


        verticalLayout_4->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);


        retranslateUi(DrugManageWidget);

        QMetaObject::connectSlotsByName(DrugManageWidget);
    } // setupUi

    void retranslateUi(QWidget *DrugManageWidget)
    {
        DrugManageWidget->setWindowTitle(QCoreApplication::translate("DrugManageWidget", "Form", nullptr));
        btnDrugWarehouse->setText(QString());
        labelDrugWarehouse->setText(QCoreApplication::translate("DrugManageWidget", "\350\215\257\345\223\201\345\205\245\345\272\223", nullptr));
        btnDrugReview->setText(QString());
        labelDrugReview->setText(QCoreApplication::translate("DrugManageWidget", "\350\215\257\345\223\201\346\237\245\347\234\213", nullptr));
        btnDrugOutWarehouse->setText(QString());
        labelDrugOutWarehouse->setText(QCoreApplication::translate("DrugManageWidget", "\350\215\257\345\223\201\345\207\272\345\272\223", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DrugManageWidget: public Ui_DrugManageWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRUGMANAGEWIDGET_H

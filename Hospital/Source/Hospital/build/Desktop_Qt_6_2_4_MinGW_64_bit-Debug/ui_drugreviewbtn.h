/********************************************************************************
** Form generated from reading UI file 'drugreviewbtn.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRUGREVIEWBTN_H
#define UI_DRUGREVIEWBTN_H

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

class Ui_DrugReviewBtn
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEditDrugName;
    QPushButton *btnNameSelect;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QComboBox *comboBoxShape;
    QPushButton *btnShape;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEditPrice;
    QPushButton *btnPrice;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnSelectAll;
    QTreeView *treeView;

    void setupUi(QWidget *DrugReviewBtn)
    {
        if (DrugReviewBtn->objectName().isEmpty())
            DrugReviewBtn->setObjectName(QString::fromUtf8("DrugReviewBtn"));
        DrugReviewBtn->resize(886, 495);
        DrugReviewBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        verticalLayout = new QVBoxLayout(DrugReviewBtn);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(13, -1, 13, 13);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(DrugReviewBtn);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEditDrugName = new QLineEdit(DrugReviewBtn);
        lineEditDrugName->setObjectName(QString::fromUtf8("lineEditDrugName"));

        horizontalLayout->addWidget(lineEditDrugName);

        btnNameSelect = new QPushButton(DrugReviewBtn);
        btnNameSelect->setObjectName(QString::fromUtf8("btnNameSelect"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnNameSelect->sizePolicy().hasHeightForWidth());
        btnNameSelect->setSizePolicy(sizePolicy);
        btnNameSelect->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(btnNameSelect);


        horizontalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(DrugReviewBtn);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(label_3);

        comboBoxShape = new QComboBox(DrugReviewBtn);
        comboBoxShape->setObjectName(QString::fromUtf8("comboBoxShape"));

        horizontalLayout_3->addWidget(comboBoxShape);

        btnShape = new QPushButton(DrugReviewBtn);
        btnShape->setObjectName(QString::fromUtf8("btnShape"));
        sizePolicy.setHeightForWidth(btnShape->sizePolicy().hasHeightForWidth());
        btnShape->setSizePolicy(sizePolicy);
        btnShape->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_3->addWidget(btnShape);


        horizontalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(DrugReviewBtn);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(label_2);

        lineEditPrice = new QLineEdit(DrugReviewBtn);
        lineEditPrice->setObjectName(QString::fromUtf8("lineEditPrice"));

        horizontalLayout_2->addWidget(lineEditPrice);

        btnPrice = new QPushButton(DrugReviewBtn);
        btnPrice->setObjectName(QString::fromUtf8("btnPrice"));
        sizePolicy.setHeightForWidth(btnPrice->sizePolicy().hasHeightForWidth());
        btnPrice->setSizePolicy(sizePolicy);
        btnPrice->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_2->addWidget(btnPrice);


        horizontalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 1);
        horizontalLayout_4->setStretch(2, 1);

        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        btnSelectAll = new QPushButton(DrugReviewBtn);
        btnSelectAll->setObjectName(QString::fromUtf8("btnSelectAll"));
        sizePolicy.setHeightForWidth(btnSelectAll->sizePolicy().hasHeightForWidth());
        btnSelectAll->setSizePolicy(sizePolicy);
        btnSelectAll->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_5->addWidget(btnSelectAll);

        horizontalLayout_5->setStretch(0, 7);
        horizontalLayout_5->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_5);

        treeView = new QTreeView(DrugReviewBtn);
        treeView->setObjectName(QString::fromUtf8("treeView"));

        verticalLayout->addWidget(treeView);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 5);

        retranslateUi(DrugReviewBtn);

        QMetaObject::connectSlotsByName(DrugReviewBtn);
    } // setupUi

    void retranslateUi(QWidget *DrugReviewBtn)
    {
        DrugReviewBtn->setWindowTitle(QCoreApplication::translate("DrugReviewBtn", "Form", nullptr));
        label->setText(QCoreApplication::translate("DrugReviewBtn", "\350\215\257\345\223\201\345\220\215\347\247\260", nullptr));
        btnNameSelect->setText(QCoreApplication::translate("DrugReviewBtn", "\346\237\245\350\257\242\345\220\215\347\247\260", nullptr));
        label_3->setText(QCoreApplication::translate("DrugReviewBtn", "\350\215\257\345\211\202", nullptr));
        btnShape->setText(QCoreApplication::translate("DrugReviewBtn", "\346\237\245\350\257\242\350\215\257\345\211\202", nullptr));
        label_2->setText(QCoreApplication::translate("DrugReviewBtn", "\350\215\257\345\223\201\344\273\267\346\240\274", nullptr));
        btnPrice->setText(QCoreApplication::translate("DrugReviewBtn", "\346\237\245\350\257\242\344\273\267\346\240\274", nullptr));
        btnSelectAll->setText(QCoreApplication::translate("DrugReviewBtn", "\346\237\245\350\257\242\345\205\250\351\203\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DrugReviewBtn: public Ui_DrugReviewBtn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRUGREVIEWBTN_H

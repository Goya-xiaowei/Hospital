/********************************************************************************
** Form generated from reading UI file 'drugreviewbtn.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
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
#include <QtWidgets/QTableWidget>
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
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QComboBox *comboBox_2;
    QPushButton *pushButton_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *comboBox;
    QPushButton *pushButton_2;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_4;
    QTableWidget *tableWidget;

    void setupUi(QWidget *DrugReviewBtn)
    {
        if (DrugReviewBtn->objectName().isEmpty())
            DrugReviewBtn->setObjectName("DrugReviewBtn");
        DrugReviewBtn->resize(886, 495);
        verticalLayout = new QVBoxLayout(DrugReviewBtn);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(13, -1, 13, 13);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(DrugReviewBtn);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(DrugReviewBtn);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout->addWidget(lineEdit);

        pushButton = new QPushButton(DrugReviewBtn);
        pushButton->setObjectName("pushButton");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(pushButton);


        horizontalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(DrugReviewBtn);
        label_3->setObjectName("label_3");
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(label_3);

        comboBox_2 = new QComboBox(DrugReviewBtn);
        comboBox_2->setObjectName("comboBox_2");

        horizontalLayout_3->addWidget(comboBox_2);

        pushButton_3 = new QPushButton(DrugReviewBtn);
        pushButton_3->setObjectName("pushButton_3");
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_3->addWidget(pushButton_3);


        horizontalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(DrugReviewBtn);
        label_2->setObjectName("label_2");
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(label_2);

        comboBox = new QComboBox(DrugReviewBtn);
        comboBox->setObjectName("comboBox");

        horizontalLayout_2->addWidget(comboBox);

        pushButton_2 = new QPushButton(DrugReviewBtn);
        pushButton_2->setObjectName("pushButton_2");
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_2->addWidget(pushButton_2);


        horizontalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 1);
        horizontalLayout_4->setStretch(2, 1);

        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        pushButton_4 = new QPushButton(DrugReviewBtn);
        pushButton_4->setObjectName("pushButton_4");
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_5->addWidget(pushButton_4);

        horizontalLayout_5->setStretch(0, 7);
        horizontalLayout_5->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_5);

        tableWidget = new QTableWidget(DrugReviewBtn);
        tableWidget->setObjectName("tableWidget");

        verticalLayout->addWidget(tableWidget);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 8);

        retranslateUi(DrugReviewBtn);

        QMetaObject::connectSlotsByName(DrugReviewBtn);
    } // setupUi

    void retranslateUi(QWidget *DrugReviewBtn)
    {
        DrugReviewBtn->setWindowTitle(QCoreApplication::translate("DrugReviewBtn", "Form", nullptr));
        label->setText(QCoreApplication::translate("DrugReviewBtn", "\350\215\257\345\223\201\345\220\215\347\247\260", nullptr));
        pushButton->setText(QCoreApplication::translate("DrugReviewBtn", "\350\215\257\345\223\201\346\237\245\350\257\242", nullptr));
        label_3->setText(QCoreApplication::translate("DrugReviewBtn", "\350\215\257\345\211\202", nullptr));
        pushButton_3->setText(QCoreApplication::translate("DrugReviewBtn", "\350\215\257\345\223\201\346\237\245\350\257\242", nullptr));
        label_2->setText(QCoreApplication::translate("DrugReviewBtn", "\350\215\257\345\223\201\344\273\267\346\240\274", nullptr));
        pushButton_2->setText(QCoreApplication::translate("DrugReviewBtn", "\350\215\257\345\223\201\346\237\245\350\257\242", nullptr));
        pushButton_4->setText(QCoreApplication::translate("DrugReviewBtn", "\346\237\245\350\257\242\345\205\250\351\203\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DrugReviewBtn: public Ui_DrugReviewBtn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRUGREVIEWBTN_H

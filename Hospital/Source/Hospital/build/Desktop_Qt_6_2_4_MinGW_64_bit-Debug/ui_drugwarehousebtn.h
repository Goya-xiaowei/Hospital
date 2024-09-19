/********************************************************************************
** Form generated from reading UI file 'drugwarehousebtn.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRUGWAREHOUSEBTN_H
#define UI_DRUGWAREHOUSEBTN_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DrugWarehouseBtn
{
public:
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEditDrugName;
    QPushButton *btnFind;
    QSpacerItem *verticalSpacer;
    QComboBox *comboBoxDrugShape;
    QSpacerItem *verticalSpacer_2;
    QDateTimeEdit *produceDate;
    QSpacerItem *verticalSpacer_3;
    QDateTimeEdit *effectiveDate;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_5;
    QLabel *label_7;
    QLabel *label_6;
    QLabel *label_9;
    QVBoxLayout *verticalLayout_2;
    QComboBox *comboBoxDrugType;
    QSpacerItem *verticalSpacer_4;
    QComboBox *comboBoxCostName;
    QSpacerItem *verticalSpacer_5;
    QComboBox *comboBoxDrugSpecs;
    QSpacerItem *verticalSpacer_6;
    QLineEdit *lineEditInsertPrice;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_8;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEditstock;
    QSpacerItem *verticalSpacer_7;
    QLineEdit *lineEditstockMax;
    QSpacerItem *verticalSpacer_8;
    QLineEdit *lineEditstockMin;
    QSpacerItem *verticalSpacer_9;
    QLineEdit *lineEditSellsPrice;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_8;
    QPushButton *btnClearAll;
    QSpacerItem *verticalSpacer_10;
    QPushButton *btnShowAllDrug;
    QPushButton *btnDrugUpdate;
    QSpacerItem *verticalSpacer_12;
    QPushButton *btnDrugWarehousing;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_13;
    QTextEdit *textEditEfficay;
    QTreeView *treeView;

    void setupUi(QWidget *DrugWarehouseBtn)
    {
        if (DrugWarehouseBtn->objectName().isEmpty())
            DrugWarehouseBtn->setObjectName(QString::fromUtf8("DrugWarehouseBtn"));
        DrugWarehouseBtn->resize(897, 615);
        DrugWarehouseBtn->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_9 = new QVBoxLayout(DrugWarehouseBtn);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label = new QLabel(DrugWarehouseBtn);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_4->addWidget(label);

        label_2 = new QLabel(DrugWarehouseBtn);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_2);

        label_3 = new QLabel(DrugWarehouseBtn);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_4->addWidget(label_3);

        label_4 = new QLabel(DrugWarehouseBtn);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_4->addWidget(label_4);


        horizontalLayout_2->addLayout(verticalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lineEditDrugName = new QLineEdit(DrugWarehouseBtn);
        lineEditDrugName->setObjectName(QString::fromUtf8("lineEditDrugName"));

        horizontalLayout->addWidget(lineEditDrugName);

        btnFind = new QPushButton(DrugWarehouseBtn);
        btnFind->setObjectName(QString::fromUtf8("btnFind"));
        btnFind->setMaximumSize(QSize(50, 16777215));

        horizontalLayout->addWidget(btnFind);


        verticalLayout_3->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        comboBoxDrugShape = new QComboBox(DrugWarehouseBtn);
        comboBoxDrugShape->setObjectName(QString::fromUtf8("comboBoxDrugShape"));

        verticalLayout_3->addWidget(comboBoxDrugShape);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        produceDate = new QDateTimeEdit(DrugWarehouseBtn);
        produceDate->setObjectName(QString::fromUtf8("produceDate"));
        produceDate->setStyleSheet(QString::fromUtf8("QDateTimeEdit::drop-down { image: url(:/image/datetime.png); }"));
        produceDate->setDateTime(QDateTime(QDate(2022, 1, 1), QTime(0, 0, 0)));
        produceDate->setDate(QDate(2022, 1, 1));
        produceDate->setTime(QTime(0, 0, 0));
        produceDate->setCalendarPopup(true);

        verticalLayout_3->addWidget(produceDate);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        effectiveDate = new QDateTimeEdit(DrugWarehouseBtn);
        effectiveDate->setObjectName(QString::fromUtf8("effectiveDate"));
        effectiveDate->setStyleSheet(QString::fromUtf8("QDateTimeEdit::drop-down { image: url(:/image/datetime.png); }"));
        effectiveDate->setAccelerated(false);
        effectiveDate->setCalendarPopup(true);

        verticalLayout_3->addWidget(effectiveDate);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_5 = new QLabel(DrugWarehouseBtn);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_5->addWidget(label_5);

        label_7 = new QLabel(DrugWarehouseBtn);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_5->addWidget(label_7);

        label_6 = new QLabel(DrugWarehouseBtn);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_6);

        label_9 = new QLabel(DrugWarehouseBtn);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_9);


        horizontalLayout_2->addLayout(verticalLayout_5);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        comboBoxDrugType = new QComboBox(DrugWarehouseBtn);
        comboBoxDrugType->setObjectName(QString::fromUtf8("comboBoxDrugType"));

        verticalLayout_2->addWidget(comboBoxDrugType);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);

        comboBoxCostName = new QComboBox(DrugWarehouseBtn);
        comboBoxCostName->setObjectName(QString::fromUtf8("comboBoxCostName"));

        verticalLayout_2->addWidget(comboBoxCostName);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_5);

        comboBoxDrugSpecs = new QComboBox(DrugWarehouseBtn);
        comboBoxDrugSpecs->setObjectName(QString::fromUtf8("comboBoxDrugSpecs"));

        verticalLayout_2->addWidget(comboBoxDrugSpecs);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_6);

        lineEditInsertPrice = new QLineEdit(DrugWarehouseBtn);
        lineEditInsertPrice->setObjectName(QString::fromUtf8("lineEditInsertPrice"));

        verticalLayout_2->addWidget(lineEditInsertPrice);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_8 = new QLabel(DrugWarehouseBtn);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_8);

        label_10 = new QLabel(DrugWarehouseBtn);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout_6->addWidget(label_10);

        label_11 = new QLabel(DrugWarehouseBtn);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        verticalLayout_6->addWidget(label_11);

        label_12 = new QLabel(DrugWarehouseBtn);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_12);


        horizontalLayout_2->addLayout(verticalLayout_6);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lineEditstock = new QLineEdit(DrugWarehouseBtn);
        lineEditstock->setObjectName(QString::fromUtf8("lineEditstock"));

        verticalLayout->addWidget(lineEditstock);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_7);

        lineEditstockMax = new QLineEdit(DrugWarehouseBtn);
        lineEditstockMax->setObjectName(QString::fromUtf8("lineEditstockMax"));

        verticalLayout->addWidget(lineEditstockMax);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_8);

        lineEditstockMin = new QLineEdit(DrugWarehouseBtn);
        lineEditstockMin->setObjectName(QString::fromUtf8("lineEditstockMin"));

        verticalLayout->addWidget(lineEditstockMin);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_9);

        lineEditSellsPrice = new QLineEdit(DrugWarehouseBtn);
        lineEditSellsPrice->setObjectName(QString::fromUtf8("lineEditSellsPrice"));

        verticalLayout->addWidget(lineEditSellsPrice);


        horizontalLayout_2->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        btnClearAll = new QPushButton(DrugWarehouseBtn);
        btnClearAll->setObjectName(QString::fromUtf8("btnClearAll"));

        verticalLayout_8->addWidget(btnClearAll);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_10);

        btnShowAllDrug = new QPushButton(DrugWarehouseBtn);
        btnShowAllDrug->setObjectName(QString::fromUtf8("btnShowAllDrug"));

        verticalLayout_8->addWidget(btnShowAllDrug);

        btnDrugUpdate = new QPushButton(DrugWarehouseBtn);
        btnDrugUpdate->setObjectName(QString::fromUtf8("btnDrugUpdate"));

        verticalLayout_8->addWidget(btnDrugUpdate);

        verticalSpacer_12 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_12);

        btnDrugWarehousing = new QPushButton(DrugWarehouseBtn);
        btnDrugWarehousing->setObjectName(QString::fromUtf8("btnDrugWarehousing"));

        verticalLayout_8->addWidget(btnDrugWarehousing);


        horizontalLayout_2->addLayout(verticalLayout_8);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_9->addLayout(horizontalLayout_2);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label_13 = new QLabel(DrugWarehouseBtn);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(label_13);

        textEditEfficay = new QTextEdit(DrugWarehouseBtn);
        textEditEfficay->setObjectName(QString::fromUtf8("textEditEfficay"));

        verticalLayout_7->addWidget(textEditEfficay);


        verticalLayout_9->addLayout(verticalLayout_7);

        treeView = new QTreeView(DrugWarehouseBtn);
        treeView->setObjectName(QString::fromUtf8("treeView"));

        verticalLayout_9->addWidget(treeView);

        verticalLayout_9->setStretch(0, 1);
        verticalLayout_9->setStretch(1, 3);
        verticalLayout_9->setStretch(2, 5);

        retranslateUi(DrugWarehouseBtn);

        QMetaObject::connectSlotsByName(DrugWarehouseBtn);
    } // setupUi

    void retranslateUi(QWidget *DrugWarehouseBtn)
    {
        DrugWarehouseBtn->setWindowTitle(QCoreApplication::translate("DrugWarehouseBtn", "Form", nullptr));
        label->setText(QCoreApplication::translate("DrugWarehouseBtn", "\350\215\257\345\223\201\345\220\215\347\247\260", nullptr));
        label_2->setText(QCoreApplication::translate("DrugWarehouseBtn", "\345\211\202\345\236\213", nullptr));
        label_3->setText(QCoreApplication::translate("DrugWarehouseBtn", "\347\224\237\344\272\247\346\227\245\346\234\237", nullptr));
        label_4->setText(QCoreApplication::translate("DrugWarehouseBtn", "\346\234\211\346\225\210\346\227\245\346\234\237", nullptr));
        btnFind->setText(QCoreApplication::translate("DrugWarehouseBtn", "\346\237\245\346\211\276", nullptr));
        produceDate->setDisplayFormat(QCoreApplication::translate("DrugWarehouseBtn", "yyyy-MM-dd", nullptr));
        effectiveDate->setDisplayFormat(QCoreApplication::translate("DrugWarehouseBtn", "yyyy-MM-dd", nullptr));
        label_5->setText(QCoreApplication::translate("DrugWarehouseBtn", "\350\215\257\345\223\201\347\261\273\345\236\213", nullptr));
        label_7->setText(QCoreApplication::translate("DrugWarehouseBtn", "\350\264\271\347\224\250\345\220\215\347\247\260", nullptr));
        label_6->setText(QCoreApplication::translate("DrugWarehouseBtn", "\350\247\204\346\240\274", nullptr));
        label_9->setText(QCoreApplication::translate("DrugWarehouseBtn", "\350\277\233\344\273\267", nullptr));
        label_8->setText(QCoreApplication::translate("DrugWarehouseBtn", "\345\272\223\345\255\230", nullptr));
        label_10->setText(QCoreApplication::translate("DrugWarehouseBtn", "\345\272\223\345\255\230\344\270\212\351\231\220", nullptr));
        label_11->setText(QCoreApplication::translate("DrugWarehouseBtn", "\345\272\223\345\255\230\344\270\213\351\231\220", nullptr));
        label_12->setText(QCoreApplication::translate("DrugWarehouseBtn", "\345\224\256\344\273\267", nullptr));
        btnClearAll->setText(QCoreApplication::translate("DrugWarehouseBtn", "\346\270\205\347\251\272\345\205\250\351\203\250", nullptr));
        btnShowAllDrug->setText(QCoreApplication::translate("DrugWarehouseBtn", "\346\230\276\347\244\272\345\205\250\351\203\250", nullptr));
        btnDrugUpdate->setText(QCoreApplication::translate("DrugWarehouseBtn", "\350\215\257\345\223\201\344\277\256\346\224\271", nullptr));
        btnDrugWarehousing->setText(QCoreApplication::translate("DrugWarehouseBtn", "\350\215\257\345\223\201\345\205\245\345\272\223", nullptr));
        label_13->setText(QCoreApplication::translate("DrugWarehouseBtn", "\345\212\237\346\225\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DrugWarehouseBtn: public Ui_DrugWarehouseBtn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRUGWAREHOUSEBTN_H

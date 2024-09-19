/********************************************************************************
** Form generated from reading UI file 'medicationlistbtn.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEDICATIONLISTBTN_H
#define UI_MEDICATIONLISTBTN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
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

class Ui_MedicationListBtn
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEditCard;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEditName;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btnSendDrug;
    QHBoxLayout *horizontalLayout_5;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QTreeView *treeViewLeft;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QTreeView *treeViewRight;

    void setupUi(QWidget *MedicationListBtn)
    {
        if (MedicationListBtn->objectName().isEmpty())
            MedicationListBtn->setObjectName(QString::fromUtf8("MedicationListBtn"));
        MedicationListBtn->resize(904, 551);
        MedicationListBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        verticalLayout_3 = new QVBoxLayout(MedicationListBtn);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(MedicationListBtn);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEditCard = new QLineEdit(MedicationListBtn);
        lineEditCard->setObjectName(QString::fromUtf8("lineEditCard"));

        horizontalLayout->addWidget(lineEditCard);


        horizontalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(MedicationListBtn);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEditName = new QLineEdit(MedicationListBtn);
        lineEditName->setObjectName(QString::fromUtf8("lineEditName"));

        horizontalLayout_2->addWidget(lineEditName);


        horizontalLayout_4->addLayout(horizontalLayout_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        btnSendDrug = new QPushButton(MedicationListBtn);
        btnSendDrug->setObjectName(QString::fromUtf8("btnSendDrug"));

        horizontalLayout_3->addWidget(btnSendDrug);


        horizontalLayout_4->addLayout(horizontalLayout_3);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        groupBox = new QGroupBox(MedicationListBtn);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(5, 12, 5, 5);
        treeViewLeft = new QTreeView(groupBox);
        treeViewLeft->setObjectName(QString::fromUtf8("treeViewLeft"));

        verticalLayout->addWidget(treeViewLeft);


        horizontalLayout_5->addWidget(groupBox);

        groupBox_2 = new QGroupBox(MedicationListBtn);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(5, 12, 5, 5);
        treeViewRight = new QTreeView(groupBox_2);
        treeViewRight->setObjectName(QString::fromUtf8("treeViewRight"));

        verticalLayout_2->addWidget(treeViewRight);


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
        label->setText(QCoreApplication::translate("MedicationListBtn", "\346\214\202\345\217\267\345\214\273\347\226\227\345\215\241\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("MedicationListBtn", "\346\202\243\350\200\205\345\247\223\345\220\215\357\274\232", nullptr));
        btnSendDrug->setText(QCoreApplication::translate("MedicationListBtn", "\345\217\221\350\215\257", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MedicationListBtn", "\346\234\252\345\274\200\350\215\257\346\202\243\350\200\205\344\277\241\346\201\257", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MedicationListBtn", "\346\234\252\345\274\200\350\215\257\344\277\241\346\201\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MedicationListBtn: public Ui_MedicationListBtn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEDICATIONLISTBTN_H

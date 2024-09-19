/********************************************************************************
** Form generated from reading UI file 'registrationbtn.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRATIONBTN_H
#define UI_REGISTRATIONBTN_H

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

class Ui_RegistrationBtn
{
public:
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_7;
    QSpacerItem *verticalSpacer_11;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_3;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_4;
    QSpacerItem *verticalSpacer_4;
    QLabel *label_6;
    QSpacerItem *verticalSpacer_5;
    QLabel *label_5;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEditName;
    QSpacerItem *verticalSpacer_12;
    QLineEdit *lineEditCard;
    QSpacerItem *verticalSpacer_6;
    QComboBox *comboBoxSectionType;
    QSpacerItem *verticalSpacer_7;
    QComboBox *comboBoxWardRoomId;
    QSpacerItem *verticalSpacer_8;
    QComboBox *comboBoxWardBedId;
    QSpacerItem *verticalSpacer_9;
    QComboBox *comboBoxBedType;
    QSpacerItem *verticalSpacer_10;
    QLineEdit *lineEditPrice;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnAdd;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnClear;
    QSpacerItem *horizontalSpacer_3;
    QTreeView *treeViewRegistedName;

    void setupUi(QWidget *RegistrationBtn)
    {
        if (RegistrationBtn->objectName().isEmpty())
            RegistrationBtn->setObjectName(QString::fromUtf8("RegistrationBtn"));
        RegistrationBtn->resize(775, 614);
        RegistrationBtn->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_3 = new QHBoxLayout(RegistrationBtn);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(10, 13, 10, 13);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_7 = new QLabel(RegistrationBtn);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout->addWidget(label_7);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_11);

        label = new QLabel(RegistrationBtn);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        label_2 = new QLabel(RegistrationBtn);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        label_3 = new QLabel(RegistrationBtn);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        label_4 = new QLabel(RegistrationBtn);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        label_6 = new QLabel(RegistrationBtn);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout->addWidget(label_6);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        label_5 = new QLabel(RegistrationBtn);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout->addWidget(label_5);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lineEditName = new QLineEdit(RegistrationBtn);
        lineEditName->setObjectName(QString::fromUtf8("lineEditName"));

        verticalLayout_2->addWidget(lineEditName);

        verticalSpacer_12 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_12);

        lineEditCard = new QLineEdit(RegistrationBtn);
        lineEditCard->setObjectName(QString::fromUtf8("lineEditCard"));

        verticalLayout_2->addWidget(lineEditCard);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_6);

        comboBoxSectionType = new QComboBox(RegistrationBtn);
        comboBoxSectionType->setObjectName(QString::fromUtf8("comboBoxSectionType"));

        verticalLayout_2->addWidget(comboBoxSectionType);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_7);

        comboBoxWardRoomId = new QComboBox(RegistrationBtn);
        comboBoxWardRoomId->setObjectName(QString::fromUtf8("comboBoxWardRoomId"));

        verticalLayout_2->addWidget(comboBoxWardRoomId);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_8);

        comboBoxWardBedId = new QComboBox(RegistrationBtn);
        comboBoxWardBedId->setObjectName(QString::fromUtf8("comboBoxWardBedId"));

        verticalLayout_2->addWidget(comboBoxWardBedId);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_9);

        comboBoxBedType = new QComboBox(RegistrationBtn);
        comboBoxBedType->setObjectName(QString::fromUtf8("comboBoxBedType"));

        verticalLayout_2->addWidget(comboBoxBedType);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_10);

        lineEditPrice = new QLineEdit(RegistrationBtn);
        lineEditPrice->setObjectName(QString::fromUtf8("lineEditPrice"));

        verticalLayout_2->addWidget(lineEditPrice);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        btnAdd = new QPushButton(RegistrationBtn);
        btnAdd->setObjectName(QString::fromUtf8("btnAdd"));

        horizontalLayout_2->addWidget(btnAdd);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        btnClear = new QPushButton(RegistrationBtn);
        btnClear->setObjectName(QString::fromUtf8("btnClear"));

        horizontalLayout_2->addWidget(btnClear);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout_3->addLayout(horizontalLayout_2);

        verticalLayout_3->setStretch(0, 2);
        verticalLayout_3->setStretch(1, 1);

        horizontalLayout_3->addLayout(verticalLayout_3);

        treeViewRegistedName = new QTreeView(RegistrationBtn);
        treeViewRegistedName->setObjectName(QString::fromUtf8("treeViewRegistedName"));

        horizontalLayout_3->addWidget(treeViewRegistedName);

        horizontalLayout_3->setStretch(0, 2);
        horizontalLayout_3->setStretch(1, 5);

        retranslateUi(RegistrationBtn);

        QMetaObject::connectSlotsByName(RegistrationBtn);
    } // setupUi

    void retranslateUi(QWidget *RegistrationBtn)
    {
        RegistrationBtn->setWindowTitle(QCoreApplication::translate("RegistrationBtn", "Form", nullptr));
        label_7->setText(QCoreApplication::translate("RegistrationBtn", "\347\227\205\344\272\272\345\247\223\345\220\215", nullptr));
        label->setText(QCoreApplication::translate("RegistrationBtn", "\345\214\273\347\226\227\345\215\241\345\215\241\345\217\267", nullptr));
        label_2->setText(QCoreApplication::translate("RegistrationBtn", "\347\247\221\345\210\253", nullptr));
        label_3->setText(QCoreApplication::translate("RegistrationBtn", "\347\227\205\346\210\277\345\217\267", nullptr));
        label_4->setText(QCoreApplication::translate("RegistrationBtn", "\347\227\205\345\272\212\345\217\267", nullptr));
        label_6->setText(QCoreApplication::translate("RegistrationBtn", "\345\272\212\344\275\215\347\261\273\345\236\213", nullptr));
        label_5->setText(QCoreApplication::translate("RegistrationBtn", "\345\272\212\344\275\215\350\264\271", nullptr));
        btnAdd->setText(QCoreApplication::translate("RegistrationBtn", "\347\241\256\350\256\244", nullptr));
        btnClear->setText(QCoreApplication::translate("RegistrationBtn", "\346\270\205\347\251\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegistrationBtn: public Ui_RegistrationBtn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRATIONBTN_H

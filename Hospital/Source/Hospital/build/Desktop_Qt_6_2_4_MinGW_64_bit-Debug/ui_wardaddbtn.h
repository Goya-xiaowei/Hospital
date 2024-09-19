/********************************************************************************
** Form generated from reading UI file 'wardaddbtn.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WARDADDBTN_H
#define UI_WARDADDBTN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WardAddBtn
{
public:
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_3;
    QLabel *label_6;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_2;
    QComboBox *comboBoxSectionRoom;
    QComboBox *comboBoxWardType;
    QLineEdit *lineEditAddress;
    QLineEdit *lineEditPrice;
    QLineEdit *lineEditId;
    QComboBox *comboBoxNumber;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btnSureAdd;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *btnClear;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *WardAddBtn)
    {
        if (WardAddBtn->objectName().isEmpty())
            WardAddBtn->setObjectName(QString::fromUtf8("WardAddBtn"));
        WardAddBtn->resize(679, 521);
        WardAddBtn->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_4 = new QHBoxLayout(WardAddBtn);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(WardAddBtn);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(WardAddBtn);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        label_5 = new QLabel(WardAddBtn);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout->addWidget(label_5);

        label_3 = new QLabel(WardAddBtn);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        label_6 = new QLabel(WardAddBtn);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout->addWidget(label_6);

        label_4 = new QLabel(WardAddBtn);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        comboBoxSectionRoom = new QComboBox(WardAddBtn);
        comboBoxSectionRoom->setObjectName(QString::fromUtf8("comboBoxSectionRoom"));

        verticalLayout_2->addWidget(comboBoxSectionRoom);

        comboBoxWardType = new QComboBox(WardAddBtn);
        comboBoxWardType->setObjectName(QString::fromUtf8("comboBoxWardType"));

        verticalLayout_2->addWidget(comboBoxWardType);

        lineEditAddress = new QLineEdit(WardAddBtn);
        lineEditAddress->setObjectName(QString::fromUtf8("lineEditAddress"));

        verticalLayout_2->addWidget(lineEditAddress);

        lineEditPrice = new QLineEdit(WardAddBtn);
        lineEditPrice->setObjectName(QString::fromUtf8("lineEditPrice"));

        verticalLayout_2->addWidget(lineEditPrice);

        lineEditId = new QLineEdit(WardAddBtn);
        lineEditId->setObjectName(QString::fromUtf8("lineEditId"));

        verticalLayout_2->addWidget(lineEditId);

        comboBoxNumber = new QComboBox(WardAddBtn);
        comboBoxNumber->setObjectName(QString::fromUtf8("comboBoxNumber"));

        verticalLayout_2->addWidget(comboBoxNumber);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        btnSureAdd = new QPushButton(WardAddBtn);
        btnSureAdd->setObjectName(QString::fromUtf8("btnSureAdd"));

        horizontalLayout_2->addWidget(btnSureAdd);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        btnClear = new QPushButton(WardAddBtn);
        btnClear->setObjectName(QString::fromUtf8("btnClear"));

        horizontalLayout_2->addWidget(btnClear);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout_3->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        horizontalLayout_4->addLayout(horizontalLayout_3);


        retranslateUi(WardAddBtn);

        QMetaObject::connectSlotsByName(WardAddBtn);
    } // setupUi

    void retranslateUi(QWidget *WardAddBtn)
    {
        WardAddBtn->setWindowTitle(QCoreApplication::translate("WardAddBtn", "Form", nullptr));
        label->setText(QCoreApplication::translate("WardAddBtn", "\347\227\205\346\210\277\347\247\221\345\256\244", nullptr));
        label_2->setText(QCoreApplication::translate("WardAddBtn", "\347\227\205\346\210\277\347\261\273\345\236\213", nullptr));
        label_5->setText(QCoreApplication::translate("WardAddBtn", "\347\227\205\346\210\277\345\234\260\345\235\200", nullptr));
        label_3->setText(QCoreApplication::translate("WardAddBtn", "\347\227\205\346\210\277\344\273\267\346\240\274", nullptr));
        label_6->setText(QCoreApplication::translate("WardAddBtn", "\347\227\205\346\210\277\345\217\267", nullptr));
        label_4->setText(QCoreApplication::translate("WardAddBtn", "\347\227\205\345\272\212\344\270\252\346\225\260", nullptr));
        btnSureAdd->setText(QCoreApplication::translate("WardAddBtn", "\347\241\256\345\256\232\346\267\273\345\212\240", nullptr));
        btnClear->setText(QCoreApplication::translate("WardAddBtn", "\346\270\205\347\251\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WardAddBtn: public Ui_WardAddBtn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WARDADDBTN_H

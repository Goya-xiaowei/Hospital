/********************************************************************************
** Form generated from reading UI file 'employeebtn.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPLOYEEBTN_H
#define UI_EMPLOYEEBTN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EmployeeBtn
{
public:
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_9;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_11;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEditUName;
    QLineEdit *lineEditName;
    QLineEdit *lineEditPassword;
    QLineEdit *lineEditSurePassword;
    QComboBox *comboBoxSex;
    QLineEdit *lineEditAddress;
    QLineEdit *lineEditPhone;
    QComboBox *comboBoxUserType;
    QComboBox *comboBoxSectionRoom;
    QLineEdit *lineEditMoney;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnCommit;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnReset;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_10;
    QTextEdit *textEditInformation;
    QSpacerItem *horizontalSpacer_5;

    void setupUi(QWidget *EmployeeBtn)
    {
        if (EmployeeBtn->objectName().isEmpty())
            EmployeeBtn->setObjectName(QString::fromUtf8("EmployeeBtn"));
        EmployeeBtn->resize(691, 535);
        horizontalLayout_4 = new QHBoxLayout(EmployeeBtn);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        groupBox = new QGroupBox(EmployeeBtn);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout_3 = new QHBoxLayout(groupBox);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(13);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(13);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout->addWidget(label_9);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout->addWidget(label_5);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout->addWidget(label_6);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout->addWidget(label_7);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout->addWidget(label_8);

        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        verticalLayout->addWidget(label_11);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(13);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lineEditUName = new QLineEdit(groupBox);
        lineEditUName->setObjectName(QString::fromUtf8("lineEditUName"));

        verticalLayout_2->addWidget(lineEditUName);

        lineEditName = new QLineEdit(groupBox);
        lineEditName->setObjectName(QString::fromUtf8("lineEditName"));

        verticalLayout_2->addWidget(lineEditName);

        lineEditPassword = new QLineEdit(groupBox);
        lineEditPassword->setObjectName(QString::fromUtf8("lineEditPassword"));

        verticalLayout_2->addWidget(lineEditPassword);

        lineEditSurePassword = new QLineEdit(groupBox);
        lineEditSurePassword->setObjectName(QString::fromUtf8("lineEditSurePassword"));

        verticalLayout_2->addWidget(lineEditSurePassword);

        comboBoxSex = new QComboBox(groupBox);
        comboBoxSex->setObjectName(QString::fromUtf8("comboBoxSex"));

        verticalLayout_2->addWidget(comboBoxSex);

        lineEditAddress = new QLineEdit(groupBox);
        lineEditAddress->setObjectName(QString::fromUtf8("lineEditAddress"));

        verticalLayout_2->addWidget(lineEditAddress);

        lineEditPhone = new QLineEdit(groupBox);
        lineEditPhone->setObjectName(QString::fromUtf8("lineEditPhone"));

        verticalLayout_2->addWidget(lineEditPhone);

        comboBoxUserType = new QComboBox(groupBox);
        comboBoxUserType->setObjectName(QString::fromUtf8("comboBoxUserType"));

        verticalLayout_2->addWidget(comboBoxUserType);

        comboBoxSectionRoom = new QComboBox(groupBox);
        comboBoxSectionRoom->setObjectName(QString::fromUtf8("comboBoxSectionRoom"));

        verticalLayout_2->addWidget(comboBoxSectionRoom);

        lineEditMoney = new QLineEdit(groupBox);
        lineEditMoney->setObjectName(QString::fromUtf8("lineEditMoney"));

        verticalLayout_2->addWidget(lineEditMoney);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        btnCommit = new QPushButton(groupBox);
        btnCommit->setObjectName(QString::fromUtf8("btnCommit"));

        horizontalLayout_2->addWidget(btnCommit);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        btnReset = new QPushButton(groupBox);
        btnReset->setObjectName(QString::fromUtf8("btnReset"));

        horizontalLayout_2->addWidget(btnReset);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout_3->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout_4->addWidget(label_10);

        textEditInformation = new QTextEdit(groupBox);
        textEditInformation->setObjectName(QString::fromUtf8("textEditInformation"));

        verticalLayout_4->addWidget(textEditInformation);


        horizontalLayout_3->addLayout(verticalLayout_4);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);


        horizontalLayout_4->addWidget(groupBox);


        retranslateUi(EmployeeBtn);

        QMetaObject::connectSlotsByName(EmployeeBtn);
    } // setupUi

    void retranslateUi(QWidget *EmployeeBtn)
    {
        EmployeeBtn->setWindowTitle(QCoreApplication::translate("EmployeeBtn", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("EmployeeBtn", "\345\221\230\345\267\245\346\267\273\345\212\240", nullptr));
        label->setText(QCoreApplication::translate("EmployeeBtn", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("EmployeeBtn", "\347\224\250\346\210\267\345\247\223\345\220\215\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("EmployeeBtn", "\347\224\250\346\210\267\345\257\206\347\240\201\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("EmployeeBtn", "\347\241\256\350\256\244\345\257\206\347\240\201\357\274\232", nullptr));
        label_9->setText(QCoreApplication::translate("EmployeeBtn", "\346\200\247\345\210\253\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("EmployeeBtn", "\345\234\260\345\235\200\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("EmployeeBtn", "\350\201\224\347\263\273\347\224\265\350\257\235\357\274\232", nullptr));
        label_7->setText(QCoreApplication::translate("EmployeeBtn", "\347\261\273\345\236\213\357\274\232", nullptr));
        label_8->setText(QCoreApplication::translate("EmployeeBtn", "\347\247\221\345\256\244\357\274\232", nullptr));
        label_11->setText(QCoreApplication::translate("EmployeeBtn", "\346\214\202\345\217\267\350\264\271\347\224\250\357\274\232", nullptr));
        btnCommit->setText(QCoreApplication::translate("EmployeeBtn", "\346\217\220\344\272\244", nullptr));
        btnReset->setText(QCoreApplication::translate("EmployeeBtn", "\351\207\215\347\275\256", nullptr));
        label_10->setText(QCoreApplication::translate("EmployeeBtn", "\344\270\252\344\272\272\347\256\200\344\273\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EmployeeBtn: public Ui_EmployeeBtn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPLOYEEBTN_H

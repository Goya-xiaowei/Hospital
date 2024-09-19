/********************************************************************************
** Form generated from reading UI file 'patientregistrationbtn.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATIENTREGISTRATIONBTN_H
#define UI_PATIENTREGISTRATIONBTN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PatientRegistrationBtn
{
public:
    QVBoxLayout *verticalLayout_15;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkBox;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEditRegistered;
    QLineEdit *lineEditCard;
    QLineEdit *lineEditOtherMoney;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_4;
    QComboBox *comboBoxRegisteredType;
    QComboBox *comboBoxSectionRoom;
    QDateEdit *dateRegistration;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_7;
    QVBoxLayout *verticalLayout_6;
    QComboBox *comboBoxDoctor;
    QLineEdit *lineEditRegisteredMoney;
    QDateEdit *dateVisit;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_12;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_19;
    QVBoxLayout *verticalLayout_8;
    QLineEdit *lineEditName;
    QSpacerItem *verticalSpacer_4;
    QLineEdit *lineEditAddress;
    QSpacerItem *verticalSpacer_3;
    QComboBox *comboBoxCulture;
    QSpacerItem *verticalSpacer_2;
    QComboBox *comboBoxMarriage;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_20;
    QVBoxLayout *verticalLayout_10;
    QLineEdit *lineEditIdCard;
    QSpacerItem *verticalSpacer_5;
    QLineEdit *lineEditPhone;
    QSpacerItem *verticalSpacer_6;
    QComboBox *comboBoxProfessional;
    QSpacerItem *verticalSpacer;
    QComboBox *comboBoxSex;
    QVBoxLayout *verticalLayout_13;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_21;
    QVBoxLayout *verticalLayout_14;
    QLineEdit *lineEditAge;
    QSpacerItem *verticalSpacer_7;
    QComboBox *comboBoxEthnicGroup;
    QSpacerItem *verticalSpacer_8;
    QLineEdit *lineEditZipCode;
    QSpacerItem *verticalSpacer_9;
    QDateEdit *birthDate;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnCommit;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btnClear;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QWidget *PatientRegistrationBtn)
    {
        if (PatientRegistrationBtn->objectName().isEmpty())
            PatientRegistrationBtn->setObjectName(QString::fromUtf8("PatientRegistrationBtn"));
        PatientRegistrationBtn->resize(974, 541);
        PatientRegistrationBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        verticalLayout_15 = new QVBoxLayout(PatientRegistrationBtn);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        groupBox = new QGroupBox(PatientRegistrationBtn);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_7 = new QVBoxLayout(groupBox);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        horizontalLayout_2->addWidget(checkBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_7->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
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


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lineEditRegistered = new QLineEdit(groupBox);
        lineEditRegistered->setObjectName(QString::fromUtf8("lineEditRegistered"));

        verticalLayout_2->addWidget(lineEditRegistered);

        lineEditCard = new QLineEdit(groupBox);
        lineEditCard->setObjectName(QString::fromUtf8("lineEditCard"));

        verticalLayout_2->addWidget(lineEditCard);

        lineEditOtherMoney = new QLineEdit(groupBox);
        lineEditOtherMoney->setObjectName(QString::fromUtf8("lineEditOtherMoney"));

        verticalLayout_2->addWidget(lineEditOtherMoney);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_3->addWidget(label_5);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_3->addWidget(label_6);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_3->addWidget(label_4);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        comboBoxRegisteredType = new QComboBox(groupBox);
        comboBoxRegisteredType->setObjectName(QString::fromUtf8("comboBoxRegisteredType"));

        verticalLayout_4->addWidget(comboBoxRegisteredType);

        comboBoxSectionRoom = new QComboBox(groupBox);
        comboBoxSectionRoom->setObjectName(QString::fromUtf8("comboBoxSectionRoom"));

        verticalLayout_4->addWidget(comboBoxSectionRoom);

        dateRegistration = new QDateEdit(groupBox);
        dateRegistration->setObjectName(QString::fromUtf8("dateRegistration"));
        dateRegistration->setStyleSheet(QString::fromUtf8("QDateTimeEdit::drop-down { image: url(:/image/datetime.png); }"));
        dateRegistration->setCalendarPopup(true);

        verticalLayout_4->addWidget(dateRegistration);


        horizontalLayout->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout_5->addWidget(label_8);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout_5->addWidget(label_9);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_5->addWidget(label_7);


        horizontalLayout->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        comboBoxDoctor = new QComboBox(groupBox);
        comboBoxDoctor->setObjectName(QString::fromUtf8("comboBoxDoctor"));

        verticalLayout_6->addWidget(comboBoxDoctor);

        lineEditRegisteredMoney = new QLineEdit(groupBox);
        lineEditRegisteredMoney->setObjectName(QString::fromUtf8("lineEditRegisteredMoney"));

        verticalLayout_6->addWidget(lineEditRegisteredMoney);

        dateVisit = new QDateEdit(groupBox);
        dateVisit->setObjectName(QString::fromUtf8("dateVisit"));
        dateVisit->setStyleSheet(QString::fromUtf8("QDateEdit::drop-down { image: url(:/image/datetime.png); }"));
        dateVisit->setCalendarPopup(true);

        verticalLayout_6->addWidget(dateVisit);


        horizontalLayout->addLayout(verticalLayout_6);


        verticalLayout_7->addLayout(horizontalLayout);


        verticalLayout_15->addWidget(groupBox);

        groupBox_2 = new QGroupBox(PatientRegistrationBtn);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_12 = new QVBoxLayout(groupBox_2);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout_9->addWidget(label_10);

        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        verticalLayout_9->addWidget(label_11);

        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        verticalLayout_9->addWidget(label_12);

        label_19 = new QLabel(groupBox_2);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        verticalLayout_9->addWidget(label_19);


        horizontalLayout_5->addLayout(verticalLayout_9);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        lineEditName = new QLineEdit(groupBox_2);
        lineEditName->setObjectName(QString::fromUtf8("lineEditName"));

        verticalLayout_8->addWidget(lineEditName);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_4);

        lineEditAddress = new QLineEdit(groupBox_2);
        lineEditAddress->setObjectName(QString::fromUtf8("lineEditAddress"));

        verticalLayout_8->addWidget(lineEditAddress);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_3);

        comboBoxCulture = new QComboBox(groupBox_2);
        comboBoxCulture->setObjectName(QString::fromUtf8("comboBoxCulture"));

        verticalLayout_8->addWidget(comboBoxCulture);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_2);

        comboBoxMarriage = new QComboBox(groupBox_2);
        comboBoxMarriage->setObjectName(QString::fromUtf8("comboBoxMarriage"));

        verticalLayout_8->addWidget(comboBoxMarriage);


        horizontalLayout_5->addLayout(verticalLayout_8);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        label_13 = new QLabel(groupBox_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        verticalLayout_11->addWidget(label_13);

        label_14 = new QLabel(groupBox_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        verticalLayout_11->addWidget(label_14);

        label_15 = new QLabel(groupBox_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        verticalLayout_11->addWidget(label_15);

        label_20 = new QLabel(groupBox_2);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        verticalLayout_11->addWidget(label_20);


        horizontalLayout_5->addLayout(verticalLayout_11);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        lineEditIdCard = new QLineEdit(groupBox_2);
        lineEditIdCard->setObjectName(QString::fromUtf8("lineEditIdCard"));

        verticalLayout_10->addWidget(lineEditIdCard);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_5);

        lineEditPhone = new QLineEdit(groupBox_2);
        lineEditPhone->setObjectName(QString::fromUtf8("lineEditPhone"));

        verticalLayout_10->addWidget(lineEditPhone);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_6);

        comboBoxProfessional = new QComboBox(groupBox_2);
        comboBoxProfessional->setObjectName(QString::fromUtf8("comboBoxProfessional"));

        verticalLayout_10->addWidget(comboBoxProfessional);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer);

        comboBoxSex = new QComboBox(groupBox_2);
        comboBoxSex->setObjectName(QString::fromUtf8("comboBoxSex"));

        verticalLayout_10->addWidget(comboBoxSex);

        verticalLayout_10->setStretch(0, 1);
        verticalLayout_10->setStretch(2, 1);
        verticalLayout_10->setStretch(4, 1);

        horizontalLayout_5->addLayout(verticalLayout_10);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        label_16 = new QLabel(groupBox_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        verticalLayout_13->addWidget(label_16);

        label_17 = new QLabel(groupBox_2);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        verticalLayout_13->addWidget(label_17);

        label_18 = new QLabel(groupBox_2);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        verticalLayout_13->addWidget(label_18);

        label_21 = new QLabel(groupBox_2);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        verticalLayout_13->addWidget(label_21);


        horizontalLayout_5->addLayout(verticalLayout_13);

        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        lineEditAge = new QLineEdit(groupBox_2);
        lineEditAge->setObjectName(QString::fromUtf8("lineEditAge"));

        verticalLayout_14->addWidget(lineEditAge);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_14->addItem(verticalSpacer_7);

        comboBoxEthnicGroup = new QComboBox(groupBox_2);
        comboBoxEthnicGroup->setObjectName(QString::fromUtf8("comboBoxEthnicGroup"));

        verticalLayout_14->addWidget(comboBoxEthnicGroup);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_14->addItem(verticalSpacer_8);

        lineEditZipCode = new QLineEdit(groupBox_2);
        lineEditZipCode->setObjectName(QString::fromUtf8("lineEditZipCode"));

        verticalLayout_14->addWidget(lineEditZipCode);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_14->addItem(verticalSpacer_9);

        birthDate = new QDateEdit(groupBox_2);
        birthDate->setObjectName(QString::fromUtf8("birthDate"));
        birthDate->setStyleSheet(QString::fromUtf8("QDateEdit::drop-down { image: url(:/image/datetime.png); }"));
        birthDate->setCalendarPopup(true);

        verticalLayout_14->addWidget(birthDate);


        horizontalLayout_5->addLayout(verticalLayout_14);


        verticalLayout_12->addLayout(horizontalLayout_5);


        verticalLayout_15->addWidget(groupBox_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        btnCommit = new QPushButton(PatientRegistrationBtn);
        btnCommit->setObjectName(QString::fromUtf8("btnCommit"));

        horizontalLayout_6->addWidget(btnCommit);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);

        btnClear = new QPushButton(PatientRegistrationBtn);
        btnClear->setObjectName(QString::fromUtf8("btnClear"));

        horizontalLayout_6->addWidget(btnClear);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);


        verticalLayout_15->addLayout(horizontalLayout_6);

        verticalLayout_15->setStretch(0, 1);
        verticalLayout_15->setStretch(1, 1);

        retranslateUi(PatientRegistrationBtn);

        QMetaObject::connectSlotsByName(PatientRegistrationBtn);
    } // setupUi

    void retranslateUi(QWidget *PatientRegistrationBtn)
    {
        PatientRegistrationBtn->setWindowTitle(QCoreApplication::translate("PatientRegistrationBtn", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("PatientRegistrationBtn", "\346\214\202\345\217\267\344\277\241\346\201\257", nullptr));
        checkBox->setText(QCoreApplication::translate("PatientRegistrationBtn", "CheckBox", nullptr));
        label->setText(QCoreApplication::translate("PatientRegistrationBtn", "\346\214\202\345\217\267\345\215\225\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("PatientRegistrationBtn", "\345\214\273\347\226\227\345\215\241\345\215\241\345\217\267\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("PatientRegistrationBtn", "\345\205\266\344\273\226\350\264\271\347\224\250\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("PatientRegistrationBtn", "\345\217\267\347\261\273\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("PatientRegistrationBtn", "\347\247\221\345\256\244\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("PatientRegistrationBtn", "\346\214\202\345\217\267\346\227\245\346\234\237\357\274\232", nullptr));
        dateRegistration->setDisplayFormat(QCoreApplication::translate("PatientRegistrationBtn", "yyyy-MM-dd", nullptr));
        label_8->setText(QCoreApplication::translate("PatientRegistrationBtn", "\345\214\273\345\270\210\357\274\232", nullptr));
        label_9->setText(QCoreApplication::translate("PatientRegistrationBtn", "\346\214\202\345\217\267\350\264\271\347\224\250\357\274\232", nullptr));
        label_7->setText(QCoreApplication::translate("PatientRegistrationBtn", "\345\260\261\350\257\212\346\227\245\346\234\237\357\274\232", nullptr));
        dateVisit->setDisplayFormat(QCoreApplication::translate("PatientRegistrationBtn", "yyyy-MM-dd", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("PatientRegistrationBtn", "\347\227\205\344\272\272\344\277\241\346\201\257", nullptr));
        label_10->setText(QCoreApplication::translate("PatientRegistrationBtn", "\345\247\223\345\220\215\357\274\232", nullptr));
        label_11->setText(QCoreApplication::translate("PatientRegistrationBtn", "\344\275\217\345\235\200\357\274\232", nullptr));
        label_12->setText(QCoreApplication::translate("PatientRegistrationBtn", "\346\226\207\345\214\226\357\274\232", nullptr));
        label_19->setText(QCoreApplication::translate("PatientRegistrationBtn", "\345\251\232\345\247\273\347\212\266\345\206\265\357\274\232", nullptr));
        label_13->setText(QCoreApplication::translate("PatientRegistrationBtn", "\350\272\253\344\273\275\350\257\201\345\217\267\357\274\232", nullptr));
        label_14->setText(QCoreApplication::translate("PatientRegistrationBtn", "\347\224\265\350\257\235\357\274\232", nullptr));
        label_15->setText(QCoreApplication::translate("PatientRegistrationBtn", "\350\201\214\344\270\232\357\274\232", nullptr));
        label_20->setText(QCoreApplication::translate("PatientRegistrationBtn", "\346\200\247\345\210\253\357\274\232", nullptr));
        label_16->setText(QCoreApplication::translate("PatientRegistrationBtn", "\345\271\264\351\276\204", nullptr));
        label_17->setText(QCoreApplication::translate("PatientRegistrationBtn", "\345\220\215\346\227\217\357\274\232", nullptr));
        label_18->setText(QCoreApplication::translate("PatientRegistrationBtn", "\351\202\256\346\224\277\347\274\226\347\240\201\357\274\232", nullptr));
        label_21->setText(QCoreApplication::translate("PatientRegistrationBtn", "\345\207\272\347\224\237\346\227\245\346\234\237", nullptr));
        birthDate->setDisplayFormat(QCoreApplication::translate("PatientRegistrationBtn", "yyyy-MM-dd", nullptr));
        btnCommit->setText(QCoreApplication::translate("PatientRegistrationBtn", "\346\217\220\344\272\244", nullptr));
        btnClear->setText(QCoreApplication::translate("PatientRegistrationBtn", "\346\270\205\347\251\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PatientRegistrationBtn: public Ui_PatientRegistrationBtn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATIENTREGISTRATIONBTN_H

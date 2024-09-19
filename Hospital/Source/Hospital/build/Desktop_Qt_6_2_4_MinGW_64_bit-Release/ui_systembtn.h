/********************************************************************************
** Form generated from reading UI file 'systembtn.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYSTEMBTN_H
#define UI_SYSTEMBTN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SystemBtn
{
public:
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_8;
    QGroupBox *groupBox;
    QListView *listViewUserType;
    QGroupBox *groupBox_2;
    QTreeView *treeViewUser;
    QVBoxLayout *verticalLayout_7;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *lineEditName;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEditUserType;
    QLabel *label_3;
    QLineEdit *lineEditUserName;
    QCheckBox *checkBoxAll;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btnSave;
    QSpacerItem *verticalSpacer_10;
    QGridLayout *gridLayout_3;
    QFrame *frame_8;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *checkBoxDrugManage;
    QCheckBox *checkBoxDrugManage1;
    QCheckBox *checkBoxDrugManage2;
    QCheckBox *checkBoxDrugManage4;
    QCheckBox *checkBoxDrugManage3;
    QSpacerItem *verticalSpacer_8;
    QFrame *frame_7;
    QVBoxLayout *verticalLayout_6;
    QCheckBox *checkBoxOutPatientCharges;
    QCheckBox *checkBoxOutPatientCharges1;
    QCheckBox *checkBoxOutPatientCharges2;
    QSpacerItem *verticalSpacer;
    QFrame *frame_5;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBoxPharmacyManage;
    QCheckBox *checkBoxPharmacyManage1;
    QCheckBox *checkBoxPharmacyManage2;
    QSpacerItem *verticalSpacer_2;
    QFrame *frame_4;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *checkBoxFinanceManage;
    QCheckBox *checkBoxFinanceManage1;
    QCheckBox *checkBoxFinanceManage3;
    QCheckBox *checkBoxFinanceManage2;
    QSpacerItem *verticalSpacer_6;
    QFrame *frame_6;
    QGridLayout *gridLayout;
    QCheckBox *checkBoxHospManage2;
    QCheckBox *checkBoxHospManage7;
    QCheckBox *checkBoxHospManage5;
    QCheckBox *checkBoxHospManage9;
    QCheckBox *checkBoxHospManage8;
    QCheckBox *checkBoxHospManage6;
    QCheckBox *checkBoxHospManage4;
    QCheckBox *checkBoxHospManage1;
    QCheckBox *checkBoxHospManage3;
    QCheckBox *checkBoxHospManage;
    QSpacerItem *verticalSpacer_3;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *checkBoxOutpatientManage;
    QCheckBox *checkBoxOutpatientManage1;
    QCheckBox *checkBoxOutpatientManage2;
    QCheckBox *checkBoxOutpatientManage3;
    QCheckBox *checkBoxOutpatientManage5;
    QCheckBox *checkBoxOutpatientManage4;
    QSpacerItem *verticalSpacer_9;
    QFrame *frame_2;
    QGridLayout *gridLayout_2;
    QCheckBox *checkBoxSystemManage;
    QCheckBox *checkBoxSystemManage4;
    QCheckBox *checkBoxSystemManage2;
    QCheckBox *checkBoxSystemManage1;
    QCheckBox *checkBoxSystemManage7;
    QCheckBox *checkBoxSystemManage5;
    QCheckBox *checkBoxSystemManage6;
    QCheckBox *checkBoxSystemManage3;
    QCheckBox *checkBoxSystemManage8;
    QSpacerItem *verticalSpacer_5;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *checkBoxOutDoctor;
    QCheckBox *checkBoxOutDoctor1;
    QCheckBox *checkBoxOutDoctor2;
    QCheckBox *checkBoxOutDoctor3;
    QCheckBox *checkBoxOutDoctor4;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QWidget *SystemBtn)
    {
        if (SystemBtn->objectName().isEmpty())
            SystemBtn->setObjectName(QString::fromUtf8("SystemBtn"));
        SystemBtn->resize(1001, 787);
        horizontalLayout_5 = new QHBoxLayout(SystemBtn);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        groupBox = new QGroupBox(SystemBtn);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(101);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setMinimumSize(QSize(350, 0));
        groupBox->setMaximumSize(QSize(350, 350));
        listViewUserType = new QListView(groupBox);
        listViewUserType->setObjectName(QString::fromUtf8("listViewUserType"));
        listViewUserType->setGeometry(QRect(15, 37, 320, 281));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(listViewUserType->sizePolicy().hasHeightForWidth());
        listViewUserType->setSizePolicy(sizePolicy1);
        listViewUserType->setMinimumSize(QSize(320, 50));
        listViewUserType->setMaximumSize(QSize(320, 300));

        verticalLayout_8->addWidget(groupBox);

        groupBox_2 = new QGroupBox(SystemBtn);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setMinimumSize(QSize(350, 0));
        groupBox_2->setMaximumSize(QSize(350, 350));
        groupBox_2->setSizeIncrement(QSize(1, 0));
        treeViewUser = new QTreeView(groupBox_2);
        treeViewUser->setObjectName(QString::fromUtf8("treeViewUser"));
        treeViewUser->setGeometry(QRect(15, 37, 320, 200));
        sizePolicy1.setHeightForWidth(treeViewUser->sizePolicy().hasHeightForWidth());
        treeViewUser->setSizePolicy(sizePolicy1);
        treeViewUser->setMinimumSize(QSize(320, 200));
        treeViewUser->setMaximumSize(QSize(320, 200));

        verticalLayout_8->addWidget(groupBox_2);


        horizontalLayout_5->addLayout(verticalLayout_8);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        groupBox_3 = new QGroupBox(SystemBtn);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        horizontalLayout_4 = new QHBoxLayout(groupBox_3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(groupBox_3);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        lineEditName = new QLineEdit(groupBox_3);
        lineEditName->setObjectName(QString::fromUtf8("lineEditName"));

        horizontalLayout_3->addWidget(lineEditName);

        horizontalSpacer = new QSpacerItem(468, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        horizontalLayout_4->addLayout(horizontalLayout_3);


        verticalLayout_7->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(SystemBtn);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_4);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(groupBox_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEditUserType = new QLineEdit(groupBox_4);
        lineEditUserType->setObjectName(QString::fromUtf8("lineEditUserType"));

        horizontalLayout->addWidget(lineEditUserType);

        label_3 = new QLabel(groupBox_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        lineEditUserName = new QLineEdit(groupBox_4);
        lineEditUserName->setObjectName(QString::fromUtf8("lineEditUserName"));

        horizontalLayout->addWidget(lineEditUserName);

        checkBoxAll = new QCheckBox(groupBox_4);
        checkBoxAll->setObjectName(QString::fromUtf8("checkBoxAll"));

        horizontalLayout->addWidget(checkBoxAll);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        btnSave = new QPushButton(groupBox_4);
        btnSave->setObjectName(QString::fromUtf8("btnSave"));

        horizontalLayout->addWidget(btnSave);


        horizontalLayout_2->addLayout(horizontalLayout);


        verticalLayout_7->addWidget(groupBox_4);

        verticalSpacer_10 = new QSpacerItem(609, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_10);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        frame_8 = new QFrame(SystemBtn);
        frame_8->setObjectName(QString::fromUtf8("frame_8"));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(frame_8);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        checkBoxDrugManage = new QCheckBox(frame_8);
        checkBoxDrugManage->setObjectName(QString::fromUtf8("checkBoxDrugManage"));
        sizePolicy1.setHeightForWidth(checkBoxDrugManage->sizePolicy().hasHeightForWidth());
        checkBoxDrugManage->setSizePolicy(sizePolicy1);
        checkBoxDrugManage->setMinimumSize(QSize(60, 20));

        verticalLayout_5->addWidget(checkBoxDrugManage);

        checkBoxDrugManage1 = new QCheckBox(frame_8);
        checkBoxDrugManage1->setObjectName(QString::fromUtf8("checkBoxDrugManage1"));
        checkBoxDrugManage1->setEnabled(false);
        sizePolicy1.setHeightForWidth(checkBoxDrugManage1->sizePolicy().hasHeightForWidth());
        checkBoxDrugManage1->setSizePolicy(sizePolicy1);
        checkBoxDrugManage1->setMinimumSize(QSize(60, 20));

        verticalLayout_5->addWidget(checkBoxDrugManage1);

        checkBoxDrugManage2 = new QCheckBox(frame_8);
        checkBoxDrugManage2->setObjectName(QString::fromUtf8("checkBoxDrugManage2"));
        checkBoxDrugManage2->setEnabled(false);
        sizePolicy1.setHeightForWidth(checkBoxDrugManage2->sizePolicy().hasHeightForWidth());
        checkBoxDrugManage2->setSizePolicy(sizePolicy1);
        checkBoxDrugManage2->setMinimumSize(QSize(60, 20));

        verticalLayout_5->addWidget(checkBoxDrugManage2);

        checkBoxDrugManage4 = new QCheckBox(frame_8);
        checkBoxDrugManage4->setObjectName(QString::fromUtf8("checkBoxDrugManage4"));
        checkBoxDrugManage4->setEnabled(false);
        sizePolicy1.setHeightForWidth(checkBoxDrugManage4->sizePolicy().hasHeightForWidth());
        checkBoxDrugManage4->setSizePolicy(sizePolicy1);
        checkBoxDrugManage4->setMinimumSize(QSize(60, 20));

        verticalLayout_5->addWidget(checkBoxDrugManage4);

        checkBoxDrugManage3 = new QCheckBox(frame_8);
        checkBoxDrugManage3->setObjectName(QString::fromUtf8("checkBoxDrugManage3"));
        checkBoxDrugManage3->setEnabled(false);
        sizePolicy1.setHeightForWidth(checkBoxDrugManage3->sizePolicy().hasHeightForWidth());
        checkBoxDrugManage3->setSizePolicy(sizePolicy1);
        checkBoxDrugManage3->setMinimumSize(QSize(60, 20));

        verticalLayout_5->addWidget(checkBoxDrugManage3);

        verticalSpacer_8 = new QSpacerItem(20, 103, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_8);


        gridLayout_3->addWidget(frame_8, 1, 4, 1, 1);

        frame_7 = new QFrame(SystemBtn);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        verticalLayout_6 = new QVBoxLayout(frame_7);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        checkBoxOutPatientCharges = new QCheckBox(frame_7);
        checkBoxOutPatientCharges->setObjectName(QString::fromUtf8("checkBoxOutPatientCharges"));
        sizePolicy1.setHeightForWidth(checkBoxOutPatientCharges->sizePolicy().hasHeightForWidth());
        checkBoxOutPatientCharges->setSizePolicy(sizePolicy1);
        checkBoxOutPatientCharges->setMinimumSize(QSize(60, 20));

        verticalLayout_6->addWidget(checkBoxOutPatientCharges);

        checkBoxOutPatientCharges1 = new QCheckBox(frame_7);
        checkBoxOutPatientCharges1->setObjectName(QString::fromUtf8("checkBoxOutPatientCharges1"));
        checkBoxOutPatientCharges1->setEnabled(false);
        sizePolicy1.setHeightForWidth(checkBoxOutPatientCharges1->sizePolicy().hasHeightForWidth());
        checkBoxOutPatientCharges1->setSizePolicy(sizePolicy1);
        checkBoxOutPatientCharges1->setMinimumSize(QSize(60, 20));

        verticalLayout_6->addWidget(checkBoxOutPatientCharges1);

        checkBoxOutPatientCharges2 = new QCheckBox(frame_7);
        checkBoxOutPatientCharges2->setObjectName(QString::fromUtf8("checkBoxOutPatientCharges2"));
        checkBoxOutPatientCharges2->setEnabled(false);
        sizePolicy1.setHeightForWidth(checkBoxOutPatientCharges2->sizePolicy().hasHeightForWidth());
        checkBoxOutPatientCharges2->setSizePolicy(sizePolicy1);
        checkBoxOutPatientCharges2->setMinimumSize(QSize(60, 20));

        verticalLayout_6->addWidget(checkBoxOutPatientCharges2);

        verticalSpacer = new QSpacerItem(20, 176, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer);


        gridLayout_3->addWidget(frame_7, 1, 3, 1, 1);

        frame_5 = new QFrame(SystemBtn);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame_5);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        checkBoxPharmacyManage = new QCheckBox(frame_5);
        checkBoxPharmacyManage->setObjectName(QString::fromUtf8("checkBoxPharmacyManage"));
        sizePolicy1.setHeightForWidth(checkBoxPharmacyManage->sizePolicy().hasHeightForWidth());
        checkBoxPharmacyManage->setSizePolicy(sizePolicy1);
        checkBoxPharmacyManage->setMinimumSize(QSize(60, 20));

        verticalLayout->addWidget(checkBoxPharmacyManage);

        checkBoxPharmacyManage1 = new QCheckBox(frame_5);
        checkBoxPharmacyManage1->setObjectName(QString::fromUtf8("checkBoxPharmacyManage1"));
        checkBoxPharmacyManage1->setEnabled(false);
        sizePolicy1.setHeightForWidth(checkBoxPharmacyManage1->sizePolicy().hasHeightForWidth());
        checkBoxPharmacyManage1->setSizePolicy(sizePolicy1);
        checkBoxPharmacyManage1->setMinimumSize(QSize(60, 20));

        verticalLayout->addWidget(checkBoxPharmacyManage1);

        checkBoxPharmacyManage2 = new QCheckBox(frame_5);
        checkBoxPharmacyManage2->setObjectName(QString::fromUtf8("checkBoxPharmacyManage2"));
        checkBoxPharmacyManage2->setEnabled(false);
        sizePolicy1.setHeightForWidth(checkBoxPharmacyManage2->sizePolicy().hasHeightForWidth());
        checkBoxPharmacyManage2->setSizePolicy(sizePolicy1);
        checkBoxPharmacyManage2->setMinimumSize(QSize(60, 20));

        verticalLayout->addWidget(checkBoxPharmacyManage2);

        verticalSpacer_2 = new QSpacerItem(20, 156, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        gridLayout_3->addWidget(frame_5, 1, 1, 1, 1);

        frame_4 = new QFrame(SystemBtn);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_4);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        checkBoxFinanceManage = new QCheckBox(frame_4);
        checkBoxFinanceManage->setObjectName(QString::fromUtf8("checkBoxFinanceManage"));
        sizePolicy1.setHeightForWidth(checkBoxFinanceManage->sizePolicy().hasHeightForWidth());
        checkBoxFinanceManage->setSizePolicy(sizePolicy1);
        checkBoxFinanceManage->setMinimumSize(QSize(60, 20));

        verticalLayout_4->addWidget(checkBoxFinanceManage);

        checkBoxFinanceManage1 = new QCheckBox(frame_4);
        checkBoxFinanceManage1->setObjectName(QString::fromUtf8("checkBoxFinanceManage1"));
        checkBoxFinanceManage1->setEnabled(false);
        sizePolicy1.setHeightForWidth(checkBoxFinanceManage1->sizePolicy().hasHeightForWidth());
        checkBoxFinanceManage1->setSizePolicy(sizePolicy1);
        checkBoxFinanceManage1->setMinimumSize(QSize(60, 20));

        verticalLayout_4->addWidget(checkBoxFinanceManage1);

        checkBoxFinanceManage3 = new QCheckBox(frame_4);
        checkBoxFinanceManage3->setObjectName(QString::fromUtf8("checkBoxFinanceManage3"));
        checkBoxFinanceManage3->setEnabled(false);
        sizePolicy1.setHeightForWidth(checkBoxFinanceManage3->sizePolicy().hasHeightForWidth());
        checkBoxFinanceManage3->setSizePolicy(sizePolicy1);
        checkBoxFinanceManage3->setMinimumSize(QSize(60, 20));

        verticalLayout_4->addWidget(checkBoxFinanceManage3);

        checkBoxFinanceManage2 = new QCheckBox(frame_4);
        checkBoxFinanceManage2->setObjectName(QString::fromUtf8("checkBoxFinanceManage2"));
        checkBoxFinanceManage2->setEnabled(false);
        sizePolicy1.setHeightForWidth(checkBoxFinanceManage2->sizePolicy().hasHeightForWidth());
        checkBoxFinanceManage2->setSizePolicy(sizePolicy1);
        checkBoxFinanceManage2->setMinimumSize(QSize(60, 20));

        verticalLayout_4->addWidget(checkBoxFinanceManage2);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_6);


        gridLayout_3->addWidget(frame_4, 0, 4, 1, 1);

        frame_6 = new QFrame(SystemBtn);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        checkBoxHospManage2 = new QCheckBox(frame_6);
        checkBoxHospManage2->setObjectName(QString::fromUtf8("checkBoxHospManage2"));
        checkBoxHospManage2->setEnabled(false);
        sizePolicy1.setHeightForWidth(checkBoxHospManage2->sizePolicy().hasHeightForWidth());
        checkBoxHospManage2->setSizePolicy(sizePolicy1);
        checkBoxHospManage2->setMinimumSize(QSize(60, 20));

        gridLayout->addWidget(checkBoxHospManage2, 1, 1, 1, 1);

        checkBoxHospManage7 = new QCheckBox(frame_6);
        checkBoxHospManage7->setObjectName(QString::fromUtf8("checkBoxHospManage7"));
        checkBoxHospManage7->setEnabled(false);
        sizePolicy1.setHeightForWidth(checkBoxHospManage7->sizePolicy().hasHeightForWidth());
        checkBoxHospManage7->setSizePolicy(sizePolicy1);
        checkBoxHospManage7->setMinimumSize(QSize(60, 20));

        gridLayout->addWidget(checkBoxHospManage7, 4, 0, 1, 1);

        checkBoxHospManage5 = new QCheckBox(frame_6);
        checkBoxHospManage5->setObjectName(QString::fromUtf8("checkBoxHospManage5"));
        checkBoxHospManage5->setEnabled(false);
        sizePolicy1.setHeightForWidth(checkBoxHospManage5->sizePolicy().hasHeightForWidth());
        checkBoxHospManage5->setSizePolicy(sizePolicy1);
        checkBoxHospManage5->setMinimumSize(QSize(60, 20));

        gridLayout->addWidget(checkBoxHospManage5, 3, 0, 1, 1);

        checkBoxHospManage9 = new QCheckBox(frame_6);
        checkBoxHospManage9->setObjectName(QString::fromUtf8("checkBoxHospManage9"));
        checkBoxHospManage9->setEnabled(false);
        sizePolicy1.setHeightForWidth(checkBoxHospManage9->sizePolicy().hasHeightForWidth());
        checkBoxHospManage9->setSizePolicy(sizePolicy1);
        checkBoxHospManage9->setMinimumSize(QSize(60, 20));

        gridLayout->addWidget(checkBoxHospManage9, 5, 0, 1, 1);

        checkBoxHospManage8 = new QCheckBox(frame_6);
        checkBoxHospManage8->setObjectName(QString::fromUtf8("checkBoxHospManage8"));
        checkBoxHospManage8->setEnabled(false);
        sizePolicy1.setHeightForWidth(checkBoxHospManage8->sizePolicy().hasHeightForWidth());
        checkBoxHospManage8->setSizePolicy(sizePolicy1);
        checkBoxHospManage8->setMinimumSize(QSize(60, 20));

        gridLayout->addWidget(checkBoxHospManage8, 4, 1, 1, 1);

        checkBoxHospManage6 = new QCheckBox(frame_6);
        checkBoxHospManage6->setObjectName(QString::fromUtf8("checkBoxHospManage6"));
        checkBoxHospManage6->setEnabled(false);
        sizePolicy1.setHeightForWidth(checkBoxHospManage6->sizePolicy().hasHeightForWidth());
        checkBoxHospManage6->setSizePolicy(sizePolicy1);
        checkBoxHospManage6->setMinimumSize(QSize(60, 20));

        gridLayout->addWidget(checkBoxHospManage6, 3, 1, 1, 1);

        checkBoxHospManage4 = new QCheckBox(frame_6);
        checkBoxHospManage4->setObjectName(QString::fromUtf8("checkBoxHospManage4"));
        checkBoxHospManage4->setEnabled(false);
        sizePolicy1.setHeightForWidth(checkBoxHospManage4->sizePolicy().hasHeightForWidth());
        checkBoxHospManage4->setSizePolicy(sizePolicy1);
        checkBoxHospManage4->setMinimumSize(QSize(60, 20));

        gridLayout->addWidget(checkBoxHospManage4, 2, 1, 1, 1);

        checkBoxHospManage1 = new QCheckBox(frame_6);
        checkBoxHospManage1->setObjectName(QString::fromUtf8("checkBoxHospManage1"));
        checkBoxHospManage1->setEnabled(false);
        sizePolicy1.setHeightForWidth(checkBoxHospManage1->sizePolicy().hasHeightForWidth());
        checkBoxHospManage1->setSizePolicy(sizePolicy1);
        checkBoxHospManage1->setMinimumSize(QSize(60, 20));

        gridLayout->addWidget(checkBoxHospManage1, 1, 0, 1, 1);

        checkBoxHospManage3 = new QCheckBox(frame_6);
        checkBoxHospManage3->setObjectName(QString::fromUtf8("checkBoxHospManage3"));
        checkBoxHospManage3->setEnabled(false);
        sizePolicy1.setHeightForWidth(checkBoxHospManage3->sizePolicy().hasHeightForWidth());
        checkBoxHospManage3->setSizePolicy(sizePolicy1);
        checkBoxHospManage3->setMinimumSize(QSize(60, 20));

        gridLayout->addWidget(checkBoxHospManage3, 2, 0, 1, 1);

        checkBoxHospManage = new QCheckBox(frame_6);
        checkBoxHospManage->setObjectName(QString::fromUtf8("checkBoxHospManage"));
        sizePolicy1.setHeightForWidth(checkBoxHospManage->sizePolicy().hasHeightForWidth());
        checkBoxHospManage->setSizePolicy(sizePolicy1);
        checkBoxHospManage->setMinimumSize(QSize(60, 20));

        gridLayout->addWidget(checkBoxHospManage, 0, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 6, 0, 1, 1);


        gridLayout_3->addWidget(frame_6, 1, 2, 1, 1);

        frame_3 = new QFrame(SystemBtn);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        checkBoxOutpatientManage = new QCheckBox(frame_3);
        checkBoxOutpatientManage->setObjectName(QString::fromUtf8("checkBoxOutpatientManage"));
        sizePolicy1.setHeightForWidth(checkBoxOutpatientManage->sizePolicy().hasHeightForWidth());
        checkBoxOutpatientManage->setSizePolicy(sizePolicy1);
        checkBoxOutpatientManage->setMinimumSize(QSize(60, 20));

        verticalLayout_3->addWidget(checkBoxOutpatientManage);

        checkBoxOutpatientManage1 = new QCheckBox(frame_3);
        checkBoxOutpatientManage1->setObjectName(QString::fromUtf8("checkBoxOutpatientManage1"));
        checkBoxOutpatientManage1->setEnabled(false);
        sizePolicy1.setHeightForWidth(checkBoxOutpatientManage1->sizePolicy().hasHeightForWidth());
        checkBoxOutpatientManage1->setSizePolicy(sizePolicy1);
        checkBoxOutpatientManage1->setMinimumSize(QSize(60, 20));

        verticalLayout_3->addWidget(checkBoxOutpatientManage1);

        checkBoxOutpatientManage2 = new QCheckBox(frame_3);
        checkBoxOutpatientManage2->setObjectName(QString::fromUtf8("checkBoxOutpatientManage2"));
        checkBoxOutpatientManage2->setEnabled(false);
        sizePolicy1.setHeightForWidth(checkBoxOutpatientManage2->sizePolicy().hasHeightForWidth());
        checkBoxOutpatientManage2->setSizePolicy(sizePolicy1);
        checkBoxOutpatientManage2->setMinimumSize(QSize(60, 20));

        verticalLayout_3->addWidget(checkBoxOutpatientManage2);

        checkBoxOutpatientManage3 = new QCheckBox(frame_3);
        checkBoxOutpatientManage3->setObjectName(QString::fromUtf8("checkBoxOutpatientManage3"));
        checkBoxOutpatientManage3->setEnabled(false);
        sizePolicy1.setHeightForWidth(checkBoxOutpatientManage3->sizePolicy().hasHeightForWidth());
        checkBoxOutpatientManage3->setSizePolicy(sizePolicy1);
        checkBoxOutpatientManage3->setMinimumSize(QSize(60, 20));

        verticalLayout_3->addWidget(checkBoxOutpatientManage3);

        checkBoxOutpatientManage5 = new QCheckBox(frame_3);
        checkBoxOutpatientManage5->setObjectName(QString::fromUtf8("checkBoxOutpatientManage5"));
        checkBoxOutpatientManage5->setEnabled(false);
        sizePolicy1.setHeightForWidth(checkBoxOutpatientManage5->sizePolicy().hasHeightForWidth());
        checkBoxOutpatientManage5->setSizePolicy(sizePolicy1);
        checkBoxOutpatientManage5->setMinimumSize(QSize(60, 20));

        verticalLayout_3->addWidget(checkBoxOutpatientManage5);

        checkBoxOutpatientManage4 = new QCheckBox(frame_3);
        checkBoxOutpatientManage4->setObjectName(QString::fromUtf8("checkBoxOutpatientManage4"));
        checkBoxOutpatientManage4->setEnabled(false);
        sizePolicy1.setHeightForWidth(checkBoxOutpatientManage4->sizePolicy().hasHeightForWidth());
        checkBoxOutpatientManage4->setSizePolicy(sizePolicy1);
        checkBoxOutpatientManage4->setMinimumSize(QSize(60, 20));

        verticalLayout_3->addWidget(checkBoxOutpatientManage4);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_9);


        gridLayout_3->addWidget(frame_3, 0, 3, 1, 1);

        frame_2 = new QFrame(SystemBtn);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        checkBoxSystemManage = new QCheckBox(frame_2);
        checkBoxSystemManage->setObjectName(QString::fromUtf8("checkBoxSystemManage"));
        sizePolicy1.setHeightForWidth(checkBoxSystemManage->sizePolicy().hasHeightForWidth());
        checkBoxSystemManage->setSizePolicy(sizePolicy1);
        checkBoxSystemManage->setMinimumSize(QSize(60, 20));

        gridLayout_2->addWidget(checkBoxSystemManage, 0, 0, 1, 1);

        checkBoxSystemManage4 = new QCheckBox(frame_2);
        checkBoxSystemManage4->setObjectName(QString::fromUtf8("checkBoxSystemManage4"));
        checkBoxSystemManage4->setEnabled(false);
        sizePolicy1.setHeightForWidth(checkBoxSystemManage4->sizePolicy().hasHeightForWidth());
        checkBoxSystemManage4->setSizePolicy(sizePolicy1);
        checkBoxSystemManage4->setMinimumSize(QSize(60, 20));

        gridLayout_2->addWidget(checkBoxSystemManage4, 3, 1, 1, 1);

        checkBoxSystemManage2 = new QCheckBox(frame_2);
        checkBoxSystemManage2->setObjectName(QString::fromUtf8("checkBoxSystemManage2"));
        checkBoxSystemManage2->setEnabled(false);
        sizePolicy1.setHeightForWidth(checkBoxSystemManage2->sizePolicy().hasHeightForWidth());
        checkBoxSystemManage2->setSizePolicy(sizePolicy1);
        checkBoxSystemManage2->setMinimumSize(QSize(60, 20));

        gridLayout_2->addWidget(checkBoxSystemManage2, 1, 1, 1, 1);

        checkBoxSystemManage1 = new QCheckBox(frame_2);
        checkBoxSystemManage1->setObjectName(QString::fromUtf8("checkBoxSystemManage1"));
        checkBoxSystemManage1->setEnabled(false);
        sizePolicy1.setHeightForWidth(checkBoxSystemManage1->sizePolicy().hasHeightForWidth());
        checkBoxSystemManage1->setSizePolicy(sizePolicy1);
        checkBoxSystemManage1->setMinimumSize(QSize(60, 20));

        gridLayout_2->addWidget(checkBoxSystemManage1, 4, 0, 1, 1);

        checkBoxSystemManage7 = new QCheckBox(frame_2);
        checkBoxSystemManage7->setObjectName(QString::fromUtf8("checkBoxSystemManage7"));
        checkBoxSystemManage7->setEnabled(false);
        sizePolicy1.setHeightForWidth(checkBoxSystemManage7->sizePolicy().hasHeightForWidth());
        checkBoxSystemManage7->setSizePolicy(sizePolicy1);
        checkBoxSystemManage7->setMinimumSize(QSize(60, 20));

        gridLayout_2->addWidget(checkBoxSystemManage7, 2, 0, 1, 1);

        checkBoxSystemManage5 = new QCheckBox(frame_2);
        checkBoxSystemManage5->setObjectName(QString::fromUtf8("checkBoxSystemManage5"));
        checkBoxSystemManage5->setEnabled(false);
        sizePolicy1.setHeightForWidth(checkBoxSystemManage5->sizePolicy().hasHeightForWidth());
        checkBoxSystemManage5->setSizePolicy(sizePolicy1);
        checkBoxSystemManage5->setMinimumSize(QSize(60, 20));

        gridLayout_2->addWidget(checkBoxSystemManage5, 4, 1, 1, 1);

        checkBoxSystemManage6 = new QCheckBox(frame_2);
        checkBoxSystemManage6->setObjectName(QString::fromUtf8("checkBoxSystemManage6"));
        checkBoxSystemManage6->setEnabled(false);
        sizePolicy1.setHeightForWidth(checkBoxSystemManage6->sizePolicy().hasHeightForWidth());
        checkBoxSystemManage6->setSizePolicy(sizePolicy1);
        checkBoxSystemManage6->setMinimumSize(QSize(60, 20));

        gridLayout_2->addWidget(checkBoxSystemManage6, 1, 0, 1, 1);

        checkBoxSystemManage3 = new QCheckBox(frame_2);
        checkBoxSystemManage3->setObjectName(QString::fromUtf8("checkBoxSystemManage3"));
        checkBoxSystemManage3->setEnabled(false);
        sizePolicy1.setHeightForWidth(checkBoxSystemManage3->sizePolicy().hasHeightForWidth());
        checkBoxSystemManage3->setSizePolicy(sizePolicy1);
        checkBoxSystemManage3->setMinimumSize(QSize(60, 20));

        gridLayout_2->addWidget(checkBoxSystemManage3, 2, 1, 1, 1);

        checkBoxSystemManage8 = new QCheckBox(frame_2);
        checkBoxSystemManage8->setObjectName(QString::fromUtf8("checkBoxSystemManage8"));
        checkBoxSystemManage8->setEnabled(false);
        sizePolicy1.setHeightForWidth(checkBoxSystemManage8->sizePolicy().hasHeightForWidth());
        checkBoxSystemManage8->setSizePolicy(sizePolicy1);
        checkBoxSystemManage8->setMinimumSize(QSize(60, 20));

        gridLayout_2->addWidget(checkBoxSystemManage8, 3, 0, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_5, 5, 0, 1, 1);


        gridLayout_3->addWidget(frame_2, 0, 2, 1, 1);

        frame = new QFrame(SystemBtn);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        checkBoxOutDoctor = new QCheckBox(frame);
        checkBoxOutDoctor->setObjectName(QString::fromUtf8("checkBoxOutDoctor"));
        sizePolicy1.setHeightForWidth(checkBoxOutDoctor->sizePolicy().hasHeightForWidth());
        checkBoxOutDoctor->setSizePolicy(sizePolicy1);
        checkBoxOutDoctor->setMinimumSize(QSize(60, 20));

        verticalLayout_2->addWidget(checkBoxOutDoctor);

        checkBoxOutDoctor1 = new QCheckBox(frame);
        checkBoxOutDoctor1->setObjectName(QString::fromUtf8("checkBoxOutDoctor1"));
        checkBoxOutDoctor1->setEnabled(false);
        sizePolicy1.setHeightForWidth(checkBoxOutDoctor1->sizePolicy().hasHeightForWidth());
        checkBoxOutDoctor1->setSizePolicy(sizePolicy1);
        checkBoxOutDoctor1->setMinimumSize(QSize(60, 20));

        verticalLayout_2->addWidget(checkBoxOutDoctor1);

        checkBoxOutDoctor2 = new QCheckBox(frame);
        checkBoxOutDoctor2->setObjectName(QString::fromUtf8("checkBoxOutDoctor2"));
        checkBoxOutDoctor2->setEnabled(false);
        sizePolicy1.setHeightForWidth(checkBoxOutDoctor2->sizePolicy().hasHeightForWidth());
        checkBoxOutDoctor2->setSizePolicy(sizePolicy1);
        checkBoxOutDoctor2->setMinimumSize(QSize(60, 20));

        verticalLayout_2->addWidget(checkBoxOutDoctor2);

        checkBoxOutDoctor3 = new QCheckBox(frame);
        checkBoxOutDoctor3->setObjectName(QString::fromUtf8("checkBoxOutDoctor3"));
        checkBoxOutDoctor3->setEnabled(false);
        sizePolicy1.setHeightForWidth(checkBoxOutDoctor3->sizePolicy().hasHeightForWidth());
        checkBoxOutDoctor3->setSizePolicy(sizePolicy1);
        checkBoxOutDoctor3->setMinimumSize(QSize(60, 20));

        verticalLayout_2->addWidget(checkBoxOutDoctor3);

        checkBoxOutDoctor4 = new QCheckBox(frame);
        checkBoxOutDoctor4->setObjectName(QString::fromUtf8("checkBoxOutDoctor4"));
        checkBoxOutDoctor4->setEnabled(false);
        sizePolicy1.setHeightForWidth(checkBoxOutDoctor4->sizePolicy().hasHeightForWidth());
        checkBoxOutDoctor4->setSizePolicy(sizePolicy1);
        checkBoxOutDoctor4->setMinimumSize(QSize(60, 20));

        verticalLayout_2->addWidget(checkBoxOutDoctor4);

        verticalSpacer_4 = new QSpacerItem(20, 46, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);


        gridLayout_3->addWidget(frame, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 0, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_4, 0, 5, 1, 1);


        verticalLayout_7->addLayout(gridLayout_3);


        horizontalLayout_5->addLayout(verticalLayout_7);


        retranslateUi(SystemBtn);

        QMetaObject::connectSlotsByName(SystemBtn);
    } // setupUi

    void retranslateUi(QWidget *SystemBtn)
    {
        SystemBtn->setWindowTitle(QCoreApplication::translate("SystemBtn", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("SystemBtn", "\346\235\203\351\231\220\347\256\241\347\220\206", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("SystemBtn", "\345\221\230\345\267\245\346\235\203\351\231\220", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("SystemBtn", "\347\261\273\345\236\213", nullptr));
        label->setText(QCoreApplication::translate("SystemBtn", "\347\261\273\345\236\213\345\220\215\347\247\260\357\274\232", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("SystemBtn", "\347\224\250\346\210\267", nullptr));
        label_2->setText(QCoreApplication::translate("SystemBtn", "\347\224\250\346\210\267\347\261\273\345\236\213", nullptr));
        label_3->setText(QCoreApplication::translate("SystemBtn", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        checkBoxAll->setText(QCoreApplication::translate("SystemBtn", "\345\205\250\351\200\211", nullptr));
        btnSave->setText(QCoreApplication::translate("SystemBtn", "\344\277\235\345\255\230", nullptr));
        checkBoxDrugManage->setText(QCoreApplication::translate("SystemBtn", "\350\215\257\345\272\223\347\256\241\347\220\206", nullptr));
        checkBoxDrugManage1->setText(QCoreApplication::translate("SystemBtn", "\350\215\257\345\223\201\345\205\245\345\272\223", nullptr));
        checkBoxDrugManage2->setText(QCoreApplication::translate("SystemBtn", "\350\215\257\345\223\201\346\237\245\347\234\213", nullptr));
        checkBoxDrugManage4->setText(QCoreApplication::translate("SystemBtn", "\350\215\257\345\223\201\345\207\272\345\272\223", nullptr));
        checkBoxDrugManage3->setText(QCoreApplication::translate("SystemBtn", "\350\215\257\345\223\201\346\212\245\344\273\267", nullptr));
        checkBoxOutPatientCharges->setText(QCoreApplication::translate("SystemBtn", "\351\227\250\350\257\212\346\224\266\350\264\271", nullptr));
        checkBoxOutPatientCharges1->setText(QCoreApplication::translate("SystemBtn", "\346\237\245\346\211\276", nullptr));
        checkBoxOutPatientCharges2->setText(QCoreApplication::translate("SystemBtn", "\351\227\250\350\257\212\347\273\223\350\264\246", nullptr));
        checkBoxPharmacyManage->setText(QCoreApplication::translate("SystemBtn", "\350\215\257\346\210\277\347\256\241\347\220\206", nullptr));
        checkBoxPharmacyManage1->setText(QCoreApplication::translate("SystemBtn", "\346\237\245\347\234\213\346\243\200\350\215\257\345\215\225", nullptr));
        checkBoxPharmacyManage2->setText(QCoreApplication::translate("SystemBtn", "\346\237\245\347\234\213\345\267\262\345\217\221\350\215\257", nullptr));
        checkBoxFinanceManage->setText(QCoreApplication::translate("SystemBtn", "\350\264\242\345\212\241\347\256\241\347\220\206", nullptr));
        checkBoxFinanceManage1->setText(QCoreApplication::translate("SystemBtn", "\350\220\245\344\270\232\347\273\237\350\256\241", nullptr));
        checkBoxFinanceManage3->setText(QCoreApplication::translate("SystemBtn", "\345\221\230\345\267\245\347\256\241\347\220\206", nullptr));
        checkBoxFinanceManage2->setText(QCoreApplication::translate("SystemBtn", "\345\267\245\350\265\204\345\210\206\351\205\215", nullptr));
        checkBoxHospManage2->setText(QCoreApplication::translate("SystemBtn", "\347\227\205\346\210\277\346\267\273\345\212\240", nullptr));
        checkBoxHospManage7->setText(QCoreApplication::translate("SystemBtn", "\346\267\273\345\212\240", nullptr));
        checkBoxHospManage5->setText(QCoreApplication::translate("SystemBtn", "\346\237\245\346\211\276\347\227\205\344\272\272", nullptr));
        checkBoxHospManage9->setText(QCoreApplication::translate("SystemBtn", "\345\207\272\351\231\242\347\273\223\347\256\227", nullptr));
        checkBoxHospManage8->setText(QCoreApplication::translate("SystemBtn", "\345\210\240\351\231\244", nullptr));
        checkBoxHospManage6->setText(QCoreApplication::translate("SystemBtn", "\350\264\271\347\224\250\350\256\260\350\264\246", nullptr));
        checkBoxHospManage4->setText(QCoreApplication::translate("SystemBtn", "\344\272\244\346\254\276\346\237\245\347\234\213", nullptr));
        checkBoxHospManage1->setText(QCoreApplication::translate("SystemBtn", "\346\237\245\347\234\213\347\227\205\346\210\277", nullptr));
        checkBoxHospManage3->setText(QCoreApplication::translate("SystemBtn", "\344\275\217\351\231\242\347\231\273\350\256\260", nullptr));
        checkBoxHospManage->setText(QCoreApplication::translate("SystemBtn", "\344\275\217\351\231\242\347\256\241\347\220\206", nullptr));
        checkBoxOutpatientManage->setText(QCoreApplication::translate("SystemBtn", "\351\227\250\350\257\212\347\256\241\347\220\206", nullptr));
        checkBoxOutpatientManage1->setText(QCoreApplication::translate("SystemBtn", "\347\227\205\344\272\272\346\214\202\345\217\267", nullptr));
        checkBoxOutpatientManage2->setText(QCoreApplication::translate("SystemBtn", "\344\273\243\345\212\236\345\214\273\347\226\227\345\215\241", nullptr));
        checkBoxOutpatientManage3->setText(QCoreApplication::translate("SystemBtn", "\351\200\200\345\217\267", nullptr));
        checkBoxOutpatientManage5->setText(QCoreApplication::translate("SystemBtn", "\346\214\202\345\217\267\350\241\250\346\237\245\350\257\242", nullptr));
        checkBoxOutpatientManage4->setText(QCoreApplication::translate("SystemBtn", "\345\214\273\347\226\227\345\215\241\350\241\245\345\212\236", nullptr));
        checkBoxSystemManage->setText(QCoreApplication::translate("SystemBtn", "\347\263\273\347\273\237\347\256\241\347\220\206", nullptr));
        checkBoxSystemManage4->setText(QCoreApplication::translate("SystemBtn", "\346\235\203\351\231\220\347\256\241\347\220\206", nullptr));
        checkBoxSystemManage2->setText(QCoreApplication::translate("SystemBtn", "\351\227\250\350\257\212\345\215\225\350\256\276\347\275\256", nullptr));
        checkBoxSystemManage1->setText(QCoreApplication::translate("SystemBtn", "\345\221\230\345\267\245\346\267\273\345\212\240", nullptr));
        checkBoxSystemManage7->setText(QCoreApplication::translate("SystemBtn", "\344\275\217\351\231\242\345\215\225\350\256\276\347\275\256", nullptr));
        checkBoxSystemManage5->setText(QCoreApplication::translate("SystemBtn", "\346\225\260\346\215\256\346\201\242\345\244\215", nullptr));
        checkBoxSystemManage6->setText(QCoreApplication::translate("SystemBtn", "\346\214\202\345\217\267\345\215\225\350\256\276\347\275\256", nullptr));
        checkBoxSystemManage3->setText(QCoreApplication::translate("SystemBtn", "\346\225\260\346\215\256\345\272\223\345\244\207\344\273\275", nullptr));
        checkBoxSystemManage8->setText(QCoreApplication::translate("SystemBtn", "\347\247\221\345\256\244\347\256\241\347\220\206", nullptr));
        checkBoxOutDoctor->setText(QCoreApplication::translate("SystemBtn", "\351\227\250\350\257\212\345\214\273\347\224\237", nullptr));
        checkBoxOutDoctor1->setText(QCoreApplication::translate("SystemBtn", "\351\200\211\346\213\251\347\227\205\344\272\272", nullptr));
        checkBoxOutDoctor2->setText(QCoreApplication::translate("SystemBtn", "\345\206\231\347\227\205\345\216\206", nullptr));
        checkBoxOutDoctor3->setText(QCoreApplication::translate("SystemBtn", "\345\274\200\344\270\255\350\215\257", nullptr));
        checkBoxOutDoctor4->setText(QCoreApplication::translate("SystemBtn", "\345\274\200\350\245\277\350\215\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SystemBtn: public Ui_SystemBtn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYSTEMBTN_H

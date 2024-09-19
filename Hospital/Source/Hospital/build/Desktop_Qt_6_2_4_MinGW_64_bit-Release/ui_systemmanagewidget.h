/********************************************************************************
** Form generated from reading UI file 'systemmanagewidget.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYSTEMMANAGEWIDGET_H
#define UI_SYSTEMMANAGEWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SystemManageWidget
{
public:
    QVBoxLayout *verticalLayout_31;
    QSpacerItem *verticalSpacer_31;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *layoutRegistered;
    QPushButton *btnRegistered;
    QLabel *labelRegistered;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *layoutOutpatient;
    QPushButton *btnOutpatient;
    QLabel *labelOutpatient;
    QSpacerItem *verticalSpacer_25;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *layoutHosptalizationSilps;
    QPushButton *btnHospitalizationSilps;
    QLabel *labelHospitalizationSilps;
    QSpacerItem *verticalSpacer_23;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *layoutDataBackup;
    QPushButton *btnDataBackup;
    QLabel *labelDataBackup;
    QSpacerItem *verticalSpacer_24;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_30;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_6;
    QVBoxLayout *layoutDepartment;
    QPushButton *btnDepartment;
    QLabel *labelDepartment;
    QSpacerItem *verticalSpacer_26;
    QSpacerItem *horizontalSpacer_8;
    QVBoxLayout *layoutPrimissions;
    QPushButton *btnSystem;
    QLabel *labelPrimissions;
    QSpacerItem *verticalSpacer_27;
    QSpacerItem *horizontalSpacer_9;
    QVBoxLayout *layoutInsert;
    QPushButton *btnCreateEmployee;
    QLabel *labelInsert;
    QSpacerItem *verticalSpacer_28;
    QSpacerItem *horizontalSpacer_7;
    QVBoxLayout *layoutDataRecovery;
    QPushButton *btnDataRecovery;
    QLabel *labelDataRecovery;
    QSpacerItem *verticalSpacer_29;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *verticalSpacer_32;

    void setupUi(QWidget *SystemManageWidget)
    {
        if (SystemManageWidget->objectName().isEmpty())
            SystemManageWidget->setObjectName(QString::fromUtf8("SystemManageWidget"));
        SystemManageWidget->resize(764, 378);
        SystemManageWidget->setStyleSheet(QString::fromUtf8("QPushButton { background-color: rgba(0, 0, 0, 0); }"));
        verticalLayout_31 = new QVBoxLayout(SystemManageWidget);
        verticalLayout_31->setObjectName(QString::fromUtf8("verticalLayout_31"));
        verticalSpacer_31 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_31->addItem(verticalSpacer_31);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        layoutRegistered = new QVBoxLayout();
        layoutRegistered->setObjectName(QString::fromUtf8("layoutRegistered"));
        btnRegistered = new QPushButton(SystemManageWidget);
        btnRegistered->setObjectName(QString::fromUtf8("btnRegistered"));
        btnRegistered->setMaximumSize(QSize(100, 100));
        btnRegistered->setMouseTracking(false);
        btnRegistered->setTabletTracking(false);
        btnRegistered->setFocusPolicy(Qt::ClickFocus);
        btnRegistered->setContextMenuPolicy(Qt::NoContextMenu);
        btnRegistered->setToolTipDuration(0);
        btnRegistered->setLayoutDirection(Qt::LeftToRight);
        btnRegistered->setStyleSheet(QString::fromUtf8("QPushButton { border: none; }"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/guahao.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnRegistered->setIcon(icon);
        btnRegistered->setIconSize(QSize(100, 100));

        layoutRegistered->addWidget(btnRegistered);

        labelRegistered = new QLabel(SystemManageWidget);
        labelRegistered->setObjectName(QString::fromUtf8("labelRegistered"));
        labelRegistered->setMaximumSize(QSize(16777207, 16777211));
        labelRegistered->setAlignment(Qt::AlignCenter);

        layoutRegistered->addWidget(labelRegistered);

        verticalSpacer = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Expanding);

        layoutRegistered->addItem(verticalSpacer);

        layoutRegistered->setStretch(0, 4);
        layoutRegistered->setStretch(1, 1);
        layoutRegistered->setStretch(2, 1);

        horizontalLayout->addLayout(layoutRegistered);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        layoutOutpatient = new QVBoxLayout();
        layoutOutpatient->setObjectName(QString::fromUtf8("layoutOutpatient"));
        btnOutpatient = new QPushButton(SystemManageWidget);
        btnOutpatient->setObjectName(QString::fromUtf8("btnOutpatient"));
        btnOutpatient->setMaximumSize(QSize(100, 100));
        btnOutpatient->setMouseTracking(false);
        btnOutpatient->setTabletTracking(false);
        btnOutpatient->setFocusPolicy(Qt::ClickFocus);
        btnOutpatient->setContextMenuPolicy(Qt::NoContextMenu);
        btnOutpatient->setToolTipDuration(0);
        btnOutpatient->setLayoutDirection(Qt::LeftToRight);
        btnOutpatient->setAutoFillBackground(false);
        btnOutpatient->setStyleSheet(QString::fromUtf8("QPushButton { border: none; }"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/image/menzhen.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnOutpatient->setIcon(icon1);
        btnOutpatient->setIconSize(QSize(100, 100));

        layoutOutpatient->addWidget(btnOutpatient);

        labelOutpatient = new QLabel(SystemManageWidget);
        labelOutpatient->setObjectName(QString::fromUtf8("labelOutpatient"));
        labelOutpatient->setMaximumSize(QSize(16777207, 16777211));
        labelOutpatient->setAlignment(Qt::AlignCenter);

        layoutOutpatient->addWidget(labelOutpatient);

        verticalSpacer_25 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Expanding);

        layoutOutpatient->addItem(verticalSpacer_25);

        layoutOutpatient->setStretch(0, 4);
        layoutOutpatient->setStretch(1, 1);
        layoutOutpatient->setStretch(2, 1);

        horizontalLayout->addLayout(layoutOutpatient);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        layoutHosptalizationSilps = new QVBoxLayout();
        layoutHosptalizationSilps->setObjectName(QString::fromUtf8("layoutHosptalizationSilps"));
        btnHospitalizationSilps = new QPushButton(SystemManageWidget);
        btnHospitalizationSilps->setObjectName(QString::fromUtf8("btnHospitalizationSilps"));
        btnHospitalizationSilps->setMaximumSize(QSize(100, 100));
        btnHospitalizationSilps->setMouseTracking(false);
        btnHospitalizationSilps->setTabletTracking(false);
        btnHospitalizationSilps->setFocusPolicy(Qt::ClickFocus);
        btnHospitalizationSilps->setContextMenuPolicy(Qt::NoContextMenu);
        btnHospitalizationSilps->setToolTipDuration(0);
        btnHospitalizationSilps->setLayoutDirection(Qt::LeftToRight);
        btnHospitalizationSilps->setStyleSheet(QString::fromUtf8("QPushButton { border: none; }"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/image/zhuyuan.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnHospitalizationSilps->setIcon(icon2);
        btnHospitalizationSilps->setIconSize(QSize(100, 100));

        layoutHosptalizationSilps->addWidget(btnHospitalizationSilps);

        labelHospitalizationSilps = new QLabel(SystemManageWidget);
        labelHospitalizationSilps->setObjectName(QString::fromUtf8("labelHospitalizationSilps"));
        labelHospitalizationSilps->setMaximumSize(QSize(16777207, 16777211));
        labelHospitalizationSilps->setAlignment(Qt::AlignCenter);

        layoutHosptalizationSilps->addWidget(labelHospitalizationSilps);

        verticalSpacer_23 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Expanding);

        layoutHosptalizationSilps->addItem(verticalSpacer_23);

        layoutHosptalizationSilps->setStretch(0, 4);
        layoutHosptalizationSilps->setStretch(1, 1);
        layoutHosptalizationSilps->setStretch(2, 1);

        horizontalLayout->addLayout(layoutHosptalizationSilps);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        layoutDataBackup = new QVBoxLayout();
        layoutDataBackup->setObjectName(QString::fromUtf8("layoutDataBackup"));
        btnDataBackup = new QPushButton(SystemManageWidget);
        btnDataBackup->setObjectName(QString::fromUtf8("btnDataBackup"));
        btnDataBackup->setMaximumSize(QSize(100, 100));
        btnDataBackup->setMouseTracking(false);
        btnDataBackup->setTabletTracking(false);
        btnDataBackup->setFocusPolicy(Qt::ClickFocus);
        btnDataBackup->setContextMenuPolicy(Qt::NoContextMenu);
        btnDataBackup->setToolTipDuration(0);
        btnDataBackup->setLayoutDirection(Qt::LeftToRight);
        btnDataBackup->setStyleSheet(QString::fromUtf8("QPushButton { border: none; }"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/image/DBre.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnDataBackup->setIcon(icon3);
        btnDataBackup->setIconSize(QSize(100, 100));

        layoutDataBackup->addWidget(btnDataBackup);

        labelDataBackup = new QLabel(SystemManageWidget);
        labelDataBackup->setObjectName(QString::fromUtf8("labelDataBackup"));
        labelDataBackup->setMaximumSize(QSize(16777207, 16777211));
        labelDataBackup->setAlignment(Qt::AlignCenter);

        layoutDataBackup->addWidget(labelDataBackup);

        verticalSpacer_24 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Expanding);

        layoutDataBackup->addItem(verticalSpacer_24);

        layoutDataBackup->setStretch(0, 4);
        layoutDataBackup->setStretch(1, 1);
        layoutDataBackup->setStretch(2, 1);

        horizontalLayout->addLayout(layoutDataBackup);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_30 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_30);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);

        layoutDepartment = new QVBoxLayout();
        layoutDepartment->setObjectName(QString::fromUtf8("layoutDepartment"));
        btnDepartment = new QPushButton(SystemManageWidget);
        btnDepartment->setObjectName(QString::fromUtf8("btnDepartment"));
        btnDepartment->setMaximumSize(QSize(100, 100));
        btnDepartment->setMouseTracking(false);
        btnDepartment->setTabletTracking(false);
        btnDepartment->setFocusPolicy(Qt::ClickFocus);
        btnDepartment->setContextMenuPolicy(Qt::NoContextMenu);
        btnDepartment->setToolTipDuration(0);
        btnDepartment->setLayoutDirection(Qt::LeftToRight);
        btnDepartment->setStyleSheet(QString::fromUtf8("QPushButton { border: none; }"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/image/keshi.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnDepartment->setIcon(icon4);
        btnDepartment->setIconSize(QSize(100, 100));
        btnDepartment->setFlat(false);

        layoutDepartment->addWidget(btnDepartment);

        labelDepartment = new QLabel(SystemManageWidget);
        labelDepartment->setObjectName(QString::fromUtf8("labelDepartment"));
        labelDepartment->setMaximumSize(QSize(16777207, 16777211));
        labelDepartment->setAlignment(Qt::AlignCenter);

        layoutDepartment->addWidget(labelDepartment);

        verticalSpacer_26 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Expanding);

        layoutDepartment->addItem(verticalSpacer_26);

        layoutDepartment->setStretch(0, 4);
        layoutDepartment->setStretch(1, 1);

        horizontalLayout_5->addLayout(layoutDepartment);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_8);

        layoutPrimissions = new QVBoxLayout();
        layoutPrimissions->setObjectName(QString::fromUtf8("layoutPrimissions"));
        btnSystem = new QPushButton(SystemManageWidget);
        btnSystem->setObjectName(QString::fromUtf8("btnSystem"));
        btnSystem->setMaximumSize(QSize(100, 100));
        btnSystem->setMouseTracking(false);
        btnSystem->setTabletTracking(false);
        btnSystem->setFocusPolicy(Qt::ClickFocus);
        btnSystem->setContextMenuPolicy(Qt::NoContextMenu);
        btnSystem->setToolTipDuration(0);
        btnSystem->setLayoutDirection(Qt::LeftToRight);
        btnSystem->setStyleSheet(QString::fromUtf8("QPushButton { border: none; }"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/image/quanxian.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnSystem->setIcon(icon5);
        btnSystem->setIconSize(QSize(100, 100));

        layoutPrimissions->addWidget(btnSystem);

        labelPrimissions = new QLabel(SystemManageWidget);
        labelPrimissions->setObjectName(QString::fromUtf8("labelPrimissions"));
        labelPrimissions->setMaximumSize(QSize(16777207, 16777211));
        labelPrimissions->setAlignment(Qt::AlignCenter);

        layoutPrimissions->addWidget(labelPrimissions);

        verticalSpacer_27 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Expanding);

        layoutPrimissions->addItem(verticalSpacer_27);

        layoutPrimissions->setStretch(0, 4);
        layoutPrimissions->setStretch(1, 1);

        horizontalLayout_5->addLayout(layoutPrimissions);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_9);

        layoutInsert = new QVBoxLayout();
        layoutInsert->setObjectName(QString::fromUtf8("layoutInsert"));
        btnCreateEmployee = new QPushButton(SystemManageWidget);
        btnCreateEmployee->setObjectName(QString::fromUtf8("btnCreateEmployee"));
        btnCreateEmployee->setMaximumSize(QSize(100, 100));
        btnCreateEmployee->setMouseTracking(false);
        btnCreateEmployee->setTabletTracking(false);
        btnCreateEmployee->setFocusPolicy(Qt::ClickFocus);
        btnCreateEmployee->setContextMenuPolicy(Qt::NoContextMenu);
        btnCreateEmployee->setToolTipDuration(0);
        btnCreateEmployee->setLayoutDirection(Qt::LeftToRight);
        btnCreateEmployee->setStyleSheet(QString::fromUtf8("QPushButton { border: none; }"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/image/yuangong.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnCreateEmployee->setIcon(icon6);
        btnCreateEmployee->setIconSize(QSize(100, 100));

        layoutInsert->addWidget(btnCreateEmployee);

        labelInsert = new QLabel(SystemManageWidget);
        labelInsert->setObjectName(QString::fromUtf8("labelInsert"));
        labelInsert->setMaximumSize(QSize(16777207, 16777211));
        labelInsert->setAlignment(Qt::AlignCenter);

        layoutInsert->addWidget(labelInsert);

        verticalSpacer_28 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Expanding);

        layoutInsert->addItem(verticalSpacer_28);

        layoutInsert->setStretch(0, 4);
        layoutInsert->setStretch(1, 1);
        layoutInsert->setStretch(2, 1);

        horizontalLayout_5->addLayout(layoutInsert);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_7);

        layoutDataRecovery = new QVBoxLayout();
        layoutDataRecovery->setObjectName(QString::fromUtf8("layoutDataRecovery"));
        btnDataRecovery = new QPushButton(SystemManageWidget);
        btnDataRecovery->setObjectName(QString::fromUtf8("btnDataRecovery"));
        btnDataRecovery->setMaximumSize(QSize(100, 100));
        btnDataRecovery->setMouseTracking(false);
        btnDataRecovery->setTabletTracking(false);
        btnDataRecovery->setFocusPolicy(Qt::ClickFocus);
        btnDataRecovery->setContextMenuPolicy(Qt::NoContextMenu);
        btnDataRecovery->setToolTipDuration(0);
        btnDataRecovery->setLayoutDirection(Qt::LeftToRight);
        btnDataRecovery->setStyleSheet(QString::fromUtf8("QPushButton { border: none; }"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/image/DBbackup.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnDataRecovery->setIcon(icon7);
        btnDataRecovery->setIconSize(QSize(100, 100));

        layoutDataRecovery->addWidget(btnDataRecovery);

        labelDataRecovery = new QLabel(SystemManageWidget);
        labelDataRecovery->setObjectName(QString::fromUtf8("labelDataRecovery"));
        labelDataRecovery->setMaximumSize(QSize(16777207, 16777211));
        labelDataRecovery->setAlignment(Qt::AlignCenter);

        layoutDataRecovery->addWidget(labelDataRecovery);

        verticalSpacer_29 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        layoutDataRecovery->addItem(verticalSpacer_29);

        layoutDataRecovery->setStretch(0, 4);
        layoutDataRecovery->setStretch(1, 1);
        layoutDataRecovery->setStretch(2, 1);

        horizontalLayout_5->addLayout(layoutDataRecovery);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_10);


        verticalLayout->addLayout(horizontalLayout_5);

        verticalLayout->setStretch(0, 4);
        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 4);

        verticalLayout_31->addLayout(verticalLayout);

        verticalSpacer_32 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_31->addItem(verticalSpacer_32);


        retranslateUi(SystemManageWidget);

        QMetaObject::connectSlotsByName(SystemManageWidget);
    } // setupUi

    void retranslateUi(QWidget *SystemManageWidget)
    {
        SystemManageWidget->setWindowTitle(QCoreApplication::translate("SystemManageWidget", "Form", nullptr));
        btnRegistered->setText(QString());
        labelRegistered->setText(QCoreApplication::translate("SystemManageWidget", "\346\214\202\345\217\267\345\215\225\350\256\276\347\275\256", nullptr));
        btnOutpatient->setText(QString());
        labelOutpatient->setText(QCoreApplication::translate("SystemManageWidget", "\351\227\250\350\257\212\345\215\225\350\256\276\347\275\256", nullptr));
        btnHospitalizationSilps->setText(QString());
        labelHospitalizationSilps->setText(QCoreApplication::translate("SystemManageWidget", "\344\275\217\351\231\242\345\215\225\350\256\276\347\275\256", nullptr));
        btnDataBackup->setText(QString());
        labelDataBackup->setText(QCoreApplication::translate("SystemManageWidget", "\346\225\260\346\215\256\345\272\223\345\244\207\344\273\275", nullptr));
        btnDepartment->setText(QString());
        labelDepartment->setText(QCoreApplication::translate("SystemManageWidget", "\347\247\221\345\256\244\347\256\241\347\220\206", nullptr));
        btnSystem->setText(QString());
        labelPrimissions->setText(QCoreApplication::translate("SystemManageWidget", "\346\235\203\351\231\220\347\256\241\347\220\206", nullptr));
        btnCreateEmployee->setText(QString());
        labelInsert->setText(QCoreApplication::translate("SystemManageWidget", "\345\221\230\345\267\245\346\267\273\345\212\240", nullptr));
        btnDataRecovery->setText(QString());
        labelDataRecovery->setText(QCoreApplication::translate("SystemManageWidget", "\346\225\260\346\215\256\346\201\242\345\244\215", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SystemManageWidget: public Ui_SystemManageWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYSTEMMANAGEWIDGET_H

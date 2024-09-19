/********************************************************************************
** Form generated from reading UI file 'systemmanagewidget.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
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
    QPushButton *btnPrimissions;
    QLabel *labelPrimissions;
    QSpacerItem *verticalSpacer_27;
    QSpacerItem *horizontalSpacer_9;
    QVBoxLayout *layoutInsert;
    QPushButton *btnInsert;
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
            SystemManageWidget->setObjectName("SystemManageWidget");
        SystemManageWidget->resize(764, 378);
        verticalLayout_31 = new QVBoxLayout(SystemManageWidget);
        verticalLayout_31->setObjectName("verticalLayout_31");
        verticalSpacer_31 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_31->addItem(verticalSpacer_31);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        layoutRegistered = new QVBoxLayout();
        layoutRegistered->setObjectName("layoutRegistered");
        btnRegistered = new QPushButton(SystemManageWidget);
        btnRegistered->setObjectName("btnRegistered");
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
        labelRegistered->setObjectName("labelRegistered");
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
        layoutOutpatient->setObjectName("layoutOutpatient");
        btnOutpatient = new QPushButton(SystemManageWidget);
        btnOutpatient->setObjectName("btnOutpatient");
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
        labelOutpatient->setObjectName("labelOutpatient");
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
        layoutHosptalizationSilps->setObjectName("layoutHosptalizationSilps");
        btnHospitalizationSilps = new QPushButton(SystemManageWidget);
        btnHospitalizationSilps->setObjectName("btnHospitalizationSilps");
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
        labelHospitalizationSilps->setObjectName("labelHospitalizationSilps");
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
        layoutDataBackup->setObjectName("layoutDataBackup");
        btnDataBackup = new QPushButton(SystemManageWidget);
        btnDataBackup->setObjectName("btnDataBackup");
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
        labelDataBackup->setObjectName("labelDataBackup");
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
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);

        layoutDepartment = new QVBoxLayout();
        layoutDepartment->setObjectName("layoutDepartment");
        btnDepartment = new QPushButton(SystemManageWidget);
        btnDepartment->setObjectName("btnDepartment");
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
        labelDepartment->setObjectName("labelDepartment");
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
        layoutPrimissions->setObjectName("layoutPrimissions");
        btnPrimissions = new QPushButton(SystemManageWidget);
        btnPrimissions->setObjectName("btnPrimissions");
        btnPrimissions->setMaximumSize(QSize(100, 100));
        btnPrimissions->setMouseTracking(false);
        btnPrimissions->setTabletTracking(false);
        btnPrimissions->setFocusPolicy(Qt::ClickFocus);
        btnPrimissions->setContextMenuPolicy(Qt::NoContextMenu);
        btnPrimissions->setToolTipDuration(0);
        btnPrimissions->setLayoutDirection(Qt::LeftToRight);
        btnPrimissions->setStyleSheet(QString::fromUtf8("QPushButton { border: none; }"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/image/quanxian.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnPrimissions->setIcon(icon5);
        btnPrimissions->setIconSize(QSize(100, 100));

        layoutPrimissions->addWidget(btnPrimissions);

        labelPrimissions = new QLabel(SystemManageWidget);
        labelPrimissions->setObjectName("labelPrimissions");
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
        layoutInsert->setObjectName("layoutInsert");
        btnInsert = new QPushButton(SystemManageWidget);
        btnInsert->setObjectName("btnInsert");
        btnInsert->setMaximumSize(QSize(100, 100));
        btnInsert->setMouseTracking(false);
        btnInsert->setTabletTracking(false);
        btnInsert->setFocusPolicy(Qt::ClickFocus);
        btnInsert->setContextMenuPolicy(Qt::NoContextMenu);
        btnInsert->setToolTipDuration(0);
        btnInsert->setLayoutDirection(Qt::LeftToRight);
        btnInsert->setStyleSheet(QString::fromUtf8("QPushButton { border: none; }"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/image/yuangong.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnInsert->setIcon(icon6);
        btnInsert->setIconSize(QSize(100, 100));

        layoutInsert->addWidget(btnInsert);

        labelInsert = new QLabel(SystemManageWidget);
        labelInsert->setObjectName("labelInsert");
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
        layoutDataRecovery->setObjectName("layoutDataRecovery");
        btnDataRecovery = new QPushButton(SystemManageWidget);
        btnDataRecovery->setObjectName("btnDataRecovery");
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
        labelDataRecovery->setObjectName("labelDataRecovery");
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
        btnPrimissions->setText(QString());
        labelPrimissions->setText(QCoreApplication::translate("SystemManageWidget", "\346\235\203\351\231\220\347\256\241\347\220\206", nullptr));
        btnInsert->setText(QString());
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

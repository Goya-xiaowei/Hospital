/********************************************************************************
** Form generated from reading UI file 'uiinpatientmanage.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UIINPATIENTMANAGE_H
#define UI_UIINPATIENTMANAGE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UiInpatientManage
{
public:
    QHBoxLayout *horizontalLayout_11;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_10;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnWardView;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_11;
    QPushButton *btnPatientFind;
    QSpacerItem *horizontalSpacer_12;
    QLabel *label_13;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btnWardAdd;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_10;
    QSpacerItem *horizontalSpacer_13;
    QVBoxLayout *verticalLayout_14;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *btnRegistration;
    QSpacerItem *horizontalSpacer_10;
    QLabel *label_9;
    QVBoxLayout *verticalLayout_12;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_15;
    QPushButton *pushButton_12;
    QSpacerItem *horizontalSpacer_18;
    QLabel *label_16;
    QVBoxLayout *verticalLayout_13;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_19;
    QPushButton *pushButton_13;
    QSpacerItem *horizontalSpacer_20;
    QLabel *label_17;
    QStackedWidget *stackedWidget;

    void setupUi(QWidget *UiInpatientManage)
    {
        if (UiInpatientManage->objectName().isEmpty())
            UiInpatientManage->setObjectName(QString::fromUtf8("UiInpatientManage"));
        UiInpatientManage->resize(716, 699);
        UiInpatientManage->setStyleSheet(QString::fromUtf8("QPushButton { background-color: rgba(0, 0, 0, 0); }"));
        horizontalLayout_11 = new QHBoxLayout(UiInpatientManage);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(20, -1, -1, -1);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnWardView = new QPushButton(UiInpatientManage);
        btnWardView->setObjectName(QString::fromUtf8("btnWardView"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnWardView->sizePolicy().hasHeightForWidth());
        btnWardView->setSizePolicy(sizePolicy);
        btnWardView->setMinimumSize(QSize(100, 100));
        btnWardView->setMaximumSize(QSize(100, 100));
        btnWardView->setStyleSheet(QString::fromUtf8("QPushButton { border: none; }"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/gongzi1.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnWardView->setIcon(icon);
        btnWardView->setIconSize(QSize(100, 100));

        horizontalLayout->addWidget(btnWardView);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        label = new QLabel(UiInpatientManage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);


        verticalLayout_10->addLayout(verticalLayout);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_11);

        btnPatientFind = new QPushButton(UiInpatientManage);
        btnPatientFind->setObjectName(QString::fromUtf8("btnPatientFind"));
        sizePolicy.setHeightForWidth(btnPatientFind->sizePolicy().hasHeightForWidth());
        btnPatientFind->setSizePolicy(sizePolicy);
        btnPatientFind->setMinimumSize(QSize(100, 100));
        btnPatientFind->setMaximumSize(QSize(100, 100));
        btnPatientFind->setStyleSheet(QString::fromUtf8("QPushButton { border: none; }"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/image/drug_select.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnPatientFind->setIcon(icon1);
        btnPatientFind->setIconSize(QSize(100, 100));

        horizontalLayout_6->addWidget(btnPatientFind);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_12);


        verticalLayout_9->addLayout(horizontalLayout_6);

        label_13 = new QLabel(UiInpatientManage);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setAlignment(Qt::AlignCenter);

        verticalLayout_9->addWidget(label_13);


        verticalLayout_10->addLayout(verticalLayout_9);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        btnWardAdd = new QPushButton(UiInpatientManage);
        btnWardAdd->setObjectName(QString::fromUtf8("btnWardAdd"));
        sizePolicy.setHeightForWidth(btnWardAdd->sizePolicy().hasHeightForWidth());
        btnWardAdd->setSizePolicy(sizePolicy);
        btnWardAdd->setMinimumSize(QSize(100, 100));
        btnWardAdd->setMaximumSize(QSize(100, 100));
        btnWardAdd->setStyleSheet(QString::fromUtf8("QPushButton { border: none; }"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/image/yifayao.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnWardAdd->setIcon(icon2);
        btnWardAdd->setIconSize(QSize(100, 100));

        horizontalLayout_2->addWidget(btnWardAdd);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout_2);

        label_10 = new QLabel(UiInpatientManage);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_10);


        verticalLayout_10->addLayout(verticalLayout_2);


        horizontalLayout_7->addLayout(verticalLayout_10);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_13);

        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_9);

        btnRegistration = new QPushButton(UiInpatientManage);
        btnRegistration->setObjectName(QString::fromUtf8("btnRegistration"));
        sizePolicy.setHeightForWidth(btnRegistration->sizePolicy().hasHeightForWidth());
        btnRegistration->setSizePolicy(sizePolicy);
        btnRegistration->setMinimumSize(QSize(100, 100));
        btnRegistration->setMaximumSize(QSize(100, 100));
        btnRegistration->setStyleSheet(QString::fromUtf8("QPushButton { border: none; }"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/image/bl1.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnRegistration->setIcon(icon3);
        btnRegistration->setIconSize(QSize(100, 100));
        btnRegistration->setAutoRepeat(false);
        btnRegistration->setAutoExclusive(false);

        horizontalLayout_5->addWidget(btnRegistration);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_10);


        verticalLayout_8->addLayout(horizontalLayout_5);

        label_9 = new QLabel(UiInpatientManage);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(label_9);


        verticalLayout_14->addLayout(verticalLayout_8);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_15);

        pushButton_12 = new QPushButton(UiInpatientManage);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        sizePolicy.setHeightForWidth(pushButton_12->sizePolicy().hasHeightForWidth());
        pushButton_12->setSizePolicy(sizePolicy);
        pushButton_12->setMinimumSize(QSize(100, 100));
        pushButton_12->setMaximumSize(QSize(100, 100));
        pushButton_12->setStyleSheet(QString::fromUtf8("QPushButton { border: none; }"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/image/yingye1.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_12->setIcon(icon4);
        pushButton_12->setIconSize(QSize(100, 100));

        horizontalLayout_9->addWidget(pushButton_12);

        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_18);


        verticalLayout_12->addLayout(horizontalLayout_9);

        label_16 = new QLabel(UiInpatientManage);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setAlignment(Qt::AlignCenter);

        verticalLayout_12->addWidget(label_16);


        verticalLayout_14->addLayout(verticalLayout_12);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalSpacer_19 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_19);

        pushButton_13 = new QPushButton(UiInpatientManage);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        sizePolicy.setHeightForWidth(pushButton_13->sizePolicy().hasHeightForWidth());
        pushButton_13->setSizePolicy(sizePolicy);
        pushButton_13->setMinimumSize(QSize(100, 100));
        pushButton_13->setMaximumSize(QSize(100, 100));
        pushButton_13->setStyleSheet(QString::fromUtf8("QPushButton { border: none; }"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/image/ky1.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_13->setIcon(icon5);
        pushButton_13->setIconSize(QSize(100, 100));

        horizontalLayout_10->addWidget(pushButton_13);

        horizontalSpacer_20 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_20);


        verticalLayout_13->addLayout(horizontalLayout_10);

        label_17 = new QLabel(UiInpatientManage);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setAlignment(Qt::AlignCenter);

        verticalLayout_13->addWidget(label_17);


        verticalLayout_14->addLayout(verticalLayout_13);


        horizontalLayout_7->addLayout(verticalLayout_14);


        horizontalLayout_11->addLayout(horizontalLayout_7);

        stackedWidget = new QStackedWidget(UiInpatientManage);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_11->addWidget(stackedWidget);

        horizontalLayout_11->setStretch(0, 1);
        horizontalLayout_11->setStretch(1, 9);

        retranslateUi(UiInpatientManage);

        stackedWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(UiInpatientManage);
    } // setupUi

    void retranslateUi(QWidget *UiInpatientManage)
    {
        UiInpatientManage->setWindowTitle(QCoreApplication::translate("UiInpatientManage", "Form", nullptr));
        btnWardView->setText(QString());
        label->setText(QCoreApplication::translate("UiInpatientManage", "\347\227\205\346\210\277\346\237\245\347\234\213", nullptr));
        btnPatientFind->setText(QString());
        label_13->setText(QCoreApplication::translate("UiInpatientManage", "\347\227\205\344\272\272\346\237\245\346\211\276", nullptr));
        btnWardAdd->setText(QString());
        label_10->setText(QCoreApplication::translate("UiInpatientManage", "\347\227\205\346\210\277\346\267\273\345\212\240", nullptr));
        btnRegistration->setText(QString());
        label_9->setText(QCoreApplication::translate("UiInpatientManage", "\344\275\217\351\231\242\347\231\273\350\256\260", nullptr));
        pushButton_12->setText(QString());
        label_16->setText(QCoreApplication::translate("UiInpatientManage", "\350\264\271\347\224\250\350\256\260\350\264\246", nullptr));
        pushButton_13->setText(QString());
        label_17->setText(QCoreApplication::translate("UiInpatientManage", "\345\207\272\351\231\242\347\273\223\347\256\227", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UiInpatientManage: public Ui_UiInpatientManage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UIINPATIENTMANAGE_H

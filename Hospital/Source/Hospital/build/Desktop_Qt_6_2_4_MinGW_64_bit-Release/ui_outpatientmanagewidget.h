/********************************************************************************
** Form generated from reading UI file 'outpatientmanagewidget.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OUTPATIENTMANAGEWIDGET_H
#define UI_OUTPATIENTMANAGEWIDGET_H

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

class Ui_OutpatientManageWidget
{
public:
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *layoutPatientRegistration;
    QSpacerItem *verticalSpacer_5;
    QPushButton *btnPatientRegistration;
    QLabel *labelPatientRegistration;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *layoutTrancact;
    QPushButton *btnTrancact;
    QLabel *labelTrancact;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_4;
    QStackedWidget *outPatientStackedWidget;
    QWidget *page_3;
    QWidget *page_4;

    void setupUi(QWidget *OutpatientManageWidget)
    {
        if (OutpatientManageWidget->objectName().isEmpty())
            OutpatientManageWidget->setObjectName(QString::fromUtf8("OutpatientManageWidget"));
        OutpatientManageWidget->resize(653, 352);
        OutpatientManageWidget->setStyleSheet(QString::fromUtf8("QPushButton { background-color: rgba(0, 0, 0, 0); }"));
        verticalLayout_5 = new QVBoxLayout(OutpatientManageWidget);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        layoutPatientRegistration = new QVBoxLayout();
        layoutPatientRegistration->setObjectName(QString::fromUtf8("layoutPatientRegistration"));
        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        layoutPatientRegistration->addItem(verticalSpacer_5);

        btnPatientRegistration = new QPushButton(OutpatientManageWidget);
        btnPatientRegistration->setObjectName(QString::fromUtf8("btnPatientRegistration"));
        btnPatientRegistration->setMaximumSize(QSize(100, 100));
        btnPatientRegistration->setStyleSheet(QString::fromUtf8("QPushButton { border: none; }"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/bingren1.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnPatientRegistration->setIcon(icon);
        btnPatientRegistration->setIconSize(QSize(100, 100));

        layoutPatientRegistration->addWidget(btnPatientRegistration);

        labelPatientRegistration = new QLabel(OutpatientManageWidget);
        labelPatientRegistration->setObjectName(QString::fromUtf8("labelPatientRegistration"));
        labelPatientRegistration->setMaximumSize(QSize(100, 16777215));
        labelPatientRegistration->setAlignment(Qt::AlignCenter);

        layoutPatientRegistration->addWidget(labelPatientRegistration);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        layoutPatientRegistration->addItem(verticalSpacer);

        layoutPatientRegistration->setStretch(1, 4);
        layoutPatientRegistration->setStretch(2, 1);
        layoutPatientRegistration->setStretch(3, 1);

        verticalLayout_4->addLayout(layoutPatientRegistration);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_3);

        layoutTrancact = new QVBoxLayout();
        layoutTrancact->setObjectName(QString::fromUtf8("layoutTrancact"));
        btnTrancact = new QPushButton(OutpatientManageWidget);
        btnTrancact->setObjectName(QString::fromUtf8("btnTrancact"));
        btnTrancact->setMaximumSize(QSize(100, 100));
        btnTrancact->setStyleSheet(QString::fromUtf8("QPushButton { border: none; }"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/image/card1.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnTrancact->setIcon(icon1);
        btnTrancact->setIconSize(QSize(100, 100));

        layoutTrancact->addWidget(btnTrancact);

        labelTrancact = new QLabel(OutpatientManageWidget);
        labelTrancact->setObjectName(QString::fromUtf8("labelTrancact"));
        labelTrancact->setMaximumSize(QSize(100, 16777215));
        labelTrancact->setAlignment(Qt::AlignCenter);

        layoutTrancact->addWidget(labelTrancact);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        layoutTrancact->addItem(verticalSpacer_2);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        layoutTrancact->addItem(verticalSpacer_4);

        layoutTrancact->setStretch(0, 4);
        layoutTrancact->setStretch(1, 1);

        verticalLayout_4->addLayout(layoutTrancact);


        horizontalLayout->addLayout(verticalLayout_4);

        outPatientStackedWidget = new QStackedWidget(OutpatientManageWidget);
        outPatientStackedWidget->setObjectName(QString::fromUtf8("outPatientStackedWidget"));
        outPatientStackedWidget->setStyleSheet(QString::fromUtf8(""));
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        outPatientStackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        outPatientStackedWidget->addWidget(page_4);

        horizontalLayout->addWidget(outPatientStackedWidget);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 5);

        verticalLayout_5->addLayout(horizontalLayout);


        retranslateUi(OutpatientManageWidget);

        QMetaObject::connectSlotsByName(OutpatientManageWidget);
    } // setupUi

    void retranslateUi(QWidget *OutpatientManageWidget)
    {
        OutpatientManageWidget->setWindowTitle(QCoreApplication::translate("OutpatientManageWidget", "Form", nullptr));
        btnPatientRegistration->setText(QString());
        labelPatientRegistration->setText(QCoreApplication::translate("OutpatientManageWidget", "\347\227\205\344\272\272\346\214\202\345\217\267", nullptr));
        btnTrancact->setText(QString());
        labelTrancact->setText(QCoreApplication::translate("OutpatientManageWidget", "\345\214\273\347\226\227\345\215\241\345\212\236\347\220\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OutpatientManageWidget: public Ui_OutpatientManageWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OUTPATIENTMANAGEWIDGET_H

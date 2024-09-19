/********************************************************************************
** Form generated from reading UI file 'wardviewingbtn.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WARDVIEWINGBTN_H
#define UI_WARDVIEWINGBTN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WardViewingBtn
{
public:
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_5;
    QComboBox *comboBoxSection;
    QSpacerItem *horizontalSpacer;
    QTreeView *treeViewWardView;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QTreeView *treeView_2;

    void setupUi(QWidget *WardViewingBtn)
    {
        if (WardViewingBtn->objectName().isEmpty())
            WardViewingBtn->setObjectName(QString::fromUtf8("WardViewingBtn"));
        WardViewingBtn->resize(544, 382);
        WardViewingBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        verticalLayout_3 = new QVBoxLayout(WardViewingBtn);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(WardViewingBtn);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setMinimumSize(QSize(50, 50));
        label_3->setMaximumSize(QSize(50, 50));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/image/empty.png")));
        label_3->setScaledContents(true);

        horizontalLayout->addWidget(label_3);

        label = new QLabel(WardViewingBtn);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        label_5 = new QLabel(WardViewingBtn);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout->addWidget(label_5);

        comboBoxSection = new QComboBox(WardViewingBtn);
        comboBoxSection->setObjectName(QString::fromUtf8("comboBoxSection"));

        horizontalLayout->addWidget(comboBoxSection);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        treeViewWardView = new QTreeView(WardViewingBtn);
        treeViewWardView->setObjectName(QString::fromUtf8("treeViewWardView"));

        verticalLayout->addWidget(treeViewWardView);


        verticalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_4 = new QLabel(WardViewingBtn);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(50, 50));
        label_4->setMaximumSize(QSize(50, 50));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/image/empty1.png")));
        label_4->setScaledContents(true);

        horizontalLayout_2->addWidget(label_4);

        label_2 = new QLabel(WardViewingBtn);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_2);

        treeView_2 = new QTreeView(WardViewingBtn);
        treeView_2->setObjectName(QString::fromUtf8("treeView_2"));

        verticalLayout_2->addWidget(treeView_2);


        verticalLayout_3->addLayout(verticalLayout_2);


        retranslateUi(WardViewingBtn);

        QMetaObject::connectSlotsByName(WardViewingBtn);
    } // setupUi

    void retranslateUi(QWidget *WardViewingBtn)
    {
        WardViewingBtn->setWindowTitle(QCoreApplication::translate("WardViewingBtn", "Form", nullptr));
        label_3->setText(QString());
        label->setText(QCoreApplication::translate("WardViewingBtn", "\347\227\205\346\210\277", nullptr));
        label_5->setText(QCoreApplication::translate("WardViewingBtn", "\351\200\211\346\213\251\347\247\221\345\256\244", nullptr));
        label_4->setText(QString());
        label_2->setText(QCoreApplication::translate("WardViewingBtn", "\347\227\205\345\272\212", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WardViewingBtn: public Ui_WardViewingBtn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WARDVIEWINGBTN_H

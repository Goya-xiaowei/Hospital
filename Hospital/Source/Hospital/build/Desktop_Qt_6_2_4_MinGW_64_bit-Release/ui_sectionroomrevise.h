/********************************************************************************
** Form generated from reading UI file 'sectionroomrevise.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECTIONROOMREVISE_H
#define UI_SECTIONROOMREVISE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
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

class Ui_SectionRoomRevise
{
public:
    QVBoxLayout *verticalLayout_2;
    QTreeView *treeViewRevise;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QLineEdit *lineEditMoney;
    QLabel *label_3;
    QLabel *label;
    QLineEdit *lineEditAddress;
    QLabel *label_2;
    QLineEdit *lineEditName;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QPushButton *btnRevise;
    QSpacerItem *verticalSpacer;
    QPushButton *btnDelete;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *SectionRoomRevise)
    {
        if (SectionRoomRevise->objectName().isEmpty())
            SectionRoomRevise->setObjectName(QString::fromUtf8("SectionRoomRevise"));
        SectionRoomRevise->resize(601, 501);
        verticalLayout_2 = new QVBoxLayout(SectionRoomRevise);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        treeViewRevise = new QTreeView(SectionRoomRevise);
        treeViewRevise->setObjectName(QString::fromUtf8("treeViewRevise"));

        verticalLayout_2->addWidget(treeViewRevise);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lineEditMoney = new QLineEdit(SectionRoomRevise);
        lineEditMoney->setObjectName(QString::fromUtf8("lineEditMoney"));

        gridLayout->addWidget(lineEditMoney, 2, 2, 1, 1);

        label_3 = new QLabel(SectionRoomRevise);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 1, 1, 1);

        label = new QLabel(SectionRoomRevise);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 1, 1, 1);

        lineEditAddress = new QLineEdit(SectionRoomRevise);
        lineEditAddress->setObjectName(QString::fromUtf8("lineEditAddress"));

        gridLayout->addWidget(lineEditAddress, 1, 2, 1, 1);

        label_2 = new QLabel(SectionRoomRevise);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 1, 1, 1);

        lineEditName = new QLineEdit(SectionRoomRevise);
        lineEditName->setObjectName(QString::fromUtf8("lineEditName"));

        gridLayout->addWidget(lineEditName, 0, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 1, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        btnRevise = new QPushButton(SectionRoomRevise);
        btnRevise->setObjectName(QString::fromUtf8("btnRevise"));

        verticalLayout->addWidget(btnRevise);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        btnDelete = new QPushButton(SectionRoomRevise);
        btnDelete->setObjectName(QString::fromUtf8("btnDelete"));

        verticalLayout->addWidget(btnDelete);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);


        horizontalLayout->addLayout(verticalLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(SectionRoomRevise);

        QMetaObject::connectSlotsByName(SectionRoomRevise);
    } // setupUi

    void retranslateUi(QWidget *SectionRoomRevise)
    {
        SectionRoomRevise->setWindowTitle(QCoreApplication::translate("SectionRoomRevise", "Form", nullptr));
        label_3->setText(QCoreApplication::translate("SectionRoomRevise", "\346\214\202\345\217\267\350\264\271", nullptr));
        label->setText(QCoreApplication::translate("SectionRoomRevise", "\347\247\221\345\210\253\345\220\215\347\247\260", nullptr));
        label_2->setText(QCoreApplication::translate("SectionRoomRevise", "\347\247\221\345\256\244\345\234\260\345\235\200", nullptr));
        btnRevise->setText(QCoreApplication::translate("SectionRoomRevise", "\344\277\256\346\224\271", nullptr));
        btnDelete->setText(QCoreApplication::translate("SectionRoomRevise", "\345\210\240\351\231\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SectionRoomRevise: public Ui_SectionRoomRevise {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECTIONROOMREVISE_H

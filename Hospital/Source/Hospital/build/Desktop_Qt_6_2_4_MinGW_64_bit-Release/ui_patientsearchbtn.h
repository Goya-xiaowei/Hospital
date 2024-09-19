/********************************************************************************
** Form generated from reading UI file 'patientsearchbtn.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATIENTSEARCHBTN_H
#define UI_PATIENTSEARCHBTN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
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

class Ui_PatientSearchBtn
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEditName;
    QPushButton *btnFind;
    QPushButton *btnAll;
    QSpacerItem *horizontalSpacer;
    QTreeView *treeView;

    void setupUi(QWidget *PatientSearchBtn)
    {
        if (PatientSearchBtn->objectName().isEmpty())
            PatientSearchBtn->setObjectName(QString::fromUtf8("PatientSearchBtn"));
        PatientSearchBtn->resize(787, 550);
        PatientSearchBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        verticalLayout = new QVBoxLayout(PatientSearchBtn);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(PatientSearchBtn);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEditName = new QLineEdit(PatientSearchBtn);
        lineEditName->setObjectName(QString::fromUtf8("lineEditName"));

        horizontalLayout->addWidget(lineEditName);

        btnFind = new QPushButton(PatientSearchBtn);
        btnFind->setObjectName(QString::fromUtf8("btnFind"));

        horizontalLayout->addWidget(btnFind);

        btnAll = new QPushButton(PatientSearchBtn);
        btnAll->setObjectName(QString::fromUtf8("btnAll"));

        horizontalLayout->addWidget(btnAll);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        treeView = new QTreeView(PatientSearchBtn);
        treeView->setObjectName(QString::fromUtf8("treeView"));

        verticalLayout->addWidget(treeView);


        retranslateUi(PatientSearchBtn);

        QMetaObject::connectSlotsByName(PatientSearchBtn);
    } // setupUi

    void retranslateUi(QWidget *PatientSearchBtn)
    {
        PatientSearchBtn->setWindowTitle(QCoreApplication::translate("PatientSearchBtn", "Form", nullptr));
        label->setText(QCoreApplication::translate("PatientSearchBtn", "\346\240\271\346\215\256\345\247\223\345\220\215\346\237\245\346\211\276\347\227\205\344\272\272", nullptr));
        btnFind->setText(QCoreApplication::translate("PatientSearchBtn", "\346\237\245\346\211\276", nullptr));
        btnAll->setText(QCoreApplication::translate("PatientSearchBtn", "\346\230\276\347\244\272\345\205\250\351\203\250\344\277\241\346\201\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PatientSearchBtn: public Ui_PatientSearchBtn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATIENTSEARCHBTN_H

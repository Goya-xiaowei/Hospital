/********************************************************************************
** Form generated from reading UI file 'tollwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOLLWIDGET_H
#define UI_TOLLWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
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

class Ui_TollWidget
{
public:
    QVBoxLayout *verticalLayout_16;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_14;
    QVBoxLayout *verticalLayout_15;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEditCard;
    QLineEdit *lineEditDoctor;
    QComboBox *comboBoxSex;
    QVBoxLayout *verticalLayout_13;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnFind;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_4;
    QLabel *label_7;
    QVBoxLayout *verticalLayout_12;
    QComboBox *comboBoxSectionRoom;
    QLineEdit *lineEditSumPrice;
    QVBoxLayout *verticalLayout_8;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_5;
    QLabel *label_8;
    QVBoxLayout *verticalLayout_9;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *lineEditName;
    QLineEdit *lineEditZhifuPrice;
    QVBoxLayout *verticalLayout_10;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_6;
    QLabel *label_9;
    QVBoxLayout *verticalLayout_11;
    QSpacerItem *horizontalSpacer_6;
    QLineEdit *lineEditId;
    QLineEdit *lineEditChangePrice;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnCheckout;
    QHBoxLayout *horizontalLayout_8;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_3;
    QTreeView *treeViewLeft;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_10;
    QComboBox *comboBoxLeft;
    QLabel *label_11;
    QPushButton *btnLeftHome;
    QPushButton *btnLeftPrevious;
    QPushButton *btnLeftNext;
    QPushButton *btnLeftEnd;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QTreeView *treeViewRight;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_12;
    QComboBox *comboBox_4;
    QLabel *label_13;
    QPushButton *btnRightHome;
    QPushButton *btnRightPrevious;
    QPushButton *btnRightNext;
    QPushButton *btnRightEnd;

    void setupUi(QWidget *TollWidget)
    {
        if (TollWidget->objectName().isEmpty())
            TollWidget->setObjectName(QString::fromUtf8("TollWidget"));
        TollWidget->resize(1375, 462);
        verticalLayout_16 = new QVBoxLayout(TollWidget);
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        verticalLayout_16->setContentsMargins(1, 1, 1, 1);
        groupBox = new QGroupBox(TollWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setFlat(false);
        groupBox->setCheckable(false);
        verticalLayout_14 = new QVBoxLayout(groupBox);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
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


        horizontalLayout_5->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lineEditCard = new QLineEdit(groupBox);
        lineEditCard->setObjectName(QString::fromUtf8("lineEditCard"));

        verticalLayout_2->addWidget(lineEditCard);

        lineEditDoctor = new QLineEdit(groupBox);
        lineEditDoctor->setObjectName(QString::fromUtf8("lineEditDoctor"));

        verticalLayout_2->addWidget(lineEditDoctor);

        comboBoxSex = new QComboBox(groupBox);
        comboBoxSex->setObjectName(QString::fromUtf8("comboBoxSex"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBoxSex->sizePolicy().hasHeightForWidth());
        comboBoxSex->setSizePolicy(sizePolicy);
        comboBoxSex->setMaximumSize(QSize(80, 25));

        verticalLayout_2->addWidget(comboBoxSex);


        horizontalLayout_5->addLayout(verticalLayout_2);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnFind = new QPushButton(groupBox);
        btnFind->setObjectName(QString::fromUtf8("btnFind"));

        horizontalLayout->addWidget(btnFind);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_13->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_7->addWidget(label_4);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_7->addWidget(label_7);


        horizontalLayout_4->addLayout(verticalLayout_7);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        comboBoxSectionRoom = new QComboBox(groupBox);
        comboBoxSectionRoom->setObjectName(QString::fromUtf8("comboBoxSectionRoom"));
        comboBoxSectionRoom->setMaximumSize(QSize(80, 25));

        verticalLayout_12->addWidget(comboBoxSectionRoom);

        lineEditSumPrice = new QLineEdit(groupBox);
        lineEditSumPrice->setObjectName(QString::fromUtf8("lineEditSumPrice"));

        verticalLayout_12->addWidget(lineEditSumPrice);


        horizontalLayout_4->addLayout(verticalLayout_12);


        verticalLayout_13->addLayout(horizontalLayout_4);


        horizontalLayout_5->addLayout(verticalLayout_13);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        verticalLayout_8->addItem(horizontalSpacer_3);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_8->addWidget(label_5);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout_8->addWidget(label_8);


        horizontalLayout_5->addLayout(verticalLayout_8);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_9->addItem(horizontalSpacer_4);

        lineEditName = new QLineEdit(groupBox);
        lineEditName->setObjectName(QString::fromUtf8("lineEditName"));

        verticalLayout_9->addWidget(lineEditName);

        lineEditZhifuPrice = new QLineEdit(groupBox);
        lineEditZhifuPrice->setObjectName(QString::fromUtf8("lineEditZhifuPrice"));
        lineEditZhifuPrice->setDragEnabled(false);

        verticalLayout_9->addWidget(lineEditZhifuPrice);


        horizontalLayout_5->addLayout(verticalLayout_9);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        verticalLayout_10->addItem(horizontalSpacer_5);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_10->addWidget(label_6);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout_10->addWidget(label_9);


        horizontalLayout_5->addLayout(verticalLayout_10);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_11->addItem(horizontalSpacer_6);

        lineEditId = new QLineEdit(groupBox);
        lineEditId->setObjectName(QString::fromUtf8("lineEditId"));

        verticalLayout_11->addWidget(lineEditId);

        lineEditChangePrice = new QLineEdit(groupBox);
        lineEditChangePrice->setObjectName(QString::fromUtf8("lineEditChangePrice"));

        verticalLayout_11->addWidget(lineEditChangePrice);


        horizontalLayout_5->addLayout(verticalLayout_11);


        verticalLayout_15->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        btnCheckout = new QPushButton(groupBox);
        btnCheckout->setObjectName(QString::fromUtf8("btnCheckout"));

        horizontalLayout_6->addWidget(btnCheckout);


        verticalLayout_15->addLayout(horizontalLayout_6);


        verticalLayout_14->addLayout(verticalLayout_15);


        verticalLayout_16->addWidget(groupBox);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(1, 1, 1, 1);
        groupBox_2 = new QGroupBox(TollWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_6 = new QVBoxLayout(groupBox_2);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(1, 10, 1, 1);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(1, 1, 1, 1);
        treeViewLeft = new QTreeView(groupBox_2);
        treeViewLeft->setObjectName(QString::fromUtf8("treeViewLeft"));

        verticalLayout_3->addWidget(treeViewLeft);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_2->addWidget(label_10);

        comboBoxLeft = new QComboBox(groupBox_2);
        comboBoxLeft->setObjectName(QString::fromUtf8("comboBoxLeft"));

        horizontalLayout_2->addWidget(comboBoxLeft);

        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_2->addWidget(label_11);

        btnLeftHome = new QPushButton(groupBox_2);
        btnLeftHome->setObjectName(QString::fromUtf8("btnLeftHome"));

        horizontalLayout_2->addWidget(btnLeftHome);

        btnLeftPrevious = new QPushButton(groupBox_2);
        btnLeftPrevious->setObjectName(QString::fromUtf8("btnLeftPrevious"));

        horizontalLayout_2->addWidget(btnLeftPrevious);

        btnLeftNext = new QPushButton(groupBox_2);
        btnLeftNext->setObjectName(QString::fromUtf8("btnLeftNext"));

        horizontalLayout_2->addWidget(btnLeftNext);

        btnLeftEnd = new QPushButton(groupBox_2);
        btnLeftEnd->setObjectName(QString::fromUtf8("btnLeftEnd"));

        horizontalLayout_2->addWidget(btnLeftEnd);


        verticalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout_6->addLayout(verticalLayout_3);


        horizontalLayout_8->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(TollWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_5 = new QVBoxLayout(groupBox_3);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(1, 10, 1, 1);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        treeViewRight = new QTreeView(groupBox_3);
        treeViewRight->setObjectName(QString::fromUtf8("treeViewRight"));

        verticalLayout_4->addWidget(treeViewRight);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_12 = new QLabel(groupBox_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_3->addWidget(label_12);

        comboBox_4 = new QComboBox(groupBox_3);
        comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));

        horizontalLayout_3->addWidget(comboBox_4);

        label_13 = new QLabel(groupBox_3);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout_3->addWidget(label_13);

        btnRightHome = new QPushButton(groupBox_3);
        btnRightHome->setObjectName(QString::fromUtf8("btnRightHome"));

        horizontalLayout_3->addWidget(btnRightHome);

        btnRightPrevious = new QPushButton(groupBox_3);
        btnRightPrevious->setObjectName(QString::fromUtf8("btnRightPrevious"));

        horizontalLayout_3->addWidget(btnRightPrevious);

        btnRightNext = new QPushButton(groupBox_3);
        btnRightNext->setObjectName(QString::fromUtf8("btnRightNext"));

        horizontalLayout_3->addWidget(btnRightNext);

        btnRightEnd = new QPushButton(groupBox_3);
        btnRightEnd->setObjectName(QString::fromUtf8("btnRightEnd"));

        horizontalLayout_3->addWidget(btnRightEnd);


        verticalLayout_4->addLayout(horizontalLayout_3);


        verticalLayout_5->addLayout(verticalLayout_4);


        horizontalLayout_8->addWidget(groupBox_3);


        verticalLayout_16->addLayout(horizontalLayout_8);

        verticalLayout_16->setStretch(0, 1);
        verticalLayout_16->setStretch(1, 2);

        retranslateUi(TollWidget);

        QMetaObject::connectSlotsByName(TollWidget);
    } // setupUi

    void retranslateUi(QWidget *TollWidget)
    {
        TollWidget->setWindowTitle(QCoreApplication::translate("TollWidget", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("TollWidget", "\345\275\223\345\211\215\347\227\205\344\272\272\344\277\241\346\201\257", nullptr));
        label->setText(QCoreApplication::translate("TollWidget", "\345\214\273\347\226\227\345\215\241\345\217\267\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("TollWidget", "\344\270\273\346\262\273\345\214\273\347\224\237\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("TollWidget", "\346\200\247\345\210\253\357\274\232", nullptr));
        btnFind->setText(QCoreApplication::translate("TollWidget", "\346\237\245\350\257\242", nullptr));
        label_4->setText(QCoreApplication::translate("TollWidget", "\347\247\221\345\256\244\357\274\232", nullptr));
        label_7->setText(QCoreApplication::translate("TollWidget", "\346\200\273\351\207\221\351\242\235\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("TollWidget", "\345\247\223\345\220\215\357\274\232", nullptr));
        label_8->setText(QCoreApplication::translate("TollWidget", "\346\224\257\344\273\230\351\207\221\351\242\235\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("TollWidget", "\350\272\253\344\273\275\350\257\201\345\217\267\357\274\232", nullptr));
        label_9->setText(QCoreApplication::translate("TollWidget", "\346\211\276\351\233\266\357\274\232", nullptr));
        btnCheckout->setText(QCoreApplication::translate("TollWidget", "\351\227\250\350\257\212\347\273\223\350\264\246", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("TollWidget", "\346\234\252\344\273\230\350\264\271\347\227\205\344\272\272", nullptr));
        label_10->setText(QCoreApplication::translate("TollWidget", "\345\275\223\345\211\215\347\254\254", nullptr));
        label_11->setText(QCoreApplication::translate("TollWidget", "\351\241\265", nullptr));
        btnLeftHome->setText(QCoreApplication::translate("TollWidget", "\351\246\226\351\241\265", nullptr));
        btnLeftPrevious->setText(QCoreApplication::translate("TollWidget", "\344\270\212\344\270\200\351\241\265", nullptr));
        btnLeftNext->setText(QCoreApplication::translate("TollWidget", "\344\270\213\344\270\200\351\241\265", nullptr));
        btnLeftEnd->setText(QCoreApplication::translate("TollWidget", "\345\260\276\351\241\265", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("TollWidget", "\345\275\223\345\211\215\347\227\205\344\272\272\346\266\210\350\264\271\346\230\216\347\273\206", nullptr));
        label_12->setText(QCoreApplication::translate("TollWidget", "\345\275\223\345\211\215\347\254\254", nullptr));
        label_13->setText(QCoreApplication::translate("TollWidget", "\351\241\265", nullptr));
        btnRightHome->setText(QCoreApplication::translate("TollWidget", "\351\246\226\351\241\265", nullptr));
        btnRightPrevious->setText(QCoreApplication::translate("TollWidget", "\344\270\212\344\270\200\351\241\265", nullptr));
        btnRightNext->setText(QCoreApplication::translate("TollWidget", "\344\270\213\344\270\200\351\241\265", nullptr));
        btnRightEnd->setText(QCoreApplication::translate("TollWidget", "\345\260\276\351\241\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TollWidget: public Ui_TollWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOLLWIDGET_H

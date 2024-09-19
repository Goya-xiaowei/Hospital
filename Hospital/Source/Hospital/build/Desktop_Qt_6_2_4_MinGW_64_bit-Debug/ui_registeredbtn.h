/********************************************************************************
** Form generated from reading UI file 'registeredbtn.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTEREDBTN_H
#define UI_REGISTEREDBTN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegisteredBtn
{
public:
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QLineEdit *lineEditAdd;
    QPushButton *btnAdd;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_8;
    QListWidget *listWidgetShowCheckBox;
    QVBoxLayout *verticalLayout_10;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *checkBox;
    QSpacerItem *verticalSpacer_6;
    QCheckBox *checkBox_3;
    QSpacerItem *verticalSpacer_7;
    QCheckBox *checkBox_4;
    QSpacerItem *verticalSpacer_8;
    QCheckBox *checkBox_2;
    QSpacerItem *verticalSpacer_9;
    QCheckBox *checkBox_10;
    QSpacerItem *verticalSpacer_10;
    QCheckBox *checkBox_5;
    QSpacerItem *verticalSpacer_12;
    QCheckBox *checkBox_8;
    QSpacerItem *verticalSpacer_11;
    QCheckBox *checkBox_7;
    QSpacerItem *verticalSpacer_13;
    QCheckBox *checkBox_6;
    QSpacerItem *verticalSpacer_14;
    QCheckBox *checkBox_9;
    QSpacerItem *verticalSpacer_15;
    QCheckBox *checkBox_11;
    QSpacerItem *verticalSpacer_5;
    QVBoxLayout *verticalLayout_7;
    QPushButton *btnSave;
    QPushButton *btnClear;
    QPushButton *btnPreview;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_3;
    QWidget *widget;
    QGroupBox *groupBoxGhd;
    QVBoxLayout *verticalLayout_6;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_2;
    QPushButton *btnClose;
    QSpacerItem *horizontalSpacer;
    QFrame *ghdFrame;
    QListWidget *listWidgetPreview;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QWidget *RegisteredBtn)
    {
        if (RegisteredBtn->objectName().isEmpty())
            RegisteredBtn->setObjectName(QString::fromUtf8("RegisteredBtn"));
        RegisteredBtn->resize(829, 746);
        verticalLayout_11 = new QVBoxLayout(RegisteredBtn);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(RegisteredBtn);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        lineEdit = new QLineEdit(RegisteredBtn);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setAlignment(Qt::AlignCenter);
        lineEdit->setDragEnabled(false);
        lineEdit->setReadOnly(true);

        horizontalLayout_2->addWidget(lineEdit);

        lineEditAdd = new QLineEdit(RegisteredBtn);
        lineEditAdd->setObjectName(QString::fromUtf8("lineEditAdd"));

        horizontalLayout_2->addWidget(lineEditAdd);

        btnAdd = new QPushButton(RegisteredBtn);
        btnAdd->setObjectName(QString::fromUtf8("btnAdd"));

        horizontalLayout_2->addWidget(btnAdd);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_11->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBox = new QGroupBox(RegisteredBtn);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setMinimumSize(QSize(150, 500));
        groupBox->setMaximumSize(QSize(150, 500));
        groupBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        verticalLayout_8 = new QVBoxLayout(groupBox);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        listWidgetShowCheckBox = new QListWidget(groupBox);
        listWidgetShowCheckBox->setObjectName(QString::fromUtf8("listWidgetShowCheckBox"));
        sizePolicy.setHeightForWidth(listWidgetShowCheckBox->sizePolicy().hasHeightForWidth());
        listWidgetShowCheckBox->setSizePolicy(sizePolicy);
        listWidgetShowCheckBox->setMinimumSize(QSize(130, 450));
        listWidgetShowCheckBox->setMaximumSize(QSize(140, 450));

        verticalLayout_8->addWidget(listWidgetShowCheckBox);


        horizontalLayout->addWidget(groupBox);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        label_2 = new QLabel(RegisteredBtn);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_9->addWidget(label_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        checkBox = new QCheckBox(RegisteredBtn);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setMaximumSize(QSize(100, 16777215));

        verticalLayout_2->addWidget(checkBox);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_6);

        checkBox_3 = new QCheckBox(RegisteredBtn);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));
        checkBox_3->setMaximumSize(QSize(100, 16777215));

        verticalLayout_2->addWidget(checkBox_3);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_7);

        checkBox_4 = new QCheckBox(RegisteredBtn);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));
        checkBox_4->setMaximumSize(QSize(100, 16777215));

        verticalLayout_2->addWidget(checkBox_4);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_8);

        checkBox_2 = new QCheckBox(RegisteredBtn);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setMaximumSize(QSize(100, 16777215));

        verticalLayout_2->addWidget(checkBox_2);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_9);

        checkBox_10 = new QCheckBox(RegisteredBtn);
        checkBox_10->setObjectName(QString::fromUtf8("checkBox_10"));
        checkBox_10->setMaximumSize(QSize(100, 16777215));

        verticalLayout_2->addWidget(checkBox_10);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_10);

        checkBox_5 = new QCheckBox(RegisteredBtn);
        checkBox_5->setObjectName(QString::fromUtf8("checkBox_5"));
        checkBox_5->setMaximumSize(QSize(100, 16777215));

        verticalLayout_2->addWidget(checkBox_5);

        verticalSpacer_12 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_12);

        checkBox_8 = new QCheckBox(RegisteredBtn);
        checkBox_8->setObjectName(QString::fromUtf8("checkBox_8"));
        checkBox_8->setMaximumSize(QSize(100, 16777215));

        verticalLayout_2->addWidget(checkBox_8);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_11);

        checkBox_7 = new QCheckBox(RegisteredBtn);
        checkBox_7->setObjectName(QString::fromUtf8("checkBox_7"));
        checkBox_7->setMaximumSize(QSize(100, 16777215));

        verticalLayout_2->addWidget(checkBox_7);

        verticalSpacer_13 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_13);

        checkBox_6 = new QCheckBox(RegisteredBtn);
        checkBox_6->setObjectName(QString::fromUtf8("checkBox_6"));
        checkBox_6->setMaximumSize(QSize(100, 16777215));

        verticalLayout_2->addWidget(checkBox_6);

        verticalSpacer_14 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_14);

        checkBox_9 = new QCheckBox(RegisteredBtn);
        checkBox_9->setObjectName(QString::fromUtf8("checkBox_9"));
        checkBox_9->setMaximumSize(QSize(100, 16777215));

        verticalLayout_2->addWidget(checkBox_9);

        verticalSpacer_15 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_15);

        checkBox_11 = new QCheckBox(RegisteredBtn);
        checkBox_11->setObjectName(QString::fromUtf8("checkBox_11"));
        checkBox_11->setMaximumSize(QSize(100, 16777215));

        verticalLayout_2->addWidget(checkBox_11);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_5);


        verticalLayout_9->addLayout(verticalLayout_2);


        verticalLayout_10->addLayout(verticalLayout_9);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        btnSave = new QPushButton(RegisteredBtn);
        btnSave->setObjectName(QString::fromUtf8("btnSave"));
        btnSave->setMaximumSize(QSize(100, 16777215));

        verticalLayout_7->addWidget(btnSave);

        btnClear = new QPushButton(RegisteredBtn);
        btnClear->setObjectName(QString::fromUtf8("btnClear"));
        btnClear->setMaximumSize(QSize(100, 16777215));

        verticalLayout_7->addWidget(btnClear);

        btnPreview = new QPushButton(RegisteredBtn);
        btnPreview->setObjectName(QString::fromUtf8("btnPreview"));
        btnPreview->setMaximumSize(QSize(100, 16777215));

        verticalLayout_7->addWidget(btnPreview);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_3);


        verticalLayout_10->addLayout(verticalLayout_7);


        horizontalLayout->addLayout(verticalLayout_10);

        widget = new QWidget(RegisteredBtn);
        widget->setObjectName(QString::fromUtf8("widget"));
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setMinimumSize(QSize(420, 500));
        widget->setMaximumSize(QSize(450, 550));
        groupBoxGhd = new QGroupBox(widget);
        groupBoxGhd->setObjectName(QString::fromUtf8("groupBoxGhd"));
        groupBoxGhd->setEnabled(true);
        groupBoxGhd->setGeometry(QRect(10, 20, 400, 500));
        sizePolicy.setHeightForWidth(groupBoxGhd->sizePolicy().hasHeightForWidth());
        groupBoxGhd->setSizePolicy(sizePolicy);
        groupBoxGhd->setMinimumSize(QSize(400, 500));
        groupBoxGhd->setMaximumSize(QSize(400, 500));
        groupBoxGhd->setSizeIncrement(QSize(400, 600));
        groupBoxGhd->setStyleSheet(QString::fromUtf8("QGroupBox{border:none;}"));
        verticalLayout_6 = new QVBoxLayout(groupBoxGhd);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        pushButton_2 = new QPushButton(groupBoxGhd);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_5->addWidget(pushButton_2);

        btnClose = new QPushButton(groupBoxGhd);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));

        horizontalLayout_5->addWidget(btnClose);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);


        verticalLayout_4->addLayout(horizontalLayout_5);

        ghdFrame = new QFrame(groupBoxGhd);
        ghdFrame->setObjectName(QString::fromUtf8("ghdFrame"));
        sizePolicy.setHeightForWidth(ghdFrame->sizePolicy().hasHeightForWidth());
        ghdFrame->setSizePolicy(sizePolicy);
        ghdFrame->setMinimumSize(QSize(400, 400));
        ghdFrame->setMaximumSize(QSize(400, 400));
        ghdFrame->setSizeIncrement(QSize(400, 500));
        ghdFrame->setStyleSheet(QString::fromUtf8("QFrame\n"
"{border-image: url(:/image/ghd.jpg);}\n"
"QListView{border-image:url();}"));
        listWidgetPreview = new QListWidget(ghdFrame);
        listWidgetPreview->setObjectName(QString::fromUtf8("listWidgetPreview"));
        listWidgetPreview->setGeometry(QRect(20, 100, 360, 241));
        sizePolicy.setHeightForWidth(listWidgetPreview->sizePolicy().hasHeightForWidth());
        listWidgetPreview->setSizePolicy(sizePolicy);
        listWidgetPreview->setMinimumSize(QSize(360, 0));
        listWidgetPreview->setMaximumSize(QSize(360, 16777215));
        listWidgetPreview->setStyleSheet(QString::fromUtf8("border:none;"));

        verticalLayout_4->addWidget(ghdFrame);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_4);


        verticalLayout_6->addLayout(verticalLayout_4);


        horizontalLayout->addWidget(widget);


        verticalLayout_11->addLayout(horizontalLayout);


        retranslateUi(RegisteredBtn);

        QMetaObject::connectSlotsByName(RegisteredBtn);
    } // setupUi

    void retranslateUi(QWidget *RegisteredBtn)
    {
        RegisteredBtn->setWindowTitle(QCoreApplication::translate("RegisteredBtn", "Form", nullptr));
        label->setText(QCoreApplication::translate("RegisteredBtn", "\346\240\207\351\242\230\346\226\207\346\234\254\357\274\232", nullptr));
        lineEdit->setText(QCoreApplication::translate("RegisteredBtn", "\346\214\202\345\217\267\345\215\225", nullptr));
        btnAdd->setText(QCoreApplication::translate("RegisteredBtn", "\346\267\273\345\212\240\351\241\271\347\233\256", nullptr));
        groupBox->setTitle(QCoreApplication::translate("RegisteredBtn", "\350\256\276\350\256\241\345\214\272", nullptr));
        label_2->setText(QCoreApplication::translate("RegisteredBtn", "\346\211\223\345\215\260\351\241\271\347\233\256", nullptr));
        checkBox->setText(QCoreApplication::translate("RegisteredBtn", "\347\274\226\345\217\267", nullptr));
        checkBox_3->setText(QCoreApplication::translate("RegisteredBtn", "\347\247\221\345\256\244", nullptr));
        checkBox_4->setText(QCoreApplication::translate("RegisteredBtn", "\345\214\273\345\270\210", nullptr));
        checkBox_2->setText(QCoreApplication::translate("RegisteredBtn", "\345\244\204\346\226\271\350\215\257", nullptr));
        checkBox_10->setText(QCoreApplication::translate("RegisteredBtn", "\347\227\205\345\272\212\345\217\267", nullptr));
        checkBox_5->setText(QCoreApplication::translate("RegisteredBtn", "\351\227\256\350\257\212\346\227\266\351\227\264", nullptr));
        checkBox_8->setText(QCoreApplication::translate("RegisteredBtn", "\346\224\266\351\223\266\345\221\230", nullptr));
        checkBox_7->setText(QCoreApplication::translate("RegisteredBtn", "\346\266\210\350\264\271\346\230\216\347\273\206", nullptr));
        checkBox_6->setText(QCoreApplication::translate("RegisteredBtn", "\345\207\272\351\231\242\346\227\266\351\227\264", nullptr));
        checkBox_9->setText(QCoreApplication::translate("RegisteredBtn", "\346\266\210\350\264\271\351\207\221\351\242\235", nullptr));
        checkBox_11->setText(QCoreApplication::translate("RegisteredBtn", "\345\205\245\351\231\242\346\227\266\351\227\264", nullptr));
        btnSave->setText(QCoreApplication::translate("RegisteredBtn", "\344\277\235\345\255\230", nullptr));
        btnClear->setText(QCoreApplication::translate("RegisteredBtn", "\346\270\205\347\251\272", nullptr));
        btnPreview->setText(QCoreApplication::translate("RegisteredBtn", "\351\242\204\350\247\210", nullptr));
        groupBoxGhd->setTitle(QCoreApplication::translate("RegisteredBtn", "\351\242\204\350\247\210\345\214\272", nullptr));
        pushButton_2->setText(QCoreApplication::translate("RegisteredBtn", "\346\211\223\345\215\260", nullptr));
        btnClose->setText(QCoreApplication::translate("RegisteredBtn", "\345\205\263\351\227\255", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisteredBtn: public Ui_RegisteredBtn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTEREDBTN_H

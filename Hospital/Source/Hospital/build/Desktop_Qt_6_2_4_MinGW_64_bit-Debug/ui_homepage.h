/********************************************************************************
** Form generated from reading UI file 'homepage.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMEPAGE_H
#define UI_HOMEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HomePage
{
public:
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_5;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_3;
    QSpacerItem *verticalSpacer_4;
    QLabel *label_7;
    QSpacerItem *verticalSpacer_5;
    QLabel *label_6;
    QSpacerItem *verticalSpacer_6;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEditUserName;
    QSpacerItem *verticalSpacer_7;
    QLineEdit *lineEditName;
    QSpacerItem *verticalSpacer_8;
    QLineEdit *lineEditSex;
    QSpacerItem *verticalSpacer_9;
    QLineEdit *lineEditType;
    QSpacerItem *verticalSpacer_10;
    QLineEdit *lineEditSectionRoom;
    QSpacerItem *verticalSpacer_11;
    QLineEdit *lineEditPhone;
    QSpacerItem *verticalSpacer_12;
    QLineEdit *lineEditAddr;
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_8;

    void setupUi(QWidget *HomePage)
    {
        if (HomePage->objectName().isEmpty())
            HomePage->setObjectName(QString::fromUtf8("HomePage"));
        HomePage->resize(821, 550);
        horizontalLayout_2 = new QHBoxLayout(HomePage);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        groupBox = new QGroupBox(HomePage);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, 12, -1, -1);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QFont font;
        font.setPointSize(11);
        label_5->setFont(font);

        verticalLayout->addWidget(label_5);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        verticalLayout->addWidget(label);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        verticalLayout->addWidget(label_3);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);

        verticalLayout->addWidget(label_7);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        verticalLayout->addWidget(label_6);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_6);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        verticalLayout->addWidget(label_4);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lineEditUserName = new QLineEdit(groupBox);
        lineEditUserName->setObjectName(QString::fromUtf8("lineEditUserName"));

        verticalLayout_2->addWidget(lineEditUserName);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_7);

        lineEditName = new QLineEdit(groupBox);
        lineEditName->setObjectName(QString::fromUtf8("lineEditName"));

        verticalLayout_2->addWidget(lineEditName);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_8);

        lineEditSex = new QLineEdit(groupBox);
        lineEditSex->setObjectName(QString::fromUtf8("lineEditSex"));

        verticalLayout_2->addWidget(lineEditSex);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_9);

        lineEditType = new QLineEdit(groupBox);
        lineEditType->setObjectName(QString::fromUtf8("lineEditType"));

        verticalLayout_2->addWidget(lineEditType);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_10);

        lineEditSectionRoom = new QLineEdit(groupBox);
        lineEditSectionRoom->setObjectName(QString::fromUtf8("lineEditSectionRoom"));

        verticalLayout_2->addWidget(lineEditSectionRoom);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_11);

        lineEditPhone = new QLineEdit(groupBox);
        lineEditPhone->setObjectName(QString::fromUtf8("lineEditPhone"));

        verticalLayout_2->addWidget(lineEditPhone);

        verticalSpacer_12 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_12);

        lineEditAddr = new QLineEdit(groupBox);
        lineEditAddr->setObjectName(QString::fromUtf8("lineEditAddr"));

        verticalLayout_2->addWidget(lineEditAddr);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);


        horizontalLayout_2->addWidget(groupBox);

        widget = new QWidget(HomePage);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        scrollArea = new QScrollArea(widget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 487, 630));
        verticalLayout_5 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_8 = new QLabel(scrollAreaWidgetContents);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setWordWrap(true);

        verticalLayout_5->addWidget(label_8);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_4->addWidget(scrollArea);


        horizontalLayout_2->addWidget(widget);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 2);

        retranslateUi(HomePage);

        QMetaObject::connectSlotsByName(HomePage);
    } // setupUi

    void retranslateUi(QWidget *HomePage)
    {
        HomePage->setWindowTitle(QCoreApplication::translate("HomePage", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("HomePage", "\344\270\252\344\272\272\344\277\241\346\201\257", nullptr));
        label_5->setText(QCoreApplication::translate("HomePage", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        label->setText(QCoreApplication::translate("HomePage", "\345\247\223\345\220\215\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("HomePage", "\346\200\247\345\210\253\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("HomePage", "\347\261\273\345\236\213\357\274\232", nullptr));
        label_7->setText(QCoreApplication::translate("HomePage", "\346\211\200\345\261\236\347\247\221\345\256\244\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("HomePage", "\350\201\224\347\263\273\347\224\265\350\257\235\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("HomePage", "\344\275\217\345\235\200", nullptr));
        label_8->setText(QCoreApplication::translate("HomePage", "\344\270\255\345\233\275\345\214\273\345\255\246\347\247\221\345\255\246\351\231\242\351\230\234\345\244\226\345\214\273\351\231\242\357\274\210\344\273\245\344\270\213\347\256\200\347\247\260\351\230\234\345\244\226\345\214\273\351\231\242\357\274\211\357\274\214\346\230\257\345\233\275\345\256\266\347\272\247\344\270\211\347\272\247\347\224\262\347\255\211\345\277\203\350\241\200\347\256\241\347\227\205\344\270\223\347\247\221\345\214\273\351\231\242\357\274\214\344\271\237\346\230\257\345\233\275\345\256\266\345\277\203\350\241\200\347\256\241\347\227\205\344\270\255\345\277\203\343\200\201\345\277\203\350\241\200\347\256\241\347\226\276\347\227\205\345\233\275\345\256\266\351\207\215\347\202\271\345\256\236\351\252\214\345\256\244\343\200\201\345\233\275\345\256\266\345\277\203\350\241\200\347\256\241\347\226\276\347\227\205\344\270\264\345\272\212\345\214\273\345\255\246\347\240\224\347\251\266\344\270\255\345\277\203\346\211\200\345\234\250\345\234\260\357\274\214\344\273\245\350\257\212\346\262\273\345\220"
                        "\204\347\247\215\345\244\215\346\235\202\343\200\201\347\226\221\351\232\276\345\222\214\351\207\215\347\227\207\345\277\203\350\241\200\347\256\241\347\226\276\347\227\205\350\200\214\344\272\253\350\252\211\345\233\275\345\206\205\345\244\226\357\274\214\345\267\262\346\210\220\344\270\272\344\270\226\347\225\214\344\270\212\346\234\200\345\244\247\347\232\204\345\277\203\350\241\200\347\256\241\347\226\276\347\227\205\350\257\212\346\262\273\344\270\255\345\277\203\345\222\214\351\233\206\345\214\273\347\226\227\343\200\201\347\247\221\347\240\224\343\200\201\351\242\204\351\230\262\345\222\214\344\272\272\346\211\215\345\237\271\345\205\273\344\272\216\344\270\200\344\275\223\347\232\204\345\233\275\345\256\266\347\272\247\345\214\273\345\255\246\347\240\224\347\251\266\344\270\216\346\225\231\350\202\262\344\270\255\345\277\203\343\200\202\n"
"\n"
"\344\270\200\343\200\201\345\214\273\351\231\242\345\237\272\346\234\254\346\203\205\345\206\265\n"
"\n"
"\345\214\273\351\231\242\345\247\213\345\273\272\344\272"
                        "\2161956\345\271\264\357\274\2142009\345\271\264\344\270\255\345\244\256\347\274\226\345\212\236\346\211\271\345\244\215\346\210\220\347\253\213\345\233\275\345\256\266\345\277\203\350\241\200\347\256\241\347\227\205\344\270\255\345\277\203\357\274\214\346\255\243\345\274\217\345\275\242\346\210\220\342\200\234\344\270\255\345\277\203\342\200\224\345\214\273\351\231\242\342\200\235\344\270\200\344\275\223\345\214\226\346\240\274\345\261\200\343\200\202\345\214\273\351\231\242\345\210\206\344\270\272\344\270\264\345\272\212\345\214\273\347\226\227\345\214\272\345\222\214\351\242\204\351\230\262\347\240\224\347\251\266\345\214\272\343\200\202\344\270\264\345\272\212\345\214\273\347\226\227\345\214\272\357\274\210\351\230\234\346\210\220\351\227\250\345\244\226\351\231\242\345\214\272)\357\274\214\346\200\273\347\224\250\345\234\260\351\235\242\347\247\2575.53\344\270\207\345\271\263\346\226\271\347\261\263\357\274\214\346\200\273\345\273\272\347\255\221\351\235\242\347\247\25715.7\344\270\207\345\271\263\346\226"
                        "\271\347\261\263\357\274\233\351\242\204\351\230\262\347\240\224\347\251\266\345\214\272\357\274\210\351\227\250\345\244\264\346\262\237\350\245\277\345\261\261\345\233\255\345\214\272\357\274\211\346\200\273\347\224\250\345\234\260\351\235\242\347\247\2577.33\344\270\207\345\271\263\346\226\271\347\261\263\357\274\214\346\200\273\345\273\272\347\255\221\351\235\242\347\247\257\347\233\256\345\211\215\344\270\2723.7\344\270\207\345\271\263\346\226\271\347\261\263\357\274\214\346\234\252\346\235\245\345\260\206\350\276\276\345\210\2609.2\344\270\207\345\271\263\346\226\271\347\261\263\343\200\202\n"
"\n"
"\345\214\273\351\231\242\350\256\276\346\234\21136\344\270\252\347\227\205\346\210\277\357\274\21426\344\270\252\346\211\213\346\234\257\345\256\244\357\274\210\345\205\266\344\270\255\345\214\205\345\220\2535\344\270\252\345\244\215\345\220\210\346\212\200\346\234\257\346\211\213\346\234\257\345\256\244\357\274\211\357\274\21417\344\270\252\345\257\274\347\256\241\345\256\244\357\274\2141521\345\274\240\347\274"
                        "\226\345\210\266\345\272\212\344\275\215\346\225\260\357\274\214\345\256\236\351\231\205\345\274\200\346\224\276\345\272\212\344\275\215\346\225\2601291\345\274\240\343\200\202\345\234\250\350\201\214\345\221\230\345\267\2453571\344\272\272\357\274\214\344\270\255\351\253\230\347\272\247\350\201\214\347\247\260\344\270\223\344\270\232\346\212\200\346\234\257\344\272\272\345\221\2301440\344\272\272\357\274\210\346\225\260\346\215\256\346\210\252\350\207\2632020\345\271\26412\346\234\21031\346\227\245\357\274\211\343\200\202\345\220\214\346\227\266\357\274\214\351\205\215\345\244\207\346\234\211\350\241\200\347\256\241\351\200\240\345\275\261\346\234\272\343\200\201\345\217\214\346\272\220CT\343\200\201\346\240\270\347\243\201\345\205\261\346\214\257\343\200\201PET-CT\347\255\211\344\270\216\344\270\226\347\225\214\346\216\245\350\275\250\347\232\204\345\214\273\347\226\227\347\247\221\347\240\224\350\256\276\345\244\207\343\200\202\n"
"\n"
"\345\214\273\351\231\242\350\236\215\345\205\245\345\244\247\351\207\217"
                        "\345\275\261\345\203\217\343\200\201\347\275\221\347\273\234\345\222\214\344\277\241\346\201\257\346\212\200\346\234\257\346\211\223\351\200\240\347\232\204\345\217\257\350\247\206\345\214\226\346\211\213\346\234\257\345\271\263\345\217\260\357\274\214\344\276\277\344\272\216\346\234\257\350\200\205\345\234\250\346\211\213\346\234\257\344\270\255\351\232\217\346\227\266\346\216\214\346\217\241\346\211\200\351\234\200\345\206\263\347\255\226\344\276\235\346\215\256\357\274\214\344\270\272\347\262\276\345\207\206\346\262\273\347\226\227\346\217\220\344\276\233\344\277\235\351\232\234\357\274\214\345\271\266\344\270\272\350\277\234\347\250\213\344\274\232\350\257\212\343\200\201\345\233\275\351\231\205\344\272\244\346\265\201\343\200\201\344\272\272\346\211\215\345\237\271\345\205\273\347\255\211\346\217\220\344\276\233\344\272\206\346\234\211\345\212\233\346\224\257\346\222\221\357\274\233\346\211\213\346\234\257\345\256\244\350\207\252\345\212\250\345\217\221\350\241\243\347\263\273\347\273\237\343\200\201\345\257"
                        "\271\346\216\245\345\214\273\345\230\261\347\232\204\346\231\272\350\203\275\350\215\257\346\237\234\347\255\211\347\232\204\344\275\277\347\224\250\357\274\214\346\224\271\345\226\204\344\272\206\345\267\245\344\275\234\346\265\201\347\250\213\357\274\214\344\273\245\347\216\260\344\273\243\345\214\226\343\200\201\344\277\241\346\201\257\345\214\226\346\211\213\346\256\265\346\217\220\345\215\207\345\214\273\351\231\242\347\256\241\347\220\206\346\225\210\347\216\207\357\274\214\347\234\237\346\255\243\346\210\220\344\270\272\344\272\272\346\265\201\343\200\201\347\211\251\346\265\201\343\200\201\344\277\241\346\201\257\346\265\201\342\200\234\346\225\260\346\215\256\345\214\226\342\200\235\345\205\250\350\246\206\347\233\226\347\232\204\347\216\260\344\273\243\345\214\226\345\214\273\351\231\242\343\200\202\n"
"\n"
"\345\214\273\351\231\242\347\247\221\345\255\246\345\220\210\347\220\206\345\234\260\350\260\203\346\225\264\345\255\246\347\247\221\351\205\215\347\275\256\345\217\212\350\247\204\346\250\241\357"
                        "\274\214\344\273\245\346\225\264\345\220\210\345\214\273\345\255\246\344\270\272\350\247\206\350\247\222\357\274\214\345\235\232\346\214\201\344\273\245\345\277\203\350\241\200\347\256\241\347\226\276\347\227\205\351\230\262\346\262\273\344\270\272\344\270\273\357\274\214\345\215\217\350\260\203\350\247\204\345\210\222\344\270\216\345\217\221\345\261\225\347\233\270\345\205\263\351\207\215\347\202\271\345\255\246\347\247\221\343\200\202\345\214\273\351\231\242\347\216\260\346\234\211\344\270\264\345\272\212\344\270\255\345\277\20320\344\270\252\357\274\214\346\266\265\347\233\226\345\277\203\350\241\200\347\256\241\347\227\205\345\206\205\347\247\221\343\200\201\345\244\226\347\247\221\347\226\276\347\227\205\350\257\212\347\226\227\344\270\255\345\277\203\343\200\201\345\256\236\351\252\214\346\212\200\346\234\257\345\271\263\345\217\260\344\273\245\345\217\212\345\277\203\350\241\200\347\256\241\347\226\276\347\227\205\347\233\270\345\205\263\347\226\276\347\227\205\350\257\212\347\226\227\344\270\255\345\277"
                        "\203\343\200\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HomePage: public Ui_HomePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEPAGE_H

/********************************************************************************
** Form generated from reading UI file 'uimain.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UIMAIN_H
#define UI_UIMAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UiMain
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_9;
    QLabel *labelShowUser;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *labelTime;
    QLabel *labelYearMonthDay;
    QGridLayout *gridLayout_2;
    QPushButton *btnCloseWidget;
    QSpacerItem *verticalSpacer_4;
    QPushButton *btnMaxWidget;
    QPushButton *btnMinWidget;
    QPushButton *btnQuit;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *verticalSpacer_7;
    QWidget *widgetManage;
    QHBoxLayout *horizontalLayout;
    QLabel *labelLeft;
    QPushButton *btnHome;
    QPushButton *btnSystem;
    QPushButton *btnDoctor;
    QPushButton *btnOutpatientManage;
    QPushButton *btnToll;
    QPushButton *btnInpatientManage;
    QPushButton *btnPharmacyManage;
    QPushButton *btnDrugManage;
    QPushButton *btnFinancialManage;
    QLabel *labelRight;
    QWidget *mainWidget;

    void setupUi(QWidget *UiMain)
    {
        if (UiMain->objectName().isEmpty())
            UiMain->setObjectName(QString::fromUtf8("UiMain"));
        UiMain->resize(972, 700);
        UiMain->setMaximumSize(QSize(1080, 800));
        verticalLayout = new QVBoxLayout(UiMain);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(UiMain);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);\n"
"border-radius:7px;padding:0px 0px;QWidget { background-color: transparent;}\n"
"QWidget * { background-color: transparent; }"));
        horizontalLayout_5 = new QHBoxLayout(widget);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/image/drug_select.png")));
        label_7->setTextInteractionFlags(Qt::LinksAccessibleByMouse);

        horizontalLayout_7->addWidget(label_7);

        label_8 = new QLabel(widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        QFont font;
        font.setFamilies({QString::fromUtf8("Agency FB")});
        font.setPointSize(16);
        label_8->setFont(font);

        horizontalLayout_7->addWidget(label_8);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);


        verticalLayout_3->addLayout(horizontalLayout_7);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_9 = new QLabel(widget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_8->addWidget(label_9);

        labelShowUser = new QLabel(widget);
        labelShowUser->setObjectName(QString::fromUtf8("labelShowUser"));

        horizontalLayout_8->addWidget(labelShowUser);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_3);


        verticalLayout_3->addLayout(horizontalLayout_8);

        verticalLayout_3->setStretch(0, 2);

        horizontalLayout_6->addLayout(verticalLayout_3);


        horizontalLayout_5->addLayout(horizontalLayout_6);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        labelTime = new QLabel(widget);
        labelTime->setObjectName(QString::fromUtf8("labelTime"));
        labelTime->setMaximumSize(QSize(200, 50));
        labelTime->setFont(font);

        verticalLayout_4->addWidget(labelTime);

        labelYearMonthDay = new QLabel(widget);
        labelYearMonthDay->setObjectName(QString::fromUtf8("labelYearMonthDay"));
        labelYearMonthDay->setMaximumSize(QSize(200, 30));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Agency FB")});
        font1.setPointSize(10);
        labelYearMonthDay->setFont(font1);

        verticalLayout_4->addWidget(labelYearMonthDay);

        verticalLayout_4->setStretch(0, 2);

        horizontalLayout_5->addLayout(verticalLayout_4);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        btnCloseWidget = new QPushButton(widget);
        btnCloseWidget->setObjectName(QString::fromUtf8("btnCloseWidget"));
        btnCloseWidget->setEnabled(true);
        btnCloseWidget->setMinimumSize(QSize(30, 0));
        btnCloseWidget->setMaximumSize(QSize(30, 30));
        btnCloseWidget->setCheckable(true);

        gridLayout_2->addWidget(btnCloseWidget, 0, 3, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_4, 1, 1, 1, 1);

        btnMaxWidget = new QPushButton(widget);
        btnMaxWidget->setObjectName(QString::fromUtf8("btnMaxWidget"));
        btnMaxWidget->setMinimumSize(QSize(30, 0));
        btnMaxWidget->setMaximumSize(QSize(30, 30));
        btnMaxWidget->setCheckable(true);

        gridLayout_2->addWidget(btnMaxWidget, 0, 2, 1, 1);

        btnMinWidget = new QPushButton(widget);
        btnMinWidget->setObjectName(QString::fromUtf8("btnMinWidget"));
        btnMinWidget->setEnabled(true);
        btnMinWidget->setMinimumSize(QSize(30, 0));
        btnMinWidget->setMaximumSize(QSize(30, 30));
#if QT_CONFIG(accessibility)
        btnMinWidget->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        btnMinWidget->setCheckable(true);

        gridLayout_2->addWidget(btnMinWidget, 0, 1, 1, 1);

        btnQuit = new QPushButton(widget);
        btnQuit->setObjectName(QString::fromUtf8("btnQuit"));
        btnQuit->setEnabled(true);
        btnQuit->setMinimumSize(QSize(30, 0));
        btnQuit->setMaximumSize(QSize(30, 30));
#if QT_CONFIG(accessibility)
        btnQuit->setAccessibleName(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        btnQuit->setCheckable(true);

        gridLayout_2->addWidget(btnQuit, 0, 0, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_5, 1, 0, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_6, 1, 2, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_7, 1, 3, 1, 1);

        gridLayout_2->setColumnMinimumWidth(0, 1);
        gridLayout_2->setColumnMinimumWidth(1, 1);
        gridLayout_2->setColumnMinimumWidth(2, 1);

        horizontalLayout_5->addLayout(gridLayout_2);

        horizontalLayout_5->setStretch(0, 3);
        horizontalLayout_5->setStretch(1, 1);

        verticalLayout->addWidget(widget);

        widgetManage = new QWidget(UiMain);
        widgetManage->setObjectName(QString::fromUtf8("widgetManage"));
        widgetManage->setMaximumSize(QSize(16777215, 57));
        widgetManage->setStyleSheet(QString::fromUtf8("\n"
"QFrame {\n"
"    border: 0px solid black; /* \350\276\271\346\241\206\345\256\275\345\272\246\344\270\2720\357\274\214\351\242\234\350\211\262\344\273\273\346\204\217 */\n"
"	background-color: rgb(85, 255, 255);\n"
"	border-style: none; /* \350\276\271\346\241\206\346\240\267\345\274\217\350\256\276\347\275\256\344\270\272none */\n"
"}"));
        horizontalLayout = new QHBoxLayout(widgetManage);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelLeft = new QLabel(widgetManage);
        labelLeft->setObjectName(QString::fromUtf8("labelLeft"));
        labelLeft->setMaximumSize(QSize(25, 16777215));
        labelLeft->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: transparent; /* \350\256\276\347\275\256\350\203\214\346\231\257\351\242\234\350\211\262\344\270\272\351\200\217\346\230\216 */\n"
"    border: none; /* \347\247\273\351\231\244\350\276\271\346\241\206 */\n"
"}"));
        labelLeft->setPixmap(QPixmap(QString::fromUtf8(":/Images/left.png")));
        labelLeft->setScaledContents(true);

        horizontalLayout->addWidget(labelLeft);

        btnHome = new QPushButton(widgetManage);
        btnHome->setObjectName(QString::fromUtf8("btnHome"));
        btnHome->setMaximumSize(QSize(134, 55));
        btnHome->setCheckable(true);

        horizontalLayout->addWidget(btnHome);

        btnSystem = new QPushButton(widgetManage);
        btnSystem->setObjectName(QString::fromUtf8("btnSystem"));
        btnSystem->setMaximumSize(QSize(134, 55));
        btnSystem->setCheckable(true);

        horizontalLayout->addWidget(btnSystem);

        btnDoctor = new QPushButton(widgetManage);
        btnDoctor->setObjectName(QString::fromUtf8("btnDoctor"));
        btnDoctor->setMaximumSize(QSize(135, 55));
        btnDoctor->setCheckable(true);

        horizontalLayout->addWidget(btnDoctor);

        btnOutpatientManage = new QPushButton(widgetManage);
        btnOutpatientManage->setObjectName(QString::fromUtf8("btnOutpatientManage"));
        btnOutpatientManage->setMaximumSize(QSize(134, 55));
        btnOutpatientManage->setCheckable(true);

        horizontalLayout->addWidget(btnOutpatientManage);

        btnToll = new QPushButton(widgetManage);
        btnToll->setObjectName(QString::fromUtf8("btnToll"));
        btnToll->setMaximumSize(QSize(135, 55));
        btnToll->setCheckable(true);

        horizontalLayout->addWidget(btnToll);

        btnInpatientManage = new QPushButton(widgetManage);
        btnInpatientManage->setObjectName(QString::fromUtf8("btnInpatientManage"));
        btnInpatientManage->setMaximumSize(QSize(135, 55));
        btnInpatientManage->setCheckable(true);

        horizontalLayout->addWidget(btnInpatientManage);

        btnPharmacyManage = new QPushButton(widgetManage);
        btnPharmacyManage->setObjectName(QString::fromUtf8("btnPharmacyManage"));
        btnPharmacyManage->setMaximumSize(QSize(135, 55));
        btnPharmacyManage->setCheckable(true);

        horizontalLayout->addWidget(btnPharmacyManage);

        btnDrugManage = new QPushButton(widgetManage);
        btnDrugManage->setObjectName(QString::fromUtf8("btnDrugManage"));
        btnDrugManage->setMaximumSize(QSize(135, 55));
        btnDrugManage->setCheckable(true);

        horizontalLayout->addWidget(btnDrugManage);

        btnFinancialManage = new QPushButton(widgetManage);
        btnFinancialManage->setObjectName(QString::fromUtf8("btnFinancialManage"));
        btnFinancialManage->setMaximumSize(QSize(134, 55));
        btnFinancialManage->setCheckable(true);

        horizontalLayout->addWidget(btnFinancialManage);

        labelRight = new QLabel(widgetManage);
        labelRight->setObjectName(QString::fromUtf8("labelRight"));
        labelRight->setMaximumSize(QSize(25, 16777215));
        labelRight->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: transparent; /* \350\256\276\347\275\256\350\203\214\346\231\257\351\242\234\350\211\262\344\270\272\351\200\217\346\230\216 */\n"
"    border: none; /* \347\247\273\351\231\244\350\276\271\346\241\206 */\n"
"}"));
        labelRight->setPixmap(QPixmap(QString::fromUtf8(":/Images/right.png")));
        labelRight->setScaledContents(false);

        horizontalLayout->addWidget(labelRight);


        verticalLayout->addWidget(widgetManage);

        mainWidget = new QWidget(UiMain);
        mainWidget->setObjectName(QString::fromUtf8("mainWidget"));
        mainWidget->setStyleSheet(QString::fromUtf8("\n"
"QWidget#mainWidget{\n"
"border-image: url(:/image/main.jpg);\n"
"}"));

        verticalLayout->addWidget(mainWidget);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 4);

        retranslateUi(UiMain);

        QMetaObject::connectSlotsByName(UiMain);
    } // setupUi

    void retranslateUi(QWidget *UiMain)
    {
        UiMain->setWindowTitle(QCoreApplication::translate("UiMain", "UiMain", nullptr));
#if QT_CONFIG(accessibility)
        label_7->setAccessibleDescription(QString());
#endif // QT_CONFIG(accessibility)
        label_7->setText(QString());
        label_8->setText(QCoreApplication::translate("UiMain", "\345\214\273\351\231\242\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        label_9->setText(QCoreApplication::translate("UiMain", "\345\275\223\345\211\215\347\224\250\346\210\267\357\274\232", nullptr));
        labelShowUser->setText(QCoreApplication::translate("UiMain", "TextLabel", nullptr));
        labelTime->setText(QCoreApplication::translate("UiMain", "TextLabel", nullptr));
        labelYearMonthDay->setText(QCoreApplication::translate("UiMain", "TextLabel", nullptr));
        btnCloseWidget->setText(QCoreApplication::translate("UiMain", "X", nullptr));
        btnMaxWidget->setText(QCoreApplication::translate("UiMain", "\345\217\243", nullptr));
        btnMinWidget->setText(QCoreApplication::translate("UiMain", "-", nullptr));
        btnQuit->setText(QCoreApplication::translate("UiMain", "quit", nullptr));
        labelLeft->setText(QString());
        btnHome->setText(QCoreApplication::translate("UiMain", "\344\270\273\351\241\265", nullptr));
        btnSystem->setText(QCoreApplication::translate("UiMain", "\347\263\273\347\273\237\347\256\241\347\220\206", nullptr));
        btnDoctor->setText(QCoreApplication::translate("UiMain", "\351\227\250\350\257\212\345\214\273\347\224\237", nullptr));
        btnOutpatientManage->setText(QCoreApplication::translate("UiMain", "\351\227\250\350\257\212\347\256\241\347\220\206", nullptr));
        btnToll->setText(QCoreApplication::translate("UiMain", "\351\227\250\350\257\212\346\224\266\350\264\271", nullptr));
        btnInpatientManage->setText(QCoreApplication::translate("UiMain", "\344\275\217\351\231\242\347\256\241\347\220\206", nullptr));
        btnPharmacyManage->setText(QCoreApplication::translate("UiMain", "\350\215\257\346\210\277\347\256\241\347\220\206", nullptr));
        btnDrugManage->setText(QCoreApplication::translate("UiMain", "\350\215\257\345\272\223\347\256\241\347\220\206", nullptr));
        btnFinancialManage->setText(QCoreApplication::translate("UiMain", "\350\264\242\345\212\241\347\256\241\347\220\206", nullptr));
        labelRight->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class UiMain: public Ui_UiMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UIMAIN_H

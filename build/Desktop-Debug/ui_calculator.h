/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_point;
    QPushButton *pushButton_Num_0;
    QPushButton *pushButton_Num_1;
    QPushButton *pushButton_dev;
    QPushButton *pushButton_sub;
    QPushButton *pushButton_add;
    QPushButton *pushButton_Num_3;
    QPushButton *pushButton_Num_7;
    QPushButton *pushButton_Num_4;
    QPushButton *pushButton_eq;
    QPushButton *pushButton_Num_9;
    QPushButton *pushButton_mult;
    QPushButton *pushButton_Num_5;
    QPushButton *pushButton_Num_6;
    QPushButton *pushButton_Num_2;
    QPushButton *pushButton_Num_8;
    QPushButton *pushButton_delete;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName(QString::fromUtf8("Calculator"));
        Calculator->setWindowModality(Qt::NonModal);
        Calculator->resize(329, 385);
        Calculator->setFocusPolicy(Qt::NoFocus);
        centralwidget = new QWidget(Calculator);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 100, 311, 261));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_point = new QPushButton(gridLayoutWidget);
        pushButton_point->setObjectName(QString::fromUtf8("pushButton_point"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_point->sizePolicy().hasHeightForWidth());
        pushButton_point->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_point, 3, 2, 1, 1);

        pushButton_Num_0 = new QPushButton(gridLayoutWidget);
        pushButton_Num_0->setObjectName(QString::fromUtf8("pushButton_Num_0"));
        sizePolicy.setHeightForWidth(pushButton_Num_0->sizePolicy().hasHeightForWidth());
        pushButton_Num_0->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_Num_0, 3, 0, 1, 1);

        pushButton_Num_1 = new QPushButton(gridLayoutWidget);
        pushButton_Num_1->setObjectName(QString::fromUtf8("pushButton_Num_1"));
        sizePolicy.setHeightForWidth(pushButton_Num_1->sizePolicy().hasHeightForWidth());
        pushButton_Num_1->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_Num_1, 2, 0, 1, 1);

        pushButton_dev = new QPushButton(gridLayoutWidget);
        pushButton_dev->setObjectName(QString::fromUtf8("pushButton_dev"));
        sizePolicy.setHeightForWidth(pushButton_dev->sizePolicy().hasHeightForWidth());
        pushButton_dev->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_dev, 0, 3, 1, 1);

        pushButton_sub = new QPushButton(gridLayoutWidget);
        pushButton_sub->setObjectName(QString::fromUtf8("pushButton_sub"));
        sizePolicy.setHeightForWidth(pushButton_sub->sizePolicy().hasHeightForWidth());
        pushButton_sub->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_sub, 2, 3, 1, 1);

        pushButton_add = new QPushButton(gridLayoutWidget);
        pushButton_add->setObjectName(QString::fromUtf8("pushButton_add"));
        sizePolicy.setHeightForWidth(pushButton_add->sizePolicy().hasHeightForWidth());
        pushButton_add->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_add, 3, 3, 1, 1);

        pushButton_Num_3 = new QPushButton(gridLayoutWidget);
        pushButton_Num_3->setObjectName(QString::fromUtf8("pushButton_Num_3"));
        sizePolicy.setHeightForWidth(pushButton_Num_3->sizePolicy().hasHeightForWidth());
        pushButton_Num_3->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_Num_3, 2, 2, 1, 1);

        pushButton_Num_7 = new QPushButton(gridLayoutWidget);
        pushButton_Num_7->setObjectName(QString::fromUtf8("pushButton_Num_7"));
        sizePolicy.setHeightForWidth(pushButton_Num_7->sizePolicy().hasHeightForWidth());
        pushButton_Num_7->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_Num_7, 0, 0, 1, 1);

        pushButton_Num_4 = new QPushButton(gridLayoutWidget);
        pushButton_Num_4->setObjectName(QString::fromUtf8("pushButton_Num_4"));
        sizePolicy.setHeightForWidth(pushButton_Num_4->sizePolicy().hasHeightForWidth());
        pushButton_Num_4->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_Num_4, 1, 0, 1, 1);

        pushButton_eq = new QPushButton(gridLayoutWidget);
        pushButton_eq->setObjectName(QString::fromUtf8("pushButton_eq"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_eq->sizePolicy().hasHeightForWidth());
        pushButton_eq->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pushButton_eq, 2, 4, 2, 1);

        pushButton_Num_9 = new QPushButton(gridLayoutWidget);
        pushButton_Num_9->setObjectName(QString::fromUtf8("pushButton_Num_9"));
        sizePolicy.setHeightForWidth(pushButton_Num_9->sizePolicy().hasHeightForWidth());
        pushButton_Num_9->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_Num_9, 0, 2, 1, 1);

        pushButton_mult = new QPushButton(gridLayoutWidget);
        pushButton_mult->setObjectName(QString::fromUtf8("pushButton_mult"));
        sizePolicy.setHeightForWidth(pushButton_mult->sizePolicy().hasHeightForWidth());
        pushButton_mult->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_mult, 1, 3, 1, 1);

        pushButton_Num_5 = new QPushButton(gridLayoutWidget);
        pushButton_Num_5->setObjectName(QString::fromUtf8("pushButton_Num_5"));
        sizePolicy.setHeightForWidth(pushButton_Num_5->sizePolicy().hasHeightForWidth());
        pushButton_Num_5->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_Num_5, 1, 1, 1, 1);

        pushButton_Num_6 = new QPushButton(gridLayoutWidget);
        pushButton_Num_6->setObjectName(QString::fromUtf8("pushButton_Num_6"));
        sizePolicy.setHeightForWidth(pushButton_Num_6->sizePolicy().hasHeightForWidth());
        pushButton_Num_6->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_Num_6, 1, 2, 1, 1);

        pushButton_Num_2 = new QPushButton(gridLayoutWidget);
        pushButton_Num_2->setObjectName(QString::fromUtf8("pushButton_Num_2"));
        sizePolicy.setHeightForWidth(pushButton_Num_2->sizePolicy().hasHeightForWidth());
        pushButton_Num_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_Num_2, 2, 1, 1, 1);

        pushButton_Num_8 = new QPushButton(gridLayoutWidget);
        pushButton_Num_8->setObjectName(QString::fromUtf8("pushButton_Num_8"));
        sizePolicy.setHeightForWidth(pushButton_Num_8->sizePolicy().hasHeightForWidth());
        pushButton_Num_8->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_Num_8, 0, 1, 1, 1);

        pushButton_delete = new QPushButton(gridLayoutWidget);
        pushButton_delete->setObjectName(QString::fromUtf8("pushButton_delete"));
        sizePolicy.setHeightForWidth(pushButton_delete->sizePolicy().hasHeightForWidth());
        pushButton_delete->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_delete, 3, 1, 1, 1);

        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 311, 81));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        textEdit = new QTextEdit(verticalLayoutWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy2);

        verticalLayout->addWidget(textEdit);

        Calculator->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Calculator);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Calculator->setStatusBar(statusbar);

        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QMainWindow *Calculator)
    {
        Calculator->setWindowTitle(QCoreApplication::translate("Calculator", "Calculator", nullptr));
        pushButton_point->setText(QCoreApplication::translate("Calculator", ".", nullptr));
        pushButton_Num_0->setText(QCoreApplication::translate("Calculator", "0", nullptr));
        pushButton_Num_1->setText(QCoreApplication::translate("Calculator", "1", nullptr));
        pushButton_dev->setText(QCoreApplication::translate("Calculator", "/", nullptr));
        pushButton_sub->setText(QCoreApplication::translate("Calculator", "-", nullptr));
        pushButton_add->setText(QCoreApplication::translate("Calculator", "+", nullptr));
        pushButton_Num_3->setText(QCoreApplication::translate("Calculator", "3", nullptr));
        pushButton_Num_7->setText(QCoreApplication::translate("Calculator", "7", nullptr));
        pushButton_Num_4->setText(QCoreApplication::translate("Calculator", "4", nullptr));
        pushButton_eq->setText(QCoreApplication::translate("Calculator", "=", nullptr));
        pushButton_Num_9->setText(QCoreApplication::translate("Calculator", "9", nullptr));
        pushButton_mult->setText(QCoreApplication::translate("Calculator", "*", nullptr));
        pushButton_Num_5->setText(QCoreApplication::translate("Calculator", "5", nullptr));
        pushButton_Num_6->setText(QCoreApplication::translate("Calculator", "6", nullptr));
        pushButton_Num_2->setText(QCoreApplication::translate("Calculator", "2", nullptr));
        pushButton_Num_8->setText(QCoreApplication::translate("Calculator", "8", nullptr));
        pushButton_delete->setText(QCoreApplication::translate("Calculator", "C", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H

/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *selectDirectoryB;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QDoubleSpinBox *dsb_Xmin;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QDoubleSpinBox *dsb_Ymin;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QDoubleSpinBox *dsb_Xmax;
    QLabel *label_3;
    QDoubleSpinBox *dsb_Ymax;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");

        verticalLayout->addLayout(horizontalLayout_3);

        selectDirectoryB = new QPushButton(centralwidget);
        selectDirectoryB->setObjectName("selectDirectoryB");

        verticalLayout->addWidget(selectDirectoryB);

        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 774, 438));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");

        horizontalLayout_5->addWidget(label_4);

        dsb_Xmin = new QDoubleSpinBox(centralwidget);
        dsb_Xmin->setObjectName("dsb_Xmin");
        dsb_Xmin->setMinimum(-100.000000000000000);
        dsb_Xmin->setValue(-4.000000000000000);

        horizontalLayout_5->addWidget(dsb_Xmin);


        horizontalLayout->addLayout(horizontalLayout_5);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");

        horizontalLayout_6->addWidget(label_5);

        dsb_Ymin = new QDoubleSpinBox(centralwidget);
        dsb_Ymin->setObjectName("dsb_Ymin");
        dsb_Ymin->setMinimum(-100.000000000000000);
        dsb_Ymin->setValue(-4.000000000000000);

        horizontalLayout_6->addWidget(dsb_Ymin);


        verticalLayout_5->addLayout(horizontalLayout_6);


        horizontalLayout->addLayout(verticalLayout_5);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        dsb_Xmax = new QDoubleSpinBox(centralwidget);
        dsb_Xmax->setObjectName("dsb_Xmax");
        dsb_Xmax->setMinimum(-100.000000000000000);
        dsb_Xmax->setValue(4.000000000000000);

        horizontalLayout->addWidget(dsb_Xmax);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");

        horizontalLayout->addWidget(label_3);

        dsb_Ymax = new QDoubleSpinBox(centralwidget);
        dsb_Ymax->setObjectName("dsb_Ymax");
        dsb_Ymax->setMinimum(-100.000000000000000);
        dsb_Ymax->setValue(4.000000000000000);

        horizontalLayout->addWidget(dsb_Ymax);


        verticalLayout->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\236\321\202\321\201\320\265\321\207\320\265\320\275\320\270\320\265", nullptr));
        selectDirectoryB->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \321\204\320\260\320\271\320\273", nullptr));
        label->setText(QString());
        label_4->setText(QCoreApplication::translate("MainWindow", "X_left", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Y_MIN", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "X_right", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Y_MAX", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_10;
    QLabel *label_9;
    QLabel *label_8;
    QLabel *label_5;
    QLabel *label_7;
    QLabel *label_6;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *le_q;
    QLineEdit *le_p;
    QLineEdit *le_n;
    QLineEdit *le_kpd;
    QLineEdit *le_Q;
    QLineEdit *le_M;
    QLineEdit *le_P;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_13;
    QLabel *label_12;
    QLabel *label_11;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *le_motor_q;
    QLineEdit *le_motor_n;
    QLineEdit *le_motor_M;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_19;
    QLabel *label_21;
    QLabel *label_20;
    QLabel *label_18;
    QLabel *label_17;
    QLabel *label_16;
    QLabel *label_15;
    QLabel *label_14;
    QHBoxLayout *horizontalLayout;
    QLineEdit *le_diametr_p;
    QLineEdit *le_length;
    QLineEdit *le_vol_p;
    QLineEdit *le_diametr_s;
    QLineEdit *le_vol_s;
    QLineEdit *le_work_time;
    QLineEdit *le_press;
    QLineEdit *le_empty_time;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(centralwidget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName("label_10");

        horizontalLayout_4->addWidget(label_10);

        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");

        horizontalLayout_4->addWidget(label_9);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");

        horizontalLayout_4->addWidget(label_8);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");

        horizontalLayout_4->addWidget(label_5);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");

        horizontalLayout_4->addWidget(label_7);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");

        horizontalLayout_4->addWidget(label_6);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");

        horizontalLayout_4->addWidget(label_4);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        le_q = new QLineEdit(centralwidget);
        le_q->setObjectName("le_q");

        horizontalLayout_3->addWidget(le_q);

        le_p = new QLineEdit(centralwidget);
        le_p->setObjectName("le_p");

        horizontalLayout_3->addWidget(le_p);

        le_n = new QLineEdit(centralwidget);
        le_n->setObjectName("le_n");

        horizontalLayout_3->addWidget(le_n);

        le_kpd = new QLineEdit(centralwidget);
        le_kpd->setObjectName("le_kpd");

        horizontalLayout_3->addWidget(le_kpd);

        le_Q = new QLineEdit(centralwidget);
        le_Q->setObjectName("le_Q");

        horizontalLayout_3->addWidget(le_Q);

        le_M = new QLineEdit(centralwidget);
        le_M->setObjectName("le_M");

        horizontalLayout_3->addWidget(le_M);

        le_P = new QLineEdit(centralwidget);
        le_P->setObjectName("le_P");

        horizontalLayout_3->addWidget(le_P);


        verticalLayout->addLayout(horizontalLayout_3);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName("label_13");

        horizontalLayout_5->addWidget(label_13);

        label_12 = new QLabel(centralwidget);
        label_12->setObjectName("label_12");

        horizontalLayout_5->addWidget(label_12);

        label_11 = new QLabel(centralwidget);
        label_11->setObjectName("label_11");

        horizontalLayout_5->addWidget(label_11);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        le_motor_q = new QLineEdit(centralwidget);
        le_motor_q->setObjectName("le_motor_q");

        horizontalLayout_2->addWidget(le_motor_q);

        le_motor_n = new QLineEdit(centralwidget);
        le_motor_n->setObjectName("le_motor_n");

        horizontalLayout_2->addWidget(le_motor_n);

        le_motor_M = new QLineEdit(centralwidget);
        le_motor_M->setObjectName("le_motor_M");

        horizontalLayout_2->addWidget(le_motor_M);


        verticalLayout->addLayout(horizontalLayout_2);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_19 = new QLabel(centralwidget);
        label_19->setObjectName("label_19");

        horizontalLayout_6->addWidget(label_19);

        label_21 = new QLabel(centralwidget);
        label_21->setObjectName("label_21");

        horizontalLayout_6->addWidget(label_21);

        label_20 = new QLabel(centralwidget);
        label_20->setObjectName("label_20");

        horizontalLayout_6->addWidget(label_20);

        label_18 = new QLabel(centralwidget);
        label_18->setObjectName("label_18");

        horizontalLayout_6->addWidget(label_18);

        label_17 = new QLabel(centralwidget);
        label_17->setObjectName("label_17");

        horizontalLayout_6->addWidget(label_17);

        label_16 = new QLabel(centralwidget);
        label_16->setObjectName("label_16");

        horizontalLayout_6->addWidget(label_16);

        label_15 = new QLabel(centralwidget);
        label_15->setObjectName("label_15");

        horizontalLayout_6->addWidget(label_15);

        label_14 = new QLabel(centralwidget);
        label_14->setObjectName("label_14");

        horizontalLayout_6->addWidget(label_14);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        le_diametr_p = new QLineEdit(centralwidget);
        le_diametr_p->setObjectName("le_diametr_p");

        horizontalLayout->addWidget(le_diametr_p);

        le_length = new QLineEdit(centralwidget);
        le_length->setObjectName("le_length");

        horizontalLayout->addWidget(le_length);

        le_vol_p = new QLineEdit(centralwidget);
        le_vol_p->setObjectName("le_vol_p");

        horizontalLayout->addWidget(le_vol_p);

        le_diametr_s = new QLineEdit(centralwidget);
        le_diametr_s->setObjectName("le_diametr_s");

        horizontalLayout->addWidget(le_diametr_s);

        le_vol_s = new QLineEdit(centralwidget);
        le_vol_s->setObjectName("le_vol_s");

        horizontalLayout->addWidget(le_vol_s);

        le_work_time = new QLineEdit(centralwidget);
        le_work_time->setObjectName("le_work_time");

        horizontalLayout->addWidget(le_work_time);

        le_press = new QLineEdit(centralwidget);
        le_press->setObjectName("le_press");

        horizontalLayout->addWidget(le_press);

        le_empty_time = new QLineEdit(centralwidget);
        le_empty_time->setObjectName("le_empty_time");

        horizontalLayout->addWidget(le_empty_time);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">\320\240\320\260\321\201\321\207\320\265\321\202 \320\275\320\260\321\201\320\276\321\201\320\260</p></body></html>", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">\320\236\320\261\321\212\320\265\320\274, \321\201\320\2743</p></body></html>", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">\320\224\320\260\320\262\320\273\320\265\320\275\320\270\320\265, \320\261\320\260\321\200</p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\320\247\320\260\321\201\321\202\320\276\321\202\320\260, \320\274\320\270\320\275-1", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">\320\232\320\237\320\224</p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">\320\240\320\260\321\201\321\207\320\265\321\202\320\275\320\260\321\217</p><p align=\"center\"> \320\277\321\200\320\276\320\270\320\267\320\262\320\276\320\264-\321\202\321\214,</p><p align=\"center\">\320\273/\320\274\320\270\320\275</p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">\320\232\321\200\321\203\321\202\321\217\321\211\320\270\320\271</p><p align=\"center\">\320\274\320\276\320\274\320\265\320\275\321\202</p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\234\320\276\321\211\320\275\320\276\321\201\321\202\321\214, \320\272\320\222\321\202", nullptr));
        le_q->setText(QString());
        le_p->setText(QString());
        le_n->setText(QString());
        le_kpd->setText(QString());
        le_Q->setText(QString());
        le_M->setText(QString());
        le_P->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">\320\240\320\260\321\201\321\207\320\265\321\202 \320\263\320\270\320\264\321\200\320\276\320\274\320\276\321\202\320\276\321\200\320\260</p></body></html>", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">\320\236\320\261\321\212\320\265\320\274, \321\201\320\2743</p></body></html>", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">\320\247\320\260\321\201\321\202\320\276\321\202\320\260, \320\274\320\270\320\275-1</p></body></html>", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">\320\234\320\276\320\274\320\265\320\275\321\202 \320\275\320\260 \320\262\320\260\320\273\321\203, \320\235 * \320\274</p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">\320\240\320\260\321\201\321\207\320\265\321\202 \320\263\320\270\320\264\321\200\320\276\321\206\320\270\320\273\320\270\320\275\320\264\321\200\320\260</p></body></html>", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">\320\224\320\270\320\260\320\274\320\265\321\202\321\200</p><p align=\"center\">\320\277\320\276\321\200\321\210\320\275\321\217,\320\274\320\274</p></body></html>", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">\320\224\320\273\320\270\320\275\320\260</p><p align=\"center\">\321\205\320\276\320\264\320\260, \320\274\320\274</p></body></html>", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">\320\236\320\261\321\212\320\265\320\274 \320\277\320\276\321\200\321\210\320\275\320\265\320\262\320\276\320\271</p><p align=\"center\">\321\207\320\260\321\201\321\202\320\270 \321\206\320\270\320\273\320\270\320\275\320\264\321\200\320\260, \320\273</p></body></html>", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">\320\224\320\270\320\260\320\274\320\265\321\202\321\200</p><p align=\"center\">\321\210\321\202\320\276\320\272\320\260, \320\274\320\274</p></body></html>", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">\320\236\320\261\321\212\320\265\320\274 \321\210\321\202\320\276\320\272\320\276\320\262\320\276\320\271</p><p align=\"center\">\321\207\320\260\321\201\321\202\320\270 \321\206\320\270\320\273\320\270\320\275\320\264\321\200\320\260, \320\273</p></body></html>", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">\320\222\321\200\320\265\320\274\321\217</p><p align=\"center\">\321\200\320\260\320\261\320\276\321\207\320\265\320\263\320\276 \321\205\320\276\320\264\320\260, \321\201\320\265\320\272</p></body></html>", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">\320\243\321\201\320\270\320\273\320\270\320\265</p><p align=\"center\">\321\210\321\202\320\276\320\272\320\260, \320\272\320\263</p></body></html>", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">\320\222\321\200\320\265\320\274\321\217 \321\205\320\276\320\273\320\276\321\201\321\202\320\276\320\263\320\276</p><p align=\"center\">\321\205\320\276\320\264\320\260, \321\201\320\265\320\272</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <mylistview.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_4;
    QLabel *lb_settings;
    QFrame *frame;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *le_Path;
    QToolButton *pb_SetPath;
    QLabel *label_2;
    QComboBox *cb_duration;
    QLabel *label_3;
    QPushButton *pb_4;
    QPushButton *pb_9;
    QPushButton *pb_16;
    QPushButton *pb_addCam;
    myListView *lv_listOfCam;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1085, 811);
        MainWindow->setMinimumSize(QSize(1085, 811));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        lb_settings = new QLabel(centralWidget);
        lb_settings->setObjectName(QStringLiteral("lb_settings"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lb_settings->sizePolicy().hasHeightForWidth());
        lb_settings->setSizePolicy(sizePolicy);

        verticalLayout_4->addWidget(lb_settings);

        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setMaximumSize(QSize(188, 719));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        le_Path = new QLineEdit(frame);
        le_Path->setObjectName(QStringLiteral("le_Path"));

        horizontalLayout_2->addWidget(le_Path);

        pb_SetPath = new QToolButton(frame);
        pb_SetPath->setObjectName(QStringLiteral("pb_SetPath"));

        horizontalLayout_2->addWidget(pb_SetPath);


        verticalLayout_2->addLayout(horizontalLayout_2);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(label_2);

        cb_duration = new QComboBox(frame);
        cb_duration->setObjectName(QStringLiteral("cb_duration"));

        verticalLayout_2->addWidget(cb_duration);


        verticalLayout_3->addLayout(verticalLayout_2);

        label_3 = new QLabel(frame);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(label_3);

        pb_4 = new QPushButton(frame);
        pb_4->setObjectName(QStringLiteral("pb_4"));

        verticalLayout_3->addWidget(pb_4);

        pb_9 = new QPushButton(frame);
        pb_9->setObjectName(QStringLiteral("pb_9"));

        verticalLayout_3->addWidget(pb_9);

        pb_16 = new QPushButton(frame);
        pb_16->setObjectName(QStringLiteral("pb_16"));

        verticalLayout_3->addWidget(pb_16);

        pb_addCam = new QPushButton(frame);
        pb_addCam->setObjectName(QStringLiteral("pb_addCam"));

        verticalLayout_3->addWidget(pb_addCam);

        lv_listOfCam = new myListView(frame);
        lv_listOfCam->setObjectName(QStringLiteral("lv_listOfCam"));
        lv_listOfCam->setDragEnabled(false);
        lv_listOfCam->setDragDropMode(QAbstractItemView::DragOnly);

        verticalLayout_3->addWidget(lv_listOfCam);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        verticalLayout_4->addWidget(frame);


        horizontalLayout->addLayout(verticalLayout_4);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);

        horizontalLayout->addLayout(gridLayout);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1085, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        lb_settings->setText(QApplication::translate("MainWindow", "\320\235\320\260\321\201\321\202\320\276\320\271\320\272\320\270 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\213", 0));
        label->setText(QApplication::translate("MainWindow", "\320\237\321\203\321\202\321\214 \321\201\320\276\321\205\321\200\320\260\320\275\320\265\320\275\320\270\321\217", 0));
        pb_SetPath->setText(QApplication::translate("MainWindow", "...", 0));
        label_2->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\276\320\264\320\276\320\273\320\266\320\270\321\202\320\265\320\273\321\214\320\275\320\276\321\201\321\202\321\214", 0));
        cb_duration->clear();
        cb_duration->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "2 \320\274\320\270\320\275\321\203\321\202\321\213", 0)
         << QApplication::translate("MainWindow", "4 \320\274\320\270\320\275\321\203\321\202\321\213", 0)
         << QApplication::translate("MainWindow", "8 \320\274\320\270\320\275\321\203\321\202", 0)
         << QApplication::translate("MainWindow", "1 \321\204\320\260\320\271\320\273", 0)
        );
        label_3->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\272\320\260\320\274\320\265\321\200", 0));
        pb_4->setText(QApplication::translate("MainWindow", "4", 0));
        pb_9->setText(QApplication::translate("MainWindow", "9", 0));
        pb_16->setText(QApplication::translate("MainWindow", "16", 0));
        pb_addCam->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\272\320\260\320\274\320\265\321\200\321\203", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

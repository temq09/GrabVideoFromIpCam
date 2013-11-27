/********************************************************************************
** Form generated from reading UI file 'videostreamview.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIDEOSTREAMVIEW_H
#define UI_VIDEOSTREAMVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VideoStreamView
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *lb_status;
    QLabel *label_2;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QLabel *lb_video;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pb_StartRecord;
    QPushButton *pb_StopRecord;
    QCheckBox *cb_detectMotion;
    QPushButton *pb_X;

    void setupUi(QWidget *VideoStreamView)
    {
        if (VideoStreamView->objectName().isEmpty())
            VideoStreamView->setObjectName(QStringLiteral("VideoStreamView"));
        VideoStreamView->resize(335, 267);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(VideoStreamView->sizePolicy().hasHeightForWidth());
        VideoStreamView->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(VideoStreamView);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBox = new QGroupBox(VideoStreamView);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(label);

        lb_status = new QLabel(groupBox);
        lb_status->setObjectName(QStringLiteral("lb_status"));
        sizePolicy1.setHeightForWidth(lb_status->sizePolicy().hasHeightForWidth());
        lb_status->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(lb_status);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(label_2);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(label_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_3->addLayout(horizontalLayout);

        lb_video = new QLabel(groupBox);
        lb_video->setObjectName(QStringLiteral("lb_video"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lb_video->sizePolicy().hasHeightForWidth());
        lb_video->setSizePolicy(sizePolicy2);
        lb_video->setFrameShape(QFrame::NoFrame);
        lb_video->setScaledContents(false);
        lb_video->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(lb_video);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pb_StartRecord = new QPushButton(groupBox);
        pb_StartRecord->setObjectName(QStringLiteral("pb_StartRecord"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pb_StartRecord->sizePolicy().hasHeightForWidth());
        pb_StartRecord->setSizePolicy(sizePolicy3);

        horizontalLayout_2->addWidget(pb_StartRecord);

        pb_StopRecord = new QPushButton(groupBox);
        pb_StopRecord->setObjectName(QStringLiteral("pb_StopRecord"));
        sizePolicy3.setHeightForWidth(pb_StopRecord->sizePolicy().hasHeightForWidth());
        pb_StopRecord->setSizePolicy(sizePolicy3);

        horizontalLayout_2->addWidget(pb_StopRecord);

        cb_detectMotion = new QCheckBox(groupBox);
        cb_detectMotion->setObjectName(QStringLiteral("cb_detectMotion"));

        horizontalLayout_2->addWidget(cb_detectMotion);

        pb_X = new QPushButton(groupBox);
        pb_X->setObjectName(QStringLiteral("pb_X"));

        horizontalLayout_2->addWidget(pb_X);


        verticalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout_2->addWidget(groupBox);


        retranslateUi(VideoStreamView);

        QMetaObject::connectSlotsByName(VideoStreamView);
    } // setupUi

    void retranslateUi(QWidget *VideoStreamView)
    {
        VideoStreamView->setWindowTitle(QApplication::translate("VideoStreamView", "Form", 0));
        groupBox->setTitle(QString());
        label->setText(QApplication::translate("VideoStreamView", "\320\241\321\202\320\260\321\202\321\203\321\201 - ", 0));
        lb_status->setText(QApplication::translate("VideoStreamView", "\320\275\320\265\321\202 \321\201\320\270\320\263\320\275\320\260\320\273\320\260", 0));
        label_2->setText(QApplication::translate("VideoStreamView", ",", 0));
        label_3->setText(QApplication::translate("VideoStreamView", "\320\267\320\260\320\277\320\270\321\201\321\214 \320\276\321\201\321\202\320\260\320\275\320\276\320\262\320\273\320\265\320\275\320\275\320\260", 0));
        lb_video->setText(QString());
        pb_StartRecord->setText(QApplication::translate("VideoStreamView", "\320\235\320\260\321\207\320\260\321\202\321\214 \320\267\320\260\320\277\320\270\321\201\321\214", 0));
        pb_StopRecord->setText(QApplication::translate("VideoStreamView", "\320\236\321\201\321\202\320\260\320\275\320\276\320\262\320\270\321\202\321\214 \320\267\320\260\320\277\320\270\321\201\321\214", 0));
        cb_detectMotion->setText(QApplication::translate("VideoStreamView", "\320\224\320\260\321\202\321\207\320\270\320\272 \320\264\320\262\320\270\320\266.", 0));
        pb_X->setText(QApplication::translate("VideoStreamView", "X", 0));
    } // retranslateUi

};

namespace Ui {
    class VideoStreamView: public Ui_VideoStreamView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIDEOSTREAMVIEW_H

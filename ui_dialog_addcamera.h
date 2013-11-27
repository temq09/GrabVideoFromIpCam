/********************************************************************************
** Form generated from reading UI file 'dialog_addcamera.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_ADDCAMERA_H
#define UI_DIALOG_ADDCAMERA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog_addCamera
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *le_ipadress;
    QLabel *label_2;
    QLineEdit *le_port;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_3;
    QLineEdit *le_login;
    QLabel *label_4;
    QLineEdit *le_password;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Dialog_addCamera)
    {
        if (Dialog_addCamera->objectName().isEmpty())
            Dialog_addCamera->setObjectName(QStringLiteral("Dialog_addCamera"));
        Dialog_addCamera->resize(392, 103);
        Dialog_addCamera->setMinimumSize(QSize(392, 103));
        Dialog_addCamera->setMaximumSize(QSize(392, 103));
        verticalLayout = new QVBoxLayout(Dialog_addCamera);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(Dialog_addCamera);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label);

        le_ipadress = new QLineEdit(Dialog_addCamera);
        le_ipadress->setObjectName(QStringLiteral("le_ipadress"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(le_ipadress->sizePolicy().hasHeightForWidth());
        le_ipadress->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(le_ipadress);

        label_2 = new QLabel(Dialog_addCamera);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setMinimumSize(QSize(37, 0));

        horizontalLayout->addWidget(label_2);

        le_port = new QLineEdit(Dialog_addCamera);
        le_port->setObjectName(QStringLiteral("le_port"));
        le_port->setMinimumSize(QSize(128, 0));

        horizontalLayout->addWidget(le_port);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_3 = new QLabel(Dialog_addCamera);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setMinimumSize(QSize(43, 0));

        horizontalLayout_6->addWidget(label_3);

        le_login = new QLineEdit(Dialog_addCamera);
        le_login->setObjectName(QStringLiteral("le_login"));
        sizePolicy1.setHeightForWidth(le_login->sizePolicy().hasHeightForWidth());
        le_login->setSizePolicy(sizePolicy1);
        le_login->setMinimumSize(QSize(137, 0));
        le_login->setMaximumSize(QSize(146, 16777215));

        horizontalLayout_6->addWidget(le_login);

        label_4 = new QLabel(Dialog_addCamera);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);

        horizontalLayout_6->addWidget(label_4);

        le_password = new QLineEdit(Dialog_addCamera);
        le_password->setObjectName(QStringLiteral("le_password"));

        horizontalLayout_6->addWidget(le_password);


        verticalLayout->addLayout(horizontalLayout_6);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(Dialog_addCamera);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(Dialog_addCamera);
        QObject::connect(buttonBox, SIGNAL(accepted()), Dialog_addCamera, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialog_addCamera, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialog_addCamera);
    } // setupUi

    void retranslateUi(QDialog *Dialog_addCamera)
    {
        Dialog_addCamera->setWindowTitle(QApplication::translate("Dialog_addCamera", "Dialog", 0));
        label->setText(QApplication::translate("Dialog_addCamera", "ip adress", 0));
        label_2->setText(QApplication::translate("Dialog_addCamera", "Port", 0));
        label_3->setText(QApplication::translate("Dialog_addCamera", "\320\233\320\276\320\263\320\270\320\275    ", 0));
        label_4->setText(QApplication::translate("Dialog_addCamera", "\320\237\320\260\321\200\320\276\320\273\321\214", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog_addCamera: public Ui_Dialog_addCamera {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_ADDCAMERA_H

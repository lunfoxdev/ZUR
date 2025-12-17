/********************************************************************************
** Form generated from reading UI file 'OBSAdvAudio.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OBSADVAUDIO_H
#define UI_OBSADVAUDIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OBSAdvAudio
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QCheckBox *activeOnly;
    QSpacerItem *horizontalSpacer;
    QPushButton *closeButton;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout;
    QGridLayout *mainLayout;
    QLabel *label_2;
    QLabel *label_7;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_6;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_9;
    QCheckBox *usePercent;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_8;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *OBSAdvAudio)
    {
        if (OBSAdvAudio->objectName().isEmpty())
            OBSAdvAudio->setObjectName("OBSAdvAudio");
        OBSAdvAudio->resize(1100, 340);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(OBSAdvAudio->sizePolicy().hasHeightForWidth());
        OBSAdvAudio->setSizePolicy(sizePolicy);
        OBSAdvAudio->setContextMenuPolicy(Qt::CustomContextMenu);
        OBSAdvAudio->setSizeGripEnabled(true);
        gridLayout = new QGridLayout(OBSAdvAudio);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setVerticalSpacing(11);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(7);
        horizontalLayout->setObjectName("horizontalLayout");
        activeOnly = new QCheckBox(OBSAdvAudio);
        activeOnly->setObjectName("activeOnly");
        activeOnly->setChecked(true);

        horizontalLayout->addWidget(activeOnly);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        closeButton = new QPushButton(OBSAdvAudio);
        closeButton->setObjectName("closeButton");

        horizontalLayout->addWidget(closeButton);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        scrollArea = new QScrollArea(OBSAdvAudio);
        scrollArea->setObjectName("scrollArea");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy1);
        scrollArea->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1157, 262));
        gridLayout_3 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(4, 4, 4, 4);
        mainLayout = new QGridLayout();
        mainLayout->setObjectName("mainLayout");
        mainLayout->setVerticalSpacing(4);
        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName("label_2");
        QFont font;
        font.setBold(true);
        label_2->setFont(font);

        mainLayout->addWidget(label_2, 0, 5, 1, 1);

        label_7 = new QLabel(scrollAreaWidgetContents);
        label_7->setObjectName("label_7");
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);
        label_7->setFont(font);

        mainLayout->addWidget(label_7, 0, 2, 1, 1);

        label_3 = new QLabel(scrollAreaWidgetContents);
        label_3->setObjectName("label_3");
        label_3->setFont(font);

        mainLayout->addWidget(label_3, 0, 4, 1, 1);

        label_5 = new QLabel(scrollAreaWidgetContents);
        label_5->setObjectName("label_5");
        label_5->setFont(font);

        mainLayout->addWidget(label_5, 0, 8, 1, 1);

        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName("label");
        label->setFont(font);

        mainLayout->addWidget(label, 0, 1, 1, 1);

        label_4 = new QLabel(scrollAreaWidgetContents);
        label_4->setObjectName("label_4");
        label_4->setFont(font);

        mainLayout->addWidget(label_4, 0, 6, 1, 1);

        label_6 = new QLabel(scrollAreaWidgetContents);
        label_6->setObjectName("label_6");
        label_6->setFont(font);

        mainLayout->addWidget(label_6, 0, 7, 1, 1);

        widget = new QWidget(scrollAreaWidgetContents);
        widget->setObjectName("widget");
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_9 = new QLabel(widget);
        label_9->setObjectName("label_9");
        label_9->setFont(font);

        horizontalLayout_2->addWidget(label_9);

        usePercent = new QCheckBox(widget);
        usePercent->setObjectName("usePercent");
        usePercent->setFont(font);

        horizontalLayout_2->addWidget(usePercent);

        horizontalSpacer_3 = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        gridLayout_2->addLayout(horizontalLayout_2, 0, 0, 1, 1);


        mainLayout->addWidget(widget, 0, 3, 1, 1);

        label_8 = new QLabel(scrollAreaWidgetContents);
        label_8->setObjectName("label_8");

        mainLayout->addWidget(label_8, 0, 0, 1, 1);


        verticalLayout->addLayout(mainLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        gridLayout_3->addLayout(verticalLayout, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 0, 0, 1, 1);


        retranslateUi(OBSAdvAudio);
        QObject::connect(closeButton, &QPushButton::clicked, OBSAdvAudio, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(OBSAdvAudio);
    } // setupUi

    void retranslateUi(QDialog *OBSAdvAudio)
    {
        OBSAdvAudio->setWindowTitle(QCoreApplication::translate("OBSAdvAudio", "Basic.AdvAudio", nullptr));
        activeOnly->setText(QCoreApplication::translate("OBSAdvAudio", "Basic.AdvAudio.ActiveOnly", nullptr));
        closeButton->setText(QCoreApplication::translate("OBSAdvAudio", "Close", nullptr));
        label_2->setText(QCoreApplication::translate("OBSAdvAudio", "Basic.AdvAudio.Balance", nullptr));
        label_7->setText(QCoreApplication::translate("OBSAdvAudio", "Basic.Stats.Status", nullptr));
        label_3->setText(QCoreApplication::translate("OBSAdvAudio", "Basic.AdvAudio.Mono", nullptr));
        label_5->setText(QCoreApplication::translate("OBSAdvAudio", "Basic.AdvAudio.AudioTracks", nullptr));
        label->setText(QCoreApplication::translate("OBSAdvAudio", "Basic.AdvAudio.Name", nullptr));
        label_4->setText(QCoreApplication::translate("OBSAdvAudio", "Basic.AdvAudio.SyncOffset", nullptr));
        label_6->setText(QCoreApplication::translate("OBSAdvAudio", "Basic.AdvAudio.Monitoring", nullptr));
        label_9->setText(QCoreApplication::translate("OBSAdvAudio", "Basic.AdvAudio.Volume", nullptr));
        usePercent->setText(QCoreApplication::translate("OBSAdvAudio", "%", nullptr));
        label_8->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class OBSAdvAudio: public Ui_OBSAdvAudio {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OBSADVAUDIO_H

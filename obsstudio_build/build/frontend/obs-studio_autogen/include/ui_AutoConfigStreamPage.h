/********************************************************************************
** Form generated from reading UI file 'AutoConfigStreamPage.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTOCONFIGSTREAMPAGE_H
#define UI_AUTOCONFIGSTREAMPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "components/UrlPushButton.hpp"

QT_BEGIN_NAMESPACE

class Ui_AutoConfigStreamPage
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *widget;
    QFormLayout *topLayout;
    QSpacerItem *horizontalSpacer_6;
    QLabel *serviceLabel;
    QFrame *serviceWidget;
    QHBoxLayout *serviceWidgetLayout;
    QComboBox *service;
    UrlPushButton *moreInfoButton;
    QSpacerItem *verticalSpacer;
    QStackedWidget *stackedWidget;
    QWidget *loginPage;
    QFormLayout *loginPageLayout;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *connectAccount;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *useStreamKey;
    QSpacerItem *horizontalSpacer_8;
    QWidget *streamkeyPage;
    QFormLayout *streamkeyPageLayout;
    QLabel *serverLabel;
    QStackedWidget *serverStackedWidget;
    QWidget *servicePage;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *server;
    QWidget *customPage;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *customServer;
    QLabel *streamKeyLabel;
    QFrame *streamKeyWidget;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *key;
    QPushButton *show;
    UrlPushButton *streamKeyButton;
    QPushButton *connectAccount2;
    QLabel *connectedAccountLabel;
    QHBoxLayout *horizontalLayout_6;
    QLabel *connectedAccountText;
    QPushButton *disconnectAccount;
    QSpacerItem *horizontalSpacer;
    QPushButton *useStreamKeyAdv;
    QLabel *bitrateLabel;
    QSpinBox *bitrate;
    QCheckBox *preferHardware;
    QCheckBox *doBandwidthTest;
    QCheckBox *useMultitrackVideo;
    QLabel *multitrackVideoInfo;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *region;
    QGridLayout *gridLayout;
    QCheckBox *regionAsia;
    QCheckBox *regionUS;
    QCheckBox *regionEU;
    QCheckBox *regionOther;

    void setupUi(QWidget *AutoConfigStreamPage)
    {
        if (AutoConfigStreamPage->objectName().isEmpty())
            AutoConfigStreamPage->setObjectName("AutoConfigStreamPage");
        AutoConfigStreamPage->resize(726, 407);
        AutoConfigStreamPage->setWindowTitle(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(AutoConfigStreamPage);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QFrame(AutoConfigStreamPage);
        widget->setObjectName("widget");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        topLayout = new QFormLayout(widget);
        topLayout->setObjectName("topLayout");
        topLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        topLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        topLayout->setContentsMargins(-1, -1, -1, 12);
        horizontalSpacer_6 = new QSpacerItem(87, 0, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        topLayout->setItem(0, QFormLayout::ItemRole::LabelRole, horizontalSpacer_6);

        serviceLabel = new QLabel(widget);
        serviceLabel->setObjectName("serviceLabel");

        topLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, serviceLabel);

        serviceWidget = new QFrame(widget);
        serviceWidget->setObjectName("serviceWidget");
        serviceWidgetLayout = new QHBoxLayout(serviceWidget);
        serviceWidgetLayout->setObjectName("serviceWidgetLayout");
        serviceWidgetLayout->setContentsMargins(0, 0, 0, 0);
        service = new QComboBox(serviceWidget);
        service->setObjectName("service");

        serviceWidgetLayout->addWidget(service);

        moreInfoButton = new UrlPushButton(serviceWidget);
        moreInfoButton->setObjectName("moreInfoButton");

        serviceWidgetLayout->addWidget(moreInfoButton);


        topLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, serviceWidget);

        verticalSpacer = new QSpacerItem(12, 12, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        topLayout->setItem(2, QFormLayout::ItemRole::FieldRole, verticalSpacer);


        verticalLayout->addWidget(widget);

        stackedWidget = new QStackedWidget(AutoConfigStreamPage);
        stackedWidget->setObjectName("stackedWidget");
        loginPage = new QWidget();
        loginPage->setObjectName("loginPage");
        loginPageLayout = new QFormLayout(loginPage);
        loginPageLayout->setObjectName("loginPageLayout");
        loginPageLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        loginPageLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        horizontalSpacer_3 = new QSpacerItem(87, 17, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        loginPageLayout->setItem(0, QFormLayout::ItemRole::LabelRole, horizontalSpacer_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        connectAccount = new QPushButton(loginPage);
        connectAccount->setObjectName("connectAccount");

        horizontalLayout->addWidget(connectAccount);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        loginPageLayout->setLayout(0, QFormLayout::ItemRole::FieldRole, horizontalLayout);

        horizontalSpacer_7 = new QSpacerItem(87, 17, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        loginPageLayout->setItem(1, QFormLayout::ItemRole::LabelRole, horizontalSpacer_7);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        useStreamKey = new QPushButton(loginPage);
        useStreamKey->setObjectName("useStreamKey");

        horizontalLayout_5->addWidget(useStreamKey);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_8);


        loginPageLayout->setLayout(1, QFormLayout::ItemRole::FieldRole, horizontalLayout_5);

        stackedWidget->addWidget(loginPage);
        streamkeyPage = new QWidget();
        streamkeyPage->setObjectName("streamkeyPage");
        streamkeyPageLayout = new QFormLayout(streamkeyPage);
        streamkeyPageLayout->setObjectName("streamkeyPageLayout");
        streamkeyPageLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        streamkeyPageLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        serverLabel = new QLabel(streamkeyPage);
        serverLabel->setObjectName("serverLabel");

        streamkeyPageLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, serverLabel);

        serverStackedWidget = new QStackedWidget(streamkeyPage);
        serverStackedWidget->setObjectName("serverStackedWidget");
        servicePage = new QWidget();
        servicePage->setObjectName("servicePage");
        horizontalLayout_2 = new QHBoxLayout(servicePage);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        server = new QComboBox(servicePage);
        server->setObjectName("server");

        horizontalLayout_2->addWidget(server);

        serverStackedWidget->addWidget(servicePage);
        customPage = new QWidget();
        customPage->setObjectName("customPage");
        horizontalLayout_3 = new QHBoxLayout(customPage);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        customServer = new QLineEdit(customPage);
        customServer->setObjectName("customServer");

        horizontalLayout_3->addWidget(customServer);

        serverStackedWidget->addWidget(customPage);

        streamkeyPageLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, serverStackedWidget);

        streamKeyLabel = new QLabel(streamkeyPage);
        streamKeyLabel->setObjectName("streamKeyLabel");
        streamKeyLabel->setOpenExternalLinks(true);

        streamkeyPageLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, streamKeyLabel);

        streamKeyWidget = new QFrame(streamkeyPage);
        streamKeyWidget->setObjectName("streamKeyWidget");
        horizontalLayout_4 = new QHBoxLayout(streamKeyWidget);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        key = new QLineEdit(streamKeyWidget);
        key->setObjectName("key");
        key->setInputMask(QString::fromUtf8(""));
        key->setText(QString::fromUtf8(""));
        key->setEchoMode(QLineEdit::Password);

        horizontalLayout_4->addWidget(key);

        show = new QPushButton(streamKeyWidget);
        show->setObjectName("show");

        horizontalLayout_4->addWidget(show);

        streamKeyButton = new UrlPushButton(streamKeyWidget);
        streamKeyButton->setObjectName("streamKeyButton");

        horizontalLayout_4->addWidget(streamKeyButton);


        streamkeyPageLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, streamKeyWidget);

        connectAccount2 = new QPushButton(streamkeyPage);
        connectAccount2->setObjectName("connectAccount2");
        connectAccount2->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        streamkeyPageLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, connectAccount2);

        connectedAccountLabel = new QLabel(streamkeyPage);
        connectedAccountLabel->setObjectName("connectedAccountLabel");

        streamkeyPageLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, connectedAccountLabel);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(7, -1, 7, -1);
        connectedAccountText = new QLabel(streamkeyPage);
        connectedAccountText->setObjectName("connectedAccountText");
        QFont font;
        font.setBold(true);
        connectedAccountText->setFont(font);

        horizontalLayout_6->addWidget(connectedAccountText);

        disconnectAccount = new QPushButton(streamkeyPage);
        disconnectAccount->setObjectName("disconnectAccount");

        horizontalLayout_6->addWidget(disconnectAccount);


        streamkeyPageLayout->setLayout(3, QFormLayout::ItemRole::FieldRole, horizontalLayout_6);

        horizontalSpacer = new QSpacerItem(40, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        streamkeyPageLayout->setItem(4, QFormLayout::ItemRole::LabelRole, horizontalSpacer);

        useStreamKeyAdv = new QPushButton(streamkeyPage);
        useStreamKeyAdv->setObjectName("useStreamKeyAdv");

        streamkeyPageLayout->setWidget(4, QFormLayout::ItemRole::FieldRole, useStreamKeyAdv);

        bitrateLabel = new QLabel(streamkeyPage);
        bitrateLabel->setObjectName("bitrateLabel");

        streamkeyPageLayout->setWidget(5, QFormLayout::ItemRole::LabelRole, bitrateLabel);

        bitrate = new QSpinBox(streamkeyPage);
        bitrate->setObjectName("bitrate");
        bitrate->setSuffix(QString::fromUtf8(""));
        bitrate->setMinimum(500);
        bitrate->setMaximum(51000);
        bitrate->setValue(2500);

        streamkeyPageLayout->setWidget(5, QFormLayout::ItemRole::FieldRole, bitrate);

        preferHardware = new QCheckBox(streamkeyPage);
        preferHardware->setObjectName("preferHardware");
        preferHardware->setChecked(true);

        streamkeyPageLayout->setWidget(6, QFormLayout::ItemRole::FieldRole, preferHardware);

        doBandwidthTest = new QCheckBox(streamkeyPage);
        doBandwidthTest->setObjectName("doBandwidthTest");
        doBandwidthTest->setChecked(true);

        streamkeyPageLayout->setWidget(7, QFormLayout::ItemRole::FieldRole, doBandwidthTest);

        useMultitrackVideo = new QCheckBox(streamkeyPage);
        useMultitrackVideo->setObjectName("useMultitrackVideo");
        useMultitrackVideo->setChecked(true);

        streamkeyPageLayout->setWidget(8, QFormLayout::ItemRole::FieldRole, useMultitrackVideo);

        multitrackVideoInfo = new QLabel(streamkeyPage);
        multitrackVideoInfo->setObjectName("multitrackVideoInfo");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(multitrackVideoInfo->sizePolicy().hasHeightForWidth());
        multitrackVideoInfo->setSizePolicy(sizePolicy1);
        multitrackVideoInfo->setTextFormat(Qt::RichText);
        multitrackVideoInfo->setWordWrap(true);
        multitrackVideoInfo->setOpenExternalLinks(true);

        streamkeyPageLayout->setWidget(9, QFormLayout::ItemRole::FieldRole, multitrackVideoInfo);

        verticalSpacer_2 = new QSpacerItem(6, 6, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        streamkeyPageLayout->setItem(10, QFormLayout::ItemRole::FieldRole, verticalSpacer_2);

        region = new QGroupBox(streamkeyPage);
        region->setObjectName("region");
        gridLayout = new QGridLayout(region);
        gridLayout->setObjectName("gridLayout");
        regionAsia = new QCheckBox(region);
        regionAsia->setObjectName("regionAsia");

        gridLayout->addWidget(regionAsia, 2, 0, 1, 1);

        regionUS = new QCheckBox(region);
        regionUS->setObjectName("regionUS");

        gridLayout->addWidget(regionUS, 0, 0, 1, 1);

        regionEU = new QCheckBox(region);
        regionEU->setObjectName("regionEU");

        gridLayout->addWidget(regionEU, 0, 1, 1, 1);

        regionOther = new QCheckBox(region);
        regionOther->setObjectName("regionOther");

        gridLayout->addWidget(regionOther, 2, 1, 1, 1);


        streamkeyPageLayout->setWidget(11, QFormLayout::ItemRole::FieldRole, region);

        stackedWidget->addWidget(streamkeyPage);

        verticalLayout->addWidget(stackedWidget);

#if QT_CONFIG(shortcut)
        serviceLabel->setBuddy(service);
        streamKeyLabel->setBuddy(key);
        bitrateLabel->setBuddy(bitrate);
#endif // QT_CONFIG(shortcut)

        retranslateUi(AutoConfigStreamPage);
        QObject::connect(connectAccount2, &QPushButton::clicked, connectAccount, qOverload<>(&QPushButton::click));

        stackedWidget->setCurrentIndex(1);
        serverStackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AutoConfigStreamPage);
    } // setupUi

    void retranslateUi(QWidget *AutoConfigStreamPage)
    {
        serviceLabel->setText(QCoreApplication::translate("AutoConfigStreamPage", "Basic.AutoConfig.StreamPage.Service", nullptr));
        moreInfoButton->setText(QCoreApplication::translate("AutoConfigStreamPage", "Basic.AutoConfig.StreamPage.MoreInfo", nullptr));
        connectAccount->setText(QCoreApplication::translate("AutoConfigStreamPage", "Basic.AutoConfig.StreamPage.ConnectAccount", nullptr));
        useStreamKey->setText(QCoreApplication::translate("AutoConfigStreamPage", "Basic.AutoConfig.StreamPage.UseStreamKey", nullptr));
        serverLabel->setText(QCoreApplication::translate("AutoConfigStreamPage", "Basic.AutoConfig.StreamPage.Server", nullptr));
        streamKeyLabel->setText(QCoreApplication::translate("AutoConfigStreamPage", "Basic.AutoConfig.StreamPage.StreamKey", nullptr));
        show->setText(QCoreApplication::translate("AutoConfigStreamPage", "Show", nullptr));
        streamKeyButton->setText(QCoreApplication::translate("AutoConfigStreamPage", "Basic.AutoConfig.StreamPage.GetStreamKey", nullptr));
        connectAccount2->setText(QCoreApplication::translate("AutoConfigStreamPage", "Basic.AutoConfig.StreamPage.ConnectAccount", nullptr));
        connectedAccountLabel->setText(QCoreApplication::translate("AutoConfigStreamPage", "Basic.AutoConfig.StreamPage.ConnectedAccount", nullptr));
        connectedAccountText->setText(QCoreApplication::translate("AutoConfigStreamPage", "Auth.LoadingChannel.Title", nullptr));
        disconnectAccount->setText(QCoreApplication::translate("AutoConfigStreamPage", "Basic.AutoConfig.StreamPage.DisconnectAccount", nullptr));
        useStreamKeyAdv->setText(QCoreApplication::translate("AutoConfigStreamPage", "Basic.AutoConfig.StreamPage.UseStreamKeyAdvanced", nullptr));
        bitrateLabel->setText(QCoreApplication::translate("AutoConfigStreamPage", "Basic.Settings.Output.VideoBitrate", nullptr));
#if QT_CONFIG(tooltip)
        preferHardware->setToolTip(QCoreApplication::translate("AutoConfigStreamPage", "Basic.AutoConfig.StreamPage.PreferHardwareEncoding.ToolTip", nullptr));
#endif // QT_CONFIG(tooltip)
        preferHardware->setText(QCoreApplication::translate("AutoConfigStreamPage", "Basic.AutoConfig.StreamPage.PreferHardwareEncoding", nullptr));
        doBandwidthTest->setText(QCoreApplication::translate("AutoConfigStreamPage", "Basic.AutoConfig.StreamPage.PerformBandwidthTest", nullptr));
        useMultitrackVideo->setText(QCoreApplication::translate("AutoConfigStreamPage", "Basic.AutoConfig.StreamPage.UseMultitrackVideo", nullptr));
        multitrackVideoInfo->setText(QCoreApplication::translate("AutoConfigStreamPage", "MultitrackVideo.Info", nullptr));
        region->setTitle(QCoreApplication::translate("AutoConfigStreamPage", "BandwidthTest.Region", nullptr));
        regionAsia->setText(QCoreApplication::translate("AutoConfigStreamPage", "BandwidthTest.Region.Asia", nullptr));
        regionUS->setText(QCoreApplication::translate("AutoConfigStreamPage", "BandwidthTest.Region.US", nullptr));
        regionEU->setText(QCoreApplication::translate("AutoConfigStreamPage", "BandwidthTest.Region.EU", nullptr));
        regionOther->setText(QCoreApplication::translate("AutoConfigStreamPage", "BandwidthTest.Region.Other", nullptr));
        (void)AutoConfigStreamPage;
    } // retranslateUi

};

namespace Ui {
    class AutoConfigStreamPage: public Ui_AutoConfigStreamPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTOCONFIGSTREAMPAGE_H

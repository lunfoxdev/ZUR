/********************************************************************************
** Form generated from reading UI file 'StatusBarWidget.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATUSBARWIDGET_H
#define UI_STATUSBARWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StatusBarWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QFrame *messageFrame;
    QHBoxLayout *horizontalLayout_9;
    QLabel *message;
    QFrame *delayFrame;
    QHBoxLayout *horizontalLayout_7;
    QLabel *delayInfo;
    QFrame *issuesFrame;
    QHBoxLayout *horizontalLayout_6;
    QLabel *droppedFrames;
    QFrame *networkFrame;
    QHBoxLayout *horizontalLayout_4;
    QLabel *statusIcon;
    QLabel *kbps;
    QFrame *streamFrame;
    QHBoxLayout *horizontalLayout_3;
    QLabel *streamIcon;
    QLabel *streamTime;
    QFrame *recordFrame;
    QHBoxLayout *horizontalLayout_2;
    QLabel *recordIcon;
    QLabel *recordTime;
    QFrame *cpuFrame;
    QHBoxLayout *horizontalLayout_5;
    QLabel *cpuUsage;
    QFrame *fpsFrame;
    QHBoxLayout *horizontalLayout_8;
    QLabel *fpsCurrent;

    void setupUi(QWidget *StatusBarWidget)
    {
        if (StatusBarWidget->objectName().isEmpty())
            StatusBarWidget->setObjectName("StatusBarWidget");
        StatusBarWidget->resize(714, 34);
        StatusBarWidget->setMinimumSize(QSize(0, 34));
        horizontalLayout = new QHBoxLayout(StatusBarWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 6, 0);
        messageFrame = new QFrame(StatusBarWidget);
        messageFrame->setObjectName("messageFrame");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(messageFrame->sizePolicy().hasHeightForWidth());
        messageFrame->setSizePolicy(sizePolicy);
        messageFrame->setStyleSheet(QString::fromUtf8("border: none;"));
        messageFrame->setFrameShape(QFrame::NoFrame);
        messageFrame->setFrameShadow(QFrame::Plain);
        horizontalLayout_9 = new QHBoxLayout(messageFrame);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        message = new QLabel(messageFrame);
        message->setObjectName("message");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Ignored, QSizePolicy::Policy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(message->sizePolicy().hasHeightForWidth());
        message->setSizePolicy(sizePolicy1);

        horizontalLayout_9->addWidget(message);


        horizontalLayout->addWidget(messageFrame);

        delayFrame = new QFrame(StatusBarWidget);
        delayFrame->setObjectName("delayFrame");
        delayFrame->setFrameShape(QFrame::NoFrame);
        delayFrame->setFrameShadow(QFrame::Plain);
        delayFrame->setLineWidth(0);
        horizontalLayout_7 = new QHBoxLayout(delayFrame);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        delayInfo = new QLabel(delayFrame);
        delayInfo->setObjectName("delayInfo");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(delayInfo->sizePolicy().hasHeightForWidth());
        delayInfo->setSizePolicy(sizePolicy2);

        horizontalLayout_7->addWidget(delayInfo);


        horizontalLayout->addWidget(delayFrame);

        issuesFrame = new QFrame(StatusBarWidget);
        issuesFrame->setObjectName("issuesFrame");
        issuesFrame->setFrameShape(QFrame::NoFrame);
        issuesFrame->setFrameShadow(QFrame::Plain);
        issuesFrame->setLineWidth(0);
        horizontalLayout_6 = new QHBoxLayout(issuesFrame);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        droppedFrames = new QLabel(issuesFrame);
        droppedFrames->setObjectName("droppedFrames");
        sizePolicy2.setHeightForWidth(droppedFrames->sizePolicy().hasHeightForWidth());
        droppedFrames->setSizePolicy(sizePolicy2);

        horizontalLayout_6->addWidget(droppedFrames);


        horizontalLayout->addWidget(issuesFrame);

        networkFrame = new QFrame(StatusBarWidget);
        networkFrame->setObjectName("networkFrame");
        networkFrame->setFrameShape(QFrame::NoFrame);
        networkFrame->setFrameShadow(QFrame::Plain);
        networkFrame->setLineWidth(0);
        horizontalLayout_4 = new QHBoxLayout(networkFrame);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        statusIcon = new QLabel(networkFrame);
        statusIcon->setObjectName("statusIcon");
        sizePolicy2.setHeightForWidth(statusIcon->sizePolicy().hasHeightForWidth());
        statusIcon->setSizePolicy(sizePolicy2);
        statusIcon->setPixmap(QPixmap(QString::fromUtf8(":/res/images/network-inactive.svg")));

        horizontalLayout_4->addWidget(statusIcon);

        kbps = new QLabel(networkFrame);
        kbps->setObjectName("kbps");
        kbps->setEnabled(true);
        sizePolicy2.setHeightForWidth(kbps->sizePolicy().hasHeightForWidth());
        kbps->setSizePolicy(sizePolicy2);
        kbps->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(kbps);


        horizontalLayout->addWidget(networkFrame);

        streamFrame = new QFrame(StatusBarWidget);
        streamFrame->setObjectName("streamFrame");
        streamFrame->setFrameShape(QFrame::NoFrame);
        streamFrame->setFrameShadow(QFrame::Plain);
        streamFrame->setLineWidth(0);
        horizontalLayout_3 = new QHBoxLayout(streamFrame);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        streamIcon = new QLabel(streamFrame);
        streamIcon->setObjectName("streamIcon");
        sizePolicy2.setHeightForWidth(streamIcon->sizePolicy().hasHeightForWidth());
        streamIcon->setSizePolicy(sizePolicy2);
        streamIcon->setPixmap(QPixmap(QString::fromUtf8(":/res/images/streaming-inactive.svg")));
        streamIcon->setScaledContents(false);

        horizontalLayout_3->addWidget(streamIcon);

        streamTime = new QLabel(streamFrame);
        streamTime->setObjectName("streamTime");
        streamTime->setEnabled(true);
        sizePolicy2.setHeightForWidth(streamTime->sizePolicy().hasHeightForWidth());
        streamTime->setSizePolicy(sizePolicy2);

        horizontalLayout_3->addWidget(streamTime);


        horizontalLayout->addWidget(streamFrame);

        recordFrame = new QFrame(StatusBarWidget);
        recordFrame->setObjectName("recordFrame");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(recordFrame->sizePolicy().hasHeightForWidth());
        recordFrame->setSizePolicy(sizePolicy3);
        recordFrame->setFrameShape(QFrame::NoFrame);
        recordFrame->setFrameShadow(QFrame::Plain);
        recordFrame->setLineWidth(0);
        horizontalLayout_2 = new QHBoxLayout(recordFrame);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        recordIcon = new QLabel(recordFrame);
        recordIcon->setObjectName("recordIcon");
        sizePolicy2.setHeightForWidth(recordIcon->sizePolicy().hasHeightForWidth());
        recordIcon->setSizePolicy(sizePolicy2);
        recordIcon->setPixmap(QPixmap(QString::fromUtf8(":/res/images/recording-inactive.svg")));
        recordIcon->setScaledContents(false);

        horizontalLayout_2->addWidget(recordIcon);

        recordTime = new QLabel(recordFrame);
        recordTime->setObjectName("recordTime");
        recordTime->setEnabled(true);
        sizePolicy2.setHeightForWidth(recordTime->sizePolicy().hasHeightForWidth());
        recordTime->setSizePolicy(sizePolicy2);

        horizontalLayout_2->addWidget(recordTime);


        horizontalLayout->addWidget(recordFrame);

        cpuFrame = new QFrame(StatusBarWidget);
        cpuFrame->setObjectName("cpuFrame");
        cpuFrame->setFrameShape(QFrame::NoFrame);
        cpuFrame->setFrameShadow(QFrame::Plain);
        cpuFrame->setLineWidth(0);
        horizontalLayout_5 = new QHBoxLayout(cpuFrame);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        cpuUsage = new QLabel(cpuFrame);
        cpuUsage->setObjectName("cpuUsage");
        sizePolicy2.setHeightForWidth(cpuUsage->sizePolicy().hasHeightForWidth());
        cpuUsage->setSizePolicy(sizePolicy2);
        cpuUsage->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(cpuUsage);


        horizontalLayout->addWidget(cpuFrame);

        fpsFrame = new QFrame(StatusBarWidget);
        fpsFrame->setObjectName("fpsFrame");
        fpsFrame->setFrameShape(QFrame::NoFrame);
        fpsFrame->setFrameShadow(QFrame::Plain);
        fpsFrame->setLineWidth(0);
        horizontalLayout_8 = new QHBoxLayout(fpsFrame);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        fpsCurrent = new QLabel(fpsFrame);
        fpsCurrent->setObjectName("fpsCurrent");
        sizePolicy2.setHeightForWidth(fpsCurrent->sizePolicy().hasHeightForWidth());
        fpsCurrent->setSizePolicy(sizePolicy2);
        fpsCurrent->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(fpsCurrent);


        horizontalLayout->addWidget(fpsFrame);


        retranslateUi(StatusBarWidget);

        QMetaObject::connectSlotsByName(StatusBarWidget);
    } // setupUi

    void retranslateUi(QWidget *StatusBarWidget)
    {
        StatusBarWidget->setWindowTitle(QCoreApplication::translate("StatusBarWidget", "Form", nullptr));
        message->setText(QCoreApplication::translate("StatusBarWidget", "Message", nullptr));
        delayInfo->setText(QCoreApplication::translate("StatusBarWidget", "DelayInfo", nullptr));
        droppedFrames->setText(QCoreApplication::translate("StatusBarWidget", "DroppedFrames", nullptr));
        statusIcon->setText(QString());
        kbps->setText(QCoreApplication::translate("StatusBarWidget", "0 kbps", nullptr));
        streamIcon->setText(QString());
        streamTime->setText(QCoreApplication::translate("StatusBarWidget", "00:00:00", nullptr));
        recordIcon->setText(QString());
        recordTime->setText(QCoreApplication::translate("StatusBarWidget", "00:00:00", nullptr));
        cpuUsage->setText(QCoreApplication::translate("StatusBarWidget", "CPU: 0.0%", nullptr));
        fpsCurrent->setText(QCoreApplication::translate("StatusBarWidget", "0.00 / 0.00 FPS", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StatusBarWidget: public Ui_StatusBarWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATUSBARWIDGET_H

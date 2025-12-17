/********************************************************************************
** Form generated from reading UI file 'OBSBasicControls.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OBSBASICCONTROLS_H
#define UI_OBSBASICCONTROLS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OBSBasicControls
{
public:
    QVBoxLayout *verticalLayout_9;
    QFrame *controlsFrame;
    QVBoxLayout *buttonsVLayout;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *streamButton;
    QPushButton *broadcastButton;
    QHBoxLayout *recordingLayout;
    QPushButton *recordButton;
    QPushButton *pauseRecordButton;
    QHBoxLayout *replayBufferLayout;
    QPushButton *replayBufferButton;
    QPushButton *saveReplayButton;
    QHBoxLayout *virtualCamLayout;
    QPushButton *virtualCamButton;
    QPushButton *virtualCamConfigButton;
    QPushButton *modeSwitch;
    QPushButton *settingsButton;
    QSpacerItem *expVSpacer;

    void setupUi(QWidget *OBSBasicControls)
    {
        if (OBSBasicControls->objectName().isEmpty())
            OBSBasicControls->setObjectName("OBSBasicControls");
        OBSBasicControls->resize(318, 213);
        verticalLayout_9 = new QVBoxLayout(OBSBasicControls);
        verticalLayout_9->setSpacing(0);
        verticalLayout_9->setObjectName("verticalLayout_9");
        verticalLayout_9->setContentsMargins(1, 0, 1, 1);
        controlsFrame = new QFrame(OBSBasicControls);
        controlsFrame->setObjectName("controlsFrame");
        buttonsVLayout = new QVBoxLayout(controlsFrame);
        buttonsVLayout->setSpacing(0);
        buttonsVLayout->setObjectName("buttonsVLayout");
        buttonsVLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        streamButton = new QPushButton(controlsFrame);
        streamButton->setObjectName("streamButton");
        streamButton->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Ignored, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(streamButton->sizePolicy().hasHeightForWidth());
        streamButton->setSizePolicy(sizePolicy);
        streamButton->setMinimumSize(QSize(150, 0));

        horizontalLayout_7->addWidget(streamButton);

        broadcastButton = new QPushButton(controlsFrame);
        broadcastButton->setObjectName("broadcastButton");
        broadcastButton->setEnabled(true);
        sizePolicy.setHeightForWidth(broadcastButton->sizePolicy().hasHeightForWidth());
        broadcastButton->setSizePolicy(sizePolicy);
        broadcastButton->setMinimumSize(QSize(150, 0));

        horizontalLayout_7->addWidget(broadcastButton);


        buttonsVLayout->addLayout(horizontalLayout_7);

        recordingLayout = new QHBoxLayout();
        recordingLayout->setSpacing(2);
        recordingLayout->setObjectName("recordingLayout");
        recordingLayout->setContentsMargins(0, 0, 0, 0);
        recordButton = new QPushButton(controlsFrame);
        recordButton->setObjectName("recordButton");
        recordButton->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(recordButton->sizePolicy().hasHeightForWidth());
        recordButton->setSizePolicy(sizePolicy1);
        recordButton->setMinimumSize(QSize(0, 0));

        recordingLayout->addWidget(recordButton);

        pauseRecordButton = new QPushButton(controlsFrame);
        pauseRecordButton->setObjectName("pauseRecordButton");
        pauseRecordButton->setEnabled(true);
        pauseRecordButton->setMinimumSize(QSize(0, 0));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/images/media-pause.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pauseRecordButton->setIcon(icon);

        recordingLayout->addWidget(pauseRecordButton);


        buttonsVLayout->addLayout(recordingLayout);

        replayBufferLayout = new QHBoxLayout();
        replayBufferLayout->setSpacing(2);
        replayBufferLayout->setObjectName("replayBufferLayout");
        replayBufferLayout->setContentsMargins(0, 0, 0, 0);
        replayBufferButton = new QPushButton(controlsFrame);
        replayBufferButton->setObjectName("replayBufferButton");
        replayBufferButton->setEnabled(true);
        sizePolicy1.setHeightForWidth(replayBufferButton->sizePolicy().hasHeightForWidth());
        replayBufferButton->setSizePolicy(sizePolicy1);
        replayBufferButton->setMinimumSize(QSize(0, 0));

        replayBufferLayout->addWidget(replayBufferButton);

        saveReplayButton = new QPushButton(controlsFrame);
        saveReplayButton->setObjectName("saveReplayButton");
        saveReplayButton->setEnabled(true);
        saveReplayButton->setMinimumSize(QSize(0, 0));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/res/images/save.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        saveReplayButton->setIcon(icon1);

        replayBufferLayout->addWidget(saveReplayButton);


        buttonsVLayout->addLayout(replayBufferLayout);

        virtualCamLayout = new QHBoxLayout();
        virtualCamLayout->setSpacing(2);
        virtualCamLayout->setObjectName("virtualCamLayout");
        virtualCamLayout->setContentsMargins(0, 0, 0, 0);
        virtualCamButton = new QPushButton(controlsFrame);
        virtualCamButton->setObjectName("virtualCamButton");
        virtualCamButton->setEnabled(true);
        sizePolicy1.setHeightForWidth(virtualCamButton->sizePolicy().hasHeightForWidth());
        virtualCamButton->setSizePolicy(sizePolicy1);
        virtualCamButton->setMinimumSize(QSize(0, 0));

        virtualCamLayout->addWidget(virtualCamButton);

        virtualCamConfigButton = new QPushButton(controlsFrame);
        virtualCamConfigButton->setObjectName("virtualCamConfigButton");
        virtualCamConfigButton->setEnabled(true);
        virtualCamConfigButton->setMinimumSize(QSize(0, 0));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/settings/images/settings/general.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        virtualCamConfigButton->setIcon(icon2);

        virtualCamLayout->addWidget(virtualCamConfigButton);


        buttonsVLayout->addLayout(virtualCamLayout);

        modeSwitch = new QPushButton(controlsFrame);
        modeSwitch->setObjectName("modeSwitch");
        sizePolicy.setHeightForWidth(modeSwitch->sizePolicy().hasHeightForWidth());
        modeSwitch->setSizePolicy(sizePolicy);
        modeSwitch->setMinimumSize(QSize(150, 0));

        buttonsVLayout->addWidget(modeSwitch);

        settingsButton = new QPushButton(controlsFrame);
        settingsButton->setObjectName("settingsButton");
        sizePolicy.setHeightForWidth(settingsButton->sizePolicy().hasHeightForWidth());
        settingsButton->setSizePolicy(sizePolicy);
        settingsButton->setMinimumSize(QSize(150, 0));

        buttonsVLayout->addWidget(settingsButton);

        expVSpacer = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        buttonsVLayout->addItem(expVSpacer);


        verticalLayout_9->addWidget(controlsFrame);


        retranslateUi(OBSBasicControls);

        QMetaObject::connectSlotsByName(OBSBasicControls);
    } // setupUi

    void retranslateUi(QWidget *OBSBasicControls)
    {
        streamButton->setText(QCoreApplication::translate("OBSBasicControls", "Basic.Main.StartStreaming", nullptr));
        broadcastButton->setText(QCoreApplication::translate("OBSBasicControls", "Basic.Main.StartBroadcast", nullptr));
        recordButton->setText(QCoreApplication::translate("OBSBasicControls", "Basic.Main.StartRecording", nullptr));
#if QT_CONFIG(tooltip)
        pauseRecordButton->setToolTip(QCoreApplication::translate("OBSBasicControls", "Basic.Main.PauseRecording", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        pauseRecordButton->setAccessibleName(QCoreApplication::translate("OBSBasicControls", "Basic.Main.PauseRecording", nullptr));
#endif // QT_CONFIG(accessibility)
        pauseRecordButton->setProperty("class", QVariant(QCoreApplication::translate("OBSBasicControls", "icon-media-pause", nullptr)));
        replayBufferButton->setText(QCoreApplication::translate("OBSBasicControls", "Basic.Main.StartReplayBuffer", nullptr));
#if QT_CONFIG(tooltip)
        saveReplayButton->setToolTip(QCoreApplication::translate("OBSBasicControls", "Basic.Main.SaveReplay", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        saveReplayButton->setAccessibleName(QCoreApplication::translate("OBSBasicControls", "Basic.Main.SaveReplay", nullptr));
#endif // QT_CONFIG(accessibility)
        saveReplayButton->setProperty("class", QVariant(QCoreApplication::translate("OBSBasicControls", "icon-save", nullptr)));
        virtualCamButton->setText(QCoreApplication::translate("OBSBasicControls", "Basic.Main.StartVirtualCam", nullptr));
#if QT_CONFIG(tooltip)
        virtualCamConfigButton->setToolTip(QCoreApplication::translate("OBSBasicControls", "Basic.Main.VirtualCamConfig", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        virtualCamConfigButton->setAccessibleName(QCoreApplication::translate("OBSBasicControls", "Basic.Main.VirtualCamConfig", nullptr));
#endif // QT_CONFIG(accessibility)
        virtualCamConfigButton->setProperty("class", QVariant(QCoreApplication::translate("OBSBasicControls", "icon-gear", nullptr)));
        modeSwitch->setText(QCoreApplication::translate("OBSBasicControls", "Basic.TogglePreviewProgramMode", nullptr));
        settingsButton->setText(QCoreApplication::translate("OBSBasicControls", "Settings", nullptr));
        (void)OBSBasicControls;
    } // retranslateUi

};

namespace Ui {
    class OBSBasicControls: public Ui_OBSBasicControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OBSBASICCONTROLS_H

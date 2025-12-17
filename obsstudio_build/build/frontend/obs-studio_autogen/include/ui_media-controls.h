/********************************************************************************
** Form generated from reading UI file 'media-controls.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEDIA_2D_CONTROLS_H
#define UI_MEDIA_2D_CONTROLS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "components/AbsoluteSlider.hpp"
#include "components/ClickableLabel.hpp"

QT_BEGIN_NAMESPACE

class Ui_MediaControls
{
public:
    QHBoxLayout *horizontalLayout;
    QPushButton *playPauseButton;
    QPushButton *previousButton;
    QPushButton *stopButton;
    QPushButton *nextButton;
    AbsoluteSlider *slider;
    QLabel *timerLabel;
    QLabel *label;
    ClickableLabel *durationLabel;
    QFrame *emptySpaceAgain;

    void setupUi(QWidget *MediaControls)
    {
        if (MediaControls->objectName().isEmpty())
            MediaControls->setObjectName("MediaControls");
        MediaControls->resize(888, 22);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MediaControls->sizePolicy().hasHeightForWidth());
        MediaControls->setSizePolicy(sizePolicy);
        MediaControls->setMinimumSize(QSize(0, 22));
        MediaControls->setWindowTitle(QString::fromUtf8("Form"));
        horizontalLayout = new QHBoxLayout(MediaControls);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        playPauseButton = new QPushButton(MediaControls);
        playPauseButton->setObjectName("playPauseButton");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(playPauseButton->sizePolicy().hasHeightForWidth());
        playPauseButton->setSizePolicy(sizePolicy1);
        playPauseButton->setMinimumSize(QSize(22, 22));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/images/media/media_restart.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        playPauseButton->setIcon(icon);
        playPauseButton->setIconSize(QSize(20, 20));
        playPauseButton->setFlat(true);

        horizontalLayout->addWidget(playPauseButton);

        previousButton = new QPushButton(MediaControls);
        previousButton->setObjectName("previousButton");
        sizePolicy1.setHeightForWidth(previousButton->sizePolicy().hasHeightForWidth());
        previousButton->setSizePolicy(sizePolicy1);
        previousButton->setMinimumSize(QSize(22, 22));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/res/images/media/media_previous.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        previousButton->setIcon(icon1);
        previousButton->setIconSize(QSize(20, 20));
        previousButton->setFlat(true);

        horizontalLayout->addWidget(previousButton);

        stopButton = new QPushButton(MediaControls);
        stopButton->setObjectName("stopButton");
        sizePolicy1.setHeightForWidth(stopButton->sizePolicy().hasHeightForWidth());
        stopButton->setSizePolicy(sizePolicy1);
        stopButton->setMinimumSize(QSize(22, 22));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/res/images/media/media_stop.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        stopButton->setIcon(icon2);
        stopButton->setIconSize(QSize(20, 20));
        stopButton->setFlat(true);

        horizontalLayout->addWidget(stopButton);

        nextButton = new QPushButton(MediaControls);
        nextButton->setObjectName("nextButton");
        sizePolicy1.setHeightForWidth(nextButton->sizePolicy().hasHeightForWidth());
        nextButton->setSizePolicy(sizePolicy1);
        nextButton->setMinimumSize(QSize(22, 22));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/res/images/media/media_next.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        nextButton->setIcon(icon3);
        nextButton->setIconSize(QSize(20, 20));
        nextButton->setFlat(true);

        horizontalLayout->addWidget(nextButton);

        slider = new AbsoluteSlider(MediaControls);
        slider->setObjectName("slider");
        slider->setMinimumSize(QSize(0, 22));
        slider->setMaximum(1024);
        slider->setTracking(false);
        slider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(slider);

        timerLabel = new QLabel(MediaControls);
        timerLabel->setObjectName("timerLabel");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(timerLabel->sizePolicy().hasHeightForWidth());
        timerLabel->setSizePolicy(sizePolicy2);
        timerLabel->setMinimumSize(QSize(0, 22));

        horizontalLayout->addWidget(timerLabel);

        label = new QLabel(MediaControls);
        label->setObjectName("label");
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);
        label->setMinimumSize(QSize(0, 22));

        horizontalLayout->addWidget(label);

        durationLabel = new ClickableLabel(MediaControls);
        durationLabel->setObjectName("durationLabel");
        sizePolicy2.setHeightForWidth(durationLabel->sizePolicy().hasHeightForWidth());
        durationLabel->setSizePolicy(sizePolicy2);
        durationLabel->setMinimumSize(QSize(0, 22));

        horizontalLayout->addWidget(durationLabel);

        emptySpaceAgain = new QFrame(MediaControls);
        emptySpaceAgain->setObjectName("emptySpaceAgain");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(emptySpaceAgain->sizePolicy().hasHeightForWidth());
        emptySpaceAgain->setSizePolicy(sizePolicy3);

        horizontalLayout->addWidget(emptySpaceAgain);


        retranslateUi(MediaControls);

        QMetaObject::connectSlotsByName(MediaControls);
    } // setupUi

    void retranslateUi(QWidget *MediaControls)
    {
#if QT_CONFIG(tooltip)
        playPauseButton->setToolTip(QCoreApplication::translate("MediaControls", "ContextBar.MediaControls.RestartMedia", nullptr));
#endif // QT_CONFIG(tooltip)
        playPauseButton->setText(QString());
        playPauseButton->setProperty("class", QVariant(QCoreApplication::translate("MediaControls", "icon-media-play", nullptr)));
#if QT_CONFIG(tooltip)
        previousButton->setToolTip(QCoreApplication::translate("MediaControls", "ContextBar.MediaControls.PlaylistPrevious", nullptr));
#endif // QT_CONFIG(tooltip)
        previousButton->setText(QString());
#if QT_CONFIG(shortcut)
        previousButton->setShortcut(QCoreApplication::translate("MediaControls", "P", nullptr));
#endif // QT_CONFIG(shortcut)
        previousButton->setProperty("class", QVariant(QCoreApplication::translate("MediaControls", "icon-media-prev", nullptr)));
#if QT_CONFIG(tooltip)
        stopButton->setToolTip(QCoreApplication::translate("MediaControls", "ContextBar.MediaControls.StopMedia", nullptr));
#endif // QT_CONFIG(tooltip)
        stopButton->setText(QString());
#if QT_CONFIG(shortcut)
        stopButton->setShortcut(QCoreApplication::translate("MediaControls", "S", nullptr));
#endif // QT_CONFIG(shortcut)
        stopButton->setProperty("class", QVariant(QCoreApplication::translate("MediaControls", "icon-media-stop", nullptr)));
#if QT_CONFIG(tooltip)
        nextButton->setToolTip(QCoreApplication::translate("MediaControls", "ContextBar.MediaControls.PlaylistNext", nullptr));
#endif // QT_CONFIG(tooltip)
        nextButton->setText(QString());
#if QT_CONFIG(shortcut)
        nextButton->setShortcut(QCoreApplication::translate("MediaControls", "N", nullptr));
#endif // QT_CONFIG(shortcut)
        nextButton->setProperty("class", QVariant(QCoreApplication::translate("MediaControls", "icon-media-next", nullptr)));
#if QT_CONFIG(accessibility)
        slider->setAccessibleName(QCoreApplication::translate("MediaControls", "ContextBar.MediaControls.BlindSeek", nullptr));
#endif // QT_CONFIG(accessibility)
        timerLabel->setText(QCoreApplication::translate("MediaControls", "--:--:--", nullptr));
        label->setText(QCoreApplication::translate("MediaControls", "/", nullptr));
        durationLabel->setText(QCoreApplication::translate("MediaControls", "--:--:--", nullptr));
        (void)MediaControls;
    } // retranslateUi

};

namespace Ui {
    class MediaControls: public Ui_MediaControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEDIA_2D_CONTROLS_H

/********************************************************************************
** Form generated from reading UI file 'PluginManagerWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLUGINMANAGERWINDOW_H
#define UI_PLUGINMANAGERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PluginManagerWindow
{
public:
    QVBoxLayout *verticalLayout_3;
    QFrame *dialogInner;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QFrame *sectionFrame;
    QVBoxLayout *verticalLayout;
    QListWidget *sectionList;
    QFrame *modulesFrame;
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QScrollArea *modulesListContainer;
    QWidget *modulesListContents;
    QVBoxLayout *verticalLayout_5;
    QFrame *modulesList;
    QVBoxLayout *verticalLayout_6;
    QSpacerItem *verticalSpacer;
    QLabel *manageRestartLabel;
    QFrame *footer;
    QHBoxLayout *horizontalLayout_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PluginManagerWindow)
    {
        if (PluginManagerWindow->objectName().isEmpty())
            PluginManagerWindow->setObjectName("PluginManagerWindow");
        PluginManagerWindow->resize(861, 400);
        PluginManagerWindow->setSizeGripEnabled(true);
        verticalLayout_3 = new QVBoxLayout(PluginManagerWindow);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        dialogInner = new QFrame(PluginManagerWindow);
        dialogInner->setObjectName("dialogInner");
        dialogInner->setFrameShape(QFrame::NoFrame);
        dialogInner->setFrameShadow(QFrame::Plain);
        dialogInner->setLineWidth(0);
        verticalLayout_2 = new QVBoxLayout(dialogInner);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(dialogInner);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Plain);
        frame->setLineWidth(0);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        sectionFrame = new QFrame(frame);
        sectionFrame->setObjectName("sectionFrame");
        sectionFrame->setFrameShape(QFrame::NoFrame);
        sectionFrame->setFrameShadow(QFrame::Plain);
        sectionFrame->setLineWidth(0);
        verticalLayout = new QVBoxLayout(sectionFrame);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        sectionList = new QListWidget(sectionFrame);
        sectionList->setObjectName("sectionList");
        sectionList->setFrameShape(QFrame::NoFrame);
        sectionList->setFrameShadow(QFrame::Plain);
        sectionList->setLineWidth(0);
        sectionList->setEditTriggers(QAbstractItemView::NoEditTriggers);
        sectionList->setProperty("showDropIndicator", QVariant(false));

        verticalLayout->addWidget(sectionList);


        horizontalLayout->addWidget(sectionFrame);

        modulesFrame = new QFrame(frame);
        modulesFrame->setObjectName("modulesFrame");
        modulesFrame->setFrameShape(QFrame::NoFrame);
        modulesFrame->setFrameShadow(QFrame::Plain);
        modulesFrame->setLineWidth(0);
        verticalLayout_4 = new QVBoxLayout(modulesFrame);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(modulesFrame);
        label->setObjectName("label");
        label->setFrameShape(QFrame::NoFrame);
        label->setLineWidth(0);

        verticalLayout_4->addWidget(label);

        modulesListContainer = new QScrollArea(modulesFrame);
        modulesListContainer->setObjectName("modulesListContainer");
        modulesListContainer->setFrameShape(QFrame::NoFrame);
        modulesListContainer->setFrameShadow(QFrame::Plain);
        modulesListContainer->setLineWidth(0);
        modulesListContainer->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        modulesListContainer->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        modulesListContainer->setWidgetResizable(false);
        modulesListContainer->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        modulesListContents = new QWidget();
        modulesListContents->setObjectName("modulesListContents");
        modulesListContents->setGeometry(QRect(0, 0, 689, 50));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(modulesListContents->sizePolicy().hasHeightForWidth());
        modulesListContents->setSizePolicy(sizePolicy);
        verticalLayout_5 = new QVBoxLayout(modulesListContents);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        modulesList = new QFrame(modulesListContents);
        modulesList->setObjectName("modulesList");
        modulesList->setMinimumSize(QSize(0, 20));
        modulesList->setFrameShape(QFrame::NoFrame);
        modulesList->setFrameShadow(QFrame::Plain);
        modulesList->setLineWidth(0);
        verticalLayout_6 = new QVBoxLayout(modulesList);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);

        verticalLayout_5->addWidget(modulesList);

        verticalSpacer = new QSpacerItem(10, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        modulesListContainer->setWidget(modulesListContents);

        verticalLayout_4->addWidget(modulesListContainer);

        manageRestartLabel = new QLabel(modulesFrame);
        manageRestartLabel->setObjectName("manageRestartLabel");
        manageRestartLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(manageRestartLabel);


        horizontalLayout->addWidget(modulesFrame);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 4);

        verticalLayout_2->addWidget(frame);

        footer = new QFrame(dialogInner);
        footer->setObjectName("footer");
        footer->setFrameShape(QFrame::NoFrame);
        footer->setFrameShadow(QFrame::Plain);
        footer->setLineWidth(0);
        horizontalLayout_2 = new QHBoxLayout(footer);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        buttonBox = new QDialogButtonBox(footer);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_2->addWidget(buttonBox);


        verticalLayout_2->addWidget(footer);


        verticalLayout_3->addWidget(dialogInner);


        retranslateUi(PluginManagerWindow);

        QMetaObject::connectSlotsByName(PluginManagerWindow);
    } // setupUi

    void retranslateUi(QDialog *PluginManagerWindow)
    {
        PluginManagerWindow->setWindowTitle(QCoreApplication::translate("PluginManagerWindow", "PluginManager", nullptr));
        dialogInner->setProperty("class", QVariant(QCoreApplication::translate("PluginManagerWindow", "dialog-container", nullptr)));
        sectionFrame->setProperty("class", QVariant(QCoreApplication::translate("PluginManagerWindow", "dialog-frame", nullptr)));
        modulesFrame->setProperty("class", QVariant(QCoreApplication::translate("PluginManagerWindow", "dialog-container dialog-frame", nullptr)));
        label->setText(QCoreApplication::translate("PluginManagerWindow", "PluginManager.Section.Manage.Title", nullptr));
        label->setProperty("class", QVariant(QCoreApplication::translate("PluginManagerWindow", "text-title", nullptr)));
        modulesListContainer->setProperty("class", QVariant(QString()));
        manageRestartLabel->setText(QCoreApplication::translate("PluginManagerWindow", "PluginManager.Restart", nullptr));
        manageRestartLabel->setProperty("class", QVariant(QCoreApplication::translate("PluginManagerWindow", "frame-notice", nullptr)));
        footer->setProperty("class", QVariant(QCoreApplication::translate("PluginManagerWindow", "dialog-container", nullptr)));
    } // retranslateUi

};

namespace Ui {
    class PluginManagerWindow: public Ui_PluginManagerWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLUGINMANAGERWINDOW_H

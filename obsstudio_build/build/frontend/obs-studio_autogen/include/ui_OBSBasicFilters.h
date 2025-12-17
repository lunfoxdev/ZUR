/********************************************************************************
** Form generated from reading UI file 'OBSBasicFilters.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OBSBASICFILTERS_H
#define UI_OBSBASICFILTERS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include "components/FocusList.hpp"
#include "widgets/OBSQTDisplay.hpp"

QT_BEGIN_NAMESPACE

class Ui_OBSBasicFilters
{
public:
    QAction *actionRemoveFilter;
    QAction *actionMoveUp;
    QAction *actionMoveDown;
    QAction *actionRenameFilter;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QFrame *asyncWidget;
    QVBoxLayout *verticalLayout_3;
    QLabel *asyncLabel;
    FocusList *asyncFilters;
    QFrame *widget;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *addAsyncFilter;
    QPushButton *removeAsyncFilter;
    QPushButton *moveAsyncFilterUp;
    QPushButton *moveAsyncFilterDown;
    QSpacerItem *asyncToolbarSpacer;
    QFrame *separatorLine;
    QFrame *effectWidget;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_2;
    FocusList *effectFilters;
    QFrame *widget_2;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *addEffectFilter;
    QPushButton *removeEffectFilter;
    QPushButton *moveEffectFilterUp;
    QPushButton *moveEffectFilterDown;
    QSpacerItem *effectToolbarSpacer;
    QFrame *rightContainerLayout;
    QVBoxLayout *verticalLayout_6;
    QSplitter *rightLayout;
    QFrame *previewFrame;
    QVBoxLayout *verticalLayout_7;
    OBSQTDisplay *preview;
    QFrame *propertiesFrame;
    QVBoxLayout *propertiesLayout;
    QHBoxLayout *horizontalLayout_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *OBSBasicFilters)
    {
        if (OBSBasicFilters->objectName().isEmpty())
            OBSBasicFilters->setObjectName("OBSBasicFilters");
        OBSBasicFilters->resize(861, 726);
        OBSBasicFilters->setSizeGripEnabled(true);
        actionRemoveFilter = new QAction(OBSBasicFilters);
        actionRemoveFilter->setObjectName("actionRemoveFilter");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/images/minus.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionRemoveFilter->setIcon(icon);
        actionRemoveFilter->setIconVisibleInMenu(false);
        actionMoveUp = new QAction(OBSBasicFilters);
        actionMoveUp->setObjectName("actionMoveUp");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/res/images/up.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionMoveUp->setIcon(icon1);
        actionMoveDown = new QAction(OBSBasicFilters);
        actionMoveDown->setObjectName("actionMoveDown");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/res/images/down.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionMoveDown->setIcon(icon2);
        actionRenameFilter = new QAction(OBSBasicFilters);
        actionRenameFilter->setObjectName("actionRenameFilter");
        verticalLayout = new QVBoxLayout(OBSBasicFilters);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        asyncWidget = new QFrame(OBSBasicFilters);
        asyncWidget->setObjectName("asyncWidget");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(asyncWidget->sizePolicy().hasHeightForWidth());
        asyncWidget->setSizePolicy(sizePolicy);
        asyncWidget->setMinimumSize(QSize(255, 0));
        verticalLayout_3 = new QVBoxLayout(asyncWidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        asyncLabel = new QLabel(asyncWidget);
        asyncLabel->setObjectName("asyncLabel");

        verticalLayout_3->addWidget(asyncLabel);

        asyncFilters = new FocusList(asyncWidget);
        asyncFilters->setObjectName("asyncFilters");
        sizePolicy.setHeightForWidth(asyncFilters->sizePolicy().hasHeightForWidth());
        asyncFilters->setSizePolicy(sizePolicy);
        asyncFilters->setContextMenuPolicy(Qt::CustomContextMenu);
        asyncFilters->setDragEnabled(true);
        asyncFilters->setDragDropMode(QAbstractItemView::InternalMove);
        asyncFilters->setDefaultDropAction(Qt::TargetMoveAction);
        asyncFilters->setSpacing(1);

        verticalLayout_3->addWidget(asyncFilters);

        widget = new QFrame(asyncWidget);
        widget->setObjectName("widget");
        horizontalLayout_4 = new QHBoxLayout(widget);
        horizontalLayout_4->setSpacing(4);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        addAsyncFilter = new QPushButton(widget);
        addAsyncFilter->setObjectName("addAsyncFilter");
        addAsyncFilter->setMaximumSize(QSize(22, 22));
        addAsyncFilter->setText(QString::fromUtf8(""));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/res/images/plus.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        addAsyncFilter->setIcon(icon3);
        addAsyncFilter->setAutoDefault(false);
        addAsyncFilter->setFlat(true);
        addAsyncFilter->setProperty("class", QVariant(QString::fromUtf8("btn-tool icon-plus")));

        horizontalLayout_4->addWidget(addAsyncFilter);

        removeAsyncFilter = new QPushButton(widget);
        removeAsyncFilter->setObjectName("removeAsyncFilter");
        removeAsyncFilter->setMaximumSize(QSize(22, 22));
        removeAsyncFilter->setText(QString::fromUtf8(""));
        removeAsyncFilter->setIcon(icon);
        removeAsyncFilter->setAutoDefault(false);
        removeAsyncFilter->setFlat(true);
        removeAsyncFilter->setProperty("class", QVariant(QString::fromUtf8("btn-tool icon-trash")));

        horizontalLayout_4->addWidget(removeAsyncFilter);

        moveAsyncFilterUp = new QPushButton(widget);
        moveAsyncFilterUp->setObjectName("moveAsyncFilterUp");
        moveAsyncFilterUp->setMaximumSize(QSize(22, 22));
        moveAsyncFilterUp->setText(QString::fromUtf8(""));
        moveAsyncFilterUp->setIcon(icon1);
        moveAsyncFilterUp->setAutoDefault(false);
        moveAsyncFilterUp->setFlat(true);
        moveAsyncFilterUp->setProperty("class", QVariant(QString::fromUtf8("btn-tool icon-up")));

        horizontalLayout_4->addWidget(moveAsyncFilterUp);

        moveAsyncFilterDown = new QPushButton(widget);
        moveAsyncFilterDown->setObjectName("moveAsyncFilterDown");
        moveAsyncFilterDown->setMaximumSize(QSize(22, 22));
        moveAsyncFilterDown->setText(QString::fromUtf8(""));
        moveAsyncFilterDown->setIcon(icon2);
        moveAsyncFilterDown->setAutoDefault(false);
        moveAsyncFilterDown->setFlat(true);
        moveAsyncFilterDown->setProperty("class", QVariant(QString::fromUtf8("btn-tool icon-down")));

        horizontalLayout_4->addWidget(moveAsyncFilterDown);

        asyncToolbarSpacer = new QSpacerItem(20, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(asyncToolbarSpacer);


        verticalLayout_3->addWidget(widget);


        verticalLayout_2->addWidget(asyncWidget);

        separatorLine = new QFrame(OBSBasicFilters);
        separatorLine->setObjectName("separatorLine");
        separatorLine->setFrameShape(QFrame::Shape::HLine);
        separatorLine->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_2->addWidget(separatorLine);

        effectWidget = new QFrame(OBSBasicFilters);
        effectWidget->setObjectName("effectWidget");
        sizePolicy.setHeightForWidth(effectWidget->sizePolicy().hasHeightForWidth());
        effectWidget->setSizePolicy(sizePolicy);
        effectWidget->setMinimumSize(QSize(255, 0));
        verticalLayout_4 = new QVBoxLayout(effectWidget);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(effectWidget);
        label_2->setObjectName("label_2");

        verticalLayout_4->addWidget(label_2);

        effectFilters = new FocusList(effectWidget);
        effectFilters->setObjectName("effectFilters");
        sizePolicy.setHeightForWidth(effectFilters->sizePolicy().hasHeightForWidth());
        effectFilters->setSizePolicy(sizePolicy);
        effectFilters->setContextMenuPolicy(Qt::CustomContextMenu);
        effectFilters->setDragEnabled(true);
        effectFilters->setDragDropMode(QAbstractItemView::InternalMove);
        effectFilters->setDefaultDropAction(Qt::TargetMoveAction);
        effectFilters->setSpacing(1);

        verticalLayout_4->addWidget(effectFilters);

        widget_2 = new QFrame(effectWidget);
        widget_2->setObjectName("widget_2");
        horizontalLayout_6 = new QHBoxLayout(widget_2);
        horizontalLayout_6->setSpacing(4);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        addEffectFilter = new QPushButton(widget_2);
        addEffectFilter->setObjectName("addEffectFilter");
        addEffectFilter->setMaximumSize(QSize(22, 22));
        addEffectFilter->setText(QString::fromUtf8(""));
        addEffectFilter->setIcon(icon3);
        addEffectFilter->setAutoDefault(false);
        addEffectFilter->setFlat(true);
        addEffectFilter->setProperty("class", QVariant(QString::fromUtf8("btn-tool icon-plus")));

        horizontalLayout_6->addWidget(addEffectFilter);

        removeEffectFilter = new QPushButton(widget_2);
        removeEffectFilter->setObjectName("removeEffectFilter");
        removeEffectFilter->setMaximumSize(QSize(22, 22));
        removeEffectFilter->setText(QString::fromUtf8(""));
        removeEffectFilter->setIcon(icon);
        removeEffectFilter->setAutoDefault(false);
        removeEffectFilter->setFlat(true);
        removeEffectFilter->setProperty("class", QVariant(QString::fromUtf8("btn-tool icon-trash")));

        horizontalLayout_6->addWidget(removeEffectFilter);

        moveEffectFilterUp = new QPushButton(widget_2);
        moveEffectFilterUp->setObjectName("moveEffectFilterUp");
        moveEffectFilterUp->setMaximumSize(QSize(22, 22));
        moveEffectFilterUp->setText(QString::fromUtf8(""));
        moveEffectFilterUp->setIcon(icon1);
        moveEffectFilterUp->setAutoDefault(false);
        moveEffectFilterUp->setFlat(true);
        moveEffectFilterUp->setProperty("class", QVariant(QString::fromUtf8("btn-tool icon-up")));

        horizontalLayout_6->addWidget(moveEffectFilterUp);

        moveEffectFilterDown = new QPushButton(widget_2);
        moveEffectFilterDown->setObjectName("moveEffectFilterDown");
        moveEffectFilterDown->setMaximumSize(QSize(22, 22));
        moveEffectFilterDown->setText(QString::fromUtf8(""));
        moveEffectFilterDown->setIcon(icon2);
        moveEffectFilterDown->setAutoDefault(false);
        moveEffectFilterDown->setFlat(true);
        moveEffectFilterDown->setProperty("class", QVariant(QString::fromUtf8("btn-tool icon-down")));

        horizontalLayout_6->addWidget(moveEffectFilterDown);

        effectToolbarSpacer = new QSpacerItem(20, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(effectToolbarSpacer);


        verticalLayout_4->addWidget(widget_2);


        verticalLayout_2->addWidget(effectWidget);


        horizontalLayout->addLayout(verticalLayout_2);

        rightContainerLayout = new QFrame(OBSBasicFilters);
        rightContainerLayout->setObjectName("rightContainerLayout");
        rightContainerLayout->setMinimumSize(QSize(200, 0));
        rightContainerLayout->setFrameShape(QFrame::NoFrame);
        rightContainerLayout->setFrameShadow(QFrame::Plain);
        verticalLayout_6 = new QVBoxLayout(rightContainerLayout);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        rightLayout = new QSplitter(rightContainerLayout);
        rightLayout->setObjectName("rightLayout");
        rightLayout->setMinimumSize(QSize(0, 400));
        rightLayout->setOrientation(Qt::Vertical);
        rightLayout->setChildrenCollapsible(false);
        previewFrame = new QFrame(rightLayout);
        previewFrame->setObjectName("previewFrame");
        sizePolicy.setHeightForWidth(previewFrame->sizePolicy().hasHeightForWidth());
        previewFrame->setSizePolicy(sizePolicy);
        previewFrame->setFrameShape(QFrame::NoFrame);
        previewFrame->setFrameShadow(QFrame::Plain);
        verticalLayout_7 = new QVBoxLayout(previewFrame);
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        preview = new OBSQTDisplay(previewFrame);
        preview->setObjectName("preview");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(preview->sizePolicy().hasHeightForWidth());
        preview->setSizePolicy(sizePolicy1);
        preview->setMinimumSize(QSize(0, 150));

        verticalLayout_7->addWidget(preview);

        rightLayout->addWidget(previewFrame);
        propertiesFrame = new QFrame(rightLayout);
        propertiesFrame->setObjectName("propertiesFrame");
        sizePolicy.setHeightForWidth(propertiesFrame->sizePolicy().hasHeightForWidth());
        propertiesFrame->setSizePolicy(sizePolicy);
        propertiesFrame->setFrameShape(QFrame::NoFrame);
        propertiesFrame->setFrameShadow(QFrame::Plain);
        propertiesLayout = new QVBoxLayout(propertiesFrame);
        propertiesLayout->setObjectName("propertiesLayout");
        propertiesLayout->setContentsMargins(0, 0, 0, 0);
        rightLayout->addWidget(propertiesFrame);

        verticalLayout_6->addWidget(rightLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(4);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setSizeConstraint(QLayout::SetMaximumSize);
        buttonBox = new QDialogButtonBox(rightContainerLayout);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::RestoreDefaults);

        horizontalLayout_2->addWidget(buttonBox);


        verticalLayout_6->addLayout(horizontalLayout_2);


        horizontalLayout->addWidget(rightContainerLayout);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 10);

        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(OBSBasicFilters);

        QMetaObject::connectSlotsByName(OBSBasicFilters);
    } // setupUi

    void retranslateUi(QDialog *OBSBasicFilters)
    {
        OBSBasicFilters->setWindowTitle(QCoreApplication::translate("OBSBasicFilters", "Basic.Filters", nullptr));
        actionRemoveFilter->setText(QCoreApplication::translate("OBSBasicFilters", "Remove", nullptr));
#if QT_CONFIG(shortcut)
        actionRemoveFilter->setShortcut(QCoreApplication::translate("OBSBasicFilters", "Del", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMoveUp->setText(QCoreApplication::translate("OBSBasicFilters", "Basic.MainMenu.Edit.Order.MoveUp", nullptr));
#if QT_CONFIG(shortcut)
        actionMoveUp->setShortcut(QCoreApplication::translate("OBSBasicFilters", "Ctrl+Up", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMoveDown->setText(QCoreApplication::translate("OBSBasicFilters", "Basic.MainMenu.Edit.Order.MoveDown", nullptr));
#if QT_CONFIG(shortcut)
        actionMoveDown->setShortcut(QCoreApplication::translate("OBSBasicFilters", "Ctrl+Down", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRenameFilter->setText(QCoreApplication::translate("OBSBasicFilters", "Rename", nullptr));
        asyncLabel->setText(QCoreApplication::translate("OBSBasicFilters", "Basic.Filters.AsyncFilters", nullptr));
#if QT_CONFIG(accessibility)
        addAsyncFilter->setAccessibleName(QCoreApplication::translate("OBSBasicFilters", "Add", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        removeAsyncFilter->setAccessibleName(QCoreApplication::translate("OBSBasicFilters", "Remove", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        moveAsyncFilterUp->setAccessibleName(QCoreApplication::translate("OBSBasicFilters", "MoveUp", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        moveAsyncFilterDown->setAccessibleName(QCoreApplication::translate("OBSBasicFilters", "MoveDown", nullptr));
#endif // QT_CONFIG(accessibility)
        label_2->setText(QCoreApplication::translate("OBSBasicFilters", "Basic.Filters.EffectFilters", nullptr));
#if QT_CONFIG(accessibility)
        addEffectFilter->setAccessibleName(QCoreApplication::translate("OBSBasicFilters", "Add", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        removeEffectFilter->setAccessibleName(QCoreApplication::translate("OBSBasicFilters", "Remove", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        moveEffectFilterUp->setAccessibleName(QCoreApplication::translate("OBSBasicFilters", "MoveUp", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        moveEffectFilterDown->setAccessibleName(QCoreApplication::translate("OBSBasicFilters", "MoveDown", nullptr));
#endif // QT_CONFIG(accessibility)
    } // retranslateUi

};

namespace Ui {
    class OBSBasicFilters: public Ui_OBSBasicFilters {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OBSBASICFILTERS_H

/********************************************************************************
** Form generated from reading UI file 'auto-scene-switcher.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTO_2D_SCENE_2D_SWITCHER_H
#define UI_AUTO_2D_SCENE_2D_SWITCHER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SceneSwitcher
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QComboBox *windows;
    QComboBox *scenes;
    QListWidget *switches;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *add;
    QPushButton *remove;
    QSpacerItem *horizontalSpacer;
    QFormLayout *formLayout;
    QLabel *label;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *noMatchDontSwitch;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *noMatchSwitch;
    QComboBox *noMatchSwitchScene;
    QLabel *label_2;
    QSpinBox *checkInterval;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *toggleStartButton;
    QSpacerItem *verticalSpacer;
    QLabel *pluginRunningText;
    QPushButton *close;

    void setupUi(QDialog *SceneSwitcher)
    {
        if (SceneSwitcher->objectName().isEmpty())
            SceneSwitcher->setObjectName("SceneSwitcher");
        SceneSwitcher->resize(743, 563);
        verticalLayout = new QVBoxLayout(SceneSwitcher);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        windows = new QComboBox(SceneSwitcher);
        windows->setObjectName("windows");
        windows->setEditable(true);
        windows->setMaxVisibleItems(20);

        horizontalLayout->addWidget(windows);

        scenes = new QComboBox(SceneSwitcher);
        scenes->setObjectName("scenes");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(scenes->sizePolicy().hasHeightForWidth());
        scenes->setSizePolicy(sizePolicy);
        scenes->setMinimumSize(QSize(100, 0));

        horizontalLayout->addWidget(scenes);


        verticalLayout->addLayout(horizontalLayout);

        switches = new QListWidget(SceneSwitcher);
        switches->setObjectName("switches");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(switches->sizePolicy().hasHeightForWidth());
        switches->setSizePolicy(sizePolicy1);
        switches->setSpacing(1);
        switches->setSortingEnabled(true);

        verticalLayout->addWidget(switches);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(4);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        add = new QPushButton(SceneSwitcher);
        add->setObjectName("add");
        add->setMaximumSize(QSize(16777215, 16777215));
        add->setFlat(true);
        add->setProperty("class", QVariant(QString::fromUtf8("icon-plus")));

        horizontalLayout_2->addWidget(add);

        remove = new QPushButton(SceneSwitcher);
        remove->setObjectName("remove");
        remove->setMaximumSize(QSize(16777215, 16777215));
        remove->setFlat(true);
        remove->setProperty("class", QVariant(QString::fromUtf8("icon-trash")));

        horizontalLayout_2->addWidget(remove);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);
        label = new QLabel(SceneSwitcher);
        label->setObjectName("label");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        noMatchDontSwitch = new QRadioButton(SceneSwitcher);
        noMatchDontSwitch->setObjectName("noMatchDontSwitch");
        noMatchDontSwitch->setChecked(true);

        verticalLayout_2->addWidget(noMatchDontSwitch);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        noMatchSwitch = new QRadioButton(SceneSwitcher);
        noMatchSwitch->setObjectName("noMatchSwitch");

        horizontalLayout_3->addWidget(noMatchSwitch);

        noMatchSwitchScene = new QComboBox(SceneSwitcher);
        noMatchSwitchScene->setObjectName("noMatchSwitchScene");
        noMatchSwitchScene->setEnabled(false);
        noMatchSwitchScene->setMinimumSize(QSize(100, 0));

        horizontalLayout_3->addWidget(noMatchSwitchScene);


        verticalLayout_2->addLayout(horizontalLayout_3);


        formLayout->setLayout(0, QFormLayout::ItemRole::FieldRole, verticalLayout_2);

        label_2 = new QLabel(SceneSwitcher);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_2);

        checkInterval = new QSpinBox(SceneSwitcher);
        checkInterval->setObjectName("checkInterval");
        checkInterval->setMinimumSize(QSize(100, 0));
        checkInterval->setSuffix(QString::fromUtf8("ms"));
        checkInterval->setMinimum(50);
        checkInterval->setMaximum(20000);
        checkInterval->setValue(300);

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, checkInterval);

        label_4 = new QLabel(SceneSwitcher);
        label_4->setObjectName("label_4");

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, label_4);

        horizontalSpacer_2 = new QSpacerItem(200, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        formLayout->setItem(3, QFormLayout::ItemRole::LabelRole, horizontalSpacer_2);

        toggleStartButton = new QPushButton(SceneSwitcher);
        toggleStartButton->setObjectName("toggleStartButton");

        formLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, toggleStartButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        formLayout->setItem(4, QFormLayout::ItemRole::FieldRole, verticalSpacer);

        pluginRunningText = new QLabel(SceneSwitcher);
        pluginRunningText->setObjectName("pluginRunningText");
        pluginRunningText->setText(QString::fromUtf8("Not Active"));

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, pluginRunningText);


        verticalLayout->addLayout(formLayout);

        close = new QPushButton(SceneSwitcher);
        close->setObjectName("close");

        verticalLayout->addWidget(close, 0, Qt::AlignRight);

#if QT_CONFIG(shortcut)
        label_2->setBuddy(checkInterval);
#endif // QT_CONFIG(shortcut)

        retranslateUi(SceneSwitcher);
        QObject::connect(noMatchSwitch, &QRadioButton::toggled, noMatchSwitchScene, &QComboBox::setEnabled);

        QMetaObject::connectSlotsByName(SceneSwitcher);
    } // setupUi

    void retranslateUi(QDialog *SceneSwitcher)
    {
        SceneSwitcher->setWindowTitle(QCoreApplication::translate("SceneSwitcher", "SceneSwitcher", nullptr));
        label->setText(QCoreApplication::translate("SceneSwitcher", "SceneSwitcher.OnNoMatch", nullptr));
        noMatchDontSwitch->setText(QCoreApplication::translate("SceneSwitcher", "SceneSwitcher.OnNoMatch.DontSwitch", nullptr));
        noMatchSwitch->setText(QCoreApplication::translate("SceneSwitcher", "SceneSwitcher.OnNoMatch.SwitchTo", nullptr));
        label_2->setText(QCoreApplication::translate("SceneSwitcher", "SceneSwitcher.CheckInterval", nullptr));
        label_4->setText(QCoreApplication::translate("SceneSwitcher", "SceneSwitcher.ActiveOrNotActive", nullptr));
        toggleStartButton->setText(QCoreApplication::translate("SceneSwitcher", "Start", nullptr));
        close->setText(QCoreApplication::translate("SceneSwitcher", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SceneSwitcher: public Ui_SceneSwitcher {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTO_2D_SCENE_2D_SWITCHER_H

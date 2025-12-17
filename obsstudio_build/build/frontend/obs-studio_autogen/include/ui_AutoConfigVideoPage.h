/********************************************************************************
** Form generated from reading UI file 'AutoConfigVideoPage.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTOCONFIGVIDEOPAGE_H
#define UI_AUTOCONFIGVIDEOPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AutoConfigVideoPage
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout_2;
    QLabel *label;
    QComboBox *canvasRes;
    QLabel *label_3;
    QComboBox *fps;
    QSpacerItem *horizontalSpacer;
    QLabel *warningLabel;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *AutoConfigVideoPage)
    {
        if (AutoConfigVideoPage->objectName().isEmpty())
            AutoConfigVideoPage->setObjectName("AutoConfigVideoPage");
        AutoConfigVideoPage->resize(470, 300);
        AutoConfigVideoPage->setWindowTitle(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(AutoConfigVideoPage);
        verticalLayout->setObjectName("verticalLayout");
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName("formLayout_2");
        formLayout_2->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        formLayout_2->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label = new QLabel(AutoConfigVideoPage);
        label->setObjectName("label");

        formLayout_2->setWidget(0, QFormLayout::ItemRole::LabelRole, label);

        canvasRes = new QComboBox(AutoConfigVideoPage);
        canvasRes->setObjectName("canvasRes");

        formLayout_2->setWidget(0, QFormLayout::ItemRole::FieldRole, canvasRes);

        label_3 = new QLabel(AutoConfigVideoPage);
        label_3->setObjectName("label_3");

        formLayout_2->setWidget(2, QFormLayout::ItemRole::LabelRole, label_3);

        fps = new QComboBox(AutoConfigVideoPage);
        fps->setObjectName("fps");

        formLayout_2->setWidget(2, QFormLayout::ItemRole::FieldRole, fps);

        horizontalSpacer = new QSpacerItem(87, 17, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        formLayout_2->setItem(3, QFormLayout::ItemRole::LabelRole, horizontalSpacer);


        verticalLayout->addLayout(formLayout_2);

        warningLabel = new QLabel(AutoConfigVideoPage);
        warningLabel->setObjectName("warningLabel");
        warningLabel->setWordWrap(true);
        warningLabel->setProperty("class", QVariant(QString::fromUtf8("text-warning")));

        verticalLayout->addWidget(warningLabel);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

#if QT_CONFIG(shortcut)
        label->setBuddy(canvasRes);
        label_3->setBuddy(fps);
#endif // QT_CONFIG(shortcut)

        retranslateUi(AutoConfigVideoPage);

        QMetaObject::connectSlotsByName(AutoConfigVideoPage);
    } // setupUi

    void retranslateUi(QWidget *AutoConfigVideoPage)
    {
        label->setText(QCoreApplication::translate("AutoConfigVideoPage", "Basic.Settings.Video.BaseResolution", nullptr));
        label_3->setText(QCoreApplication::translate("AutoConfigVideoPage", "Basic.Settings.Video.FPS", nullptr));
        warningLabel->setText(QCoreApplication::translate("AutoConfigVideoPage", "Basic.AutoConfig.VideoPage.CanvasExplanation", nullptr));
        (void)AutoConfigVideoPage;
    } // retranslateUi

};

namespace Ui {
    class AutoConfigVideoPage: public Ui_AutoConfigVideoPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTOCONFIGVIDEOPAGE_H

/********************************************************************************
** Form generated from reading UI file 'output.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OUTPUT_H
#define UI_OUTPUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Output
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QVBoxLayout *propertiesLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *outputButton;
    QLabel *label_2;
    QVBoxLayout *previewPropertiesLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *previewOutputButton;

    void setupUi(QDialog *Output)
    {
        if (Output->objectName().isEmpty())
            Output->setObjectName("Output");
        Output->resize(785, 484);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Output->sizePolicy().hasHeightForWidth());
        Output->setSizePolicy(sizePolicy);
        Output->setSizeGripEnabled(true);
        Output->setModal(false);
        verticalLayout = new QVBoxLayout(Output);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        label = new QLabel(Output);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        propertiesLayout = new QVBoxLayout();
        propertiesLayout->setObjectName("propertiesLayout");

        verticalLayout->addLayout(propertiesLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        outputButton = new QPushButton(Output);
        outputButton->setObjectName("outputButton");
        outputButton->setCheckable(true);

        horizontalLayout->addWidget(outputButton);


        verticalLayout->addLayout(horizontalLayout);

        label_2 = new QLabel(Output);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        previewPropertiesLayout = new QVBoxLayout();
        previewPropertiesLayout->setObjectName("previewPropertiesLayout");

        verticalLayout->addLayout(previewPropertiesLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        previewOutputButton = new QPushButton(Output);
        previewOutputButton->setObjectName("previewOutputButton");
        previewOutputButton->setCheckable(true);

        horizontalLayout_2->addWidget(previewOutputButton);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(Output);

        QMetaObject::connectSlotsByName(Output);
    } // setupUi

    void retranslateUi(QDialog *Output)
    {
        Output->setWindowTitle(QCoreApplication::translate("Output", "Decklink Output", nullptr));
        label->setText(QCoreApplication::translate("Output", "Output", nullptr));
        outputButton->setText(QCoreApplication::translate("Output", "Start", nullptr));
        label_2->setText(QCoreApplication::translate("Output", "Preview Output", nullptr));
        previewOutputButton->setText(QCoreApplication::translate("Output", "Start", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Output: public Ui_Output {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OUTPUT_H

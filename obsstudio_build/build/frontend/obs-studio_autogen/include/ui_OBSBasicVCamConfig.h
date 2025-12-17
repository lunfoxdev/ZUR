/********************************************************************************
** Form generated from reading UI file 'OBSBasicVCamConfig.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OBSBASICVCAMCONFIG_H
#define UI_OBSBASICVCAMCONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_OBSBasicVCamConfig
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *outputTypeLabel;
    QComboBox *outputType;
    QLabel *outputSelectionLabel;
    QComboBox *outputSelection;
    QLabel *warningLabel;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *OBSBasicVCamConfig)
    {
        if (OBSBasicVCamConfig->objectName().isEmpty())
            OBSBasicVCamConfig->setObjectName("OBSBasicVCamConfig");
        OBSBasicVCamConfig->resize(400, 170);
        verticalLayout = new QVBoxLayout(OBSBasicVCamConfig);
        verticalLayout->setObjectName("verticalLayout");
        outputTypeLabel = new QLabel(OBSBasicVCamConfig);
        outputTypeLabel->setObjectName("outputTypeLabel");

        verticalLayout->addWidget(outputTypeLabel);

        outputType = new QComboBox(OBSBasicVCamConfig);
        outputType->setObjectName("outputType");

        verticalLayout->addWidget(outputType);

        outputSelectionLabel = new QLabel(OBSBasicVCamConfig);
        outputSelectionLabel->setObjectName("outputSelectionLabel");

        verticalLayout->addWidget(outputSelectionLabel);

        outputSelection = new QComboBox(OBSBasicVCamConfig);
        outputSelection->setObjectName("outputSelection");

        verticalLayout->addWidget(outputSelection);

        warningLabel = new QLabel(OBSBasicVCamConfig);
        warningLabel->setObjectName("warningLabel");
        warningLabel->setVisible(false);
        warningLabel->setProperty("class", QVariant(QString::fromUtf8("text-warning")));

        verticalLayout->addWidget(warningLabel);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(OBSBasicVCamConfig);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(OBSBasicVCamConfig);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, OBSBasicVCamConfig, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, OBSBasicVCamConfig, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(OBSBasicVCamConfig);
    } // setupUi

    void retranslateUi(QDialog *OBSBasicVCamConfig)
    {
        OBSBasicVCamConfig->setWindowTitle(QCoreApplication::translate("OBSBasicVCamConfig", "Basic.VCam.VirtualCamera", nullptr));
        outputTypeLabel->setText(QCoreApplication::translate("OBSBasicVCamConfig", "Basic.VCam.OutputType", nullptr));
        outputSelectionLabel->setText(QCoreApplication::translate("OBSBasicVCamConfig", "Basic.VCam.OutputSelection", nullptr));
        warningLabel->setText(QCoreApplication::translate("OBSBasicVCamConfig", "Basic.VCam.RestartWarning", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OBSBasicVCamConfig: public Ui_OBSBasicVCamConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OBSBASICVCAMCONFIG_H

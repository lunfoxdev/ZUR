/********************************************************************************
** Form generated from reading UI file 'OBSBasicProperties.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OBSBASICPROPERTIES_H
#define UI_OBSBASICPROPERTIES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include "widgets/OBSQTDisplay.hpp"

QT_BEGIN_NAMESPACE

class Ui_OBSBasicProperties
{
public:
    QVBoxLayout *verticalLayout;
    QSplitter *windowSplitter;
    QFrame *previewFrame;
    QVBoxLayout *verticalLayout_7;
    OBSQTDisplay *preview;
    QFrame *propertiesFrame;
    QVBoxLayout *propertiesLayout;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *OBSBasicProperties)
    {
        if (OBSBasicProperties->objectName().isEmpty())
            OBSBasicProperties->setObjectName("OBSBasicProperties");
        OBSBasicProperties->resize(720, 580);
        OBSBasicProperties->setSizeGripEnabled(true);
        verticalLayout = new QVBoxLayout(OBSBasicProperties);
        verticalLayout->setObjectName("verticalLayout");
        windowSplitter = new QSplitter(OBSBasicProperties);
        windowSplitter->setObjectName("windowSplitter");
        windowSplitter->setMinimumSize(QSize(0, 400));
        windowSplitter->setOrientation(Qt::Vertical);
        windowSplitter->setChildrenCollapsible(false);
        previewFrame = new QFrame(windowSplitter);
        previewFrame->setObjectName("previewFrame");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
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
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(preview->sizePolicy().hasHeightForWidth());
        preview->setSizePolicy(sizePolicy1);
        preview->setMinimumSize(QSize(20, 150));

        verticalLayout_7->addWidget(preview);

        windowSplitter->addWidget(previewFrame);
        propertiesFrame = new QFrame(windowSplitter);
        propertiesFrame->setObjectName("propertiesFrame");
        sizePolicy.setHeightForWidth(propertiesFrame->sizePolicy().hasHeightForWidth());
        propertiesFrame->setSizePolicy(sizePolicy);
        propertiesFrame->setFrameShape(QFrame::NoFrame);
        propertiesFrame->setFrameShadow(QFrame::Plain);
        propertiesLayout = new QVBoxLayout(propertiesFrame);
        propertiesLayout->setObjectName("propertiesLayout");
        propertiesLayout->setContentsMargins(0, 0, 0, 0);
        windowSplitter->addWidget(propertiesFrame);

        verticalLayout->addWidget(windowSplitter);

        buttonBox = new QDialogButtonBox(OBSBasicProperties);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok|QDialogButtonBox::RestoreDefaults);

        verticalLayout->addWidget(buttonBox, 0, Qt::AlignBottom);


        retranslateUi(OBSBasicProperties);

        QMetaObject::connectSlotsByName(OBSBasicProperties);
    } // setupUi

    void retranslateUi(QDialog *OBSBasicProperties)
    {
        OBSBasicProperties->setWindowTitle(QCoreApplication::translate("OBSBasicProperties", "Properties", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OBSBasicProperties: public Ui_OBSBasicProperties {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OBSBASICPROPERTIES_H

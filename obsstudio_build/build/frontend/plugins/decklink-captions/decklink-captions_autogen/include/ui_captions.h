/********************************************************************************
** Form generated from reading UI file 'captions.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAPTIONS_H
#define UI_CAPTIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CaptionsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QComboBox *source;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *accept;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *CaptionsDialog)
    {
        if (CaptionsDialog->objectName().isEmpty())
            CaptionsDialog->setObjectName("CaptionsDialog");
        CaptionsDialog->resize(519, 104);
        verticalLayout = new QVBoxLayout(CaptionsDialog);
        verticalLayout->setObjectName("verticalLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label = new QLabel(CaptionsDialog);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label);

        source = new QComboBox(CaptionsDialog);
        source->setObjectName("source");
        source->setInsertPolicy(QComboBox::InsertAlphabetically);
        source->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, source);


        verticalLayout->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        accept = new QPushButton(CaptionsDialog);
        accept->setObjectName("accept");

        horizontalLayout->addWidget(accept);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

#if QT_CONFIG(shortcut)
        label->setBuddy(source);
#endif // QT_CONFIG(shortcut)

        retranslateUi(CaptionsDialog);
        QObject::connect(accept, &QPushButton::clicked, CaptionsDialog, qOverload<>(&QDialog::accept));

        QMetaObject::connectSlotsByName(CaptionsDialog);
    } // setupUi

    void retranslateUi(QDialog *CaptionsDialog)
    {
        CaptionsDialog->setWindowTitle(QCoreApplication::translate("CaptionsDialog", "Captions", nullptr));
        label->setText(QCoreApplication::translate("CaptionsDialog", "Captions.Source", nullptr));
        accept->setText(QCoreApplication::translate("CaptionsDialog", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CaptionsDialog: public Ui_CaptionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAPTIONS_H

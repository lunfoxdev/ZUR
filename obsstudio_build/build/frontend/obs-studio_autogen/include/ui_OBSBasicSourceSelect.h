/********************************************************************************
** Form generated from reading UI file 'OBSBasicSourceSelect.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OBSBASICSOURCESELECT_H
#define UI_OBSBASICSOURCESELECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_OBSBasicSourceSelect
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *createNew;
    QLineEdit *sourceName;
    QRadioButton *selectExisting;
    QListWidget *sourceList;
    QCheckBox *sourceVisible;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *OBSBasicSourceSelect)
    {
        if (OBSBasicSourceSelect->objectName().isEmpty())
            OBSBasicSourceSelect->setObjectName("OBSBasicSourceSelect");
        OBSBasicSourceSelect->setWindowModality(Qt::WindowModal);
        OBSBasicSourceSelect->resize(352, 314);
        verticalLayout = new QVBoxLayout(OBSBasicSourceSelect);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        createNew = new QRadioButton(OBSBasicSourceSelect);
        createNew->setObjectName("createNew");
        createNew->setChecked(true);

        verticalLayout_2->addWidget(createNew);

        sourceName = new QLineEdit(OBSBasicSourceSelect);
        sourceName->setObjectName("sourceName");

        verticalLayout_2->addWidget(sourceName);

        selectExisting = new QRadioButton(OBSBasicSourceSelect);
        selectExisting->setObjectName("selectExisting");

        verticalLayout_2->addWidget(selectExisting);

        sourceList = new QListWidget(OBSBasicSourceSelect);
        sourceList->setObjectName("sourceList");
        sourceList->setEnabled(false);
        sourceList->setSortingEnabled(true);

        verticalLayout_2->addWidget(sourceList);

        sourceVisible = new QCheckBox(OBSBasicSourceSelect);
        sourceVisible->setObjectName("sourceVisible");
        sourceVisible->setChecked(true);

        verticalLayout_2->addWidget(sourceVisible);


        verticalLayout->addLayout(verticalLayout_2);

        buttonBox = new QDialogButtonBox(OBSBasicSourceSelect);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(OBSBasicSourceSelect);
        QObject::connect(createNew, &QRadioButton::toggled, sourceName, &QLineEdit::setEnabled);
        QObject::connect(selectExisting, &QRadioButton::toggled, sourceList, &QListWidget::setEnabled);

        QMetaObject::connectSlotsByName(OBSBasicSourceSelect);
    } // setupUi

    void retranslateUi(QDialog *OBSBasicSourceSelect)
    {
        OBSBasicSourceSelect->setWindowTitle(QCoreApplication::translate("OBSBasicSourceSelect", "Basic.SourceSelect", nullptr));
        createNew->setText(QCoreApplication::translate("OBSBasicSourceSelect", "Basic.SourceSelect.CreateNew", nullptr));
        selectExisting->setText(QCoreApplication::translate("OBSBasicSourceSelect", "Basic.SourceSelect.AddExisting", nullptr));
        sourceVisible->setText(QCoreApplication::translate("OBSBasicSourceSelect", "Basic.SourceSelect.AddVisible", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OBSBasicSourceSelect: public Ui_OBSBasicSourceSelect {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OBSBASICSOURCESELECT_H

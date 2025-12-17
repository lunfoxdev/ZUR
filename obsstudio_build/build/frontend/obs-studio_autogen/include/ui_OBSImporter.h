/********************************************************************************
** Form generated from reading UI file 'OBSImporter.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OBSIMPORTER_H
#define UI_OBSIMPORTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_OBSImporter
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *importerSelectFiles;
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QTableView *tableView;

    void setupUi(QDialog *OBSImporter)
    {
        if (OBSImporter->objectName().isEmpty())
            OBSImporter->setObjectName("OBSImporter");
        OBSImporter->resize(850, 400);
        OBSImporter->setSizeGripEnabled(true);
        gridLayout = new QGridLayout(OBSImporter);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        importerSelectFiles = new QPushButton(OBSImporter);
        importerSelectFiles->setObjectName("importerSelectFiles");

        horizontalLayout_4->addWidget(importerSelectFiles);

        buttonBox = new QDialogButtonBox(OBSImporter);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_4->addWidget(buttonBox);


        gridLayout->addLayout(horizontalLayout_4, 2, 0, 1, 1);

        label = new QLabel(OBSImporter);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        tableView = new QTableView(OBSImporter);
        tableView->setObjectName("tableView");
        tableView->setSelectionMode(QAbstractItemView::NoSelection);
        tableView->horizontalHeader()->setMinimumSectionSize(23);
        tableView->horizontalHeader()->setDefaultSectionSize(23);
        tableView->verticalHeader()->setVisible(false);
        tableView->verticalHeader()->setDefaultSectionSize(24);

        gridLayout->addWidget(tableView, 1, 0, 1, 1);


        retranslateUi(OBSImporter);

        QMetaObject::connectSlotsByName(OBSImporter);
    } // setupUi

    void retranslateUi(QDialog *OBSImporter)
    {
        OBSImporter->setWindowTitle(QCoreApplication::translate("OBSImporter", "Importer", nullptr));
        importerSelectFiles->setText(QCoreApplication::translate("OBSImporter", "Importer.SelectFile", nullptr));
        label->setText(QCoreApplication::translate("OBSImporter", "Importer.HelpText", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OBSImporter: public Ui_OBSImporter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OBSIMPORTER_H

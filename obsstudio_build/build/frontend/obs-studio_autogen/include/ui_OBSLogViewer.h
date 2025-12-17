/********************************************************************************
** Form generated from reading UI file 'OBSLogViewer.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OBSLOGVIEWER_H
#define UI_OBSLOGVIEWER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "plain-text-edit.hpp"

QT_BEGIN_NAMESPACE

class Ui_OBSLogViewer
{
public:
    QVBoxLayout *verticalLayout;
    OBSPlainTextEdit *textArea;
    QHBoxLayout *buttonLayout;
    QCheckBox *showStartup;
    QSpacerItem *horizontalSpacer;
    QPushButton *openButton;
    QPushButton *clearButton;
    QPushButton *closeButton;

    void setupUi(QDialog *OBSLogViewer)
    {
        if (OBSLogViewer->objectName().isEmpty())
            OBSLogViewer->setObjectName("OBSLogViewer");
        OBSLogViewer->resize(805, 300);
        OBSLogViewer->setSizeGripEnabled(true);
        verticalLayout = new QVBoxLayout(OBSLogViewer);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 4);
        textArea = new OBSPlainTextEdit(OBSLogViewer);
        textArea->setObjectName("textArea");
        textArea->setReadOnly(true);

        verticalLayout->addWidget(textArea);

        buttonLayout = new QHBoxLayout();
        buttonLayout->setObjectName("buttonLayout");
        buttonLayout->setContentsMargins(10, 0, 10, 0);
        showStartup = new QCheckBox(OBSLogViewer);
        showStartup->setObjectName("showStartup");

        buttonLayout->addWidget(showStartup);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        buttonLayout->addItem(horizontalSpacer);

        openButton = new QPushButton(OBSLogViewer);
        openButton->setObjectName("openButton");

        buttonLayout->addWidget(openButton);

        clearButton = new QPushButton(OBSLogViewer);
        clearButton->setObjectName("clearButton");

        buttonLayout->addWidget(clearButton);

        closeButton = new QPushButton(OBSLogViewer);
        closeButton->setObjectName("closeButton");

        buttonLayout->addWidget(closeButton);


        verticalLayout->addLayout(buttonLayout);


        retranslateUi(OBSLogViewer);
        QObject::connect(closeButton, &QPushButton::clicked, OBSLogViewer, qOverload<>(&QDialog::close));
        QObject::connect(clearButton, &QPushButton::clicked, textArea, qOverload<>(&OBSPlainTextEdit::clear));

        QMetaObject::connectSlotsByName(OBSLogViewer);
    } // setupUi

    void retranslateUi(QDialog *OBSLogViewer)
    {
        OBSLogViewer->setWindowTitle(QCoreApplication::translate("OBSLogViewer", "LogViewer", nullptr));
        showStartup->setText(QCoreApplication::translate("OBSLogViewer", "ShowOnStartup", nullptr));
        openButton->setText(QCoreApplication::translate("OBSLogViewer", "OpenFile", nullptr));
        clearButton->setText(QCoreApplication::translate("OBSLogViewer", "Clear", nullptr));
        closeButton->setText(QCoreApplication::translate("OBSLogViewer", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OBSLogViewer: public Ui_OBSLogViewer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OBSLOGVIEWER_H

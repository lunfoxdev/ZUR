/********************************************************************************
** Form generated from reading UI file 'AutoConfigStartPage.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTOCONFIGSTARTPAGE_H
#define UI_AUTOCONFIGSTARTPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AutoConfigStartPage
{
public:
    QVBoxLayout *verticalLayout;
    QRadioButton *prioritizeStreaming;
    QRadioButton *prioritizeRecording;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_3;
    QLabel *label;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *AutoConfigStartPage)
    {
        if (AutoConfigStartPage->objectName().isEmpty())
            AutoConfigStartPage->setObjectName("AutoConfigStartPage");
        AutoConfigStartPage->resize(400, 300);
        AutoConfigStartPage->setWindowTitle(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(AutoConfigStartPage);
        verticalLayout->setObjectName("verticalLayout");
        prioritizeStreaming = new QRadioButton(AutoConfigStartPage);
        prioritizeStreaming->setObjectName("prioritizeStreaming");
        prioritizeStreaming->setChecked(true);

        verticalLayout->addWidget(prioritizeStreaming);

        prioritizeRecording = new QRadioButton(AutoConfigStartPage);
        prioritizeRecording->setObjectName("prioritizeRecording");

        verticalLayout->addWidget(prioritizeRecording);

        verticalSpacer_2 = new QSpacerItem(40, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        label_2 = new QLabel(AutoConfigStartPage);
        label_2->setObjectName("label_2");
        QFont font;
        font.setBold(true);
        label_2->setFont(font);
        label_2->setWordWrap(true);

        verticalLayout->addWidget(label_2);

        verticalSpacer_3 = new QSpacerItem(5, 5, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        label = new QLabel(AutoConfigStartPage);
        label->setObjectName("label");
        label->setFont(font);
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(AutoConfigStartPage);

        QMetaObject::connectSlotsByName(AutoConfigStartPage);
    } // setupUi

    void retranslateUi(QWidget *AutoConfigStartPage)
    {
        prioritizeStreaming->setText(QCoreApplication::translate("AutoConfigStartPage", "Basic.AutoConfig.StartPage.PrioritizeStreaming", nullptr));
        prioritizeRecording->setText(QCoreApplication::translate("AutoConfigStartPage", "Basic.AutoConfig.StartPage.PrioritizeRecording", nullptr));
        label_2->setText(QCoreApplication::translate("AutoConfigStartPage", "Basic.AutoConfig.Info", nullptr));
        label->setText(QCoreApplication::translate("AutoConfigStartPage", "Basic.AutoConfig.RunAnytime", nullptr));
        (void)AutoConfigStartPage;
    } // retranslateUi

};

namespace Ui {
    class AutoConfigStartPage: public Ui_AutoConfigStartPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTOCONFIGSTARTPAGE_H

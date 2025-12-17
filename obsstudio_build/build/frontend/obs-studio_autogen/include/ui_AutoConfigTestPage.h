/********************************************************************************
** Form generated from reading UI file 'AutoConfigTestPage.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTOCONFIGTESTPAGE_H
#define UI_AUTOCONFIGTESTPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AutoConfigTestPage
{
public:
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *testPage;
    QVBoxLayout *verticalLayout_2;
    QLabel *progressLabel;
    QLabel *subProgressLabel;
    QProgressBar *progressBar;
    QSpacerItem *verticalSpacer;
    QWidget *finishPage;
    QVBoxLayout *finishPageLayout;
    QLabel *finalResultLabel;
    QLabel *finalResultLabel_2;
    QSpacerItem *verticalSpacer_2;
    QWidget *errorPage;
    QVBoxLayout *verticalLayout_3;
    QLabel *errorLabel;

    void setupUi(QWidget *AutoConfigTestPage)
    {
        if (AutoConfigTestPage->objectName().isEmpty())
            AutoConfigTestPage->setObjectName("AutoConfigTestPage");
        AutoConfigTestPage->resize(400, 300);
        AutoConfigTestPage->setWindowTitle(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(AutoConfigTestPage);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(AutoConfigTestPage);
        stackedWidget->setObjectName("stackedWidget");
        testPage = new QWidget();
        testPage->setObjectName("testPage");
        verticalLayout_2 = new QVBoxLayout(testPage);
        verticalLayout_2->setObjectName("verticalLayout_2");
        progressLabel = new QLabel(testPage);
        progressLabel->setObjectName("progressLabel");
        progressLabel->setText(QString::fromUtf8(""));

        verticalLayout_2->addWidget(progressLabel);

        subProgressLabel = new QLabel(testPage);
        subProgressLabel->setObjectName("subProgressLabel");
        subProgressLabel->setText(QString::fromUtf8(""));

        verticalLayout_2->addWidget(subProgressLabel);

        progressBar = new QProgressBar(testPage);
        progressBar->setObjectName("progressBar");
        progressBar->setValue(24);

        verticalLayout_2->addWidget(progressBar);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        stackedWidget->addWidget(testPage);
        finishPage = new QWidget();
        finishPage->setObjectName("finishPage");
        finishPageLayout = new QVBoxLayout(finishPage);
        finishPageLayout->setObjectName("finishPageLayout");
        finalResultLabel = new QLabel(finishPage);
        finalResultLabel->setObjectName("finalResultLabel");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(finalResultLabel->sizePolicy().hasHeightForWidth());
        finalResultLabel->setSizePolicy(sizePolicy);
        finalResultLabel->setWordWrap(true);

        finishPageLayout->addWidget(finalResultLabel);

        finalResultLabel_2 = new QLabel(finishPage);
        finalResultLabel_2->setObjectName("finalResultLabel_2");
        finalResultLabel_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        finalResultLabel_2->setWordWrap(true);

        finishPageLayout->addWidget(finalResultLabel_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        finishPageLayout->addItem(verticalSpacer_2);

        stackedWidget->addWidget(finishPage);
        errorPage = new QWidget();
        errorPage->setObjectName("errorPage");
        verticalLayout_3 = new QVBoxLayout(errorPage);
        verticalLayout_3->setObjectName("verticalLayout_3");
        errorLabel = new QLabel(errorPage);
        errorLabel->setObjectName("errorLabel");
        errorLabel->setText(QString::fromUtf8(""));
        errorLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        errorLabel->setWordWrap(true);

        verticalLayout_3->addWidget(errorLabel);

        stackedWidget->addWidget(errorPage);

        verticalLayout->addWidget(stackedWidget);


        retranslateUi(AutoConfigTestPage);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(AutoConfigTestPage);
    } // setupUi

    void retranslateUi(QWidget *AutoConfigTestPage)
    {
        finalResultLabel->setText(QCoreApplication::translate("AutoConfigTestPage", "Basic.AutoConfig.TestPage.Result.Header", nullptr));
        finalResultLabel_2->setText(QCoreApplication::translate("AutoConfigTestPage", "Basic.AutoConfig.TestPage.Result.Footer", nullptr));
        (void)AutoConfigTestPage;
    } // retranslateUi

};

namespace Ui {
    class AutoConfigTestPage: public Ui_AutoConfigTestPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTOCONFIGTESTPAGE_H

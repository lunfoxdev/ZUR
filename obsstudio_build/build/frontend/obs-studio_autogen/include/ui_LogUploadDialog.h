/********************************************************************************
** Form generated from reading UI file 'LogUploadDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGUPLOADDIALOG_H
#define UI_LOGUPLOADDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LogUploadDialog
{
public:
    QVBoxLayout *verticalLayout_LogUploadDialog;
    QStackedWidget *stackedWidget;
    QWidget *confirmUploadPage;
    QVBoxLayout *verticalLayout_confirmUploadPage;
    QHBoxLayout *horizontalLayout_privacyNotice;
    QLabel *privacyNotice;
    QHBoxLayout *horizontalLayout_uploadProgress;
    QLabel *uploadProgress;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *confirmUploadButton;
    QPushButton *closeButton;
    QWidget *uploadSucceededPage;
    QVBoxLayout *verticalLayout_uploadSucceededPage;
    QHBoxLayout *horizontalLayout_4;
    QLabel *description;
    QHBoxLayout *horizontalLayout;
    QLineEdit *urlEdit;
    QPushButton *copyURL;
    QPushButton *analyzeURL;
    QDialogButtonBox *buttonBox;
    QWidget *uploadFailedPage;
    QVBoxLayout *verticalLayout_uploadFailedPage;
    QLabel *uploadErrorMessage;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *retryButton;
    QPushButton *retryCloseButton;

    void setupUi(QDialog *LogUploadDialog)
    {
        if (LogUploadDialog->objectName().isEmpty())
            LogUploadDialog->setObjectName("LogUploadDialog");
        LogUploadDialog->resize(600, 140);
        verticalLayout_LogUploadDialog = new QVBoxLayout(LogUploadDialog);
        verticalLayout_LogUploadDialog->setObjectName("verticalLayout_LogUploadDialog");
        verticalLayout_LogUploadDialog->setSizeConstraint(QLayout::SetFixedSize);
        stackedWidget = new QStackedWidget(LogUploadDialog);
        stackedWidget->setObjectName("stackedWidget");
        confirmUploadPage = new QWidget();
        confirmUploadPage->setObjectName("confirmUploadPage");
        verticalLayout_confirmUploadPage = new QVBoxLayout(confirmUploadPage);
        verticalLayout_confirmUploadPage->setObjectName("verticalLayout_confirmUploadPage");
        verticalLayout_confirmUploadPage->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_privacyNotice = new QHBoxLayout();
        horizontalLayout_privacyNotice->setObjectName("horizontalLayout_privacyNotice");
        privacyNotice = new QLabel(confirmUploadPage);
        privacyNotice->setObjectName("privacyNotice");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(privacyNotice->sizePolicy().hasHeightForWidth());
        privacyNotice->setSizePolicy(sizePolicy);
        privacyNotice->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        privacyNotice->setWordWrap(false);
        privacyNotice->setOpenExternalLinks(true);
        privacyNotice->setTextInteractionFlags(Qt::TextBrowserInteraction);

        horizontalLayout_privacyNotice->addWidget(privacyNotice);


        verticalLayout_confirmUploadPage->addLayout(horizontalLayout_privacyNotice);

        horizontalLayout_uploadProgress = new QHBoxLayout();
        horizontalLayout_uploadProgress->setObjectName("horizontalLayout_uploadProgress");
        horizontalLayout_uploadProgress->setContentsMargins(0, -1, -1, -1);
        uploadProgress = new QLabel(confirmUploadPage);
        uploadProgress->setObjectName("uploadProgress");
        uploadProgress->setEnabled(true);
        sizePolicy.setHeightForWidth(uploadProgress->sizePolicy().hasHeightForWidth());
        uploadProgress->setSizePolicy(sizePolicy);

        horizontalLayout_uploadProgress->addWidget(uploadProgress);


        verticalLayout_confirmUploadPage->addLayout(horizontalLayout_uploadProgress);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(-1, -1, -1, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        confirmUploadButton = new QPushButton(confirmUploadPage);
        confirmUploadButton->setObjectName("confirmUploadButton");

        horizontalLayout_2->addWidget(confirmUploadButton);

        closeButton = new QPushButton(confirmUploadPage);
        closeButton->setObjectName("closeButton");

        horizontalLayout_2->addWidget(closeButton);


        verticalLayout_confirmUploadPage->addLayout(horizontalLayout_2);

        stackedWidget->addWidget(confirmUploadPage);
        uploadSucceededPage = new QWidget();
        uploadSucceededPage->setObjectName("uploadSucceededPage");
        verticalLayout_uploadSucceededPage = new QVBoxLayout(uploadSucceededPage);
        verticalLayout_uploadSucceededPage->setObjectName("verticalLayout_uploadSucceededPage");
        verticalLayout_uploadSucceededPage->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(-1, -1, -1, 0);
        description = new QLabel(uploadSucceededPage);
        description->setObjectName("description");
        sizePolicy.setHeightForWidth(description->sizePolicy().hasHeightForWidth());
        description->setSizePolicy(sizePolicy);
        description->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        description->setWordWrap(false);

        horizontalLayout_4->addWidget(description);


        verticalLayout_uploadSucceededPage->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        urlEdit = new QLineEdit(uploadSucceededPage);
        urlEdit->setObjectName("urlEdit");
        urlEdit->setText(QString::fromUtf8(""));
        urlEdit->setReadOnly(true);

        horizontalLayout->addWidget(urlEdit);

        copyURL = new QPushButton(uploadSucceededPage);
        copyURL->setObjectName("copyURL");

        horizontalLayout->addWidget(copyURL);

        analyzeURL = new QPushButton(uploadSucceededPage);
        analyzeURL->setObjectName("analyzeURL");

        horizontalLayout->addWidget(analyzeURL);


        verticalLayout_uploadSucceededPage->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(uploadSucceededPage);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout_uploadSucceededPage->addWidget(buttonBox);

        stackedWidget->addWidget(uploadSucceededPage);
        uploadFailedPage = new QWidget();
        uploadFailedPage->setObjectName("uploadFailedPage");
        verticalLayout_uploadFailedPage = new QVBoxLayout(uploadFailedPage);
        verticalLayout_uploadFailedPage->setObjectName("verticalLayout_uploadFailedPage");
        verticalLayout_uploadFailedPage->setContentsMargins(0, 0, 0, 0);
        uploadErrorMessage = new QLabel(uploadFailedPage);
        uploadErrorMessage->setObjectName("uploadErrorMessage");
        sizePolicy.setHeightForWidth(uploadErrorMessage->sizePolicy().hasHeightForWidth());
        uploadErrorMessage->setSizePolicy(sizePolicy);
        uploadErrorMessage->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout_uploadFailedPage->addWidget(uploadErrorMessage);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalSpacer_2 = new QSpacerItem(10, 2, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        retryButton = new QPushButton(uploadFailedPage);
        retryButton->setObjectName("retryButton");

        horizontalLayout_5->addWidget(retryButton);

        retryCloseButton = new QPushButton(uploadFailedPage);
        retryCloseButton->setObjectName("retryCloseButton");

        horizontalLayout_5->addWidget(retryCloseButton);


        verticalLayout_uploadFailedPage->addLayout(horizontalLayout_5);

        stackedWidget->addWidget(uploadFailedPage);

        verticalLayout_LogUploadDialog->addWidget(stackedWidget);


        retranslateUi(LogUploadDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, LogUploadDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, LogUploadDialog, qOverload<>(&QDialog::reject));

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(LogUploadDialog);
    } // setupUi

    void retranslateUi(QDialog *LogUploadDialog)
    {
        LogUploadDialog->setWindowTitle(QCoreApplication::translate("LogUploadDialog", "LogUploadDialog.Title", nullptr));
        privacyNotice->setText(QCoreApplication::translate("LogUploadDialog", "LogUploadDialog.Labels.PrivacyNotice", nullptr));
        uploadProgress->setText(QString());
        confirmUploadButton->setText(QCoreApplication::translate("LogUploadDialog", "LogUploadDialog.Buttons.ConfirmUpload", nullptr));
        closeButton->setText(QCoreApplication::translate("LogUploadDialog", "Cancel", nullptr));
        description->setText(QCoreApplication::translate("LogUploadDialog", "LogUploadDialog.Labels.Description.AppLog", nullptr));
        copyURL->setText(QCoreApplication::translate("LogUploadDialog", "LogUploadDialog.Buttons.CopyURL", nullptr));
        analyzeURL->setText(QCoreApplication::translate("LogUploadDialog", "LogUploadDialog.Buttons.AnalyzeURL", nullptr));
        uploadErrorMessage->setText(QCoreApplication::translate("LogUploadDialog", "LogUploadDialog.Labels.UploadFailMessage", nullptr));
        retryButton->setText(QCoreApplication::translate("LogUploadDialog", "LogUploadDialog.Buttons.RetryButton", nullptr));
        retryCloseButton->setText(QCoreApplication::translate("LogUploadDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LogUploadDialog: public Ui_LogUploadDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGUPLOADDIALOG_H

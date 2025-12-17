/********************************************************************************
** Form generated from reading UI file 'OBSAbout.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OBSABOUT_H
#define UI_OBSABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "components/ClickableLabel.hpp"

QT_BEGIN_NAMESPACE

class Ui_OBSAbout
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *icon;
    QVBoxLayout *verticalLayout;
    QLabel *name;
    QLabel *version;
    QSpacerItem *verticalSpacer_2;
    QLabel *info;
    QSpacerItem *verticalSpacer_3;
    QLabel *contribute;
    QLabel *donate;
    QLabel *getInvolved;
    QSpacerItem *verticalSpacer;
    QTextBrowser *textBrowser;
    QFrame *widget;
    QHBoxLayout *horizontalLayout;
    ClickableLabel *about;
    ClickableLabel *authors;
    ClickableLabel *license;

    void setupUi(QWidget *OBSAbout)
    {
        if (OBSAbout->objectName().isEmpty())
            OBSAbout->setObjectName("OBSAbout");
        OBSAbout->resize(840, 519);
        verticalLayout_2 = new QVBoxLayout(OBSAbout);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(30);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(30, 10, 6, 6);
        icon = new QLabel(OBSAbout);
        icon->setObjectName("icon");
        icon->setMinimumSize(QSize(256, 256));
        icon->setMaximumSize(QSize(256, 256));
        icon->setPixmap(QPixmap(QString::fromUtf8(":res/images/obs.png")));
        icon->setScaledContents(true);

        horizontalLayout_2->addWidget(icon);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        name = new QLabel(OBSAbout);
        name->setObjectName("name");
        name->setText(QString::fromUtf8("OBS Studio"));

        verticalLayout->addWidget(name);

        version = new QLabel(OBSAbout);
        version->setObjectName("version");
        version->setText(QString::fromUtf8("Version"));

        verticalLayout->addWidget(version);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        info = new QLabel(OBSAbout);
        info->setObjectName("info");
        info->setWordWrap(true);

        verticalLayout->addWidget(info);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        contribute = new QLabel(OBSAbout);
        contribute->setObjectName("contribute");
        contribute->setText(QString::fromUtf8("Contribute"));
        contribute->setWordWrap(true);

        verticalLayout->addWidget(contribute);

        donate = new QLabel(OBSAbout);
        donate->setObjectName("donate");
        donate->setText(QString::fromUtf8("Donate"));

        verticalLayout->addWidget(donate);

        getInvolved = new QLabel(OBSAbout);
        getInvolved->setObjectName("getInvolved");
        getInvolved->setText(QString::fromUtf8("Get Involved"));

        verticalLayout->addWidget(getInvolved);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        textBrowser = new QTextBrowser(OBSAbout);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setOpenExternalLinks(true);

        verticalLayout->addWidget(textBrowser);


        horizontalLayout_2->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout_2);

        widget = new QFrame(OBSAbout);
        widget->setObjectName("widget");
        widget->setMinimumSize(QSize(0, 60));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        about = new ClickableLabel(widget);
        about->setObjectName("about");
        about->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(about);

        authors = new ClickableLabel(widget);
        authors->setObjectName("authors");
        authors->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(authors);

        license = new ClickableLabel(widget);
        license->setObjectName("license");
        license->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(license);


        verticalLayout_2->addWidget(widget);


        retranslateUi(OBSAbout);

        QMetaObject::connectSlotsByName(OBSAbout);
    } // setupUi

    void retranslateUi(QWidget *OBSAbout)
    {
        OBSAbout->setWindowTitle(QCoreApplication::translate("OBSAbout", "About", nullptr));
        icon->setText(QString());
        info->setText(QCoreApplication::translate("OBSAbout", "About.Info", nullptr));
        about->setText(QCoreApplication::translate("OBSAbout", "About", nullptr));
        authors->setText(QCoreApplication::translate("OBSAbout", "Authors", nullptr));
        license->setText(QCoreApplication::translate("OBSAbout", "License", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OBSAbout: public Ui_OBSAbout {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OBSABOUT_H

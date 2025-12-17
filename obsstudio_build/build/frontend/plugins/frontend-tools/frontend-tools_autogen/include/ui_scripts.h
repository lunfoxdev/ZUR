/********************************************************************************
** Form generated from reading UI file 'scripts.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCRIPTS_H
#define UI_SCRIPTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ScriptsTool
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *scriptsTab;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QListWidget *scripts;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *addScripts;
    QPushButton *removeScripts;
    QPushButton *reloadScripts;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *defaults;
    QPushButton *editScript;
    QPushButton *scriptLog;
    QVBoxLayout *propertiesLayout;
    QLabel *label_3;
    QLabel *description;
    QWidget *pythonSettingsTab;
    QVBoxLayout *verticalLayout_2;
    QLabel *pythonPathLabel;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *pythonPath;
    QPushButton *pythonPathBrowse;
    QLabel *pythonVersionLabel;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *close;

    void setupUi(QDialog *ScriptsTool)
    {
        if (ScriptsTool->objectName().isEmpty())
            ScriptsTool->setObjectName("ScriptsTool");
        ScriptsTool->resize(775, 492);
        ScriptsTool->setSizeGripEnabled(true);
        verticalLayout = new QVBoxLayout(ScriptsTool);
        verticalLayout->setObjectName("verticalLayout");
        tabWidget = new QTabWidget(ScriptsTool);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setTabBarAutoHide(true);
        scriptsTab = new QWidget();
        scriptsTab->setObjectName("scriptsTab");
        horizontalLayout_4 = new QHBoxLayout(scriptsTab);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_2 = new QLabel(scriptsTab);
        label_2->setObjectName("label_2");

        verticalLayout_3->addWidget(label_2);

        scripts = new QListWidget(scriptsTab);
        scripts->setObjectName("scripts");
        scripts->setContextMenuPolicy(Qt::CustomContextMenu);
        scripts->setSpacing(1);
        scripts->setSortingEnabled(true);

        verticalLayout_3->addWidget(scripts);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        addScripts = new QPushButton(scriptsTab);
        addScripts->setObjectName("addScripts");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(addScripts->sizePolicy().hasHeightForWidth());
        addScripts->setSizePolicy(sizePolicy);
        addScripts->setMaximumSize(QSize(16777215, 16777215));
        addScripts->setText(QString::fromUtf8(""));
        addScripts->setFlat(true);
        addScripts->setProperty("class", QVariant(QString::fromUtf8("icon-plus")));

        horizontalLayout_2->addWidget(addScripts);

        removeScripts = new QPushButton(scriptsTab);
        removeScripts->setObjectName("removeScripts");
        sizePolicy.setHeightForWidth(removeScripts->sizePolicy().hasHeightForWidth());
        removeScripts->setSizePolicy(sizePolicy);
        removeScripts->setMaximumSize(QSize(16777215, 16777215));
        removeScripts->setText(QString::fromUtf8(""));
        removeScripts->setFlat(true);
        removeScripts->setProperty("class", QVariant(QString::fromUtf8("icon-trash")));

        horizontalLayout_2->addWidget(removeScripts);

        reloadScripts = new QPushButton(scriptsTab);
        reloadScripts->setObjectName("reloadScripts");
        sizePolicy.setHeightForWidth(reloadScripts->sizePolicy().hasHeightForWidth());
        reloadScripts->setSizePolicy(sizePolicy);
        reloadScripts->setMaximumSize(QSize(16777215, 16777215));
        reloadScripts->setText(QString::fromUtf8(""));
        reloadScripts->setFlat(true);
        reloadScripts->setProperty("class", QVariant(QString::fromUtf8("icon-refresh")));

        horizontalLayout_2->addWidget(reloadScripts);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        defaults = new QPushButton(scriptsTab);
        defaults->setObjectName("defaults");

        horizontalLayout_2->addWidget(defaults);

        editScript = new QPushButton(scriptsTab);
        editScript->setObjectName("editScript");

        horizontalLayout_2->addWidget(editScript);

        scriptLog = new QPushButton(scriptsTab);
        scriptLog->setObjectName("scriptLog");

        horizontalLayout_2->addWidget(scriptLog);


        verticalLayout_3->addLayout(horizontalLayout_2);


        horizontalLayout_4->addLayout(verticalLayout_3);

        propertiesLayout = new QVBoxLayout();
        propertiesLayout->setObjectName("propertiesLayout");
        label_3 = new QLabel(scriptsTab);
        label_3->setObjectName("label_3");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);

        propertiesLayout->addWidget(label_3);

        description = new QLabel(scriptsTab);
        description->setObjectName("description");
        description->setText(QString::fromUtf8(""));
        description->setWordWrap(true);
        description->setMargin(12);
        description->setOpenExternalLinks(false);

        propertiesLayout->addWidget(description);


        horizontalLayout_4->addLayout(propertiesLayout);

        tabWidget->addTab(scriptsTab, QString());
        pythonSettingsTab = new QWidget();
        pythonSettingsTab->setObjectName("pythonSettingsTab");
        verticalLayout_2 = new QVBoxLayout(pythonSettingsTab);
        verticalLayout_2->setObjectName("verticalLayout_2");
        pythonPathLabel = new QLabel(pythonSettingsTab);
        pythonPathLabel->setObjectName("pythonPathLabel");
        pythonPathLabel->setText(QString::fromUtf8(""));

        verticalLayout_2->addWidget(pythonPathLabel);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        pythonPath = new QLineEdit(pythonSettingsTab);
        pythonPath->setObjectName("pythonPath");
        pythonPath->setReadOnly(true);

        horizontalLayout_3->addWidget(pythonPath);

        pythonPathBrowse = new QPushButton(pythonSettingsTab);
        pythonPathBrowse->setObjectName("pythonPathBrowse");

        horizontalLayout_3->addWidget(pythonPathBrowse);


        verticalLayout_2->addLayout(horizontalLayout_3);

        pythonVersionLabel = new QLabel(pythonSettingsTab);
        pythonVersionLabel->setObjectName("pythonVersionLabel");

        verticalLayout_2->addWidget(pythonVersionLabel);

        verticalSpacer = new QSpacerItem(510, 306, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        tabWidget->addTab(pythonSettingsTab, QString());

        verticalLayout->addWidget(tabWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        close = new QPushButton(ScriptsTool);
        close->setObjectName("close");

        horizontalLayout->addWidget(close);


        verticalLayout->addLayout(horizontalLayout);

#if QT_CONFIG(shortcut)
        label_2->setBuddy(scripts);
        pythonPathLabel->setBuddy(pythonPath);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(tabWidget, close);
        QWidget::setTabOrder(close, pythonPath);
        QWidget::setTabOrder(pythonPath, pythonPathBrowse);

        retranslateUi(ScriptsTool);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ScriptsTool);
    } // setupUi

    void retranslateUi(QDialog *ScriptsTool)
    {
        ScriptsTool->setWindowTitle(QCoreApplication::translate("ScriptsTool", "Scripts", nullptr));
        label_2->setText(QCoreApplication::translate("ScriptsTool", "LoadedScripts", nullptr));
#if QT_CONFIG(tooltip)
        addScripts->setToolTip(QCoreApplication::translate("ScriptsTool", "AddScripts", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        addScripts->setAccessibleName(QCoreApplication::translate("ScriptsTool", "AddScripts", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(tooltip)
        removeScripts->setToolTip(QCoreApplication::translate("ScriptsTool", "RemoveScripts", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        removeScripts->setAccessibleName(QCoreApplication::translate("ScriptsTool", "RemoveScripts", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(tooltip)
        reloadScripts->setToolTip(QCoreApplication::translate("ScriptsTool", "ReloadScripts", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        reloadScripts->setAccessibleName(QCoreApplication::translate("ScriptsTool", "ReloadScripts", nullptr));
#endif // QT_CONFIG(accessibility)
        defaults->setText(QCoreApplication::translate("ScriptsTool", "Defaults", nullptr));
        editScript->setText(QCoreApplication::translate("ScriptsTool", "EditScript", nullptr));
        scriptLog->setText(QCoreApplication::translate("ScriptsTool", "ScriptLogWindow", nullptr));
        label_3->setText(QCoreApplication::translate("ScriptsTool", "Description", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(scriptsTab), QCoreApplication::translate("ScriptsTool", "Scripts", nullptr));
#if QT_CONFIG(accessibility)
        pythonPathBrowse->setAccessibleName(QCoreApplication::translate("ScriptsTool", "PythonSettings.BrowsePythonPath", nullptr));
#endif // QT_CONFIG(accessibility)
        pythonPathBrowse->setText(QCoreApplication::translate("ScriptsTool", "Browse", nullptr));
        pythonVersionLabel->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(pythonSettingsTab), QCoreApplication::translate("ScriptsTool", "PythonSettings", nullptr));
        close->setText(QCoreApplication::translate("ScriptsTool", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ScriptsTool: public Ui_ScriptsTool {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCRIPTS_H

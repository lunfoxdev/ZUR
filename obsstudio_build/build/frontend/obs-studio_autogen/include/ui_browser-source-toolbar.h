/********************************************************************************
** Form generated from reading UI file 'browser-source-toolbar.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BROWSER_2D_SOURCE_2D_TOOLBAR_H
#define UI_BROWSER_2D_SOURCE_2D_TOOLBAR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BrowserSourceToolbar
{
public:
    QHBoxLayout *horizontalLayout;
    QPushButton *refresh;
    QFrame *line;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *BrowserSourceToolbar)
    {
        if (BrowserSourceToolbar->objectName().isEmpty())
            BrowserSourceToolbar->setObjectName("BrowserSourceToolbar");
        BrowserSourceToolbar->resize(628, 22);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(BrowserSourceToolbar->sizePolicy().hasHeightForWidth());
        BrowserSourceToolbar->setSizePolicy(sizePolicy);
        BrowserSourceToolbar->setMinimumSize(QSize(0, 22));
        BrowserSourceToolbar->setWindowTitle(QString::fromUtf8("Form"));
        horizontalLayout = new QHBoxLayout(BrowserSourceToolbar);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        refresh = new QPushButton(BrowserSourceToolbar);
        refresh->setObjectName("refresh");
        refresh->setMinimumSize(QSize(0, 22));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/images/refresh.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        refresh->setIcon(icon);
        refresh->setFlat(true);
        refresh->setProperty("class", QVariant(QString::fromUtf8("icon-refresh")));

        horizontalLayout->addWidget(refresh);

        line = new QFrame(BrowserSourceToolbar);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::VLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        horizontalLayout->addWidget(line);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        retranslateUi(BrowserSourceToolbar);

        QMetaObject::connectSlotsByName(BrowserSourceToolbar);
    } // setupUi

    void retranslateUi(QWidget *BrowserSourceToolbar)
    {
        refresh->setText(QCoreApplication::translate("BrowserSourceToolbar", "RefreshBrowser", nullptr));
        (void)BrowserSourceToolbar;
    } // retranslateUi

};

namespace Ui {
    class BrowserSourceToolbar: public Ui_BrowserSourceToolbar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BROWSER_2D_SOURCE_2D_TOOLBAR_H

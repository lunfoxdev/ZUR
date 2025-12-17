/********************************************************************************
** Form generated from reading UI file 'OBSBasicTransform.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OBSBASICTRANSFORM_H
#define UI_OBSBASICTRANSFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OBSBasicTransform
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *container;
    QFormLayout *formLayout;
    QLabel *label;
    QFrame *widget;
    QHBoxLayout *horizontalLayout;
    QDoubleSpinBox *positionX;
    QDoubleSpinBox *positionY;
    QLabel *label_2;
    QDoubleSpinBox *rotation;
    QLabel *label_3;
    QFrame *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QDoubleSpinBox *sizeX;
    QDoubleSpinBox *sizeY;
    QLabel *label_4;
    QComboBox *align;
    QSpacerItem *verticalSpacer;
    QLabel *label_5;
    QComboBox *boundsType;
    QLabel *label_6;
    QComboBox *boundsAlign;
    QLabel *label_7;
    QFrame *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QDoubleSpinBox *boundsWidth;
    QDoubleSpinBox *boundsHeight;
    QCheckBox *cropToBounds;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_8;
    QGridLayout *gridLayout;
    QSpinBox *cropLeft;
    QSpinBox *cropRight;
    QLabel *label_9;
    QLabel *label_12;
    QSpinBox *cropTop;
    QSpinBox *cropBottom;
    QLabel *label_11;
    QLabel *label_10;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *transformSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *OBSBasicTransform)
    {
        if (OBSBasicTransform->objectName().isEmpty())
            OBSBasicTransform->setObjectName("OBSBasicTransform");
        OBSBasicTransform->resize(564, 320);
        verticalLayout = new QVBoxLayout(OBSBasicTransform);
        verticalLayout->setObjectName("verticalLayout");
        container = new QWidget(OBSBasicTransform);
        container->setObjectName("container");
        formLayout = new QFormLayout(container);
        formLayout->setObjectName("formLayout");
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout->setHorizontalSpacing(4);
        formLayout->setVerticalSpacing(4);
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(container);
        label->setObjectName("label");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(170, 0));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label);

        widget = new QFrame(container);
        widget->setObjectName("widget");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        positionX = new QDoubleSpinBox(widget);
        positionX->setObjectName("positionX");
        positionX->setMinimumSize(QSize(120, 0));
        positionX->setMaximumSize(QSize(100, 16777215));
        positionX->setDecimals(4);
        positionX->setMinimum(-90001.000000000000000);
        positionX->setMaximum(90001.000000000000000);

        horizontalLayout->addWidget(positionX);

        positionY = new QDoubleSpinBox(widget);
        positionY->setObjectName("positionY");
        positionY->setMinimumSize(QSize(120, 0));
        positionY->setMaximumSize(QSize(100, 16777215));
        positionY->setDecimals(4);
        positionY->setMinimum(-90001.000000000000000);
        positionY->setMaximum(90001.000000000000000);

        horizontalLayout->addWidget(positionY);


        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, widget);

        label_2 = new QLabel(container);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_2);

        rotation = new QDoubleSpinBox(container);
        rotation->setObjectName("rotation");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(rotation->sizePolicy().hasHeightForWidth());
        rotation->setSizePolicy(sizePolicy2);
        rotation->setMinimumSize(QSize(120, 0));
        rotation->setMaximumSize(QSize(100, 16777215));
        rotation->setMinimum(-360.000000000000000);
        rotation->setMaximum(360.000000000000000);
        rotation->setSingleStep(0.100000000000000);

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, rotation);

        label_3 = new QLabel(container);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, label_3);

        widget_2 = new QFrame(container);
        widget_2->setObjectName("widget_2");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy3);
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        sizeX = new QDoubleSpinBox(widget_2);
        sizeX->setObjectName("sizeX");
        sizeX->setMinimumSize(QSize(120, 0));
        sizeX->setMaximumSize(QSize(100, 16777215));
        sizeX->setDecimals(4);
        sizeX->setMinimum(-90001.000000000000000);
        sizeX->setMaximum(90001.000000000000000);
        sizeX->setSingleStep(1.000000000000000);

        horizontalLayout_2->addWidget(sizeX);

        sizeY = new QDoubleSpinBox(widget_2);
        sizeY->setObjectName("sizeY");
        sizeY->setMinimumSize(QSize(120, 0));
        sizeY->setMaximumSize(QSize(100, 16777215));
        sizeY->setDecimals(4);
        sizeY->setMinimum(-90001.000000000000000);
        sizeY->setMaximum(90001.000000000000000);
        sizeY->setSingleStep(1.000000000000000);

        horizontalLayout_2->addWidget(sizeY);


        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, widget_2);

        label_4 = new QLabel(container);
        label_4->setObjectName("label_4");

        formLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, label_4);

        align = new QComboBox(container);
        align->addItem(QString());
        align->addItem(QString());
        align->addItem(QString());
        align->addItem(QString());
        align->addItem(QString());
        align->addItem(QString());
        align->addItem(QString());
        align->addItem(QString());
        align->addItem(QString());
        align->setObjectName("align");

        formLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, align);

        verticalSpacer = new QSpacerItem(10, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        formLayout->setItem(4, QFormLayout::ItemRole::FieldRole, verticalSpacer);

        label_5 = new QLabel(container);
        label_5->setObjectName("label_5");

        formLayout->setWidget(5, QFormLayout::ItemRole::LabelRole, label_5);

        boundsType = new QComboBox(container);
        boundsType->addItem(QString());
        boundsType->addItem(QString());
        boundsType->addItem(QString());
        boundsType->addItem(QString());
        boundsType->addItem(QString());
        boundsType->addItem(QString());
        boundsType->addItem(QString());
        boundsType->setObjectName("boundsType");

        formLayout->setWidget(5, QFormLayout::ItemRole::FieldRole, boundsType);

        label_6 = new QLabel(container);
        label_6->setObjectName("label_6");

        formLayout->setWidget(6, QFormLayout::ItemRole::LabelRole, label_6);

        boundsAlign = new QComboBox(container);
        boundsAlign->addItem(QString());
        boundsAlign->addItem(QString());
        boundsAlign->addItem(QString());
        boundsAlign->addItem(QString());
        boundsAlign->addItem(QString());
        boundsAlign->addItem(QString());
        boundsAlign->addItem(QString());
        boundsAlign->addItem(QString());
        boundsAlign->addItem(QString());
        boundsAlign->setObjectName("boundsAlign");
        boundsAlign->setEnabled(false);

        formLayout->setWidget(6, QFormLayout::ItemRole::FieldRole, boundsAlign);

        label_7 = new QLabel(container);
        label_7->setObjectName("label_7");

        formLayout->setWidget(7, QFormLayout::ItemRole::LabelRole, label_7);

        widget_3 = new QFrame(container);
        widget_3->setObjectName("widget_3");
        sizePolicy3.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy3);
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        boundsWidth = new QDoubleSpinBox(widget_3);
        boundsWidth->setObjectName("boundsWidth");
        boundsWidth->setEnabled(false);
        boundsWidth->setMinimumSize(QSize(120, 0));
        boundsWidth->setMaximumSize(QSize(100, 16777215));
        boundsWidth->setDecimals(4);
        boundsWidth->setMinimum(1.000000000000000);
        boundsWidth->setMaximum(90001.000000000000000);

        horizontalLayout_3->addWidget(boundsWidth);

        boundsHeight = new QDoubleSpinBox(widget_3);
        boundsHeight->setObjectName("boundsHeight");
        boundsHeight->setEnabled(false);
        boundsHeight->setMinimumSize(QSize(120, 0));
        boundsHeight->setMaximumSize(QSize(100, 16777215));
        boundsHeight->setDecimals(4);
        boundsHeight->setMinimum(1.000000000000000);
        boundsHeight->setMaximum(90001.000000000000000);

        horizontalLayout_3->addWidget(boundsHeight);


        formLayout->setWidget(7, QFormLayout::ItemRole::FieldRole, widget_3);

        cropToBounds = new QCheckBox(container);
        cropToBounds->setObjectName("cropToBounds");

        formLayout->setWidget(8, QFormLayout::ItemRole::FieldRole, cropToBounds);

        verticalSpacer_2 = new QSpacerItem(10, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        formLayout->setItem(9, QFormLayout::ItemRole::FieldRole, verticalSpacer_2);

        label_8 = new QLabel(container);
        label_8->setObjectName("label_8");

        formLayout->setWidget(10, QFormLayout::ItemRole::LabelRole, label_8);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        cropLeft = new QSpinBox(container);
        cropLeft->setObjectName("cropLeft");
        sizePolicy2.setHeightForWidth(cropLeft->sizePolicy().hasHeightForWidth());
        cropLeft->setSizePolicy(sizePolicy2);
        cropLeft->setMinimumSize(QSize(100, 0));
        cropLeft->setMaximumSize(QSize(100, 16777215));
        cropLeft->setMaximum(100000);

        gridLayout->addWidget(cropLeft, 0, 1, 1, 1);

        cropRight = new QSpinBox(container);
        cropRight->setObjectName("cropRight");
        sizePolicy2.setHeightForWidth(cropRight->sizePolicy().hasHeightForWidth());
        cropRight->setSizePolicy(sizePolicy2);
        cropRight->setMinimumSize(QSize(100, 0));
        cropRight->setMaximumSize(QSize(100, 16777215));
        cropRight->setMaximum(100000);

        gridLayout->addWidget(cropRight, 0, 3, 1, 1);

        label_9 = new QLabel(container);
        label_9->setObjectName("label_9");
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_9, 0, 0, 1, 1);

        label_12 = new QLabel(container);
        label_12->setObjectName("label_12");
        label_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_12, 1, 2, 1, 1);

        cropTop = new QSpinBox(container);
        cropTop->setObjectName("cropTop");
        sizePolicy2.setHeightForWidth(cropTop->sizePolicy().hasHeightForWidth());
        cropTop->setSizePolicy(sizePolicy2);
        cropTop->setMinimumSize(QSize(100, 0));
        cropTop->setMaximumSize(QSize(100, 16777215));
        cropTop->setMaximum(100000);

        gridLayout->addWidget(cropTop, 1, 1, 1, 1);

        cropBottom = new QSpinBox(container);
        cropBottom->setObjectName("cropBottom");
        sizePolicy2.setHeightForWidth(cropBottom->sizePolicy().hasHeightForWidth());
        cropBottom->setSizePolicy(sizePolicy2);
        cropBottom->setMinimumSize(QSize(100, 0));
        cropBottom->setMaximumSize(QSize(100, 16777215));
        cropBottom->setMaximum(100000);

        gridLayout->addWidget(cropBottom, 1, 3, 1, 1);

        label_11 = new QLabel(container);
        label_11->setObjectName("label_11");
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_11, 1, 0, 1, 1);

        label_10 = new QLabel(container);
        label_10->setObjectName("label_10");
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_10, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 4, 1, 1);


        formLayout->setLayout(10, QFormLayout::ItemRole::FieldRole, gridLayout);


        verticalLayout->addWidget(container);

        transformSpacer = new QSpacerItem(0, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(transformSpacer);

        buttonBox = new QDialogButtonBox(OBSBasicTransform);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Reset);

        verticalLayout->addWidget(buttonBox);

        verticalLayout->setStretch(1, 5);
#if QT_CONFIG(shortcut)
        label_9->setBuddy(cropLeft);
        label_12->setBuddy(cropBottom);
        label_11->setBuddy(cropTop);
        label_10->setBuddy(cropRight);
#endif // QT_CONFIG(shortcut)

        retranslateUi(OBSBasicTransform);
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, OBSBasicTransform, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(OBSBasicTransform);
    } // setupUi

    void retranslateUi(QDialog *OBSBasicTransform)
    {
        OBSBasicTransform->setWindowTitle(QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow", nullptr));
#if QT_CONFIG(accessibility)
        label->setAccessibleName(QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Position", nullptr));
#endif // QT_CONFIG(accessibility)
        label->setText(QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Position", nullptr));
#if QT_CONFIG(accessibility)
        positionX->setAccessibleName(QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.PositionX", nullptr));
#endif // QT_CONFIG(accessibility)
        positionX->setSuffix(QCoreApplication::translate("OBSBasicTransform", " px", nullptr));
#if QT_CONFIG(accessibility)
        positionY->setAccessibleName(QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.PositionY", nullptr));
#endif // QT_CONFIG(accessibility)
        positionY->setSuffix(QCoreApplication::translate("OBSBasicTransform", " px", nullptr));
#if QT_CONFIG(accessibility)
        label_2->setAccessibleName(QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Rotation", nullptr));
#endif // QT_CONFIG(accessibility)
        label_2->setText(QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Rotation", nullptr));
#if QT_CONFIG(accessibility)
        rotation->setAccessibleName(QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Rotation", nullptr));
#endif // QT_CONFIG(accessibility)
        rotation->setSuffix(QCoreApplication::translate("OBSBasicTransform", "\302\260", nullptr));
#if QT_CONFIG(accessibility)
        label_3->setAccessibleName(QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Size", nullptr));
#endif // QT_CONFIG(accessibility)
        label_3->setText(QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Size", nullptr));
#if QT_CONFIG(accessibility)
        sizeX->setAccessibleName(QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Width", nullptr));
#endif // QT_CONFIG(accessibility)
        sizeX->setSuffix(QCoreApplication::translate("OBSBasicTransform", " px", nullptr));
#if QT_CONFIG(accessibility)
        sizeY->setAccessibleName(QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Height", nullptr));
#endif // QT_CONFIG(accessibility)
        sizeY->setSuffix(QCoreApplication::translate("OBSBasicTransform", " px", nullptr));
#if QT_CONFIG(accessibility)
        label_4->setAccessibleName(QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment", nullptr));
#endif // QT_CONFIG(accessibility)
        label_4->setText(QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment", nullptr));
        align->setItemText(0, QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment.TopLeft", nullptr));
        align->setItemText(1, QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment.TopCenter", nullptr));
        align->setItemText(2, QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment.TopRight", nullptr));
        align->setItemText(3, QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment.CenterLeft", nullptr));
        align->setItemText(4, QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment.Center", nullptr));
        align->setItemText(5, QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment.CenterRight", nullptr));
        align->setItemText(6, QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment.BottomLeft", nullptr));
        align->setItemText(7, QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment.BottomCenter", nullptr));
        align->setItemText(8, QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment.BottomRight", nullptr));

#if QT_CONFIG(accessibility)
        align->setAccessibleName(QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment", nullptr));
#endif // QT_CONFIG(accessibility)
        align->setCurrentText(QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment.TopLeft", nullptr));
#if QT_CONFIG(accessibility)
        label_5->setAccessibleName(QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.BoundsType", nullptr));
#endif // QT_CONFIG(accessibility)
        label_5->setText(QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.BoundsType", nullptr));
        boundsType->setItemText(0, QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.BoundsType.None", nullptr));
        boundsType->setItemText(1, QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.BoundsType.Stretch", nullptr));
        boundsType->setItemText(2, QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.BoundsType.ScaleInner", nullptr));
        boundsType->setItemText(3, QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.BoundsType.ScaleOuter", nullptr));
        boundsType->setItemText(4, QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.BoundsType.ScaleToWidth", nullptr));
        boundsType->setItemText(5, QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.BoundsType.ScaleToHeight", nullptr));
        boundsType->setItemText(6, QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.BoundsType.MaxOnly", nullptr));

#if QT_CONFIG(accessibility)
        boundsType->setAccessibleName(QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.BoundsType", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        label_6->setAccessibleName(QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.BoundsAlignment", nullptr));
#endif // QT_CONFIG(accessibility)
        label_6->setText(QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.BoundsAlignment", nullptr));
        boundsAlign->setItemText(0, QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment.TopLeft", nullptr));
        boundsAlign->setItemText(1, QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment.TopCenter", nullptr));
        boundsAlign->setItemText(2, QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment.TopRight", nullptr));
        boundsAlign->setItemText(3, QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment.CenterLeft", nullptr));
        boundsAlign->setItemText(4, QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment.Center", nullptr));
        boundsAlign->setItemText(5, QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment.CenterRight", nullptr));
        boundsAlign->setItemText(6, QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment.BottomLeft", nullptr));
        boundsAlign->setItemText(7, QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment.BottomCenter", nullptr));
        boundsAlign->setItemText(8, QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment.BottomRight", nullptr));

#if QT_CONFIG(accessibility)
        boundsAlign->setAccessibleName(QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.BoundsAlignment", nullptr));
#endif // QT_CONFIG(accessibility)
        boundsAlign->setCurrentText(QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment.TopLeft", nullptr));
#if QT_CONFIG(accessibility)
        label_7->setAccessibleName(QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Bounds", nullptr));
#endif // QT_CONFIG(accessibility)
        label_7->setText(QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Bounds", nullptr));
#if QT_CONFIG(accessibility)
        boundsWidth->setAccessibleName(QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.BoundsWidth", nullptr));
#endif // QT_CONFIG(accessibility)
        boundsWidth->setSuffix(QCoreApplication::translate("OBSBasicTransform", " px", nullptr));
#if QT_CONFIG(accessibility)
        boundsHeight->setAccessibleName(QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.BoundsHeight", nullptr));
#endif // QT_CONFIG(accessibility)
        boundsHeight->setSuffix(QCoreApplication::translate("OBSBasicTransform", " px", nullptr));
#if QT_CONFIG(accessibility)
        cropToBounds->setAccessibleName(QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.BoundsAlignment", nullptr));
#endif // QT_CONFIG(accessibility)
        cropToBounds->setText(QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.CropToBounds", nullptr));
#if QT_CONFIG(accessibility)
        label_8->setAccessibleName(QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Crop", nullptr));
#endif // QT_CONFIG(accessibility)
        label_8->setText(QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Crop", nullptr));
#if QT_CONFIG(accessibility)
        cropLeft->setAccessibleName(QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.CropLeft", nullptr));
#endif // QT_CONFIG(accessibility)
        cropLeft->setSuffix(QCoreApplication::translate("OBSBasicTransform", " px", nullptr));
#if QT_CONFIG(accessibility)
        cropRight->setAccessibleName(QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.CropRight", nullptr));
#endif // QT_CONFIG(accessibility)
        cropRight->setSuffix(QCoreApplication::translate("OBSBasicTransform", " px", nullptr));
        label_9->setText(QCoreApplication::translate("OBSBasicTransform", "Left", nullptr));
        label_12->setText(QCoreApplication::translate("OBSBasicTransform", "Bottom", nullptr));
#if QT_CONFIG(accessibility)
        cropTop->setAccessibleName(QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.CropTop", nullptr));
#endif // QT_CONFIG(accessibility)
        cropTop->setSuffix(QCoreApplication::translate("OBSBasicTransform", " px", nullptr));
#if QT_CONFIG(accessibility)
        cropBottom->setAccessibleName(QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.CropBottom", nullptr));
#endif // QT_CONFIG(accessibility)
        cropBottom->setSuffix(QCoreApplication::translate("OBSBasicTransform", " px", nullptr));
        label_11->setText(QCoreApplication::translate("OBSBasicTransform", "Top", nullptr));
        label_10->setText(QCoreApplication::translate("OBSBasicTransform", "Right", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OBSBasicTransform: public Ui_OBSBasicTransform {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OBSBASICTRANSFORM_H

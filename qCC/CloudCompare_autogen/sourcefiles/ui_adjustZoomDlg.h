/********************************************************************************
** Form generated from reading UI file 'adjustZoomDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADJUSTZOOMDLG_H
#define UI_ADJUSTZOOMDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_AdjustZoomDialog
{
public:
    QFormLayout *formLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QLabel *windowLabel;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QDoubleSpinBox *focalDoubleSpinBox;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout;
    QDoubleSpinBox *pixelSizeDoubleSpinBox;
    QLabel *label_4;
    QSpinBox *pixelCountSpinBox;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AdjustZoomDialog)
    {
        if (AdjustZoomDialog->objectName().isEmpty())
            AdjustZoomDialog->setObjectName(QString::fromUtf8("AdjustZoomDialog"));
        AdjustZoomDialog->resize(350, 130);
        formLayout = new QFormLayout(AdjustZoomDialog);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(AdjustZoomDialog);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        windowLabel = new QLabel(AdjustZoomDialog);
        windowLabel->setObjectName(QString::fromUtf8("windowLabel"));
        windowLabel->setText(QString::fromUtf8("1 (800 x 600)"));

        horizontalLayout_2->addWidget(windowLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        label_2 = new QLabel(AdjustZoomDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        focalDoubleSpinBox = new QDoubleSpinBox(AdjustZoomDialog);
        focalDoubleSpinBox->setObjectName(QString::fromUtf8("focalDoubleSpinBox"));
        focalDoubleSpinBox->setDecimals(6);
        focalDoubleSpinBox->setMinimum(0.000001000000000);
        focalDoubleSpinBox->setMaximum(1000000.000000000000000);
        focalDoubleSpinBox->setSingleStep(0.010000000000000);
        focalDoubleSpinBox->setValue(1.000000000000000);

        horizontalLayout_2->addWidget(focalDoubleSpinBox);


        formLayout->setLayout(0, QFormLayout::FieldRole, horizontalLayout_2);

        label_3 = new QLabel(AdjustZoomDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pixelSizeDoubleSpinBox = new QDoubleSpinBox(AdjustZoomDialog);
        pixelSizeDoubleSpinBox->setObjectName(QString::fromUtf8("pixelSizeDoubleSpinBox"));
        pixelSizeDoubleSpinBox->setDecimals(6);
        pixelSizeDoubleSpinBox->setMinimum(0.000001000000000);
        pixelSizeDoubleSpinBox->setMaximum(1000000000.000000000000000);
        pixelSizeDoubleSpinBox->setSingleStep(0.001000000000000);
        pixelSizeDoubleSpinBox->setValue(1.000000000000000);

        horizontalLayout->addWidget(pixelSizeDoubleSpinBox);

        label_4 = new QLabel(AdjustZoomDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setText(QString::fromUtf8("/"));

        horizontalLayout->addWidget(label_4);

        pixelCountSpinBox = new QSpinBox(AdjustZoomDialog);
        pixelCountSpinBox->setObjectName(QString::fromUtf8("pixelCountSpinBox"));
        pixelCountSpinBox->setMinimum(1);
        pixelCountSpinBox->setMaximum(10000000);

        horizontalLayout->addWidget(pixelCountSpinBox);


        formLayout->setLayout(2, QFormLayout::FieldRole, horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(4, QFormLayout::FieldRole, verticalSpacer);

        buttonBox = new QDialogButtonBox(AdjustZoomDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        formLayout->setWidget(5, QFormLayout::FieldRole, buttonBox);


        retranslateUi(AdjustZoomDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AdjustZoomDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AdjustZoomDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AdjustZoomDialog);
    } // setupUi

    void retranslateUi(QDialog *AdjustZoomDialog)
    {
        AdjustZoomDialog->setWindowTitle(QCoreApplication::translate("AdjustZoomDialog", "Adjust zoom", nullptr));
        label->setText(QCoreApplication::translate("AdjustZoomDialog", "Window", nullptr));
        label_2->setText(QCoreApplication::translate("AdjustZoomDialog", "focal", nullptr));
        label_3->setText(QCoreApplication::translate("AdjustZoomDialog", "pixel size", nullptr));
        pixelSizeDoubleSpinBox->setSuffix(QCoreApplication::translate("AdjustZoomDialog", " units", nullptr));
        pixelCountSpinBox->setSuffix(QCoreApplication::translate("AdjustZoomDialog", " pixel(s)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdjustZoomDialog: public Ui_AdjustZoomDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADJUSTZOOMDLG_H

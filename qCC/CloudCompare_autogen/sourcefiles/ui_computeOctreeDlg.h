/********************************************************************************
** Form generated from reading UI file 'computeOctreeDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPUTEOCTREEDLG_H
#define UI_COMPUTEOCTREEDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ComputeOctreeDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *headerLabel;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QRadioButton *defaultRadioButton;
    QRadioButton *cellSizeRadioButton;
    QDoubleSpinBox *cellSizeDoubleSpinBox;
    QRadioButton *customBBRadioButton;
    QToolButton *customBBToolButton;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ComputeOctreeDialog)
    {
        if (ComputeOctreeDialog->objectName().isEmpty())
            ComputeOctreeDialog->setObjectName(QString::fromUtf8("ComputeOctreeDialog"));
        ComputeOctreeDialog->resize(300, 180);
        verticalLayout = new QVBoxLayout(ComputeOctreeDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        headerLabel = new QLabel(ComputeOctreeDialog);
        headerLabel->setObjectName(QString::fromUtf8("headerLabel"));

        verticalLayout->addWidget(headerLabel);

        groupBox = new QGroupBox(ComputeOctreeDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        defaultRadioButton = new QRadioButton(groupBox);
        defaultRadioButton->setObjectName(QString::fromUtf8("defaultRadioButton"));
        defaultRadioButton->setChecked(true);

        formLayout->setWidget(0, QFormLayout::LabelRole, defaultRadioButton);

        cellSizeRadioButton = new QRadioButton(groupBox);
        cellSizeRadioButton->setObjectName(QString::fromUtf8("cellSizeRadioButton"));

        formLayout->setWidget(1, QFormLayout::LabelRole, cellSizeRadioButton);

        cellSizeDoubleSpinBox = new QDoubleSpinBox(groupBox);
        cellSizeDoubleSpinBox->setObjectName(QString::fromUtf8("cellSizeDoubleSpinBox"));
        cellSizeDoubleSpinBox->setEnabled(false);
        cellSizeDoubleSpinBox->setDecimals(6);
        cellSizeDoubleSpinBox->setMaximum(1000000000.000000000000000);

        formLayout->setWidget(1, QFormLayout::FieldRole, cellSizeDoubleSpinBox);

        customBBRadioButton = new QRadioButton(groupBox);
        customBBRadioButton->setObjectName(QString::fromUtf8("customBBRadioButton"));

        formLayout->setWidget(2, QFormLayout::LabelRole, customBBRadioButton);

        customBBToolButton = new QToolButton(groupBox);
        customBBToolButton->setObjectName(QString::fromUtf8("customBBToolButton"));
        customBBToolButton->setEnabled(false);

        formLayout->setWidget(2, QFormLayout::FieldRole, customBBToolButton);


        verticalLayout->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 4, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(ComputeOctreeDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ComputeOctreeDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ComputeOctreeDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ComputeOctreeDialog, SLOT(reject()));
        QObject::connect(cellSizeRadioButton, SIGNAL(toggled(bool)), cellSizeDoubleSpinBox, SLOT(setEnabled(bool)));
        QObject::connect(customBBRadioButton, SIGNAL(toggled(bool)), customBBToolButton, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(ComputeOctreeDialog);
    } // setupUi

    void retranslateUi(QDialog *ComputeOctreeDialog)
    {
        ComputeOctreeDialog->setWindowTitle(QCoreApplication::translate("ComputeOctreeDialog", "Compute Octree", nullptr));
        headerLabel->setText(QCoreApplication::translate("ComputeOctreeDialog", "Max subdivision level: ??", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ComputeOctreeDialog", "Octree box", nullptr));
        defaultRadioButton->setText(QCoreApplication::translate("ComputeOctreeDialog", "Default", nullptr));
        cellSizeRadioButton->setText(QCoreApplication::translate("ComputeOctreeDialog", "Cell size at max level", nullptr));
        customBBRadioButton->setText(QCoreApplication::translate("ComputeOctreeDialog", "Custom bounding box", nullptr));
        customBBToolButton->setText(QCoreApplication::translate("ComputeOctreeDialog", "Edit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ComputeOctreeDialog: public Ui_ComputeOctreeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPUTEOCTREEDLG_H

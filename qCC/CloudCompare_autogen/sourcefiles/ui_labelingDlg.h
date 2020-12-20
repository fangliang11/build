/********************************************************************************
** Form generated from reading UI file 'labelingDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LABELINGDLG_H
#define UI_LABELINGDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <ccOctreeSpinBox.h>

QT_BEGIN_NAMESPACE

class Ui_LabelingDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    ccOctreeSpinBox *octreeLevelSpinBox;
    QLabel *label_2;
    QSpinBox *minPtsSpinBox;
    QCheckBox *randomColorsCheckBox;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *LabelingDialog)
    {
        if (LabelingDialog->objectName().isEmpty())
            LabelingDialog->setObjectName(QString::fromUtf8("LabelingDialog"));
        LabelingDialog->resize(330, 160);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LabelingDialog->sizePolicy().hasHeightForWidth());
        LabelingDialog->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(LabelingDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(LabelingDialog);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        octreeLevelSpinBox = new ccOctreeSpinBox(LabelingDialog);
        octreeLevelSpinBox->setObjectName(QString::fromUtf8("octreeLevelSpinBox"));
        octreeLevelSpinBox->setMinimumSize(QSize(0, 25));
        octreeLevelSpinBox->setMinimum(1);
        octreeLevelSpinBox->setMaximum(10);
        octreeLevelSpinBox->setValue(8);

        formLayout->setWidget(0, QFormLayout::FieldRole, octreeLevelSpinBox);

        label_2 = new QLabel(LabelingDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        minPtsSpinBox = new QSpinBox(LabelingDialog);
        minPtsSpinBox->setObjectName(QString::fromUtf8("minPtsSpinBox"));
        minPtsSpinBox->setMinimumSize(QSize(0, 25));
        minPtsSpinBox->setMinimum(0);
        minPtsSpinBox->setMaximum(1000000);
        minPtsSpinBox->setSingleStep(10);
        minPtsSpinBox->setValue(10);

        formLayout->setWidget(1, QFormLayout::FieldRole, minPtsSpinBox);


        verticalLayout->addLayout(formLayout);

        randomColorsCheckBox = new QCheckBox(LabelingDialog);
        randomColorsCheckBox->setObjectName(QString::fromUtf8("randomColorsCheckBox"));

        verticalLayout->addWidget(randomColorsCheckBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(LabelingDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(LabelingDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), LabelingDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), LabelingDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(LabelingDialog);
    } // setupUi

    void retranslateUi(QDialog *LabelingDialog)
    {
        LabelingDialog->setWindowTitle(QCoreApplication::translate("LabelingDialog", "Connected Components", nullptr));
#if QT_CONFIG(tooltip)
        label->setToolTip(QCoreApplication::translate("LabelingDialog", "Grid subdivision level: the greater, the finest", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("LabelingDialog", "Octree Level", nullptr));
#if QT_CONFIG(tooltip)
        label_2->setToolTip(QCoreApplication::translate("LabelingDialog", "Minimum number of points per component", nullptr));
#endif // QT_CONFIG(tooltip)
        label_2->setText(QCoreApplication::translate("LabelingDialog", "Min. points per component", nullptr));
        randomColorsCheckBox->setText(QCoreApplication::translate("LabelingDialog", "random colors (warning: overwrites existing ones)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LabelingDialog: public Ui_LabelingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LABELINGDLG_H

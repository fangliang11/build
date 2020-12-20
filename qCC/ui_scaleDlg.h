/********************************************************************************
** Form generated from reading UI file 'scaleDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCALEDLG_H
#define UI_SCALEDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ScaleDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label1;
    QDoubleSpinBox *fxSpinBox;
    QSpacerItem *horizontalSpacer;
    QLabel *label2;
    QDoubleSpinBox *fySpinBox;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label3;
    QDoubleSpinBox *fzSpinBox;
    QCheckBox *sameForAllCheckBox;
    QCheckBox *keepInPlaceCheckBox;
    QCheckBox *rescaleGlobalShiftCheckBox;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ScaleDialog)
    {
        if (ScaleDialog->objectName().isEmpty())
            ScaleDialog->setObjectName(QString::fromUtf8("ScaleDialog"));
        ScaleDialog->resize(550, 150);
        verticalLayout = new QVBoxLayout(ScaleDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label1 = new QLabel(ScaleDialog);
        label1->setObjectName(QString::fromUtf8("label1"));

        horizontalLayout->addWidget(label1);

        fxSpinBox = new QDoubleSpinBox(ScaleDialog);
        fxSpinBox->setObjectName(QString::fromUtf8("fxSpinBox"));
        fxSpinBox->setDecimals(8);
        fxSpinBox->setMinimum(-1000000.000000000000000);
        fxSpinBox->setMaximum(1000000.000000000000000);

        horizontalLayout->addWidget(fxSpinBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label2 = new QLabel(ScaleDialog);
        label2->setObjectName(QString::fromUtf8("label2"));

        horizontalLayout->addWidget(label2);

        fySpinBox = new QDoubleSpinBox(ScaleDialog);
        fySpinBox->setObjectName(QString::fromUtf8("fySpinBox"));
        fySpinBox->setDecimals(8);
        fySpinBox->setMinimum(-1000000.000000000000000);
        fySpinBox->setMaximum(1000000.000000000000000);

        horizontalLayout->addWidget(fySpinBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        label3 = new QLabel(ScaleDialog);
        label3->setObjectName(QString::fromUtf8("label3"));

        horizontalLayout->addWidget(label3);

        fzSpinBox = new QDoubleSpinBox(ScaleDialog);
        fzSpinBox->setObjectName(QString::fromUtf8("fzSpinBox"));
        fzSpinBox->setDecimals(8);
        fzSpinBox->setMinimum(-1000000.000000000000000);
        fzSpinBox->setMaximum(1000000.000000000000000);

        horizontalLayout->addWidget(fzSpinBox);


        verticalLayout->addLayout(horizontalLayout);

        sameForAllCheckBox = new QCheckBox(ScaleDialog);
        sameForAllCheckBox->setObjectName(QString::fromUtf8("sameForAllCheckBox"));

        verticalLayout->addWidget(sameForAllCheckBox);

        keepInPlaceCheckBox = new QCheckBox(ScaleDialog);
        keepInPlaceCheckBox->setObjectName(QString::fromUtf8("keepInPlaceCheckBox"));

        verticalLayout->addWidget(keepInPlaceCheckBox);

        rescaleGlobalShiftCheckBox = new QCheckBox(ScaleDialog);
        rescaleGlobalShiftCheckBox->setObjectName(QString::fromUtf8("rescaleGlobalShiftCheckBox"));
        rescaleGlobalShiftCheckBox->setChecked(true);

        verticalLayout->addWidget(rescaleGlobalShiftCheckBox);

        verticalSpacer = new QSpacerItem(20, 3, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(ScaleDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ScaleDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ScaleDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ScaleDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ScaleDialog);
    } // setupUi

    void retranslateUi(QDialog *ScaleDialog)
    {
        ScaleDialog->setWindowTitle(QCoreApplication::translate("ScaleDialog", "Scale / multiply", nullptr));
        label1->setText(QCoreApplication::translate("ScaleDialog", "Scale(x)", nullptr));
        label2->setText(QCoreApplication::translate("ScaleDialog", "Scale(y)", nullptr));
        label3->setText(QCoreApplication::translate("ScaleDialog", "Scale(z)", nullptr));
#if QT_CONFIG(tooltip)
        sameForAllCheckBox->setToolTip(QCoreApplication::translate("ScaleDialog", "Same scale for all dimensions", nullptr));
#endif // QT_CONFIG(tooltip)
        sameForAllCheckBox->setText(QCoreApplication::translate("ScaleDialog", "Same scale for all dimensions", nullptr));
#if QT_CONFIG(tooltip)
        keepInPlaceCheckBox->setToolTip(QCoreApplication::translate("ScaleDialog", "Whether the cloud (center) should stay at the same place or not (i.e. coordinates are multiplied directly)", nullptr));
#endif // QT_CONFIG(tooltip)
        keepInPlaceCheckBox->setText(QCoreApplication::translate("ScaleDialog", "Keep entity in place", nullptr));
#if QT_CONFIG(tooltip)
        rescaleGlobalShiftCheckBox->setToolTip(QCoreApplication::translate("ScaleDialog", "To apply the same scale(s) to the 'Global Shift' as well", nullptr));
#endif // QT_CONFIG(tooltip)
        rescaleGlobalShiftCheckBox->setText(QCoreApplication::translate("ScaleDialog", "Rescale Global shift", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ScaleDialog: public Ui_ScaleDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCALEDLG_H

/********************************************************************************
** Form generated from reading UI file 'noiseFilterDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOISEFILTERDLG_H
#define UI_NOISEFILTERDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_NoiseFilterDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QFormLayout *formLayout_2;
    QRadioButton *knnRadioButton;
    QRadioButton *radiusRadioButton;
    QSpinBox *knnSpinBox;
    QDoubleSpinBox *radiusDoubleSpinBox;
    QGroupBox *groupBox_2;
    QFormLayout *formLayout;
    QRadioButton *relativeRadioButton;
    QRadioButton *absErrorRadioButton;
    QDoubleSpinBox *nSigmaDoubleSpinBox;
    QDoubleSpinBox *absErrorDoubleSpinBox;
    QCheckBox *removeIsolatedPointsCheckBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *NoiseFilterDialog)
    {
        if (NoiseFilterDialog->objectName().isEmpty())
            NoiseFilterDialog->setObjectName(QString::fromUtf8("NoiseFilterDialog"));
        NoiseFilterDialog->resize(302, 228);
        verticalLayout = new QVBoxLayout(NoiseFilterDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(NoiseFilterDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        formLayout_2 = new QFormLayout(groupBox);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        knnRadioButton = new QRadioButton(groupBox);
        knnRadioButton->setObjectName(QString::fromUtf8("knnRadioButton"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, knnRadioButton);

        radiusRadioButton = new QRadioButton(groupBox);
        radiusRadioButton->setObjectName(QString::fromUtf8("radiusRadioButton"));
        radiusRadioButton->setChecked(true);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, radiusRadioButton);

        knnSpinBox = new QSpinBox(groupBox);
        knnSpinBox->setObjectName(QString::fromUtf8("knnSpinBox"));
        knnSpinBox->setEnabled(false);
        knnSpinBox->setMinimum(3);
        knnSpinBox->setMaximum(1000000000);
        knnSpinBox->setValue(8);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, knnSpinBox);

        radiusDoubleSpinBox = new QDoubleSpinBox(groupBox);
        radiusDoubleSpinBox->setObjectName(QString::fromUtf8("radiusDoubleSpinBox"));
        radiusDoubleSpinBox->setDecimals(6);
        radiusDoubleSpinBox->setMaximum(1000000000.000000000000000);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, radiusDoubleSpinBox);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(NoiseFilterDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        formLayout = new QFormLayout(groupBox_2);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        relativeRadioButton = new QRadioButton(groupBox_2);
        relativeRadioButton->setObjectName(QString::fromUtf8("relativeRadioButton"));
        relativeRadioButton->setChecked(true);

        formLayout->setWidget(0, QFormLayout::LabelRole, relativeRadioButton);

        absErrorRadioButton = new QRadioButton(groupBox_2);
        absErrorRadioButton->setObjectName(QString::fromUtf8("absErrorRadioButton"));

        formLayout->setWidget(0, QFormLayout::FieldRole, absErrorRadioButton);

        nSigmaDoubleSpinBox = new QDoubleSpinBox(groupBox_2);
        nSigmaDoubleSpinBox->setObjectName(QString::fromUtf8("nSigmaDoubleSpinBox"));
        nSigmaDoubleSpinBox->setValue(1.000000000000000);

        formLayout->setWidget(1, QFormLayout::LabelRole, nSigmaDoubleSpinBox);

        absErrorDoubleSpinBox = new QDoubleSpinBox(groupBox_2);
        absErrorDoubleSpinBox->setObjectName(QString::fromUtf8("absErrorDoubleSpinBox"));
        absErrorDoubleSpinBox->setEnabled(false);
        absErrorDoubleSpinBox->setDecimals(6);
        absErrorDoubleSpinBox->setMaximum(1000000000.000000000000000);
        absErrorDoubleSpinBox->setValue(1.000000000000000);

        formLayout->setWidget(1, QFormLayout::FieldRole, absErrorDoubleSpinBox);


        verticalLayout->addWidget(groupBox_2);

        removeIsolatedPointsCheckBox = new QCheckBox(NoiseFilterDialog);
        removeIsolatedPointsCheckBox->setObjectName(QString::fromUtf8("removeIsolatedPointsCheckBox"));

        verticalLayout->addWidget(removeIsolatedPointsCheckBox);

        buttonBox = new QDialogButtonBox(NoiseFilterDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(NoiseFilterDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), NoiseFilterDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), NoiseFilterDialog, SLOT(reject()));
        QObject::connect(knnRadioButton, SIGNAL(toggled(bool)), knnSpinBox, SLOT(setEnabled(bool)));
        QObject::connect(radiusRadioButton, SIGNAL(toggled(bool)), radiusDoubleSpinBox, SLOT(setEnabled(bool)));
        QObject::connect(relativeRadioButton, SIGNAL(toggled(bool)), nSigmaDoubleSpinBox, SLOT(setEnabled(bool)));
        QObject::connect(absErrorRadioButton, SIGNAL(toggled(bool)), absErrorDoubleSpinBox, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(NoiseFilterDialog);
    } // setupUi

    void retranslateUi(QDialog *NoiseFilterDialog)
    {
        NoiseFilterDialog->setWindowTitle(QCoreApplication::translate("NoiseFilterDialog", "Filter noise", nullptr));
        groupBox->setTitle(QCoreApplication::translate("NoiseFilterDialog", "Neighbors", nullptr));
        knnRadioButton->setText(QCoreApplication::translate("NoiseFilterDialog", "Points (kNN)", nullptr));
        radiusRadioButton->setText(QCoreApplication::translate("NoiseFilterDialog", "Radius (Sphere)", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("NoiseFilterDialog", "Max error", nullptr));
        relativeRadioButton->setText(QCoreApplication::translate("NoiseFilterDialog", "Relative", nullptr));
        absErrorRadioButton->setText(QCoreApplication::translate("NoiseFilterDialog", "Absolute", nullptr));
        removeIsolatedPointsCheckBox->setText(QCoreApplication::translate("NoiseFilterDialog", "Remove isolated points", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NoiseFilterDialog: public Ui_NoiseFilterDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOISEFILTERDLG_H

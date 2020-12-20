/********************************************************************************
** Form generated from reading UI file 'dipDirTransformationDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIPDIRTRANSFORMATIONDLG_H
#define UI_DIPDIRTRANSFORMATIONDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DipDirTransformationDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QDoubleSpinBox *dipDoubleSpinBox;
    QLabel *label_2;
    QDoubleSpinBox *dipDirDoubleSpinBox;
    QCheckBox *rotateAboutCenterCheckBox;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DipDirTransformationDialog)
    {
        if (DipDirTransformationDialog->objectName().isEmpty())
            DipDirTransformationDialog->setObjectName(QString::fromUtf8("DipDirTransformationDialog"));
        DipDirTransformationDialog->resize(220, 140);
        verticalLayout = new QVBoxLayout(DipDirTransformationDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(DipDirTransformationDialog);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        dipDoubleSpinBox = new QDoubleSpinBox(DipDirTransformationDialog);
        dipDoubleSpinBox->setObjectName(QString::fromUtf8("dipDoubleSpinBox"));
        dipDoubleSpinBox->setDecimals(3);
        dipDoubleSpinBox->setMaximum(90.000000000000000);

        formLayout->setWidget(0, QFormLayout::FieldRole, dipDoubleSpinBox);

        label_2 = new QLabel(DipDirTransformationDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        dipDirDoubleSpinBox = new QDoubleSpinBox(DipDirTransformationDialog);
        dipDirDoubleSpinBox->setObjectName(QString::fromUtf8("dipDirDoubleSpinBox"));
        dipDirDoubleSpinBox->setDecimals(3);
        dipDirDoubleSpinBox->setMaximum(360.000000000000000);

        formLayout->setWidget(1, QFormLayout::FieldRole, dipDirDoubleSpinBox);


        verticalLayout->addLayout(formLayout);

        rotateAboutCenterCheckBox = new QCheckBox(DipDirTransformationDialog);
        rotateAboutCenterCheckBox->setObjectName(QString::fromUtf8("rotateAboutCenterCheckBox"));

        verticalLayout->addWidget(rotateAboutCenterCheckBox);

        verticalSpacer = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(DipDirTransformationDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(DipDirTransformationDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), DipDirTransformationDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DipDirTransformationDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(DipDirTransformationDialog);
    } // setupUi

    void retranslateUi(QDialog *DipDirTransformationDialog)
    {
        DipDirTransformationDialog->setWindowTitle(QCoreApplication::translate("DipDirTransformationDialog", "Dip / dip dir. transformation", nullptr));
        label->setText(QCoreApplication::translate("DipDirTransformationDialog", "Dip", nullptr));
        dipDoubleSpinBox->setSuffix(QCoreApplication::translate("DipDirTransformationDialog", " deg.", nullptr));
        label_2->setText(QCoreApplication::translate("DipDirTransformationDialog", "Dip direction", nullptr));
        dipDirDoubleSpinBox->setSuffix(QCoreApplication::translate("DipDirTransformationDialog", " deg.", nullptr));
        rotateAboutCenterCheckBox->setText(QCoreApplication::translate("DipDirTransformationDialog", "rotate about selection center", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DipDirTransformationDialog: public Ui_DipDirTransformationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIPDIRTRANSFORMATIONDLG_H

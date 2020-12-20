/********************************************************************************
** Form generated from reading UI file 'smoothPolylineDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SMOOTHPOLYLINEDLG_H
#define UI_SMOOTHPOLYLINEDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_SmoothPolylineDialog
{
public:
    QFormLayout *formLayout;
    QLabel *label;
    QDoubleSpinBox *ratioDoubleSpinBox;
    QLabel *label_2;
    QSpinBox *iterationSpinBox;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *SmoothPolylineDialog)
    {
        if (SmoothPolylineDialog->objectName().isEmpty())
            SmoothPolylineDialog->setObjectName(QString::fromUtf8("SmoothPolylineDialog"));
        SmoothPolylineDialog->resize(300, 150);
        formLayout = new QFormLayout(SmoothPolylineDialog);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(SmoothPolylineDialog);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        ratioDoubleSpinBox = new QDoubleSpinBox(SmoothPolylineDialog);
        ratioDoubleSpinBox->setObjectName(QString::fromUtf8("ratioDoubleSpinBox"));
        ratioDoubleSpinBox->setMinimum(0.010000000000000);
        ratioDoubleSpinBox->setMaximum(0.490000000000000);
        ratioDoubleSpinBox->setSingleStep(0.010000000000000);
        ratioDoubleSpinBox->setValue(0.250000000000000);

        formLayout->setWidget(0, QFormLayout::FieldRole, ratioDoubleSpinBox);

        label_2 = new QLabel(SmoothPolylineDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        iterationSpinBox = new QSpinBox(SmoothPolylineDialog);
        iterationSpinBox->setObjectName(QString::fromUtf8("iterationSpinBox"));
        iterationSpinBox->setMinimum(1);
        iterationSpinBox->setMaximum(10);
        iterationSpinBox->setValue(5);

        formLayout->setWidget(1, QFormLayout::FieldRole, iterationSpinBox);

        buttonBox = new QDialogButtonBox(SmoothPolylineDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        formLayout->setWidget(3, QFormLayout::SpanningRole, buttonBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(2, QFormLayout::FieldRole, verticalSpacer);


        retranslateUi(SmoothPolylineDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SmoothPolylineDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SmoothPolylineDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(SmoothPolylineDialog);
    } // setupUi

    void retranslateUi(QDialog *SmoothPolylineDialog)
    {
        SmoothPolylineDialog->setWindowTitle(QCoreApplication::translate("SmoothPolylineDialog", "Smooth polyline (Chaikin)", nullptr));
        label->setText(QCoreApplication::translate("SmoothPolylineDialog", "Ratio (strength)", nullptr));
        label_2->setText(QCoreApplication::translate("SmoothPolylineDialog", "iterations", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SmoothPolylineDialog: public Ui_SmoothPolylineDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SMOOTHPOLYLINEDLG_H

/********************************************************************************
** Form generated from reading UI file 'orthoSectionGenerationDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORTHOSECTIONGENERATIONDLG_H
#define UI_ORTHOSECTIONGENERATIONDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_OrthoSectionGenerationDlg
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *pathLengthLineEdit;
    QLabel *label_4;
    QLineEdit *sectionCountLineEdit;
    QFormLayout *formLayout;
    QLabel *label_2;
    QDoubleSpinBox *stepDoubleSpinBox;
    QLabel *label_3;
    QDoubleSpinBox *widthDoubleSpinBox;
    QCheckBox *autoSaveAndRemoveCheckBox;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *OrthoSectionGenerationDlg)
    {
        if (OrthoSectionGenerationDlg->objectName().isEmpty())
            OrthoSectionGenerationDlg->setObjectName(QString::fromUtf8("OrthoSectionGenerationDlg"));
        OrthoSectionGenerationDlg->resize(350, 152);
        verticalLayout = new QVBoxLayout(OrthoSectionGenerationDlg);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(OrthoSectionGenerationDlg);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        pathLengthLineEdit = new QLineEdit(OrthoSectionGenerationDlg);
        pathLengthLineEdit->setObjectName(QString::fromUtf8("pathLengthLineEdit"));
        pathLengthLineEdit->setEnabled(false);
        pathLengthLineEdit->setReadOnly(true);

        horizontalLayout->addWidget(pathLengthLineEdit);

        label_4 = new QLabel(OrthoSectionGenerationDlg);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout->addWidget(label_4);

        sectionCountLineEdit = new QLineEdit(OrthoSectionGenerationDlg);
        sectionCountLineEdit->setObjectName(QString::fromUtf8("sectionCountLineEdit"));
        sectionCountLineEdit->setEnabled(false);
        sectionCountLineEdit->setReadOnly(true);

        horizontalLayout->addWidget(sectionCountLineEdit);


        verticalLayout->addLayout(horizontalLayout);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_2 = new QLabel(OrthoSectionGenerationDlg);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        stepDoubleSpinBox = new QDoubleSpinBox(OrthoSectionGenerationDlg);
        stepDoubleSpinBox->setObjectName(QString::fromUtf8("stepDoubleSpinBox"));
        stepDoubleSpinBox->setDecimals(6);
        stepDoubleSpinBox->setMinimum(0.000000000000000);
        stepDoubleSpinBox->setMaximum(1000000000.000000000000000);

        formLayout->setWidget(0, QFormLayout::FieldRole, stepDoubleSpinBox);

        label_3 = new QLabel(OrthoSectionGenerationDlg);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        widthDoubleSpinBox = new QDoubleSpinBox(OrthoSectionGenerationDlg);
        widthDoubleSpinBox->setObjectName(QString::fromUtf8("widthDoubleSpinBox"));
        widthDoubleSpinBox->setDecimals(6);
        widthDoubleSpinBox->setMinimum(0.000001000000000);
        widthDoubleSpinBox->setMaximum(1000000000.000000000000000);

        formLayout->setWidget(1, QFormLayout::FieldRole, widthDoubleSpinBox);


        verticalLayout->addLayout(formLayout);

        autoSaveAndRemoveCheckBox = new QCheckBox(OrthoSectionGenerationDlg);
        autoSaveAndRemoveCheckBox->setObjectName(QString::fromUtf8("autoSaveAndRemoveCheckBox"));
        autoSaveAndRemoveCheckBox->setChecked(true);

        verticalLayout->addWidget(autoSaveAndRemoveCheckBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(OrthoSectionGenerationDlg);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(OrthoSectionGenerationDlg);
        QObject::connect(buttonBox, SIGNAL(accepted()), OrthoSectionGenerationDlg, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), OrthoSectionGenerationDlg, SLOT(reject()));

        QMetaObject::connectSlotsByName(OrthoSectionGenerationDlg);
    } // setupUi

    void retranslateUi(QDialog *OrthoSectionGenerationDlg)
    {
        OrthoSectionGenerationDlg->setWindowTitle(QCoreApplication::translate("OrthoSectionGenerationDlg", "Orthogonal sections generation", nullptr));
#if QT_CONFIG(tooltip)
        label->setToolTip(QCoreApplication::translate("OrthoSectionGenerationDlg", "Selected path length", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("OrthoSectionGenerationDlg", "path length", nullptr));
        label_4->setText(QCoreApplication::translate("OrthoSectionGenerationDlg", "sections", nullptr));
#if QT_CONFIG(tooltip)
        sectionCountLineEdit->setToolTip(QCoreApplication::translate("OrthoSectionGenerationDlg", "Number of sections that will be generated (depends on the 'step' parameter)", nullptr));
#endif // QT_CONFIG(tooltip)
        label_2->setText(QCoreApplication::translate("OrthoSectionGenerationDlg", "step", nullptr));
#if QT_CONFIG(tooltip)
        stepDoubleSpinBox->setToolTip(QCoreApplication::translate("OrthoSectionGenerationDlg", "Section generation step", nullptr));
#endif // QT_CONFIG(tooltip)
        label_3->setText(QCoreApplication::translate("OrthoSectionGenerationDlg", "width", nullptr));
#if QT_CONFIG(tooltip)
        widthDoubleSpinBox->setToolTip(QCoreApplication::translate("OrthoSectionGenerationDlg", "Total width of each orthogonal section (centered on the path line)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        autoSaveAndRemoveCheckBox->setToolTip(QCoreApplication::translate("OrthoSectionGenerationDlg", "Automatically save then remove the generatrix polyline", nullptr));
#endif // QT_CONFIG(tooltip)
        autoSaveAndRemoveCheckBox->setText(QCoreApplication::translate("OrthoSectionGenerationDlg", "auto save and remove generatrix", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OrthoSectionGenerationDlg: public Ui_OrthoSectionGenerationDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORTHOSECTIONGENERATIONDLG_H

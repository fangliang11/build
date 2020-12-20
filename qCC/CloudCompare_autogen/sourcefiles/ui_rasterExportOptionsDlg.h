/********************************************************************************
** Form generated from reading UI file 'rasterExportOptionsDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RASTEREXPORTOPTIONSDLG_H
#define UI_RASTEREXPORTOPTIONSDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RasterExportOptionsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QLabel *dimensionsLabel;
    QSpacerItem *horizontalSpacer;
    QCheckBox *exportRGBCheckBox;
    QCheckBox *exportHeightsCheckBox;
    QCheckBox *exportActiveLayerCheckBox;
    QCheckBox *exportAllSFCheckBox;
    QCheckBox *exportDensityCheckBox;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *RasterExportOptionsDialog)
    {
        if (RasterExportOptionsDialog->objectName().isEmpty())
            RasterExportOptionsDialog->setObjectName(QString::fromUtf8("RasterExportOptionsDialog"));
        RasterExportOptionsDialog->resize(270, 219);
        verticalLayout = new QVBoxLayout(RasterExportOptionsDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        label = new QLabel(RasterExportOptionsDialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        dimensionsLabel = new QLabel(RasterExportOptionsDialog);
        dimensionsLabel->setObjectName(QString::fromUtf8("dimensionsLabel"));
        dimensionsLabel->setText(QString::fromUtf8("0 x 0"));

        horizontalLayout->addWidget(dimensionsLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        exportRGBCheckBox = new QCheckBox(RasterExportOptionsDialog);
        exportRGBCheckBox->setObjectName(QString::fromUtf8("exportRGBCheckBox"));

        verticalLayout->addWidget(exportRGBCheckBox);

        exportHeightsCheckBox = new QCheckBox(RasterExportOptionsDialog);
        exportHeightsCheckBox->setObjectName(QString::fromUtf8("exportHeightsCheckBox"));
        exportHeightsCheckBox->setChecked(true);

        verticalLayout->addWidget(exportHeightsCheckBox);

        exportActiveLayerCheckBox = new QCheckBox(RasterExportOptionsDialog);
        exportActiveLayerCheckBox->setObjectName(QString::fromUtf8("exportActiveLayerCheckBox"));

        verticalLayout->addWidget(exportActiveLayerCheckBox);

        exportAllSFCheckBox = new QCheckBox(RasterExportOptionsDialog);
        exportAllSFCheckBox->setObjectName(QString::fromUtf8("exportAllSFCheckBox"));

        verticalLayout->addWidget(exportAllSFCheckBox);

        exportDensityCheckBox = new QCheckBox(RasterExportOptionsDialog);
        exportDensityCheckBox->setObjectName(QString::fromUtf8("exportDensityCheckBox"));

        verticalLayout->addWidget(exportDensityCheckBox);

        verticalSpacer = new QSpacerItem(20, 4, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(RasterExportOptionsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(RasterExportOptionsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), RasterExportOptionsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), RasterExportOptionsDialog, SLOT(reject()));
        QObject::connect(exportAllSFCheckBox, SIGNAL(toggled(bool)), exportActiveLayerCheckBox, SLOT(setDisabled(bool)));

        QMetaObject::connectSlotsByName(RasterExportOptionsDialog);
    } // setupUi

    void retranslateUi(QDialog *RasterExportOptionsDialog)
    {
        RasterExportOptionsDialog->setWindowTitle(QCoreApplication::translate("RasterExportOptionsDialog", "Raster export options", nullptr));
        label->setText(QCoreApplication::translate("RasterExportOptionsDialog", "Raster dimensions:", nullptr));
        exportRGBCheckBox->setText(QCoreApplication::translate("RasterExportOptionsDialog", "Export RGB colors", nullptr));
        exportHeightsCheckBox->setText(QCoreApplication::translate("RasterExportOptionsDialog", "Export heights", nullptr));
        exportActiveLayerCheckBox->setText(QCoreApplication::translate("RasterExportOptionsDialog", "Export active layer", nullptr));
        exportAllSFCheckBox->setText(QCoreApplication::translate("RasterExportOptionsDialog", "Export all scalar fields", nullptr));
        exportDensityCheckBox->setText(QCoreApplication::translate("RasterExportOptionsDialog", "Export density (population per cell)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RasterExportOptionsDialog: public Ui_RasterExportOptionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RASTEREXPORTOPTIONSDLG_H

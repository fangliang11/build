/********************************************************************************
** Form generated from reading UI file 'heightGridGenerationDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HEIGHTGRIDGENERATIONDLG_H
#define UI_HEIGHTGRIDGENERATIONDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_HeightGridGenerationDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QDoubleSpinBox *gridStep;
    QToolButton *editGridToolButton;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *layout_2;
    QLabel *label;
    QComboBox *typeOfProjectionComboBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QComboBox *dimensionComboBox;
    QFrame *interpolateSFFrame;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *interpolateSFCheckBox;
    QComboBox *scalarFieldProjection;
    QGroupBox *emptyCellsFrame;
    QFormLayout *formLayout;
    QLabel *label_3;
    QComboBox *fillEmptyCells;
    QDoubleSpinBox *emptyValueDoubleSpinBox;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *generateCloudGroupBox;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *generateCountSFcheckBox;
    QCheckBox *resampleOriginalCloudCheckBox;
    QCheckBox *generateRasterCheckBox;
    QCheckBox *generateImageCheckBox;
    QCheckBox *generateASCIICheckBox;
    QSpacerItem *verticalSpacer_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *HeightGridGenerationDialog)
    {
        if (HeightGridGenerationDialog->objectName().isEmpty())
            HeightGridGenerationDialog->setObjectName(QString::fromUtf8("HeightGridGenerationDialog"));
        HeightGridGenerationDialog->resize(366, 604);
        HeightGridGenerationDialog->setAcceptDrops(true);
        HeightGridGenerationDialog->setSizeGripEnabled(false);
        verticalLayout_3 = new QVBoxLayout(HeightGridGenerationDialog);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBox = new QGroupBox(HeightGridGenerationDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout_4 = new QHBoxLayout(groupBox);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_4->addWidget(label_2);

        gridStep = new QDoubleSpinBox(groupBox);
        gridStep->setObjectName(QString::fromUtf8("gridStep"));
        gridStep->setDecimals(3);
        gridStep->setMinimum(0.001000000000000);
        gridStep->setMaximum(1000.000000000000000);
        gridStep->setSingleStep(0.001000000000000);
        gridStep->setValue(1.000000000000000);

        horizontalLayout_4->addWidget(gridStep);

        editGridToolButton = new QToolButton(groupBox);
        editGridToolButton->setObjectName(QString::fromUtf8("editGridToolButton"));

        horizontalLayout_4->addWidget(editGridToolButton);


        verticalLayout_3->addWidget(groupBox);

        groupBox_2 = new QGroupBox(HeightGridGenerationDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        layout_2 = new QHBoxLayout();
        layout_2->setObjectName(QString::fromUtf8("layout_2"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));

        layout_2->addWidget(label);

        typeOfProjectionComboBox = new QComboBox(groupBox_2);
        typeOfProjectionComboBox->addItem(QString());
        typeOfProjectionComboBox->addItem(QString());
        typeOfProjectionComboBox->addItem(QString());
        typeOfProjectionComboBox->setObjectName(QString::fromUtf8("typeOfProjectionComboBox"));

        layout_2->addWidget(typeOfProjectionComboBox);


        verticalLayout->addLayout(layout_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_2->addWidget(label_4);

        dimensionComboBox = new QComboBox(groupBox_2);
        dimensionComboBox->addItem(QString::fromUtf8("X"));
        dimensionComboBox->addItem(QString::fromUtf8("Y"));
        dimensionComboBox->addItem(QString::fromUtf8("Z"));
        dimensionComboBox->setObjectName(QString::fromUtf8("dimensionComboBox"));
        dimensionComboBox->setCurrentText(QString::fromUtf8("Z"));

        horizontalLayout_2->addWidget(dimensionComboBox);


        verticalLayout->addLayout(horizontalLayout_2);

        interpolateSFFrame = new QFrame(groupBox_2);
        interpolateSFFrame->setObjectName(QString::fromUtf8("interpolateSFFrame"));
        horizontalLayout_3 = new QHBoxLayout(interpolateSFFrame);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        interpolateSFCheckBox = new QCheckBox(interpolateSFFrame);
        interpolateSFCheckBox->setObjectName(QString::fromUtf8("interpolateSFCheckBox"));
        interpolateSFCheckBox->setChecked(true);

        horizontalLayout_3->addWidget(interpolateSFCheckBox);

        scalarFieldProjection = new QComboBox(interpolateSFFrame);
        scalarFieldProjection->addItem(QString());
        scalarFieldProjection->addItem(QString());
        scalarFieldProjection->addItem(QString());
        scalarFieldProjection->setObjectName(QString::fromUtf8("scalarFieldProjection"));

        horizontalLayout_3->addWidget(scalarFieldProjection);


        verticalLayout->addWidget(interpolateSFFrame);


        verticalLayout_3->addWidget(groupBox_2);

        emptyCellsFrame = new QGroupBox(HeightGridGenerationDialog);
        emptyCellsFrame->setObjectName(QString::fromUtf8("emptyCellsFrame"));
        formLayout = new QFormLayout(emptyCellsFrame);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_3 = new QLabel(emptyCellsFrame);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_3);

        fillEmptyCells = new QComboBox(emptyCellsFrame);
        fillEmptyCells->addItem(QString());
        fillEmptyCells->addItem(QString());
        fillEmptyCells->addItem(QString());
        fillEmptyCells->addItem(QString());
        fillEmptyCells->addItem(QString());
        fillEmptyCells->setObjectName(QString::fromUtf8("fillEmptyCells"));

        formLayout->setWidget(0, QFormLayout::FieldRole, fillEmptyCells);

        emptyValueDoubleSpinBox = new QDoubleSpinBox(emptyCellsFrame);
        emptyValueDoubleSpinBox->setObjectName(QString::fromUtf8("emptyValueDoubleSpinBox"));
        emptyValueDoubleSpinBox->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(emptyValueDoubleSpinBox->sizePolicy().hasHeightForWidth());
        emptyValueDoubleSpinBox->setSizePolicy(sizePolicy);
        emptyValueDoubleSpinBox->setDecimals(6);
        emptyValueDoubleSpinBox->setMinimum(-999999999.000000000000000);
        emptyValueDoubleSpinBox->setMaximum(999999999.000000000000000);
        emptyValueDoubleSpinBox->setValue(0.000000000000000);

        formLayout->setWidget(1, QFormLayout::FieldRole, emptyValueDoubleSpinBox);


        verticalLayout_3->addWidget(emptyCellsFrame);

        groupBox_3 = new QGroupBox(HeightGridGenerationDialog);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_2 = new QVBoxLayout(groupBox_3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        generateCloudGroupBox = new QGroupBox(groupBox_3);
        generateCloudGroupBox->setObjectName(QString::fromUtf8("generateCloudGroupBox"));
        generateCloudGroupBox->setCheckable(true);
        verticalLayout_4 = new QVBoxLayout(generateCloudGroupBox);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        generateCountSFcheckBox = new QCheckBox(generateCloudGroupBox);
        generateCountSFcheckBox->setObjectName(QString::fromUtf8("generateCountSFcheckBox"));

        verticalLayout_4->addWidget(generateCountSFcheckBox);

        resampleOriginalCloudCheckBox = new QCheckBox(generateCloudGroupBox);
        resampleOriginalCloudCheckBox->setObjectName(QString::fromUtf8("resampleOriginalCloudCheckBox"));
        resampleOriginalCloudCheckBox->setChecked(false);

        verticalLayout_4->addWidget(resampleOriginalCloudCheckBox);


        verticalLayout_2->addWidget(generateCloudGroupBox);

        generateRasterCheckBox = new QCheckBox(groupBox_3);
        generateRasterCheckBox->setObjectName(QString::fromUtf8("generateRasterCheckBox"));

        verticalLayout_2->addWidget(generateRasterCheckBox);

        generateImageCheckBox = new QCheckBox(groupBox_3);
        generateImageCheckBox->setObjectName(QString::fromUtf8("generateImageCheckBox"));

        verticalLayout_2->addWidget(generateImageCheckBox);

        generateASCIICheckBox = new QCheckBox(groupBox_3);
        generateASCIICheckBox->setObjectName(QString::fromUtf8("generateASCIICheckBox"));
        generateASCIICheckBox->setChecked(false);

        verticalLayout_2->addWidget(generateASCIICheckBox);


        verticalLayout_3->addWidget(groupBox_3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        buttonBox = new QDialogButtonBox(HeightGridGenerationDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_3->addWidget(buttonBox);


        retranslateUi(HeightGridGenerationDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), HeightGridGenerationDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), HeightGridGenerationDialog, SLOT(reject()));
        QObject::connect(interpolateSFCheckBox, SIGNAL(toggled(bool)), scalarFieldProjection, SLOT(setEnabled(bool)));

        typeOfProjectionComboBox->setCurrentIndex(1);
        dimensionComboBox->setCurrentIndex(2);
        scalarFieldProjection->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(HeightGridGenerationDialog);
    } // setupUi

    void retranslateUi(QDialog *HeightGridGenerationDialog)
    {
        HeightGridGenerationDialog->setWindowTitle(QCoreApplication::translate("HeightGridGenerationDialog", "Height grid generation", nullptr));
        groupBox->setTitle(QCoreApplication::translate("HeightGridGenerationDialog", "Grid", nullptr));
        label_2->setText(QCoreApplication::translate("HeightGridGenerationDialog", "step", nullptr));
#if QT_CONFIG(tooltip)
        gridStep->setToolTip(QCoreApplication::translate("HeightGridGenerationDialog", "size of step of the grid generated (in the same units as the coordinates of the point cloud)", nullptr));
#endif // QT_CONFIG(tooltip)
        editGridToolButton->setText(QCoreApplication::translate("HeightGridGenerationDialog", "Edit grid", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("HeightGridGenerationDialog", "Projection", nullptr));
        label->setText(QCoreApplication::translate("HeightGridGenerationDialog", "type", nullptr));
        typeOfProjectionComboBox->setItemText(0, QCoreApplication::translate("HeightGridGenerationDialog", "minimum height", nullptr));
        typeOfProjectionComboBox->setItemText(1, QCoreApplication::translate("HeightGridGenerationDialog", "average height", nullptr));
        typeOfProjectionComboBox->setItemText(2, QCoreApplication::translate("HeightGridGenerationDialog", "maximum height", nullptr));

#if QT_CONFIG(tooltip)
        typeOfProjectionComboBox->setToolTip(QCoreApplication::translate("HeightGridGenerationDialog", "choose the height (z coordinate) projected : maximum = highest point in the cell or average)", nullptr));
#endif // QT_CONFIG(tooltip)
        label_4->setText(QCoreApplication::translate("HeightGridGenerationDialog", "direction", nullptr));

        interpolateSFCheckBox->setText(QCoreApplication::translate("HeightGridGenerationDialog", "interpolate scalar field(s)", nullptr));
        scalarFieldProjection->setItemText(0, QCoreApplication::translate("HeightGridGenerationDialog", "minimum value", nullptr));
        scalarFieldProjection->setItemText(1, QCoreApplication::translate("HeightGridGenerationDialog", "average value", nullptr));
        scalarFieldProjection->setItemText(2, QCoreApplication::translate("HeightGridGenerationDialog", "maximum value", nullptr));

#if QT_CONFIG(tooltip)
        scalarFieldProjection->setToolTip(QCoreApplication::translate("HeightGridGenerationDialog", "choose the height (z coordinate) projected : maximum = highest point in the cell or average)", nullptr));
#endif // QT_CONFIG(tooltip)
        emptyCellsFrame->setTitle(QCoreApplication::translate("HeightGridGenerationDialog", "Empty cells", nullptr));
        label_3->setText(QCoreApplication::translate("HeightGridGenerationDialog", "Fill with", nullptr));
        fillEmptyCells->setItemText(0, QCoreApplication::translate("HeightGridGenerationDialog", "leave empty", nullptr));
        fillEmptyCells->setItemText(1, QCoreApplication::translate("HeightGridGenerationDialog", "minimum height", nullptr));
        fillEmptyCells->setItemText(2, QCoreApplication::translate("HeightGridGenerationDialog", "average height", nullptr));
        fillEmptyCells->setItemText(3, QCoreApplication::translate("HeightGridGenerationDialog", "maximum height", nullptr));
        fillEmptyCells->setItemText(4, QCoreApplication::translate("HeightGridGenerationDialog", "user specified value", nullptr));

#if QT_CONFIG(tooltip)
        fillEmptyCells->setToolTip(QCoreApplication::translate("HeightGridGenerationDialog", "choose the value to fill the cells in which no point is projected : minimum value over the whole point cloud or average value (over the whole cloud also)", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox_3->setTitle(QCoreApplication::translate("HeightGridGenerationDialog", "Generate", nullptr));
        generateCloudGroupBox->setTitle(QCoreApplication::translate("HeightGridGenerationDialog", "Grid as a point cloud", nullptr));
#if QT_CONFIG(tooltip)
        generateCountSFcheckBox->setToolTip(QCoreApplication::translate("HeightGridGenerationDialog", "Adds a scalar field with the grid density (= number of points falling in each cell)", nullptr));
#endif // QT_CONFIG(tooltip)
        generateCountSFcheckBox->setText(QCoreApplication::translate("HeightGridGenerationDialog", "save per-cell count as SF", nullptr));
#if QT_CONFIG(tooltip)
        resampleOriginalCloudCheckBox->setToolTip(QCoreApplication::translate("HeightGridGenerationDialog", "Keeps the nearest point in each cell instead of the cell center", nullptr));
#endif // QT_CONFIG(tooltip)
        resampleOriginalCloudCheckBox->setText(QCoreApplication::translate("HeightGridGenerationDialog", "resample original cloud", nullptr));
        generateRasterCheckBox->setText(QCoreApplication::translate("HeightGridGenerationDialog", "Grid as a raster (geotiff)", nullptr));
#if QT_CONFIG(tooltip)
        generateImageCheckBox->setToolTip(QCoreApplication::translate("HeightGridGenerationDialog", "image is automatically generated in the application directory", nullptr));
#endif // QT_CONFIG(tooltip)
        generateImageCheckBox->setText(QCoreApplication::translate("HeightGridGenerationDialog", "Grid as an image", nullptr));
#if QT_CONFIG(tooltip)
        generateASCIICheckBox->setToolTip(QCoreApplication::translate("HeightGridGenerationDialog", "file is automatically generated in the application directory", nullptr));
#endif // QT_CONFIG(tooltip)
        generateASCIICheckBox->setText(QCoreApplication::translate("HeightGridGenerationDialog", "Grid as a matrix (text file)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HeightGridGenerationDialog: public Ui_HeightGridGenerationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HEIGHTGRIDGENERATIONDLG_H

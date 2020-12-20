/********************************************************************************
** Form generated from reading UI file 'geomFeaturesDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GEOMFEATURESDLG_H
#define UI_GEOMFEATURESDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_GeomFeaturesDialog
{
public:
    QVBoxLayout *verticalLayout_7;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QDoubleSpinBox *radiusDoubleSpinBox;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *roughnessGroupBox;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *roughnessCheckBox;
    QGroupBox *curvatureGroupBox;
    QVBoxLayout *verticalLayout;
    QCheckBox *curvMeanCheckBox;
    QCheckBox *curvGaussCheckBox;
    QCheckBox *curvNCRCheckBox;
    QGroupBox *desnityGroupBox;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *densityKnnCheckBox;
    QCheckBox *densitySurfCheckBox;
    QCheckBox *densityVolCheckBox;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_8;
    QCheckBox *firstOrderMomentCheckBox;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *featureGroupBox;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *eigSumCheckBox;
    QCheckBox *eigOmnivarianceCheckBox;
    QCheckBox *eigenentropyCheckBox;
    QCheckBox *eigAnisotropyCheckBox;
    QCheckBox *eigPlanarityBox;
    QCheckBox *eigLinearityCheckBox;
    QCheckBox *eigPCA1CheckBox;
    QCheckBox *eigPCA2CheckBox;
    QCheckBox *eigSurfaceVarCheckBox;
    QCheckBox *eigSphericityCheckBox;
    QCheckBox *eigVerticalityCheckBox;
    QCheckBox *eigenvalue1CheckBox;
    QCheckBox *eigenvalue2CheckBox;
    QCheckBox *eigenvalue3CheckBox;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *GeomFeaturesDialog)
    {
        if (GeomFeaturesDialog->objectName().isEmpty())
            GeomFeaturesDialog->setObjectName(QString::fromUtf8("GeomFeaturesDialog"));
        GeomFeaturesDialog->resize(452, 700);
        verticalLayout_7 = new QVBoxLayout(GeomFeaturesDialog);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        frame = new QFrame(GeomFeaturesDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        horizontalLayout_2 = new QHBoxLayout(frame);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(101, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        radiusDoubleSpinBox = new QDoubleSpinBox(frame);
        radiusDoubleSpinBox->setObjectName(QString::fromUtf8("radiusDoubleSpinBox"));
        radiusDoubleSpinBox->setDecimals(6);
        radiusDoubleSpinBox->setMinimum(0.000001000000000);
        radiusDoubleSpinBox->setMaximum(1000000.000000000000000);
        radiusDoubleSpinBox->setValue(1.000000000000000);

        horizontalLayout_2->addWidget(radiusDoubleSpinBox);

        horizontalSpacer_2 = new QSpacerItem(101, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_7->addWidget(frame);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        roughnessGroupBox = new QGroupBox(GeomFeaturesDialog);
        roughnessGroupBox->setObjectName(QString::fromUtf8("roughnessGroupBox"));
        verticalLayout_4 = new QVBoxLayout(roughnessGroupBox);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        roughnessCheckBox = new QCheckBox(roughnessGroupBox);
        roughnessCheckBox->setObjectName(QString::fromUtf8("roughnessCheckBox"));

        verticalLayout_4->addWidget(roughnessCheckBox);


        verticalLayout_5->addWidget(roughnessGroupBox);

        curvatureGroupBox = new QGroupBox(GeomFeaturesDialog);
        curvatureGroupBox->setObjectName(QString::fromUtf8("curvatureGroupBox"));
        verticalLayout = new QVBoxLayout(curvatureGroupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        curvMeanCheckBox = new QCheckBox(curvatureGroupBox);
        curvMeanCheckBox->setObjectName(QString::fromUtf8("curvMeanCheckBox"));

        verticalLayout->addWidget(curvMeanCheckBox);

        curvGaussCheckBox = new QCheckBox(curvatureGroupBox);
        curvGaussCheckBox->setObjectName(QString::fromUtf8("curvGaussCheckBox"));

        verticalLayout->addWidget(curvGaussCheckBox);

        curvNCRCheckBox = new QCheckBox(curvatureGroupBox);
        curvNCRCheckBox->setObjectName(QString::fromUtf8("curvNCRCheckBox"));

        verticalLayout->addWidget(curvNCRCheckBox);


        verticalLayout_5->addWidget(curvatureGroupBox);

        desnityGroupBox = new QGroupBox(GeomFeaturesDialog);
        desnityGroupBox->setObjectName(QString::fromUtf8("desnityGroupBox"));
        verticalLayout_3 = new QVBoxLayout(desnityGroupBox);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        densityKnnCheckBox = new QCheckBox(desnityGroupBox);
        densityKnnCheckBox->setObjectName(QString::fromUtf8("densityKnnCheckBox"));

        verticalLayout_3->addWidget(densityKnnCheckBox);

        densitySurfCheckBox = new QCheckBox(desnityGroupBox);
        densitySurfCheckBox->setObjectName(QString::fromUtf8("densitySurfCheckBox"));

        verticalLayout_3->addWidget(densitySurfCheckBox);

        densityVolCheckBox = new QCheckBox(desnityGroupBox);
        densityVolCheckBox->setObjectName(QString::fromUtf8("densityVolCheckBox"));

        verticalLayout_3->addWidget(densityVolCheckBox);


        verticalLayout_5->addWidget(desnityGroupBox);

        groupBox_2 = new QGroupBox(GeomFeaturesDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_8 = new QVBoxLayout(groupBox_2);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        firstOrderMomentCheckBox = new QCheckBox(groupBox_2);
        firstOrderMomentCheckBox->setObjectName(QString::fromUtf8("firstOrderMomentCheckBox"));

        verticalLayout_8->addWidget(firstOrderMomentCheckBox);


        verticalLayout_5->addWidget(groupBox_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        featureGroupBox = new QGroupBox(GeomFeaturesDialog);
        featureGroupBox->setObjectName(QString::fromUtf8("featureGroupBox"));
        verticalLayout_2 = new QVBoxLayout(featureGroupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        eigSumCheckBox = new QCheckBox(featureGroupBox);
        eigSumCheckBox->setObjectName(QString::fromUtf8("eigSumCheckBox"));

        verticalLayout_2->addWidget(eigSumCheckBox);

        eigOmnivarianceCheckBox = new QCheckBox(featureGroupBox);
        eigOmnivarianceCheckBox->setObjectName(QString::fromUtf8("eigOmnivarianceCheckBox"));

        verticalLayout_2->addWidget(eigOmnivarianceCheckBox);

        eigenentropyCheckBox = new QCheckBox(featureGroupBox);
        eigenentropyCheckBox->setObjectName(QString::fromUtf8("eigenentropyCheckBox"));

        verticalLayout_2->addWidget(eigenentropyCheckBox);

        eigAnisotropyCheckBox = new QCheckBox(featureGroupBox);
        eigAnisotropyCheckBox->setObjectName(QString::fromUtf8("eigAnisotropyCheckBox"));

        verticalLayout_2->addWidget(eigAnisotropyCheckBox);

        eigPlanarityBox = new QCheckBox(featureGroupBox);
        eigPlanarityBox->setObjectName(QString::fromUtf8("eigPlanarityBox"));

        verticalLayout_2->addWidget(eigPlanarityBox);

        eigLinearityCheckBox = new QCheckBox(featureGroupBox);
        eigLinearityCheckBox->setObjectName(QString::fromUtf8("eigLinearityCheckBox"));

        verticalLayout_2->addWidget(eigLinearityCheckBox);

        eigPCA1CheckBox = new QCheckBox(featureGroupBox);
        eigPCA1CheckBox->setObjectName(QString::fromUtf8("eigPCA1CheckBox"));

        verticalLayout_2->addWidget(eigPCA1CheckBox);

        eigPCA2CheckBox = new QCheckBox(featureGroupBox);
        eigPCA2CheckBox->setObjectName(QString::fromUtf8("eigPCA2CheckBox"));

        verticalLayout_2->addWidget(eigPCA2CheckBox);

        eigSurfaceVarCheckBox = new QCheckBox(featureGroupBox);
        eigSurfaceVarCheckBox->setObjectName(QString::fromUtf8("eigSurfaceVarCheckBox"));

        verticalLayout_2->addWidget(eigSurfaceVarCheckBox);

        eigSphericityCheckBox = new QCheckBox(featureGroupBox);
        eigSphericityCheckBox->setObjectName(QString::fromUtf8("eigSphericityCheckBox"));

        verticalLayout_2->addWidget(eigSphericityCheckBox);

        eigVerticalityCheckBox = new QCheckBox(featureGroupBox);
        eigVerticalityCheckBox->setObjectName(QString::fromUtf8("eigVerticalityCheckBox"));

        verticalLayout_2->addWidget(eigVerticalityCheckBox);

        eigenvalue1CheckBox = new QCheckBox(featureGroupBox);
        eigenvalue1CheckBox->setObjectName(QString::fromUtf8("eigenvalue1CheckBox"));

        verticalLayout_2->addWidget(eigenvalue1CheckBox);

        eigenvalue2CheckBox = new QCheckBox(featureGroupBox);
        eigenvalue2CheckBox->setObjectName(QString::fromUtf8("eigenvalue2CheckBox"));

        verticalLayout_2->addWidget(eigenvalue2CheckBox);

        eigenvalue3CheckBox = new QCheckBox(featureGroupBox);
        eigenvalue3CheckBox->setObjectName(QString::fromUtf8("eigenvalue3CheckBox"));

        verticalLayout_2->addWidget(eigenvalue3CheckBox);


        verticalLayout_6->addWidget(featureGroupBox);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_2);


        horizontalLayout->addLayout(verticalLayout_6);


        verticalLayout_7->addLayout(horizontalLayout);

        verticalSpacer_3 = new QSpacerItem(20, 6, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_3);

        buttonBox = new QDialogButtonBox(GeomFeaturesDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok|QDialogButtonBox::Reset);

        verticalLayout_7->addWidget(buttonBox);


        retranslateUi(GeomFeaturesDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), GeomFeaturesDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), GeomFeaturesDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(GeomFeaturesDialog);
    } // setupUi

    void retranslateUi(QDialog *GeomFeaturesDialog)
    {
        GeomFeaturesDialog->setWindowTitle(QCoreApplication::translate("GeomFeaturesDialog", "Geometric features", nullptr));
        label->setText(QCoreApplication::translate("GeomFeaturesDialog", "Local neighborhood radius", nullptr));
        roughnessGroupBox->setTitle(QCoreApplication::translate("GeomFeaturesDialog", "Roughness", nullptr));
        roughnessCheckBox->setText(QCoreApplication::translate("GeomFeaturesDialog", "Roughness", nullptr));
        curvatureGroupBox->setTitle(QCoreApplication::translate("GeomFeaturesDialog", "Curvature", nullptr));
#if QT_CONFIG(tooltip)
        curvMeanCheckBox->setToolTip(QCoreApplication::translate("GeomFeaturesDialog", "Mean curvature (unsigned)", nullptr));
#endif // QT_CONFIG(tooltip)
        curvMeanCheckBox->setText(QCoreApplication::translate("GeomFeaturesDialog", "Mean", nullptr));
#if QT_CONFIG(tooltip)
        curvGaussCheckBox->setToolTip(QCoreApplication::translate("GeomFeaturesDialog", "Gaussian curvature (unsigned)", nullptr));
#endif // QT_CONFIG(tooltip)
        curvGaussCheckBox->setText(QCoreApplication::translate("GeomFeaturesDialog", "Gaussian", nullptr));
#if QT_CONFIG(tooltip)
        curvNCRCheckBox->setToolTip(QCoreApplication::translate("GeomFeaturesDialog", "'Speed' of orientation change", nullptr));
#endif // QT_CONFIG(tooltip)
        curvNCRCheckBox->setText(QCoreApplication::translate("GeomFeaturesDialog", "Normal change rate", nullptr));
        desnityGroupBox->setTitle(QCoreApplication::translate("GeomFeaturesDialog", "Density", nullptr));
#if QT_CONFIG(tooltip)
        densityKnnCheckBox->setToolTip(QCoreApplication::translate("GeomFeaturesDialog", "Number of neighbors", nullptr));
#endif // QT_CONFIG(tooltip)
        densityKnnCheckBox->setText(QCoreApplication::translate("GeomFeaturesDialog", "Number of neighbors", nullptr));
#if QT_CONFIG(tooltip)
        densitySurfCheckBox->setToolTip(QCoreApplication::translate("GeomFeaturesDialog", "Number of neighbors / neighborhood area", nullptr));
#endif // QT_CONFIG(tooltip)
        densitySurfCheckBox->setText(QCoreApplication::translate("GeomFeaturesDialog", "Surface density", nullptr));
#if QT_CONFIG(tooltip)
        densityVolCheckBox->setToolTip(QCoreApplication::translate("GeomFeaturesDialog", "Number of neighbors / neighborhood volume", nullptr));
#endif // QT_CONFIG(tooltip)
        densityVolCheckBox->setText(QCoreApplication::translate("GeomFeaturesDialog", "Volume density", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("GeomFeaturesDialog", "Moment", nullptr));
        firstOrderMomentCheckBox->setText(QCoreApplication::translate("GeomFeaturesDialog", "1st order moment", nullptr));
#if QT_CONFIG(tooltip)
        featureGroupBox->setToolTip(QCoreApplication::translate("GeomFeaturesDialog", "Geometric features (based on local eigenvalues: (L1, L2, L3))", nullptr));
#endif // QT_CONFIG(tooltip)
        featureGroupBox->setTitle(QCoreApplication::translate("GeomFeaturesDialog", "Features", nullptr));
#if QT_CONFIG(tooltip)
        eigSumCheckBox->setToolTip(QCoreApplication::translate("GeomFeaturesDialog", "L1 + L2 + L3", nullptr));
#endif // QT_CONFIG(tooltip)
        eigSumCheckBox->setText(QCoreApplication::translate("GeomFeaturesDialog", "Sum of eigenvalues", nullptr));
#if QT_CONFIG(tooltip)
        eigOmnivarianceCheckBox->setToolTip(QCoreApplication::translate("GeomFeaturesDialog", "(L1 * L2 * L3)^(1/3)", nullptr));
#endif // QT_CONFIG(tooltip)
        eigOmnivarianceCheckBox->setText(QCoreApplication::translate("GeomFeaturesDialog", "Ominvariance", nullptr));
#if QT_CONFIG(tooltip)
        eigenentropyCheckBox->setToolTip(QCoreApplication::translate("GeomFeaturesDialog", "-( L1*ln(L1) + L2*ln(L2) + L3*ln(L3) )", nullptr));
#endif // QT_CONFIG(tooltip)
        eigenentropyCheckBox->setText(QCoreApplication::translate("GeomFeaturesDialog", "Eigenentropy", nullptr));
#if QT_CONFIG(tooltip)
        eigAnisotropyCheckBox->setToolTip(QCoreApplication::translate("GeomFeaturesDialog", "(L1 - L3)/L1", nullptr));
#endif // QT_CONFIG(tooltip)
        eigAnisotropyCheckBox->setText(QCoreApplication::translate("GeomFeaturesDialog", "Anisotropy", nullptr));
#if QT_CONFIG(tooltip)
        eigPlanarityBox->setToolTip(QCoreApplication::translate("GeomFeaturesDialog", "(L2 - L3)/L1", nullptr));
#endif // QT_CONFIG(tooltip)
        eigPlanarityBox->setText(QCoreApplication::translate("GeomFeaturesDialog", "Planarity", nullptr));
#if QT_CONFIG(tooltip)
        eigLinearityCheckBox->setToolTip(QCoreApplication::translate("GeomFeaturesDialog", "(L1 - L2)/L1", nullptr));
#endif // QT_CONFIG(tooltip)
        eigLinearityCheckBox->setText(QCoreApplication::translate("GeomFeaturesDialog", "Linearity", nullptr));
#if QT_CONFIG(tooltip)
        eigPCA1CheckBox->setToolTip(QCoreApplication::translate("GeomFeaturesDialog", "L1 / (L1 + L2 + L3)", nullptr));
#endif // QT_CONFIG(tooltip)
        eigPCA1CheckBox->setText(QCoreApplication::translate("GeomFeaturesDialog", "PCA1", nullptr));
#if QT_CONFIG(tooltip)
        eigPCA2CheckBox->setToolTip(QCoreApplication::translate("GeomFeaturesDialog", "L2 / (L1 + L2 + L3)", nullptr));
#endif // QT_CONFIG(tooltip)
        eigPCA2CheckBox->setText(QCoreApplication::translate("GeomFeaturesDialog", "PCA2", nullptr));
#if QT_CONFIG(tooltip)
        eigSurfaceVarCheckBox->setToolTip(QCoreApplication::translate("GeomFeaturesDialog", "L3 / (L1 + L2 + L3)", nullptr));
#endif // QT_CONFIG(tooltip)
        eigSurfaceVarCheckBox->setText(QCoreApplication::translate("GeomFeaturesDialog", "Surface variation", nullptr));
#if QT_CONFIG(tooltip)
        eigSphericityCheckBox->setToolTip(QCoreApplication::translate("GeomFeaturesDialog", "L3 / L1", nullptr));
#endif // QT_CONFIG(tooltip)
        eigSphericityCheckBox->setText(QCoreApplication::translate("GeomFeaturesDialog", "Sphericity", nullptr));
#if QT_CONFIG(tooltip)
        eigVerticalityCheckBox->setToolTip(QCoreApplication::translate("GeomFeaturesDialog", "1 - |Z.N|", nullptr));
#endif // QT_CONFIG(tooltip)
        eigVerticalityCheckBox->setText(QCoreApplication::translate("GeomFeaturesDialog", "Verticality", nullptr));
        eigenvalue1CheckBox->setText(QCoreApplication::translate("GeomFeaturesDialog", "1st eigenvalue", nullptr));
        eigenvalue2CheckBox->setText(QCoreApplication::translate("GeomFeaturesDialog", "2nd eigenvalue", nullptr));
        eigenvalue3CheckBox->setText(QCoreApplication::translate("GeomFeaturesDialog", "3rd eigenvalue", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GeomFeaturesDialog: public Ui_GeomFeaturesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GEOMFEATURESDLG_H

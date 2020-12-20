/********************************************************************************
** Form generated from reading UI file 'normalComputationDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NORMALCOMPUTATIONDLG_H
#define UI_NORMALCOMPUTATIONDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_NormalComputationDlg
{
public:
    QVBoxLayout *verticalLayout_3;
    QGroupBox *surfaceGroupBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QComboBox *localModelComboBox;
    QGroupBox *neighborsGroupBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *useScanGridCheckBox;
    QSpacerItem *horizontalSpacer;
    QFrame *gridAngleFrame;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QDoubleSpinBox *gridAngleDoubleSpinBox;
    QFrame *useScanGridsFrame;
    QHBoxLayout *horizontalLayout_9;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_2;
    QFrame *localRadiusFrame;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_2;
    QDoubleSpinBox *radiusDoubleSpinBox;
    QToolButton *autoRadiusToolButton;
    QGroupBox *normalsOrientGroupBox;
    QVBoxLayout *verticalLayout;
    QCheckBox *scanGridsOrientCheckBox;
    QCheckBox *sensorOrientCheckBox;
    QHBoxLayout *horizontalLayout_5;
    QRadioButton *preferredOrientRadioButton;
    QSpacerItem *horizontalSpacer_4;
    QComboBox *preferredOrientationComboBox;
    QHBoxLayout *horizontalLayout_6;
    QRadioButton *mstOrientRadioButton;
    QSpacerItem *horizontalSpacer_3;
    QSpinBox *mstNeighborsSpinBox;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *NormalComputationDlg)
    {
        if (NormalComputationDlg->objectName().isEmpty())
            NormalComputationDlg->setObjectName(QString::fromUtf8("NormalComputationDlg"));
        NormalComputationDlg->resize(482, 420);
        verticalLayout_3 = new QVBoxLayout(NormalComputationDlg);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        surfaceGroupBox = new QGroupBox(NormalComputationDlg);
        surfaceGroupBox->setObjectName(QString::fromUtf8("surfaceGroupBox"));
        horizontalLayout_2 = new QHBoxLayout(surfaceGroupBox);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(30, -1, -1, -1);
        label = new QLabel(surfaceGroupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        localModelComboBox = new QComboBox(surfaceGroupBox);
        localModelComboBox->addItem(QString());
        localModelComboBox->addItem(QString());
        localModelComboBox->addItem(QString());
        localModelComboBox->setObjectName(QString::fromUtf8("localModelComboBox"));

        horizontalLayout_2->addWidget(localModelComboBox);


        verticalLayout_3->addWidget(surfaceGroupBox);

        neighborsGroupBox = new QGroupBox(NormalComputationDlg);
        neighborsGroupBox->setObjectName(QString::fromUtf8("neighborsGroupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(neighborsGroupBox->sizePolicy().hasHeightForWidth());
        neighborsGroupBox->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(neighborsGroupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(30, -1, -1, -1);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        useScanGridCheckBox = new QCheckBox(neighborsGroupBox);
        useScanGridCheckBox->setObjectName(QString::fromUtf8("useScanGridCheckBox"));

        horizontalLayout_3->addWidget(useScanGridCheckBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        gridAngleFrame = new QFrame(neighborsGroupBox);
        gridAngleFrame->setObjectName(QString::fromUtf8("gridAngleFrame"));
        gridAngleFrame->setEnabled(true);
        horizontalLayout = new QHBoxLayout(gridAngleFrame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(gridAngleFrame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setEnabled(true);

        horizontalLayout->addWidget(label_3);

        gridAngleDoubleSpinBox = new QDoubleSpinBox(gridAngleFrame);
        gridAngleDoubleSpinBox->setObjectName(QString::fromUtf8("gridAngleDoubleSpinBox"));
        gridAngleDoubleSpinBox->setEnabled(true);
        gridAngleDoubleSpinBox->setMinimum(0.000000000000000);
        gridAngleDoubleSpinBox->setMaximum(90.000000000000000);
        gridAngleDoubleSpinBox->setSingleStep(0.100000000000000);
        gridAngleDoubleSpinBox->setValue(1.000000000000000);

        horizontalLayout->addWidget(gridAngleDoubleSpinBox);


        horizontalLayout_3->addWidget(gridAngleFrame);


        verticalLayout_2->addLayout(horizontalLayout_3);

        useScanGridsFrame = new QFrame(neighborsGroupBox);
        useScanGridsFrame->setObjectName(QString::fromUtf8("useScanGridsFrame"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(useScanGridsFrame->sizePolicy().hasHeightForWidth());
        useScanGridsFrame->setSizePolicy(sizePolicy1);
        horizontalLayout_9 = new QHBoxLayout(useScanGridsFrame);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);

        verticalLayout_2->addWidget(useScanGridsFrame);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_4 = new QLabel(neighborsGroupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_10->addWidget(label_4);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_2);

        localRadiusFrame = new QFrame(neighborsGroupBox);
        localRadiusFrame->setObjectName(QString::fromUtf8("localRadiusFrame"));
        horizontalLayout_8 = new QHBoxLayout(localRadiusFrame);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(localRadiusFrame);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_8->addWidget(label_2);

        radiusDoubleSpinBox = new QDoubleSpinBox(localRadiusFrame);
        radiusDoubleSpinBox->setObjectName(QString::fromUtf8("radiusDoubleSpinBox"));
        radiusDoubleSpinBox->setDecimals(6);
        radiusDoubleSpinBox->setMinimum(0.000001000000000);
        radiusDoubleSpinBox->setMaximum(999999.989999999990687);
        radiusDoubleSpinBox->setSingleStep(0.100000000000000);
        radiusDoubleSpinBox->setValue(1.000000000000000);

        horizontalLayout_8->addWidget(radiusDoubleSpinBox);

        autoRadiusToolButton = new QToolButton(localRadiusFrame);
        autoRadiusToolButton->setObjectName(QString::fromUtf8("autoRadiusToolButton"));

        horizontalLayout_8->addWidget(autoRadiusToolButton);


        horizontalLayout_10->addWidget(localRadiusFrame);


        verticalLayout_2->addLayout(horizontalLayout_10);


        verticalLayout_3->addWidget(neighborsGroupBox);

        normalsOrientGroupBox = new QGroupBox(NormalComputationDlg);
        normalsOrientGroupBox->setObjectName(QString::fromUtf8("normalsOrientGroupBox"));
        sizePolicy.setHeightForWidth(normalsOrientGroupBox->sizePolicy().hasHeightForWidth());
        normalsOrientGroupBox->setSizePolicy(sizePolicy);
        normalsOrientGroupBox->setCheckable(true);
        verticalLayout = new QVBoxLayout(normalsOrientGroupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(30, -1, -1, -1);
        scanGridsOrientCheckBox = new QCheckBox(normalsOrientGroupBox);
        scanGridsOrientCheckBox->setObjectName(QString::fromUtf8("scanGridsOrientCheckBox"));

        verticalLayout->addWidget(scanGridsOrientCheckBox);

        sensorOrientCheckBox = new QCheckBox(normalsOrientGroupBox);
        sensorOrientCheckBox->setObjectName(QString::fromUtf8("sensorOrientCheckBox"));
        sensorOrientCheckBox->setAcceptDrops(true);

        verticalLayout->addWidget(sensorOrientCheckBox);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        preferredOrientRadioButton = new QRadioButton(normalsOrientGroupBox);
        preferredOrientRadioButton->setObjectName(QString::fromUtf8("preferredOrientRadioButton"));

        horizontalLayout_5->addWidget(preferredOrientRadioButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        preferredOrientationComboBox = new QComboBox(normalsOrientGroupBox);
        preferredOrientationComboBox->addItem(QString::fromUtf8("+X"));
        preferredOrientationComboBox->addItem(QString::fromUtf8("-X"));
        preferredOrientationComboBox->addItem(QString::fromUtf8("+Y"));
        preferredOrientationComboBox->addItem(QString::fromUtf8("-Y"));
        preferredOrientationComboBox->addItem(QString::fromUtf8("+Z"));
        preferredOrientationComboBox->addItem(QString::fromUtf8("-Z"));
        preferredOrientationComboBox->addItem(QString());
        preferredOrientationComboBox->addItem(QString());
        preferredOrientationComboBox->addItem(QString::fromUtf8("+ (0,0,0)"));
        preferredOrientationComboBox->addItem(QString::fromUtf8("- (0,0,0)"));
        preferredOrientationComboBox->addItem(QString());
        preferredOrientationComboBox->setObjectName(QString::fromUtf8("preferredOrientationComboBox"));
        preferredOrientationComboBox->setEnabled(false);
        preferredOrientationComboBox->setMaxVisibleItems(12);

        horizontalLayout_5->addWidget(preferredOrientationComboBox);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        mstOrientRadioButton = new QRadioButton(normalsOrientGroupBox);
        mstOrientRadioButton->setObjectName(QString::fromUtf8("mstOrientRadioButton"));
        mstOrientRadioButton->setChecked(true);

        horizontalLayout_6->addWidget(mstOrientRadioButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);

        mstNeighborsSpinBox = new QSpinBox(normalsOrientGroupBox);
        mstNeighborsSpinBox->setObjectName(QString::fromUtf8("mstNeighborsSpinBox"));
        mstNeighborsSpinBox->setEnabled(true);
        mstNeighborsSpinBox->setPrefix(QString::fromUtf8("knn = "));
        mstNeighborsSpinBox->setMinimum(1);

        horizontalLayout_6->addWidget(mstNeighborsSpinBox);


        verticalLayout->addLayout(horizontalLayout_6);


        verticalLayout_3->addWidget(normalsOrientGroupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(NormalComputationDlg);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_3->addWidget(buttonBox);

        buttonBox->raise();
        normalsOrientGroupBox->raise();
        surfaceGroupBox->raise();
        neighborsGroupBox->raise();

        retranslateUi(NormalComputationDlg);
        QObject::connect(buttonBox, SIGNAL(accepted()), NormalComputationDlg, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), NormalComputationDlg, SLOT(reject()));
        QObject::connect(preferredOrientRadioButton, SIGNAL(toggled(bool)), preferredOrientationComboBox, SLOT(setEnabled(bool)));
        QObject::connect(mstOrientRadioButton, SIGNAL(toggled(bool)), mstNeighborsSpinBox, SLOT(setEnabled(bool)));
        QObject::connect(useScanGridCheckBox, SIGNAL(toggled(bool)), gridAngleFrame, SLOT(setEnabled(bool)));

        localModelComboBox->setCurrentIndex(0);
        preferredOrientationComboBox->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(NormalComputationDlg);
    } // setupUi

    void retranslateUi(QDialog *NormalComputationDlg)
    {
        NormalComputationDlg->setWindowTitle(QCoreApplication::translate("NormalComputationDlg", "Compute normals", nullptr));
        surfaceGroupBox->setTitle(QCoreApplication::translate("NormalComputationDlg", "Surface approximation", nullptr));
        label->setText(QCoreApplication::translate("NormalComputationDlg", "Local surface model", nullptr));
        localModelComboBox->setItemText(0, QCoreApplication::translate("NormalComputationDlg", "Plane", nullptr));
        localModelComboBox->setItemText(1, QCoreApplication::translate("NormalComputationDlg", "Quadric", nullptr));
        localModelComboBox->setItemText(2, QCoreApplication::translate("NormalComputationDlg", "Triangulation", nullptr));

#if QT_CONFIG(tooltip)
        localModelComboBox->setToolTip(QCoreApplication::translate("NormalComputationDlg", "Local surface estimation model", nullptr));
#endif // QT_CONFIG(tooltip)
        neighborsGroupBox->setTitle(QCoreApplication::translate("NormalComputationDlg", "Neighbors", nullptr));
#if QT_CONFIG(tooltip)
        useScanGridCheckBox->setToolTip(QCoreApplication::translate("NormalComputationDlg", "Using scan grid(s) instead of the octree", nullptr));
#endif // QT_CONFIG(tooltip)
        useScanGridCheckBox->setText(QCoreApplication::translate("NormalComputationDlg", "use scan grid(s) whenever possible", nullptr));
#if QT_CONFIG(tooltip)
        label_3->setToolTip(QCoreApplication::translate("NormalComputationDlg", "min triangulation angle", nullptr));
#endif // QT_CONFIG(tooltip)
        label_3->setText(QCoreApplication::translate("NormalComputationDlg", "min angle", nullptr));
#if QT_CONFIG(tooltip)
        gridAngleDoubleSpinBox->setToolTip(QCoreApplication::translate("NormalComputationDlg", "Min angle of local triangles (in degrees)", nullptr));
#endif // QT_CONFIG(tooltip)
        label_4->setText(QCoreApplication::translate("NormalComputationDlg", "Octree", nullptr));
#if QT_CONFIG(tooltip)
        label_2->setToolTip(QCoreApplication::translate("NormalComputationDlg", "Radius of the sphere in which the neighbors will be extracted", nullptr));
#endif // QT_CONFIG(tooltip)
        label_2->setText(QCoreApplication::translate("NormalComputationDlg", "radius", nullptr));
#if QT_CONFIG(tooltip)
        radiusDoubleSpinBox->setToolTip(QCoreApplication::translate("NormalComputationDlg", "Radius of the sphere in which the neighbors will be extracted", nullptr));
#endif // QT_CONFIG(tooltip)
        autoRadiusToolButton->setText(QCoreApplication::translate("NormalComputationDlg", "Auto", nullptr));
        normalsOrientGroupBox->setTitle(QCoreApplication::translate("NormalComputationDlg", "Orientation", nullptr));
#if QT_CONFIG(tooltip)
        scanGridsOrientCheckBox->setToolTip(QCoreApplication::translate("NormalComputationDlg", "Use scan grid(s) (robust method)", nullptr));
#endif // QT_CONFIG(tooltip)
        scanGridsOrientCheckBox->setText(QCoreApplication::translate("NormalComputationDlg", "Use scan grid(s)  whenever possible", nullptr));
#if QT_CONFIG(tooltip)
        sensorOrientCheckBox->setToolTip(QCoreApplication::translate("NormalComputationDlg", "Use sensor position to orient normals (if both grid and sensor are selected, 'grid' has precedence over 'sensor')", nullptr));
#endif // QT_CONFIG(tooltip)
        sensorOrientCheckBox->setText(QCoreApplication::translate("NormalComputationDlg", "Use sensor(s) whenever possible", nullptr));
#if QT_CONFIG(tooltip)
        preferredOrientRadioButton->setToolTip(QCoreApplication::translate("NormalComputationDlg", "To give a hint on how to orient normals", nullptr));
#endif // QT_CONFIG(tooltip)
        preferredOrientRadioButton->setText(QCoreApplication::translate("NormalComputationDlg", "Use preferred orientation", nullptr));
        preferredOrientationComboBox->setItemText(6, QCoreApplication::translate("NormalComputationDlg", "+ Barycenter", nullptr));
        preferredOrientationComboBox->setItemText(7, QCoreApplication::translate("NormalComputationDlg", "- Barycenter", nullptr));
        preferredOrientationComboBox->setItemText(10, QCoreApplication::translate("NormalComputationDlg", "Use previous normal", nullptr));

#if QT_CONFIG(tooltip)
        mstOrientRadioButton->setToolTip(QCoreApplication::translate("NormalComputationDlg", "Generic 3D orientation algorithm", nullptr));
#endif // QT_CONFIG(tooltip)
        mstOrientRadioButton->setText(QCoreApplication::translate("NormalComputationDlg", "Use Minimum Spanning Tree", nullptr));
#if QT_CONFIG(tooltip)
        mstNeighborsSpinBox->setToolTip(QCoreApplication::translate("NormalComputationDlg", "Number of neighbors used to build the tree", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class NormalComputationDlg: public Ui_NormalComputationDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NORMALCOMPUTATIONDLG_H

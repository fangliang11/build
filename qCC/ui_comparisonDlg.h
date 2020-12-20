/********************************************************************************
** Form generated from reading UI file 'comparisonDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPARISONDLG_H
#define UI_COMPARISONDLG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ComparisonDialog
{
public:
    QVBoxLayout *verticalLayout_5;
    QFormLayout *formLayout_2;
    QLabel *label;
    QLineEdit *compName;
    QLabel *label_2;
    QLineEdit *refName;
    QTabWidget *preciseResultsTabWidget;
    QWidget *generalParamsTab;
    QVBoxLayout *verticalLayout_7;
    QFormLayout *formLayout;
    QLabel *label_5;
    QComboBox *octreeLevelComboBox;
    QCheckBox *maxDistCheckBox;
    QDoubleSpinBox *maxSearchDistSpinBox;
    QCheckBox *signedDistCheckBox;
    QCheckBox *flipNormalsCheckBox;
    QCheckBox *split3DCheckBox;
    QCheckBox *filterVisibilityCheckBox;
    QHBoxLayout *horizontalLayout;
    QCheckBox *multiThreadedCheckBox;
    QSpacerItem *horizontalSpacer;
    QFrame *threadCountFrame;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_6;
    QSpinBox *maxThreadCountSpinBox;
    QSpacerItem *verticalSpacer_2;
    QWidget *localModelingTab;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *hboxLayout;
    QLabel *label_3;
    QComboBox *localModelComboBox;
    QFrame *localModelParamsFrame;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *lmKNNRadioButton;
    QSpinBox *lmKNNSpinBox;
    QVBoxLayout *verticalLayout;
    QRadioButton *lmRadiusRadioButton;
    QDoubleSpinBox *lmRadiusDoubleSpinBox;
    QCheckBox *lmOptimizeCheckBox;
    QSpacerItem *verticalSpacer;
    QWidget *approxTab;
    QVBoxLayout *verticalLayout_9;
    QFrame *approxResultsInnerFrame;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_4;
    QTableWidget *approxStats;
    QHBoxLayout *hboxLayout1;
    QSpacerItem *spacerItem;
    QToolButton *histoButton;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *hboxLayout2;
    QSpacerItem *spacerItem1;
    QPushButton *computeButton;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *ComparisonDialog)
    {
        if (ComparisonDialog->objectName().isEmpty())
            ComparisonDialog->setObjectName(QString::fromUtf8("ComparisonDialog"));
        ComparisonDialog->resize(442, 458);
        verticalLayout_5 = new QVBoxLayout(ComparisonDialog);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label = new QLabel(ComparisonDialog);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label);

        compName = new QLineEdit(ComparisonDialog);
        compName->setObjectName(QString::fromUtf8("compName"));
        compName->setReadOnly(true);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, compName);

        label_2 = new QLabel(ComparisonDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_2);

        refName = new QLineEdit(ComparisonDialog);
        refName->setObjectName(QString::fromUtf8("refName"));
        refName->setReadOnly(true);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, refName);


        verticalLayout_5->addLayout(formLayout_2);

        preciseResultsTabWidget = new QTabWidget(ComparisonDialog);
        preciseResultsTabWidget->setObjectName(QString::fromUtf8("preciseResultsTabWidget"));
        generalParamsTab = new QWidget();
        generalParamsTab->setObjectName(QString::fromUtf8("generalParamsTab"));
        verticalLayout_7 = new QVBoxLayout(generalParamsTab);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_5 = new QLabel(generalParamsTab);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_5);

        octreeLevelComboBox = new QComboBox(generalParamsTab);
        octreeLevelComboBox->setObjectName(QString::fromUtf8("octreeLevelComboBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, octreeLevelComboBox);

        maxDistCheckBox = new QCheckBox(generalParamsTab);
        maxDistCheckBox->setObjectName(QString::fromUtf8("maxDistCheckBox"));

        formLayout->setWidget(1, QFormLayout::LabelRole, maxDistCheckBox);

        maxSearchDistSpinBox = new QDoubleSpinBox(generalParamsTab);
        maxSearchDistSpinBox->setObjectName(QString::fromUtf8("maxSearchDistSpinBox"));
        maxSearchDistSpinBox->setEnabled(false);
        maxSearchDistSpinBox->setDecimals(6);
        maxSearchDistSpinBox->setMaximum(1000000000.000000000000000);
        maxSearchDistSpinBox->setValue(1.000000000000000);

        formLayout->setWidget(1, QFormLayout::FieldRole, maxSearchDistSpinBox);

        signedDistCheckBox = new QCheckBox(generalParamsTab);
        signedDistCheckBox->setObjectName(QString::fromUtf8("signedDistCheckBox"));

        formLayout->setWidget(2, QFormLayout::LabelRole, signedDistCheckBox);

        flipNormalsCheckBox = new QCheckBox(generalParamsTab);
        flipNormalsCheckBox->setObjectName(QString::fromUtf8("flipNormalsCheckBox"));
        flipNormalsCheckBox->setEnabled(false);

        formLayout->setWidget(2, QFormLayout::FieldRole, flipNormalsCheckBox);


        verticalLayout_7->addLayout(formLayout);

        split3DCheckBox = new QCheckBox(generalParamsTab);
        split3DCheckBox->setObjectName(QString::fromUtf8("split3DCheckBox"));

        verticalLayout_7->addWidget(split3DCheckBox);

        filterVisibilityCheckBox = new QCheckBox(generalParamsTab);
        filterVisibilityCheckBox->setObjectName(QString::fromUtf8("filterVisibilityCheckBox"));

        verticalLayout_7->addWidget(filterVisibilityCheckBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        multiThreadedCheckBox = new QCheckBox(generalParamsTab);
        multiThreadedCheckBox->setObjectName(QString::fromUtf8("multiThreadedCheckBox"));
        multiThreadedCheckBox->setChecked(true);

        horizontalLayout->addWidget(multiThreadedCheckBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        threadCountFrame = new QFrame(generalParamsTab);
        threadCountFrame->setObjectName(QString::fromUtf8("threadCountFrame"));
        threadCountFrame->setFrameShape(QFrame::StyledPanel);
        threadCountFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_8 = new QHBoxLayout(threadCountFrame);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(threadCountFrame);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_8->addWidget(label_6);

        maxThreadCountSpinBox = new QSpinBox(threadCountFrame);
        maxThreadCountSpinBox->setObjectName(QString::fromUtf8("maxThreadCountSpinBox"));
        maxThreadCountSpinBox->setSuffix(QString::fromUtf8(" / 8"));

        horizontalLayout_8->addWidget(maxThreadCountSpinBox);


        horizontalLayout->addWidget(threadCountFrame);


        verticalLayout_7->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 87, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_2);

        preciseResultsTabWidget->addTab(generalParamsTab, QString());
        localModelingTab = new QWidget();
        localModelingTab->setObjectName(QString::fromUtf8("localModelingTab"));
        verticalLayout_3 = new QVBoxLayout(localModelingTab);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        label_3 = new QLabel(localModelingTab);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        hboxLayout->addWidget(label_3);

        localModelComboBox = new QComboBox(localModelingTab);
        localModelComboBox->setObjectName(QString::fromUtf8("localModelComboBox"));

        hboxLayout->addWidget(localModelComboBox);


        verticalLayout_3->addLayout(hboxLayout);

        localModelParamsFrame = new QFrame(localModelingTab);
        localModelParamsFrame->setObjectName(QString::fromUtf8("localModelParamsFrame"));
        localModelParamsFrame->setEnabled(false);
        verticalLayout_4 = new QVBoxLayout(localModelParamsFrame);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lmKNNRadioButton = new QRadioButton(localModelParamsFrame);
        lmKNNRadioButton->setObjectName(QString::fromUtf8("lmKNNRadioButton"));
        lmKNNRadioButton->setChecked(true);

        verticalLayout_2->addWidget(lmKNNRadioButton);

        lmKNNSpinBox = new QSpinBox(localModelParamsFrame);
        lmKNNSpinBox->setObjectName(QString::fromUtf8("lmKNNSpinBox"));
        lmKNNSpinBox->setMinimum(3);
        lmKNNSpinBox->setValue(6);

        verticalLayout_2->addWidget(lmKNNSpinBox);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lmRadiusRadioButton = new QRadioButton(localModelParamsFrame);
        lmRadiusRadioButton->setObjectName(QString::fromUtf8("lmRadiusRadioButton"));

        verticalLayout->addWidget(lmRadiusRadioButton);

        lmRadiusDoubleSpinBox = new QDoubleSpinBox(localModelParamsFrame);
        lmRadiusDoubleSpinBox->setObjectName(QString::fromUtf8("lmRadiusDoubleSpinBox"));
        lmRadiusDoubleSpinBox->setEnabled(false);
        lmRadiusDoubleSpinBox->setDecimals(6);
        lmRadiusDoubleSpinBox->setMaximum(1000000000.000000000000000);

        verticalLayout->addWidget(lmRadiusDoubleSpinBox);


        horizontalLayout_2->addLayout(verticalLayout);


        verticalLayout_4->addLayout(horizontalLayout_2);

        lmOptimizeCheckBox = new QCheckBox(localModelParamsFrame);
        lmOptimizeCheckBox->setObjectName(QString::fromUtf8("lmOptimizeCheckBox"));

        verticalLayout_4->addWidget(lmOptimizeCheckBox);


        verticalLayout_3->addWidget(localModelParamsFrame);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        preciseResultsTabWidget->addTab(localModelingTab, QString());
        approxTab = new QWidget();
        approxTab->setObjectName(QString::fromUtf8("approxTab"));
        verticalLayout_9 = new QVBoxLayout(approxTab);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        approxResultsInnerFrame = new QFrame(approxTab);
        approxResultsInnerFrame->setObjectName(QString::fromUtf8("approxResultsInnerFrame"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(approxResultsInnerFrame->sizePolicy().hasHeightForWidth());
        approxResultsInnerFrame->setSizePolicy(sizePolicy);
        approxResultsInnerFrame->setFrameShape(QFrame::StyledPanel);
        approxResultsInnerFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_8 = new QVBoxLayout(approxResultsInnerFrame);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(approxResultsInnerFrame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("color: red;"));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(label_4);

        approxStats = new QTableWidget(approxResultsInnerFrame);
        approxStats->setObjectName(QString::fromUtf8("approxStats"));
        approxStats->setMaximumSize(QSize(16777215, 150));

        verticalLayout_8->addWidget(approxStats);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem);

        histoButton = new QToolButton(approxResultsInnerFrame);
        histoButton->setObjectName(QString::fromUtf8("histoButton"));
        histoButton->setText(QString::fromUtf8("..."));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/CC/images/ccHistogram.png"), QSize(), QIcon::Normal, QIcon::Off);
        histoButton->setIcon(icon);

        hboxLayout1->addWidget(histoButton);


        verticalLayout_8->addLayout(hboxLayout1);


        verticalLayout_9->addWidget(approxResultsInnerFrame);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_3);

        preciseResultsTabWidget->addTab(approxTab, QString());

        verticalLayout_5->addWidget(preciseResultsTabWidget);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem1);

        computeButton = new QPushButton(ComparisonDialog);
        computeButton->setObjectName(QString::fromUtf8("computeButton"));
        computeButton->setStyleSheet(QString::fromUtf8("background-color:red; color: white;"));

        hboxLayout2->addWidget(computeButton);

        okButton = new QPushButton(ComparisonDialog);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        okButton->setEnabled(false);

        hboxLayout2->addWidget(okButton);

        cancelButton = new QPushButton(ComparisonDialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        hboxLayout2->addWidget(cancelButton);


        verticalLayout_5->addLayout(hboxLayout2);


        retranslateUi(ComparisonDialog);
        QObject::connect(maxDistCheckBox, SIGNAL(toggled(bool)), maxSearchDistSpinBox, SLOT(setEnabled(bool)));
        QObject::connect(lmKNNRadioButton, SIGNAL(toggled(bool)), lmKNNSpinBox, SLOT(setEnabled(bool)));
        QObject::connect(lmRadiusRadioButton, SIGNAL(toggled(bool)), lmRadiusDoubleSpinBox, SLOT(setEnabled(bool)));

        preciseResultsTabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ComparisonDialog);
    } // setupUi

    void retranslateUi(QDialog *ComparisonDialog)
    {
        ComparisonDialog->setWindowTitle(QCoreApplication::translate("ComparisonDialog", "Distance computation", nullptr));
        label->setText(QCoreApplication::translate("ComparisonDialog", "Compared", nullptr));
        label_2->setText(QCoreApplication::translate("ComparisonDialog", "Reference", nullptr));
#if QT_CONFIG(tooltip)
        label_5->setToolTip(QCoreApplication::translate("ComparisonDialog", "Level of subdivision used for computing the distances", nullptr));
#endif // QT_CONFIG(tooltip)
        label_5->setText(QCoreApplication::translate("ComparisonDialog", "Octree level", nullptr));
#if QT_CONFIG(tooltip)
        maxDistCheckBox->setToolTip(QCoreApplication::translate("ComparisonDialog", "Acceleration: distances above this limit won't be computed accurately", nullptr));
#endif // QT_CONFIG(tooltip)
        maxDistCheckBox->setText(QCoreApplication::translate("ComparisonDialog", "max. distance", nullptr));
#if QT_CONFIG(tooltip)
        maxSearchDistSpinBox->setToolTip(QCoreApplication::translate("ComparisonDialog", "Acceleration: distances above this limit won't be computed accurately", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        signedDistCheckBox->setToolTip(QCoreApplication::translate("ComparisonDialog", "compute signed distances (slower)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        signedDistCheckBox->setStatusTip(QCoreApplication::translate("ComparisonDialog", "compute signed distances (slower)", nullptr));
#endif // QT_CONFIG(statustip)
        signedDistCheckBox->setText(QCoreApplication::translate("ComparisonDialog", "signed distances", nullptr));
        flipNormalsCheckBox->setText(QCoreApplication::translate("ComparisonDialog", "flip normals", nullptr));
#if QT_CONFIG(tooltip)
        split3DCheckBox->setToolTip(QCoreApplication::translate("ComparisonDialog", "Generate 3 supplementary scalar fields with distances along each dimension", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        split3DCheckBox->setStatusTip(QCoreApplication::translate("ComparisonDialog", "Generate 3 supplementary scalar fields with distances along each dimension", nullptr));
#endif // QT_CONFIG(statustip)
        split3DCheckBox->setText(QCoreApplication::translate("ComparisonDialog", "split X,Y and Z components", nullptr));
#if QT_CONFIG(tooltip)
        filterVisibilityCheckBox->setToolTip(QCoreApplication::translate("ComparisonDialog", "Use the sensor associated to the reference cloud to ignore the points in the compared cloud\n"
"that could not have been seen (hidden/out of range/out of field of view).", nullptr));
#endif // QT_CONFIG(tooltip)
        filterVisibilityCheckBox->setText(QCoreApplication::translate("ComparisonDialog", "use reference sensor to filter hidden points", nullptr));
        multiThreadedCheckBox->setText(QCoreApplication::translate("ComparisonDialog", "multi-threaded", nullptr));
        label_6->setText(QCoreApplication::translate("ComparisonDialog", "max thread count", nullptr));
#if QT_CONFIG(tooltip)
        maxThreadCountSpinBox->setToolTip(QCoreApplication::translate("ComparisonDialog", "Maximum number of threads/cores to be used\n"
"(CC or your computer might not respond for a while if you use all available cores)", nullptr));
#endif // QT_CONFIG(tooltip)
        preciseResultsTabWidget->setTabText(preciseResultsTabWidget->indexOf(generalParamsTab), QCoreApplication::translate("ComparisonDialog", "General parameters", nullptr));
        label_3->setText(QCoreApplication::translate("ComparisonDialog", "Local model", nullptr));
        lmKNNRadioButton->setText(QCoreApplication::translate("ComparisonDialog", "Points (kNN)", nullptr));
        lmRadiusRadioButton->setText(QCoreApplication::translate("ComparisonDialog", "Radius (Sphere)", nullptr));
#if QT_CONFIG(tooltip)
        lmOptimizeCheckBox->setToolTip(QCoreApplication::translate("ComparisonDialog", "faster but more ... approximate", nullptr));
#endif // QT_CONFIG(tooltip)
        lmOptimizeCheckBox->setText(QCoreApplication::translate("ComparisonDialog", "use the same model for nearby points", nullptr));
        preciseResultsTabWidget->setTabText(preciseResultsTabWidget->indexOf(localModelingTab), QCoreApplication::translate("ComparisonDialog", "Local modeling", nullptr));
        label_4->setText(QCoreApplication::translate("ComparisonDialog", "Warning: approximate distances are only provided\n"
"to help advanced users setting the general parameters", nullptr));
        preciseResultsTabWidget->setTabText(preciseResultsTabWidget->indexOf(approxTab), QCoreApplication::translate("ComparisonDialog", "Approximate distances", nullptr));
        computeButton->setText(QCoreApplication::translate("ComparisonDialog", "Compute", nullptr));
        okButton->setText(QCoreApplication::translate("ComparisonDialog", "Ok", nullptr));
        cancelButton->setText(QCoreApplication::translate("ComparisonDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ComparisonDialog: public Ui_ComparisonDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPARISONDLG_H

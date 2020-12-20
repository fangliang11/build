/********************************************************************************
** Form generated from reading UI file 'clippingBoxRepeatDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIPPINGBOXREPEATDLG_H
#define UI_CLIPPINGBOXREPEATDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ClippingBoxRepeatDlg
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *repeatDimGroupBox;
    QHBoxLayout *horizontalLayout;
    QCheckBox *xRepeatCheckBox;
    QCheckBox *yRepeatCheckBox;
    QCheckBox *zRepeatCheckBox;
    QGroupBox *extractSliceEntitiesGroupBox;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *randomColorCheckBox;
    QGroupBox *extractEnvelopesGroupBox;
    QVBoxLayout *verticalLayout_3;
    QFormLayout *formLayout;
    QLabel *label_3;
    QComboBox *envelopeTypeComboBox;
    QLabel *label_2;
    QDoubleSpinBox *maxEnvelopeEdgeLengthDoubleSpinBox;
    QCheckBox *multiPassEnvelopeCheckBox;
    QCheckBox *envProjectPointsOnBestFitCheckBox;
    QCheckBox *splitEnvelopeCheckBox;
    QCheckBox *envDebugModeCheckBox;
    QGroupBox *extractLevelSetGroupBox;
    QFormLayout *formLayout_2;
    QLabel *label_4;
    QDoubleSpinBox *lsGridStepDoubleSpinBox;
    QLabel *label_11;
    QSpinBox *minLSVertexCountSpinBox;
    QGroupBox *otherOptionsGroupBox;
    QFormLayout *formLayout_3;
    QLabel *label;
    QDoubleSpinBox *gapDoubleSpinBox;
    QLabel *label_5;
    QComboBox *groupByTypeComboBox;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ClippingBoxRepeatDlg)
    {
        if (ClippingBoxRepeatDlg->objectName().isEmpty())
            ClippingBoxRepeatDlg->setObjectName(QString::fromUtf8("ClippingBoxRepeatDlg"));
        ClippingBoxRepeatDlg->resize(400, 550);
        verticalLayout = new QVBoxLayout(ClippingBoxRepeatDlg);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        repeatDimGroupBox = new QGroupBox(ClippingBoxRepeatDlg);
        repeatDimGroupBox->setObjectName(QString::fromUtf8("repeatDimGroupBox"));
        horizontalLayout = new QHBoxLayout(repeatDimGroupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        xRepeatCheckBox = new QCheckBox(repeatDimGroupBox);
        xRepeatCheckBox->setObjectName(QString::fromUtf8("xRepeatCheckBox"));
        xRepeatCheckBox->setStyleSheet(QString::fromUtf8("background-color: red;\n"
"color: white;"));
        xRepeatCheckBox->setText(QString::fromUtf8("X"));

        horizontalLayout->addWidget(xRepeatCheckBox);

        yRepeatCheckBox = new QCheckBox(repeatDimGroupBox);
        yRepeatCheckBox->setObjectName(QString::fromUtf8("yRepeatCheckBox"));
        yRepeatCheckBox->setStyleSheet(QString::fromUtf8("background-color: green;\n"
"color: white;"));
        yRepeatCheckBox->setText(QString::fromUtf8("Y"));

        horizontalLayout->addWidget(yRepeatCheckBox);

        zRepeatCheckBox = new QCheckBox(repeatDimGroupBox);
        zRepeatCheckBox->setObjectName(QString::fromUtf8("zRepeatCheckBox"));
        zRepeatCheckBox->setStyleSheet(QString::fromUtf8("background-color: blue;\n"
"color: white;"));
        zRepeatCheckBox->setText(QString::fromUtf8("Z"));
        zRepeatCheckBox->setChecked(true);

        horizontalLayout->addWidget(zRepeatCheckBox);


        verticalLayout->addWidget(repeatDimGroupBox);

        extractSliceEntitiesGroupBox = new QGroupBox(ClippingBoxRepeatDlg);
        extractSliceEntitiesGroupBox->setObjectName(QString::fromUtf8("extractSliceEntitiesGroupBox"));
        extractSliceEntitiesGroupBox->setMinimumSize(QSize(0, 30));
        extractSliceEntitiesGroupBox->setCheckable(true);
        verticalLayout_4 = new QVBoxLayout(extractSliceEntitiesGroupBox);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        randomColorCheckBox = new QCheckBox(extractSliceEntitiesGroupBox);
        randomColorCheckBox->setObjectName(QString::fromUtf8("randomColorCheckBox"));

        verticalLayout_4->addWidget(randomColorCheckBox);


        verticalLayout->addWidget(extractSliceEntitiesGroupBox);

        extractEnvelopesGroupBox = new QGroupBox(ClippingBoxRepeatDlg);
        extractEnvelopesGroupBox->setObjectName(QString::fromUtf8("extractEnvelopesGroupBox"));
        extractEnvelopesGroupBox->setCheckable(true);
        extractEnvelopesGroupBox->setChecked(false);
        verticalLayout_3 = new QVBoxLayout(extractEnvelopesGroupBox);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_3 = new QLabel(extractEnvelopesGroupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_3);

        envelopeTypeComboBox = new QComboBox(extractEnvelopesGroupBox);
        envelopeTypeComboBox->addItem(QString());
        envelopeTypeComboBox->addItem(QString());
        envelopeTypeComboBox->addItem(QString());
        envelopeTypeComboBox->setObjectName(QString::fromUtf8("envelopeTypeComboBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, envelopeTypeComboBox);

        label_2 = new QLabel(extractEnvelopesGroupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        maxEnvelopeEdgeLengthDoubleSpinBox = new QDoubleSpinBox(extractEnvelopesGroupBox);
        maxEnvelopeEdgeLengthDoubleSpinBox->setObjectName(QString::fromUtf8("maxEnvelopeEdgeLengthDoubleSpinBox"));
        maxEnvelopeEdgeLengthDoubleSpinBox->setDecimals(6);
        maxEnvelopeEdgeLengthDoubleSpinBox->setMaximum(1000000000.000000000000000);

        formLayout->setWidget(1, QFormLayout::FieldRole, maxEnvelopeEdgeLengthDoubleSpinBox);


        verticalLayout_3->addLayout(formLayout);

        multiPassEnvelopeCheckBox = new QCheckBox(extractEnvelopesGroupBox);
        multiPassEnvelopeCheckBox->setObjectName(QString::fromUtf8("multiPassEnvelopeCheckBox"));

        verticalLayout_3->addWidget(multiPassEnvelopeCheckBox);

        envProjectPointsOnBestFitCheckBox = new QCheckBox(extractEnvelopesGroupBox);
        envProjectPointsOnBestFitCheckBox->setObjectName(QString::fromUtf8("envProjectPointsOnBestFitCheckBox"));

        verticalLayout_3->addWidget(envProjectPointsOnBestFitCheckBox);

        splitEnvelopeCheckBox = new QCheckBox(extractEnvelopesGroupBox);
        splitEnvelopeCheckBox->setObjectName(QString::fromUtf8("splitEnvelopeCheckBox"));

        verticalLayout_3->addWidget(splitEnvelopeCheckBox);

        envDebugModeCheckBox = new QCheckBox(extractEnvelopesGroupBox);
        envDebugModeCheckBox->setObjectName(QString::fromUtf8("envDebugModeCheckBox"));

        verticalLayout_3->addWidget(envDebugModeCheckBox);


        verticalLayout->addWidget(extractEnvelopesGroupBox);

        extractLevelSetGroupBox = new QGroupBox(ClippingBoxRepeatDlg);
        extractLevelSetGroupBox->setObjectName(QString::fromUtf8("extractLevelSetGroupBox"));
        extractLevelSetGroupBox->setCheckable(true);
        extractLevelSetGroupBox->setChecked(false);
        formLayout_2 = new QFormLayout(extractLevelSetGroupBox);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_4 = new QLabel(extractLevelSetGroupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_4);

        lsGridStepDoubleSpinBox = new QDoubleSpinBox(extractLevelSetGroupBox);
        lsGridStepDoubleSpinBox->setObjectName(QString::fromUtf8("lsGridStepDoubleSpinBox"));
        lsGridStepDoubleSpinBox->setDecimals(6);
        lsGridStepDoubleSpinBox->setMinimum(0.000001000000000);
        lsGridStepDoubleSpinBox->setMaximum(100000.000000000000000);
        lsGridStepDoubleSpinBox->setValue(1.000000000000000);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, lsGridStepDoubleSpinBox);

        label_11 = new QLabel(extractLevelSetGroupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_11);

        minLSVertexCountSpinBox = new QSpinBox(extractLevelSetGroupBox);
        minLSVertexCountSpinBox->setObjectName(QString::fromUtf8("minLSVertexCountSpinBox"));
        minLSVertexCountSpinBox->setMinimum(3);
        minLSVertexCountSpinBox->setMaximum(10000000);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, minLSVertexCountSpinBox);


        verticalLayout->addWidget(extractLevelSetGroupBox);

        otherOptionsGroupBox = new QGroupBox(ClippingBoxRepeatDlg);
        otherOptionsGroupBox->setObjectName(QString::fromUtf8("otherOptionsGroupBox"));
        formLayout_3 = new QFormLayout(otherOptionsGroupBox);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        label = new QLabel(otherOptionsGroupBox);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label);

        gapDoubleSpinBox = new QDoubleSpinBox(otherOptionsGroupBox);
        gapDoubleSpinBox->setObjectName(QString::fromUtf8("gapDoubleSpinBox"));
        gapDoubleSpinBox->setDecimals(6);
        gapDoubleSpinBox->setMaximum(1000000000.000000000000000);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, gapDoubleSpinBox);

        label_5 = new QLabel(otherOptionsGroupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_5);

        groupByTypeComboBox = new QComboBox(otherOptionsGroupBox);
        groupByTypeComboBox->addItem(QString());
        groupByTypeComboBox->addItem(QString());
        groupByTypeComboBox->addItem(QString());
        groupByTypeComboBox->addItem(QString());
        groupByTypeComboBox->addItem(QString());
        groupByTypeComboBox->setObjectName(QString::fromUtf8("groupByTypeComboBox"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, groupByTypeComboBox);


        verticalLayout->addWidget(otherOptionsGroupBox);

        verticalSpacer = new QSpacerItem(20, 4, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(ClippingBoxRepeatDlg);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ClippingBoxRepeatDlg);
        QObject::connect(buttonBox, SIGNAL(accepted()), ClippingBoxRepeatDlg, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ClippingBoxRepeatDlg, SLOT(reject()));

        envelopeTypeComboBox->setCurrentIndex(2);
        groupByTypeComboBox->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(ClippingBoxRepeatDlg);
    } // setupUi

    void retranslateUi(QDialog *ClippingBoxRepeatDlg)
    {
        ClippingBoxRepeatDlg->setWindowTitle(QCoreApplication::translate("ClippingBoxRepeatDlg", "Repeat", nullptr));
#if QT_CONFIG(tooltip)
        repeatDimGroupBox->setToolTip(QCoreApplication::translate("ClippingBoxRepeatDlg", "The segmentation process will be repeated along the following dimensions (+/-)", nullptr));
#endif // QT_CONFIG(tooltip)
        repeatDimGroupBox->setTitle(QCoreApplication::translate("ClippingBoxRepeatDlg", "Repeat dimensions", nullptr));
        extractSliceEntitiesGroupBox->setTitle(QCoreApplication::translate("ClippingBoxRepeatDlg", "Extract slice cloud(s) or mesh(es)", nullptr));
#if QT_CONFIG(tooltip)
        randomColorCheckBox->setToolTip(QCoreApplication::translate("ClippingBoxRepeatDlg", "If checked, a random color will be assigned to each slice (warning: will overwrite any existing color!)", nullptr));
#endif // QT_CONFIG(tooltip)
        randomColorCheckBox->setText(QCoreApplication::translate("ClippingBoxRepeatDlg", "random colors per slice (will overwrite existing colors!)", nullptr));
#if QT_CONFIG(tooltip)
        extractEnvelopesGroupBox->setToolTip(QCoreApplication::translate("ClippingBoxRepeatDlg", "Check that option if you wish to extract the envelope of each slice", nullptr));
#endif // QT_CONFIG(tooltip)
        extractEnvelopesGroupBox->setTitle(QCoreApplication::translate("ClippingBoxRepeatDlg", "Extract envelope(s)", nullptr));
        label_3->setText(QCoreApplication::translate("ClippingBoxRepeatDlg", "Envelope type", nullptr));
        envelopeTypeComboBox->setItemText(0, QCoreApplication::translate("ClippingBoxRepeatDlg", "Lower", nullptr));
        envelopeTypeComboBox->setItemText(1, QCoreApplication::translate("ClippingBoxRepeatDlg", "Upper", nullptr));
        envelopeTypeComboBox->setItemText(2, QCoreApplication::translate("ClippingBoxRepeatDlg", "Full", nullptr));

#if QT_CONFIG(tooltip)
        envelopeTypeComboBox->setToolTip(QCoreApplication::translate("ClippingBoxRepeatDlg", "Section type (lower or upper part, or both)", nullptr));
#endif // QT_CONFIG(tooltip)
        label_2->setText(QCoreApplication::translate("ClippingBoxRepeatDlg", "Max edge length", nullptr));
#if QT_CONFIG(tooltip)
        maxEnvelopeEdgeLengthDoubleSpinBox->setToolTip(QCoreApplication::translate("ClippingBoxRepeatDlg", "Max edge length (if 0, generates a unique and closed contour = convex hull)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        multiPassEnvelopeCheckBox->setToolTip(QCoreApplication::translate("ClippingBoxRepeatDlg", "Multi-pass process where longer edges may be temporarily created to obtain a better fit... or a worst one ;)", nullptr));
#endif // QT_CONFIG(tooltip)
        multiPassEnvelopeCheckBox->setText(QCoreApplication::translate("ClippingBoxRepeatDlg", "multi-pass", nullptr));
#if QT_CONFIG(tooltip)
        envProjectPointsOnBestFitCheckBox->setToolTip(QCoreApplication::translate("ClippingBoxRepeatDlg", "Before extracting the contour, points can be projected along the repeat dimension (if only one is defined) or on the best fit plane", nullptr));
#endif // QT_CONFIG(tooltip)
        envProjectPointsOnBestFitCheckBox->setText(QCoreApplication::translate("ClippingBoxRepeatDlg", "project slice(s) points on their best fit plane", nullptr));
#if QT_CONFIG(tooltip)
        splitEnvelopeCheckBox->setToolTip(QCoreApplication::translate("ClippingBoxRepeatDlg", "split the generated contour(s) in smaller parts to avoid creating edges longer than the specified max edge length.", nullptr));
#endif // QT_CONFIG(tooltip)
        splitEnvelopeCheckBox->setText(QCoreApplication::translate("ClippingBoxRepeatDlg", "split envelope(s) on longer edges", nullptr));
#if QT_CONFIG(tooltip)
        envDebugModeCheckBox->setToolTip(QCoreApplication::translate("ClippingBoxRepeatDlg", "Display a dialog with step-by-step execution of the algorithm (debug mode - very slow)", nullptr));
#endif // QT_CONFIG(tooltip)
        envDebugModeCheckBox->setText(QCoreApplication::translate("ClippingBoxRepeatDlg", "visual debug mode", nullptr));
#if QT_CONFIG(tooltip)
        extractLevelSetGroupBox->setToolTip(QCoreApplication::translate("ClippingBoxRepeatDlg", "Extract the point contours (via a rasterization process)", nullptr));
#endif // QT_CONFIG(tooltip)
        extractLevelSetGroupBox->setTitle(QCoreApplication::translate("ClippingBoxRepeatDlg", "Extract contours", nullptr));
        label_4->setText(QCoreApplication::translate("ClippingBoxRepeatDlg", "Grid step", nullptr));
        label_11->setText(QCoreApplication::translate("ClippingBoxRepeatDlg", "Min. vertex count", nullptr));
#if QT_CONFIG(tooltip)
        minLSVertexCountSpinBox->setToolTip(QCoreApplication::translate("ClippingBoxRepeatDlg", "Min vertex count per iso-line (to ignore the smallest ones)", nullptr));
#endif // QT_CONFIG(tooltip)
        otherOptionsGroupBox->setTitle(QCoreApplication::translate("ClippingBoxRepeatDlg", "Other options", nullptr));
        label->setText(QCoreApplication::translate("ClippingBoxRepeatDlg", "Gap", nullptr));
#if QT_CONFIG(tooltip)
        gapDoubleSpinBox->setToolTip(QCoreApplication::translate("ClippingBoxRepeatDlg", "Gap between the slices", nullptr));
#endif // QT_CONFIG(tooltip)
        label_5->setText(QCoreApplication::translate("ClippingBoxRepeatDlg", "Group generated entities by", nullptr));
        groupByTypeComboBox->setItemText(0, QCoreApplication::translate("ClippingBoxRepeatDlg", "Type", nullptr));
        groupByTypeComboBox->setItemText(1, QCoreApplication::translate("ClippingBoxRepeatDlg", "Origin entity", nullptr));
        groupByTypeComboBox->setItemText(2, QCoreApplication::translate("ClippingBoxRepeatDlg", "Slice", nullptr));
        groupByTypeComboBox->setItemText(3, QCoreApplication::translate("ClippingBoxRepeatDlg", "Origin entity, then slice", nullptr));
        groupByTypeComboBox->setItemText(4, QCoreApplication::translate("ClippingBoxRepeatDlg", "Slice, then origin entity", nullptr));

    } // retranslateUi

};

namespace Ui {
    class ClippingBoxRepeatDlg: public Ui_ClippingBoxRepeatDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIPPINGBOXREPEATDLG_H

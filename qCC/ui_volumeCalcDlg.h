/********************************************************************************
** Form generated from reading UI file 'volumeCalcDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VOLUMECALCDLG_H
#define UI_VOLUMECALCDLG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VolumeCalcDialog
{
public:
    QHBoxLayout *horizontalLayout_3;
    QFrame *leftFrame;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groundGroupBox;
    QFormLayout *formLayout_2;
    QLabel *label_7;
    QComboBox *groundComboBox;
    QComboBox *fillGroundEmptyCellsComboBox;
    QLabel *label_10;
    QDoubleSpinBox *groundEmptyValueDoubleSpinBox;
    QFrame *swapButtonFrame;
    QHBoxLayout *horizontalLayout;
    QToolButton *swapToolButton;
    QGroupBox *ceilGroupBox;
    QFormLayout *formLayout_3;
    QLabel *label_3;
    QComboBox *ceilComboBox;
    QLabel *label_6;
    QComboBox *fillCeilEmptyCellsComboBox;
    QDoubleSpinBox *ceilEmptyValueDoubleSpinBox;
    QGroupBox *gridGroupBox;
    QVBoxLayout *verticalLayout_3;
    QWidget *gridParamsWidget;
    QFormLayout *formLayout_4;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_4;
    QDoubleSpinBox *gridStepDoubleSpinBox;
    QToolButton *editGridToolButton;
    QLabel *label_4;
    QLabel *gridWidthLabel;
    QLabel *label_9;
    QComboBox *projDimComboBox;
    QLabel *label_8;
    QComboBox *heightProjectionComboBox;
    QPushButton *updatePushButton;
    QGroupBox *resultGroupBox;
    QVBoxLayout *verticalLayout;
    QLabel *spareseWarningLabel;
    QPlainTextEdit *reportPlainTextEdit;
    QPushButton *clipboardPushButton;
    QPushButton *exportGridPushButton;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSpinBox *precisionSpinBox;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;
    QFrame *mapFrame;

    void setupUi(QDialog *VolumeCalcDialog)
    {
        if (VolumeCalcDialog->objectName().isEmpty())
            VolumeCalcDialog->setObjectName(QString::fromUtf8("VolumeCalcDialog"));
        VolumeCalcDialog->resize(1000, 887);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(VolumeCalcDialog->sizePolicy().hasHeightForWidth());
        VolumeCalcDialog->setSizePolicy(sizePolicy);
        horizontalLayout_3 = new QHBoxLayout(VolumeCalcDialog);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        leftFrame = new QFrame(VolumeCalcDialog);
        leftFrame->setObjectName(QString::fromUtf8("leftFrame"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(leftFrame->sizePolicy().hasHeightForWidth());
        leftFrame->setSizePolicy(sizePolicy1);
        leftFrame->setFrameShape(QFrame::StyledPanel);
        leftFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(leftFrame);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        groundGroupBox = new QGroupBox(leftFrame);
        groundGroupBox->setObjectName(QString::fromUtf8("groundGroupBox"));
        formLayout_2 = new QFormLayout(groundGroupBox);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_7 = new QLabel(groundGroupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_7);

        groundComboBox = new QComboBox(groundGroupBox);
        groundComboBox->setObjectName(QString::fromUtf8("groundComboBox"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, groundComboBox);

        fillGroundEmptyCellsComboBox = new QComboBox(groundGroupBox);
        fillGroundEmptyCellsComboBox->addItem(QString());
        fillGroundEmptyCellsComboBox->addItem(QString());
        fillGroundEmptyCellsComboBox->addItem(QString());
        fillGroundEmptyCellsComboBox->addItem(QString());
        fillGroundEmptyCellsComboBox->addItem(QString());
        fillGroundEmptyCellsComboBox->addItem(QString());
        fillGroundEmptyCellsComboBox->setObjectName(QString::fromUtf8("fillGroundEmptyCellsComboBox"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, fillGroundEmptyCellsComboBox);

        label_10 = new QLabel(groundGroupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_10);

        groundEmptyValueDoubleSpinBox = new QDoubleSpinBox(groundGroupBox);
        groundEmptyValueDoubleSpinBox->setObjectName(QString::fromUtf8("groundEmptyValueDoubleSpinBox"));
        groundEmptyValueDoubleSpinBox->setEnabled(false);
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groundEmptyValueDoubleSpinBox->sizePolicy().hasHeightForWidth());
        groundEmptyValueDoubleSpinBox->setSizePolicy(sizePolicy2);
        groundEmptyValueDoubleSpinBox->setDecimals(6);
        groundEmptyValueDoubleSpinBox->setMinimum(-999999999.000000000000000);
        groundEmptyValueDoubleSpinBox->setMaximum(999999999.000000000000000);
        groundEmptyValueDoubleSpinBox->setValue(0.000000000000000);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, groundEmptyValueDoubleSpinBox);


        verticalLayout_2->addWidget(groundGroupBox);

        swapButtonFrame = new QFrame(leftFrame);
        swapButtonFrame->setObjectName(QString::fromUtf8("swapButtonFrame"));
        swapButtonFrame->setFrameShape(QFrame::StyledPanel);
        swapButtonFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(swapButtonFrame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        swapToolButton = new QToolButton(swapButtonFrame);
        swapToolButton->setObjectName(QString::fromUtf8("swapToolButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/CC/images/ccSwapUpDown.png"), QSize(), QIcon::Normal, QIcon::Off);
        swapToolButton->setIcon(icon);
        swapToolButton->setIconSize(QSize(16, 16));

        horizontalLayout->addWidget(swapToolButton);


        verticalLayout_2->addWidget(swapButtonFrame);

        ceilGroupBox = new QGroupBox(leftFrame);
        ceilGroupBox->setObjectName(QString::fromUtf8("ceilGroupBox"));
        formLayout_3 = new QFormLayout(ceilGroupBox);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        label_3 = new QLabel(ceilGroupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_3);

        ceilComboBox = new QComboBox(ceilGroupBox);
        ceilComboBox->setObjectName(QString::fromUtf8("ceilComboBox"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, ceilComboBox);

        label_6 = new QLabel(ceilGroupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_6);

        fillCeilEmptyCellsComboBox = new QComboBox(ceilGroupBox);
        fillCeilEmptyCellsComboBox->addItem(QString());
        fillCeilEmptyCellsComboBox->addItem(QString());
        fillCeilEmptyCellsComboBox->addItem(QString());
        fillCeilEmptyCellsComboBox->addItem(QString());
        fillCeilEmptyCellsComboBox->addItem(QString());
        fillCeilEmptyCellsComboBox->addItem(QString());
        fillCeilEmptyCellsComboBox->setObjectName(QString::fromUtf8("fillCeilEmptyCellsComboBox"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, fillCeilEmptyCellsComboBox);

        ceilEmptyValueDoubleSpinBox = new QDoubleSpinBox(ceilGroupBox);
        ceilEmptyValueDoubleSpinBox->setObjectName(QString::fromUtf8("ceilEmptyValueDoubleSpinBox"));
        ceilEmptyValueDoubleSpinBox->setEnabled(false);
        sizePolicy2.setHeightForWidth(ceilEmptyValueDoubleSpinBox->sizePolicy().hasHeightForWidth());
        ceilEmptyValueDoubleSpinBox->setSizePolicy(sizePolicy2);
        ceilEmptyValueDoubleSpinBox->setDecimals(6);
        ceilEmptyValueDoubleSpinBox->setMinimum(-999999999.000000000000000);
        ceilEmptyValueDoubleSpinBox->setMaximum(999999999.000000000000000);
        ceilEmptyValueDoubleSpinBox->setValue(0.000000000000000);

        formLayout_3->setWidget(2, QFormLayout::FieldRole, ceilEmptyValueDoubleSpinBox);


        verticalLayout_2->addWidget(ceilGroupBox);

        gridGroupBox = new QGroupBox(leftFrame);
        gridGroupBox->setObjectName(QString::fromUtf8("gridGroupBox"));
        verticalLayout_3 = new QVBoxLayout(gridGroupBox);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        gridParamsWidget = new QWidget(gridGroupBox);
        gridParamsWidget->setObjectName(QString::fromUtf8("gridParamsWidget"));
        formLayout_4 = new QFormLayout(gridParamsWidget);
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        formLayout_4->setContentsMargins(2, 2, 2, 2);
        label_2 = new QLabel(gridParamsWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, -1, 2, -1);
        gridStepDoubleSpinBox = new QDoubleSpinBox(gridParamsWidget);
        gridStepDoubleSpinBox->setObjectName(QString::fromUtf8("gridStepDoubleSpinBox"));
        gridStepDoubleSpinBox->setDecimals(6);
        gridStepDoubleSpinBox->setMinimum(0.001000000000000);
        gridStepDoubleSpinBox->setMaximum(1000.000000000000000);
        gridStepDoubleSpinBox->setSingleStep(0.001000000000000);
        gridStepDoubleSpinBox->setValue(1.000000000000000);

        horizontalLayout_4->addWidget(gridStepDoubleSpinBox);

        editGridToolButton = new QToolButton(gridParamsWidget);
        editGridToolButton->setObjectName(QString::fromUtf8("editGridToolButton"));

        horizontalLayout_4->addWidget(editGridToolButton);


        formLayout_4->setLayout(0, QFormLayout::FieldRole, horizontalLayout_4);

        label_4 = new QLabel(gridParamsWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_4);

        gridWidthLabel = new QLabel(gridParamsWidget);
        gridWidthLabel->setObjectName(QString::fromUtf8("gridWidthLabel"));
        gridWidthLabel->setText(QString::fromUtf8("640 x 480"));

        formLayout_4->setWidget(1, QFormLayout::FieldRole, gridWidthLabel);

        label_9 = new QLabel(gridParamsWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout_4->setWidget(2, QFormLayout::LabelRole, label_9);

        projDimComboBox = new QComboBox(gridParamsWidget);
        projDimComboBox->addItem(QString::fromUtf8("X"));
        projDimComboBox->addItem(QString::fromUtf8("Y"));
        projDimComboBox->addItem(QString::fromUtf8("Z"));
        projDimComboBox->setObjectName(QString::fromUtf8("projDimComboBox"));

        formLayout_4->setWidget(2, QFormLayout::FieldRole, projDimComboBox);

        label_8 = new QLabel(gridParamsWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout_4->setWidget(3, QFormLayout::LabelRole, label_8);

        heightProjectionComboBox = new QComboBox(gridParamsWidget);
        heightProjectionComboBox->addItem(QString());
        heightProjectionComboBox->addItem(QString());
        heightProjectionComboBox->addItem(QString());
        heightProjectionComboBox->setObjectName(QString::fromUtf8("heightProjectionComboBox"));

        formLayout_4->setWidget(3, QFormLayout::FieldRole, heightProjectionComboBox);


        verticalLayout_3->addWidget(gridParamsWidget);

        updatePushButton = new QPushButton(gridGroupBox);
        updatePushButton->setObjectName(QString::fromUtf8("updatePushButton"));
        updatePushButton->setStyleSheet(QString::fromUtf8("color: white; background-color:red;"));

        verticalLayout_3->addWidget(updatePushButton);


        verticalLayout_2->addWidget(gridGroupBox);

        resultGroupBox = new QGroupBox(leftFrame);
        resultGroupBox->setObjectName(QString::fromUtf8("resultGroupBox"));
        verticalLayout = new QVBoxLayout(resultGroupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        spareseWarningLabel = new QLabel(resultGroupBox);
        spareseWarningLabel->setObjectName(QString::fromUtf8("spareseWarningLabel"));
        spareseWarningLabel->setStyleSheet(QString::fromUtf8("color:red;"));
        spareseWarningLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(spareseWarningLabel);

        reportPlainTextEdit = new QPlainTextEdit(resultGroupBox);
        reportPlainTextEdit->setObjectName(QString::fromUtf8("reportPlainTextEdit"));
        reportPlainTextEdit->setReadOnly(true);

        verticalLayout->addWidget(reportPlainTextEdit);

        clipboardPushButton = new QPushButton(resultGroupBox);
        clipboardPushButton->setObjectName(QString::fromUtf8("clipboardPushButton"));
        clipboardPushButton->setEnabled(false);

        verticalLayout->addWidget(clipboardPushButton);

        exportGridPushButton = new QPushButton(resultGroupBox);
        exportGridPushButton->setObjectName(QString::fromUtf8("exportGridPushButton"));
        exportGridPushButton->setEnabled(false);

        verticalLayout->addWidget(exportGridPushButton);

        widget = new QWidget(resultGroupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        precisionSpinBox = new QSpinBox(widget);
        precisionSpinBox->setObjectName(QString::fromUtf8("precisionSpinBox"));
        precisionSpinBox->setMaximum(12);
        precisionSpinBox->setValue(3);

        horizontalLayout_2->addWidget(precisionSpinBox);


        verticalLayout->addWidget(widget);


        verticalLayout_2->addWidget(resultGroupBox);

        verticalSpacer = new QSpacerItem(20, 56, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(leftFrame);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);

        verticalLayout_2->addWidget(buttonBox);


        horizontalLayout_3->addWidget(leftFrame);

        mapFrame = new QFrame(VolumeCalcDialog);
        mapFrame->setObjectName(QString::fromUtf8("mapFrame"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mapFrame->sizePolicy().hasHeightForWidth());
        mapFrame->setSizePolicy(sizePolicy3);
        mapFrame->setMinimumSize(QSize(256, 256));
        mapFrame->setFrameShape(QFrame::StyledPanel);
        mapFrame->setFrameShadow(QFrame::Raised);

        horizontalLayout_3->addWidget(mapFrame);


        retranslateUi(VolumeCalcDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), VolumeCalcDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), VolumeCalcDialog, SLOT(reject()));

        projDimComboBox->setCurrentIndex(2);
        heightProjectionComboBox->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(VolumeCalcDialog);
    } // setupUi

    void retranslateUi(QDialog *VolumeCalcDialog)
    {
        VolumeCalcDialog->setWindowTitle(QCoreApplication::translate("VolumeCalcDialog", "Volume calculation", nullptr));
        groundGroupBox->setTitle(QCoreApplication::translate("VolumeCalcDialog", "Ground / Before", nullptr));
        label_7->setText(QCoreApplication::translate("VolumeCalcDialog", "Source", nullptr));
        fillGroundEmptyCellsComboBox->setItemText(0, QCoreApplication::translate("VolumeCalcDialog", "leave empty", nullptr));
        fillGroundEmptyCellsComboBox->setItemText(1, QCoreApplication::translate("VolumeCalcDialog", "minimum height", nullptr));
        fillGroundEmptyCellsComboBox->setItemText(2, QCoreApplication::translate("VolumeCalcDialog", "average height", nullptr));
        fillGroundEmptyCellsComboBox->setItemText(3, QCoreApplication::translate("VolumeCalcDialog", "maximum height", nullptr));
        fillGroundEmptyCellsComboBox->setItemText(4, QCoreApplication::translate("VolumeCalcDialog", "user specified value", nullptr));
        fillGroundEmptyCellsComboBox->setItemText(5, QCoreApplication::translate("VolumeCalcDialog", "interpolate", nullptr));

#if QT_CONFIG(tooltip)
        fillGroundEmptyCellsComboBox->setToolTip(QCoreApplication::translate("VolumeCalcDialog", "choose the value to fill the cells in which no point is projected : minimum value over the whole point cloud or average value (over the whole cloud also)", nullptr));
#endif // QT_CONFIG(tooltip)
        label_10->setText(QCoreApplication::translate("VolumeCalcDialog", "Empty cells", nullptr));
#if QT_CONFIG(tooltip)
        groundEmptyValueDoubleSpinBox->setToolTip(QCoreApplication::translate("VolumeCalcDialog", "Custom value for empty cells", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        swapToolButton->setToolTip(QCoreApplication::translate("VolumeCalcDialog", "Swap", nullptr));
#endif // QT_CONFIG(tooltip)
        swapToolButton->setText(QCoreApplication::translate("VolumeCalcDialog", "swap", nullptr));
        ceilGroupBox->setTitle(QCoreApplication::translate("VolumeCalcDialog", "Ceil / After", nullptr));
        label_3->setText(QCoreApplication::translate("VolumeCalcDialog", "Source", nullptr));
        label_6->setText(QCoreApplication::translate("VolumeCalcDialog", "Empty cells", nullptr));
        fillCeilEmptyCellsComboBox->setItemText(0, QCoreApplication::translate("VolumeCalcDialog", "leave empty", nullptr));
        fillCeilEmptyCellsComboBox->setItemText(1, QCoreApplication::translate("VolumeCalcDialog", "minimum height", nullptr));
        fillCeilEmptyCellsComboBox->setItemText(2, QCoreApplication::translate("VolumeCalcDialog", "average height", nullptr));
        fillCeilEmptyCellsComboBox->setItemText(3, QCoreApplication::translate("VolumeCalcDialog", "maximum height", nullptr));
        fillCeilEmptyCellsComboBox->setItemText(4, QCoreApplication::translate("VolumeCalcDialog", "user specified value", nullptr));
        fillCeilEmptyCellsComboBox->setItemText(5, QCoreApplication::translate("VolumeCalcDialog", "interpolate", nullptr));

#if QT_CONFIG(tooltip)
        fillCeilEmptyCellsComboBox->setToolTip(QCoreApplication::translate("VolumeCalcDialog", "choose the value to fill the cells in which no point is projected : minimum value over the whole point cloud or average value (over the whole cloud also)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        ceilEmptyValueDoubleSpinBox->setToolTip(QCoreApplication::translate("VolumeCalcDialog", "Custom value for empty cells", nullptr));
#endif // QT_CONFIG(tooltip)
        gridGroupBox->setTitle(QCoreApplication::translate("VolumeCalcDialog", "Grid", nullptr));
        label_2->setText(QCoreApplication::translate("VolumeCalcDialog", "step", nullptr));
#if QT_CONFIG(tooltip)
        gridStepDoubleSpinBox->setToolTip(QCoreApplication::translate("VolumeCalcDialog", "size of step of the grid generated (in the same units as the coordinates of the point cloud)", nullptr));
#endif // QT_CONFIG(tooltip)
        editGridToolButton->setText(QCoreApplication::translate("VolumeCalcDialog", "Edit grid", nullptr));
        label_4->setText(QCoreApplication::translate("VolumeCalcDialog", "size", nullptr));
#if QT_CONFIG(tooltip)
        gridWidthLabel->setToolTip(QCoreApplication::translate("VolumeCalcDialog", "Grid size corresponding to the current step / boundaries", nullptr));
#endif // QT_CONFIG(tooltip)
        label_9->setText(QCoreApplication::translate("VolumeCalcDialog", "projection dir.", nullptr));

#if QT_CONFIG(tooltip)
        projDimComboBox->setToolTip(QCoreApplication::translate("VolumeCalcDialog", "Projection direction (X, Y or Z)", nullptr));
#endif // QT_CONFIG(tooltip)
        label_8->setText(QCoreApplication::translate("VolumeCalcDialog", "cell height", nullptr));
        heightProjectionComboBox->setItemText(0, QCoreApplication::translate("VolumeCalcDialog", "minimum height", nullptr));
        heightProjectionComboBox->setItemText(1, QCoreApplication::translate("VolumeCalcDialog", "average height", nullptr));
        heightProjectionComboBox->setItemText(2, QCoreApplication::translate("VolumeCalcDialog", "maximum height", nullptr));

#if QT_CONFIG(tooltip)
        heightProjectionComboBox->setToolTip(QCoreApplication::translate("VolumeCalcDialog", "Per-cell height computation method:\n"
" - minimum = lowest point in the cell\n"
" - average = mean height of all points inside the cell\n"
" - maximum = highest point in the cell", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        updatePushButton->setToolTip(QCoreApplication::translate("VolumeCalcDialog", "Update the grid / display / measurements", nullptr));
#endif // QT_CONFIG(tooltip)
        updatePushButton->setText(QCoreApplication::translate("VolumeCalcDialog", "Update", nullptr));
        resultGroupBox->setTitle(QCoreApplication::translate("VolumeCalcDialog", "Results", nullptr));
        spareseWarningLabel->setText(QCoreApplication::translate("VolumeCalcDialog", "At least one of the cloud is sparse!\n"
"You should fill the empty cells...", nullptr));
        clipboardPushButton->setText(QCoreApplication::translate("VolumeCalcDialog", "Copy to clipboard", nullptr));
#if QT_CONFIG(tooltip)
        exportGridPushButton->setToolTip(QCoreApplication::translate("VolumeCalcDialog", "Export the grid as a point cloud\n"
"(warning, the points heights will be the difference of altitude!)", nullptr));
#endif // QT_CONFIG(tooltip)
        exportGridPushButton->setText(QCoreApplication::translate("VolumeCalcDialog", "Export grid as a cloud", nullptr));
        label->setText(QCoreApplication::translate("VolumeCalcDialog", "Num. precision", nullptr));
#if QT_CONFIG(tooltip)
        precisionSpinBox->setToolTip(QCoreApplication::translate("VolumeCalcDialog", "Numerical precision (output measurements, etc.)", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class VolumeCalcDialog: public Ui_VolumeCalcDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VOLUMECALCDLG_H

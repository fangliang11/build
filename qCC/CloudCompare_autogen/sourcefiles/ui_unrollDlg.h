/********************************************************************************
** Form generated from reading UI file 'unrollDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UNROLLDLG_H
#define UI_UNROLLDLG_H

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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_UnrollDialog
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QLabel *label_3;
    QComboBox *comboBoxUnrollShapeType;
    QSpacerItem *spacerItem;
    QCheckBox *exportDeviationSFCheckBox;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *hboxLayout1;
    QLabel *label;
    QComboBox *comboBoxAxisDimension;
    QFrame *angleFrame;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *labelAngle;
    QDoubleSpinBox *halfAngleDoubleSpinBox;
    QFrame *radiusFrame;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *radiusLabel;
    QDoubleSpinBox *radiusDoubleSpinBox;
    QGroupBox *groupBoxAxisPosition;
    QVBoxLayout *vboxLayout1;
    QFrame *axisFrame;
    QHBoxLayout *hboxLayout2;
    QLabel *label1;
    QDoubleSpinBox *doubleSpinBoxAxisX;
    QSpacerItem *spacerItem1;
    QLabel *label2;
    QDoubleSpinBox *doubleSpinBoxAxisY;
    QSpacerItem *spacerItem2;
    QLabel *label3;
    QDoubleSpinBox *doubleSpinBoxAxisZ;
    QFrame *autoCenterFrame;
    QHBoxLayout *hboxLayout3;
    QCheckBox *checkBoxAuto;
    QSpacerItem *spacerItem3;
    QGroupBox *unrollRangeGroupBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QDoubleSpinBox *startAngleDoubleSpinBox;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_4;
    QDoubleSpinBox *stopAngleDoubleSpinBox;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *UnrollDialog)
    {
        if (UnrollDialog->objectName().isEmpty())
            UnrollDialog->setObjectName(QString::fromUtf8("UnrollDialog"));
        UnrollDialog->resize(654, 371);
        vboxLayout = new QVBoxLayout(UnrollDialog);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        label_3 = new QLabel(UnrollDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        hboxLayout->addWidget(label_3);

        comboBoxUnrollShapeType = new QComboBox(UnrollDialog);
        comboBoxUnrollShapeType->addItem(QString());
        comboBoxUnrollShapeType->addItem(QString());
        comboBoxUnrollShapeType->addItem(QString());
        comboBoxUnrollShapeType->addItem(QString());
        comboBoxUnrollShapeType->setObjectName(QString::fromUtf8("comboBoxUnrollShapeType"));

        hboxLayout->addWidget(comboBoxUnrollShapeType);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        exportDeviationSFCheckBox = new QCheckBox(UnrollDialog);
        exportDeviationSFCheckBox->setObjectName(QString::fromUtf8("exportDeviationSFCheckBox"));

        hboxLayout->addWidget(exportDeviationSFCheckBox);


        vboxLayout->addLayout(hboxLayout);

        groupBox_2 = new QGroupBox(UnrollDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        horizontalLayout_4 = new QHBoxLayout(groupBox_2);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setScaledContents(false);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        hboxLayout1->addWidget(label);

        comboBoxAxisDimension = new QComboBox(groupBox_2);
        comboBoxAxisDimension->addItem(QString::fromUtf8("X"));
        comboBoxAxisDimension->addItem(QString::fromUtf8("Y"));
        comboBoxAxisDimension->addItem(QString::fromUtf8("Z"));
        comboBoxAxisDimension->setObjectName(QString::fromUtf8("comboBoxAxisDimension"));

        hboxLayout1->addWidget(comboBoxAxisDimension);

        angleFrame = new QFrame(groupBox_2);
        angleFrame->setObjectName(QString::fromUtf8("angleFrame"));
        angleFrame->setFrameShape(QFrame::StyledPanel);
        angleFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(angleFrame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        labelAngle = new QLabel(angleFrame);
        labelAngle->setObjectName(QString::fromUtf8("labelAngle"));

        horizontalLayout->addWidget(labelAngle);

        halfAngleDoubleSpinBox = new QDoubleSpinBox(angleFrame);
        halfAngleDoubleSpinBox->setObjectName(QString::fromUtf8("halfAngleDoubleSpinBox"));
        halfAngleDoubleSpinBox->setDecimals(2);
        halfAngleDoubleSpinBox->setMaximum(180.000000000000000);
        halfAngleDoubleSpinBox->setValue(15.000000000000000);

        horizontalLayout->addWidget(halfAngleDoubleSpinBox);


        hboxLayout1->addWidget(angleFrame);

        radiusFrame = new QFrame(groupBox_2);
        radiusFrame->setObjectName(QString::fromUtf8("radiusFrame"));
        horizontalLayout_2 = new QHBoxLayout(radiusFrame);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        radiusLabel = new QLabel(radiusFrame);
        radiusLabel->setObjectName(QString::fromUtf8("radiusLabel"));
        radiusLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(radiusLabel);

        radiusDoubleSpinBox = new QDoubleSpinBox(radiusFrame);
        radiusDoubleSpinBox->setObjectName(QString::fromUtf8("radiusDoubleSpinBox"));
        radiusDoubleSpinBox->setDecimals(6);
        radiusDoubleSpinBox->setMaximum(1000000000.000000000000000);
        radiusDoubleSpinBox->setValue(100.000000000000000);

        horizontalLayout_2->addWidget(radiusDoubleSpinBox);


        hboxLayout1->addWidget(radiusFrame);


        horizontalLayout_4->addLayout(hboxLayout1);


        vboxLayout->addWidget(groupBox_2);

        groupBoxAxisPosition = new QGroupBox(UnrollDialog);
        groupBoxAxisPosition->setObjectName(QString::fromUtf8("groupBoxAxisPosition"));
        vboxLayout1 = new QVBoxLayout(groupBoxAxisPosition);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        axisFrame = new QFrame(groupBoxAxisPosition);
        axisFrame->setObjectName(QString::fromUtf8("axisFrame"));
        hboxLayout2 = new QHBoxLayout(axisFrame);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        label1 = new QLabel(axisFrame);
        label1->setObjectName(QString::fromUtf8("label1"));
        label1->setText(QString::fromUtf8("X"));
        label1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        hboxLayout2->addWidget(label1);

        doubleSpinBoxAxisX = new QDoubleSpinBox(axisFrame);
        doubleSpinBoxAxisX->setObjectName(QString::fromUtf8("doubleSpinBoxAxisX"));
        doubleSpinBoxAxisX->setEnabled(true);
        doubleSpinBoxAxisX->setDecimals(6);
        doubleSpinBoxAxisX->setMinimum(-1000000000.000000000000000);
        doubleSpinBoxAxisX->setMaximum(1000000000.000000000000000);

        hboxLayout2->addWidget(doubleSpinBoxAxisX);

        spacerItem1 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem1);

        label2 = new QLabel(axisFrame);
        label2->setObjectName(QString::fromUtf8("label2"));
        label2->setText(QString::fromUtf8("Y"));
        label2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        hboxLayout2->addWidget(label2);

        doubleSpinBoxAxisY = new QDoubleSpinBox(axisFrame);
        doubleSpinBoxAxisY->setObjectName(QString::fromUtf8("doubleSpinBoxAxisY"));
        doubleSpinBoxAxisY->setEnabled(true);
        doubleSpinBoxAxisY->setDecimals(6);
        doubleSpinBoxAxisY->setMinimum(-1000000000.000000000000000);
        doubleSpinBoxAxisY->setMaximum(1000000000.000000000000000);

        hboxLayout2->addWidget(doubleSpinBoxAxisY);

        spacerItem2 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem2);

        label3 = new QLabel(axisFrame);
        label3->setObjectName(QString::fromUtf8("label3"));
        label3->setText(QString::fromUtf8("Z"));
        label3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        hboxLayout2->addWidget(label3);

        doubleSpinBoxAxisZ = new QDoubleSpinBox(axisFrame);
        doubleSpinBoxAxisZ->setObjectName(QString::fromUtf8("doubleSpinBoxAxisZ"));
        doubleSpinBoxAxisZ->setEnabled(true);
        doubleSpinBoxAxisZ->setDecimals(6);
        doubleSpinBoxAxisZ->setMinimum(-1000000000.000000000000000);
        doubleSpinBoxAxisZ->setMaximum(1000000000.000000000000000);

        hboxLayout2->addWidget(doubleSpinBoxAxisZ);


        vboxLayout1->addWidget(axisFrame);

        autoCenterFrame = new QFrame(groupBoxAxisPosition);
        autoCenterFrame->setObjectName(QString::fromUtf8("autoCenterFrame"));
        hboxLayout3 = new QHBoxLayout(autoCenterFrame);
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        hboxLayout3->setContentsMargins(0, 0, 0, 0);
        checkBoxAuto = new QCheckBox(autoCenterFrame);
        checkBoxAuto->setObjectName(QString::fromUtf8("checkBoxAuto"));
        checkBoxAuto->setEnabled(true);
        checkBoxAuto->setChecked(false);

        hboxLayout3->addWidget(checkBoxAuto);

        spacerItem3 = new QSpacerItem(71, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem3);


        vboxLayout1->addWidget(autoCenterFrame);


        vboxLayout->addWidget(groupBoxAxisPosition);

        unrollRangeGroupBox = new QGroupBox(UnrollDialog);
        unrollRangeGroupBox->setObjectName(QString::fromUtf8("unrollRangeGroupBox"));
        horizontalLayout_3 = new QHBoxLayout(unrollRangeGroupBox);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(unrollRangeGroupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        startAngleDoubleSpinBox = new QDoubleSpinBox(unrollRangeGroupBox);
        startAngleDoubleSpinBox->setObjectName(QString::fromUtf8("startAngleDoubleSpinBox"));
        startAngleDoubleSpinBox->setMinimum(-3600.000000000000000);
        startAngleDoubleSpinBox->setMaximum(3600.000000000000000);
        startAngleDoubleSpinBox->setSingleStep(15.000000000000000);

        horizontalLayout_3->addWidget(startAngleDoubleSpinBox);

        horizontalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        label_4 = new QLabel(unrollRangeGroupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);

        stopAngleDoubleSpinBox = new QDoubleSpinBox(unrollRangeGroupBox);
        stopAngleDoubleSpinBox->setObjectName(QString::fromUtf8("stopAngleDoubleSpinBox"));
        stopAngleDoubleSpinBox->setMinimum(-3600.000000000000000);
        stopAngleDoubleSpinBox->setMaximum(3600.000000000000000);
        stopAngleDoubleSpinBox->setSingleStep(15.000000000000000);
        stopAngleDoubleSpinBox->setValue(360.000000000000000);

        horizontalLayout_3->addWidget(stopAngleDoubleSpinBox);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        vboxLayout->addWidget(unrollRangeGroupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(UnrollDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);


        retranslateUi(UnrollDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), UnrollDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), UnrollDialog, SLOT(reject()));

        comboBoxAxisDimension->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(UnrollDialog);
    } // setupUi

    void retranslateUi(QDialog *UnrollDialog)
    {
        UnrollDialog->setWindowTitle(QCoreApplication::translate("UnrollDialog", "Unroll", nullptr));
        label_3->setText(QCoreApplication::translate("UnrollDialog", "Type", nullptr));
        comboBoxUnrollShapeType->setItemText(0, QCoreApplication::translate("UnrollDialog", "Cylinder", nullptr));
        comboBoxUnrollShapeType->setItemText(1, QCoreApplication::translate("UnrollDialog", "Cone", nullptr));
        comboBoxUnrollShapeType->setItemText(2, QCoreApplication::translate("UnrollDialog", "Straightened cone (fixed radius)", nullptr));
        comboBoxUnrollShapeType->setItemText(3, QCoreApplication::translate("UnrollDialog", "Straightened cone", nullptr));

#if QT_CONFIG(tooltip)
        exportDeviationSFCheckBox->setToolTip(QCoreApplication::translate("UnrollDialog", "Deviation from the theoretical shape (i.e. cone or cylinder)", nullptr));
#endif // QT_CONFIG(tooltip)
        exportDeviationSFCheckBox->setText(QCoreApplication::translate("UnrollDialog", "Export deviation scalar field", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("UnrollDialog", "Shape", nullptr));
        label->setText(QCoreApplication::translate("UnrollDialog", "Axis", nullptr));

#if QT_CONFIG(tooltip)
        labelAngle->setToolTip(QCoreApplication::translate("UnrollDialog", "Cone angle (0-180\302\260)", nullptr));
#endif // QT_CONFIG(tooltip)
        labelAngle->setText(QCoreApplication::translate("UnrollDialog", "Half angle", nullptr));
#if QT_CONFIG(tooltip)
        halfAngleDoubleSpinBox->setToolTip(QCoreApplication::translate("UnrollDialog", "Cone angle (0-180\302\260)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        halfAngleDoubleSpinBox->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        halfAngleDoubleSpinBox->setSuffix(QCoreApplication::translate("UnrollDialog", " deg", nullptr));
#if QT_CONFIG(tooltip)
        radiusLabel->setToolTip(QCoreApplication::translate("UnrollDialog", "Cylinder (or cone base) radius", nullptr));
#endif // QT_CONFIG(tooltip)
        radiusLabel->setText(QCoreApplication::translate("UnrollDialog", "Radius", nullptr));
#if QT_CONFIG(tooltip)
        radiusDoubleSpinBox->setToolTip(QCoreApplication::translate("UnrollDialog", "Cylinder (or cone base) radius", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBoxAxisPosition->setTitle(QCoreApplication::translate("UnrollDialog", "Axis position", nullptr));
        checkBoxAuto->setText(QCoreApplication::translate("UnrollDialog", "Auto (gravity center)", nullptr));
#if QT_CONFIG(tooltip)
        unrollRangeGroupBox->setToolTip(QCoreApplication::translate("UnrollDialog", "Unroll range (can do multiple turns)", nullptr));
#endif // QT_CONFIG(tooltip)
        unrollRangeGroupBox->setTitle(QCoreApplication::translate("UnrollDialog", "Unroll range", nullptr));
        label_2->setText(QCoreApplication::translate("UnrollDialog", "Start angle", nullptr));
#if QT_CONFIG(tooltip)
        startAngleDoubleSpinBox->setToolTip(QCoreApplication::translate("UnrollDialog", "Starting angle (can be negative)", nullptr));
#endif // QT_CONFIG(tooltip)
        startAngleDoubleSpinBox->setSuffix(QCoreApplication::translate("UnrollDialog", " deg", nullptr));
        label_4->setText(QCoreApplication::translate("UnrollDialog", "Stop angle", nullptr));
#if QT_CONFIG(tooltip)
        stopAngleDoubleSpinBox->setToolTip(QCoreApplication::translate("UnrollDialog", "Stop angle (can be negative)", nullptr));
#endif // QT_CONFIG(tooltip)
        stopAngleDoubleSpinBox->setSuffix(QCoreApplication::translate("UnrollDialog", " deg", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UnrollDialog: public Ui_UnrollDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UNROLLDLG_H

/********************************************************************************
** Form generated from reading UI file 'gblSensorProjectDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GBLSENSORPROJECTDLG_H
#define UI_GBLSENSORPROJECTDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GBLSensorProjectDialog
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QLabel *label;
    QComboBox *rotationOrderComboBox;
    QDialogButtonBox *buttonBox;
    QTabWidget *propertiesTabWidget;
    QWidget *tabOrientation;
    QGridLayout *gridLayout_2;
    QLabel *label_6;
    QLineEdit *x1rot;
    QLineEdit *x2rot;
    QLineEdit *x3rot;
    QLabel *label_7;
    QLineEdit *y1rot;
    QLineEdit *y2rot;
    QLineEdit *y3rot;
    QLabel *label_8;
    QLineEdit *z1rot;
    QLineEdit *z2rot;
    QLineEdit *z3rot;
    QSpacerItem *spacerItem1;
    QLabel *label_2;
    QLineEdit *posXEdit;
    QLineEdit *posYEdit;
    QLineEdit *posZEdit;
    QWidget *tabSteps;
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout1;
    QLabel *label_9;
    QDoubleSpinBox *yawStepSpinBox;
    QHBoxLayout *hboxLayout2;
    QLabel *label_10;
    QDoubleSpinBox *pitchStepSpinBox;
    QSpacerItem *spacerItem2;
    QWidget *tabOther;
    QVBoxLayout *vboxLayout1;
    QHBoxLayout *hboxLayout3;
    QLabel *label_11;
    QDoubleSpinBox *uncertaintyDoubleSpinBox;
    QHBoxLayout *hboxLayout4;
    QLabel *label_12;
    QDoubleSpinBox *maxRangeDoubleSpinBox;
    QSpacerItem *spacerItem3;

    void setupUi(QDialog *GBLSensorProjectDialog)
    {
        if (GBLSensorProjectDialog->objectName().isEmpty())
            GBLSensorProjectDialog->setObjectName(QString::fromUtf8("GBLSensorProjectDialog"));
        GBLSensorProjectDialog->resize(400, 287);
        gridLayout = new QGridLayout(GBLSensorProjectDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        label = new QLabel(GBLSensorProjectDialog);
        label->setObjectName(QString::fromUtf8("label"));

        hboxLayout->addWidget(label);

        rotationOrderComboBox = new QComboBox(GBLSensorProjectDialog);
        rotationOrderComboBox->addItem(QString());
        rotationOrderComboBox->addItem(QString());
        rotationOrderComboBox->setObjectName(QString::fromUtf8("rotationOrderComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(rotationOrderComboBox->sizePolicy().hasHeightForWidth());
        rotationOrderComboBox->setSizePolicy(sizePolicy);
        rotationOrderComboBox->setEditable(false);
        rotationOrderComboBox->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        hboxLayout->addWidget(rotationOrderComboBox);


        gridLayout->addLayout(hboxLayout, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(GBLSensorProjectDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 1);

        propertiesTabWidget = new QTabWidget(GBLSensorProjectDialog);
        propertiesTabWidget->setObjectName(QString::fromUtf8("propertiesTabWidget"));
        tabOrientation = new QWidget();
        tabOrientation->setObjectName(QString::fromUtf8("tabOrientation"));
        gridLayout_2 = new QGridLayout(tabOrientation);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_6 = new QLabel(tabOrientation);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setText(QString::fromUtf8("X"));

        gridLayout_2->addWidget(label_6, 1, 0, 1, 1);

        x1rot = new QLineEdit(tabOrientation);
        x1rot->setObjectName(QString::fromUtf8("x1rot"));
        x1rot->setText(QString::fromUtf8("1"));

        gridLayout_2->addWidget(x1rot, 1, 1, 1, 1);

        x2rot = new QLineEdit(tabOrientation);
        x2rot->setObjectName(QString::fromUtf8("x2rot"));
        x2rot->setText(QString::fromUtf8("0"));

        gridLayout_2->addWidget(x2rot, 1, 2, 1, 1);

        x3rot = new QLineEdit(tabOrientation);
        x3rot->setObjectName(QString::fromUtf8("x3rot"));
        x3rot->setText(QString::fromUtf8("0"));

        gridLayout_2->addWidget(x3rot, 1, 3, 1, 1);

        label_7 = new QLabel(tabOrientation);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setText(QString::fromUtf8("Y"));

        gridLayout_2->addWidget(label_7, 2, 0, 1, 1);

        y1rot = new QLineEdit(tabOrientation);
        y1rot->setObjectName(QString::fromUtf8("y1rot"));
        y1rot->setText(QString::fromUtf8("0"));

        gridLayout_2->addWidget(y1rot, 2, 1, 1, 1);

        y2rot = new QLineEdit(tabOrientation);
        y2rot->setObjectName(QString::fromUtf8("y2rot"));
        y2rot->setText(QString::fromUtf8("1"));

        gridLayout_2->addWidget(y2rot, 2, 2, 1, 1);

        y3rot = new QLineEdit(tabOrientation);
        y3rot->setObjectName(QString::fromUtf8("y3rot"));
        y3rot->setText(QString::fromUtf8("0"));

        gridLayout_2->addWidget(y3rot, 2, 3, 1, 1);

        label_8 = new QLabel(tabOrientation);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setText(QString::fromUtf8("Z"));

        gridLayout_2->addWidget(label_8, 3, 0, 1, 1);

        z1rot = new QLineEdit(tabOrientation);
        z1rot->setObjectName(QString::fromUtf8("z1rot"));
        z1rot->setText(QString::fromUtf8("0"));

        gridLayout_2->addWidget(z1rot, 3, 1, 1, 1);

        z2rot = new QLineEdit(tabOrientation);
        z2rot->setObjectName(QString::fromUtf8("z2rot"));
        z2rot->setText(QString::fromUtf8("0"));

        gridLayout_2->addWidget(z2rot, 3, 2, 1, 1);

        z3rot = new QLineEdit(tabOrientation);
        z3rot->setObjectName(QString::fromUtf8("z3rot"));
        z3rot->setText(QString::fromUtf8("1"));

        gridLayout_2->addWidget(z3rot, 3, 3, 1, 1);

        spacerItem1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(spacerItem1, 4, 2, 1, 1);

        label_2 = new QLabel(tabOrientation);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setText(QString::fromUtf8("C"));

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        posXEdit = new QLineEdit(tabOrientation);
        posXEdit->setObjectName(QString::fromUtf8("posXEdit"));
        posXEdit->setText(QString::fromUtf8("0.0"));

        gridLayout_2->addWidget(posXEdit, 0, 1, 1, 1);

        posYEdit = new QLineEdit(tabOrientation);
        posYEdit->setObjectName(QString::fromUtf8("posYEdit"));
        posYEdit->setText(QString::fromUtf8("0.0"));

        gridLayout_2->addWidget(posYEdit, 0, 2, 1, 1);

        posZEdit = new QLineEdit(tabOrientation);
        posZEdit->setObjectName(QString::fromUtf8("posZEdit"));
        posZEdit->setText(QString::fromUtf8("0.0"));

        gridLayout_2->addWidget(posZEdit, 0, 3, 1, 1);

        propertiesTabWidget->addTab(tabOrientation, QString());
        tabSteps = new QWidget();
        tabSteps->setObjectName(QString::fromUtf8("tabSteps"));
        vboxLayout = new QVBoxLayout(tabSteps);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        label_9 = new QLabel(tabSteps);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        hboxLayout1->addWidget(label_9);

        yawStepSpinBox = new QDoubleSpinBox(tabSteps);
        yawStepSpinBox->setObjectName(QString::fromUtf8("yawStepSpinBox"));
        yawStepSpinBox->setDecimals(6);
        yawStepSpinBox->setMaximum(360.000000000000000);
        yawStepSpinBox->setSingleStep(0.000001000000000);
        yawStepSpinBox->setValue(0.005000000000000);

        hboxLayout1->addWidget(yawStepSpinBox);


        vboxLayout->addLayout(hboxLayout1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        label_10 = new QLabel(tabSteps);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        hboxLayout2->addWidget(label_10);

        pitchStepSpinBox = new QDoubleSpinBox(tabSteps);
        pitchStepSpinBox->setObjectName(QString::fromUtf8("pitchStepSpinBox"));
        pitchStepSpinBox->setDecimals(6);
        pitchStepSpinBox->setMaximum(360.000000000000000);
        pitchStepSpinBox->setSingleStep(0.000001000000000);
        pitchStepSpinBox->setValue(0.005000000000000);

        hboxLayout2->addWidget(pitchStepSpinBox);


        vboxLayout->addLayout(hboxLayout2);

        spacerItem2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem2);

        propertiesTabWidget->addTab(tabSteps, QString());
        tabOther = new QWidget();
        tabOther->setObjectName(QString::fromUtf8("tabOther"));
        vboxLayout1 = new QVBoxLayout(tabOther);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        label_11 = new QLabel(tabOther);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        hboxLayout3->addWidget(label_11);

        uncertaintyDoubleSpinBox = new QDoubleSpinBox(tabOther);
        uncertaintyDoubleSpinBox->setObjectName(QString::fromUtf8("uncertaintyDoubleSpinBox"));
        uncertaintyDoubleSpinBox->setDecimals(4);
        uncertaintyDoubleSpinBox->setSingleStep(0.010000000000000);
        uncertaintyDoubleSpinBox->setValue(0.010000000000000);

        hboxLayout3->addWidget(uncertaintyDoubleSpinBox);


        vboxLayout1->addLayout(hboxLayout3);

        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        label_12 = new QLabel(tabOther);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        hboxLayout4->addWidget(label_12);

        maxRangeDoubleSpinBox = new QDoubleSpinBox(tabOther);
        maxRangeDoubleSpinBox->setObjectName(QString::fromUtf8("maxRangeDoubleSpinBox"));
        maxRangeDoubleSpinBox->setMaximum(1000000000000.000000000000000);
        maxRangeDoubleSpinBox->setValue(1000000000000.000000000000000);

        hboxLayout4->addWidget(maxRangeDoubleSpinBox);


        vboxLayout1->addLayout(hboxLayout4);

        spacerItem3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(spacerItem3);

        propertiesTabWidget->addTab(tabOther, QString());

        gridLayout->addWidget(propertiesTabWidget, 1, 0, 1, 1);


        retranslateUi(GBLSensorProjectDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), GBLSensorProjectDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), GBLSensorProjectDialog, SLOT(reject()));

        propertiesTabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(GBLSensorProjectDialog);
    } // setupUi

    void retranslateUi(QDialog *GBLSensorProjectDialog)
    {
        GBLSensorProjectDialog->setWindowTitle(QCoreApplication::translate("GBLSensorProjectDialog", "Sensor parameters", nullptr));
#if QT_CONFIG(tooltip)
        label->setToolTip(QCoreApplication::translate("GBLSensorProjectDialog", "theta=longitudinal (E-W) / phi=latitudinal (N-S)", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("GBLSensorProjectDialog", "rotation order", nullptr));
        rotationOrderComboBox->setItemText(0, QCoreApplication::translate("GBLSensorProjectDialog", "yaw then pitch (default)", nullptr));
        rotationOrderComboBox->setItemText(1, QCoreApplication::translate("GBLSensorProjectDialog", "pitch then yaw", nullptr));

#if QT_CONFIG(tooltip)
        rotationOrderComboBox->setToolTip(QCoreApplication::translate("GBLSensorProjectDialog", "theta=longitudinal (E-W) / phi=latitudinal (N-S)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        label_6->setToolTip(QCoreApplication::translate("GBLSensorProjectDialog", "sensor front direction (yaw = 0)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        label_7->setToolTip(QCoreApplication::translate("GBLSensorProjectDialog", "sensor lateral direction", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        label_8->setToolTip(QCoreApplication::translate("GBLSensorProjectDialog", "sensor vertical direction (pitch = 0)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        label_2->setToolTip(QCoreApplication::translate("GBLSensorProjectDialog", "sensor center", nullptr));
#endif // QT_CONFIG(tooltip)
        propertiesTabWidget->setTabText(propertiesTabWidget->indexOf(tabOrientation), QCoreApplication::translate("GBLSensorProjectDialog", "Position + Orientation", nullptr));
#if QT_CONFIG(tooltip)
        label_9->setToolTip(QCoreApplication::translate("GBLSensorProjectDialog", "Rotation around the vertical axis", nullptr));
#endif // QT_CONFIG(tooltip)
        label_9->setText(QCoreApplication::translate("GBLSensorProjectDialog", "Yaw (degrees)", nullptr));
#if QT_CONFIG(tooltip)
        label_10->setToolTip(QCoreApplication::translate("GBLSensorProjectDialog", "Rotation around the lateral axis", nullptr));
#endif // QT_CONFIG(tooltip)
        label_10->setText(QCoreApplication::translate("GBLSensorProjectDialog", "Pitch (degrees)", nullptr));
        propertiesTabWidget->setTabText(propertiesTabWidget->indexOf(tabSteps), QCoreApplication::translate("GBLSensorProjectDialog", "Angular steps", nullptr));
#if QT_CONFIG(tooltip)
        label_11->setToolTip(QCoreApplication::translate("GBLSensorProjectDialog", "Depth buffer 'uncertainty'", nullptr));
#endif // QT_CONFIG(tooltip)
        label_11->setText(QCoreApplication::translate("GBLSensorProjectDialog", "Uncertainty", nullptr));
#if QT_CONFIG(tooltip)
        label_12->setToolTip(QCoreApplication::translate("GBLSensorProjectDialog", "Sensor max range", nullptr));
#endif // QT_CONFIG(tooltip)
        label_12->setText(QCoreApplication::translate("GBLSensorProjectDialog", "Max. range", nullptr));
        propertiesTabWidget->setTabText(propertiesTabWidget->indexOf(tabOther), QCoreApplication::translate("GBLSensorProjectDialog", "Other", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GBLSensorProjectDialog: public Ui_GBLSensorProjectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GBLSENSORPROJECTDLG_H

/********************************************************************************
** Form generated from reading UI file 'distanceMapDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISTANCEMAPDLG_H
#define UI_DISTANCEMAPDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DistanceMapDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSpinBox *stepsSpinBox;
    QSpacerItem *horizontalSpacer;
    QLabel *label_3;
    QDoubleSpinBox *marginDoubleSpinBox;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *rangeCheckBox;
    QFrame *rangeFrame;
    QHBoxLayout *horizontalLayout;
    QDoubleSpinBox *minDistDoubleSpinBox;
    QLabel *label_2;
    QDoubleSpinBox *maxDistDoubleSpinBox;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DistanceMapDialog)
    {
        if (DistanceMapDialog->objectName().isEmpty())
            DistanceMapDialog->setObjectName(QString::fromUtf8("DistanceMapDialog"));
        DistanceMapDialog->resize(429, 135);
        verticalLayout = new QVBoxLayout(DistanceMapDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(DistanceMapDialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        stepsSpinBox = new QSpinBox(DistanceMapDialog);
        stepsSpinBox->setObjectName(QString::fromUtf8("stepsSpinBox"));
        stepsSpinBox->setMinimum(8);
        stepsSpinBox->setMaximum(2048);
        stepsSpinBox->setSingleStep(8);
        stepsSpinBox->setValue(128);

        horizontalLayout_2->addWidget(stepsSpinBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label_3 = new QLabel(DistanceMapDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        marginDoubleSpinBox = new QDoubleSpinBox(DistanceMapDialog);
        marginDoubleSpinBox->setObjectName(QString::fromUtf8("marginDoubleSpinBox"));
        marginDoubleSpinBox->setDecimals(3);
        marginDoubleSpinBox->setMaximum(1000000.000000000000000);

        horizontalLayout_2->addWidget(marginDoubleSpinBox);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        rangeCheckBox = new QCheckBox(DistanceMapDialog);
        rangeCheckBox->setObjectName(QString::fromUtf8("rangeCheckBox"));

        horizontalLayout_3->addWidget(rangeCheckBox);

        rangeFrame = new QFrame(DistanceMapDialog);
        rangeFrame->setObjectName(QString::fromUtf8("rangeFrame"));
        rangeFrame->setEnabled(false);
        horizontalLayout = new QHBoxLayout(rangeFrame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        minDistDoubleSpinBox = new QDoubleSpinBox(rangeFrame);
        minDistDoubleSpinBox->setObjectName(QString::fromUtf8("minDistDoubleSpinBox"));
        minDistDoubleSpinBox->setDecimals(6);
        minDistDoubleSpinBox->setMinimum(0.000000000000000);
        minDistDoubleSpinBox->setMaximum(1000000000.000000000000000);
        minDistDoubleSpinBox->setValue(0.000000000000000);

        horizontalLayout->addWidget(minDistDoubleSpinBox);

        label_2 = new QLabel(rangeFrame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setText(QString::fromUtf8("-"));

        horizontalLayout->addWidget(label_2);

        maxDistDoubleSpinBox = new QDoubleSpinBox(rangeFrame);
        maxDistDoubleSpinBox->setObjectName(QString::fromUtf8("maxDistDoubleSpinBox"));
        maxDistDoubleSpinBox->setDecimals(6);
        maxDistDoubleSpinBox->setMinimum(0.000000000000000);
        maxDistDoubleSpinBox->setMaximum(1000000000.000000000000000);
        maxDistDoubleSpinBox->setValue(0.000000000000000);

        horizontalLayout->addWidget(maxDistDoubleSpinBox);


        horizontalLayout_3->addWidget(rangeFrame);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 4, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(DistanceMapDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(DistanceMapDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), DistanceMapDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DistanceMapDialog, SLOT(reject()));
        QObject::connect(rangeCheckBox, SIGNAL(toggled(bool)), rangeFrame, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(DistanceMapDialog);
    } // setupUi

    void retranslateUi(QDialog *DistanceMapDialog)
    {
        DistanceMapDialog->setWindowTitle(QCoreApplication::translate("DistanceMapDialog", "Distance Map", nullptr));
        label->setText(QCoreApplication::translate("DistanceMapDialog", "Steps", nullptr));
#if QT_CONFIG(tooltip)
        stepsSpinBox->setToolTip(QCoreApplication::translate("DistanceMapDialog", "Map steps (in each direction).\n"
"The bigger the more accurate the map will be\n"
"(but the more points will be created)", nullptr));
#endif // QT_CONFIG(tooltip)
        label_3->setText(QCoreApplication::translate("DistanceMapDialog", "Outer margin", nullptr));
#if QT_CONFIG(tooltip)
        marginDoubleSpinBox->setToolTip(QCoreApplication::translate("DistanceMapDialog", "Margin added around the cloud bounding-box", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        rangeCheckBox->setToolTip(QCoreApplication::translate("DistanceMapDialog", "reduce result to the specified range", nullptr));
#endif // QT_CONFIG(tooltip)
        rangeCheckBox->setText(QCoreApplication::translate("DistanceMapDialog", "Range", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DistanceMapDialog: public Ui_DistanceMapDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISTANCEMAPDLG_H

/********************************************************************************
** Form generated from reading UI file 'alignDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALIGNDLG_H
#define UI_ALIGNDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AlignDialog
{
public:
    QHBoxLayout *horizontalLayout_13;
    QVBoxLayout *verticalLayout_7;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_6;
    QToolButton *dataColorButton;
    QLabel *label_10;
    QLineEdit *dataCloud;
    QHBoxLayout *horizontalLayout_11;
    QToolButton *modelColorButton;
    QLabel *label_9;
    QLineEdit *modelCloud;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *swapButton;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label;
    QSpinBox *nbTries;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_2;
    QDoubleSpinBox *overlap;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_3;
    QDoubleSpinBox *delta;
    QPushButton *deltaEstimation;
    QHBoxLayout *horizontalLayout_7;
    QCheckBox *isNbCandLimited;
    QSpinBox *nbMaxCandidates;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QComboBox *samplingMethod;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer;
    QLabel *label_8;
    QSlider *dataSample;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QDoubleSpinBox *dataSamplingRate;
    QLabel *dataRemaining;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_5;
    QSlider *modelSample;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QDoubleSpinBox *modelSamplingRate;
    QLabel *modelRemaining;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AlignDialog)
    {
        if (AlignDialog->objectName().isEmpty())
            AlignDialog->setObjectName(QString::fromUtf8("AlignDialog"));
        AlignDialog->resize(600, 361);
        horizontalLayout_13 = new QHBoxLayout(AlignDialog);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        groupBox_5 = new QGroupBox(AlignDialog);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_5->sizePolicy().hasHeightForWidth());
        groupBox_5->setSizePolicy(sizePolicy);
        groupBox_5->setMinimumSize(QSize(320, 0));
        verticalLayout_5 = new QVBoxLayout(groupBox_5);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        dataColorButton = new QToolButton(groupBox_5);
        dataColorButton->setObjectName(QString::fromUtf8("dataColorButton"));
        dataColorButton->setEnabled(false);

        horizontalLayout_6->addWidget(dataColorButton);

        label_10 = new QLabel(groupBox_5);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_6->addWidget(label_10);

        dataCloud = new QLineEdit(groupBox_5);
        dataCloud->setObjectName(QString::fromUtf8("dataCloud"));
        dataCloud->setReadOnly(true);

        horizontalLayout_6->addWidget(dataCloud);


        verticalLayout_5->addLayout(horizontalLayout_6);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        modelColorButton = new QToolButton(groupBox_5);
        modelColorButton->setObjectName(QString::fromUtf8("modelColorButton"));
        modelColorButton->setEnabled(false);

        horizontalLayout_11->addWidget(modelColorButton);

        label_9 = new QLabel(groupBox_5);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_11->addWidget(label_9);

        modelCloud = new QLineEdit(groupBox_5);
        modelCloud->setObjectName(QString::fromUtf8("modelCloud"));
        modelCloud->setReadOnly(true);

        horizontalLayout_11->addWidget(modelCloud);


        verticalLayout_5->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_5);

        swapButton = new QPushButton(groupBox_5);
        swapButton->setObjectName(QString::fromUtf8("swapButton"));
        swapButton->setFlat(false);

        horizontalLayout_12->addWidget(swapButton);


        verticalLayout_5->addLayout(horizontalLayout_12);


        verticalLayout_7->addWidget(groupBox_5);

        groupBox = new QGroupBox(AlignDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setMinimumSize(QSize(320, 0));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_8->addWidget(label);

        nbTries = new QSpinBox(groupBox);
        nbTries->setObjectName(QString::fromUtf8("nbTries"));
        nbTries->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        nbTries->setMinimum(1);
        nbTries->setMaximum(999999);
        nbTries->setValue(50);

        horizontalLayout_8->addWidget(nbTries);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_9->addWidget(label_2);

        overlap = new QDoubleSpinBox(groupBox);
        overlap->setObjectName(QString::fromUtf8("overlap"));
        overlap->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        overlap->setMinimum(0.010000000000000);
        overlap->setMaximum(1.000000000000000);
        overlap->setSingleStep(0.100000000000000);
        overlap->setValue(1.000000000000000);

        horizontalLayout_9->addWidget(overlap);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_10->addWidget(label_3);

        delta = new QDoubleSpinBox(groupBox);
        delta->setObjectName(QString::fromUtf8("delta"));
        delta->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        delta->setMaximum(9999.989999999999782);
        delta->setSingleStep(0.100000000000000);
        delta->setValue(1.000000000000000);

        horizontalLayout_10->addWidget(delta);

        deltaEstimation = new QPushButton(groupBox);
        deltaEstimation->setObjectName(QString::fromUtf8("deltaEstimation"));

        horizontalLayout_10->addWidget(deltaEstimation);


        verticalLayout->addLayout(horizontalLayout_10);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        isNbCandLimited = new QCheckBox(groupBox);
        isNbCandLimited->setObjectName(QString::fromUtf8("isNbCandLimited"));

        horizontalLayout_7->addWidget(isNbCandLimited);

        nbMaxCandidates = new QSpinBox(groupBox);
        nbMaxCandidates->setObjectName(QString::fromUtf8("nbMaxCandidates"));
        nbMaxCandidates->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        nbMaxCandidates->setMaximum(9999999);
        nbMaxCandidates->setValue(2000);

        horizontalLayout_7->addWidget(nbMaxCandidates);


        verticalLayout->addLayout(horizontalLayout_7);


        verticalLayout_7->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer);


        horizontalLayout_13->addLayout(verticalLayout_7);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        groupBox_2 = new QGroupBox(AlignDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_4 = new QVBoxLayout(groupBox_2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_5->addWidget(label_4);

        samplingMethod = new QComboBox(groupBox_2);
        samplingMethod->setObjectName(QString::fromUtf8("samplingMethod"));

        horizontalLayout_5->addWidget(samplingMethod);


        verticalLayout_4->addLayout(horizontalLayout_5);

        groupBox_3 = new QGroupBox(groupBox_2);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_2 = new QVBoxLayout(groupBox_3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(6, 6, 6, 6);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        horizontalLayout->addWidget(label_7);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setAlignment(Qt::AlignBottom|Qt::AlignRight|Qt::AlignTrailing);

        horizontalLayout->addWidget(label_8);


        verticalLayout_2->addLayout(horizontalLayout);

        dataSample = new QSlider(groupBox_3);
        dataSample->setObjectName(QString::fromUtf8("dataSample"));
        dataSample->setMaximum(10000000);
        dataSample->setValue(1000);
        dataSample->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(dataSample);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        dataSamplingRate = new QDoubleSpinBox(groupBox_3);
        dataSamplingRate->setObjectName(QString::fromUtf8("dataSamplingRate"));
        dataSamplingRate->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        dataSamplingRate->setDecimals(4);
        dataSamplingRate->setMaximum(100.000000000000000);
        dataSamplingRate->setSingleStep(0.010000000000000);
        dataSamplingRate->setValue(100.000000000000000);

        horizontalLayout_2->addWidget(dataSamplingRate);

        dataRemaining = new QLabel(groupBox_3);
        dataRemaining->setObjectName(QString::fromUtf8("dataRemaining"));

        horizontalLayout_2->addWidget(dataRemaining);


        verticalLayout_2->addLayout(horizontalLayout_2);


        verticalLayout_4->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(groupBox_2);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        verticalLayout_3 = new QVBoxLayout(groupBox_4);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(6, 6, 6, 6);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_6 = new QLabel(groupBox_4);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        horizontalLayout_4->addWidget(label_6);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        label_5 = new QLabel(groupBox_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignBottom|Qt::AlignRight|Qt::AlignTrailing);

        horizontalLayout_4->addWidget(label_5);


        verticalLayout_3->addLayout(horizontalLayout_4);

        modelSample = new QSlider(groupBox_4);
        modelSample->setObjectName(QString::fromUtf8("modelSample"));
        modelSample->setMaximum(10000000);
        modelSample->setValue(1000);
        modelSample->setOrientation(Qt::Horizontal);

        verticalLayout_3->addWidget(modelSample);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        modelSamplingRate = new QDoubleSpinBox(groupBox_4);
        modelSamplingRate->setObjectName(QString::fromUtf8("modelSamplingRate"));
        modelSamplingRate->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        modelSamplingRate->setDecimals(4);
        modelSamplingRate->setMaximum(100.000000000000000);
        modelSamplingRate->setSingleStep(0.010000000000000);
        modelSamplingRate->setValue(100.000000000000000);

        horizontalLayout_3->addWidget(modelSamplingRate);

        modelRemaining = new QLabel(groupBox_4);
        modelRemaining->setObjectName(QString::fromUtf8("modelRemaining"));

        horizontalLayout_3->addWidget(modelRemaining);


        verticalLayout_3->addLayout(horizontalLayout_3);


        verticalLayout_4->addWidget(groupBox_4);


        verticalLayout_6->addWidget(groupBox_2);

        buttonBox = new QDialogButtonBox(AlignDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_6->addWidget(buttonBox);


        horizontalLayout_13->addLayout(verticalLayout_6);


        retranslateUi(AlignDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AlignDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AlignDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AlignDialog);
    } // setupUi

    void retranslateUi(QDialog *AlignDialog)
    {
        AlignDialog->setWindowTitle(QCoreApplication::translate("AlignDialog", "Clouds alignment", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("AlignDialog", "Model and data", nullptr));
        label_10->setText(QCoreApplication::translate("AlignDialog", "Data:", nullptr));
#if QT_CONFIG(tooltip)
        dataCloud->setToolTip(QCoreApplication::translate("AlignDialog", "the data cloud is the entity to align with the model cloud: it will be displaced (green cloud)", nullptr));
#endif // QT_CONFIG(tooltip)
        label_9->setText(QCoreApplication::translate("AlignDialog", "Model:", nullptr));
#if QT_CONFIG(tooltip)
        modelCloud->setToolTip(QCoreApplication::translate("AlignDialog", "the model cloud is the reference: it won't move (red cloud)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        swapButton->setToolTip(QCoreApplication::translate("AlignDialog", "press once to exchange model and data clouds", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        swapButton->setStatusTip(QCoreApplication::translate("AlignDialog", "press once to exchange model and data clouds", nullptr));
#endif // QT_CONFIG(statustip)
        swapButton->setText(QCoreApplication::translate("AlignDialog", "swap", nullptr));
        groupBox->setTitle(QCoreApplication::translate("AlignDialog", "Alignment parameters", nullptr));
        label->setText(QCoreApplication::translate("AlignDialog", "Number of trials:", nullptr));
#if QT_CONFIG(tooltip)
        nbTries->setToolTip(QCoreApplication::translate("AlignDialog", "Number of 4 points bases tested to find the best rigid transform. Great values may lead to long computation time.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_2->setText(QCoreApplication::translate("AlignDialog", "Overlap:", nullptr));
#if QT_CONFIG(tooltip)
        overlap->setToolTip(QCoreApplication::translate("AlignDialog", "Rough estimation of the two clouds overlap rate (between 0 and 1)", nullptr));
#endif // QT_CONFIG(tooltip)
        label_3->setText(QCoreApplication::translate("AlignDialog", "Delta:", nullptr));
#if QT_CONFIG(tooltip)
        delta->setToolTip(QCoreApplication::translate("AlignDialog", "Estimation of the distance wished between the two clouds after registration.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        deltaEstimation->setToolTip(QCoreApplication::translate("AlignDialog", "The computer will estimate the best delta parameter", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        deltaEstimation->setStatusTip(QCoreApplication::translate("AlignDialog", "The computer will estimate the best delta parameter", nullptr));
#endif // QT_CONFIG(statustip)
        deltaEstimation->setText(QCoreApplication::translate("AlignDialog", "Estimate", nullptr));
#if QT_CONFIG(tooltip)
        isNbCandLimited->setToolTip(QCoreApplication::translate("AlignDialog", "For each attempt (see above parameter), candidate bases are found. If there are too much candidates, the program may take a long time to finish. Check this box to bound the number of candidates.", nullptr));
#endif // QT_CONFIG(tooltip)
        isNbCandLimited->setText(QCoreApplication::translate("AlignDialog", "Limit max. number of candidates", nullptr));
#if QT_CONFIG(tooltip)
        nbMaxCandidates->setToolTip(QCoreApplication::translate("AlignDialog", "Maximal number of candidates allowed (check the left box to use this parameter)", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox_2->setTitle(QCoreApplication::translate("AlignDialog", "Sampling", nullptr));
        label_4->setText(QCoreApplication::translate("AlignDialog", "Method:", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("AlignDialog", "Data", nullptr));
        label_7->setText(QCoreApplication::translate("AlignDialog", "None", nullptr));
        label_8->setText(QCoreApplication::translate("AlignDialog", "All", nullptr));
#if QT_CONFIG(tooltip)
        dataSample->setToolTip(QCoreApplication::translate("AlignDialog", "Move to the left (none) to decrease the number of points  to keep in the data cloud.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        dataSample->setStatusTip(QCoreApplication::translate("AlignDialog", "Move to the left (none) to decrease the number of points  to keep in the data cloud.", nullptr));
#endif // QT_CONFIG(statustip)
        dataRemaining->setText(QCoreApplication::translate("AlignDialog", "remaining points", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("AlignDialog", "Model", nullptr));
        label_6->setText(QCoreApplication::translate("AlignDialog", "None", nullptr));
        label_5->setText(QCoreApplication::translate("AlignDialog", "All", nullptr));
#if QT_CONFIG(tooltip)
        modelSample->setToolTip(QCoreApplication::translate("AlignDialog", "Move to the left (none) to decrease the number of points  to keep in the model cloud.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        modelSample->setStatusTip(QCoreApplication::translate("AlignDialog", "Move to the left (none) to decrease the number of points  to keep in the model cloud.", nullptr));
#endif // QT_CONFIG(statustip)
        modelRemaining->setText(QCoreApplication::translate("AlignDialog", "remaining points", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AlignDialog: public Ui_AlignDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALIGNDLG_H

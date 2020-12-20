/********************************************************************************
** Form generated from reading UI file 'registrationDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRATIONDLG_H
#define UI_REGISTRATIONDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegistrationDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout;
    QLabel *label_10;
    QLineEdit *dataLineEdit;
    QToolButton *modelColorButton;
    QToolButton *dataColorButton;
    QLabel *label_9;
    QLineEdit *modelLineEdit;
    QPushButton *swapButton;
    QTabWidget *tabWidget;
    QWidget *tabStdParams;
    QVBoxLayout *verticalLayout_3;
    QFormLayout *formLayout;
    QRadioButton *iterationsCriterion;
    QSpinBox *maxIterationCount;
    QRadioButton *errorCriterion;
    QLineEdit *rmsDifferenceLineEdit;
    QLabel *label_4;
    QSpinBox *overlapSpinBox;
    QSpacerItem *verticalSpacer_2;
    QCheckBox *adjustScaleCheckBox;
    QHBoxLayout *horizontalLayout_7;
    QFrame *threadCountFrame;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_6;
    QSpinBox *maxThreadCountSpinBox;
    QSpacerItem *horizontalSpacer_2;
    QWidget *tabResearchParams;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout_2;
    QLabel *label;
    QSpinBox *randomSamplingLimitSpinBox;
    QLabel *label_2;
    QComboBox *rotComboBox;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    QCheckBox *TxCheckBox;
    QCheckBox *TyCheckBox;
    QCheckBox *TzCheckBox;
    QCheckBox *pointsRemoval;
    QCheckBox *checkBoxUseDataSFAsWeights;
    QCheckBox *checkBoxUseModelSFAsWeights;
    QFrame *frame;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *RegistrationDialog)
    {
        if (RegistrationDialog->objectName().isEmpty())
            RegistrationDialog->setObjectName(QString::fromUtf8("RegistrationDialog"));
        RegistrationDialog->resize(411, 458);
        verticalLayout_2 = new QVBoxLayout(RegistrationDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox_5 = new QGroupBox(RegistrationDialog);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_5->sizePolicy().hasHeightForWidth());
        groupBox_5->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(groupBox_5);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_10 = new QLabel(groupBox_5);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 0, 1, 1, 1);

        dataLineEdit = new QLineEdit(groupBox_5);
        dataLineEdit->setObjectName(QString::fromUtf8("dataLineEdit"));
        dataLineEdit->setReadOnly(true);

        gridLayout->addWidget(dataLineEdit, 0, 2, 1, 1);

        modelColorButton = new QToolButton(groupBox_5);
        modelColorButton->setObjectName(QString::fromUtf8("modelColorButton"));
        modelColorButton->setEnabled(false);

        gridLayout->addWidget(modelColorButton, 1, 0, 1, 1);

        dataColorButton = new QToolButton(groupBox_5);
        dataColorButton->setObjectName(QString::fromUtf8("dataColorButton"));
        dataColorButton->setEnabled(false);

        gridLayout->addWidget(dataColorButton, 0, 0, 1, 1);

        label_9 = new QLabel(groupBox_5);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 1, 1, 1, 1);

        modelLineEdit = new QLineEdit(groupBox_5);
        modelLineEdit->setObjectName(QString::fromUtf8("modelLineEdit"));
        modelLineEdit->setReadOnly(true);

        gridLayout->addWidget(modelLineEdit, 1, 2, 1, 1);

        swapButton = new QPushButton(groupBox_5);
        swapButton->setObjectName(QString::fromUtf8("swapButton"));
        swapButton->setFlat(false);

        gridLayout->addWidget(swapButton, 2, 2, 1, 1);


        verticalLayout_2->addWidget(groupBox_5);

        tabWidget = new QTabWidget(RegistrationDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabStdParams = new QWidget();
        tabStdParams->setObjectName(QString::fromUtf8("tabStdParams"));
        verticalLayout_3 = new QVBoxLayout(tabStdParams);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        iterationsCriterion = new QRadioButton(tabStdParams);
        iterationsCriterion->setObjectName(QString::fromUtf8("iterationsCriterion"));

        formLayout->setWidget(0, QFormLayout::LabelRole, iterationsCriterion);

        maxIterationCount = new QSpinBox(tabStdParams);
        maxIterationCount->setObjectName(QString::fromUtf8("maxIterationCount"));
        maxIterationCount->setEnabled(false);
        maxIterationCount->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        maxIterationCount->setMinimum(1);
        maxIterationCount->setMaximum(999999);
        maxIterationCount->setValue(20);

        formLayout->setWidget(0, QFormLayout::FieldRole, maxIterationCount);

        errorCriterion = new QRadioButton(tabStdParams);
        errorCriterion->setObjectName(QString::fromUtf8("errorCriterion"));
        errorCriterion->setChecked(true);

        formLayout->setWidget(1, QFormLayout::LabelRole, errorCriterion);

        rmsDifferenceLineEdit = new QLineEdit(tabStdParams);
        rmsDifferenceLineEdit->setObjectName(QString::fromUtf8("rmsDifferenceLineEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(rmsDifferenceLineEdit->sizePolicy().hasHeightForWidth());
        rmsDifferenceLineEdit->setSizePolicy(sizePolicy1);
        rmsDifferenceLineEdit->setLayoutDirection(Qt::RightToLeft);
        rmsDifferenceLineEdit->setText(QString::fromUtf8("1.0e-5"));
        rmsDifferenceLineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(1, QFormLayout::FieldRole, rmsDifferenceLineEdit);

        label_4 = new QLabel(tabStdParams);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("color: blue;"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        overlapSpinBox = new QSpinBox(tabStdParams);
        overlapSpinBox->setObjectName(QString::fromUtf8("overlapSpinBox"));
        overlapSpinBox->setStyleSheet(QString::fromUtf8("color: blue;"));
        overlapSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        overlapSpinBox->setSuffix(QString::fromUtf8("%"));
        overlapSpinBox->setMinimum(1);
        overlapSpinBox->setMaximum(100);
        overlapSpinBox->setSingleStep(10);
        overlapSpinBox->setValue(100);

        formLayout->setWidget(2, QFormLayout::FieldRole, overlapSpinBox);


        verticalLayout_3->addLayout(formLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        adjustScaleCheckBox = new QCheckBox(tabStdParams);
        adjustScaleCheckBox->setObjectName(QString::fromUtf8("adjustScaleCheckBox"));

        verticalLayout_3->addWidget(adjustScaleCheckBox);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        threadCountFrame = new QFrame(tabStdParams);
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


        horizontalLayout_7->addWidget(threadCountFrame);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_7);

        tabWidget->addTab(tabStdParams, QString());
        tabResearchParams = new QWidget();
        tabResearchParams->setObjectName(QString::fromUtf8("tabResearchParams"));
        verticalLayout = new QVBoxLayout(tabResearchParams);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label = new QLabel(tabResearchParams);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label);

        randomSamplingLimitSpinBox = new QSpinBox(tabResearchParams);
        randomSamplingLimitSpinBox->setObjectName(QString::fromUtf8("randomSamplingLimitSpinBox"));
        randomSamplingLimitSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        randomSamplingLimitSpinBox->setMaximum(1000000000);
        randomSamplingLimitSpinBox->setSingleStep(10000);
        randomSamplingLimitSpinBox->setValue(50000);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, randomSamplingLimitSpinBox);

        label_2 = new QLabel(tabResearchParams);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_2);

        rotComboBox = new QComboBox(tabResearchParams);
        rotComboBox->addItem(QString::fromUtf8("XYZ"));
        rotComboBox->addItem(QString::fromUtf8("X"));
        rotComboBox->addItem(QString::fromUtf8("Y"));
        rotComboBox->addItem(QString::fromUtf8("Z"));
        rotComboBox->setObjectName(QString::fromUtf8("rotComboBox"));
        sizePolicy1.setHeightForWidth(rotComboBox->sizePolicy().hasHeightForWidth());
        rotComboBox->setSizePolicy(sizePolicy1);
        rotComboBox->setLayoutDirection(Qt::RightToLeft);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, rotComboBox);

        label_3 = new QLabel(tabResearchParams);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        TxCheckBox = new QCheckBox(tabResearchParams);
        TxCheckBox->setObjectName(QString::fromUtf8("TxCheckBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(TxCheckBox->sizePolicy().hasHeightForWidth());
        TxCheckBox->setSizePolicy(sizePolicy3);
        TxCheckBox->setText(QString::fromUtf8("Tx"));
        TxCheckBox->setChecked(true);

        horizontalLayout_5->addWidget(TxCheckBox);

        TyCheckBox = new QCheckBox(tabResearchParams);
        TyCheckBox->setObjectName(QString::fromUtf8("TyCheckBox"));
        sizePolicy3.setHeightForWidth(TyCheckBox->sizePolicy().hasHeightForWidth());
        TyCheckBox->setSizePolicy(sizePolicy3);
        TyCheckBox->setText(QString::fromUtf8("Ty"));
        TyCheckBox->setChecked(true);

        horizontalLayout_5->addWidget(TyCheckBox);

        TzCheckBox = new QCheckBox(tabResearchParams);
        TzCheckBox->setObjectName(QString::fromUtf8("TzCheckBox"));
        sizePolicy3.setHeightForWidth(TzCheckBox->sizePolicy().hasHeightForWidth());
        TzCheckBox->setSizePolicy(sizePolicy3);
        TzCheckBox->setText(QString::fromUtf8("Tz"));
        TzCheckBox->setChecked(true);

        horizontalLayout_5->addWidget(TzCheckBox);


        formLayout_2->setLayout(2, QFormLayout::FieldRole, horizontalLayout_5);


        verticalLayout->addLayout(formLayout_2);

        pointsRemoval = new QCheckBox(tabResearchParams);
        pointsRemoval->setObjectName(QString::fromUtf8("pointsRemoval"));

        verticalLayout->addWidget(pointsRemoval);

        checkBoxUseDataSFAsWeights = new QCheckBox(tabResearchParams);
        checkBoxUseDataSFAsWeights->setObjectName(QString::fromUtf8("checkBoxUseDataSFAsWeights"));

        verticalLayout->addWidget(checkBoxUseDataSFAsWeights);

        checkBoxUseModelSFAsWeights = new QCheckBox(tabResearchParams);
        checkBoxUseModelSFAsWeights->setObjectName(QString::fromUtf8("checkBoxUseModelSFAsWeights"));

        verticalLayout->addWidget(checkBoxUseModelSFAsWeights);

        tabWidget->addTab(tabResearchParams, QString());

        verticalLayout_2->addWidget(tabWidget);

        frame = new QFrame(RegistrationDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);

        verticalLayout_2->addWidget(frame);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(RegistrationDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);

        QWidget::setTabOrder(dataLineEdit, modelLineEdit);
        QWidget::setTabOrder(modelLineEdit, swapButton);
        QWidget::setTabOrder(swapButton, buttonBox);
        QWidget::setTabOrder(buttonBox, dataColorButton);
        QWidget::setTabOrder(dataColorButton, modelColorButton);

        retranslateUi(RegistrationDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), RegistrationDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), RegistrationDialog, SLOT(reject()));
        QObject::connect(iterationsCriterion, SIGNAL(toggled(bool)), maxIterationCount, SLOT(setEnabled(bool)));
        QObject::connect(errorCriterion, SIGNAL(toggled(bool)), rmsDifferenceLineEdit, SLOT(setEnabled(bool)));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(RegistrationDialog);
    } // setupUi

    void retranslateUi(QDialog *RegistrationDialog)
    {
        RegistrationDialog->setWindowTitle(QCoreApplication::translate("RegistrationDialog", "Clouds registration", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("RegistrationDialog", "Role assignation", nullptr));
#if QT_CONFIG(tooltip)
        label_10->setToolTip(QCoreApplication::translate("RegistrationDialog", "'data' entity", nullptr));
#endif // QT_CONFIG(tooltip)
        label_10->setText(QCoreApplication::translate("RegistrationDialog", "aligned", nullptr));
#if QT_CONFIG(tooltip)
        dataLineEdit->setToolTip(QCoreApplication::translate("RegistrationDialog", "<html><head/><body><p>entity to align (will be displaced)</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        dataLineEdit->setStatusTip(QCoreApplication::translate("RegistrationDialog", "the data cloud is the entity to align with the model cloud : it will be displaced (red cloud)", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(tooltip)
        label_9->setToolTip(QCoreApplication::translate("RegistrationDialog", "'model' entity", nullptr));
#endif // QT_CONFIG(tooltip)
        label_9->setText(QCoreApplication::translate("RegistrationDialog", "reference", nullptr));
#if QT_CONFIG(tooltip)
        modelLineEdit->setToolTip(QCoreApplication::translate("RegistrationDialog", "<html><head/><body><p>reference entity (won't move)</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        modelLineEdit->setStatusTip(QCoreApplication::translate("RegistrationDialog", "the model cloud is the reference : it won't move (yellow cloud)", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(tooltip)
        swapButton->setToolTip(QCoreApplication::translate("RegistrationDialog", "press once to exchange model and data clouds", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        swapButton->setStatusTip(QCoreApplication::translate("RegistrationDialog", "press once to exchange model and data clouds", nullptr));
#endif // QT_CONFIG(statustip)
        swapButton->setText(QCoreApplication::translate("RegistrationDialog", "swap", nullptr));
#if QT_CONFIG(tooltip)
        iterationsCriterion->setToolTip(QCoreApplication::translate("RegistrationDialog", "By choosing this criterion, you can control the computation time.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        iterationsCriterion->setStatusTip(QCoreApplication::translate("RegistrationDialog", "By choosing this criterion, you can control the computation time.", nullptr));
#endif // QT_CONFIG(statustip)
        iterationsCriterion->setText(QCoreApplication::translate("RegistrationDialog", "Number of iterations", nullptr));
#if QT_CONFIG(tooltip)
        maxIterationCount->setToolTip(QCoreApplication::translate("RegistrationDialog", "Set the maximal number of step for the algorithm regsitration computation .", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        errorCriterion->setToolTip(QCoreApplication::translate("RegistrationDialog", "By choosing this criterion, you can control the quality of the result.", nullptr));
#endif // QT_CONFIG(tooltip)
        errorCriterion->setText(QCoreApplication::translate("RegistrationDialog", "RMS difference", nullptr));
#if QT_CONFIG(tooltip)
        rmsDifferenceLineEdit->setToolTip(QCoreApplication::translate("RegistrationDialog", "Set the minimum RMS improvement between 2 consecutive iterations (below which the registration process will stop).", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        label_4->setToolTip(QCoreApplication::translate("RegistrationDialog", "Rough estimation of the final overlap ratio of the data cloud (the smaller, the better the initial registration should be!)", nullptr));
#endif // QT_CONFIG(tooltip)
        label_4->setText(QCoreApplication::translate("RegistrationDialog", "Final overlap", nullptr));
#if QT_CONFIG(tooltip)
        overlapSpinBox->setToolTip(QCoreApplication::translate("RegistrationDialog", "Rough estimation of the final overlap ratio of the data cloud (the smaller, the better the initial registration should be!)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        adjustScaleCheckBox->setStatusTip(QCoreApplication::translate("RegistrationDialog", "Whether to adjust the scale of the 'data' entity", nullptr));
#endif // QT_CONFIG(statustip)
        adjustScaleCheckBox->setText(QCoreApplication::translate("RegistrationDialog", "adjust scale", nullptr));
        label_6->setText(QCoreApplication::translate("RegistrationDialog", "max thread count", nullptr));
#if QT_CONFIG(tooltip)
        maxThreadCountSpinBox->setToolTip(QCoreApplication::translate("RegistrationDialog", "Maximum number of threads/cores to be used\n"
"(CC or your computer might not respond for a while if you use all available cores)", nullptr));
#endif // QT_CONFIG(tooltip)
        tabWidget->setTabText(tabWidget->indexOf(tabStdParams), QCoreApplication::translate("RegistrationDialog", "Parameters", nullptr));
        label->setText(QCoreApplication::translate("RegistrationDialog", "Random sampling limit", nullptr));
#if QT_CONFIG(tooltip)
        randomSamplingLimitSpinBox->setToolTip(QCoreApplication::translate("RegistrationDialog", "Above this limit, clouds are randomly resampled at each iteration", nullptr));
#endif // QT_CONFIG(tooltip)
        label_2->setText(QCoreApplication::translate("RegistrationDialog", "Rotation", nullptr));

        label_3->setText(QCoreApplication::translate("RegistrationDialog", "Translation", nullptr));
#if QT_CONFIG(tooltip)
        pointsRemoval->setToolTip(QCoreApplication::translate("RegistrationDialog", "Chose this option to remove points that are likely to disturb the registration during the computation.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        pointsRemoval->setStatusTip(QCoreApplication::translate("RegistrationDialog", "Chose this option to remove points that are likely to disturb the registration during the computation.", nullptr));
#endif // QT_CONFIG(statustip)
        pointsRemoval->setText(QCoreApplication::translate("RegistrationDialog", "Enable farthest points removal", nullptr));
#if QT_CONFIG(tooltip)
        checkBoxUseDataSFAsWeights->setToolTip(QCoreApplication::translate("RegistrationDialog", "<html><head/><body><p>Use the displayed scalar field as weights (the bigger its associated scalar value/weight is, the more influence the point will have).</p><p>Note that only absolute distances are considered (i.e. minimal weight is 0).</p><p>Weights are automatically normalized.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxUseDataSFAsWeights->setText(QCoreApplication::translate("RegistrationDialog", "Data: use displayed S.F. as weights", nullptr));
#if QT_CONFIG(tooltip)
        checkBoxUseModelSFAsWeights->setToolTip(QCoreApplication::translate("RegistrationDialog", "<html><head/><body><p>Use the displayed scalar field as weights (the bigger its associated scalar value/weight is, the more influence the point will have).</p><p>Note that only absolute distances are considered (i.e. minimal weight is 0).</p><p>Weights are automatically normalized.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxUseModelSFAsWeights->setText(QCoreApplication::translate("RegistrationDialog", "Model: use displayed S.F. as weights (only for clouds)", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabResearchParams), QCoreApplication::translate("RegistrationDialog", "Research", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegistrationDialog: public Ui_RegistrationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRATIONDLG_H

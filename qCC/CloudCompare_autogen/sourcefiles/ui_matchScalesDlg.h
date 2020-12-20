/********************************************************************************
** Form generated from reading UI file 'matchScalesDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MATCHSCALESDLG_H
#define UI_MATCHSCALESDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_MatchScalesDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QListWidget *listWidget;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QRadioButton *bbMaxDimRadioButton;
    QRadioButton *bbVolumeRadioButton;
    QRadioButton *pcaRadioButton;
    QRadioButton *icpRadioButton;
    QGroupBox *icpGroupBox;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *rmsDifferenceLineEdit;
    QSpinBox *overlapSpinBox;
    QLabel *label_4;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *MatchScalesDialog)
    {
        if (MatchScalesDialog->objectName().isEmpty())
            MatchScalesDialog->setObjectName(QString::fromUtf8("MatchScalesDialog"));
        MatchScalesDialog->resize(400, 500);
        verticalLayout_3 = new QVBoxLayout(MatchScalesDialog);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBox = new QGroupBox(MatchScalesDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        listWidget = new QListWidget(groupBox);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout_2->addWidget(listWidget);


        verticalLayout_3->addWidget(groupBox);

        groupBox_2 = new QGroupBox(MatchScalesDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        bbMaxDimRadioButton = new QRadioButton(groupBox_2);
        bbMaxDimRadioButton->setObjectName(QString::fromUtf8("bbMaxDimRadioButton"));

        verticalLayout->addWidget(bbMaxDimRadioButton);

        bbVolumeRadioButton = new QRadioButton(groupBox_2);
        bbVolumeRadioButton->setObjectName(QString::fromUtf8("bbVolumeRadioButton"));

        verticalLayout->addWidget(bbVolumeRadioButton);

        pcaRadioButton = new QRadioButton(groupBox_2);
        pcaRadioButton->setObjectName(QString::fromUtf8("pcaRadioButton"));
        pcaRadioButton->setChecked(true);

        verticalLayout->addWidget(pcaRadioButton);

        icpRadioButton = new QRadioButton(groupBox_2);
        icpRadioButton->setObjectName(QString::fromUtf8("icpRadioButton"));

        verticalLayout->addWidget(icpRadioButton);


        verticalLayout_3->addWidget(groupBox_2);

        icpGroupBox = new QGroupBox(MatchScalesDialog);
        icpGroupBox->setObjectName(QString::fromUtf8("icpGroupBox"));
        icpGroupBox->setEnabled(false);
        formLayout = new QFormLayout(icpGroupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_2 = new QLabel(icpGroupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        rmsDifferenceLineEdit = new QLineEdit(icpGroupBox);
        rmsDifferenceLineEdit->setObjectName(QString::fromUtf8("rmsDifferenceLineEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(rmsDifferenceLineEdit->sizePolicy().hasHeightForWidth());
        rmsDifferenceLineEdit->setSizePolicy(sizePolicy);
        rmsDifferenceLineEdit->setLayoutDirection(Qt::RightToLeft);
        rmsDifferenceLineEdit->setText(QString::fromUtf8("1.0e-5"));
        rmsDifferenceLineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::FieldRole, rmsDifferenceLineEdit);

        overlapSpinBox = new QSpinBox(icpGroupBox);
        overlapSpinBox->setObjectName(QString::fromUtf8("overlapSpinBox"));
        overlapSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        overlapSpinBox->setSuffix(QString::fromUtf8("%"));
        overlapSpinBox->setMinimum(1);
        overlapSpinBox->setMaximum(100);
        overlapSpinBox->setSingleStep(10);
        overlapSpinBox->setValue(100);

        formLayout->setWidget(1, QFormLayout::FieldRole, overlapSpinBox);

        label_4 = new QLabel(icpGroupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_4);


        verticalLayout_3->addWidget(icpGroupBox);

        buttonBox = new QDialogButtonBox(MatchScalesDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_3->addWidget(buttonBox);


        retranslateUi(MatchScalesDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), MatchScalesDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), MatchScalesDialog, SLOT(reject()));
        QObject::connect(icpRadioButton, SIGNAL(toggled(bool)), icpGroupBox, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(MatchScalesDialog);
    } // setupUi

    void retranslateUi(QDialog *MatchScalesDialog)
    {
        MatchScalesDialog->setWindowTitle(QCoreApplication::translate("MatchScalesDialog", "Match scales", nullptr));
#if QT_CONFIG(tooltip)
        groupBox->setToolTip(QCoreApplication::translate("MatchScalesDialog", "Choose the reference entity (its scale won't change)", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox->setTitle(QCoreApplication::translate("MatchScalesDialog", "Reference entity", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MatchScalesDialog", "Matching criterion", nullptr));
#if QT_CONFIG(tooltip)
        bbMaxDimRadioButton->setToolTip(QCoreApplication::translate("MatchScalesDialog", "The scaling ratio will be deduced from the largest bounding-box dimension", nullptr));
#endif // QT_CONFIG(tooltip)
        bbMaxDimRadioButton->setText(QCoreApplication::translate("MatchScalesDialog", "max bounding-box dimension", nullptr));
#if QT_CONFIG(tooltip)
        bbVolumeRadioButton->setToolTip(QCoreApplication::translate("MatchScalesDialog", "The scaling ratio will be deduced from the bounding-box volume", nullptr));
#endif // QT_CONFIG(tooltip)
        bbVolumeRadioButton->setText(QCoreApplication::translate("MatchScalesDialog", "bounding-box volume", nullptr));
#if QT_CONFIG(tooltip)
        pcaRadioButton->setToolTip(QCoreApplication::translate("MatchScalesDialog", "The scaling ratio will be deduced from the principal cloud dimension (by PCA analysis)", nullptr));
#endif // QT_CONFIG(tooltip)
        pcaRadioButton->setText(QCoreApplication::translate("MatchScalesDialog", "principal dimension (PCA)", nullptr));
#if QT_CONFIG(tooltip)
        icpRadioButton->setToolTip(QCoreApplication::translate("MatchScalesDialog", "The scaling ratio will be deduced from automatic registration (with unconstrained scale).\n"
"Should be used after one of the previous methods!", nullptr));
#endif // QT_CONFIG(tooltip)
        icpRadioButton->setText(QCoreApplication::translate("MatchScalesDialog", "ICP (only the scale will be applied)", nullptr));
#if QT_CONFIG(tooltip)
        icpGroupBox->setToolTip(QCoreApplication::translate("MatchScalesDialog", "Parameters for ICP registration", nullptr));
#endif // QT_CONFIG(tooltip)
        icpGroupBox->setTitle(QCoreApplication::translate("MatchScalesDialog", "ICP parameters", nullptr));
        label_2->setText(QCoreApplication::translate("MatchScalesDialog", "RMS difference", nullptr));
#if QT_CONFIG(tooltip)
        rmsDifferenceLineEdit->setToolTip(QCoreApplication::translate("MatchScalesDialog", "Set the minimum RMS improvement between 2 consecutive iterations (below which the registration process will stop).", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        overlapSpinBox->setToolTip(QCoreApplication::translate("MatchScalesDialog", "Rough estimation of the final overlap ratio of the data cloud (the smaller, the better the initial registration should be!)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        label_4->setToolTip(QCoreApplication::translate("MatchScalesDialog", "Rough estimation of the final overlap ratio of the data cloud (the smaller, the better the initial registration should be!)", nullptr));
#endif // QT_CONFIG(tooltip)
        label_4->setText(QCoreApplication::translate("MatchScalesDialog", "Final overlap", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MatchScalesDialog: public Ui_MatchScalesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MATCHSCALESDLG_H

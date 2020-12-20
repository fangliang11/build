/********************************************************************************
** Form generated from reading UI file 'statisticalTestDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATISTICALTESTDLG_H
#define UI_STATISTICALTESTDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_StatisticalTestDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *param1Label;
    QSpacerItem *horizontalSpacer_3;
    QDoubleSpinBox *param1SpinBox;
    QLabel *param2Label;
    QSpacerItem *horizontalSpacer_4;
    QDoubleSpinBox *param2SpinBox;
    QDoubleSpinBox *param3SpinBox;
    QLabel *param3Label;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QDoubleSpinBox *probaSpinBox;
    QHBoxLayout *horizontalLayout_5;
    QLabel *nLabel;
    QSpacerItem *horizontalSpacer_2;
    QSpinBox *neighborsSpinBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *StatisticalTestDialog)
    {
        if (StatisticalTestDialog->objectName().isEmpty())
            StatisticalTestDialog->setObjectName(QString::fromUtf8("StatisticalTestDialog"));
        StatisticalTestDialog->resize(206, 217);
        verticalLayout = new QVBoxLayout(StatisticalTestDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(StatisticalTestDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        param1Label = new QLabel(groupBox);
        param1Label->setObjectName(QString::fromUtf8("param1Label"));

        gridLayout->addWidget(param1Label, 0, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(2, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 1, 1, 1);

        param1SpinBox = new QDoubleSpinBox(groupBox);
        param1SpinBox->setObjectName(QString::fromUtf8("param1SpinBox"));
        param1SpinBox->setMaximumSize(QSize(120, 16777215));
        param1SpinBox->setDecimals(6);
        param1SpinBox->setMinimum(-100000000000000005366162204393472.000000000000000);
        param1SpinBox->setMaximum(100000000000000005366162204393472.000000000000000);
        param1SpinBox->setValue(0.000000000000000);

        gridLayout->addWidget(param1SpinBox, 0, 2, 1, 1);

        param2Label = new QLabel(groupBox);
        param2Label->setObjectName(QString::fromUtf8("param2Label"));

        gridLayout->addWidget(param2Label, 1, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(2, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 1, 1, 1, 1);

        param2SpinBox = new QDoubleSpinBox(groupBox);
        param2SpinBox->setObjectName(QString::fromUtf8("param2SpinBox"));
        param2SpinBox->setMaximumSize(QSize(120, 16777215));
        param2SpinBox->setDecimals(6);
        param2SpinBox->setMinimum(-100000000000000005366162204393472.000000000000000);
        param2SpinBox->setMaximum(100000000000000005366162204393472.000000000000000);
        param2SpinBox->setValue(40.000000000000000);

        gridLayout->addWidget(param2SpinBox, 1, 2, 1, 1);

        param3SpinBox = new QDoubleSpinBox(groupBox);
        param3SpinBox->setObjectName(QString::fromUtf8("param3SpinBox"));
        param3SpinBox->setMaximumSize(QSize(120, 16777215));
        param3SpinBox->setDecimals(6);
        param3SpinBox->setMinimum(-1000000000.000000000000000);
        param3SpinBox->setMaximum(1000000000.000000000000000);
        param3SpinBox->setSingleStep(1.000000000000000);
        param3SpinBox->setValue(0.000000000000000);

        gridLayout->addWidget(param3SpinBox, 2, 2, 1, 1);

        param3Label = new QLabel(groupBox);
        param3Label->setObjectName(QString::fromUtf8("param3Label"));

        gridLayout->addWidget(param3Label, 2, 0, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(2, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 2, 1, 1, 1);


        verticalLayout->addWidget(groupBox);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label = new QLabel(StatisticalTestDialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_4->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        probaSpinBox = new QDoubleSpinBox(StatisticalTestDialog);
        probaSpinBox->setObjectName(QString::fromUtf8("probaSpinBox"));
        probaSpinBox->setDecimals(6);
        probaSpinBox->setMinimum(0.000005000000000);
        probaSpinBox->setMaximum(5.000000000000000);
        probaSpinBox->setSingleStep(0.000500000000000);
        probaSpinBox->setValue(0.000500000000000);

        horizontalLayout_4->addWidget(probaSpinBox);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        nLabel = new QLabel(StatisticalTestDialog);
        nLabel->setObjectName(QString::fromUtf8("nLabel"));

        horizontalLayout_5->addWidget(nLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        neighborsSpinBox = new QSpinBox(StatisticalTestDialog);
        neighborsSpinBox->setObjectName(QString::fromUtf8("neighborsSpinBox"));
        neighborsSpinBox->setMinimum(16);
        neighborsSpinBox->setMaximum(128);
        neighborsSpinBox->setSingleStep(1);

        horizontalLayout_5->addWidget(neighborsSpinBox);


        verticalLayout->addLayout(horizontalLayout_5);

        buttonBox = new QDialogButtonBox(StatisticalTestDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(StatisticalTestDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), StatisticalTestDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), StatisticalTestDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(StatisticalTestDialog);
    } // setupUi

    void retranslateUi(QDialog *StatisticalTestDialog)
    {
        StatisticalTestDialog->setWindowTitle(QCoreApplication::translate("StatisticalTestDialog", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("StatisticalTestDialog", "Noise model", nullptr));
        param1Label->setText(QCoreApplication::translate("StatisticalTestDialog", "param1", nullptr));
        param2Label->setText(QCoreApplication::translate("StatisticalTestDialog", "param2", nullptr));
        param3Label->setText(QCoreApplication::translate("StatisticalTestDialog", "param3", nullptr));
#if QT_CONFIG(statustip)
        label->setStatusTip(QCoreApplication::translate("StatisticalTestDialog", "false rejection probability", nullptr));
#endif // QT_CONFIG(statustip)
        label->setText(QCoreApplication::translate("StatisticalTestDialog", "p(Chi2)", nullptr));
#if QT_CONFIG(statustip)
        nLabel->setStatusTip(QCoreApplication::translate("StatisticalTestDialog", "neighbors used to compute observed local dist.", nullptr));
#endif // QT_CONFIG(statustip)
        nLabel->setText(QCoreApplication::translate("StatisticalTestDialog", "Neighbors", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StatisticalTestDialog: public Ui_StatisticalTestDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATISTICALTESTDLG_H

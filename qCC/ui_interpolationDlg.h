/********************************************************************************
** Form generated from reading UI file 'interpolationDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTERPOLATIONDLG_H
#define UI_INTERPOLATIONDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_InterpolationDlg
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QDoubleSpinBox *radiusDoubleSpinBox;
    QRadioButton *radiusRadioButton;
    QRadioButton *nnRadioButton;
    QRadioButton *knnRadioButton;
    QSpinBox *knnSpinBox;
    QGroupBox *algoGroupBox;
    QGridLayout *gridLayout_2;
    QRadioButton *medianRadioButton;
    QRadioButton *averageRadioButton;
    QRadioButton *normalDistribRadioButton;
    QFrame *kernelFrame;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QDoubleSpinBox *kernelDoubleSpinBox;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *InterpolationDlg)
    {
        if (InterpolationDlg->objectName().isEmpty())
            InterpolationDlg->setObjectName(QString::fromUtf8("InterpolationDlg"));
        InterpolationDlg->resize(400, 260);
        verticalLayout = new QVBoxLayout(InterpolationDlg);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(InterpolationDlg);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        radiusDoubleSpinBox = new QDoubleSpinBox(groupBox);
        radiusDoubleSpinBox->setObjectName(QString::fromUtf8("radiusDoubleSpinBox"));
        radiusDoubleSpinBox->setDecimals(6);
        radiusDoubleSpinBox->setMaximum(1000000000.000000000000000);

        gridLayout->addWidget(radiusDoubleSpinBox, 1, 2, 1, 1);

        radiusRadioButton = new QRadioButton(groupBox);
        radiusRadioButton->setObjectName(QString::fromUtf8("radiusRadioButton"));
        radiusRadioButton->setChecked(true);

        gridLayout->addWidget(radiusRadioButton, 0, 2, 1, 1);

        nnRadioButton = new QRadioButton(groupBox);
        nnRadioButton->setObjectName(QString::fromUtf8("nnRadioButton"));

        gridLayout->addWidget(nnRadioButton, 0, 0, 1, 1);

        knnRadioButton = new QRadioButton(groupBox);
        knnRadioButton->setObjectName(QString::fromUtf8("knnRadioButton"));

        gridLayout->addWidget(knnRadioButton, 0, 1, 1, 1);

        knnSpinBox = new QSpinBox(groupBox);
        knnSpinBox->setObjectName(QString::fromUtf8("knnSpinBox"));
        knnSpinBox->setEnabled(false);
        knnSpinBox->setMinimum(3);
        knnSpinBox->setMaximum(1000000000);
        knnSpinBox->setValue(8);

        gridLayout->addWidget(knnSpinBox, 1, 1, 1, 1);


        verticalLayout->addWidget(groupBox);

        algoGroupBox = new QGroupBox(InterpolationDlg);
        algoGroupBox->setObjectName(QString::fromUtf8("algoGroupBox"));
        gridLayout_2 = new QGridLayout(algoGroupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        medianRadioButton = new QRadioButton(algoGroupBox);
        medianRadioButton->setObjectName(QString::fromUtf8("medianRadioButton"));
        medianRadioButton->setChecked(true);

        gridLayout_2->addWidget(medianRadioButton, 1, 0, 1, 1);

        averageRadioButton = new QRadioButton(algoGroupBox);
        averageRadioButton->setObjectName(QString::fromUtf8("averageRadioButton"));

        gridLayout_2->addWidget(averageRadioButton, 0, 0, 1, 1);

        normalDistribRadioButton = new QRadioButton(algoGroupBox);
        normalDistribRadioButton->setObjectName(QString::fromUtf8("normalDistribRadioButton"));

        gridLayout_2->addWidget(normalDistribRadioButton, 2, 0, 1, 1);

        kernelFrame = new QFrame(algoGroupBox);
        kernelFrame->setObjectName(QString::fromUtf8("kernelFrame"));
        kernelFrame->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(kernelFrame->sizePolicy().hasHeightForWidth());
        kernelFrame->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(kernelFrame);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(81, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(kernelFrame);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        kernelDoubleSpinBox = new QDoubleSpinBox(kernelFrame);
        kernelDoubleSpinBox->setObjectName(QString::fromUtf8("kernelDoubleSpinBox"));
        kernelDoubleSpinBox->setDecimals(6);
        kernelDoubleSpinBox->setMaximum(1000000000.000000000000000);
        kernelDoubleSpinBox->setValue(1.000000000000000);

        horizontalLayout->addWidget(kernelDoubleSpinBox);


        gridLayout_2->addWidget(kernelFrame, 2, 1, 1, 1);


        verticalLayout->addWidget(algoGroupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(InterpolationDlg);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(InterpolationDlg);
        QObject::connect(buttonBox, SIGNAL(accepted()), InterpolationDlg, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), InterpolationDlg, SLOT(reject()));
        QObject::connect(knnRadioButton, SIGNAL(toggled(bool)), knnSpinBox, SLOT(setEnabled(bool)));
        QObject::connect(radiusRadioButton, SIGNAL(toggled(bool)), radiusDoubleSpinBox, SLOT(setEnabled(bool)));
        QObject::connect(normalDistribRadioButton, SIGNAL(toggled(bool)), kernelFrame, SLOT(setEnabled(bool)));
        QObject::connect(nnRadioButton, SIGNAL(toggled(bool)), algoGroupBox, SLOT(setDisabled(bool)));

        QMetaObject::connectSlotsByName(InterpolationDlg);
    } // setupUi

    void retranslateUi(QDialog *InterpolationDlg)
    {
        InterpolationDlg->setWindowTitle(QCoreApplication::translate("InterpolationDlg", "Interpolation", nullptr));
        groupBox->setTitle(QCoreApplication::translate("InterpolationDlg", "Neighbors extraction", nullptr));
#if QT_CONFIG(tooltip)
        radiusDoubleSpinBox->setToolTip(QCoreApplication::translate("InterpolationDlg", "Radius of the sphere inside which neighbors will be extracted", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        radiusRadioButton->setToolTip(QCoreApplication::translate("InterpolationDlg", "Extracts the neighbors inside a sphere", nullptr));
#endif // QT_CONFIG(tooltip)
        radiusRadioButton->setText(QCoreApplication::translate("InterpolationDlg", "Radius (Sphere)", nullptr));
#if QT_CONFIG(tooltip)
        nnRadioButton->setToolTip(QCoreApplication::translate("InterpolationDlg", "Use only the nearest neighbor (fast)", nullptr));
#endif // QT_CONFIG(tooltip)
        nnRadioButton->setText(QCoreApplication::translate("InterpolationDlg", "Nearest neighbor", nullptr));
#if QT_CONFIG(tooltip)
        knnRadioButton->setToolTip(QCoreApplication::translate("InterpolationDlg", "Use the 'k' nearest neighbors\n"
"(faster than 'radius' based search, but more approximate)", nullptr));
#endif // QT_CONFIG(tooltip)
        knnRadioButton->setText(QCoreApplication::translate("InterpolationDlg", "Nearest neighbors", nullptr));
#if QT_CONFIG(tooltip)
        knnSpinBox->setToolTip(QCoreApplication::translate("InterpolationDlg", "Number of neighbors to extract", nullptr));
#endif // QT_CONFIG(tooltip)
        algoGroupBox->setTitle(QCoreApplication::translate("InterpolationDlg", "Interpolation algorithm", nullptr));
#if QT_CONFIG(tooltip)
        medianRadioButton->setToolTip(QCoreApplication::translate("InterpolationDlg", "Keep the median of the neighbors SF values", nullptr));
#endif // QT_CONFIG(tooltip)
        medianRadioButton->setText(QCoreApplication::translate("InterpolationDlg", "Median", nullptr));
#if QT_CONFIG(tooltip)
        averageRadioButton->setToolTip(QCoreApplication::translate("InterpolationDlg", "Keep the average of the neighbors SF values", nullptr));
#endif // QT_CONFIG(tooltip)
        averageRadioButton->setText(QCoreApplication::translate("InterpolationDlg", "Average", nullptr));
#if QT_CONFIG(tooltip)
        normalDistribRadioButton->setToolTip(QCoreApplication::translate("InterpolationDlg", "Compute a weighted average of the neighbors SF values\n"
"(the weights will follow a Normal distribution)", nullptr));
#endif // QT_CONFIG(tooltip)
        normalDistribRadioButton->setText(QCoreApplication::translate("InterpolationDlg", "Normal distribution", nullptr));
        label->setText(QCoreApplication::translate("InterpolationDlg", "sigma", nullptr));
#if QT_CONFIG(tooltip)
        kernelDoubleSpinBox->setToolTip(QCoreApplication::translate("InterpolationDlg", "Kernel of the Normal distribution", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class InterpolationDlg: public Ui_InterpolationDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERPOLATIONDLG_H

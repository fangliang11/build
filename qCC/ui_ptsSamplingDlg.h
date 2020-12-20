/********************************************************************************
** Form generated from reading UI file 'ptsSamplingDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PTSSAMPLINGDLG_H
#define UI_PTSSAMPLINGDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PointsSamplingDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *parametersFrame;
    QGridLayout *gridLayout;
    QRadioButton *pnRadioButton;
    QRadioButton *dRadioButton;
    QSpinBox *pnSpinBox;
    QDoubleSpinBox *dDoubleSpinBox;
    QFrame *optionsFrame;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *normalsCheckBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QCheckBox *colorsCheckBox;
    QCheckBox *textureCheckBox;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PointsSamplingDialog)
    {
        if (PointsSamplingDialog->objectName().isEmpty())
            PointsSamplingDialog->setObjectName(QString::fromUtf8("PointsSamplingDialog"));
        PointsSamplingDialog->resize(400, 160);
        verticalLayout = new QVBoxLayout(PointsSamplingDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        parametersFrame = new QFrame(PointsSamplingDialog);
        parametersFrame->setObjectName(QString::fromUtf8("parametersFrame"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(parametersFrame->sizePolicy().hasHeightForWidth());
        parametersFrame->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(parametersFrame);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pnRadioButton = new QRadioButton(parametersFrame);
        pnRadioButton->setObjectName(QString::fromUtf8("pnRadioButton"));
        pnRadioButton->setChecked(true);

        gridLayout->addWidget(pnRadioButton, 0, 0, 1, 1);

        dRadioButton = new QRadioButton(parametersFrame);
        dRadioButton->setObjectName(QString::fromUtf8("dRadioButton"));

        gridLayout->addWidget(dRadioButton, 0, 1, 1, 1);

        pnSpinBox = new QSpinBox(parametersFrame);
        pnSpinBox->setObjectName(QString::fromUtf8("pnSpinBox"));
        pnSpinBox->setMinimum(1);
        pnSpinBox->setMaximum(100000000);
        pnSpinBox->setSingleStep(10000);
        pnSpinBox->setValue(1000000);

        gridLayout->addWidget(pnSpinBox, 1, 0, 1, 1);

        dDoubleSpinBox = new QDoubleSpinBox(parametersFrame);
        dDoubleSpinBox->setObjectName(QString::fromUtf8("dDoubleSpinBox"));
        dDoubleSpinBox->setEnabled(false);
        dDoubleSpinBox->setDecimals(6);
        dDoubleSpinBox->setMinimum(0.000001000000000);
        dDoubleSpinBox->setMaximum(100000000.000000000000000);
        dDoubleSpinBox->setValue(10.000000000000000);

        gridLayout->addWidget(dDoubleSpinBox, 1, 1, 1, 1);


        verticalLayout->addWidget(parametersFrame);

        optionsFrame = new QFrame(PointsSamplingDialog);
        optionsFrame->setObjectName(QString::fromUtf8("optionsFrame"));
        optionsFrame->setFrameShape(QFrame::StyledPanel);
        optionsFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(optionsFrame);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        normalsCheckBox = new QCheckBox(optionsFrame);
        normalsCheckBox->setObjectName(QString::fromUtf8("normalsCheckBox"));
        normalsCheckBox->setChecked(true);

        verticalLayout_2->addWidget(normalsCheckBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(optionsFrame);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        colorsCheckBox = new QCheckBox(optionsFrame);
        colorsCheckBox->setObjectName(QString::fromUtf8("colorsCheckBox"));
        colorsCheckBox->setChecked(true);

        horizontalLayout->addWidget(colorsCheckBox);

        textureCheckBox = new QCheckBox(optionsFrame);
        textureCheckBox->setObjectName(QString::fromUtf8("textureCheckBox"));
        textureCheckBox->setChecked(true);

        horizontalLayout->addWidget(textureCheckBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout->addWidget(optionsFrame);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(PointsSamplingDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(PointsSamplingDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), PointsSamplingDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PointsSamplingDialog, SLOT(reject()));
        QObject::connect(dRadioButton, SIGNAL(toggled(bool)), dDoubleSpinBox, SLOT(setEnabled(bool)));
        QObject::connect(pnRadioButton, SIGNAL(toggled(bool)), pnSpinBox, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(PointsSamplingDialog);
    } // setupUi

    void retranslateUi(QDialog *PointsSamplingDialog)
    {
        PointsSamplingDialog->setWindowTitle(QCoreApplication::translate("PointsSamplingDialog", "Points Sampling on mesh", nullptr));
#if QT_CONFIG(tooltip)
        pnRadioButton->setToolTip(QCoreApplication::translate("PointsSamplingDialog", "Total number of sampled points (approx.)", nullptr));
#endif // QT_CONFIG(tooltip)
        pnRadioButton->setText(QCoreApplication::translate("PointsSamplingDialog", "Points Number", nullptr));
#if QT_CONFIG(tooltip)
        dRadioButton->setToolTip(QCoreApplication::translate("PointsSamplingDialog", "Density: pts/square unit", nullptr));
#endif // QT_CONFIG(tooltip)
        dRadioButton->setText(QCoreApplication::translate("PointsSamplingDialog", "Density", nullptr));
#if QT_CONFIG(tooltip)
        pnSpinBox->setToolTip(QCoreApplication::translate("PointsSamplingDialog", "Total number of sampled points (approx.)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        dDoubleSpinBox->setToolTip(QCoreApplication::translate("PointsSamplingDialog", "Density: pts/square unit", nullptr));
#endif // QT_CONFIG(tooltip)
        normalsCheckBox->setText(QCoreApplication::translate("PointsSamplingDialog", "generate normals", nullptr));
        label->setText(QCoreApplication::translate("PointsSamplingDialog", "get colors", nullptr));
        colorsCheckBox->setText(QCoreApplication::translate("PointsSamplingDialog", "from RGB", nullptr));
        textureCheckBox->setText(QCoreApplication::translate("PointsSamplingDialog", "or from material/texture if available", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PointsSamplingDialog: public Ui_PointsSamplingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PTSSAMPLINGDLG_H

/********************************************************************************
** Form generated from reading UI file 'colorGradientDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLORGRADIENTDLG_H
#define UI_COLORGRADIENTDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ColorGradientDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QRadioButton *defaultRampRadioButton;
    QRadioButton *customRampRadioButton;
    QFrame *customRampFrame;
    QHBoxLayout *hboxLayout;
    QLabel *label;
    QToolButton *firstColorButton;
    QSpacerItem *spacerItem;
    QLabel *label_2;
    QToolButton *secondColorButton;
    QRadioButton *bandingRadioButton;
    QFrame *bandingFrame;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer;
    QDoubleSpinBox *bandingFreqSpinBox;
    QHBoxLayout *hboxLayout1;
    QLabel *label_3;
    QComboBox *directionComboBox;
    QHBoxLayout *hboxLayout2;
    QSpacerItem *spacerItem1;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ColorGradientDialog)
    {
        if (ColorGradientDialog->objectName().isEmpty())
            ColorGradientDialog->setObjectName(QString::fromUtf8("ColorGradientDialog"));
        ColorGradientDialog->resize(303, 278);
        verticalLayout_2 = new QVBoxLayout(ColorGradientDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox = new QGroupBox(ColorGradientDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        defaultRampRadioButton = new QRadioButton(groupBox);
        defaultRampRadioButton->setObjectName(QString::fromUtf8("defaultRampRadioButton"));
        defaultRampRadioButton->setChecked(true);

        verticalLayout->addWidget(defaultRampRadioButton);

        customRampRadioButton = new QRadioButton(groupBox);
        customRampRadioButton->setObjectName(QString::fromUtf8("customRampRadioButton"));

        verticalLayout->addWidget(customRampRadioButton);

        customRampFrame = new QFrame(groupBox);
        customRampFrame->setObjectName(QString::fromUtf8("customRampFrame"));
        customRampFrame->setEnabled(false);
        hboxLayout = new QHBoxLayout(customRampFrame);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(20, 0, 0, 0);
        label = new QLabel(customRampFrame);
        label->setObjectName(QString::fromUtf8("label"));

        hboxLayout->addWidget(label);

        firstColorButton = new QToolButton(customRampFrame);
        firstColorButton->setObjectName(QString::fromUtf8("firstColorButton"));
        firstColorButton->setText(QString::fromUtf8("..."));

        hboxLayout->addWidget(firstColorButton);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        label_2 = new QLabel(customRampFrame);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        hboxLayout->addWidget(label_2);

        secondColorButton = new QToolButton(customRampFrame);
        secondColorButton->setObjectName(QString::fromUtf8("secondColorButton"));
        secondColorButton->setText(QString::fromUtf8("..."));

        hboxLayout->addWidget(secondColorButton);


        verticalLayout->addWidget(customRampFrame);

        bandingRadioButton = new QRadioButton(groupBox);
        bandingRadioButton->setObjectName(QString::fromUtf8("bandingRadioButton"));

        verticalLayout->addWidget(bandingRadioButton);

        bandingFrame = new QFrame(groupBox);
        bandingFrame->setObjectName(QString::fromUtf8("bandingFrame"));
        bandingFrame->setEnabled(false);
        bandingFrame->setFrameShape(QFrame::StyledPanel);
        bandingFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(bandingFrame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(20, 0, 0, 0);
        label_4 = new QLabel(bandingFrame);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout->addWidget(label_4);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        bandingFreqSpinBox = new QDoubleSpinBox(bandingFrame);
        bandingFreqSpinBox->setObjectName(QString::fromUtf8("bandingFreqSpinBox"));
        bandingFreqSpinBox->setDecimals(3);
        bandingFreqSpinBox->setMinimum(0.000000000000000);
        bandingFreqSpinBox->setMaximum(10000000.000000000000000);
        bandingFreqSpinBox->setValue(5.000000000000000);

        horizontalLayout->addWidget(bandingFreqSpinBox);


        verticalLayout->addWidget(bandingFrame);


        verticalLayout_2->addWidget(groupBox);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        label_3 = new QLabel(ColorGradientDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        hboxLayout1->addWidget(label_3);

        directionComboBox = new QComboBox(ColorGradientDialog);
        directionComboBox->addItem(QString::fromUtf8("X"));
        directionComboBox->addItem(QString::fromUtf8("Y"));
        directionComboBox->addItem(QString::fromUtf8("Z"));
        directionComboBox->setObjectName(QString::fromUtf8("directionComboBox"));

        hboxLayout1->addWidget(directionComboBox);


        verticalLayout_2->addLayout(hboxLayout1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem1);

        buttonBox = new QDialogButtonBox(ColorGradientDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        hboxLayout2->addWidget(buttonBox);


        verticalLayout_2->addLayout(hboxLayout2);


        retranslateUi(ColorGradientDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ColorGradientDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ColorGradientDialog, SLOT(reject()));
        QObject::connect(bandingRadioButton, SIGNAL(toggled(bool)), bandingFrame, SLOT(setEnabled(bool)));
        QObject::connect(customRampRadioButton, SIGNAL(toggled(bool)), customRampFrame, SLOT(setEnabled(bool)));

        directionComboBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ColorGradientDialog);
    } // setupUi

    void retranslateUi(QDialog *ColorGradientDialog)
    {
        ColorGradientDialog->setWindowTitle(QCoreApplication::translate("ColorGradientDialog", "Gradient color", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ColorGradientDialog", "Color ramp", nullptr));
        defaultRampRadioButton->setText(QCoreApplication::translate("ColorGradientDialog", "Default", nullptr));
        customRampRadioButton->setText(QCoreApplication::translate("ColorGradientDialog", "Custom", nullptr));
        label->setText(QCoreApplication::translate("ColorGradientDialog", "First color", nullptr));
        label_2->setText(QCoreApplication::translate("ColorGradientDialog", "Second color", nullptr));
        bandingRadioButton->setText(QCoreApplication::translate("ColorGradientDialog", "Banding", nullptr));
        label_4->setText(QCoreApplication::translate("ColorGradientDialog", "Period", nullptr));
        label_3->setText(QCoreApplication::translate("ColorGradientDialog", "direction", nullptr));

    } // retranslateUi

};

namespace Ui {
    class ColorGradientDialog: public Ui_ColorGradientDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLORGRADIENTDLG_H

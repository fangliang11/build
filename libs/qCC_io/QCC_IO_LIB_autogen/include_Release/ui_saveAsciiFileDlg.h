/********************************************************************************
** Form generated from reading UI file 'saveAsciiFileDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAVEASCIIFILEDLG_H
#define UI_SAVEASCIIFILEDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AsciiSaveDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout;
    QLabel *label;
    QSpinBox *coordsPrecisionSpinBox;
    QLabel *label_2;
    QSpinBox *sfPrecisionSpinBox;
    QLabel *label_3;
    QComboBox *separatorComboBox;
    QLabel *label_4;
    QComboBox *orderComboBox;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QCheckBox *columnsHeaderCheckBox;
    QCheckBox *pointCountHeaderCheckBox;
    QGroupBox *colorOptionsGroupBox;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *saveFloatColorsCheckBox;
    QCheckBox *saveAlphaChannelCheckBox;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AsciiSaveDialog)
    {
        if (AsciiSaveDialog->objectName().isEmpty())
            AsciiSaveDialog->setObjectName(QString::fromUtf8("AsciiSaveDialog"));
        AsciiSaveDialog->resize(454, 450);
        verticalLayout_2 = new QVBoxLayout(AsciiSaveDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(AsciiSaveDialog);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        coordsPrecisionSpinBox = new QSpinBox(AsciiSaveDialog);
        coordsPrecisionSpinBox->setObjectName(QString::fromUtf8("coordsPrecisionSpinBox"));
        coordsPrecisionSpinBox->setMaximum(16);
        coordsPrecisionSpinBox->setValue(8);

        formLayout->setWidget(0, QFormLayout::FieldRole, coordsPrecisionSpinBox);

        label_2 = new QLabel(AsciiSaveDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        sfPrecisionSpinBox = new QSpinBox(AsciiSaveDialog);
        sfPrecisionSpinBox->setObjectName(QString::fromUtf8("sfPrecisionSpinBox"));
        sfPrecisionSpinBox->setMaximum(12);
        sfPrecisionSpinBox->setValue(6);

        formLayout->setWidget(1, QFormLayout::FieldRole, sfPrecisionSpinBox);

        label_3 = new QLabel(AsciiSaveDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        separatorComboBox = new QComboBox(AsciiSaveDialog);
        separatorComboBox->addItem(QString());
        separatorComboBox->addItem(QString());
        separatorComboBox->addItem(QString());
        separatorComboBox->addItem(QString());
        separatorComboBox->setObjectName(QString::fromUtf8("separatorComboBox"));

        formLayout->setWidget(2, QFormLayout::FieldRole, separatorComboBox);

        label_4 = new QLabel(AsciiSaveDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        orderComboBox = new QComboBox(AsciiSaveDialog);
        orderComboBox->addItem(QString());
        orderComboBox->addItem(QString());
        orderComboBox->setObjectName(QString::fromUtf8("orderComboBox"));

        formLayout->setWidget(3, QFormLayout::FieldRole, orderComboBox);


        verticalLayout_2->addLayout(formLayout);

        groupBox = new QGroupBox(AsciiSaveDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        columnsHeaderCheckBox = new QCheckBox(groupBox);
        columnsHeaderCheckBox->setObjectName(QString::fromUtf8("columnsHeaderCheckBox"));

        verticalLayout->addWidget(columnsHeaderCheckBox);

        pointCountHeaderCheckBox = new QCheckBox(groupBox);
        pointCountHeaderCheckBox->setObjectName(QString::fromUtf8("pointCountHeaderCheckBox"));

        verticalLayout->addWidget(pointCountHeaderCheckBox);


        verticalLayout_2->addWidget(groupBox);

        colorOptionsGroupBox = new QGroupBox(AsciiSaveDialog);
        colorOptionsGroupBox->setObjectName(QString::fromUtf8("colorOptionsGroupBox"));
        verticalLayout_3 = new QVBoxLayout(colorOptionsGroupBox);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        saveFloatColorsCheckBox = new QCheckBox(colorOptionsGroupBox);
        saveFloatColorsCheckBox->setObjectName(QString::fromUtf8("saveFloatColorsCheckBox"));

        verticalLayout_3->addWidget(saveFloatColorsCheckBox);

        saveAlphaChannelCheckBox = new QCheckBox(colorOptionsGroupBox);
        saveAlphaChannelCheckBox->setObjectName(QString::fromUtf8("saveAlphaChannelCheckBox"));

        verticalLayout_3->addWidget(saveAlphaChannelCheckBox);


        verticalLayout_2->addWidget(colorOptionsGroupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(AsciiSaveDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(AsciiSaveDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AsciiSaveDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AsciiSaveDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AsciiSaveDialog);
    } // setupUi

    void retranslateUi(QDialog *AsciiSaveDialog)
    {
        AsciiSaveDialog->setWindowTitle(QCoreApplication::translate("AsciiSaveDialog", "Save ASCII file", nullptr));
        label->setText(QCoreApplication::translate("AsciiSaveDialog", "coordinates precision", nullptr));
        label_2->setText(QCoreApplication::translate("AsciiSaveDialog", "scalar precision", nullptr));
        label_3->setText(QCoreApplication::translate("AsciiSaveDialog", "separator", nullptr));
        separatorComboBox->setItemText(0, QCoreApplication::translate("AsciiSaveDialog", "space", nullptr));
        separatorComboBox->setItemText(1, QCoreApplication::translate("AsciiSaveDialog", "semicolon", nullptr));
        separatorComboBox->setItemText(2, QCoreApplication::translate("AsciiSaveDialog", "comma", nullptr));
        separatorComboBox->setItemText(3, QCoreApplication::translate("AsciiSaveDialog", "tabulation", nullptr));

        label_4->setText(QCoreApplication::translate("AsciiSaveDialog", "order", nullptr));
        orderComboBox->setItemText(0, QCoreApplication::translate("AsciiSaveDialog", "[ASC] point, color, SF(s), normal", nullptr));
        orderComboBox->setItemText(1, QCoreApplication::translate("AsciiSaveDialog", "[PTS] point, SF(s), color, normal", nullptr));

        groupBox->setTitle(QCoreApplication::translate("AsciiSaveDialog", "Header", nullptr));
        columnsHeaderCheckBox->setText(QCoreApplication::translate("AsciiSaveDialog", "columns title", nullptr));
        pointCountHeaderCheckBox->setText(QCoreApplication::translate("AsciiSaveDialog", "number of points (separate line)", nullptr));
        colorOptionsGroupBox->setTitle(QCoreApplication::translate("AsciiSaveDialog", "Colors", nullptr));
#if QT_CONFIG(tooltip)
        saveFloatColorsCheckBox->setToolTip(QCoreApplication::translate("AsciiSaveDialog", "Save RGB color components as floats values between 0 and 1", nullptr));
#endif // QT_CONFIG(tooltip)
        saveFloatColorsCheckBox->setText(QCoreApplication::translate("AsciiSaveDialog", "Save colors as float values (0-1)", nullptr));
#if QT_CONFIG(tooltip)
        saveAlphaChannelCheckBox->setToolTip(QCoreApplication::translate("AsciiSaveDialog", "Save RGB color components as floats values between 0 and 1", nullptr));
#endif // QT_CONFIG(tooltip)
        saveAlphaChannelCheckBox->setText(QCoreApplication::translate("AsciiSaveDialog", "Save alpha channel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AsciiSaveDialog: public Ui_AsciiSaveDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAVEASCIIFILEDLG_H

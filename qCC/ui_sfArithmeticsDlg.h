/********************************************************************************
** Form generated from reading UI file 'sfArithmeticsDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SFARITHMETICSDLG_H
#define UI_SFARITHMETICSDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SFArithmeticsDlg
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *comboLabel;
    QComboBox *sf1ComboBox;
    QLabel *comboLabel_3;
    QComboBox *operationComboBox;
    QLabel *comboLabel_2;
    QComboBox *sf2ComboBox;
    QDoubleSpinBox *constantDoubleSpinBox;
    QCheckBox *updateSF1CheckBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SFArithmeticsDlg)
    {
        if (SFArithmeticsDlg->objectName().isEmpty())
            SFArithmeticsDlg->setObjectName(QString::fromUtf8("SFArithmeticsDlg"));
        SFArithmeticsDlg->resize(300, 218);
        verticalLayout = new QVBoxLayout(SFArithmeticsDlg);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        comboLabel = new QLabel(SFArithmeticsDlg);
        comboLabel->setObjectName(QString::fromUtf8("comboLabel"));
        comboLabel->setMaximumSize(QSize(80, 16777215));

        formLayout->setWidget(0, QFormLayout::LabelRole, comboLabel);

        sf1ComboBox = new QComboBox(SFArithmeticsDlg);
        sf1ComboBox->setObjectName(QString::fromUtf8("sf1ComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(sf1ComboBox->sizePolicy().hasHeightForWidth());
        sf1ComboBox->setSizePolicy(sizePolicy);

        formLayout->setWidget(0, QFormLayout::FieldRole, sf1ComboBox);

        comboLabel_3 = new QLabel(SFArithmeticsDlg);
        comboLabel_3->setObjectName(QString::fromUtf8("comboLabel_3"));
        comboLabel_3->setMaximumSize(QSize(80, 16777215));

        formLayout->setWidget(1, QFormLayout::LabelRole, comboLabel_3);

        operationComboBox = new QComboBox(SFArithmeticsDlg);
        operationComboBox->addItem(QString());
        operationComboBox->addItem(QString());
        operationComboBox->addItem(QString());
        operationComboBox->addItem(QString());
        operationComboBox->addItem(QString());
        operationComboBox->addItem(QString());
        operationComboBox->addItem(QString());
        operationComboBox->addItem(QString::fromUtf8("exp"));
        operationComboBox->addItem(QString::fromUtf8("log"));
        operationComboBox->addItem(QString::fromUtf8("log10"));
        operationComboBox->addItem(QString::fromUtf8("cos"));
        operationComboBox->addItem(QString::fromUtf8("sin"));
        operationComboBox->addItem(QString::fromUtf8("tan"));
        operationComboBox->addItem(QString::fromUtf8("acos"));
        operationComboBox->addItem(QString::fromUtf8("asin"));
        operationComboBox->addItem(QString::fromUtf8("atan"));
        operationComboBox->addItem(QString());
        operationComboBox->addItem(QString());
        operationComboBox->setObjectName(QString::fromUtf8("operationComboBox"));
        operationComboBox->setMaxVisibleItems(20);

        formLayout->setWidget(1, QFormLayout::FieldRole, operationComboBox);

        comboLabel_2 = new QLabel(SFArithmeticsDlg);
        comboLabel_2->setObjectName(QString::fromUtf8("comboLabel_2"));
        comboLabel_2->setMaximumSize(QSize(80, 16777215));

        formLayout->setWidget(2, QFormLayout::LabelRole, comboLabel_2);

        sf2ComboBox = new QComboBox(SFArithmeticsDlg);
        sf2ComboBox->setObjectName(QString::fromUtf8("sf2ComboBox"));
        sizePolicy.setHeightForWidth(sf2ComboBox->sizePolicy().hasHeightForWidth());
        sf2ComboBox->setSizePolicy(sizePolicy);

        formLayout->setWidget(2, QFormLayout::FieldRole, sf2ComboBox);

        constantDoubleSpinBox = new QDoubleSpinBox(SFArithmeticsDlg);
        constantDoubleSpinBox->setObjectName(QString::fromUtf8("constantDoubleSpinBox"));
        constantDoubleSpinBox->setEnabled(false);
        constantDoubleSpinBox->setDecimals(6);
        constantDoubleSpinBox->setMinimum(-1000000.000000000000000);
        constantDoubleSpinBox->setMaximum(1000000.000000000000000);
        constantDoubleSpinBox->setValue(1.000000000000000);

        formLayout->setWidget(3, QFormLayout::FieldRole, constantDoubleSpinBox);


        verticalLayout->addLayout(formLayout);

        updateSF1CheckBox = new QCheckBox(SFArithmeticsDlg);
        updateSF1CheckBox->setObjectName(QString::fromUtf8("updateSF1CheckBox"));

        verticalLayout->addWidget(updateSF1CheckBox);

        buttonBox = new QDialogButtonBox(SFArithmeticsDlg);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(SFArithmeticsDlg);
        QObject::connect(buttonBox, SIGNAL(accepted()), SFArithmeticsDlg, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SFArithmeticsDlg, SLOT(reject()));

        operationComboBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SFArithmeticsDlg);
    } // setupUi

    void retranslateUi(QDialog *SFArithmeticsDlg)
    {
        SFArithmeticsDlg->setWindowTitle(QCoreApplication::translate("SFArithmeticsDlg", "Scalar fields arithmetics", nullptr));
        comboLabel->setText(QCoreApplication::translate("SFArithmeticsDlg", "SF 1", nullptr));
        comboLabel_3->setText(QCoreApplication::translate("SFArithmeticsDlg", "operation", nullptr));
        operationComboBox->setItemText(0, QCoreApplication::translate("SFArithmeticsDlg", "plus", nullptr));
        operationComboBox->setItemText(1, QCoreApplication::translate("SFArithmeticsDlg", "minus", nullptr));
        operationComboBox->setItemText(2, QCoreApplication::translate("SFArithmeticsDlg", "multiply", nullptr));
        operationComboBox->setItemText(3, QCoreApplication::translate("SFArithmeticsDlg", "divided by", nullptr));
        operationComboBox->setItemText(4, QCoreApplication::translate("SFArithmeticsDlg", "square root", nullptr));
        operationComboBox->setItemText(5, QCoreApplication::translate("SFArithmeticsDlg", "power of 2", nullptr));
        operationComboBox->setItemText(6, QCoreApplication::translate("SFArithmeticsDlg", "power of 3", nullptr));
        operationComboBox->setItemText(16, QCoreApplication::translate("SFArithmeticsDlg", "integer part", nullptr));
        operationComboBox->setItemText(17, QCoreApplication::translate("SFArithmeticsDlg", "inverse (1/x)", nullptr));

        comboLabel_2->setText(QCoreApplication::translate("SFArithmeticsDlg", "SF 2", nullptr));
#if QT_CONFIG(tooltip)
        updateSF1CheckBox->setToolTip(QCoreApplication::translate("SFArithmeticsDlg", "Update the first scalar field directly (instead of creating a new SF)", nullptr));
#endif // QT_CONFIG(tooltip)
        updateSF1CheckBox->setText(QCoreApplication::translate("SFArithmeticsDlg", "Update SF1 directly", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SFArithmeticsDlg: public Ui_SFArithmeticsDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SFARITHMETICSDLG_H

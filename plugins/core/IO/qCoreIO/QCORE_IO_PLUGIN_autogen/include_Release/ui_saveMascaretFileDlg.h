/********************************************************************************
** Form generated from reading UI file 'saveMascaretFileDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAVEMASCARETFILEDLG_H
#define UI_SAVEMASCARETFILEDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_SaveMascaretFileDlg
{
public:
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *biefNameLineEdit;
    QLabel *label_2;
    QComboBox *typeComboBox;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *SaveMascaretFileDlg)
    {
        if (SaveMascaretFileDlg->objectName().isEmpty())
            SaveMascaretFileDlg->setObjectName(QString::fromUtf8("SaveMascaretFileDlg"));
        SaveMascaretFileDlg->resize(400, 99);
        formLayout = new QFormLayout(SaveMascaretFileDlg);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(SaveMascaretFileDlg);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        biefNameLineEdit = new QLineEdit(SaveMascaretFileDlg);
        biefNameLineEdit->setObjectName(QString::fromUtf8("biefNameLineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, biefNameLineEdit);

        label_2 = new QLabel(SaveMascaretFileDlg);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        typeComboBox = new QComboBox(SaveMascaretFileDlg);
        typeComboBox->addItem(QString());
        typeComboBox->addItem(QString());
        typeComboBox->setObjectName(QString::fromUtf8("typeComboBox"));

        formLayout->setWidget(1, QFormLayout::FieldRole, typeComboBox);

        buttonBox = new QDialogButtonBox(SaveMascaretFileDlg);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        formLayout->setWidget(3, QFormLayout::SpanningRole, buttonBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(2, QFormLayout::FieldRole, verticalSpacer);


        retranslateUi(SaveMascaretFileDlg);
        QObject::connect(buttonBox, SIGNAL(accepted()), SaveMascaretFileDlg, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SaveMascaretFileDlg, SLOT(reject()));

        QMetaObject::connectSlotsByName(SaveMascaretFileDlg);
    } // setupUi

    void retranslateUi(QDialog *SaveMascaretFileDlg)
    {
        SaveMascaretFileDlg->setWindowTitle(QCoreApplication::translate("SaveMascaretFileDlg", "Save Mascaret profile", nullptr));
        label->setText(QCoreApplication::translate("SaveMascaretFileDlg", "Reach/bief name", nullptr));
        biefNameLineEdit->setText(QCoreApplication::translate("SaveMascaretFileDlg", "Profile", nullptr));
        label_2->setText(QCoreApplication::translate("SaveMascaretFileDlg", "Bed type", nullptr));
        typeComboBox->setItemText(0, QCoreApplication::translate("SaveMascaretFileDlg", "B (bathy)", nullptr));
        typeComboBox->setItemText(1, QCoreApplication::translate("SaveMascaretFileDlg", "T (topo)", nullptr));

    } // retranslateUi

};

namespace Ui {
    class SaveMascaretFileDlg: public Ui_SaveMascaretFileDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAVEMASCARETFILEDLG_H

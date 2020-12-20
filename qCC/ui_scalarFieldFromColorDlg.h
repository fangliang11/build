/********************************************************************************
** Form generated from reading UI file 'scalarFieldFromColorDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCALARFIELDFROMCOLORDLG_H
#define UI_SCALARFIELDFROMCOLORDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_scalarFieldFromColorDlg
{
public:
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBoxR;
    QCheckBox *checkBoxG;
    QCheckBox *checkBoxB;
    QCheckBox *checkBoxA;
    QCheckBox *checkBoxComposite;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *scalarFieldFromColorDlg)
    {
        if (scalarFieldFromColorDlg->objectName().isEmpty())
            scalarFieldFromColorDlg->setObjectName(QString::fromUtf8("scalarFieldFromColorDlg"));
        scalarFieldFromColorDlg->resize(259, 260);
        verticalLayout = new QVBoxLayout(scalarFieldFromColorDlg);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        checkBoxR = new QCheckBox(scalarFieldFromColorDlg);
        checkBoxR->setObjectName(QString::fromUtf8("checkBoxR"));
        checkBoxR->setChecked(true);

        verticalLayout->addWidget(checkBoxR);

        checkBoxG = new QCheckBox(scalarFieldFromColorDlg);
        checkBoxG->setObjectName(QString::fromUtf8("checkBoxG"));
        checkBoxG->setChecked(true);

        verticalLayout->addWidget(checkBoxG);

        checkBoxB = new QCheckBox(scalarFieldFromColorDlg);
        checkBoxB->setObjectName(QString::fromUtf8("checkBoxB"));
        checkBoxB->setChecked(true);

        verticalLayout->addWidget(checkBoxB);

        checkBoxA = new QCheckBox(scalarFieldFromColorDlg);
        checkBoxA->setObjectName(QString::fromUtf8("checkBoxA"));

        verticalLayout->addWidget(checkBoxA);

        checkBoxComposite = new QCheckBox(scalarFieldFromColorDlg);
        checkBoxComposite->setObjectName(QString::fromUtf8("checkBoxComposite"));
        checkBoxComposite->setChecked(true);

        verticalLayout->addWidget(checkBoxComposite);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(scalarFieldFromColorDlg);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(scalarFieldFromColorDlg);
        QObject::connect(buttonBox, SIGNAL(accepted()), scalarFieldFromColorDlg, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), scalarFieldFromColorDlg, SLOT(reject()));

        QMetaObject::connectSlotsByName(scalarFieldFromColorDlg);
    } // setupUi

    void retranslateUi(QDialog *scalarFieldFromColorDlg)
    {
        scalarFieldFromColorDlg->setWindowTitle(QCoreApplication::translate("scalarFieldFromColorDlg", "SF from RGB", nullptr));
        checkBoxR->setText(QCoreApplication::translate("scalarFieldFromColorDlg", "R Channel", nullptr));
        checkBoxG->setText(QCoreApplication::translate("scalarFieldFromColorDlg", "G Channel", nullptr));
        checkBoxB->setText(QCoreApplication::translate("scalarFieldFromColorDlg", "B Channel", nullptr));
        checkBoxA->setText(QCoreApplication::translate("scalarFieldFromColorDlg", "Alpha Channel", nullptr));
        checkBoxComposite->setText(QCoreApplication::translate("scalarFieldFromColorDlg", "Composite = (R+ G+ B) / 3", nullptr));
    } // retranslateUi

};

namespace Ui {
    class scalarFieldFromColorDlg: public Ui_scalarFieldFromColorDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCALARFIELDFROMCOLORDLG_H

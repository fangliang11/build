/********************************************************************************
** Form generated from reading UI file 'roleChoiceDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROLECHOICEDLG_H
#define UI_ROLECHOICEDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RoleChoiceDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QToolButton *firstColorButton;
    QLabel *firstlabel;
    QLineEdit *firstLineEdit;
    QToolButton *secondColorButton;
    QLabel *secondlabel;
    QLineEdit *secondLineEdit;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *swapButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *RoleChoiceDialog)
    {
        if (RoleChoiceDialog->objectName().isEmpty())
            RoleChoiceDialog->setObjectName(QString::fromUtf8("RoleChoiceDialog"));
        RoleChoiceDialog->resize(350, 120);
        verticalLayout = new QVBoxLayout(RoleChoiceDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        firstColorButton = new QToolButton(RoleChoiceDialog);
        firstColorButton->setObjectName(QString::fromUtf8("firstColorButton"));
        firstColorButton->setEnabled(false);

        gridLayout->addWidget(firstColorButton, 0, 0, 1, 1);

        firstlabel = new QLabel(RoleChoiceDialog);
        firstlabel->setObjectName(QString::fromUtf8("firstlabel"));

        gridLayout->addWidget(firstlabel, 0, 1, 1, 1);

        firstLineEdit = new QLineEdit(RoleChoiceDialog);
        firstLineEdit->setObjectName(QString::fromUtf8("firstLineEdit"));
        firstLineEdit->setReadOnly(true);

        gridLayout->addWidget(firstLineEdit, 0, 2, 1, 1);

        secondColorButton = new QToolButton(RoleChoiceDialog);
        secondColorButton->setObjectName(QString::fromUtf8("secondColorButton"));
        secondColorButton->setEnabled(false);

        gridLayout->addWidget(secondColorButton, 1, 0, 1, 1);

        secondlabel = new QLabel(RoleChoiceDialog);
        secondlabel->setObjectName(QString::fromUtf8("secondlabel"));

        gridLayout->addWidget(secondlabel, 1, 1, 1, 1);

        secondLineEdit = new QLineEdit(RoleChoiceDialog);
        secondLineEdit->setObjectName(QString::fromUtf8("secondLineEdit"));
        secondLineEdit->setReadOnly(true);

        gridLayout->addWidget(secondLineEdit, 1, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        swapButton = new QPushButton(RoleChoiceDialog);
        swapButton->setObjectName(QString::fromUtf8("swapButton"));

        hboxLayout->addWidget(swapButton);

        buttonBox = new QDialogButtonBox(RoleChoiceDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        hboxLayout->addWidget(buttonBox);


        verticalLayout->addLayout(hboxLayout);


        retranslateUi(RoleChoiceDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), RoleChoiceDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), RoleChoiceDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(RoleChoiceDialog);
    } // setupUi

    void retranslateUi(QDialog *RoleChoiceDialog)
    {
        RoleChoiceDialog->setWindowTitle(QCoreApplication::translate("RoleChoiceDialog", "Choose role", nullptr));
        firstlabel->setText(QCoreApplication::translate("RoleChoiceDialog", "Compared", nullptr));
        secondlabel->setText(QCoreApplication::translate("RoleChoiceDialog", "Reference", nullptr));
        swapButton->setText(QCoreApplication::translate("RoleChoiceDialog", "Swap", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RoleChoiceDialog: public Ui_RoleChoiceDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROLECHOICEDLG_H

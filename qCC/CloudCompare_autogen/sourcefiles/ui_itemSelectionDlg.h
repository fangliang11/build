/********************************************************************************
** Form generated from reading UI file 'itemSelectionDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ITEMSELECTIONDLG_H
#define UI_ITEMSELECTIONDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ItemSelectionDlg
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QListWidget *listWidget;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ItemSelectionDlg)
    {
        if (ItemSelectionDlg->objectName().isEmpty())
            ItemSelectionDlg->setObjectName(QString::fromUtf8("ItemSelectionDlg"));
        ItemSelectionDlg->resize(400, 300);
        verticalLayout = new QVBoxLayout(ItemSelectionDlg);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(ItemSelectionDlg);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        listWidget = new QListWidget(ItemSelectionDlg);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout->addWidget(listWidget);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(ItemSelectionDlg);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ItemSelectionDlg);
        QObject::connect(buttonBox, SIGNAL(accepted()), ItemSelectionDlg, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ItemSelectionDlg, SLOT(reject()));

        QMetaObject::connectSlotsByName(ItemSelectionDlg);
    } // setupUi

    void retranslateUi(QDialog *ItemSelectionDlg)
    {
        ItemSelectionDlg->setWindowTitle(QCoreApplication::translate("ItemSelectionDlg", "Selection", nullptr));
        label->setText(QCoreApplication::translate("ItemSelectionDlg", "Please select one %1:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ItemSelectionDlg: public Ui_ItemSelectionDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ITEMSELECTIONDLG_H

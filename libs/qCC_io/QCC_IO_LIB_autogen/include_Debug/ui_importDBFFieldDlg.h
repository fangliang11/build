/********************************************************************************
** Form generated from reading UI file 'importDBFFieldDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMPORTDBFFIELDDLG_H
#define UI_IMPORTDBFFIELDDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ImportDBFFieldDlg
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QDoubleSpinBox *scaleDoubleSpinBox;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *okPushButton;
    QPushButton *ignorePushButton;

    void setupUi(QDialog *ImportDBFFieldDlg)
    {
        if (ImportDBFFieldDlg->objectName().isEmpty())
            ImportDBFFieldDlg->setObjectName(QString::fromUtf8("ImportDBFFieldDlg"));
        ImportDBFFieldDlg->resize(350, 200);
        verticalLayout = new QVBoxLayout(ImportDBFFieldDlg);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(ImportDBFFieldDlg);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        listWidget = new QListWidget(ImportDBFFieldDlg);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout->addWidget(listWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(ImportDBFFieldDlg);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        scaleDoubleSpinBox = new QDoubleSpinBox(ImportDBFFieldDlg);
        scaleDoubleSpinBox->setObjectName(QString::fromUtf8("scaleDoubleSpinBox"));
        scaleDoubleSpinBox->setDecimals(6);
        scaleDoubleSpinBox->setMinimum(-1000000000.000000000000000);
        scaleDoubleSpinBox->setMaximum(1000000000.000000000000000);
        scaleDoubleSpinBox->setValue(1.000000000000000);

        horizontalLayout->addWidget(scaleDoubleSpinBox);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        okPushButton = new QPushButton(ImportDBFFieldDlg);
        okPushButton->setObjectName(QString::fromUtf8("okPushButton"));

        horizontalLayout_2->addWidget(okPushButton);

        ignorePushButton = new QPushButton(ImportDBFFieldDlg);
        ignorePushButton->setObjectName(QString::fromUtf8("ignorePushButton"));

        horizontalLayout_2->addWidget(ignorePushButton);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(ImportDBFFieldDlg);
        QObject::connect(okPushButton, SIGNAL(clicked()), ImportDBFFieldDlg, SLOT(accept()));
        QObject::connect(ignorePushButton, SIGNAL(clicked()), ImportDBFFieldDlg, SLOT(reject()));
        QObject::connect(listWidget, SIGNAL(itemClicked(QListWidgetItem*)), okPushButton, SLOT(show()));

        QMetaObject::connectSlotsByName(ImportDBFFieldDlg);
    } // setupUi

    void retranslateUi(QDialog *ImportDBFFieldDlg)
    {
        ImportDBFFieldDlg->setWindowTitle(QCoreApplication::translate("ImportDBFFieldDlg", "Choose altitude field", nullptr));
        label->setText(QCoreApplication::translate("ImportDBFFieldDlg", "Do you wish to use one of the DBF field as altitude?", nullptr));
        label_2->setText(QCoreApplication::translate("ImportDBFFieldDlg", "Values scaling", nullptr));
        okPushButton->setText(QCoreApplication::translate("ImportDBFFieldDlg", "OK", nullptr));
        ignorePushButton->setText(QCoreApplication::translate("ImportDBFFieldDlg", "Ignore", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ImportDBFFieldDlg: public Ui_ImportDBFFieldDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMPORTDBFFIELDDLG_H

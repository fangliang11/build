/********************************************************************************
** Form generated from reading UI file 'filterByValueDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILTERBYVALUEDLG_H
#define UI_FILTERBYVALUEDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_FilterByValueDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDoubleSpinBox *minDoubleSpinBox;
    QLabel *label_2;
    QDoubleSpinBox *maxDoubleSpinBox;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *exportPushButton;
    QPushButton *splitPushButton;
    QPushButton *cancelPushButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *FilterByValueDialog)
    {
        if (FilterByValueDialog->objectName().isEmpty())
            FilterByValueDialog->setObjectName(QString::fromUtf8("FilterByValueDialog"));
        FilterByValueDialog->resize(432, 99);
        verticalLayout = new QVBoxLayout(FilterByValueDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(FilterByValueDialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        minDoubleSpinBox = new QDoubleSpinBox(FilterByValueDialog);
        minDoubleSpinBox->setObjectName(QString::fromUtf8("minDoubleSpinBox"));
        minDoubleSpinBox->setDecimals(8);
        minDoubleSpinBox->setMinimum(-1000000000.000000000000000);
        minDoubleSpinBox->setMaximum(1000000000.000000000000000);

        horizontalLayout->addWidget(minDoubleSpinBox);

        label_2 = new QLabel(FilterByValueDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setText(QString::fromUtf8("-"));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_2);

        maxDoubleSpinBox = new QDoubleSpinBox(FilterByValueDialog);
        maxDoubleSpinBox->setObjectName(QString::fromUtf8("maxDoubleSpinBox"));
        maxDoubleSpinBox->setDecimals(8);
        maxDoubleSpinBox->setMinimum(-1000000000.000000000000000);
        maxDoubleSpinBox->setMaximum(1000000000.000000000000000);

        horizontalLayout->addWidget(maxDoubleSpinBox);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        exportPushButton = new QPushButton(FilterByValueDialog);
        exportPushButton->setObjectName(QString::fromUtf8("exportPushButton"));

        horizontalLayout_2->addWidget(exportPushButton);

        splitPushButton = new QPushButton(FilterByValueDialog);
        splitPushButton->setObjectName(QString::fromUtf8("splitPushButton"));

        horizontalLayout_2->addWidget(splitPushButton);

        cancelPushButton = new QPushButton(FilterByValueDialog);
        cancelPushButton->setObjectName(QString::fromUtf8("cancelPushButton"));

        horizontalLayout_2->addWidget(cancelPushButton);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 2, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(FilterByValueDialog);
        QObject::connect(cancelPushButton, SIGNAL(clicked()), FilterByValueDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(FilterByValueDialog);
    } // setupUi

    void retranslateUi(QDialog *FilterByValueDialog)
    {
        FilterByValueDialog->setWindowTitle(QCoreApplication::translate("FilterByValueDialog", "Filter by value", nullptr));
        label->setText(QCoreApplication::translate("FilterByValueDialog", "Range", nullptr));
#if QT_CONFIG(tooltip)
        minDoubleSpinBox->setToolTip(QCoreApplication::translate("FilterByValueDialog", "Min range value", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        maxDoubleSpinBox->setToolTip(QCoreApplication::translate("FilterByValueDialog", "Max range value", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        exportPushButton->setToolTip(QCoreApplication::translate("FilterByValueDialog", "Exports the points falling inside the specified range.", nullptr));
#endif // QT_CONFIG(tooltip)
        exportPushButton->setText(QCoreApplication::translate("FilterByValueDialog", "Export", nullptr));
#if QT_CONFIG(tooltip)
        splitPushButton->setToolTip(QCoreApplication::translate("FilterByValueDialog", "Creates two clouds: one with the points falling inside the specified range,\n"
"the other with the points falling outside.", nullptr));
#endif // QT_CONFIG(tooltip)
        splitPushButton->setText(QCoreApplication::translate("FilterByValueDialog", "Split", nullptr));
        cancelPushButton->setText(QCoreApplication::translate("FilterByValueDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FilterByValueDialog: public Ui_FilterByValueDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILTERBYVALUEDLG_H

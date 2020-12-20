/********************************************************************************
** Form generated from reading UI file 'tracePolylineDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRACEPOLYLINEDLG_H
#define UI_TRACEPOLYLINEDLG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_TracePolyLineDlg
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QSpinBox *widthSpinBox;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label;
    QSpinBox *snapSizeSpinBox;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QSpinBox *oversampleSpinBox;
    QSpacerItem *horizontalSpacer;
    QToolButton *saveToolButton;
    QToolButton *resetToolButton;
    QToolButton *continueToolButton;
    QToolButton *validButton;
    QToolButton *cancelButton;

    void setupUi(QDialog *TracePolyLineDlg)
    {
        if (TracePolyLineDlg->objectName().isEmpty())
            TracePolyLineDlg->setObjectName(QString::fromUtf8("TracePolyLineDlg"));
        TracePolyLineDlg->resize(495, 30);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TracePolyLineDlg->sizePolicy().hasHeightForWidth());
        TracePolyLineDlg->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(TracePolyLineDlg);
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(2, 2, 2, 2);
        label_3 = new QLabel(TracePolyLineDlg);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        widthSpinBox = new QSpinBox(TracePolyLineDlg);
        widthSpinBox->setObjectName(QString::fromUtf8("widthSpinBox"));
        widthSpinBox->setMinimum(1);
        widthSpinBox->setMaximum(10);
        widthSpinBox->setValue(1);

        horizontalLayout->addWidget(widthSpinBox);

        horizontalSpacer_3 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        label = new QLabel(TracePolyLineDlg);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label);

        snapSizeSpinBox = new QSpinBox(TracePolyLineDlg);
        snapSizeSpinBox->setObjectName(QString::fromUtf8("snapSizeSpinBox"));
        snapSizeSpinBox->setMinimum(1);
        snapSizeSpinBox->setMaximum(100);

        horizontalLayout->addWidget(snapSizeSpinBox);

        horizontalSpacer_2 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        label_2 = new QLabel(TracePolyLineDlg);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        oversampleSpinBox = new QSpinBox(TracePolyLineDlg);
        oversampleSpinBox->setObjectName(QString::fromUtf8("oversampleSpinBox"));
        oversampleSpinBox->setMinimum(1);
        oversampleSpinBox->setMaximum(100);

        horizontalLayout->addWidget(oversampleSpinBox);

        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        saveToolButton = new QToolButton(TracePolyLineDlg);
        saveToolButton->setObjectName(QString::fromUtf8("saveToolButton"));
        saveToolButton->setEnabled(false);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/CC/images/dbContainerSymbol.png"), QSize(), QIcon::Normal, QIcon::Off);
        saveToolButton->setIcon(icon);

        horizontalLayout->addWidget(saveToolButton);

        resetToolButton = new QToolButton(TracePolyLineDlg);
        resetToolButton->setObjectName(QString::fromUtf8("resetToolButton"));
        resetToolButton->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/CC/images/smallReset.png"), QSize(), QIcon::Normal, QIcon::Off);
        resetToolButton->setIcon(icon1);

        horizontalLayout->addWidget(resetToolButton);

        continueToolButton = new QToolButton(TracePolyLineDlg);
        continueToolButton->setObjectName(QString::fromUtf8("continueToolButton"));
        continueToolButton->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/CC/images/ccAddConstSF.png"), QSize(), QIcon::Normal, QIcon::Off);
        continueToolButton->setIcon(icon2);

        horizontalLayout->addWidget(continueToolButton);

        validButton = new QToolButton(TracePolyLineDlg);
        validButton->setObjectName(QString::fromUtf8("validButton"));
        validButton->setEnabled(false);
        sizePolicy.setHeightForWidth(validButton->sizePolicy().hasHeightForWidth());
        validButton->setSizePolicy(sizePolicy);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/CC/images/smallValidate.png"), QSize(), QIcon::Normal, QIcon::Off);
        validButton->setIcon(icon3);

        horizontalLayout->addWidget(validButton);

        cancelButton = new QToolButton(TracePolyLineDlg);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        sizePolicy.setHeightForWidth(cancelButton->sizePolicy().hasHeightForWidth());
        cancelButton->setSizePolicy(sizePolicy);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/CC/images/smallCancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        cancelButton->setIcon(icon4);

        horizontalLayout->addWidget(cancelButton);


        retranslateUi(TracePolyLineDlg);

        QMetaObject::connectSlotsByName(TracePolyLineDlg);
    } // setupUi

    void retranslateUi(QDialog *TracePolyLineDlg)
    {
        TracePolyLineDlg->setWindowTitle(QCoreApplication::translate("TracePolyLineDlg", "Segmentation", nullptr));
        label_3->setText(QCoreApplication::translate("TracePolyLineDlg", "Width", nullptr));
        label->setText(QCoreApplication::translate("TracePolyLineDlg", "Snap size", nullptr));
        label_2->setText(QCoreApplication::translate("TracePolyLineDlg", "Oversample", nullptr));
#if QT_CONFIG(tooltip)
        saveToolButton->setToolTip(QCoreApplication::translate("TracePolyLineDlg", "Export current polyline to the main DB", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        resetToolButton->setToolTip(QCoreApplication::translate("TracePolyLineDlg", "Reset current polyline", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        continueToolButton->setToolTip(QCoreApplication::translate("TracePolyLineDlg", "Continue the current polyline edition", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        continueToolButton->setShortcut(QCoreApplication::translate("TracePolyLineDlg", "C", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        validButton->setToolTip(QCoreApplication::translate("TracePolyLineDlg", "Confirm polyline creation and exit", nullptr));
#endif // QT_CONFIG(tooltip)
        validButton->setText(QCoreApplication::translate("TracePolyLineDlg", "OK", nullptr));
#if QT_CONFIG(tooltip)
        cancelButton->setToolTip(QCoreApplication::translate("TracePolyLineDlg", "Cancel", nullptr));
#endif // QT_CONFIG(tooltip)
        cancelButton->setText(QCoreApplication::translate("TracePolyLineDlg", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TracePolyLineDlg: public Ui_TracePolyLineDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRACEPOLYLINEDLG_H

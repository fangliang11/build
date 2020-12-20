/********************************************************************************
** Form generated from reading UI file 'histogramDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HISTOGRAMDLG_H
#define UI_HISTOGRAMDLG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_HistogramDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QFrame *histoFrame;
    QFrame *buttonsFrame;
    QVBoxLayout *verticalLayout;
    QToolButton *exportCSVToolButton;
    QToolButton *exportImageToolButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *HistogramDialog)
    {
        if (HistogramDialog->objectName().isEmpty())
            HistogramDialog->setObjectName(QString::fromUtf8("HistogramDialog"));
        HistogramDialog->resize(800, 600);
        HistogramDialog->setStyleSheet(QString::fromUtf8("QDialog { background-color: white; }"));
        horizontalLayout = new QHBoxLayout(HistogramDialog);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(3, 0, 0, 0);
        histoFrame = new QFrame(HistogramDialog);
        histoFrame->setObjectName(QString::fromUtf8("histoFrame"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(histoFrame->sizePolicy().hasHeightForWidth());
        histoFrame->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(histoFrame);

        buttonsFrame = new QFrame(HistogramDialog);
        buttonsFrame->setObjectName(QString::fromUtf8("buttonsFrame"));
        verticalLayout = new QVBoxLayout(buttonsFrame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 6, 6, 6);
        exportCSVToolButton = new QToolButton(buttonsFrame);
        exportCSVToolButton->setObjectName(QString::fromUtf8("exportCSVToolButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/CC/images/smallCSVFile.png"), QSize(), QIcon::Normal, QIcon::Off);
        exportCSVToolButton->setIcon(icon);

        verticalLayout->addWidget(exportCSVToolButton);

        exportImageToolButton = new QToolButton(buttonsFrame);
        exportImageToolButton->setObjectName(QString::fromUtf8("exportImageToolButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/CC/images/dbImageSymbol.png"), QSize(), QIcon::Normal, QIcon::Off);
        exportImageToolButton->setIcon(icon1);

        verticalLayout->addWidget(exportImageToolButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addWidget(buttonsFrame);


        retranslateUi(HistogramDialog);

        QMetaObject::connectSlotsByName(HistogramDialog);
    } // setupUi

    void retranslateUi(QDialog *HistogramDialog)
    {
        HistogramDialog->setWindowTitle(QCoreApplication::translate("HistogramDialog", "Histogram", nullptr));
#if QT_CONFIG(tooltip)
        exportCSVToolButton->setToolTip(QCoreApplication::translate("HistogramDialog", "Export histogram to a CSV file (can be imported into Excel ;)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        exportImageToolButton->setToolTip(QCoreApplication::translate("HistogramDialog", "Export histogram to an image file", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class HistogramDialog: public Ui_HistogramDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HISTOGRAMDLG_H

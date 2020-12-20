/********************************************************************************
** Form generated from reading UI file 'exportCoordToSFDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPORTCOORDTOSFDLG_H
#define UI_EXPORTCOORDTOSFDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ExportCoordToSFDlg
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QCheckBox *xCheckBox;
    QCheckBox *yCheckBox;
    QCheckBox *zCheckBox;
    QLabel *warningLabel;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ExportCoordToSFDlg)
    {
        if (ExportCoordToSFDlg->objectName().isEmpty())
            ExportCoordToSFDlg->setObjectName(QString::fromUtf8("ExportCoordToSFDlg"));
        ExportCoordToSFDlg->resize(450, 130);
        verticalLayout = new QVBoxLayout(ExportCoordToSFDlg);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new QFrame(ExportCoordToSFDlg);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        xCheckBox = new QCheckBox(frame);
        xCheckBox->setObjectName(QString::fromUtf8("xCheckBox"));
        xCheckBox->setText(QString::fromUtf8("X"));

        horizontalLayout->addWidget(xCheckBox);

        yCheckBox = new QCheckBox(frame);
        yCheckBox->setObjectName(QString::fromUtf8("yCheckBox"));
        yCheckBox->setText(QString::fromUtf8("Y"));

        horizontalLayout->addWidget(yCheckBox);

        zCheckBox = new QCheckBox(frame);
        zCheckBox->setObjectName(QString::fromUtf8("zCheckBox"));
        zCheckBox->setText(QString::fromUtf8("Z"));
        zCheckBox->setChecked(true);

        horizontalLayout->addWidget(zCheckBox);


        verticalLayout->addWidget(frame);

        warningLabel = new QLabel(ExportCoordToSFDlg);
        warningLabel->setObjectName(QString::fromUtf8("warningLabel"));
        QFont font;
        font.setItalic(true);
        warningLabel->setFont(font);
        warningLabel->setStyleSheet(QString::fromUtf8("color: red;"));
        warningLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(warningLabel);

        buttonBox = new QDialogButtonBox(ExportCoordToSFDlg);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ExportCoordToSFDlg);
        QObject::connect(buttonBox, SIGNAL(accepted()), ExportCoordToSFDlg, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ExportCoordToSFDlg, SLOT(reject()));

        QMetaObject::connectSlotsByName(ExportCoordToSFDlg);
    } // setupUi

    void retranslateUi(QDialog *ExportCoordToSFDlg)
    {
        ExportCoordToSFDlg->setWindowTitle(QCoreApplication::translate("ExportCoordToSFDlg", "Export coordinates to SF", nullptr));
        label->setText(QCoreApplication::translate("ExportCoordToSFDlg", "Export", nullptr));
        warningLabel->setText(QCoreApplication::translate("ExportCoordToSFDlg", "Warning, already existing SF(s) with same name will be overwritten", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExportCoordToSFDlg: public Ui_ExportCoordToSFDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPORTCOORDTOSFDLG_H

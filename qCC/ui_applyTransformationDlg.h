/********************************************************************************
** Form generated from reading UI file 'applyTransformationDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPLYTRANSFORMATIONDLG_H
#define UI_APPLYTRANSFORMATIONDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ApplyTransformationDialog
{
public:
    QVBoxLayout *verticalLayout_4;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QToolButton *fromFileToolButton;
    QToolButton *fromClipboardToolButton;
    QToolButton *fromDipDipDirToolButton;
    QToolButton *helpToolButton;
    QPlainTextEdit *helpTextEdit;
    QPlainTextEdit *matrixTextEdit;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *rotAxisGroupBox;
    QHBoxLayout *horizontalLayout_2;
    QDoubleSpinBox *rxAxisDoubleSpinBox;
    QDoubleSpinBox *ryAxisDoubleSpinBox;
    QDoubleSpinBox *rzAxisDoubleSpinBox;
    QGroupBox *rotAngleGroupBox;
    QHBoxLayout *horizontalLayout_3;
    QDoubleSpinBox *rAngleDoubleSpinBox;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *transGroupBox;
    QHBoxLayout *horizontalLayout_4;
    QDoubleSpinBox *txAxisDoubleSpinBox;
    QDoubleSpinBox *tyAxisDoubleSpinBox;
    QDoubleSpinBox *tzAxisDoubleSpinBox;
    QSpacerItem *verticalSpacer;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *eulerAnglesGroupBox;
    QHBoxLayout *horizontalLayout_6;
    QDoubleSpinBox *ePhiDoubleSpinBox;
    QDoubleSpinBox *eThetaDoubleSpinBox;
    QDoubleSpinBox *ePsiDoubleSpinBox;
    QGroupBox *eulerTransGroupBox;
    QHBoxLayout *horizontalLayout_5;
    QDoubleSpinBox *etxAxisDoubleSpinBox;
    QDoubleSpinBox *etyAxisDoubleSpinBox;
    QDoubleSpinBox *etzAxisDoubleSpinBox;
    QSpacerItem *verticalSpacer_2;
    QCheckBox *inverseCheckBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ApplyTransformationDialog)
    {
        if (ApplyTransformationDialog->objectName().isEmpty())
            ApplyTransformationDialog->setObjectName(QString::fromUtf8("ApplyTransformationDialog"));
        ApplyTransformationDialog->resize(687, 415);
        verticalLayout_4 = new QVBoxLayout(ApplyTransformationDialog);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        tabWidget = new QTabWidget(ApplyTransformationDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout = new QVBoxLayout(tab);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        fromFileToolButton = new QToolButton(tab);
        fromFileToolButton->setObjectName(QString::fromUtf8("fromFileToolButton"));

        horizontalLayout->addWidget(fromFileToolButton);

        fromClipboardToolButton = new QToolButton(tab);
        fromClipboardToolButton->setObjectName(QString::fromUtf8("fromClipboardToolButton"));

        horizontalLayout->addWidget(fromClipboardToolButton);

        fromDipDipDirToolButton = new QToolButton(tab);
        fromDipDipDirToolButton->setObjectName(QString::fromUtf8("fromDipDipDirToolButton"));

        horizontalLayout->addWidget(fromDipDipDirToolButton);

        helpToolButton = new QToolButton(tab);
        helpToolButton->setObjectName(QString::fromUtf8("helpToolButton"));
        helpToolButton->setCheckable(true);

        horizontalLayout->addWidget(helpToolButton);


        verticalLayout->addLayout(horizontalLayout);

        helpTextEdit = new QPlainTextEdit(tab);
        helpTextEdit->setObjectName(QString::fromUtf8("helpTextEdit"));
        helpTextEdit->setMinimumSize(QSize(0, 150));
        helpTextEdit->setMaximumSize(QSize(16777215, 150));
        QPalette palette;
        QBrush brush(QColor(202, 202, 202, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        QBrush brush1(QColor(212, 208, 200, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        helpTextEdit->setPalette(palette);
        helpTextEdit->setReadOnly(true);

        verticalLayout->addWidget(helpTextEdit);

        matrixTextEdit = new QPlainTextEdit(tab);
        matrixTextEdit->setObjectName(QString::fromUtf8("matrixTextEdit"));
        matrixTextEdit->setLineWrapMode(QPlainTextEdit::NoWrap);
        matrixTextEdit->setPlainText(QString::fromUtf8("1.000000	0.000000	0.000000	0.000000\n"
"0.000000	1.000000	0.000000	0.000000\n"
"0.000000	0.000000	1.000000	0.000000\n"
"0.000000	0.000000	0.000000	1.000000"));

        verticalLayout->addWidget(matrixTextEdit);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_2 = new QVBoxLayout(tab_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        rotAxisGroupBox = new QGroupBox(tab_2);
        rotAxisGroupBox->setObjectName(QString::fromUtf8("rotAxisGroupBox"));
        rotAxisGroupBox->setFlat(true);
        horizontalLayout_2 = new QHBoxLayout(rotAxisGroupBox);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, -1, 0, -1);
        rxAxisDoubleSpinBox = new QDoubleSpinBox(rotAxisGroupBox);
        rxAxisDoubleSpinBox->setObjectName(QString::fromUtf8("rxAxisDoubleSpinBox"));
        rxAxisDoubleSpinBox->setPrefix(QString::fromUtf8("X: "));
        rxAxisDoubleSpinBox->setDecimals(8);
        rxAxisDoubleSpinBox->setMinimum(-1000000000.000000000000000);
        rxAxisDoubleSpinBox->setMaximum(1000000000.000000000000000);

        horizontalLayout_2->addWidget(rxAxisDoubleSpinBox);

        ryAxisDoubleSpinBox = new QDoubleSpinBox(rotAxisGroupBox);
        ryAxisDoubleSpinBox->setObjectName(QString::fromUtf8("ryAxisDoubleSpinBox"));
        ryAxisDoubleSpinBox->setPrefix(QString::fromUtf8("Y: "));
        ryAxisDoubleSpinBox->setDecimals(8);
        ryAxisDoubleSpinBox->setMinimum(-1000000000.000000000000000);
        ryAxisDoubleSpinBox->setMaximum(1000000000.000000000000000);

        horizontalLayout_2->addWidget(ryAxisDoubleSpinBox);

        rzAxisDoubleSpinBox = new QDoubleSpinBox(rotAxisGroupBox);
        rzAxisDoubleSpinBox->setObjectName(QString::fromUtf8("rzAxisDoubleSpinBox"));
        rzAxisDoubleSpinBox->setPrefix(QString::fromUtf8("Z: "));
        rzAxisDoubleSpinBox->setDecimals(8);
        rzAxisDoubleSpinBox->setMinimum(-1000000000.000000000000000);
        rzAxisDoubleSpinBox->setMaximum(1000000000.000000000000000);

        horizontalLayout_2->addWidget(rzAxisDoubleSpinBox);


        verticalLayout_2->addWidget(rotAxisGroupBox);

        rotAngleGroupBox = new QGroupBox(tab_2);
        rotAngleGroupBox->setObjectName(QString::fromUtf8("rotAngleGroupBox"));
        rotAngleGroupBox->setFlat(true);
        horizontalLayout_3 = new QHBoxLayout(rotAngleGroupBox);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, -1, 0, -1);
        rAngleDoubleSpinBox = new QDoubleSpinBox(rotAngleGroupBox);
        rAngleDoubleSpinBox->setObjectName(QString::fromUtf8("rAngleDoubleSpinBox"));
        rAngleDoubleSpinBox->setDecimals(4);
        rAngleDoubleSpinBox->setMinimum(-1000000000.000000000000000);
        rAngleDoubleSpinBox->setMaximum(1000000000.000000000000000);

        horizontalLayout_3->addWidget(rAngleDoubleSpinBox);

        horizontalSpacer_2 = new QSpacerItem(247, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout_2->addWidget(rotAngleGroupBox);

        transGroupBox = new QGroupBox(tab_2);
        transGroupBox->setObjectName(QString::fromUtf8("transGroupBox"));
        transGroupBox->setFlat(true);
        horizontalLayout_4 = new QHBoxLayout(transGroupBox);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, -1, 0, -1);
        txAxisDoubleSpinBox = new QDoubleSpinBox(transGroupBox);
        txAxisDoubleSpinBox->setObjectName(QString::fromUtf8("txAxisDoubleSpinBox"));
        txAxisDoubleSpinBox->setPrefix(QString::fromUtf8("X: "));
        txAxisDoubleSpinBox->setDecimals(8);
        txAxisDoubleSpinBox->setMinimum(-1000000000.000000000000000);
        txAxisDoubleSpinBox->setMaximum(1000000000.000000000000000);

        horizontalLayout_4->addWidget(txAxisDoubleSpinBox);

        tyAxisDoubleSpinBox = new QDoubleSpinBox(transGroupBox);
        tyAxisDoubleSpinBox->setObjectName(QString::fromUtf8("tyAxisDoubleSpinBox"));
        tyAxisDoubleSpinBox->setPrefix(QString::fromUtf8("Y: "));
        tyAxisDoubleSpinBox->setDecimals(8);
        tyAxisDoubleSpinBox->setMinimum(-1000000000.000000000000000);
        tyAxisDoubleSpinBox->setMaximum(1000000000.000000000000000);

        horizontalLayout_4->addWidget(tyAxisDoubleSpinBox);

        tzAxisDoubleSpinBox = new QDoubleSpinBox(transGroupBox);
        tzAxisDoubleSpinBox->setObjectName(QString::fromUtf8("tzAxisDoubleSpinBox"));
        tzAxisDoubleSpinBox->setPrefix(QString::fromUtf8("Z: "));
        tzAxisDoubleSpinBox->setDecimals(8);
        tzAxisDoubleSpinBox->setMinimum(-1000000000.000000000000000);
        tzAxisDoubleSpinBox->setMaximum(1000000000.000000000000000);

        horizontalLayout_4->addWidget(tzAxisDoubleSpinBox);


        verticalLayout_2->addWidget(transGroupBox);

        verticalSpacer = new QSpacerItem(20, 73, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        verticalLayout_3 = new QVBoxLayout(tab_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        eulerAnglesGroupBox = new QGroupBox(tab_3);
        eulerAnglesGroupBox->setObjectName(QString::fromUtf8("eulerAnglesGroupBox"));
        eulerAnglesGroupBox->setFlat(true);
        horizontalLayout_6 = new QHBoxLayout(eulerAnglesGroupBox);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, -1, 0, -1);
        ePhiDoubleSpinBox = new QDoubleSpinBox(eulerAnglesGroupBox);
        ePhiDoubleSpinBox->setObjectName(QString::fromUtf8("ePhiDoubleSpinBox"));
        ePhiDoubleSpinBox->setPrefix(QString::fromUtf8("Phi: "));
        ePhiDoubleSpinBox->setDecimals(8);
        ePhiDoubleSpinBox->setMinimum(-1000000000.000000000000000);
        ePhiDoubleSpinBox->setMaximum(1000000000.000000000000000);

        horizontalLayout_6->addWidget(ePhiDoubleSpinBox);

        eThetaDoubleSpinBox = new QDoubleSpinBox(eulerAnglesGroupBox);
        eThetaDoubleSpinBox->setObjectName(QString::fromUtf8("eThetaDoubleSpinBox"));
        eThetaDoubleSpinBox->setPrefix(QString::fromUtf8("Theta: "));
        eThetaDoubleSpinBox->setDecimals(8);
        eThetaDoubleSpinBox->setMinimum(-1000000000.000000000000000);
        eThetaDoubleSpinBox->setMaximum(1000000000.000000000000000);

        horizontalLayout_6->addWidget(eThetaDoubleSpinBox);

        ePsiDoubleSpinBox = new QDoubleSpinBox(eulerAnglesGroupBox);
        ePsiDoubleSpinBox->setObjectName(QString::fromUtf8("ePsiDoubleSpinBox"));
        ePsiDoubleSpinBox->setPrefix(QString::fromUtf8("Psi: "));
        ePsiDoubleSpinBox->setDecimals(8);
        ePsiDoubleSpinBox->setMinimum(-1000000000.000000000000000);
        ePsiDoubleSpinBox->setMaximum(1000000000.000000000000000);

        horizontalLayout_6->addWidget(ePsiDoubleSpinBox);


        verticalLayout_3->addWidget(eulerAnglesGroupBox);

        eulerTransGroupBox = new QGroupBox(tab_3);
        eulerTransGroupBox->setObjectName(QString::fromUtf8("eulerTransGroupBox"));
        eulerTransGroupBox->setFlat(true);
        horizontalLayout_5 = new QHBoxLayout(eulerTransGroupBox);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, -1, 0, -1);
        etxAxisDoubleSpinBox = new QDoubleSpinBox(eulerTransGroupBox);
        etxAxisDoubleSpinBox->setObjectName(QString::fromUtf8("etxAxisDoubleSpinBox"));
        etxAxisDoubleSpinBox->setPrefix(QString::fromUtf8("X: "));
        etxAxisDoubleSpinBox->setDecimals(8);
        etxAxisDoubleSpinBox->setMinimum(-1000000000.000000000000000);
        etxAxisDoubleSpinBox->setMaximum(1000000000.000000000000000);

        horizontalLayout_5->addWidget(etxAxisDoubleSpinBox);

        etyAxisDoubleSpinBox = new QDoubleSpinBox(eulerTransGroupBox);
        etyAxisDoubleSpinBox->setObjectName(QString::fromUtf8("etyAxisDoubleSpinBox"));
        etyAxisDoubleSpinBox->setPrefix(QString::fromUtf8("Y: "));
        etyAxisDoubleSpinBox->setDecimals(8);
        etyAxisDoubleSpinBox->setMinimum(-1000000000.000000000000000);
        etyAxisDoubleSpinBox->setMaximum(1000000000.000000000000000);

        horizontalLayout_5->addWidget(etyAxisDoubleSpinBox);

        etzAxisDoubleSpinBox = new QDoubleSpinBox(eulerTransGroupBox);
        etzAxisDoubleSpinBox->setObjectName(QString::fromUtf8("etzAxisDoubleSpinBox"));
        etzAxisDoubleSpinBox->setPrefix(QString::fromUtf8("Z: "));
        etzAxisDoubleSpinBox->setDecimals(8);
        etzAxisDoubleSpinBox->setMinimum(-1000000000.000000000000000);
        etzAxisDoubleSpinBox->setMaximum(1000000000.000000000000000);

        horizontalLayout_5->addWidget(etzAxisDoubleSpinBox);


        verticalLayout_3->addWidget(eulerTransGroupBox);

        verticalSpacer_2 = new QSpacerItem(20, 139, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        tabWidget->addTab(tab_3, QString());

        verticalLayout_4->addWidget(tabWidget);

        inverseCheckBox = new QCheckBox(ApplyTransformationDialog);
        inverseCheckBox->setObjectName(QString::fromUtf8("inverseCheckBox"));

        verticalLayout_4->addWidget(inverseCheckBox);

        buttonBox = new QDialogButtonBox(ApplyTransformationDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok|QDialogButtonBox::Reset);

        verticalLayout_4->addWidget(buttonBox);


        retranslateUi(ApplyTransformationDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), ApplyTransformationDialog, SLOT(reject()));
        QObject::connect(helpToolButton, SIGNAL(toggled(bool)), helpTextEdit, SLOT(setVisible(bool)));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ApplyTransformationDialog);
    } // setupUi

    void retranslateUi(QDialog *ApplyTransformationDialog)
    {
        ApplyTransformationDialog->setWindowTitle(QCoreApplication::translate("ApplyTransformationDialog", "Apply transformation", nullptr));
        label->setText(QCoreApplication::translate("ApplyTransformationDialog", "Enter 4x4 matrix values:", nullptr));
#if QT_CONFIG(tooltip)
        fromFileToolButton->setToolTip(QCoreApplication::translate("ApplyTransformationDialog", "Load matrix from ascii file", nullptr));
#endif // QT_CONFIG(tooltip)
        fromFileToolButton->setText(QCoreApplication::translate("ApplyTransformationDialog", "ASCII file", nullptr));
#if QT_CONFIG(tooltip)
        fromClipboardToolButton->setToolTip(QCoreApplication::translate("ApplyTransformationDialog", "Paste clipboard contents", nullptr));
#endif // QT_CONFIG(tooltip)
        fromClipboardToolButton->setText(QCoreApplication::translate("ApplyTransformationDialog", "clipboard", nullptr));
#if QT_CONFIG(tooltip)
        fromDipDipDirToolButton->setToolTip(QCoreApplication::translate("ApplyTransformationDialog", "Inits the matrix from dip/dip direction values\n"
"--> assuming an initial position of (0,0)", nullptr));
#endif // QT_CONFIG(tooltip)
        fromDipDipDirToolButton->setText(QCoreApplication::translate("ApplyTransformationDialog", "dip / dip direction", nullptr));
        helpToolButton->setText(QCoreApplication::translate("ApplyTransformationDialog", "help", nullptr));
        helpTextEdit->setPlainText(QCoreApplication::translate("ApplyTransformationDialog", "Matrix should be of the form:\n"
"R11   R12   R13   Tx\n"
"R21   R22   R23   Ty\n"
"R31   R32   R33   Tz\n"
"0       0        0       1\n"
"\n"
"Where R is a standard 3x3 rotation matrix and T is a translation vector.\n"
"\n"
"Let P be a 3D point, the transformed point P' will be such that: P' = R.P + T.", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("ApplyTransformationDialog", "Matrix 4x4", nullptr));
        rotAxisGroupBox->setTitle(QCoreApplication::translate("ApplyTransformationDialog", "Rotation axis", nullptr));
        rotAngleGroupBox->setTitle(QCoreApplication::translate("ApplyTransformationDialog", "Rotation angle (degrees)", nullptr));
        rAngleDoubleSpinBox->setSuffix(QCoreApplication::translate("ApplyTransformationDialog", " deg.", nullptr));
        transGroupBox->setTitle(QCoreApplication::translate("ApplyTransformationDialog", "Translation", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("ApplyTransformationDialog", "Axis, Angle", nullptr));
        eulerAnglesGroupBox->setTitle(QCoreApplication::translate("ApplyTransformationDialog", "Angles", nullptr));
        eulerTransGroupBox->setTitle(QCoreApplication::translate("ApplyTransformationDialog", "Translation", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("ApplyTransformationDialog", "Euler angles", nullptr));
        inverseCheckBox->setText(QCoreApplication::translate("ApplyTransformationDialog", "Apply inverse transformation", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ApplyTransformationDialog: public Ui_ApplyTransformationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPLYTRANSFORMATIONDLG_H
